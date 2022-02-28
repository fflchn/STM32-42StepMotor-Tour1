#include "bsp_led.h"


void LED_GPIO_Config(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    RCC_APB2PeriphClockCmd(LED_R_CLK|LED_G_CLK|LED_B_CLK, ENABLE);
    GPIO_InitStructure.GPIO_Pin =  LED_B_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(LED_B_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin =  LED_R_PIN;
    GPIO_Init(LED_R_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin =  LED_G_PIN;
    GPIO_Init(LED_G_PORT, &GPIO_InitStructure);

    GPIO_SetBits(LED_B_PORT, LED_R_PIN|LED_G_PIN|LED_B_PIN);

}
