#include "stm32f1xx_hal.h"
#include "stm32f1xx.h"
#include "stm32f1xx_it.h"
#include "cmsis_os.h"

#include "nRF905Handler.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	switch (GPIO_Pin) {
		case NRF905_DR_Pin:
			nRF905DataReadyHandler();
		break;
		
		default:
			
		break;
	}
}
