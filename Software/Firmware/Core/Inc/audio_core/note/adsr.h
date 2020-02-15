/**
 * \file note.h
 * \brief ADSR envelope filter data structure and function definition.
 *
 *
 * Here are defined the data structure of an ADSR envelope filter, and the related functions
 */

#ifndef AUDIO_SYNTH_ADSR_H
#define AUDIO_SYNTH_ADSR_H

#include <stm32f4xx.h>

/**
 * \struct Envelope
 * \brief define an ADSR envelope
 *
 * An ADSR envelope is defined with four parameters : attack, decay, sustain, release
 */
typedef struct
{
  double attack;        /*!<the time for initial run-up of level from nil to peak in seconds */
  double decay;         /*!<the time for the subsequent run down from the attack level to the designated sustain level in seconds */
  double sustain;       /*!<the level during the main sequence of the sound's duration, until the note is off (range from 0 to 1)*/
  double release;       /*!<the time taken for the level to decay from the sustain level to zero after the note is off in seconds*/
} Envelope;

#endif //AUDIO_SYNTH_ADSR_H
