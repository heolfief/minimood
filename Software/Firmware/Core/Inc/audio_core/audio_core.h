/**
 * \file audio_core.h
 * \brief Functions related to the audio synthesis core
 */

#ifndef _SYNTH_CORE_H_
#define _SYNTH_CORE_H_

#include <stm32f4xx.h>
#include "ringbuffer.h"
#include "osc.h"


// Size of audio ring buffer
#define AUDIO_BUF_SIZE	16


/**
 * \struct Oscillator
 * \brief define an oscillator
 */
typedef struct
{
	Oscillator osc1;           /*!<Oscillator */
	Oscillator osc2;           /*!<Oscillator */
	Oscillator osc3;           /*!<Oscillator */
} Audio_core;

/**
 * \brief Initialize audio buffers & other necessary startup work.
 *
 * \param ac The audio core structure of the system
 */
void synth_core_start(Audio_core *ac);

/**
 * \brief Main audio rendering function
 *
 * \param ac The audio core structure of the system
 */
void core_render_audio(Audio_core *ac);

/**
 * \brief Read a word from the audio buffer
 *
 * \return the next value to read in the audio ring buffer
 */
uint32_t read_audio_buffer();
	
#endif
