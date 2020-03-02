/**
 * \file HMI.c
 * \brief Human-Machine Interface functions definition.
 */

#include "HMI/HMI.h"

#include "main.h"
#include "sys_param/sys_param.h"

/**
 * \brief Re-maps a number from one range to another.
 * That is, a value of fromLow would get mapped to toLow, a value
 * of fromHigh to toHigh, values in-between to values in-between, etc.
 *
 * \param x the input value to map
 * \param in_min the min value for the input
 * \param in_max the max value for the input
 * \param out_min the desired min value for the output
 * \param out_max the desired max value for the output
 *
 * \return the mapped value
 */
static float map(float x, float in_min, float in_max, float out_min,
		float out_max) {
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void hmi_init(Hmi *hmi) {
	for (int i = 0; i < NBR_OF_POTS; ++i) {
		hmi->adc_raw_data[i] = 0;
	}

	for (int i = 0; i < NBR_OF_BUTTONS; ++i) {
		hmi->bts[i].log_cnt = 0;
		hmi->bts[i].state = 0;
	}

	hmi->bts[0].port = OSC1_ON_GPIO_Port;
	hmi->bts[0].pin = OSC1_ON_Pin;

	hmi->bts[1].port = OSC2_ON_GPIO_Port;
	hmi->bts[1].pin = OSC2_ON_Pin;

	hmi->bts[2].port = OSC3_ON_GPIO_Port;
	hmi->bts[2].pin = OSC3_ON_Pin;

	hmi->bts[3].port = OSC1_WAVE_GPIO_Port;
	hmi->bts[3].pin = OSC1_WAVE_Pin;

	hmi->bts[4].port = OSC2_WAVE_GPIO_Port;
	hmi->bts[4].pin = OSC2_WAVE_Pin;

	hmi->bts[5].port = OSC3_WAVE_GPIO_Port;
	hmi->bts[5].pin = OSC3_WAVE_Pin;

	hmi->bts[6].port = CTRL_UP_GPIO_Port;
	hmi->bts[6].pin = CTRL_UP_Pin;

	hmi->bts[7].port = CTRL_RIGHT_GPIO_Port;
	hmi->bts[7].pin = CTRL_RIGHT_Pin;

	hmi->bts[8].port = CTRL_DOWN_GPIO_Port;
	hmi->bts[8].pin = CTRL_DOWN_Pin;

	hmi->bts[9].port = CTRL_LEFT_GPIO_Port;
	hmi->bts[9].pin = CTRL_LEFT_Pin;

	hmi->bts[10].port = CTRL_OK_GPIO_Port;
	hmi->bts[10].pin = CTRL_OK_Pin;

}

void hmi_debounce_buttons(Button *bts) {
	for (int i = 0; i < NBR_OF_BUTTONS; ++i) {
		if (HAL_GPIO_ReadPin(bts[i].port, bts[i].pin) == 0) {
			bts[i].log_cnt++;
		} else {
			bts[i].log_cnt = 0;
		}

		if (bts[i].log_cnt == DEBOUNCE_NBR_OF_SAMPLES) {
			bts[i].state = 1;
		} else {
			bts[i].state = 0;
		}
	}
}
