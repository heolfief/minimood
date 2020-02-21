/**
 * \file osc.h
 * \brief Oscillator data structure and function definition.
 */

#ifndef _OSC_H
#define _OSC_H

#include <stm32f4xx.h>
#include <math.h>

// set for 12bit DAC, 4096 levels
#define DAC_ZERO			2047

#define MAX_LUT_VALUE 4000

#define SAMPLE_RATE 44094.48819			// Cannot be changed, depends on TIM6 settings and LUT values depend on sample rate

/**
 * \enum Waveform
 * \brief various waveform types
 */
typedef enum {
	SIN, /*!< Sinusoidal waveform */
	SQR, /*!< Square waveform */
	TRI, /*!< Triangle waveform */
	SAW, /*!< Sawtooth waveform */
	ARB /*!< Arbitrary waveform */
} Waveform;

/**
 * \enum ONOFF
 * \brief defines ON and OFF values
 *
 */
typedef enum {
	OFF, /*!< object is OFF */
	ON, /*!< object is ON */
} OnOff;

/**
 * \struct Oscillator
 * \brief define an oscillator
 */
typedef struct {
	Waveform wave; /*!<the waveform type ID */
	float phase_inc; /*!<the phase increment (related to frequency) */
	float phase; /*!<the actual phase */
	float amp; /*!<the amplitude from 0 to 1 */
	int8_t detune; /*!<the detune amount in number of notes */
	OnOff onoff; /*!<the on/off value */
	uint16_t offset; /*!<the mean value, to be used for signal offset */
} Oscillator;

/**
 * \struct Oscillator_param
 * \brief define an oscillator parameters
 */
typedef struct {
	Waveform wave; /*!<the waveform type ID */
	float amp; /*!<the amplitude from 0 to 1 */
	int8_t detune; /*!<the detune amount in number of notes */
	OnOff onoff; /*!<the on/off value */
	float freq; /*!< frequency, only used for LFO */
} Oscillator_param;

/**
 * \brief Generate next sample from the oscillator
 *
 * \param osc The Oscillator structure
 *
 * \return the generated sample
 */
int16_t osc_get_next_sample(Oscillator *osc);

/**
 * \brief Initialize oscillator with default values
 *
 * \param osc The Oscillator structure
 */
void osc_init_default(Oscillator *osc);

/**
 * \brief Initialize LFO with default values
 *
 * \param osc The Oscillator structure
 */
void lfo_init_default(Oscillator *osc);

/**
 * \brief Change MIDI note number (and so, frequency) of the oscillator
 *
 * \param osc The Oscillator structure
 * \param midi_note the MIDI note number (range from 0 to 127)
 */
void osc_change_midi_note(Oscillator *osc, uint8_t midi_note);

/**
 * \brief Change MIDI note number (and so, frequency) of the oscillator
 *
 * \param osc The Oscillator structure
 * \param normalized_freq the normalized frequency of the LFO (range from 0 to 1023, corresponds to 0 to 20Hz)
 */
void osc_change_LFO_freq(Oscillator *osc, uint16_t normalized_freq);

/**
 * \brief Interpolate values to fill ARB waveform in wave_LUT
 *
 * \param values the array of values to interpolate to the wave_LUT ARB waveform
 */
void osc_arb_wave_interpolate(uint16_t *values);

#endif //_OSC_H
