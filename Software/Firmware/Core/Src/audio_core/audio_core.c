/**
 * \file audio_core.c
 * \brief Functions related to the audio synthesis core
 */

#include <audio_core/audio_core.h>

ringbuf audiobuf_str; // Audio data output buffer, filled in here and read from main timer ISR
uint16_t audiobuf[AUDIO_BUF_SIZE];		// the actual data buffer

ringbuf lfobuf_str; // LFO data output buffer, filled in here and read from main timer ISR
uint16_t lfobuf[AUDIO_BUF_SIZE];		// the actual data buffer

void synth_core_start(Audio_core *ac) {
	// initialize audio output buffer
	rb_buffer_init(&audiobuf_str, AUDIO_BUF_SIZE);
	rb_buffer_init(&lfobuf_str, AUDIO_BUF_SIZE);

	lfo_init_default(&ac->lfo);

	// initialize oscillators with default values
	for (int i = 0; i < POLYPHONY_MAX; ++i) {
		osc_init_default(&ac->note[i].osc1);
		osc_init_default(&ac->note[i].osc2);
		osc_init_default(&ac->note[i].osc3);
		ac->note[i].onoff = OFF;
		ac->note[i].master_onoff = OFF;
		ac->note[i].midi_note = 0;
		ac->note[i].velocity_amp = 0;
		ac->note[i].env_amp = 0;
		ac->note[i].deathtime = 0;
		ac->note[i].lifetime = 0;
	}
}

void core_render(Audio_core *ac) {

	uint16_t sample = DAC_ZERO;

	while (rb_is_writeable(&lfobuf_str)) {// do work while there is space in the audio buffer

		sample = osc_get_next_sample(&ac->lfo) + ac->lfo.offset;

		// write audio frame to output buffer
		__disable_irq();// make sure we have exclusive access to buffer while writing
		rb_write_16(&lfobuf_str, &lfobuf[0], (uint16_t) sample);// Write sample to buffer
		__enable_irq();
	}

	while (rb_is_writeable(&audiobuf_str)) {// do work while there is space in the audio buffer

		sample = poly_get_next_sample(ac->note, &ac->sys_param.env) + DAC_ZERO;

		// write audio frame to output buffer
		__disable_irq();// make sure we have exclusive access to buffer while writing
		rb_write_16(&audiobuf_str, &audiobuf[0], (uint16_t) sample);// Write sample to buffer
		__enable_irq();
	}
}

uint16_t read_audio_buffer() {
	if (rb_is_readable(&audiobuf_str)) {	// return next audio buffer word
		return (rb_read_16(&audiobuf_str, &audiobuf[0]));// center output around DAC_ZERO
	} else {
		return (DAC_ZERO);	// if underrun, return dac zero
	}
}

uint16_t read_LFO_buffer() {
	if (rb_is_readable(&lfobuf_str)) {	// return next lfo buffer word
		return (rb_read_16(&lfobuf_str, &lfobuf[0]));// always have lowest part of waveform on 0
	} else {
		return (0);	// if underrun, return zero
	}
}
