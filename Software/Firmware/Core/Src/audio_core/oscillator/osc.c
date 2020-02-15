/**
 * \file osc.c
 * \brief Oscillator data structure and function definition.
 */

#include <audio_core/oscillator/osc.h>

#include <audio_core/oscillator/LUT.h>	// import LUT variables

uint16_t osc_get_next_sample(Oscillator *osc){
	osc->phase+=osc->phase_inc;								// Increment phase
	if(osc->phase>=4096)osc->phase = osc->phase-4096.0;		// Loop through LUT
	return (uint16_t)(osc->amp*(float)wave_LUT[osc->wave][(int)osc->phase]);			// Get LUT value;
}

void osc_init_default(Oscillator *osc){
	osc->amp=1;
	osc->onoff=OFF;
	osc->phase=0;
	osc->phase_inc=1;
	osc->wave=SIN;
}

void osc_change_midi_note(Oscillator *osc, uint8_t midi_note){
	osc->phase_inc = midi_to_phase_inc[midi_note];
}
