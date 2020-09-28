/**
 * \file interrupts_callbacks.c
 * \brief Interrupts callbacks definitions
 */

#include "stm32f4xx_hal.h"
#include "audio_core/audio_core.h"
#include "HMI/HMI.h"

/* External variables --------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_adc1;
extern DAC_HandleTypeDef hdac;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim6;
extern TIM_HandleTypeDef htim7;

extern Audio_core ac;
extern Hmi hmi;

/**
 * \brief  Timers interrupts callback
 * \param  htim TIM handle
 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {

	// Audio core rendering timer
	if (htim->Instance == TIM6) {
		core_render(&ac);	// Actual sound synthesis here

		// Give DAC actual value from the buffer
		// Audio from CHANNEL 1
		HAL_DAC_SetValue(&hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R, read_audio_buffer());
	}

	// LFO rendering timer
	if (htim->Instance == TIM5) {
		lfo_render(&ac);	// LFO rendering here

		// LFO from CHANNEL 2
		HAL_DAC_SetValue(&hdac, DAC_CHANNEL_2, DAC_ALIGN_12B_R, read_LFO_buffer());
	}

	// HMI refresh timer
	if (htim->Instance == TIM7) {
		Param_Changed param_changed = NO_PARAM_CHANGED;

		hmi_debounce_buttons(hmi.bts);
		param_changed = hmi_process_osc_buttons(hmi.bts, &ac.sys_param);
		if (param_changed == OSC_PARAM_CHANGED) {
			copy_osc_sys_param_to_notes_osc(&ac.sys_param, ac.note);
		}

		param_changed = hmi_process_pots(hmi.adc_raw_data, hmi.pots, &ac.sys_param);

		if (param_changed == OSC_PARAM_CHANGED) {
			copy_osc_sys_param_to_notes_osc(&ac.sys_param, ac.note);
		}
		if (param_changed == LFO_PARAM_CHANGED) {
			copy_osc_sys_param_to_lfo(&ac.sys_param, &ac.lfo);
		}

		hmi_screen_fsm(&hmi, &ac.sys_param, param_changed);	// Finite State Machine to handle what to show on screen
	}
}
