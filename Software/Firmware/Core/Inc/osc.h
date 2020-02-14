/**
 * \file osc.h
 * \brief Oscillator data structure and function definition.
 *
 *
 * Here are defined the data structure of the oscillator, and the related functions
 */

#ifndef _OSC_H
#define _OSC_H

#include <stm32f4xx.h>

// set for 12bit DAC, 4096 levels
#define DAC_ZERO			2047
#define MAX_AMPL			2000

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

uint16_t osc_get_next_sample(Oscillator *osc);

void osc_init_default(Oscillator *osc);

void osc_change_midi_note(Oscillator *osc, uint8_t midi_note);

#endif //_OSC_H
