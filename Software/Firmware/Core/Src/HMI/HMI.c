/**
 * \file HMI.c
 * \brief Human-Machine Interface functions definition.
 */

#include "HMI/HMI.h"

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
		hmi->bts[i].waiting = 0;
		hmi->bts[i].last_state = 0;
		hmi->bts[i].state = 0;
	}

	hmi->bts[BT_OSC1_ON].port = OSC1_ON_GPIO_Port;
	hmi->bts[BT_OSC1_ON].pin = OSC1_ON_Pin;

	hmi->bts[BT_OSC2_ON].port = OSC2_ON_GPIO_Port;
	hmi->bts[BT_OSC2_ON].pin = OSC2_ON_Pin;

	hmi->bts[BT_OSC3_ON].port = OSC3_ON_GPIO_Port;
	hmi->bts[BT_OSC3_ON].pin = OSC3_ON_Pin;

	hmi->bts[BT_OSC1_WAVE].port = OSC1_WAVE_GPIO_Port;
	hmi->bts[BT_OSC1_WAVE].pin = OSC1_WAVE_Pin;

	hmi->bts[BT_OSC2_WAVE].port = OSC2_WAVE_GPIO_Port;
	hmi->bts[BT_OSC2_WAVE].pin = OSC2_WAVE_Pin;

	hmi->bts[BT_OSC3_WAVE].port = OSC3_WAVE_GPIO_Port;
	hmi->bts[BT_OSC3_WAVE].pin = OSC3_WAVE_Pin;

	hmi->bts[BT_CTRL_UP].port = CTRL_UP_GPIO_Port;
	hmi->bts[BT_CTRL_UP].pin = CTRL_UP_Pin;

	hmi->bts[BT_CTRL_RIGHT].port = CTRL_RIGHT_GPIO_Port;
	hmi->bts[BT_CTRL_RIGHT].pin = CTRL_RIGHT_Pin;

	hmi->bts[BT_CTRL_DOWN].port = CTRL_DOWN_GPIO_Port;
	hmi->bts[BT_CTRL_DOWN].pin = CTRL_DOWN_Pin;

	hmi->bts[BT_CTRL_LEFT].port = CTRL_LEFT_GPIO_Port;
	hmi->bts[BT_CTRL_LEFT].pin = CTRL_LEFT_Pin;

	hmi->bts[BT_CTRL_OK].port = CTRL_OK_GPIO_Port;
	hmi->bts[BT_CTRL_OK].pin = CTRL_OK_Pin;

}

void hmi_debounce_buttons(Button *bts) {
	for (int i = 0; i < NBR_OF_BUTTONS; ++i) {
		uint8_t current_reading = HAL_GPIO_ReadPin(bts[i].port, bts[i].pin);

		// detect falling edge
		if (current_reading == 0 && bts[i].last_state == 1) { //Buttons are GND (= 0) when pressed
			bts[i].waiting = 1;
			bts[i].log_cnt = 0;	// reset counter
		}

		if (bts[i].waiting == 1) {
			bts[i].log_cnt++;

			if (bts[i].log_cnt >= DEBOUNCE_NBR_OF_SAMPLES
					&& current_reading == 0) {
				bts[i].state = 1;
				bts[i].log_cnt = 0;
				bts[i].waiting = 0;
			} else {
				bts[i].state = 0;
			}

		}
		bts[i].last_state = bts[i].state;
	}
}

uint8_t hmi_process_osc_buttons(Button *bts, Sys_param *sys_param) {
	uint8_t param_changed = 0;

	if (bts[BT_OSC1_ON].state == 1) {
		if (sys_param->osc1.onoff == OFF) {
			sys_param->osc1.onoff = ON;
		} else {
			sys_param->osc1.onoff = OFF;
		}
		bts[BT_OSC1_ON].state = 0;	// reset state
		param_changed = 1;
	}
	if (bts[BT_OSC2_ON].state == 1) {
		if (sys_param->osc2.onoff == OFF) {
			sys_param->osc2.onoff = ON;
		} else {
			sys_param->osc2.onoff = OFF;
		}
		bts[BT_OSC2_ON].state = 0;	// reset state
		param_changed = 1;
	}
	if (bts[BT_OSC3_ON].state == 1) {
		if (sys_param->osc3.onoff == OFF) {
			sys_param->osc3.onoff = ON;
		} else {
			sys_param->osc3.onoff = OFF;
		}
		bts[BT_OSC3_ON].state = 0;	// reset state
		param_changed = 1;
	}

	if (bts[BT_OSC1_WAVE].state == 1) {
		sys_param->osc1.wave = (sys_param->osc1.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC1_WAVE].state = 0;	// reset state
		param_changed = 1;
	}
	if (bts[BT_OSC2_WAVE].state == 1) {
		sys_param->osc2.wave = (sys_param->osc2.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC2_WAVE].state = 0;	// reset state
		param_changed = 1;
	}
	if (bts[BT_OSC3_WAVE].state == 1) {
		sys_param->osc3.wave = (sys_param->osc3.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC3_WAVE].state = 0;	// reset state
		param_changed = 1;
	}
	return param_changed;
}
