#include "main.h"
#include "uart_term.h"
#include "stm32f1xx_hal.h"
void throw_data_uart_term(UART_HandleTypeDef huart, float temp_ds, float temp_th, float hum, float pres)
{
    HAL_UART_Transmit(&huart, (uint8_t*)"---------------------\r\n", 24, HAL_MAX_DELAY);
    HAL_UART_Transmit(&huart, (uint8_t*)"Temperature DS18B20: ", 21, HAL_MAX_DELAY);
    HAL_UART_Transmit(&huart, (uint8_t*)&temp_ds, sizeof(temp_ds), HAL_MAX_DELAY);
    HAL_UART_Transmit(&huart, (uint8_t*)"\r\n", 2, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"Temperature TH: ", 16, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)&temp_th, sizeof(temp_th), HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"\r\n", 2, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"Humidity: ", 10, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)&hum, sizeof(hum), HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"\r\n", 2, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"Pressure: ", 10, HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)&pres, sizeof(pres), HAL_MAX_DELAY);
    // HAL_UART_Transmit(&huart, (uint8_t*)"\r\n", 2, HAL_MAX_DELAY);
    HAL_UART_Transmit(&huart, (uint8_t*)"---------------------\r\n", 24, HAL_MAX_DELAY);
}
