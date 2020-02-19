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
#include <stdbool.h>

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

ADSR_point First_point; // creating the five point variables of the ADSR structure
ADSR_point Attack_pt;
ADSR_point Decay_pt;
ADSR_point Sustain_pt;
ADSR_point Release_pt;

void Init_Displays(void);

void Init_ADSR_points(void);

void Draw_ADSR_points(void);

void Draw_ADSR_frame(void);

void Draw_ADSR_lines(void);

void ADSR_Shift_Select_Right(void);

void ADSR_Shift_Select_Left(void);

void ADSR_Update_Select(void);

void ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val);
#endif /* INC_DISPLAY_SYNTH_H_ */
