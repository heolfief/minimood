/**
 * \file polyphony.h
 * \brief Polyphony data structure and function definition.
 *
 *
 * Here are defined the data structure of polyphony, and the related functions
 */

#ifndef AUDIO_SYNTH_POLYPHONY_H
#define AUDIO_SYNTH_POLYPHONY_H

#include <stm32f4xx.h>
#include "audio_core/note/note.h"

#define POLYPHONY_MAX 10	// Max notes for polyphony

typedef Note *Polyphony;    // Polyphony is an array of Note

/**
 * \fn uint8_t find_free_note(Polyphony *p)
 * \brief Function to find a note which is not used (=OFF) in Polyphony
 *
 * \param p The Polyphony array
 *
 * \return The index of the note in the Polyphony array if found, -1 otherwise
 */
uint8_t find_free_note(Polyphony *p);

/**
 * \fn uint8_t find_note_from_midi_nbr(Polyphony *p, uint8_t id)
 * \brief Function to find a note which from it's MIDI ID or number
 *
 * \param p The Polyphony array
 * \param id the MIDI ID or note number
 *
 * \return The index of the note in the Polyphony array if found, -1 otherwise
 */
uint8_t find_note_from_midi_nbr(Polyphony *p, uint8_t id);

/**
 * \fn uint16_t poly_get_next_sample(Polyphony *p, const Envelope *env)
 * \brief Function to get next polyphony sample (mixed notes)
 *
 * \param p The polyphony (note array)
 * \param env The envelope parameters
 *
 * \return the synthesized sample
 */
uint16_t poly_get_next_sample(Polyphony *p, const Envelope *env);

#endif //AUDIO_SYNTH_POLYPHONY_H
