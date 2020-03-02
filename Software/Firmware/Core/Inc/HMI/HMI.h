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

/**
 * \struct Button
 * \brief define a button for software debouncing
 */
typedef struct {
	GPIO_TypeDef *port; /*!<GPIO PORT */
	uint16_t pin; /*!<GPIO PIN */
	uint16_t log_cnt; /*!<Counter for number of valid sample read, used for debouncing */
	uint8_t state;	/*!<Debounced state of the button */
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

#endif /* INC_HMI_HMI_H_ */
