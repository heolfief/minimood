/**
 * \file note.h
 * \brief Note data structure and function definition.
 *
 *
 * Here are defined the data structure of a note, and the related functions
 */

#ifndef AUDIO_SYNTH_NOTE_H
#define AUDIO_SYNTH_NOTE_H

#include <stm32f4xx.h>

#include "audio_core/oscillator/osc.h"
#include "audio_core/note/adsr.h"

/**
 * \struct Note
 * \brief define a note
 *
 * A note is defined with : Oscillator 1, Oscillator 2, Oscillator 3, pitch, amplitude, on/off state, envelope and lifetime value
 */
typedef struct {
	Oscillator osc1; /*!<the first oscillator */
	Oscillator osc2; /*!<the second oscillator */
	Oscillator osc3; /*!<the third oscillator */
	uint8_t midi_note; /*!<the MIDI note number */
	float velocity_amp; /*!<the velocity / amplitude of the note (range from 0 to 1) */
	OnOff onoff; /*!<the on/off value of the note (MIDI protocol wise) */
	OnOff master_onoff; /*!<the master on/off value of the note (including release time,
	 * when master_onoff is OFF, there is no sound from the note) */
	float env_amp; /*!<the envelope amplitude (range from 0 to 1) */
	uint64_t lifetime; /*!<the number of samples passed since the note is ON (used to calculate envelope) */
	uint64_t deathtime; /*!<the number of samples passed when note is OFF since the note was ON */
} Note;

/**
 * \fn void note_on(Note *n)
 * \brief Function to turn on a note
 *
 * \param n The note structure
 *
 * \return 0 if everything went OK, -1 otherwise
 */
void note_on(Note *n);

/**
 * \fn void note_off(Note *n)
 * \brief Function to turn off a note
 *
 * \param n The note structure
 *
 * \return 0 if everything went OK, -1 otherwise
 */
void note_off(Note *n);

/**
 * \fn uint16_t note_get_next_sample(Note *n, const Envelope *env)
 * \brief Function to get next note sample (mixed oscillators and envelope)
 *
 * \param n The note structure
 * \param env The envelope parameters
 *
 * \return the synthesized sample
 */
int16_t note_get_next_sample(Note *n, const Envelope *env);

/**
 * \fn void update_envelope(Note *n, Envelope *env)
 * \brief Function to compute and update envelope amplitude based on an ADSR envelope filter
 *
 * Works on a sample, not a buffer.
 *
 * \param n The note object to update envelope to
 * \param env The envelope object
 * \param sample_rate The sample rate of the system
 */
void update_envelope(Note *n, const Envelope *env, float sample_rate);

#endif //AUDIO_SYNTH_NOTE_H
