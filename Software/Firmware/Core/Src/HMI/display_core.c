/**
 * \file display_core.c
 * \brief Functions handling HMI graphics
 */

#include "HMI/display_core.h"

// bmp data is here
#include "HMI/waveforms_bmp.h"

SSD1306_t SSD1306_Screens[NUMBER_OF_SSD1306_DISPLAYS];

void disp_Init_Displays() {
	SSD1306_Init(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_Init(&SSD1306_Screens[SSD1306_Right_Screen]);

	SSD1306_Clear(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);
}

void disp_Refresh() {
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
}

void disp_Home_Menu() {
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

void disp_Booting_Screens() {
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Left_Screen]);
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Systems are", &Font_11x18, 1);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);
	// drawing onto the second screen
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading", &Font_11x18, 1);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 0, 19, 128, 19, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 22);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Display_core ", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 22);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 33);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Displays set", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 33);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "checking  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "OK.", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 43);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Audio_core", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 43);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "loading  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Audio set", &Font_7x10, 1);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 0, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "checking  ", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], ".", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "OK.", &Font_7x10, 1);
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
	HAL_Delay(400);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]); //display
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);

	HAL_Delay(2000);
	disp_Home_Menu();
	HAL_Delay(2000);
}

void disp_Init_ADSR_points() {
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
}

void disp_Draw_ADSR_points() {
	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], First_point.X_pos - 1, First_point.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);

	//then the Attack
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos - 1, Attack_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos + 1, Attack_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'A', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Attack_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	}

	//then the Decay
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos - 1, Decay_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos + 1, Decay_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'D', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Decay_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Sustain
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos - 1, Sustain_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos + 1, Sustain_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'S', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Sustain_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Release
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos - 1, Release_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos + 1, Release_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'R', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Release_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]); //display done in value update function
}

void disp_Draw_ADSR_frame() {

	SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], 83, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Right_Screen], "ADSR", &Font_11x18, 1);

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], First_point.X_pos, First_point.Y_pos, 120, First_point.Y_pos, SSD1306_COLOR_WHITE); //drawing the scale bar
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 38 + 5, 61 - 2, 38 + 5, 61 + 2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], 76 + 5, 61 - 2, 76 + 5, 61 + 2, SSD1306_COLOR_WHITE); //adding the grade viewers
	SSD1306_DrawTriangle(&SSD1306_Screens[SSD1306_Right_Screen], 120, 61 - 2, 120, 61 + 2, 125, 61, SSD1306_COLOR_WHITE);
}

void disp_Draw_ADSR_lines() {
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_WHITE);

	//SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]); done in ADSR_display_update
}

void disp_ADSR_Shift_Select_Right() {
	select_index_adsr = (select_index_adsr + 1) % 4;
	disp_ADSR_Update_Select();
}

void disp_ADSR_Shift_Select_Left() {
	if (select_index_adsr == 0)
		select_index_adsr = 4;
	select_index_adsr = (select_index_adsr - 1) % 4;

	disp_ADSR_Update_Select();
}

void disp_ADSR_Remove_values_displayed() {
	//same code as draw ADSR points but in black colors :

	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], First_point.X_pos - 1, First_point.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);

	//then the Attack
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos - 1, Attack_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos + 1, Attack_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'A', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Attack_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	}

	//then the Decay
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos - 1, Decay_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos + 1, Decay_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'D', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Decay_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Sustain
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos - 1, Sustain_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos + 1, Sustain_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'S', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Sustain_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Release
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos - 1, Release_pt.Y_pos - 1, 2, 2, SSD1306_COLOR_BLACK);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos + 1, Release_pt.Y_pos - 11);
	SSD1306_Putc(&SSD1306_Screens[SSD1306_Right_Screen], 'R', &Font_7x10, SSD1306_COLOR_BLACK);
	// an empty rectangle will be displayed around the letter when the point is selected
	if (Release_pt.is_selected == true) {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);
	} else {
		SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Right_Screen], Release_pt.X_pos, Release_pt.Y_pos - 13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the lines will be drawn black :

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_BLACK);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Right_Screen], Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_BLACK);

	//redraw the damaged frame points
	//Draw_ADSR_frame(); already done in function ADSR_display_update

	//SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]); //display
}

void disp_ADSR_Update_Select() {
	Attack_pt.is_selected = (select_index_adsr == 0) ? true : false;
	Decay_pt.is_selected = (select_index_adsr == 1) ? true : false;
	Sustain_pt.is_selected = (select_index_adsr == 2) ? true : false;
	Release_pt.is_selected = (select_index_adsr == 3) ? true : false;

	disp_Draw_ADSR_points();
}

void disp_ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val) {
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

void disp_ADSR_display_update() {
	//SSD1306_Clear(&SSD1306_Screens[SSD1306_Right_Screen]);
	disp_Draw_ADSR_frame();
	disp_Draw_ADSR_points();
	disp_Draw_ADSR_lines();
	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Right_Screen]);
}

void disp_Draw_OSC_frame() {
	SSD1306_Clear(&SSD1306_Screens[SSD1306_Left_Screen]);

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 42, 0, 42, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 85, 0, 85, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 21, 127, 21, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 5, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 47, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 90, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);

	//drawing frame for the first Osc
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1, 23);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 43, 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 20, 43, 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 47);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Vol", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 0, 58, 38, 5, SSD1306_COLOR_WHITE);

	//drawing frame for the Second Osc
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1 + 43, 23);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 44 + 0, 43, 43 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 44 + 20, 43, 44 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 43 + 0, 47);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Vol", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 44 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);

	//drawing frame for the third Osc
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1 + 86, 23);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Det.", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 87 + 0, 43, 86 + 40, 43, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 87 + 20, 43, 87 + 20, 46, SSD1306_COLOR_WHITE); //little bar for the 0

	//vol display
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 86 + 0, 47);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "vol", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
}

void disp_Draw_OSC_Values(Oscillator_param *osc1, Oscillator_param *osc2, Oscillator_param *osc3) {
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
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 5, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 0; i < 41; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 5, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 0, 58, osc1_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], osc1_det_pos, 39, osc1_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc1->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1 + 20, 30);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

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
	SSD1306_DrawBitmap(&SSD1306_Screens[SSD1306_Left_Screen], 0, 11, osc1_waveform_symbol_ptr, bmp_width, bmp_height, 1);

	/* OSC2 */ // -----------------------------------------------------------------------------------------
	/* ON/OFF Display */
	if (osc2->onoff == ON) {
		for (int i = 44; i < 84; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 47, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 44; i < 84; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 47, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 44, 58, osc2_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 44 + osc2_det_pos, 39, 44 + osc2_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc2->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1 + 63, 30);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

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
	SSD1306_DrawBitmap(&SSD1306_Screens[SSD1306_Left_Screen], 44, 11, osc2_waveform_symbol_ptr, bmp_width, bmp_height, 1);

	/* OSC3 */ // -----------------------------------------------------------------------------------------
	/* ON/OFF Display */
	if (osc3->onoff == ON) {
		for (int i = 87; i < 127; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_BLACK);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 90, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		for (int i = 87; i < 127; i++) {
			for (int j = 0; j < 10; j++) {
				SSD1306_DrawPixel(&SSD1306_Screens[SSD1306_Left_Screen], i, j, SSD1306_COLOR_WHITE);
			}
		}
		SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 90, 0);
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "-OFF-", &Font_7x10, SSD1306_COLOR_BLACK);
	}

	/* Draw volume bar */
	SSD1306_DrawFilledRectangle(&SSD1306_Screens[SSD1306_Left_Screen], 87, 58, osc3_vol_pos, 5, SSD1306_COLOR_WHITE);

	/* Draw detune cursor */
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 87 + osc3_det_pos, 39, 87 + osc3_det_pos, 45, SSD1306_COLOR_WHITE);

	/* Draw detune value */
	itoa(osc3->detune, det_itoa_buffer, 10);   // base 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 1 + 105, 30);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], det_itoa_buffer, &Font_7x10, SSD1306_COLOR_WHITE);

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
	SSD1306_DrawBitmap(&SSD1306_Screens[SSD1306_Left_Screen], 87, 11, osc3_waveform_symbol_ptr, bmp_width, bmp_height, 1);
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

void disp_draw_LFO_frame() {
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Low", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 38, 0);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Freq Osc", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 0, 19, 127, 19, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 20);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Rate:", &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 113, 25);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Hz", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 30, 39, 98, 39, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 42);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "State:", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 0, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Depth:", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(&SSD1306_Screens[SSD1306_Left_Screen], 63, 39, 63, 63, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 65, 48);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "Wav:", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
}

void disp_update_LFO_value(float freq, float amp, Waveform wave, int8_t detune, OnOff onoff) {
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

void disp_draw_LFO_value() {
	//the freq is a double between 0.01 and 20.00, to display it properly I will multiply it by a 100
	double temp_freq = 100.00 * lfo.freq;
	char buffer1[11];				//drawing here the freq value
	itoa((int) temp_freq, buffer1, 10);   // here 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 55, 20);
	if (temp_freq < 10) {
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
	}
	if (temp_freq < 100 && temp_freq > 10) {
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);

	}
	if (temp_freq < 1000 && temp_freq > 100) {
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '0', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[2], &Font_11x18, SSD1306_COLOR_WHITE);
	}
	if (temp_freq > 1000) {
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[0], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[1], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], '.', &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[2], &Font_11x18, SSD1306_COLOR_WHITE);
		SSD1306_Putc(&SSD1306_Screens[SSD1306_Left_Screen], buffer1[3], &Font_11x18, SSD1306_COLOR_WHITE);
	}

	SSD1306_DrawBitmap(&SSD1306_Screens[SSD1306_Left_Screen], 94, 48, lfo.waveform, bmp_width, bmp_height, 1); //adding the  waveform logo
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 41, 42);
	if (lfo.is_on) {
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "ON", &Font_7x10, SSD1306_COLOR_WHITE);
	} else {
		SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], "OFF", &Font_7x10, SSD1306_COLOR_WHITE);
	}
	char buffer2[11];				//drawing here the depth value
	itoa(lfo.amp_perc, buffer2, 10);   // here 10 means decimal
	SSD1306_GotoXY(&SSD1306_Screens[SSD1306_Left_Screen], 41, 53);
	SSD1306_Puts(&SSD1306_Screens[SSD1306_Left_Screen], buffer2, &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_UpdateScreen(&SSD1306_Screens[SSD1306_Left_Screen]);
}
