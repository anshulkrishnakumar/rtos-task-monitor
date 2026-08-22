#include <led.h>
#include <main.h>

void LED_ON() {
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
}

void LED_Off(void) {
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
}

void LED_Toggle(void) {
	HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}