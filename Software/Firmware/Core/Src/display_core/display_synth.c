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
#include <math.h>

void Init_Displays(void){
	SSD1306_Init();  // initialise
	SSD1306_Init_2(); //Initialise the second screen

	SSD1306_Clear();
	SSD1306_Clear_2();
}

void Home_Menu(void){
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

void Booting_Screens(void){
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



}

void Init_ADSR_points(void){
	First_point.X_pos = 5; //origin of the ADSR grid
	First_point.Y_pos = 61;
	First_point.is_selected=false;

	Attack_pt.X_pos = 38+5;
	Attack_pt.Y_pos = 20;
	Attack_pt.is_selected=false;

	Decay_pt.X_pos = 57+5;
	Decay_pt.Y_pos=31;
	Decay_pt.is_selected=false;

	Sustain_pt.X_pos=85+5;
	Sustain_pt.Y_pos=31;
	Sustain_pt.is_selected=false;

	Release_pt.X_pos=100+5;
	Release_pt.Y_pos=61;
	Release_pt.is_selected=false;

	select_index_adsr=0;
	menu_adsr=true;
}

void Draw_ADSR_points(void){
	//each point will be drawn with a square of 3x3 pixels, the reference pixel will be the one at the center
	//start with the first point :
	SSD1306_DrawFilledRectangle(First_point.X_pos-1, First_point.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);

	//then the Attack
	SSD1306_DrawFilledRectangle(Attack_pt.X_pos-1, Attack_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Attack_pt.X_pos+1, Attack_pt.Y_pos-11);
	SSD1306_Putc('A', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if(Attack_pt.is_selected==true){
		SSD1306_DrawRectangle(Attack_pt.X_pos, Attack_pt.Y_pos-13, 8, 11, SSD1306_COLOR_WHITE);
	}
	else{
		SSD1306_DrawRectangle(Attack_pt.X_pos, Attack_pt.Y_pos-13, 8, 11, SSD1306_COLOR_BLACK);
	}

	//then the Decay
	SSD1306_DrawFilledRectangle(Decay_pt.X_pos-1, Decay_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Decay_pt.X_pos+1, Decay_pt.Y_pos-11);
	SSD1306_Putc('D', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if(Decay_pt.is_selected==true){
		SSD1306_DrawRectangle(Decay_pt.X_pos, Decay_pt.Y_pos-13, 8, 11, SSD1306_COLOR_WHITE);
	}else{
		SSD1306_DrawRectangle(Decay_pt.X_pos, Decay_pt.Y_pos-13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Sustain
	SSD1306_DrawFilledRectangle(Sustain_pt.X_pos-1, Sustain_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Sustain_pt.X_pos+1, Sustain_pt.Y_pos-11);
	SSD1306_Putc('S', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if(Sustain_pt.is_selected==true){
		SSD1306_DrawRectangle(Sustain_pt.X_pos, Sustain_pt.Y_pos-13, 8, 11, SSD1306_COLOR_WHITE);
	}else{
		SSD1306_DrawRectangle(Sustain_pt.X_pos, Sustain_pt.Y_pos-13, 8, 11, SSD1306_COLOR_BLACK);

	}

	//then the Release
	SSD1306_DrawFilledRectangle(Release_pt.X_pos-1, Release_pt.Y_pos-1, 2, 2, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(Release_pt.X_pos+1, Release_pt.Y_pos-11);
	SSD1306_Putc('R', &Font_7x10, SSD1306_COLOR_WHITE);
	// an empty rectangle will be displayed around the letter when the point is selected
	if(Release_pt.is_selected==true){
		SSD1306_DrawRectangle(Release_pt.X_pos, Release_pt.Y_pos-13, 8, 11, SSD1306_COLOR_WHITE);
	}else{
		SSD1306_DrawRectangle(Release_pt.X_pos, Release_pt.Y_pos-13, 8, 11, SSD1306_COLOR_BLACK);

	}

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


}

void Draw_ADSR_lines(void){
	SSD1306_DrawLine(First_point.X_pos, First_point.Y_pos, Attack_pt.X_pos, Attack_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Attack_pt.X_pos, Attack_pt.Y_pos, Decay_pt.X_pos, Decay_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Decay_pt.X_pos, Decay_pt.Y_pos, Sustain_pt.X_pos, Sustain_pt.Y_pos, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(Sustain_pt.X_pos, Sustain_pt.Y_pos, Release_pt.X_pos, Release_pt.Y_pos, SSD1306_COLOR_WHITE);


	SSD1306_UpdateScreen();
}

void ADSR_Shift_Select_Right(void){
	select_index_adsr=(select_index_adsr +1)%4;
	ADSR_Update_Select();

}

void ADSR_Shift_Select_Left(void){
	if(select_index_adsr==0)select_index_adsr=4;
	select_index_adsr=(select_index_adsr -1)%4;

	ADSR_Update_Select();

}

void ADSR_Update_Select(void){
	Attack_pt.is_selected = (select_index_adsr==0) ? true : false;
	Decay_pt.is_selected = (select_index_adsr==1) ? true : false;
	Sustain_pt.is_selected = (select_index_adsr==2) ? true : false;
	Release_pt.is_selected = (select_index_adsr==3) ? true : false;

	Draw_ADSR_points();

}

void ADSR_value_update(float attack_val, float decay_val, float sustain_val, float release_val){
	//the values should be fetched in the sys.param
	int release_pos_x_relative=(release_val*30)/2;
	int sustain_pos_y_relative=28*sustain_val;
	int attack_pos_x_relative=(23*attack_val)/2;
	int decay_pos_x_relatve=(30*decay_val)/2;

	Attack_pt.X_pos=attack_pos_x_relative+20;
	Decay_pt.X_pos=decay_pos_x_relatve+38+15;
	Sustain_pt.Y_pos=(31+(28-sustain_pos_y_relative));
	Release_pt.X_pos=release_pos_x_relative+92;


}

void ADSR_display_update(void){
	SSD1306_Clear();
	Draw_ADSR_frame();
	Draw_ADSR_points();
	Draw_ADSR_lines();
}

void Draw_OSC_frame(void){
	SSD1306_DrawLine(42, 0, 42, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(85, 0, 85, 63, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(0, 21, 127, 21, SSD1306_COLOR_WHITE);

	SSD1306_GotoXY(	5, 0);
	SSD1306_Puts("OSC 1", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(	47, 0);
	SSD1306_Puts("OSC 2", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(	90, 0);
	SSD1306_Puts("OSC 3", &Font_7x10, SSD1306_COLOR_WHITE);

	//drawing frame for the first Oscill
	SSD1306_GotoXY(5, 23);
	SSD1306_Puts("XTune", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(0, 38, 40, 38, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(20, 38, 20, 41, SSD1306_COLOR_WHITE); //little bar for the 0
	SSD1306_GotoXY(20, 41);
	SSD1306_Putc('0', &Font_7x10, SSD1306_COLOR_WHITE);

	//SSD1306_DrawLine(15, 34, 15, 42, SSD1306_COLOR_WHITE); //test cursor


	/*SSD1306_GotoXY(0, 41);
	SSD1306_Puts("-12", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(27, 41);
	SSD1306_Puts("12", &Font_7x10, SSD1306_COLOR_WHITE);*/

	//vol display

	SSD1306_GotoXY(0, 47);
	SSD1306_Puts("Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume

	//drawing frame for the Second Oscill
	SSD1306_GotoXY(5+43, 23);
	SSD1306_Puts("XTune", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(44+0, 38, 43+40, 38, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(44+20, 38, 44+20, 41, SSD1306_COLOR_WHITE); //little bar for the 0
	SSD1306_GotoXY(44+20, 41);
	SSD1306_Putc('0', &Font_7x10, SSD1306_COLOR_WHITE);

	//SSD1306_DrawLine(43+15, 34, 43+15, 42, SSD1306_COLOR_WHITE); //test cursor

	/*SSD1306_GotoXY(43+0, 41);
	 SSD1306_Puts("-12", &Font_7x10, SSD1306_COLOR_WHITE);
	 SSD1306_GotoXY(43+27, 41);
	 SSD1306_Puts("12", &Font_7x10, SSD1306_COLOR_WHITE);*/

	//vol display
	SSD1306_GotoXY(43+0, 47);
	SSD1306_Puts("Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(44+0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(44+0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume

	//drawing frame for the third Oscill
	SSD1306_GotoXY(5 + 86, 23);
	SSD1306_Puts("XTune", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(87 + 0, 38, 86 + 40, 38, SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(87 + 20, 38, 87 + 20, 41, SSD1306_COLOR_WHITE); //little bar for the 0
	SSD1306_GotoXY(87 + 20, 41);
	SSD1306_Putc('0', &Font_7x10, SSD1306_COLOR_WHITE);

	//SSD1306_DrawLine(86 + 15, 34, 86 + 15, 42, SSD1306_COLOR_WHITE); //test cursor

	/*SSD1306_GotoXY(86+0, 41);
	 SSD1306_Puts("-12", &Font_7x10, SSD1306_COLOR_WHITE);
	 SSD1306_GotoXY(86+27, 41);
	 SSD1306_Puts("12", &Font_7x10, SSD1306_COLOR_WHITE);*/

	//vol display
	SSD1306_GotoXY(86 + 0, 47);
	SSD1306_Puts("Vol", &Font_7x10, SSD1306_COLOR_WHITE);

	SSD1306_DrawRectangle(87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE);
	//SSD1306_DrawFilledRectangle(87 + 0, 58, 20, 5, SSD1306_COLOR_WHITE); //test for volume


SSD1306_UpdateScreen();
}

void Remove_OSC_variables_displayed(void){
	//osc1:
	SSD1306_DrawLine(osc1.det_pos, 34, osc1.det_pos, 42, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(0, 58, osc1.Vol_pos, 5, SSD1306_COLOR_BLACK); //remove volume
	SSD1306_DrawRectangle(0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame
	//osc2:
	SSD1306_DrawLine(osc2.det_pos, 34, osc2.det_pos, 42, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(44 + 0, 58, osc2.Vol_pos, 5,
			SSD1306_COLOR_BLACK); //test for volume
	SSD1306_DrawRectangle(44 + 0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame
	//osc3:
	SSD1306_DrawLine(osc3.det_pos, 34, osc3.det_pos, 42, SSD1306_COLOR_BLACK); //remove cursor
	SSD1306_DrawFilledRectangle(87 + 0, 58, osc3.Vol_pos, 5,
			SSD1306_COLOR_BLACK); //test for volume
	SSD1306_DrawRectangle(87 + 0, 58, 38, 5, SSD1306_COLOR_WHITE); //redraw the vol frame


}

void Draw_OSC_Var_displayed(void){
	//osc1:
	SSD1306_DrawLine(osc1.det_pos, 34, osc1.det_pos, 42, SSD1306_COLOR_WHITE); // cursor
	SSD1306_DrawFilledRectangle(0, 58, osc1.Vol_pos, 5, SSD1306_COLOR_WHITE); // volume

	//osc2:
	SSD1306_DrawLine(osc2.det_pos, 34, osc2.det_pos, 42, SSD1306_COLOR_WHITE); //remove cursor
	SSD1306_DrawFilledRectangle(44 + 0, 58, osc2.Vol_pos, 5,
			SSD1306_COLOR_WHITE); //volume

	//osc3:
	SSD1306_DrawLine(osc3.det_pos, 34, osc3.det_pos, 42, SSD1306_COLOR_WHITE); //cursor
	SSD1306_DrawFilledRectangle(87 + 0, 58, osc3.Vol_pos, 5,
			SSD1306_COLOR_WHITE); //volume

}

void Update_value_OSC_1(float amp,  Waveform wave, float phase,  OnOff onoff){
	osc1.Vol_pos = floor(amp*39);
}

void Update_value_OSC_2(float amp,  Waveform wave, float phase,  OnOff onoff){
	osc2.Vol_pos = floor(amp*39);
}

void Update_value_OSC_3(float amp,  Waveform wave, float phase,  OnOff onoff){
	osc3.Vol_pos = floor(amp*39);
}


