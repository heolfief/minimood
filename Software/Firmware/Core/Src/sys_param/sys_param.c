/**
 * \file sys_param.c
 * \brief System parameters data structure and function implementation.
 *
 *
 * Here are implemented the data structure of the system parameters, and the related functions
 */

#include "sys_param/sys_param.h"

void copy_osc_sys_param_to_notes_osc(Sys_param *sys_param_to_copy, Polyphony *p)
{
    for (int i = 0; i < POLYPHONY_MAX; ++i)
    {
        p[i].osc1.onoff = sys_param_to_copy->osc1.onoff;
        p[i].osc1.amp = sys_param_to_copy->osc1.amp;
        p[i].osc1.wave = sys_param_to_copy->osc1.wave;
        p[i].osc1.detune = sys_param_to_copy->osc1.detune;

        p[i].osc2.onoff = sys_param_to_copy->osc2.onoff;
        p[i].osc2.amp = sys_param_to_copy->osc2.amp;
        p[i].osc2.wave = sys_param_to_copy->osc2.wave;
        p[i].osc2.detune = sys_param_to_copy->osc2.detune;

        p[i].osc3.onoff = sys_param_to_copy->osc3.onoff;
        p[i].osc3.amp = sys_param_to_copy->osc3.amp;
        p[i].osc3.wave = sys_param_to_copy->osc3.wave;
        p[i].osc3.detune = sys_param_to_copy->osc3.detune;

    }
}

void copy_osc_sys_param_to_lfo(Sys_param *sys_param_to_copy, Oscillator *lfo){
	lfo->onoff = sys_param_to_copy->osc1.onoff;
	lfo->amp = sys_param_to_copy->osc1.amp;
	lfo->wave = sys_param_to_copy->osc1.wave;
	lfo->detune = sys_param_to_copy->osc1.detune;

	osc_change_LFO_freq(lfo, sys_param_to_copy->lfo.freq);
}
