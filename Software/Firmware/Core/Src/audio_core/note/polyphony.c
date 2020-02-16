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
		if (p[i]->master_onoff == OFF)
			return i;
	}
	return -1;
}

uint8_t find_note_from_midi_nbr(Polyphony *p, uint8_t id) {
	if (p == NULL) {
		return -1;
	}
	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		if (p[i]->midi_note == id)
			return i;
	}
	return -1;
}

uint16_t poly_get_next_sample(Polyphony *p, const Envelope *env) {
	uint16_t sample = 0;
	uint8_t number_of_active_notes = 0;

	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		if (p[i]->master_onoff == ON) {
			sample += note_get_next_sample(p[i], env);
			number_of_active_notes++;
		}
	}

	//Get data range back to normal
	sample = (uint16_t) (sample / number_of_active_notes);

	return sample;
}
