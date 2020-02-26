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

#define POLYPHONY_MAX 3	// Max notes for polyphony

#define MAX_MIDI_NOTE_VELOCITY 127.0

typedef Note Polyphony;    // Polyphony is an array of Note

/**
 * \fn uint8_t find_free_note(Polyphony *p)
 * \brief Function to find a note which is not used (=OFF) in Polyphony
 *
 * \param p The Polyphony array
 *
 * \return The index of the note in the Polyphony array if found, -1 otherwise
 */
int8_t find_free_note(Polyphony *p);

/**
 * \fn uint8_t find_note_from_midi_nbr(Polyphony *p, uint8_t id)
 * \brief Function to find a note which from it's MIDI ID or number
 *
 * \param p The Polyphony array
 * \param id the MIDI ID or note number
 *
 * \return The index of the note in the Polyphony array if found, -1 otherwise
 */
int8_t find_note_from_midi_nbr(Polyphony *p, uint8_t id);

/**
 * \fn uint16_t poly_get_next_sample(Polyphony *p, const Envelope *env)
 * \brief Function to get next polyphony sample (mixed notes)
 *
 * \param p The polyphony (note array)
 * \param env The envelope parameters
 *
 * \return the synthesized sample
 */
int16_t poly_get_next_sample(Polyphony *p, const Envelope *env);

/**
 * \fn int midi_note_ON(Core *ac, Uint8 id, Uint8 velo)
 * \brief Function to process MIDI input from the opened MIDI peripheral and set the audio core to create notes associated with MIDI input
 *
 * \param p The polyphony (note array)
 * \param note_nbr the MIDI note number
 * \param velocity the note velocity (range from 1 to 127)
 */
void midi_note_ON(Polyphony *p, uint8_t note_nbr, uint8_t velocity);

/**
 * \fn void midi_note_OFF(Polyphony *p, Uint8 nbr)
 * \brief Function to process MIDI input from the opened MIDI peripheral and set the audio core to create notes associated with MIDI input
 *
 * \param p The polyphony (note array)
 * \param note_nbr the MIDI note number
 */
void midi_note_OFF(Polyphony *p, uint8_t nbr);

#endif //AUDIO_SYNTH_POLYPHONY_H
