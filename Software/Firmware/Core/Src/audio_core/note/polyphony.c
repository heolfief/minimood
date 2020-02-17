/**
 * \file polyphony.c
 * \brief Polyphony data structure and function implementation.
 *
 *
 * Here are implemented the data structure of a polyphony, and the related functions
 */

#include "audio_core/note/polyphony.h"

uint8_t find_free_note(Polyphony *p) {
	if (p == NULL) {
		return -1;
	}
	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		if (p[i].master_onoff == OFF)
			return i;
	}
	return -1;
}

uint8_t find_note_from_midi_nbr(Polyphony *p, uint8_t note_nbr) {
	if (p == NULL) {
		return -1;
	}
	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		if (p[i].midi_note == note_nbr)
			return i;
	}
	return -1;
}

uint16_t poly_get_next_sample(Polyphony *p, const Envelope *env) {
	int16_t sample = 0;
	uint8_t number_of_active_notes = 0;

	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		if (p[i].master_onoff == ON) {
			sample += note_get_next_sample(&p[i], env);
			number_of_active_notes++;
		}
	}

	//Get data range back to normal
	if (number_of_active_notes != 0) {
		sample = sample / POLYPHONY_MAX;
	} else
		sample = DAC_ZERO;

	return (uint16_t) sample;
}

void midi_note_ON(Polyphony *p, uint8_t note_nbr, uint8_t velocity) {
	int8_t free_note;
	int8_t old_note;

	if (p == NULL) {
		return;
	}

	if (velocity > 127) {
		return;
	}

	// If note is already ON
	old_note = find_note_from_midi_nbr(p, note_nbr);
	if ((old_note != -1) && (p[old_note].onoff == ON)) {
		//Note is already ON
		return;
	}

	free_note = find_free_note(p);
	if (free_note == -1) {
		return;
	}

	osc_change_midi_note(&p[free_note].osc1,
			note_nbr + p[free_note].osc1.detune);
	osc_change_midi_note(&p[free_note].osc2,
			note_nbr + p[free_note].osc2.detune);
	osc_change_midi_note(&p[free_note].osc3,
			note_nbr + p[free_note].osc3.detune);
	p[free_note].midi_note = note_nbr;
	p[free_note].velocity_amp = (float) ((float) velocity
			/ MAX_MIDI_NOTE_VELOCITY);    // velocity_amp ranges from 0 to 1

	note_on(&p[free_note]);
}

void midi_note_OFF(Polyphony *p, uint8_t note_nbr) {
	uint8_t note_to_kill;

	if (p == NULL) {
		return;
	}

	note_to_kill = find_note_from_midi_nbr(p, note_nbr);

	if (note_to_kill == -1) {
		//No note to set to OFF found
		return;// Ignore MIDI message (could be when app is started with a midi_test note already pressed, then released)
	}

	note_off(&p[note_to_kill]);
}
