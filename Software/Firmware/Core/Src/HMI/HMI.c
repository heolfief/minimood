/**
 * \file HMI.c
 * \brief Human-Machine Interface functions definition.
 */

#include "HMI/HMI.h"

#include "main.h"
#include "sys_param/sys_param.h"

/**
 * \brief Re-maps a number from one range to another.
 * That is, a value of fromLow would get mapped to toLow, a value
 * of fromHigh to toHigh, values in-between to values in-between, etc.
 *
 * \param x the input value to map
 * \param in_min the min value for the input
 * \param in_max the max value for the input
 * \param out_min the desired min value for the output
 * \param out_max the desired max value for the output
 *
 * \return the mapped value
 */
static float map(float x, float in_min, float in_max, float out_min,
		float out_max) {
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}



//temp=HAL_GPIO_ReadPin(OSC1_ON_GPIO_Port, OSC1_ON_Pin);
