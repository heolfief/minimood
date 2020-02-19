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


#include "display_core/display_synth.h"

void Init_Displays(void){
	SSD1306_Init();  // initialise
	SSD1306_Init_2(); //Initialise the second screen

	SSD1306_Clear();
	SSD1306_Clear_2();
}

void Init_ADSR_points(void){
	First_point.X_pos = 5; //origin of the ADSR grid
	First_point.Y_pos = 61;

	Attack_pt.X_pos = 38+5;
	Attack_pt.Y_pos = 20;

	Decay_pt.X_pos = 57+5;
	Decay_pt.Y_pos=31;

	Sustain_pt.X_pos=85+5;
	Sustain_pt.Y_pos=31;

	Release_pt.X_pos=100+5;
	Release_pt.Y_pos=61;

}

void Draw_ADSR_points(void){
	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle(First_point.X_pos-1, First_point.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);

	//then the Attack
	SSD1306_DrawFilledRectangle(Attack_pt.X_pos-1, Attack_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Attack_pt.X_pos+1, Attack_pt.Y_pos-11);
	SSD1306_Putc('A', &Font_7x10, SSD1306_COLOR_WHITE);

	//then the Decay
	SSD1306_DrawFilledRectangle(Decay_pt.X_pos-1, Decay_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Decay_pt.X_pos+1, Decay_pt.Y_pos-11);
	SSD1306_Putc('D', &Font_7x10, SSD1306_COLOR_WHITE);

	//then the Sustain
	SSD1306_DrawFilledRectangle(Sustain_pt.X_pos-1, Sustain_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Sustain_pt.X_pos+1, Sustain_pt.Y_pos-11);
	SSD1306_Putc('S', &Font_7x10, SSD1306_COLOR_WHITE);

	//then the Release
	SSD1306_DrawFilledRectangle(Release_pt.X_pos-1, Release_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Release_pt.X_pos+1, Release_pt.Y_pos-11);
	SSD1306_Putc('R', &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen(); //display


}

void Draw_ADSR_frame(void) {


	SSD1306_Clear();
	SSD1306_Clear_2();

	SSD1306_GotoXY(83, 0);
	SSD1306_Puts("ADSR", &Font_11x18, 1);


	SSD1306_DrawLine(First_point.X_pos, First_point.Y_pos, 120, First_point.Y_pos, SSD1306_COLOR_WHITE); //drawing the scale bar
	SSD1306_DrawLine(38+5, 61-2, 38+5, 61+2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawLine(76+5, 61-2, 76+5, 61+2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawTriangle(120, 61-2, 120, 61+2, 125, 61, SSD1306_COLOR_WHITE);

	// drawing onto the second screen
	SSD1306_GotoXY_2(0, 0);
	SSD1306_Puts_2("OCS screens", &Font_7x10, 1);
	SSD1306_DrawLine_2(0, 12, 128, 12, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY_2(0, 14);
	SSD1306_Puts_2("work in prgress", &Font_7x10, 1);

	SSD1306_DrawLine_2(0, 12, 128, 12, SSD1306_COLOR_WHITE);

	//SSD1306_GotoXY (10, 30);
	// SSD1306_Puts ("  Mood :)", &Font_11x18, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	// SSD1306_ScrollLeft(0x00, 0x0f);

}

void Draw_ADSR_lines(void){
	SSD1306_DrawLine(First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_WHITE);


	SSD1306_UpdateScreen();
}
