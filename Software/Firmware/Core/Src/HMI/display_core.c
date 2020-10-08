/**
 * \file display_core.c
 * \brief Functions handling HMI graphics
 */

#include "HMI/display_core.h"

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

// bmp data is here
#include "HMI/waveforms_bmp.h"

SSD1306_t SSD1306_Screens[NUMBER_OF_SSD1306_DISPLAYS];

void disp_Init(uint8_t screen_ID) {
	SSD1306_Screens[SSD1306_Left_Screen].i2c_address = SSD1306_I2C_ADDR_LEFT_SCREEN;
	SSD1306_Screens[SSD1306_Right_Screen].i2c_address = SSD1306_I2C_ADDR_RIGHT_SCREEN;
	SSD1306_Init(&SSD1306_Screens[screen_ID]);
	SSD1306_Clear(&SSD1306_Screens[screen_ID]);
}

void disp_Clear(uint8_t screen_ID) {
	SSD1306_Clear(&SSD1306_Screens[screen_ID]);
}

void disp_Refresh(uint8_t screen_ID) {
	SSD1306_UpdateScreen(&SSD1306_Screens[screen_ID]);
}

void disp_Splashscreen() {
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "   Home  of", &Font_11x18, 1);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 47, 25);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Mini-", &Font_16x26, 1);

	// drawing onto the second screen
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "the famous", &Font_11x18, 1);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 25);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "MOOD", &Font_16x26, 1);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 44, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "INSA Rennes", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
}

void disp_Booting() {
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Systems are", &Font_11x18, 1);

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading", &Font_11x18, 1);

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 22);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "display_core ", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 22);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading  ", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	for (int i = 0; i < 3; ++i) {
		HAL_Delay(20);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);

		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	}

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 33);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "checking ", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	for (int i = 0; i < 3; ++i) {
		HAL_Delay(20);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);

		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	}

	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], " OK", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	HAL_Delay(25);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 43);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "audio_core", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 43);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading  ", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	for (int i = 0; i < 3; ++i) {
		HAL_Delay(20);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);

		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	}

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "checking ", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	for (int i = 0; i < 3; ++i) {
		HAL_Delay(20);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);

		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
		SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	}

	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], " OK", &Font_7x10, 1);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	HAL_Delay(25);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	HAL_Delay(200);
	disp_Splashscreen();
	HAL_Delay(500);
}

void disp_Draw_OSC_frame(uint8_t screen_ID) {
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 42, 0, 42, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 85, 0, 85, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 0, 21, 127, 21, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 5, 0);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 47, 0);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 90, 0);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);

	//drawing frame for the first Osc
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1, 23);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 0, 43, 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 20, 43, 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 0, 47);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(&SSD1306_Screens[screen_ID], 0, 58, 38, 5, SSD1306_COLOR_WHITE);

	//drawing frame for the Second Osc
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1 + 43, 23);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 44 + 0, 43, 43 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 44 + 20, 43, 44 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 43 + 0, 47);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(&SSD1306_Screens[screen_ID], 44 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);

	//drawing frame for the third Osc
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1 + 86, 23);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 87 + 0, 43, 86 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 87 + 20, 43, 87 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 86 + 0, 47);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(&SSD1306_Screens[screen_ID], 87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);
}

void disp_Draw_OSC_Values(uint8_t screen_ID, const Oscillator_param *osc1, const Oscillator_param *osc2, const Oscillator_param *osc3) {
	uint16_t osc1_vol_pos = floor(osc1->amp * 39);
	uint16_t osc1_det_pos = ((osc1->detune + 12) * 40) / 24;
	uint16_t osc2_vol_pos = floor(osc2->amp * 39);
	uint16_t osc2_det_pos = ((osc2->detune + 12) * 40) / 24;
	uint16_t osc3_vol_pos = floor(osc3->amp * 39);
	uint16_t osc3_det_pos = ((osc3->detune + 12) * 40) / 24;
	char det_itoa_buffer[3];
	uint8_t *osc1_waveform_symbol_ptr = NULL;
	uint8_t *osc2_waveform_symbol_ptr = NULL;
	uint8_t *osc3_waveform_symbol_ptr = NULL;

	/* OSC1 */ // -----------------------------------------------------------------------------------------
	/* ON/OFF Display */
	if (osc1->onoff == ON) {
		for (int i = 0; i < 41; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 5, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 0; i < 41; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 5, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], 0, 58, osc1_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], osc1_det_pos, 39, osc1_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc1->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1 + 20, 30);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

	/* Assign waveform symbol data to pointer */
	switch (osc1->wave) {
	case SIN:
		osc1_waveform_symbol_ptr = sin_bmp;
		break;
	case SQR:
		osc1_waveform_symbol_ptr = square_bmp;
		break;
	case TRI:
		osc1_waveform_symbol_ptr = triangle_bmp;
		break;
	case SAW:
		osc1_waveform_symbol_ptr = saw_bmp;
		break;
	case ARB:
		osc1_waveform_symbol_ptr = arb_bmp;
		break;
	default:
		osc1_waveform_symbol_ptr = sin_bmp;
		break;
	}

	/* Draw waveform symbol */
	SSD1306_DrawBitmap(&SSD1306_Screens[screen_ID], 0, 11, osc1_waveform_symbol_ptr, bmp_width, bmp_height, 1);

	/* OSC2 */ // -----------------------------------------------------------------------------------------
	/* ON/OFF Display */
	if (osc2->onoff == ON) {
		for (int i = 44; i < 84; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 47, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 44; i < 84; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 47, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], 44, 58, osc2_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 44 + osc2_det_pos, 39, 44 + osc2_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc2->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1 + 63, 30);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

	/* Assign waveform symbol data to pointer */
	switch (osc2->wave) {
	case SIN:
		osc2_waveform_symbol_ptr = sin_bmp;
		break;
	case SQR:
		osc2_waveform_symbol_ptr = square_bmp;
		break;
	case TRI:
		osc2_waveform_symbol_ptr = triangle_bmp;
		break;
	case SAW:
		osc2_waveform_symbol_ptr = saw_bmp;
		break;
	case ARB:
		osc2_waveform_symbol_ptr = arb_bmp;
		break;
	default:
		osc2_waveform_symbol_ptr = sin_bmp;
		break;
	}

	/* Draw waveform symbol */
	SSD1306_DrawBitmap(&SSD1306_Screens[screen_ID], 44, 11, osc2_waveform_symbol_ptr, bmp_width, bmp_height, 1);

	/* OSC3 */ // -----------------------------------------------------------------------------------------
	/* ON/OFF Display */
	if (osc3->onoff == ON) {
		for (int i = 87; i < 127; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 90, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 87; i < 127; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[screen_ID], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 90, 0);
		SSD1306_Puts(&SSD1306_Screens[screen_ID], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], 87, 58, osc3_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 87 + osc3_det_pos, 39, 87 + osc3_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc3->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 1 + 105, 30);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

	/* Assign waveform symbol data to pointer */
	switch (osc3->wave) {
	case SIN:
		osc3_waveform_symbol_ptr = sin_bmp;
		break;
	case SQR:
		osc3_waveform_symbol_ptr = square_bmp;
		break;
	case TRI:
		osc3_waveform_symbol_ptr = triangle_bmp;
		break;
	case SAW:
		osc3_waveform_symbol_ptr = saw_bmp;
		break;
	case ARB:
		osc3_waveform_symbol_ptr = arb_bmp;
		break;
	default:
		osc3_waveform_symbol_ptr = sin_bmp;
		break;
	}

	/* Draw waveform symbol */
	SSD1306_DrawBitmap(&SSD1306_Screens[screen_ID], 87, 11, osc3_waveform_symbol_ptr, bmp_width, bmp_height, 1);
}

void disp_Draw_LFO_frame(uint8_t screen_ID) {
	/* Draw title */
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "LFO", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], 0, (63 + 17) / 2, 127, (63 + 17) / 2, SSD1306_COLOR_WHITE);
}

void disp_Draw_LFO_Values(uint8_t screen_ID, const Oscillator_param *lfo, uint16_t actual_lfo_sample) {
	static float old_lfo_samples[LFO_NBR_SAMPLES_IN_HISTORY];
	static float old_lfo_samples_interpolated[LFO_NBR_SAMPLES_INTERPOLATED];
	int16_t normalized_actual_lfo_sample = actual_lfo_sample - lfo->amp * (MAX_LUT_VALUE / 2.0);

	for (int i = 0; i < LFO_NBR_SAMPLES_IN_HISTORY - 1; ++i) {
		old_lfo_samples[i] = old_lfo_samples[i + 1];
	}
	old_lfo_samples[LFO_NBR_SAMPLES_IN_HISTORY - 1] = normalized_actual_lfo_sample;

	cubic_Intrpl(old_lfo_samples, LFO_NBR_SAMPLES_IN_HISTORY, old_lfo_samples_interpolated, LFO_NBR_SAMPLES_INTERPOLATED);

	for (int i = 1; i < LFO_NBR_SAMPLES_INTERPOLATED; ++i) {
		uint8_t xpx = MAP(i, 0, LFO_NBR_SAMPLES_INTERPOLATED, 0, 127);
		uint8_t xpx_old = MAP(i - 1, 0, LFO_NBR_SAMPLES_INTERPOLATED, 0, 127);
		uint8_t ypx = MAP((int16_t )old_lfo_samples_interpolated[i], -MAX_LUT_VALUE/2.0, MAX_LUT_VALUE/2.0, 17, 63);
		uint8_t ypx_old = MAP((int16_t )old_lfo_samples_interpolated[i - 1], -MAX_LUT_VALUE/2.0, MAX_LUT_VALUE/2.0, 17, 63);
		SSD1306_DrawLine(&SSD1306_Screens[screen_ID], xpx_old, ypx_old, xpx, ypx, SSD1306_COLOR_WHITE);	// Interpolate curve between 2 samples
	}
	uint8_t ypx = MAP(normalized_actual_lfo_sample, -MAX_LUT_VALUE/2.0, MAX_LUT_VALUE/2.0, 17, 63);
	SSD1306_DrawFilledCircle(&SSD1306_Screens[screen_ID], 127 - 1 - 1, ypx - 1, 2, SSD1306_COLOR_WHITE);
}

void disp_Draw_ADSR_frame(uint8_t screen_ID) {
	/* Draw title */
	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], 83, 0);
	SSD1306_Puts(&SSD1306_Screens[screen_ID], "ADSR", &Font_11x18, SSD1306_COLOR_WHITE);

	/* Draw the axis */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], ADSR_DISP_X_MIN, ADSR_DISP_Y_MAX, 120, ADSR_DISP_Y_MAX, SSD1306_COLOR_WHITE);
	SSD1306_DrawTriangle(&SSD1306_Screens[screen_ID], 120, 61 - 2, 120, 61 + 2, 125, 61, SSD1306_COLOR_WHITE);
}

void disp_Draw_ADSR_Values(uint8_t screen_ID, const Envelope *env) {
	float total_time = env->attack + env->decay + env->release; /* Total time is second */
	uint8_t total_time_corresponding_X_px = ADSR_DISP_X_MAX - ADSR_DISP_X_MIN - ADSR_DISP_NOTE_LENGTH; /* Number of X pixel on screen that represent total time */

	uint8_t origin_point_X = ADSR_DISP_X_MIN;
	uint8_t origin_point_Y = ADSR_DISP_Y_MAX;

	uint8_t attack_pt_X = MAP(env->attack, 0, total_time, 0, total_time_corresponding_X_px) + origin_point_X;
	uint8_t attack_pt_Y = ADSR_DISP_Y_MIN;

	uint8_t decay_pt_X = MAP(env->decay, 0, total_time, 0, total_time_corresponding_X_px) + attack_pt_X;

	uint8_t sustain_pt_X = decay_pt_X + ADSR_DISP_NOTE_LENGTH;
	uint8_t sustain_pt_Y = MAP(env->sustain, 0, 1, ADSR_DISP_Y_MAX, ADSR_DISP_Y_MIN); // If sustain is zero, Y is ADSR_DISP_Y_MAX, if 1 is ADSR_DISP_Y_MIN

	uint8_t decay_pt_Y = sustain_pt_Y;

	uint8_t release_pt_X = ADSR_DISP_X_MAX; // This is fixed. Also eq. to : MAP(env->release, 0, total_time, 0, total_time_corresponding_X_px) + sustain_pt_X;
	uint8_t release_pt_Y = ADSR_DISP_Y_MAX;

	/* Draw axis ticks under attack and decay curves */
	float nbr_of_ticks = ((env->attack + env->decay) / ADSR_DISP_AXIS_TICKS_SPACING);
	for (int i = 1; i < floor(nbr_of_ticks); ++i) {
		uint8_t spacing = (sustain_pt_X - ADSR_DISP_X_MIN) / nbr_of_ticks;
		SSD1306_DrawLine(&SSD1306_Screens[screen_ID], i * spacing + ADSR_DISP_X_MIN, ADSR_DISP_Y_MAX - 2, i * spacing + ADSR_DISP_X_MIN, ADSR_DISP_Y_MAX + 2, SSD1306_COLOR_WHITE);
	}

	/* Draw tilted ticks on axis */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], decay_pt_X + (sustain_pt_X - decay_pt_X) / 2 - 2 + 2, ADSR_DISP_Y_MAX - 2, decay_pt_X + (sustain_pt_X - decay_pt_X) / 2 - 2 - 2, ADSR_DISP_Y_MAX + 2, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], decay_pt_X + (sustain_pt_X - decay_pt_X) / 2 + 2 + 2, ADSR_DISP_Y_MAX - 2, decay_pt_X + (sustain_pt_X - decay_pt_X) / 2 + 2 - 2, ADSR_DISP_Y_MAX + 2, SSD1306_COLOR_WHITE);

	/* Draw dashed lines between D point and axis, and between S point and axis */
	nbr_of_ticks = ceil((ADSR_DISP_Y_MAX - sustain_pt_Y) / 5.0);
	for (int i = 0; i < nbr_of_ticks; ++i) {
		uint8_t spacing = 5;
		SSD1306_DrawLine(&SSD1306_Screens[screen_ID], decay_pt_X, ADSR_DISP_Y_MAX - (i * spacing - 1), decay_pt_X, ADSR_DISP_Y_MAX - (i * spacing + 1), SSD1306_COLOR_WHITE);
		SSD1306_DrawLine(&SSD1306_Screens[screen_ID], sustain_pt_X, ADSR_DISP_Y_MAX - (i * spacing - 1), sustain_pt_X, ADSR_DISP_Y_MAX - (i * spacing + 1), SSD1306_COLOR_WHITE);
	}

	/* Draw axis ticks under release curve */
	nbr_of_ticks = (env->release / ADSR_DISP_AXIS_TICKS_SPACING);
	for (int i = 1; i < ceil(nbr_of_ticks); ++i) {
		uint8_t spacing = (ADSR_DISP_X_MAX - sustain_pt_X) / nbr_of_ticks;
		SSD1306_DrawLine(&SSD1306_Screens[screen_ID], i * spacing + sustain_pt_X, ADSR_DISP_Y_MAX - 2, i * spacing + sustain_pt_X, ADSR_DISP_Y_MAX + 2, SSD1306_COLOR_WHITE);
	}

// Each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center

	/* Draw first point */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], origin_point_X - 1, origin_point_Y - 1, 2, 2, SSD1306_COLOR_WHITE);

	/* Draw attack point */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], attack_pt_X - 1, attack_pt_Y - 1, 2, 2, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], attack_pt_X + 1, attack_pt_Y - 11);
	SSD1306_Putc(&SSD1306_Screens[screen_ID], 'A', &Font_7x10, SSD1306_COLOR_WHITE);

	/* Draw decay point */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], decay_pt_X - 1, decay_pt_Y - 1, 2, 2, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], decay_pt_X + 1, decay_pt_Y - 11);
	SSD1306_Putc(&SSD1306_Screens[screen_ID], 'D', &Font_7x10, SSD1306_COLOR_WHITE);

	/* Draw sustain point */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], sustain_pt_X - 1, sustain_pt_Y - 1, 2, 2, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], sustain_pt_X + 1, sustain_pt_Y - 11);
	SSD1306_Putc(&SSD1306_Screens[screen_ID], 'S', &Font_7x10, SSD1306_COLOR_WHITE);

	/* Draw release point */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[screen_ID], release_pt_X - 1, release_pt_Y - 1, 2, 2, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[screen_ID], release_pt_X + 1, release_pt_Y - 13);
	SSD1306_Putc(&SSD1306_Screens[screen_ID], 'R', &Font_7x10, SSD1306_COLOR_WHITE);

	/* Draw lines between points */
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], origin_point_X, origin_point_Y, attack_pt_X, attack_pt_Y, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], attack_pt_X, attack_pt_Y, decay_pt_X, decay_pt_Y, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], decay_pt_X, decay_pt_Y, sustain_pt_X, sustain_pt_Y, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[screen_ID], sustain_pt_X, sustain_pt_Y, release_pt_X, release_pt_Y, SSD1306_COLOR_WHITE);
}

void disp_Draw_arb_frame() {
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "Wave Editor", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 0, 19, 127, 19, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
}

void disp_Init_tab_arb() {
	uint16_t inc = 0;
	for (int i = 0; i < sizeOfTab; i++) {
		tab_arb_points[i].Y_pos = 43;
		tab_arb_points[i].X_pos = inc;
		inc = inc + 6;
	}
	tab_arb_points[0].is_selected = true;
}

//function to update everything from an outside tab composed of points
void disp_Update_values_arb_tab(Arb_points tab[]) {
	for (int i = 0; i < sizeOfTab; i++) {
		if (tab[i].Y_pos > 24 && tab[i].Y_pos < 61)
			tab_arb_points[i].Y_pos = tab[i].Y_pos;
		tab_arb_points[i].is_selected = tab[i].is_selected;
	}
}

void disp_ARB_Update_Select() {
	for (int i = 0; i < sizeOfTab; i++) {
		tab_arb_points[i].is_selected = (select_index_arb == i) ? true : false;
	}
//Draw_ADSR_points();
}
void disp_ARB_Shift_Select_Right() {
	select_index_arb = (select_index_arb + 1) % (sizeOfTab);
	disp_ARB_Update_Select();
}

void disp_ARB_Shift_Select_Left() {
	if (select_index_arb == 0)
		select_index_arb = sizeOfTab;
	select_index_arb = (select_index_arb - 1) % (sizeOfTab);
	disp_ARB_Update_Select();
}

void disp_Update_arb_selected(double value) {
	double pos = (value * 34.00 + 24.00); //valid if value is between 0 and 1.
	for (int i = 0; i < sizeOfTab; i++) {
		if (tab_arb_points[i].is_selected) {
			tab_arb_points[i].Y_pos = (uint8_t) pos;
		}
	}
}

void disp_Draw_ARB_points() {
	int size_limit_h = 0;
	int size_limit_w = 0;
	int start_h = 0;
	for (int i = 0; i < sizeOfTab; i++) {
		size_limit_h = 3;
		size_limit_w = 3;
		start_h = 0;
		if (tab_arb_points[i].is_selected) {
			size_limit_h = 5;
			start_h = -2;
		}

		for (int h = start_h; h < size_limit_h; h++) {
			for (int w = 0; w < size_limit_w; w++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + w, tab_arb_points[i].Y_pos + h, SSD1306_COLOR_WHITE);
				//if a point is not selected then the pixels around it will be cleaned.
				if (tab_arb_points[i].is_selected == false) {
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);

					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);
				}

			}
		}
	}

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
}

void disp_Remove_arb_points() {
	for (int w = 0; w < 127; w++) {
		for (int h = 24; h < 64; h++) {
			SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Right_Screen], w, h, SSD1306_COLOR_BLACK);
		}
	}
}
