/**
 * \file osc.h
 * \brief Oscillator data structure and function definition.
 */

#ifndef _OSC_H
#define _OSC_H

#include <stm32f4xx.h>

// set for 12bit DAC, 4096 levels
#define DAC_ZERO			2047
#define MAX_AMPL			2000


#define SAMPLE_RATE 44094.48819			// Cannot be changed, depends on TIM6 settings and LUT values depend on sample rate


/**
 * \enum Waveform
 * \brief various waveform types
 */
typedef enum
{
  SIN,                 /*!< Sinusoidal waveform */
  SQR,                 /*!< Square waveform */
  TRI,                 /*!< Triangle waveform */
  SAW,				   /*!< Sawtooth waveform */
  ARB				   /*!< Arbitrary waveform */
} Waveform;

/**
 * \enum ONOFF
 * \brief defines ON and OFF values
 *
 */
typedef enum
{
  OFF,                 /*!< object is OFF */
  ON,                  /*!< object is ON */
} OnOff;


/**
 * \struct Oscillator
 * \brief define an oscillator
 */
typedef struct
{
	Waveform wave;	       			/*!<the waveform type ID */
	float phase_inc;       			/*!<the phase increment (related to frequency) */
	float phase;		   			/*!<the actual phase */
	float amp; 	           			/*!<the amplitude from 0 to 1 */
	OnOff onoff;           			/*!<the on/off value */
} Oscillator;

/**
 * \brief Generate next sample from the oscillator
 *
 * \param osc The Oscillator structure
 *
 * \return the generated sample
 */
uint16_t osc_get_next_sample(Oscillator *osc);

/**
 * \brief Initialize oscillator with default values
 *
 * \param osc The Oscillator structure
 */
void osc_init_default(Oscillator *osc);

/**
 * \brief Change MIDI note number (and so, frequency) of the oscillator
 *
 * \param ac The audio core structure of the system
 */
void osc_change_midi_note(Oscillator *osc, uint8_t midi_note);

#endif //_OSC_H
