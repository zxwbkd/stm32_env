#include "led_flip.h"

void led_flip_init(void){
    HAL_GPIO_WritePin(GPIOB, LED_PIN1_Pin, GPIO_PIN_RESET);
}

void led_flip(void){
    HAL_GPIO_WritePin(GPIOB, LED_PIN1_Pin, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOB, LED_PIN1_Pin, GPIO_PIN_RESET);
    HAL_Delay(500);
}
