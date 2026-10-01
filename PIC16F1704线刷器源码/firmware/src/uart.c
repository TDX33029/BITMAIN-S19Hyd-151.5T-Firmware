/**
 * @file uart.c
 * @brief USART1 Driver Implementation with Ring Buffer
 * @author TDX33029 / AntMiner Project
 */

#include "uart.h"
#include <stdio.h>

static volatile uint8_t rx_ring_buf[UART_RX_BUFFER_SIZE];
static volatile uint16_t rx_head = 0;
static volatile uint16_t rx_tail = 0;

void uart_init(uint32_t baudrate) {
    /* Enable GPIOA and USART1 clock */
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_USART1EN;

    /* 
     * PA9:  TX -> Alternate Function Push-Pull 50MHz: CRH[7:4]   = 0xB
     * PA10: RX -> Input Floating / Input Pull-up:     CRH[11:8]  = 0x8
     */
    GPIOA->CRH &= ~0x00000FF0;
    GPIOA->CRH |=  0x000008B0;
    GPIOA->BSRR = (1 << 10); // Pull up on RX

    /* Configure baud rate for 72MHz PCLK2 */
    uint32_t pclk2 = SystemCoreClock ? SystemCoreClock : 72000000;
    uint32_t div = (pclk2 + (baudrate / 2)) / baudrate;
    USART1->BRR = div;

    /* Enable Transmitter, Receiver, and RX Interrupt */
    USART1->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE | USART_CR1_RXNEIE;

    /* Enable USART1 IRQ in NVIC */
    NVIC_SetPriority(USART1_IRQn, 1);
    NVIC_EnableIRQ(USART1_IRQn);
}

void USART1_IRQHandler(void) {
    if (USART1->SR & USART_SR_RXNE) {
        uint8_t ch = (uint8_t)(USART1->DR & 0xFF);
        uint16_t next_head = (rx_head + 1) % UART_RX_BUFFER_SIZE;
        if (next_head != rx_tail) { // Don't overflow
            rx_ring_buf[rx_head] = ch;
            rx_head = next_head;
        }
    }
}

void uart_write_byte(uint8_t ch) {
    while (!(USART1->SR & USART_SR_TXE));
    USART1->DR = ch;
}

void uart_write_bytes(const uint8_t *data, uint16_t len) {
    for (uint16_t i = 0; i < len; i++) {
        uart_write_byte(data[i]);
    }
}

void uart_write_str(const char *str) {
    while (*str) {
        uart_write_byte((uint8_t)*str++);
    }
}

bool uart_read_byte(uint8_t *ch) {
    if (rx_head == rx_tail) {
        return false;
    }
    *ch = rx_ring_buf[rx_tail];
    rx_tail = (rx_tail + 1) % UART_RX_BUFFER_SIZE;
    return true;
}

uint16_t uart_available(void) {
    if (rx_head >= rx_tail) {
        return rx_head - rx_tail;
    }
    return UART_RX_BUFFER_SIZE - rx_tail + rx_head;
}

void uart_flush_rx(void) {
    rx_tail = rx_head;
}

/* Retarget _write for printf */
int _write(int file, char *ptr, int len) {
    (void)file;
    for (int i = 0; i < len; i++) {
        if (ptr[i] == '\n') {
            uart_write_byte('\r');
        }
        uart_write_byte((uint8_t)ptr[i]);
    }
    return len;
}
