/**
 * original author:  Loïc Scotto<loscot@hotmail.fr>

   ----------------------------------------------------------------------
   	Copyright (C) Loïc Scotto, 2020

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
   ----------------------------------------------------------------------
 */

#include"display_core/ssd1306.h"
#include"display_core/fonts.h"
#include "display_core/test.h"
#include "audio_core/oscillator/osc.h"


#include <stdbool.h>
#include <stdlib.h>

//#include "display_core/bitmap.h"


#ifndef INC_DISPLAY_SYNTH_H_
#define INC_DISPLAY_SYNTH_H_

int select_index_adsr;
//in order to know in which menu we are in I'll store that in different booleans for the moment
bool menu_home;
bool menu_adsr;
bool menu_arb;
bool menu_osc;

typedef struct {
	uint16_t X_pos;
	uint16_t Y_pos;
	bool is_selected;

} ADSR_point;

enum wave {sine, square, triangle};

typedef struct {
	uint16_t Vol_pos;
	enum wave onde;
	bool is_on;
	int8_t detune;
	uint16_t det_pos;

} oscillator_display;

ADSR_point First_point; // creating the five point variables of the ADSR structure
ADSR_point Attack_pt;
ADSR_point Decay_pt;
ADSR_point Sustain_pt;
ADSR_point Release_pt;

oscillator_display osc1;
oscillator_display osc2;
oscillator_display osc3;


void Init_Displays(void);

void Booting_Screens(void);

void Home_Menu(void);

void Init_ADSR_points(void);

void Draw_ADSR_points(void);

void Draw_ADSR_frame(void);

void Draw_ADSR_lines(void);

void ADSR_Shift_Select_Right(void);

void ADSR_Shift_Select_Left(void);

void ADSR_Update_Select(void);

void ADSR_display_update(void);

void ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val);

void Draw_OSC_frame(void);

void Remove_OSC_variables_displayed(void);

void Update_value_OSC_1(float amp,  Waveform wave, int8_t detune,  OnOff onoff);
void Update_value_OSC_2(float amp,  Waveform wave, int8_t detune,  OnOff onoff);
void Update_value_OSC_3(float amp,  Waveform wave, int8_t detune,  OnOff onoff);
void Draw_OSC_Var_displayed(void);


#endif /* INC_DISPLAY_SYNTH_H_ */