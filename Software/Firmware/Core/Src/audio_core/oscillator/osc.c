/**
 * \file osc.c
 * \brief Oscillator data structure and function definition.
 */

#include "audio_core/oscillator/osc.h"

#include "audio_core/oscillator/LUT.h"	// import LUT variables

int16_t osc_get_next_sample(Oscillator *osc) {
	osc->phase += osc->phase_inc;							// Increment phase
	if (osc->phase >= 4096)
		osc->phase = osc->phase - 4096.0;		// Loop through LUT
	return (int16_t) (osc->amp * wave_LUT[osc->wave][(int) osc->phase]);// Get LUT value;
}

void osc_init_default(Oscillator *osc) {
	osc->amp = 1;
	osc->onoff = ON;
	osc->phase = 0;
	osc->phase_inc = 1;
	osc->wave = SIN;
	osc->detune = 0;
	osc->offset = DAC_ZERO;
}

void lfo_init_default(Oscillator *lfo) {
	lfo->amp = 0.5;
	lfo->onoff = ON;
	lfo->phase = 0;
	lfo->phase_inc = 1;
	lfo->wave = SIN;
	lfo->detune = 0;
	lfo->offset = lfo->amp * (MAX_LUT_VALUE/2.0);
}

void osc_change_midi_note(Oscillator *osc, uint8_t midi_note) {
	osc->phase_inc = midi_to_phase_inc[midi_note];
}

void osc_change_LFO_freq(Oscillator *osc, uint16_t normalized_freq) {
	osc->phase_inc = LFO_phase_inc[normalized_freq];
}

/**
 * \brief Cubic Hermite spline interpollation
 *
 * \param ip input array
 * \param ipsz number of elements in input array
 * \param op output array
 * \param op number of elements in output array
 */
static void cubic_Intrpl(float *ip, int ipsz, float *op, int opsz) {
	int j;
	float map;

	int i;
	float iI, iF;

	op[0] = ip[0];
	for (j = 1; j < opsz - 1; j++) {
		map = ((float) j) * (ipsz - 1) / (opsz - 1);
		iF = modff(map, &iI);
		i = (int) iI;

		if (i == 0 || i == ipsz - 2)// Avoid index out of bound, switch to linear
			op[j] = (1 - iF) * ip[i] + iF * ip[i + 1];
		else
			op[j] = 0.5
					* (ip[i - 1] * (-iF * iF * iF + 2 * iF * iF - iF)
							+ ip[i] * (3 * iF * iF * iF - 5 * iF * iF + 2)
							+ ip[i + 1] * (-3 * iF * iF * iF + 4 * iF * iF + iF)
							+ ip[i + 2] * (iF * iF * iF - iF * iF));
	}
	op[opsz - 1] = ip[ipsz - 1];
}

void osc_arb_wave_interpolate(uint16_t *values) {
	cubic_Intrpl((float*) values, sizeof(values) / sizeof(values[0]),
			(float*) wave_LUT[ARB], 4096);
}
