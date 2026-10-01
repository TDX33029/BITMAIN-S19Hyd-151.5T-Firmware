/**
 * @file uart.h
 * @brief USART1 Driver with Ring Buffer for STM32F103C8T6
 * @author TDX33029 / AntMiner Project
 */

#ifndef __UART_H
#define __UART_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "stm32f1xx.h"

#define UART_RX_BUFFER_SIZE  512

void uart_init(uint32_t baudrate);
void uart_write_byte(uint8_t ch);
void uart_write_bytes(const uint8_t *data, uint16_t len);
void uart_write_str(const char *str);
bool uart_read_byte(uint8_t *ch);
uint16_t uart_available(void);
void uart_flush_rx(void);

#endif /* __UART_H */
