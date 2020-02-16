/**
 * \file audio_core.c
 * \brief Functions related to the audio synthesis core
 */

#include <audio_core/audio_core.h>

ringbuf audiobuf_str; // Audio data output buffer, filled in here and read from main timer ISR
uint16_t audiobuf[AUDIO_BUF_SIZE];		// the actual data buffer

void synth_core_start(Audio_core *ac) {
	// initialize audio output buffer
	rb_buffer_init(&audiobuf_str, AUDIO_BUF_SIZE);

	osc_init_default(&ac->note.osc1);
	osc_init_default(&ac->note.osc2);
	osc_init_default(&ac->note.osc3);
}

void core_render_audio(Audio_core *ac) {

	uint16_t sample = DAC_ZERO;

	while (rb_is_writeable(&audiobuf_str)) {// do work while there is space in the audio buffer

		sample = note_get_next_sample(&ac->note, &ac->env);

		// write audio frame to output buffer
		__disable_irq();// make sure we have exclusive access to buffer while writing
		rb_write_16(&audiobuf_str, &audiobuf[0], (uint16_t) sample);// Write sample to buffer
		__enable_irq();
	}
}

uint32_t read_audio_buffer() {
	if (rb_is_readable(&audiobuf_str)) {	// return next audio buffer word
		return (rb_read_16(&audiobuf_str, &audiobuf[0]));
	} else {
		return (DAC_ZERO);	// if underrun, return zero
	}
}
