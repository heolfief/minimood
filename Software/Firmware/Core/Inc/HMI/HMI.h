/**
 * \file HMI.h
 * \brief Human-Machine Interface functions definition.
 */

#ifndef INC_HMI_HMI_H_
#define INC_HMI_HMI_H_

#include <stm32f4xx.h>

#define NBR_OF_POTS 12

/**
 * \struct Hmi
 * \brief define an Human-Machine Interface variables
 */
typedef struct {
	uint8_t adc_raw_data[NBR_OF_POTS]; /*!<raw 8 bit ADC data for the 12 pots */
} Hmi;

#endif /* INC_HMI_HMI_H_ */
