/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CTRL_DOWN_Pin GPIO_PIN_13
#define CTRL_DOWN_GPIO_Port GPIOC
#define CTRL_RIGHT_Pin GPIO_PIN_14
#define CTRL_RIGHT_GPIO_Port GPIOC
#define CTRL_OK_Pin GPIO_PIN_15
#define CTRL_OK_GPIO_Port GPIOC
#define ADSR_D_Pin GPIO_PIN_0
#define ADSR_D_GPIO_Port GPIOC
#define ADSR_A_Pin GPIO_PIN_1
#define ADSR_A_GPIO_Port GPIOC
#define ADSR_R_Pin GPIO_PIN_2
#define ADSR_R_GPIO_Port GPIOC
#define ADSR_S_Pin GPIO_PIN_3
#define ADSR_S_GPIO_Port GPIOC
#define CTRL_LEFT_Pin GPIO_PIN_0
#define CTRL_LEFT_GPIO_Port GPIOA
#define CTRL_UP_Pin GPIO_PIN_1
#define CTRL_UP_GPIO_Port GPIOA
#define OSC1_AMP_Pin GPIO_PIN_2
#define OSC1_AMP_GPIO_Port GPIOA
#define OSC2_AMP_Pin GPIO_PIN_3
#define OSC2_AMP_GPIO_Port GPIOA
#define AUDIO_OUT_Pin GPIO_PIN_4
#define AUDIO_OUT_GPIO_Port GPIOA
#define LFO_CV_OUT_Pin GPIO_PIN_5
#define LFO_CV_OUT_GPIO_Port GPIOA
#define LFO_RATE_Pin GPIO_PIN_6
#define LFO_RATE_GPIO_Port GPIOA
#define OSC3_DET_Pin GPIO_PIN_7
#define OSC3_DET_GPIO_Port GPIOA
#define OSC1_DET_Pin GPIO_PIN_4
#define OSC1_DET_GPIO_Port GPIOC
#define LFO_DEPTH_Pin GPIO_PIN_5
#define LFO_DEPTH_GPIO_Port GPIOC
#define OSC3_AMP_Pin GPIO_PIN_0
#define OSC3_AMP_GPIO_Port GPIOB
#define OSC2_DET_Pin GPIO_PIN_1
#define OSC2_DET_GPIO_Port GPIOB
#define OSC3_ON_Pin GPIO_PIN_10
#define OSC3_ON_GPIO_Port GPIOB
#define OSC3_WAVE_Pin GPIO_PIN_13
#define OSC3_WAVE_GPIO_Port GPIOB
#define OSC1_ON_Pin GPIO_PIN_4
#define OSC1_ON_GPIO_Port GPIOB
#define OSC2_WAVE_Pin GPIO_PIN_5
#define OSC2_WAVE_GPIO_Port GPIOB
#define OSC1_WAVE_Pin GPIO_PIN_8
#define OSC1_WAVE_GPIO_Port GPIOB
#define OSC2_ON_Pin GPIO_PIN_9
#define OSC2_ON_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
