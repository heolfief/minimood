/**
 * \file note.c
 * \brief Note data structure and function implementation.
 *
 *
 * Here are implemented the data structure of a note, and the related functions
 */

#include "audio_core/note/note.h"

void note_on(Note *n) {
	n->lifetime = 0;
	n->deathtime = 0;
	n->env_amp = 0;
	n->master_onoff = ON;
	n->onoff = ON;
}

void note_off(Note *n) {
	n->onoff = OFF;
	n->midi_note = 0;
	n->deathtime = n->lifetime;
}

uint16_t note_get_next_sample(Note *n, const Envelope *env) {
	uint16_t sample = 0;
	uint8_t number_of_active_osc = 0;

	// Mix the 3 oscillators
	if (n->osc1.onoff != OFF) {
		number_of_active_osc++;
		sample += osc_get_next_sample(&n->osc1);
	}
	if (n->osc2.onoff != OFF) {
		number_of_active_osc++;
		sample += osc_get_next_sample(&n->osc2);
	}
	if (n->osc3.onoff != OFF) {
		number_of_active_osc++;
		sample += osc_get_next_sample(&n->osc3);
	}

	if (number_of_active_osc != 0)
		sample = (uint16_t) (sample / number_of_active_osc);
	else
		sample = DAC_ZERO;

	// Apply the note velocity
	sample = (uint16_t) ((float) sample * n->velocity_amp);

	// Add one sample to the note lifetime
	n->lifetime++;

	// Process the envelope calculation for the sample
	update_envelope(n, env, (uint16_t) SAMPLE_RATE);

	// Apply the envelope
	sample = (uint16_t) ((float) sample * n->env_amp);

	return sample;
}

void update_envelope(Note *n, const Envelope *env, float sample_rate) {
	// Convert times to number of samples based on sample rate
	uint32_t samples_attack = (uint32_t) (env->attack * sample_rate);
	uint32_t samples_decay = (uint32_t) (env->decay * sample_rate);
	uint32_t samples_release = (uint32_t) (env->release * sample_rate);

	if (env->sustain < 0 || env->sustain > 1) {
		return; // Parameter is out of range
	}

	if (n->master_onoff == ON) {
		if (n->lifetime >= 0 && n->lifetime < samples_attack) // If note is in attack phase
				{
			n->env_amp = (float) n->lifetime / (float) samples_attack; // Linear increase from 0 to 1
		}

		if (n->lifetime >= samples_attack
				&& n->lifetime < (samples_decay + samples_attack)) // If note is in decay phase
						{
			n->env_amp = (float) 1.0
					+ ((float) (n->lifetime - samples_attack)
							* ((env->sustain - (float) 1.0)
									/ (float) samples_decay)); // Linear decrease from 1 to sustain
		}

		if (n->lifetime >= (samples_decay + samples_attack) && n->onoff != OFF) // If note is in sustain phase
				{
			n->env_amp = env->sustain;                     // Constant amplitude
		}

		if (n->onoff == OFF)                      // If note is in release phase
				{
			n->env_amp = -(env->sustain / (float) samples_release)
					* (float) (n->lifetime - n->deathtime) + env->sustain;

			if (n->env_amp <= 0)   // When env_amp is zero, put master_onoff OFF
					{
				n->master_onoff = OFF;
			}
		}
	}
}
