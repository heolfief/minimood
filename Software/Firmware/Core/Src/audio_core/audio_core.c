/**
 * \file audio_core.c
 * \brief Functions related to the audio synthesis core
 */

#include <audio_core/audio_core.h>

ringbuf audiobuf_str;					// Audio data output buffer, filled in here and read from main timer ISR
uint16_t audiobuf[AUDIO_BUF_SIZE];		// the actual data buffer


void synth_core_start(Audio_core *ac) {
	// initialize audio output buffer
	rb_buffer_init(&audiobuf_str, AUDIO_BUF_SIZE);

	osc_init_default(&ac->osc1);
	osc_init_default(&ac->osc2);
	osc_init_default(&ac->osc3);
}

void core_render_audio(Audio_core *ac) {
	int32_t temp_mix;
	int i;

	while(rb_is_writeable(&audiobuf_str)) {	// do work while there is space in the audio buffer
		
		temp_mix = 0;
		i=0;

		if(ac->osc1.onoff != OFF)
		{
			i++;
			temp_mix+=osc_get_next_sample(&ac->osc1);
		}
		if(ac->osc2.onoff != OFF)
		{
			i++;
			temp_mix+=osc_get_next_sample(&ac->osc2);
		}
		if(ac->osc3.onoff != OFF)
		{
			i++;
			temp_mix+=osc_get_next_sample(&ac->osc3);
		}

		if(i!=0) temp_mix=(uint16_t)(temp_mix/i);
		else temp_mix = DAC_ZERO;

		// write audio frame to output buffer
		__disable_irq();	// make sure we have exclusive access to buffer while writing
		rb_write_16(&audiobuf_str,&audiobuf[0],(uint16_t)temp_mix);	// Write LUT to buffer
		__enable_irq();
	}
}

uint32_t read_audio_buffer() {
	if (rb_is_readable(&audiobuf_str)) {	// return next audio buffer word
		return(rb_read_16(&audiobuf_str,&audiobuf[0]));
	} else {
		return(DAC_ZERO);	// if underrun, return zero...
	}
}
