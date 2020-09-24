/**
 * \file audio_core.h
 * \brief Functions related to the audio synthesis core
 */

#ifndef _SYNTH_CORE_H_
#define _SYNTH_CORE_H_

#include <stm32f4xx.h>

#include "audio_core/ringbuffer.h"
#include "audio_core/note/polyphony.h"
#include "sys_param/sys_param.h"

// Size of audio ring buffer
#define AUDIO_BUF_SIZE	16

/**
 * \struct Oscillator
 * \brief define an oscillator
 */
typedef struct {
	Polyphony note[POLYPHONY_MAX];
	Oscillator lfo;
	Sys_param sys_param;
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
void core_render(Audio_core *ac);

/**
 * \brief Main LFO rendering function
 *
 * \param ac The audio core structure of the system
 */
void lfo_render(Audio_core *ac);

/**
 * \brief Read data from the audio buffer
 *
 * \return the next value to read in the audio ring buffer
 */
uint16_t read_audio_buffer();

/**
 * \brief Read data from the LFO buffer
 *
 * \return the next value to read in the LFO ring buffer
 */
uint16_t read_LFO_buffer();

#endif
