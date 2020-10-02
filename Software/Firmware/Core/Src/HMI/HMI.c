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
#define MAP(X, IN_MIN, IN_MAX, OUT_MIN, OUT_MAX) ((X-IN_MIN)*(OUT_MAX-OUT_MIN)/(IN_MAX-IN_MIN)+OUT_MIN)

void hmi_init(Hmi *hmi) {
	for (int i = 0; i < NBR_OF_POTS; ++i) {
		hmi->adc_raw_data[i] = 0;
		hmi->pots[i].last_value = 0;
	}

	for (int i = 0; i < NBR_OF_BUTTONS; ++i) {
		hmi->bts[i].log_cnt = 0;
		hmi->bts[i].waiting = 0;
		hmi->bts[i].last_state = 0;
		hmi->bts[i].state = BT_STATE_RST;
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

	hmi->pots[POT_OSC1_AMP].min_value = OSC_AMP_MIN;
	hmi->pots[POT_OSC1_AMP].max_value = OSC_AMP_MAX;
	hmi->pots[POT_OSC2_AMP].min_value = OSC_AMP_MIN;
	hmi->pots[POT_OSC2_AMP].max_value = OSC_AMP_MAX;
	hmi->pots[POT_OSC3_AMP].min_value = OSC_AMP_MIN;
	hmi->pots[POT_OSC3_AMP].max_value = OSC_AMP_MAX;

	hmi->pots[POT_OSC1_DET].min_value = OSC_DET_MIN;
	hmi->pots[POT_OSC1_DET].max_value = OSC_DET_MAX;
	hmi->pots[POT_OSC2_DET].min_value = OSC_DET_MIN;
	hmi->pots[POT_OSC2_DET].max_value = OSC_DET_MAX;
	hmi->pots[POT_OSC3_DET].min_value = OSC_DET_MIN;
	hmi->pots[POT_OSC3_DET].max_value = OSC_DET_MAX;

	hmi->pots[POT_ADSR_A].min_value = ADSR_A_MIN;
	hmi->pots[POT_ADSR_A].max_value = ADSR_A_MAX;
	hmi->pots[POT_ADSR_D].min_value = ADSR_D_MIN;
	hmi->pots[POT_ADSR_D].max_value = ADSR_D_MAX;
	hmi->pots[POT_ADSR_S].min_value = ADSR_S_MIN;
	hmi->pots[POT_ADSR_S].max_value = ADSR_S_MAX;
	hmi->pots[POT_ADSR_R].min_value = ADSR_R_MIN;
	hmi->pots[POT_ADSR_R].max_value = ADSR_R_MAX;

	hmi->pots[POT_LFO_RATE].min_value = LFO_RATE_MIN;
	hmi->pots[POT_LFO_RATE].max_value = LFO_RATE_MAX;

	hmi->pots[POT_LFO_DEPTH].min_value = LFO_DEPTH_MIN;
	hmi->pots[POT_LFO_DEPTH].max_value = LFO_DEPTH_MIN;

	hmi->screens_states[SCREEN_LEFT] = SCREEN_STATE_IDLE;
	hmi->screens_states[SCREEN_RIGHT] = SCREEN_STATE_IDLE;

	disp_Init(SCREEN_LEFT);
	disp_Init(SCREEN_RIGHT);
}

void hmi_debounce_buttons(Button *bts) {
	for (int i = 0; i < NBR_OF_BUTTONS; ++i) {
		uint8_t current_reading = HAL_GPIO_ReadPin(bts[i].port, bts[i].pin);

		// detect falling edge
		if (current_reading == 0 && bts[i].last_state == 0) { //Buttons are GND (= 0) when pressed
			bts[i].waiting = 1;
			bts[i].log_cnt = 0;	// reset counter
		}

		if (bts[i].waiting == 1) {
			bts[i].log_cnt++;

			if (bts[i].log_cnt >= DEBOUNCE_NBR_OF_SAMPLES && current_reading == 0) {
				bts[i].state = BT_STATE_SET;
				bts[i].log_cnt = 0;
				bts[i].waiting = 0;
			} else {
				bts[i].state = BT_STATE_RST;
			}

		}
		bts[i].last_state = !current_reading;
	}
}

Param_Changed hmi_process_osc_buttons(Button *bts, Sys_param *sys_param) {
	Param_Changed param_changed = NO_PARAM_CHANGED;

	if (bts[BT_OSC1_ON].state == BT_STATE_SET) {
		if (sys_param->osc1.onoff == OFF) {
			sys_param->osc1.onoff = ON;
		} else {
			sys_param->osc1.onoff = OFF;
		}
		bts[BT_OSC1_ON].state = BT_STATE_RST;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}
	if (bts[BT_OSC2_ON].state == BT_STATE_SET) {
		if (sys_param->osc2.onoff == OFF) {
			sys_param->osc2.onoff = ON;
		} else {
			sys_param->osc2.onoff = OFF;
		}
		bts[BT_OSC2_ON].state = BT_STATE_RST;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}
	if (bts[BT_OSC3_ON].state == BT_STATE_SET) {
		if (sys_param->osc3.onoff == OFF) {
			sys_param->osc3.onoff = ON;
		} else {
			sys_param->osc3.onoff = OFF;
		}
		bts[BT_OSC3_ON].state = BT_STATE_RST;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}

	if (bts[BT_OSC1_WAVE].state == BT_STATE_SET) {
		sys_param->osc1.wave = (sys_param->osc1.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC1_WAVE].state = BT_STATE_RST;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}
	if (bts[BT_OSC2_WAVE].state == BT_STATE_SET) {
		sys_param->osc2.wave = (sys_param->osc2.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC2_WAVE].state = 0;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}
	if (bts[BT_OSC3_WAVE].state == BT_STATE_SET) {
		sys_param->osc3.wave = (sys_param->osc3.wave + 1) % NUMBER_OF_WAVES; // loop trough waveforms
		bts[BT_OSC3_WAVE].state = BT_STATE_RST;	// reset state
		param_changed = OSC_PARAM_CHANGED;
	}
	return param_changed;
}

Param_Changed hmi_process_pots(uint8_t *rawdata, Potentiometer *pots, Sys_param *sys_param) {

	Param_Changed param_changed = NO_PARAM_CHANGED;

	if (rawdata[POT_OSC1_AMP] != pots[POT_OSC1_AMP].last_value) {
		sys_param->osc1.amp = (float) MAP((float)rawdata[POT_OSC1_AMP], 0.0, 255.0, (float)pots[POT_OSC1_AMP].min_value, (float)pots[POT_OSC1_AMP].max_value);
		pots[POT_OSC1_AMP].last_value = rawdata[POT_OSC1_AMP];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_OSC2_AMP] != pots[POT_OSC2_AMP].last_value) {
		sys_param->osc2.amp = (float) MAP(rawdata[POT_OSC2_AMP], 0.0, 255.0, (float)pots[POT_OSC2_AMP].min_value, (float)pots[POT_OSC2_AMP].max_value);
		pots[POT_OSC2_AMP].last_value = rawdata[POT_OSC2_AMP];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_OSC3_AMP] != pots[POT_OSC3_AMP].last_value) {
		sys_param->osc3.amp = (float) MAP(rawdata[POT_OSC3_AMP], 0.0, 255.0, (float)pots[POT_OSC3_AMP].min_value, (float)pots[POT_OSC3_AMP].max_value);
		pots[POT_OSC3_AMP].last_value = rawdata[POT_OSC3_AMP];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_OSC1_DET] != pots[POT_OSC1_DET].last_value) {
		sys_param->osc1.detune = (int8_t) MAP((float)rawdata[POT_OSC1_DET], 0.0, 255.0, (float)pots[POT_OSC1_DET].min_value, (float)pots[POT_OSC1_DET].max_value);
		pots[POT_OSC1_DET].last_value = rawdata[POT_OSC1_DET];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_OSC2_DET] != pots[POT_OSC2_DET].last_value) {
		sys_param->osc2.detune = (int8_t) MAP((float)rawdata[POT_OSC2_DET], 0.0, 255.0, (float)pots[POT_OSC2_DET].min_value, (float)pots[POT_OSC2_DET].max_value);
		pots[POT_OSC2_DET].last_value = rawdata[POT_OSC2_DET];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_OSC3_DET] != pots[POT_OSC3_DET].last_value) {
		sys_param->osc3.detune = (int8_t) MAP((float)rawdata[POT_OSC3_DET], 0.0, 255.0, (float)pots[POT_OSC3_DET].min_value, (float)pots[POT_OSC3_DET].max_value);
		pots[POT_OSC3_DET].last_value = rawdata[POT_OSC3_DET];
		param_changed = OSC_PARAM_CHANGED;
	}

	if (rawdata[POT_ADSR_A] != pots[POT_ADSR_A].last_value) {
		sys_param->env.attack = (float) MAP((float)rawdata[POT_ADSR_A], 0.0, 255.0, (float)pots[POT_ADSR_A].min_value, (float)pots[POT_ADSR_A].max_value);
		pots[POT_ADSR_A].last_value = rawdata[POT_ADSR_A];
		param_changed = ADSR_PARAM_CHANGED;
	}

	if (rawdata[POT_ADSR_D] != pots[POT_ADSR_D].last_value) {
		sys_param->env.decay = (float) MAP((float)rawdata[POT_ADSR_D], 0.0, 255.0, (float)pots[POT_ADSR_D].min_value, (float)pots[POT_ADSR_D].max_value);
		pots[POT_ADSR_D].last_value = rawdata[POT_ADSR_D];
		param_changed = ADSR_PARAM_CHANGED;
	}

	if (rawdata[POT_ADSR_S] != pots[POT_ADSR_S].last_value) {
		sys_param->env.sustain = (float) MAP((float)rawdata[POT_ADSR_S], 0.0, 255.0, (float)pots[POT_ADSR_S].min_value, (float)pots[POT_ADSR_S].max_value);
		pots[POT_ADSR_S].last_value = rawdata[POT_ADSR_S];
		param_changed = ADSR_PARAM_CHANGED;
	}

	if (rawdata[POT_ADSR_R] != pots[POT_ADSR_R].last_value) {
		sys_param->env.release = (float) MAP((float)rawdata[POT_ADSR_R], 0.0, 255.0, (float)pots[POT_ADSR_R].min_value, (float)pots[POT_ADSR_R].max_value);
		pots[POT_ADSR_R].last_value = rawdata[POT_ADSR_R];
		param_changed = ADSR_PARAM_CHANGED;
	}

	if (rawdata[POT_LFO_RATE] != pots[POT_LFO_RATE].last_value) {
		sys_param->lfo.freq = (float) MAP((float)rawdata[POT_LFO_RATE], 0.0, 255.0, (float)pots[POT_LFO_RATE].min_value, (float)pots[POT_LFO_RATE].max_value);
		pots[POT_LFO_RATE].last_value = rawdata[POT_LFO_RATE];
		param_changed = LFO_PARAM_CHANGED;
	}

	if (rawdata[POT_LFO_DEPTH] != pots[POT_LFO_DEPTH].last_value) {
		sys_param->lfo.amp = (float) MAP((float)rawdata[POT_LFO_DEPTH], 0.0, 255.0, (float)pots[POT_LFO_DEPTH].min_value, (float)pots[POT_LFO_DEPTH].max_value);
		pots[POT_LFO_DEPTH].last_value = rawdata[POT_LFO_DEPTH];
		param_changed = LFO_PARAM_CHANGED;
	}

	return param_changed;
}

void hmi_screen_fsm(Hmi *hmi, Sys_param *sys_param, Param_Changed param_changed) {
	switch (hmi->screens_states[SCREEN_LEFT]) {
	case SCREEN_STATE_IDLE:
		hmi->screens_states[SCREEN_LEFT] = SCREEN_STATE_BOOTSCREEN;
		break;
	case SCREEN_STATE_BOOTSCREEN:
		hmi->screens_states[SCREEN_RIGHT] = SCREEN_STATE_BOOTSCREEN;
		disp_Booting_Screens();
		hmi->screens_states[SCREEN_LEFT] = SCREEN_STATE_OSC;
		break;
	case SCREEN_STATE_OSC:
		if (param_changed == LFO_PARAM_CHANGED)
			hmi->screens_states[SCREEN_LEFT] = SCREEN_STATE_LFO;

		disp_Clear(SCREEN_LEFT);
		disp_Draw_OSC_frame(SCREEN_LEFT);
		disp_Draw_OSC_Values(SCREEN_LEFT, &sys_param->osc1, &sys_param->osc2, &sys_param->osc3);
		disp_Refresh(SCREEN_LEFT);
		break;
	case SCREEN_STATE_ADSR:
		// Left screen is not meant to show ADSR screen
		break;
	case SCREEN_STATE_LFO:
		if (param_changed == OSC_PARAM_CHANGED)
			hmi->screens_states[SCREEN_LEFT] = SCREEN_STATE_OSC;

		disp_Clear(SCREEN_LEFT);
		disp_Draw_LFO_frame(SCREEN_LEFT);
		disp_Draw_LFO_Values(SCREEN_LEFT, &sys_param->lfo);
		disp_Refresh(SCREEN_LEFT);
		break;
	case SCREEN_STATE_ARB:
		// Left screen is not meant to show ARB screen
		break;
	default:
		break;
	}

	switch (hmi->screens_states[SCREEN_RIGHT]) {
	case SCREEN_STATE_IDLE:
		hmi->screens_states[SCREEN_RIGHT] = SCREEN_STATE_BOOTSCREEN;
		break;
	case SCREEN_STATE_BOOTSCREEN:
		hmi->screens_states[SCREEN_RIGHT] = SCREEN_STATE_ADSR;
		break;
	case SCREEN_STATE_OSC:
		// Right screen is not meant to show OSC screen
		break;
	case SCREEN_STATE_ADSR:
		disp_Init_ADSR_points();
		disp_ADSR_Remove_values_displayed();
		disp_ADSR_value_update(sys_param->env.attack, sys_param->env.decay, sys_param->env.sustain, sys_param->env.release);
		disp_ADSR_display_update();
		break;
	case SCREEN_STATE_LFO:
		// Right screen is not meant to show LFO screen
		break;
	case SCREEN_STATE_ARB:
		if (param_changed == ADSR_PARAM_CHANGED)
			hmi->screens_states[SCREEN_RIGHT] = SCREEN_STATE_ADSR;

		// TO BE IMPLEMENTED
		break;
	default:
		break;
	}
}
