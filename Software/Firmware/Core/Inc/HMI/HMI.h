/**
 * \file HMI.h
 * \brief Human-Machine Interface functions definition.
 */

#ifndef INC_HMI_HMI_H_
#define INC_HMI_HMI_H_

#include <stm32f4xx.h>

#include "main.h"
#include "sys_param/sys_param.h"
#include "HMI/display_core.h"

///////// SOFTWARE DEFINES FOR SETTINGS
#define OSC_AMP_MIN					0.0
#define OSC_AMP_MAX					1.0

#define OSC_DET_MIN					-12.0
#define OSC_DET_MAX					12.0

#define ADSR_A_MIN					0.0
#define ADSR_A_MAX					2.0

#define ADSR_D_MIN					0.0
#define ADSR_D_MAX					2.0

#define ADSR_S_MIN					0.0
#define ADSR_S_MAX					1.0

#define ADSR_R_MIN					0.0
#define ADSR_R_MAX					2.0

#define LFO_RATE_MIN				0.01
#define LFO_RATE_MAX				20.0

#define LFO_DEPTH_MIN				0.0
#define LFO_DEPTH_MAX				1.0

#define NBR_OF_POTS 				12
#define NBR_OF_BUTTONS 				11
#define DEBOUNCE_NBR_OF_SAMPLES		5
/////////////////////////////////////

////////// HARDWARE DEPENDANT DEFINES
#define BT_OSC1_ON					0
#define BT_OSC2_ON					1
#define BT_OSC3_ON					2
#define BT_OSC1_WAVE				3
#define BT_OSC2_WAVE				4
#define BT_OSC3_WAVE				5
#define BT_CTRL_UP					6
#define BT_CTRL_RIGHT				7
#define BT_CTRL_DOWN				8
#define BT_CTRL_LEFT				9
#define BT_CTRL_OK					10

#define POT_OSC1_AMP				0
#define POT_OSC2_AMP				1
#define POT_LFO_RATE				2
#define POT_OSC3_DET				3
#define POT_OSC3_AMP				4
#define POT_OSC2_DET				5
#define POT_ADSR_D					6
#define POT_ADSR_A					7
#define POT_ADSR_R					8
#define POT_ADSR_S					9
#define POT_OSC1_DET				10
#define POT_LFO_DEPTH				11
//////////////////////////////////////

/**
 * \enum Param_Changed
 * \brief define what parameter if any has changed on the HMI
 */
typedef enum {
	NO_PARAM_CHANGED, OSC_PARAM_CHANGED, ADSR_PARAM_CHANGED, LFO_PARAM_CHANGED
} Param_Changed;

/**
 * \enum
 * \brief define button states
 */
enum {
	BT_STATE_RST, BT_STATE_SET
};

/**
 * \enum Screen_State
 * \brief define the FSM states for a screen
 */
typedef enum {
	SCREEN_STATE_IDLE, SCREEN_STATE_BOOTSCREEN, SCREEN_STATE_OSC, SCREEN_STATE_ADSR, SCREEN_STATE_LFO, SCREEN_STATE_ARB
} Screen_State;

/**
 * \enum
 * \brief define right and left screen to be used as index of a Screen_State array
 */
enum {
	SCREEN_LEFT, SCREEN_RIGHT
};

/**
 * \struct Button
 * \brief define a button for software debouncing
 */
typedef struct {
	GPIO_TypeDef *port; /*!<GPIO PORT */
	uint16_t pin; /*!<GPIO PIN */
	uint16_t log_cnt; /*!<Counter for number of valid sample read, used for debouncing */
	uint8_t waiting; /*!<indicate if we are in a debounce waiting state after an edge is detected */
	uint8_t last_state; /*!<Last state of the button */
	uint8_t state; /*!<Debounced state of the button */
} Button;

/**
 * \struct Potentiometer
 * \brief define a potentiometer
 */
typedef struct {
	float min_value; /*!<min vaue for pot parameter*/
	float max_value; /*!<max value for pot parameter */
	uint8_t last_value;/*!<The last RAW (from ADC) value to check for change */
} Potentiometer;

/**
 * \struct Hmi
 * \brief define an Human-Machine Interface variables
 */
typedef struct {
	uint8_t adc_raw_data[NBR_OF_POTS]; /*!<raw 8 bit ADC data for the 12 pots */
	Potentiometer pots[NBR_OF_POTS]; /*!<Potentiometer array */
	Button bts[NBR_OF_BUTTONS]; /*!<Buttons array */
	Screen_State screens_states[2]; /*!<FSM states for the screens */
} Hmi;

/**
 * \brief Init HMI with hardware-specific values
 *
 * \param hmi The Hmi structure
 */
void hmi_init(Hmi *hmi);

/**
 * \brief Low-level software debouncing for the buttons
 *
 * \param bts the Button structure array
 */
void hmi_debounce_buttons(Button *bts);

/**
 * \brief Process the buttons state and modify system param accordingly
 *
 * \param bts the Button structure array
 * \param sys_param the system parameters structure
 *
 * \return PARAM_CHANGED enum depending on what changed
 */
Param_Changed hmi_process_osc_buttons(Button *bts, Sys_param *sys_param);

/**
 * \brief Process the buttons state and modify system param accordingly
 *
 * \param rawdata array containing raw data from ADC
 * \param pots the Potentiometer structure array
 * \param sys_param the system parameters structure
 *
 *
 * \return PARAM_CHANGED enum depending on what changed
 */
Param_Changed hmi_process_pots(uint8_t *rawdata, Potentiometer *pots, Sys_param *sys_param);

/**
 * \brief Main finite state machine for the screens display
 * states changes depends on param_changed
 *
 * \param hmi the Hmi structure
 * \param sys_param the system parameters structure
 * \param param_changed the Param_Changed enum specifying what parameter just changed
 */
void hmi_screen_fsm(Hmi * hmi, Sys_param* sys_param, Param_Changed param_changed);

#endif /* INC_HMI_HMI_H_ */
