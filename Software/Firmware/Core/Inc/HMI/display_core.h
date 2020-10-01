/**
 * \file display_core.h
 * \brief Functions handling HMI graphics
 */

#include "HMI/SSD1306/fonts.h"
#include "HMI/SSD1306/ssd1306.h"
#include "audio_core/oscillator/osc.h"

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


#ifndef INC_DISPLAY_SYNTH_H_
#define INC_DISPLAY_SYNTH_H_


#define NUMBER_OF_SSD1306_DISPLAYS			2 /* Number of SSD1306 display used */

#define SSD1306_I2C_ADDR_LEFT_SCREEN		0x78 /* I2C addresses for left screen */
#define SSD1306_I2C_ADDR_RIGHT_SCREEN		0x7A /* I2C addresses for right screen */

enum{
	SSD1306_Left_Screen, SSD1306_Right_Screen
};

int select_index_adsr;
int select_index_arb;

typedef struct {
	uint16_t X_pos;
	uint16_t Y_pos;
	bool is_selected;
} ADSR_point;

typedef struct {
	uint16_t Vol_pos;
	int amp_perc; //the amplitude is here in percentage to be correctly displayed
	Waveform onde;
	bool is_on;
	int8_t detune;
	uint16_t det_pos;
	unsigned char waveform[320];
	float freq;
} oscillator_display;

typedef struct {
	uint8_t X_pos;
	uint8_t Y_pos;
	bool is_selected;
} Arb_points;

//creating a tab of arb_points
#define sizeOfTab 21
Arb_points tab_arb_points[sizeOfTab];

ADSR_point First_point; // creating the five point variables of the ADSR structure
ADSR_point Attack_pt;
ADSR_point Decay_pt;
ADSR_point Sustain_pt;
ADSR_point Release_pt;

oscillator_display osc1;
oscillator_display osc2;
oscillator_display osc3;
oscillator_display lfo;

void disp_Init_Displays();

void disp_Refresh();

void disp_Booting_Screens();

void disp_Home_Menu();

void disp_Init_ADSR_points();

void disp_Draw_ADSR_points();

void disp_Draw_ADSR_frame();

void disp_Draw_ADSR_lines();

void disp_ADSR_Shift_Select_Right();

void disp_ADSR_Shift_Select_Left();

void disp_ADSR_Update_Select();

void disp_ADSR_Remove_values_displayed();
void disp_ADSR_display_update();

void disp_ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val);

void disp_Draw_OSC_frame();

void disp_Draw_OSC_Values(Oscillator_param *osc1, Oscillator_param *osc2, Oscillator_param *osc3);

void disp_Draw_arb_frame();
void disp_Init_tab_arb();
void disp_Update_values_arb_tab(Arb_points tab[]);
void disp_Remove_arb_points();
void disp_Draw_ARB_points();
void disp_ARB_Update_Select();
void disp_ARB_Shift_Select_Right();
void disp_ARB_Shift_Select_Left();
void disp_Update_arb_selected(double value);

void disp_draw_LFO_frame();
void disp_update_LFO_value(float freq, float amp, Waveform wave, int8_t detune, OnOff onoff);
void disp_draw_LFO_value();

#endif /* INC_DISPLAY_SYNTH_H_ */
