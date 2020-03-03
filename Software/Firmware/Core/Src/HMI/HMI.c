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
#define MAP(X, IN_MIN, IN_MAX, OUT_MIN, OUT_MAX) (X-IN_MIN)*(OUT_MAX-OUT_MIN)/(IN_MAX-IN_MIN)+OUT_MIN

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

uint8_t hmi_process_pots(uint8_t *rawdata, Potentiometer *pots,
		Sys_param *sys_param) {
	uint8_t param_changed = 0;

	sys_param->osc1.amp = MAP(rawdata[POT_OSC1_AMP], 0, 255,
			pots[POT_OSC1_AMP].min_value, pots[POT_OSC1_AMP].max_value);

	sys_param->osc2.amp = MAP(rawdata[POT_OSC2_AMP], 0, 255,
				pots[POT_OSC2_AMP].min_value, pots[POT_OSC2_AMP].max_value);

	sys_param->osc3.amp = MAP(rawdata[POT_OSC3_AMP], 0, 255,
				pots[POT_OSC3_AMP].min_value, pots[POT_OSC3_AMP].max_value);


	sys_param->osc1.det = MAP(rawdata[POT_OSC1_DET], 0, 255,
				pots[POT_OSC1_DET].min_value, pots[POT_OSC1_DET].max_value);

	sys_param->osc2.det = MAP(rawdata[POT_OSC2_DET], 0, 255,
				pots[POT_OSC2_DET].min_value, pots[POT_OSC2_DET].max_value);

	sys_param->osc3.det = MAP(rawdata[POT_OSC3_DET], 0, 255,
				pots[POT_OSC3_DET].min_value, pots[POT_OSC3_DET].max_value);

	sys_param->env.attack = MAP(rawdata[POT_ADSR_A], 0, 255,
				pots[POT_ADSR_A].min_value, pots[POT_ADSR_A].max_value);

	sys_param->env.decay = MAP(rawdata[POT_ADSR_D], 0, 255,
				pots[POT_ADSR_D].min_value, pots[POT_ADSR_D].max_value);

	sys_param->env.sustain = MAP(rawdata[POT_ADSR_S], 0, 255,
				pots[POT_ADSR_S].min_value, pots[POT_ADSR_S].max_value);

	sys_param->env.release = MAP(rawdata[POT_ADSR_R], 0, 255,
				pots[POT_ADSR_R].min_value, pots[POT_ADSR_R].max_value);

	sys_param->lfo.freq = MAP(rawdata[POT_LFO_RATE], 0, 255,
				pots[POT_LFO_RATE].min_value, pots[POT_LFO_RATE].max_value);

	sys_param->lfo.amp = MAP(rawdata[POT_LFO_DEPTH], 0, 255,
				pots[POT_LFO_DEPTH].min_value, pots[POT_LFO_DEPTH].max_value);

	return param_changed;
}
