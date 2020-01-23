/*
 * custom_board_v1.h
 *
 *  Created on: 30 nov. 2018
 *      Author: Vincent
 */

#ifndef CUSTOM_BOARD_V1_H_
#define CUSTOM_BOARD_V1_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions
#define LEDS_NUMBER    3

//#define LED_START      8
#define LED_1            NRF_GPIO_PIN_MAP(0, 8)
#define LED_2            NRF_GPIO_PIN_MAP(0, 9)
#define LED_3            NRF_GPIO_PIN_MAP(0, 12)
//#define LED_STOP       12

#define LEDS_ACTIVE_STATE 0

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_1, LED_2, LED_3 }

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3
#define BSP_LED_3      LED_4

#define BUTTONS_NUMBER 6

//#define BUTTON_START   17
#define BUTTON_1       NRF_GPIO_PIN_MAP(0, 31)
#define BUTTON_2       NRF_GPIO_PIN_MAP(0, 30)
#define BUTTON_3       NRF_GPIO_PIN_MAP(0, 24)
#define BUTTON_4       NRF_GPIO_PIN_MAP(0, 1)
#define BUTTON_5       NRF_GPIO_PIN_MAP(0, 3)
#define BUTTON_6       NRF_GPIO_PIN_MAP(0, 5)
//#define BUTTON_STOP    19
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4, BUTTON_5, BUTTON_6 }

#define BSP_BUTTON_0   BUTTON_1
#define BSP_BUTTON_1   BUTTON_2
#define BSP_BUTTON_2   BUTTON_3
#define BSP_BUTTON_3   BUTTON_4
#define BSP_BUTTON_4   BUTTON_5
#define BSP_BUTTON_5   BUTTON_6

#ifdef __cplusplus
}
#endif

#endif /* CUSTOM_BOARD_V1_H_ */
