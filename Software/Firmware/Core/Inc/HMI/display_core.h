/**
 * \file display_core.h
 * \brief Functions handling HMI graphics
 */

#include "HMI/SSD1306/fonts.h"
#include "HMI/SSD1306/ssd1306.h"
#include "audio_core/oscillator/osc.h"
#include "audio_core/note/adsr.h"

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef INC_DISPLAY_SYNTH_H_
#define INC_DISPLAY_SYNTH_H_

#define NUMBER_OF_SSD1306_DISPLAYS			2		/* Number of SSD1306 display used */

#define SSD1306_I2C_ADDR_LEFT_SCREEN		0x78	/* I2C address for left screen */
#define SSD1306_I2C_ADDR_RIGHT_SCREEN		0x7A	/* I2C address for right screen */

#define ADSR_DISP_AXIS_TICKS_SPACING		0.5		/* Time spacing between each axis ticks */

#define ADSR_DISP_X_MAX						116		/* Max X coordinate for ADSR points */
#define ADSR_DISP_X_MIN						2		/* Min X coordinate for ADSR points */

#define ADSR_DISP_Y_MAX						61		/* Max Y coordinate for ADSR points */
#define ADSR_DISP_Y_MIN						20		/* Min Y coordinate for ADSR points */

#define ADSR_DISP_NOTE_LENGTH				15		/* Note length in pixels (only for display, not actual note length) */

enum {
	SSD1306_Left_Screen, SSD1306_Right_Screen
};

int select_index_arb;

typedef struct {
	uint8_t X_pos;
	uint8_t Y_pos;
	bool is_selected;
} Arb_points;

//creating a tab of arb_points
#define sizeOfTab 21
Arb_points tab_arb_points[sizeOfTab];

void disp_Init(uint8_t screen_ID);
void disp_Clear(uint8_t screen_ID);
void disp_Refresh(uint8_t screen_ID);

void disp_Booting();
void disp_Splashscreen();

void disp_Draw_OSC_frame(uint8_t screen_ID);
void disp_Draw_OSC_Values(uint8_t screen_ID, const Oscillator_param *osc1, const Oscillator_param *osc2, const Oscillator_param *osc3);
void disp_Draw_LFO_frame(uint8_t screen_ID);
void disp_Draw_LFO_Values(uint8_t screen_ID, const Oscillator_param *lfo);

void disp_Draw_ADSR_frame(uint8_t screen_ID);
void disp_Draw_ADSR_Values(uint8_t screen_ID, const Envelope *env);

void disp_Draw_arb_frame();
void disp_Init_tab_arb();
void disp_Update_values_arb_tab(Arb_points tab[]);
void disp_Remove_arb_points();
void disp_Draw_ARB_points();
void disp_ARB_Update_Select();
void disp_ARB_Shift_Select_Right();
void disp_ARB_Shift_Select_Left();
void disp_Update_arb_selected(double value);

#endif /* INC_DISPLAY_SYNTH_H_ */
