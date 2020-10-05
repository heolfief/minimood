/**
 * \file ssd1306.h
 * \brief Driver for the SSD1306 display
 *
 * original authors: Tilen Majerle <tilen@majerle.eu> & Alexander Lutsai <s.lyra@ya.ru>
 * modified to add multi-screen support
 */

#ifndef SSD1306_H
#define SSD1306_H

#include "stm32f4xx_hal.h"
#include "HMI/SSD1306/fonts.h"

#include <stdlib.h>
#include <string.h>

/* SSD1306 settings */
#define SSD1306_WIDTH            					 128 /* SSD1306 screen width in pixels */
#define SSD1306_HEIGHT           		 			 64  /* SSD1306 screen height in pixels */

#define SSD1306_RIGHT_HORIZONTAL_SCROLL              0x26
#define SSD1306_LEFT_HORIZONTAL_SCROLL               0x27
#define SSD1306_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL 0x29
#define SSD1306_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL  0x2A
#define SSD1306_DEACTIVATE_SCROLL                    0x2E // Stop scroll
#define SSD1306_ACTIVATE_SCROLL                      0x2F // Start scroll
#define SSD1306_SET_VERTICAL_SCROLL_AREA             0xA3 // Set scroll range

#define SSD1306_NORMALDISPLAY       				 0xA6
#define SSD1306_INVERTDISPLAY       				 0xA7

#define SSD1306_WRITECOMMAND(display, command)       SSD1306_I2C_Write_Byte((display), 0x00, (command)) /* Write command */

#define SSD1306_WRITEDATA(display, data)             SSD1306_I2C_Write_Byte((dispay), 0x40, (data)) /* Write data */

#define ABS(x)   ((x) > 0 ? (x) : -(x)) /* Gives absolute value of x*/

/**
 * \enum SSD1306_t
 * \brief SSD1306 states and data
 */
typedef struct {
	uint16_t CurrentX; /* Current cursor Y position */
	uint16_t CurrentY; /* Current cursor Y position */
	uint8_t Inverted; /* Flag if inverted */
	uint8_t Initialized; /* Flag if initialized */
	uint8_t Data_Buffer[SSD1306_WIDTH * SSD1306_HEIGHT / 8]; /* SSD1306 data buffer */
	uint16_t i2c_address; /* The I2C address of the display */
} SSD1306_t;

/**
 * \enum SSD1306_COLOR_t
 * \brief SSD1306 color enumeration
 */
typedef enum {
	SSD1306_COLOR_BLACK = 0x00, /*!< Black color, no pixel */
	SSD1306_COLOR_WHITE = 0x01 /*!< Pixel is set. Color depends on LCD */
} SSD1306_COLOR_t;

/**
 * \brief Initializes SSD1306 LCD
 *
 * \param display the SSD1306_t structure for the screen to be handled
 *
 * \return 0 if everything went OK, -1 otherwise
 */
int8_t SSD1306_Init(SSD1306_t *display);

/** 
 * \brief Updates buffer from internal RAM to LCD
 *         This function must be called each time you do some changes to LCD, to update buffer from RAM to LCD
 *
 * \param display the SSD1306_t structure for the screen to be handled
 */
void SSD1306_UpdateScreen(SSD1306_t *display);

/**
 * \brief Toggles pixels invertion inside internal RAM
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 */
void SSD1306_ToggleInvert(SSD1306_t *display);

/** 
 * \brief Fills entire LCD with desired color
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param ColorColor to be used for screen fill. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_Fill(SSD1306_t *display, SSD1306_COLOR_t Color);

/**
 * \brief Draws pixel at desired location
 *         SSD1306_UpdateScreen() must called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xX location. This parameter can be a value between 0 and SSD1306_WIDTH - 1
 * \param yY location. This parameter can be a value between 0 and SSD1306_HEIGHT - 1
 * \param colorColor to be used for screen fill. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawPixel(SSD1306_t *display, uint16_t x, uint16_t y, SSD1306_COLOR_t color);

/**
 * \brief Sets cursor pointer to desired location for strings
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xX location. This parameter can be a value between 0 and SSD1306_WIDTH - 1
 * \param yY location. This parameter can be a value between 0 and SSD1306_HEIGHT - 1
 */
void SSD1306_GotoXY(SSD1306_t *display, uint16_t x, uint16_t y);

/**
 * \brief Puts character to internal RAM
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param chCharacter to be written
 * \param FontPointer to FontDef_t structure with used font
 * \param colorColor used for drawing. This parameter can be a value of SSD1306_COLOR_t enumeration
 *
 * \return Character written
 */
char SSD1306_Putc(SSD1306_t *display, char ch, FontDef_t *Font, SSD1306_COLOR_t color);

/**
 * \brief Puts string to internal RAM
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param strString to be written
 * \param FontPointer to FontDef_t structure with used font
 * \param colorColor used for drawing. This parameter can be a value of SSD1306_COLOR_t enumeration
 *
 * \return Zero on success or character value when function failed
 */
char SSD1306_Puts(SSD1306_t *display, char *str, FontDef_t *Font, SSD1306_COLOR_t color);

/**
 * \brief Draws line on LCD
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param x0Line X start point. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y0Line Y start point. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param x1Line X end point. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y1Line Y end point. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawLine(SSD1306_t *display, uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, SSD1306_COLOR_t c);

/**
 * \brief Draws rectangle on LCD
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xTop left X start point. Valid input is 0 to SSD1306_WIDTH - 1
 * \param yTop left Y start point. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param wRectangle width in units of pixels
 * \param hRectangle height in units of pixels
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawRectangle(SSD1306_t *display, uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);

/**
 * \brief Draws filled rectangle on LCD
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xTop left X start point. Valid input is 0 to SSD1306_WIDTH - 1
 * \param yTop left Y start point. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param wRectangle width in units of pixels
 * \param hRectangle height in units of pixels
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawFilledRectangle(SSD1306_t *display, uint16_t x, uint16_t y, uint16_t w, uint16_t h, SSD1306_COLOR_t c);

/**
 * \brief Draws triangle on LCD
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param x1First coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y1First coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param x2Second coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y2Second coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param x3Third coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y3Third coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawTriangle(SSD1306_t *display, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, SSD1306_COLOR_t color);

/**
 * \brief Draws filled triangle on LCD
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param x1First coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y1First coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param x2Second coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y2Second coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param x3Third coordinate X location. Valid input is 0 to SSD1306_WIDTH - 1
 * \param y3Third coordinate Y location. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawFilledTriangle(SSD1306_t *display, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, SSD1306_COLOR_t color);

/**
 * \brief Draws circle to STM buffer
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xX location for center of circle. Valid input is 0 to SSD1306_WIDTH - 1
 * \param yY location for center of circle. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param rCircle radius in units of pixels
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawCircle(SSD1306_t *display, int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);

/**
 * \brief Draws filled circle to STM buffer
 *         SSD1306_UpdateScreen() must be called after that in order to see updated LCD screen
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param xX location for center of circle. Valid input is 0 to SSD1306_WIDTH - 1
 * \param yY location for center of circle. Valid input is 0 to SSD1306_HEIGHT - 1
 * \param rCircle radius in units of pixels
 * \param cColor to be used. This parameter can be a value of SSD1306_COLOR_t enumeration
 */
void SSD1306_DrawFilledCircle(SSD1306_t *display, int16_t x0, int16_t y0, int16_t r, SSD1306_COLOR_t c);

/**
 * \brief Draws the Bitmap
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param X X location to start the Drawing
 * \param Y Y location to start the Drawing
 * \param bitmap Pointer to the bitmap
 * \param W width of the image
 * \param H Height of the image
 * \param color 1-> white/blue, 0-> black
 */
void SSD1306_DrawBitmap(SSD1306_t *display, int16_t x, int16_t y, const unsigned char *bitmap, int16_t w, int16_t h, uint16_t color);

/**
 * \brief Inverts the display
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param i flag to invert display : 1 -> inverted, 0 -> normal
 */
void SSD1306_InvertDisplay(SSD1306_t *display, int i);

/**
 * \brief Clear the display
 *
 * \param display the SSD1306_t structure for the screen to be handled
 */
void SSD1306_Clear(SSD1306_t *display);

/**
 * \brief Scroll the screen right for fixed rows
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param start_row the scroll start row
 * \param stop_row the scroll stop row
 */
void SSD1306_ScrollRight(SSD1306_t *display, uint8_t start_row, uint8_t end_row);

/**
 * \brief Scroll the screen left for fixed rows
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param start_row the scroll start row
 * \param stop_row the scroll stop row
 */
void SSD1306_ScrollLeft(SSD1306_t *display, uint8_t start_row, uint8_t end_row);

/**
 * \brief Scroll the screen diagonally right for fixed rows
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param start_row the scroll start row
 * \param stop_row the scroll stop row
 */
void SSD1306_Scrolldiagright(SSD1306_t *display, uint8_t start_row, uint8_t end_row);

/**
 * \brief Scroll the screen diagonally left for fixed rows
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param start_row the scroll start row
 * \param stop_row the scroll stop row
 */
void SSD1306_Scrolldiagleft(SSD1306_t *display, uint8_t start_row, uint8_t end_row);

/**
 * \brief Stop screen scroll
 *
 * \param display the SSD1306_t structure for the screen to be handled
 */
void SSD1306_Stopscroll(SSD1306_t *display);

/**
 * \brief Writes single byte to slave
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param regregister to write to
 * \param datadata to be written
 */
void SSD1306_I2C_Write_Byte(SSD1306_t *display, uint8_t reg, uint8_t data);

/**
 * \brief Writes multi bytes to slave
 *
 * \param display the SSD1306_t structure for the screen to be handled
 * \param regregister to write to
 * \param datapointer to data array to write it to slave
 * \param counthow many bytes will be written
 */
void SSD1306_I2C_Write_Multi_Bytes(SSD1306_t *display, uint8_t reg, uint8_t *data, uint16_t count);

#endif
