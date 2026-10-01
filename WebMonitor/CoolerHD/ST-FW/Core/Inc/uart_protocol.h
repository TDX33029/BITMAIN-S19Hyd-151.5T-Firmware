/**
  ******************************************************************************
  * @file    uart_protocol.h
  * @brief   UART Command Parser and 0.5s Telemetry Reporter for CoolerHD
  *          Hardware: USART1 (PB6=TX, PB7=RX) @ 115200 8-N-1
  ******************************************************************************
  */

#ifndef __UART_PROTOCOL_H
#define __UART_PROTOCOL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

/* Initialize UART protocol receiver */
void UartProtocol_Init(UART_HandleTypeDef *huart);

/* Called by USART1 RX interrupt when a byte is received */
void UartProtocol_OnRxByte(uint8_t byte);

/* Main task for command parsing and 500ms periodic reporting */
void UartProtocol_Task(void);

/* Send formatted string via USART1 */
void Uart_Printf(const char *fmt, ...);

#ifdef __cplusplus
}
#endif

#endif /* __UART_PROTOCOL_H */
