/**
 * \file display_core.h
 * \brief Functions handling HMI graphics
 */

#ifndef INC_DISPLAY_SYNTH_H_
#define INC_DISPLAY_SYNTH_H_

#include "HMI/SSD1306/fonts.h"
#include "HMI/SSD1306/ssd1306.h"
#include "audio_core/oscillator/osc.h"
#include "audio_core/note/adsr.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUMBER_OF_SSD1306_DISPLAYS			2		/* Number of SSD1306 display used */

#define SSD1306_I2C_ADDR_LEFT_SCREEN		0x78	/* I2C address for left screen */
#define SSD1306_I2C_ADDR_RIGHT_SCREEN		0x7A	/* I2C address for right screen */

#define ADSR_DISP_AXIS_TICKS_SPACING		0.5		/* Time spacing between each axis ticks */

#define ADSR_DISP_X_MAX						116		/* Max X coordinate for ADSR points */
#define ADSR_DISP_X_MIN						2		/* Min X coordinate for ADSR points */

#define ADSR_DISP_Y_MAX						61		/* Max Y coordinate for ADSR points */
#define ADSR_DISP_Y_MIN						20		/* Min Y coordinate for ADSR points */

#define ADSR_DISP_NOTE_LENGTH				15		/* Note length in pixels (only for display, not actual note length) */

#define LFO_NBR_SAMPLES_IN_HISTORY 			64		/* Number of sample in LFO display history */
#define LFO_NBR_SAMPLES_INTERPOLATED		512		/* Number of sample interpolated for LFO display history */

/**
 * \brief define left and right screen SSD1306_t array index
 */
enum {
	SSD1306_Left_Screen, SSD1306_Right_Screen
};

/**
 * \brief initialize specified display
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Init(uint8_t screen_ID);

/**
 * \brief clear the screen buffer (not the screen display itself)
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Clear(uint8_t screen_ID);

/**
 * \brief refresh the display with data from its buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Refresh(uint8_t screen_ID);

/**
 * \brief display the booting animation, and then the splash-screen by calling disp_Splashscreen() function
 * This function handle the display refresh itself, as it displays an animation with several refresh.
 */
void disp_Booting();

/**
 * \brief draw the splash-screen in the display buffer
 */
void disp_Splashscreen();

/**
 * \brief draw the oscillators frame in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Draw_OSC_frame(uint8_t screen_ID);

/**
 * \brief draw the OSC data and graphics in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 * \param osc1 the Oscillator_param structure for oscillator 1
 * \param osc2 the Oscillator_param structure for oscillator 2
 * \param osc3 the Oscillator_param structure for oscillator 3
 */
void disp_Draw_OSC_Values(uint8_t screen_ID, const Oscillator_param *osc1, const Oscillator_param *osc2, const Oscillator_param *osc3);

/**
 * \brief draw the LFO frame in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Draw_LFO_frame(uint8_t screen_ID);

/**
 * \brief draw the LFO data and graphics in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 * \param lfo the Oscillator_param structure for the LFO
 * \param actual_lfo_sample the actual LFO sample from the audio core, used to display dynamic oscilloscope of the LFO output
 */
void disp_Draw_LFO_Values(uint8_t screen_ID, const Oscillator_param *lfo, uint16_t actual_lfo_sample);

/**
 * \brief draw the ADSR frame in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 */
void disp_Draw_ADSR_frame(uint8_t screen_ID);

/**
 * \brief draw the ADSR data and graphics in the display buffer
 *
 * \param screen_ID the screen SSD1306_t array index
 * \param env the Envelope structure
 */
void disp_Draw_ADSR_Values(uint8_t screen_ID, const Envelope *env);







/* CODE TO CLEANUP - WIP*/
/* ------------------------------------------*/
#include <stdbool.h>

int select_index_arb;

typedef struct {
	uint8_t X_pos;
	uint8_t Y_pos;
	bool is_selected;
} Arb_points;

//creating a tab of arb_points
#define sizeOfTab 21
Arb_points tab_arb_points[sizeOfTab];

void disp_Draw_arb_frame();
void disp_Init_tab_arb();
void disp_Update_values_arb_tab(Arb_points tab[]);
void disp_Remove_arb_points();
void disp_Draw_ARB_points();
void disp_ARB_Update_Select();
void disp_ARB_Shift_Select_Right();
void disp_ARB_Shift_Select_Left();
void disp_Update_arb_selected(double value);
/* END OF CODE TO CLEANUP */
/* ------------------------------------------*/

#endif /* INC_DISPLAY_SYNTH_H_ */
