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


#include "display_synth.h"

void Init_ADSR_points(void){
	First_point.X_pos = 0;
	First_point.Y_pos = 0;

	Attack_pt.X_pos = 0;
	Attack_pt.Y_pos = 0;

	Decay_pt.X_pos = 0;
	Decay_pt.Y_pos=0;

	Sustain_pt.X_pos=0;
	Sustain_pt.Y_pos=0;

	Release_pt.X_pos=0;
	Release_pt.Y_pos=0;

}

void Draw_ADSR_points(void){

}

void Draw_ADSR_frame(void) {

	SSD1306_GotoXY(110, 0);
	SSD1306_Puts("ADSR:", &Font11x18, 1);


	SSD1306_DrawLine(0, 12, 128, 12, SSD1306_COLOR_WHITE);

	// drawing onto the second screen
	SSD1306_GotoXY_2(0, 0);
	SSD1306_Puts_2("Mini-MOOD|OSC.SET", &Font_7x10, 1);
	SSD1306_DrawLine_2(0, 12, 128, 12, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY_2(0, 14);
	SSD1306_Puts_2("OSC displayed here:", &Font_7x10, 1);

	SSD1306_DrawLine_2(0, 12, 128, 12, SSD1306_COLOR_WHITE);

	//SSD1306_GotoXY (10, 30);
	// SSD1306_Puts ("  Mood :)", &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	// SSD1306_ScrollLeft(0x00, 0x0f);

}
