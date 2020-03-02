/**
 * \file HMI.h
 * \brief Human-Machine Interface functions definition.
 */

#ifndef INC_HMI_HMI_H_
#define INC_HMI_HMI_H_

#include <stm32f4xx.h>

#define NBR_OF_POTS 				12
#define NBR_OF_BUTTONS 				11
#define DEBOUNCE_NBR_OF_SAMPLES		5

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
 * \struct Hmi
 * \brief define an Human-Machine Interface variables
 */
typedef struct {
	uint8_t adc_raw_data[NBR_OF_POTS]; /*!<raw 8 bit ADC data for the 12 pots */
	Button bts[NBR_OF_BUTTONS];
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
 */
void hmi_process_buttons(Button *bts, Sys_param sys_param);

#endif /* INC_HMI_HMI_H_ */
