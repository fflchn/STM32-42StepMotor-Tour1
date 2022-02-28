#include "bsp_stepmotor.h"

void Stepper_Pin_Init(){
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(MOTOR_DIR_CLK | MOTOR_PUL_CLK | MOTOR_ENA_CLK, ENABLE);

    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_InitStructure.GPIO_Pin = MOTOR_DIR_PIN;
    GPIO_Init(MOTOR_DIR_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = MOTOR_PUL_PIN;
    GPIO_Init(MOTOR_PUL_PORT, &GPIO_InitStructure);

    GPIO_InitStructure.GPIO_Pin = MOTOR_ENA_PIN;
    GPIO_Init(MOTOR_ENA_PORT, &GPIO_InitStructure);

    GPIO_ResetBits(MOTOR_DIR_PORT, MOTOR_DIR_PIN);
    GPIO_ResetBits(MOTOR_PUL_PORT, MOTOR_PUL_PIN);
    GPIO_ResetBits(MOTOR_ENA_PORT, MOTOR_ENA_PIN);
}

