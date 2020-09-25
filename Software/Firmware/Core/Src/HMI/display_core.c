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

#include "HMI/display_core.h"

// bmp data is here
#include "HMI/waveforms_bmp.h"


void Init_Displays(void) {
	SSD1306_Init();  // initialise
	SSD1306_Init_2(); //Initialise the second screen

	SSD1306_Clear();
	SSD1306_Clear_2();
}

void Home_Menu(void) {
	SSD1306_Clear();
	SSD1306_Clear_2();

	SSD1306_GotoXY(0, 0);
	SSD1306_Puts("   Home  of", &Font_11x18, 1);
	SSD1306_DrawLine(0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(47, 25);
	SSD1306_Puts("Mini-", &Font_16x26, 1);

	// drawing onto the second screen
	SSD1306_GotoXY_2(0, 0);
	SSD1306_Puts_2("the famous", &Font_11x18, 1);
	SSD1306_DrawLine_2(0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY_2(0, 25);
	SSD1306_Puts_2("MOOD", &Font_16x26, 1);

	SSD1306_GotoXY_2(44, 53);
	SSD1306_Puts_2("INSA Rennes", &Font_7x10, 1);

	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();

}

void Booting_Screens(void) {
	SSD1306_Clear();
	SSD1306_Clear_2();

	SSD1306_GotoXY(0, 0);
	SSD1306_Puts("Systems are", &Font_11x18, 1);
	SSD1306_DrawLine(0, 19, 128, 19, SSD1306_COLOR_WHITE);
	// drawing onto the second screen
	SSD1306_GotoXY_2(0, 0);
	SSD1306_Puts_2("loading", &Font_11x18, 1);
	SSD1306_DrawLine_2(0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(0, 22);
	SSD1306_Puts("Display_core ", &Font_7x10, 1);
	SSD1306_GotoXY_2(0, 22);
	SSD1306_Puts_2("loading  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);

	SSD1306_GotoXY(0, 33);
	SSD1306_Puts("Displays set", &Font_7x10, 1);
	SSD1306_GotoXY_2(0, 33);
	SSD1306_Puts_2("checking  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2("OK.", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);

	SSD1306_GotoXY(0, 43);
	SSD1306_Puts("Audio_core", &Font_7x10, 1);
	SSD1306_GotoXY_2(0, 43);
	SSD1306_Puts_2("loading  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);

	SSD1306_GotoXY(0, 53);
	SSD1306_Puts("Audio set", &Font_7x10, 1);
	SSD1306_GotoXY_2(0, 53);
	SSD1306_Puts_2("checking  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2(".", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);
	SSD1306_Puts_2("OK.", &Font_7x10, 1);
	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();
	HAL_Delay(400);

	SSD1306_UpdateScreen(); //display
	SSD1306_UpdateScreen_2();

	HAL_Delay(2000);
	Home_Menu();
	HAL_Delay(2000);

}

void Init_ADSR_points(void) {
	First_point.X_pos = 5; //origin of the ADSR grid
	First_point.Y_pos = 61;
	First_point.is_selected = false;

	Attack_pt.X_pos = 38 + 5;
	Attack_pt.Y_pos = 20;
	Attack_pt.is_selected = false;

	Decay_pt.X_pos = 57 + 5;
	Decay_pt.Y_pos = 31;
	Decay_pt.is_selected = false;

	Sustain_pt.X_pos = 85 + 5;
	Sustain_pt.Y_pos = 31;
	Sustain_pt.is_selected = false;

	Release_pt.X_pos = 100 + 5;
	Release_pt.Y_pos = 61;
	Release_pt.is_selected = false;

	select_index_adsr = 0;
	menu_adsr = true;
}

void Draw_ADSR_points(void) {
	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle_2(First_point.X_pos - 1, First_point.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);

	//then the Attack
	SSD1306_DrawFilledRectangle_2(Attack_pt.X_pos - 1, Attack_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY_2(Attack_pt.X_pos + 1, Attack_pt.Y_pos - 11);
	SSD1306_Putc_2('A', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Attack_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle_2(Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	}

	//then the Decay
	SSD1306_DrawFilledRectangle_2(Decay_pt.X_pos - 1, Decay_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY_2(Decay_pt.X_pos + 1, Decay_pt.Y_pos - 11);
	SSD1306_Putc_2('D', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Decay_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle_2(Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Sustain
	SSD1306_DrawFilledRectangle_2(Sustain_pt.X_pos - 1, Sustain_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY_2(Sustain_pt.X_pos + 1, Sustain_pt.Y_pos - 11);
	SSD1306_Putc_2('S', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Sustain_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle_2(Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Release
	SSD1306_DrawFilledRectangle_2(Release_pt.X_pos - 1, Release_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY_2(Release_pt.X_pos + 1, Release_pt.Y_pos - 11);
	SSD1306_Putc_2('R', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Release_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle_2(Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//SSD1306_UpdateScreen_2(); //display done in value update function

}

void Draw_ADSR_frame(void) {

	SSD1306_Clear_2();

	SSD1306_GotoXY_2(83, 0);
	SSD1306_Puts_2("ADSR", &Font_11x18, 1);

	SSD1306_DrawLine_2(First_point.X_pos, First_point.Y_pos, 120, First_point.Y_pos, SSD1306_COLOR_WHITE); //drawing the scale bar
	SSD1306_DrawLine_2(38 + 5, 61 - 2, 38 + 5, 61 + 2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawLine_2(76 + 5, 61 - 2, 76 + 5, 61 + 2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawTriangle_2(120, 61 - 2, 120, 61 + 2, 125, 61, SSD1306_COLOR_WHITE);

}

void Draw_ADSR_lines(void) {
	SSD1306_DrawLine_2(First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine_2(Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine_2(Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine_2(Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_WHITE);

	//SSD1306_UpdateScreen_2(); done in ADSR_display_update
}

void ADSR_Shift_Select_Right(void) {
	select_index_adsr = (select_index_adsr + 1) % 4;
	ADSR_Update_Select();

}

void ADSR_Shift_Select_Left(void) {
	if (select_index_adsr == 0)
		select_index_adsr = 4;
	select_index_adsr = (select_index_adsr - 1) % 4;

	ADSR_Update_Select();

}

void ADSR_Remove_values_displayed(void) {
	//same code as draw ADSR points but in black colors :

	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle_2(First_point.X_pos - 1, First_point.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);

	//then the Attack
	SSD1306_DrawFilledRectangle_2(Attack_pt.X_pos - 1, Attack_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY_2(Attack_pt.X_pos + 1, Attack_pt.Y_pos - 11);
	SSD1306_Putc_2('A', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Attack_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle_2(Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	}

	//then the Decay
	SSD1306_DrawFilledRectangle_2(Decay_pt.X_pos - 1, Decay_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY_2(Decay_pt.X_pos + 1, Decay_pt.Y_pos - 11);
	SSD1306_Putc_2('D', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Decay_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle_2(Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Sustain
	SSD1306_DrawFilledRectangle_2(Sustain_pt.X_pos - 1, Sustain_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY_2(Sustain_pt.X_pos + 1, Sustain_pt.Y_pos - 11);
	SSD1306_Putc_2('S', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Sustain_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle_2(Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Release
	SSD1306_DrawFilledRectangle_2(Release_pt.X_pos - 1, Release_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY_2(Release_pt.X_pos + 1, Release_pt.Y_pos - 11);
	SSD1306_Putc_2('R', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Release_pt.is_selected == true) {
		SSD1306_DrawRectangle_2(Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle_2(Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the lines will be drawn black :

	SSD1306_DrawLine_2(First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine_2(Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine_2(Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine_2(Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_BLACK);

	//redraw the damaged frame points
	//Draw_ADSR_frame(); already done in function ADSR_display_update

	//SSD1306_UpdateScreen_2(); //display

}

void ADSR_Update_Select(void) {
	Attack_pt.is_selected = (select_index_adsr == 0) ? true : false;
	Decay_pt.is_selected = (select_index_adsr == 1) ? true : false;
	Sustain_pt.is_selected = (select_index_adsr == 2) ? true : false;
	Release_pt.is_selected = (select_index_adsr == 3) ? true : false;

	Draw_ADSR_points();

}

void ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val) {
	//the values should be fetched in the sys.param
	int release_pos_x_relative = (release_val * 30) / 2;
	int sustain_pos_y_relative = 28 * sustain_val;
	int attack_pos_x_relative = (23 * attack_val) / 2;
	int decay_pos_x_relatve = (30 * decay_val) / 2;

	Attack_pt.X_pos = attack_pos_x_relative + 20;
	Decay_pt.X_pos = decay_pos_x_relatve + 38 + 15;
	Sustain_pt.Y_pos = (31 + (28 - sustain_pos_y_relative));
	Release_pt.X_pos = release_pos_x_relative + 92;

}

void ADSR_display_update(void) {
	//SSD1306_Clear_2();
	Draw_ADSR_frame();
	Draw_ADSR_points();
	Draw_ADSR_lines();
	SSD1306_UpdateScreen_2();
}

void Draw_OSC_frame(void) {
	SSD1306_Clear();

	SSD1306_DrawLine(42, 0, 42, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(85, 0, 85, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(0, 21, 127, 21, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(5, 0);
	SSD1306_Puts("OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(47, 0);
	SSD1306_Puts("OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(90, 0);
	SSD1306_Puts("OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);

	//drawing frame for the first Oscill
	SSD1306_GotoXY(1, 23);
	SSD1306_Puts("Det.", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(0, 43, 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(20, 43, 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0
	//SSD1306_DrawLine(15, 34, 15, 42, SSD1306_COLOR_WHITE); //test cursor

	//vol display

	SSD1306_GotoXY(0, 47);
	SSD1306_Puts("Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume

	//drawing frame for the Second Oscill
	SSD1306_GotoXY(1 + 43, 23);
	SSD1306_Puts("Det.", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(44 + 0, 43, 43 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(44 + 20, 43, 44 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//SSD1306_DrawLine(43+15, 34, 43+15, 42, SSD1306_COLOR_WHITE); //test cursor

	//vol display
	SSD1306_GotoXY(43 + 0, 47);
	SSD1306_Puts("Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(44 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(44+0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume

	//drawing frame for the third Oscill
	SSD1306_GotoXY(1 + 86, 23);
	SSD1306_Puts("Det.", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(87 + 0, 43, 86 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(87 + 20, 43, 87 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0
	//SSD1306_GotoXY(87 + 20, 41);
	//SSD1306_Putc('0', &Font_7x10, SSD1306_COLOR_WHITE);

	//SSD1306_DrawLine(86 + 15, 34, 86 + 15, 42, SSD1306_COLOR_WHITE); //test cursor

	//vol display
	SSD1306_GotoXY(86 + 0, 47);
	SSD1306_Puts("vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(87 + 0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume

	SSD1306_UpdateScreen();
}

void Remove_OSC_variables_displayed(void) {
	//osc1:
	SSD1306_DrawLine(osc1.det_pos, 39, osc1.det_pos, 45, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(0, 58, osc1.Vol_pos, 5, SSD1306_COLOR_BLACK); //remove volume
	SSD1306_DrawRectangle(0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame
	SSD1306_DrawLine(0, 43, 40, 43, SSD1306_COLOR_WHITE); //redraw the detune line
	SSD1306_DrawLine(20, 43, 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	SSD1306_DrawBitmap(0, 11, osc1.waveform, bmp_width, bmp_height, 0); //removing the old waveform logo

	//osc2:
	SSD1306_DrawLine(44 + osc2.det_pos, 39, 44 + osc2.det_pos, 45, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(44 + 0, 58, osc2.Vol_pos, 5, SSD1306_COLOR_BLACK); //test for volume
	SSD1306_DrawRectangle(44 + 0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame
	SSD1306_DrawLine(44 + 0, 43, 43 + 40, 43, SSD1306_COLOR_WHITE); //redraw the detune line
	SSD1306_DrawLine(44 + 20, 43, 44 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0
	SSD1306_DrawBitmap(44, 11, osc2.waveform, bmp_width, bmp_height, 0); //removing the old waveform logo

	//osc3:
	SSD1306_DrawLine(87 + osc3.det_pos, 39, 87 + osc3.det_pos, 47, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(87 + 0, 58, osc3.Vol_pos, 5, SSD1306_COLOR_BLACK); //test for volume
	SSD1306_DrawRectangle(87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame
	SSD1306_DrawLine(87 + 0, 43, 86 + 40, 43, SSD1306_COLOR_WHITE); //redraw the detune line
	SSD1306_DrawLine(87 + 20, 43, 87 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0
	SSD1306_GotoXY(86 + 0, 47);
	SSD1306_Puts("vol", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawBitmap(87, 11, osc3.waveform, bmp_width, bmp_height, 0); //removing the old waveform logo

	/* char buffer3[3];
	 itoa(osc3.detune,buffer3,10);   // here 10 means decimal
	 if(osc3.detune>0)buffer3[2]=' ';
	 SSD1306_GotoXY(1 + 105, 30);
	 SSD1306_Puts(buffer3, &Font_7x10, SSD1306_COLOR_BLACK);*/

}

void Unselect_osc1(void) {
	for (int i = 0; i < 41; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_WHITE);
		}
	}
	SSD1306_GotoXY(5, 0);
	SSD1306_Puts("-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
}

void Select_osc1(void) {

	for (int i = 0; i < 41; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_BLACK);
		}
	}
	SSD1306_GotoXY(5, 0);
	SSD1306_Puts("OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
}

void Unselect_osc2(void) {
	for (int i = 44; i < 84; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_WHITE);
		}
	}
	SSD1306_GotoXY(47, 0);
	SSD1306_Puts("-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
}

void Select_osc2(void) {

	for (int i = 44; i < 84; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_BLACK);
		}
	}
	SSD1306_GotoXY(47, 0);
	SSD1306_Puts("OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
}

void Unselect_osc3(void) {
	for (int i = 87; i < 127; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_WHITE);
		}
	}
	SSD1306_GotoXY(90, 0);
	SSD1306_Puts("-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
}

void Select_osc3(void) {

	for (int i = 87; i < 127; i++) {
		for (int j = 0; j < 10; j++) {
			SSD1306_DrawPixel(i, j, SSD1306_COLOR_BLACK);
		}
	}
	SSD1306_GotoXY(90, 0);
	SSD1306_Puts("OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);
}

void Draw_OSC_Var_displayed(void) {
	//osc1:
	SSD1306_DrawLine(osc1.det_pos, 39, osc1.det_pos, 45, SSD1306_COLOR_WHITE); // cursor
	SSD1306_DrawFilledRectangle(0, 58, osc1.Vol_pos, 5, SSD1306_COLOR_WHITE); // volume

	char buffer1[11];				//drawing here the detune value
	itoa(osc1.detune, buffer1, 10);   // here 10 means decimal
	if (osc1.detune > 0)
		buffer1[2] = ' ';
	if (osc1.detune == 0)
		buffer1[1] = ' ';
	if (osc1.detune > 0 && osc1.detune < 10) {
		buffer1[2] = ' ';
		buffer1[1] = ' ';
	}
	if (osc1.detune < 0 && osc1.detune > -10) {
		buffer1[2] = ' ';
	}

	SSD1306_GotoXY(1 + 20, 30);
	SSD1306_Putc(buffer1[0], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer1[1], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer1[2], &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawBitmap(0, 11, osc1.waveform, bmp_width, bmp_height, 1); //adding the  waveform logo

	if (!osc1.is_on)
		Unselect_osc1(); //draw the -OFF- in inverted colors if osc is off
	if (osc1.is_on)
		Select_osc1();	//puts back the name of the osc if it is on

	//osc2:
	SSD1306_DrawLine(44 + osc2.det_pos, 39, 44 + osc2.det_pos, 45, SSD1306_COLOR_WHITE); //remove cursor
	SSD1306_DrawFilledRectangle(44 + 0, 58, osc2.Vol_pos, 5, SSD1306_COLOR_WHITE); //volume

	char buffer2[11];
	itoa(osc2.detune, buffer2, 10);   // here 10 means decimal
	if (osc2.detune > 0)
		buffer2[2] = ' ';
	if (osc2.detune == 0)
		buffer2[1] = ' ';
	if (osc2.detune > 0 && osc2.detune < 10) {
		buffer2[2] = ' ';
		buffer2[1] = ' ';
	}
	if (osc2.detune < 0 && osc2.detune > -10) {
		buffer2[2] = ' ';
	}

	SSD1306_GotoXY(1 + 63, 30);
	SSD1306_Putc(buffer2[0], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer2[1], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer2[2], &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawBitmap(44, 11, osc2.waveform, bmp_width, bmp_height, 1); //adding the  waveform logo

	if (!osc2.is_on)
		Unselect_osc2();
	if (osc2.is_on)
		Select_osc2();

	//osc3:
	SSD1306_DrawLine(87 + osc3.det_pos, 39, 87 + osc3.det_pos, 45, SSD1306_COLOR_WHITE); //cursor detune
	SSD1306_DrawFilledRectangle(87 + 0, 58, osc3.Vol_pos, 5, SSD1306_COLOR_WHITE); //volume

	char buffer3[4];
	itoa(osc3.detune, buffer3, 10);   // here 10 means decimal
	if (osc3.detune > 0)
		buffer3[2] = ' ';
	if (osc3.detune == 0)
		buffer3[1] = ' ';
	if (osc3.detune > 0 && osc3.detune < 10) {
		buffer3[2] = ' ';
		buffer3[1] = ' ';
	}
	if (osc3.detune < 0 && osc3.detune > -10) {
		buffer3[2] = ' ';
	}

	SSD1306_GotoXY(1 + 105, 30);
	SSD1306_Putc(buffer3[0], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer3[1], &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_Putc(buffer3[2], &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawBitmap(87, 11, osc3.waveform, bmp_width, bmp_height, 1); //adding the  waveform logo
	if (!osc3.is_on)
		Unselect_osc3();
	if (osc3.is_on)
		Select_osc3();

	SSD1306_UpdateScreen();

}

void Update_value_OSC_1(float amp, Waveform wave, int8_t detune, OnOff onoff) {
	osc1.Vol_pos = floor(amp * 39);
	osc1.det_pos = ((detune + 12) * 40) / 24;
	osc1.detune = detune;
	osc1.is_on = (onoff == 0) ? false : true; //if onOff is at 0 then is_on equals 0

	switch (wave) {
	case SIN:
		memcpy((char*) osc1.waveform, (char*) sin_bmp, 40);
		//strcpy((char*)osc1.waveform,(char*)sin_bmp);

		break;
	case SQR:
		strcpy((char*) osc1.waveform, (char*) square_bmp);
		break;
	case TRI:
		memcpy((char*) osc1.waveform, (char*) triangle_bmp, 40);
		break;
	case SAW:
		strcpy((char*) osc1.waveform, (char*) saw_bmp);
		break;
	case ARB:
		memcpy((char*) osc1.waveform, (char*) arb_bmp, 40);
		break;

	default:
		strcpy((char*) osc1.waveform, (char*) arb_bmp);
	}
}

void Update_value_OSC_2(float amp, Waveform wave, int8_t detune, OnOff onoff) {
	osc2.Vol_pos = floor(amp * 39);
	osc2.det_pos = ((detune + 12) * 40) / 24;
	osc2.detune = detune;
	osc2.is_on = (onoff == 0) ? false : true;

	switch (wave) {
	case SIN:
		memcpy((char*) osc2.waveform, (char*) sin_bmp, 40);
		//strcpy((char*)osc1.waveform,(char*)sin_bmp);

		break;
	case SQR:
		strcpy((char*) osc2.waveform, (char*) square_bmp);
		break;
	case TRI:
		memcpy((char*) osc2.waveform, (char*) triangle_bmp, 40);
		break;
	case SAW:
		strcpy((char*) osc2.waveform, (char*) saw_bmp);
		break;
	case ARB:
		memcpy((char*) osc2.waveform, (char*) arb_bmp, 40);
		break;

	default:
		strcpy((char*) osc2.waveform, (char*) arb_bmp);
	}

}

void Update_value_OSC_3(float amp, Waveform wave, int8_t detune, OnOff onoff) {
	osc3.Vol_pos = floor(amp * 39);
	osc3.det_pos = ((detune + 12) * 40) / 24;
	osc3.detune = detune;
	osc3.is_on = (onoff == 0) ? false : true;

	switch (wave) {
	case SIN:
		memcpy((char*) osc3.waveform, (char*) sin_bmp, 40);
		//strcpy((char*)osc1.waveform,(char*)sin_bmp);

		break;
	case SQR:
		strcpy((char*) osc3.waveform, (char*) square_bmp);
		break;
	case TRI:
		memcpy((char*) osc3.waveform, (char*) triangle_bmp, 40);
		break;
	case SAW:
		strcpy((char*) osc3.waveform, (char*) saw_bmp);
		break;
	case ARB:
		memcpy((char*) osc3.waveform, (char*) arb_bmp, 40);
		break;

	default:
		strcpy((char*) osc3.waveform, (char*) arb_bmp);
	}
}

void Draw_arb_frame(void) {
	SSD1306_GotoXY_2(0, 0);
	SSD1306_Puts_2("Wave Editor", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine_2(0, 19, 127, 19, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen_2();
}

void Init_tab_arb(void) {
	uint16_t inc = 0;
	for (int i = 0; i < sizeOfTab; i++) {
		tab_arb_points[i].Y_pos = 43;
		tab_arb_points[i].X_pos = inc;
		inc = inc + 6;
	}
	tab_arb_points[0].is_selected = true;
}

//function to update everything from an outside tab composed of points
void Update_values_arb_tab(Arb_points tab[]) {
	for (int i = 0; i < sizeOfTab; i++) {
		if (tab[i].Y_pos > 24 && tab[i].Y_pos < 61)
			tab_arb_points[i].Y_pos = tab[i].Y_pos;
		tab_arb_points[i].is_selected = tab[i].is_selected;
	}
}

void ARB_Update_Select(void) {
	for (int i = 0; i < sizeOfTab; i++) {
		tab_arb_points[i].is_selected = (select_index_arb == i) ? true : false;
	}
	//Draw_ADSR_points();

}
void ARB_Shift_Select_Right(void) {
	select_index_arb = (select_index_arb + 1) % (sizeOfTab);
	ARB_Update_Select();

}

void ARB_Shift_Select_Left(void) {
	if (select_index_arb == 0)
		select_index_arb = sizeOfTab;
	select_index_arb = (select_index_arb - 1) % (sizeOfTab);
	ARB_Update_Select();
}

void Update_arb_selected(double value) {
	double pos = (value * 34.00 + 24.00); //valid if value is between 0 and 1.
	for (int i = 0; i < sizeOfTab; i++) {
		if (tab_arb_points[i].is_selected) {
			tab_arb_points[i].Y_pos = (uint8_t) pos;
		}
	}
}

void Draw_ARB_points(void) {
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
				SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + w, tab_arb_points[i].Y_pos + h, SSD1306_COLOR_WHITE);
				//if a point is not selected then the pixels around it will be cleaned.
				if (tab_arb_points[i].is_selected == false) {
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos - 2, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos - 1, SSD1306_COLOR_BLACK);

					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos + 3, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 1, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);
					SSD1306_DrawPixel_2(tab_arb_points[i].X_pos + 2, tab_arb_points[i].Y_pos + 4, SSD1306_COLOR_BLACK);

				}

			}
		}
	}

	SSD1306_UpdateScreen_2();
}

void Remove_arb_points(void) {
	for (int w = 0; w < 127; w++) {
		for (int h = 24; h < 64; h++) {
			SSD1306_DrawPixel_2(w, h, SSD1306_COLOR_BLACK);

		}
	}
}

void draw_LFO_frame(void) {
	SSD1306_GotoXY(0, 0);
	SSD1306_Puts("Low", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(38, 0);
	SSD1306_Puts("Freq Osc", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(0, 19, 127, 19, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(0, 20);
	SSD1306_Puts("Rate:", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(113, 25);
	SSD1306_Puts("Hz", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(30, 39, 98, 39, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(0, 42);
	SSD1306_Puts("State:", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(0, 53);
	SSD1306_Puts("Depth:", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(63, 39, 63, 63, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(65, 48);
	SSD1306_Puts("Wav:", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen();
}
void update_LFO_value(float freq, float amp, Waveform wave, int8_t detune, OnOff onoff) {
	lfo.freq = freq;
	lfo.amp_perc = 100 * amp;
	lfo.det_pos = ((detune + 12) * 40) / 24;
	lfo.detune = detune;
	lfo.is_on = (onoff == 0) ? false : true;

	switch (wave) {
	case SIN:
		memcpy((char*) lfo.waveform, (char*) sin_bmp, 40);
		//strcpy((char*)osc1.waveform,(char*)sin_bmp);

		break;
	case SQR:
		strcpy((char*) lfo.waveform, (char*) square_bmp);
		break;
	case TRI:
		memcpy((char*) lfo.waveform, (char*) triangle_bmp, 40);
		break;
	case SAW:
		strcpy((char*) lfo.waveform, (char*) saw_bmp);
		break;
	case ARB:
		memcpy((char*) lfo.waveform, (char*) arb_bmp, 40);
		break;

	default:
		strcpy((char*) lfo.waveform, (char*) arb_bmp);
	}
}

void draw_LFO_value(void) {
	//the freq is a double between 0.01 and 20.00, to display it properly I will multiply it by a 100
	double temp_freq = 100.00 * lfo.freq;
	char buffer1[11];				//drawing here the freq value
	itoa((int) temp_freq, buffer1, 10);   // here 10 means decimal
	SSD1306_GotoXY(55, 20);
	if (temp_freq < 10) {
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
	}
	if (temp_freq < 100 && temp_freq > 10) {
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);

	}
	if (temp_freq < 1000 && temp_freq > 100) {
		SSD1306_Putc('0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[2], &Font_11x18, SSD1306_COLOR_WHITE);
	}
	if (temp_freq > 1000) {
		SSD1306_Putc(buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc('.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[2], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(buffer1[3], &Font_11x18, SSD1306_COLOR_WHITE);
	}

	SSD1306_DrawBitmap(94, 48, lfo.waveform, bmp_width, bmp_height, 1); //adding the  waveform logo
	SSD1306_GotoXY(41, 42);
	if (lfo.is_on) {
		SSD1306_Puts("ON", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_Puts("OFF", &Font_7x10, SSD1306_COLOR_WHITE);
	}
	char buffer2[11];				//drawing here the depth value
	itoa(lfo.amp_perc, buffer2, 10);   // here 10 means decimal
	SSD1306_GotoXY(41, 53);
	SSD1306_Puts(buffer2, &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen();
}
