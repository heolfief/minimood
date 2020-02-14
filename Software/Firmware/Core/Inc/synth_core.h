// synth engine etc (header file)

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


// initialize audio buffers & other necessary startup work.
void synth_core_start(Audio_core *ac);

// main audio rendering function
void core_render_audio(Audio_core *ac);

// read a word from the audio buffer
uint32_t read_audio_buffer();
	
#endif
