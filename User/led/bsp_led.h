#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED_R_PORT GPIOB
#define LED_R_CLK  RCC_APB2Periph_GPIOB
#define LED_R_PIN  GPIO_Pin_5 

#define LED_G_PORT GPIOB
#define LED_G_CLK  RCC_APB2Periph_GPIOB
#define LED_G_PIN  GPIO_Pin_0 

#define LED_B_PORT GPIOB
#define LED_B_CLK  RCC_APB2Periph_GPIOB
#define LED_B_PIN  GPIO_Pin_1 


#define digitalHi(p,i) 		{p->BSRR=i;}
#define digitalLo(p,i) 		{p->BRR=i;}
#define digitalToggle(p,i) 	{p->ODR ^= i;}

#define LedR_Toggle digitalToggle(LED_R_PORT, LED_R_PIN)
#define LEDR_OFF 	digitalHi(LED_R_PORT, LED_R_PIN)
#define LEDR_ON 	digitalLo(LED_R_PORT, LED_R_PIN)

#define LedB_Toggle digitalToggle(LED_B_PORT, LED_B_PIN)
#define LEDB_OFF 	digitalHi(LED_B_PORT, LED_B_PIN)
#define LEDB_ON 	digitalLo(LED_B_PORT, LED_B_PIN)

#define LedG_Toggle digitalToggle(LED_G_PORT, LED_G_PIN)
#define LEDG_OFF digitalHi(LED_G_PORT, LED_G_PIN)
#define LEDG_ON digitalLo(LED_G_PORT, LED_G_PIN)

#define LED_RED 	LEDR_ON; LEDG_OFF; LEDB_OFF
#define LED_GREEN 	LEDG_ON; LEDR_OFF; LEDB_OFF
#define LED_BLUE 	LEDB_ON; LEDR_OFF; LEDG_OFF

#define LED_YELLOW 	LEDR_ON; LEDG_ON; LEDB_OFF
#define LED_PURPLE 	LEDR_ON; LEDG_OFF; LEDB_ON
#define LED_WHILE 	LEDR_ON; LEDG_ON; LEDB_ON




void LED_GPIO_Config(void);

#endif


