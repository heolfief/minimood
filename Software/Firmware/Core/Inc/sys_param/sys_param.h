/**
 * \file sys_param.h
 * \brief System parameters data structure and function definition.
 *
 *
 * Here are defined the data structure of the system parameters, and the related functions.
 * Theses parameters are meant to be changed by the GUI.
 */

#ifndef AUDIO_SYNTH_SYS_PARAM_H
#define AUDIO_SYNTH_SYS_PARAM_H

#include <stm32f4xx.h>

#include "audio_core/note/polyphony.h"

/**
 * \struct Sys_param
 * \brief define the system parameters, meant to be changed by the GUI
 */
typedef struct {
	Oscillator_param osc1; /*!<the first oscillator */
	Oscillator_param osc2; /*!<the second oscillator */
	Oscillator_param osc3; /*!<the third oscillator */

	Oscillator_param lfo; /*!<the LFO */

	Envelope env; /*!<the sound envelope */
} Sys_param;

/**
 * \fn void copy_osc_sys_param_to_notes_osc(Sys_param *sys_param_to_copy, Polyphony *p);
 * \brief Function to copy oscillator settings to notes oscillators settings
 *
 * \param sys_param_to_copy The system parameters to copy to the note oscillators
 * \param p The Polyphony array to copy settings to
 */
void copy_osc_sys_param_to_notes_osc(Sys_param *sys_param_to_copy, Polyphony *p);

/**
 * \fn void copy_osc_sys_param_to_lfo(Sys_param *sys_param_to_copy,Oscillator lfo)
 * \brief Function to copy LFO settings to actual LFO
 *
 * \param sys_param_to_copy The system parameters to copy to the LFO
 * \param lfo The LFO to copy settings to
 */
void copy_osc_sys_param_to_lfo(Sys_param *sys_param_to_copy, Oscillator *lfo);

#endif //AUDIO_SYNTH_SYS_PARAM_H
