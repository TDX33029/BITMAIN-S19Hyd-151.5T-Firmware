/**
 * @file    uart.c
 * @brief   USART1 驱动实现 (115200 8-N-1, RX 中断 + 环形缓冲)
 * @author  TDX33029 / AntMiner Project
 */

#include "uart.h"

static volatile uint8_t rx_ring_buf[UART_RX_BUFFER_SIZE];
static volatile uint16_t rx_head = 0U;
static volatile uint16_t rx_tail = 0U;

void uart_init(uint32_t baudrate)
{
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_USART1EN;

    /*
     * PA9:  TX -> 复用推挽 50MHz: CRH[7:4]  = 0xB
     * PA10: RX -> 输入上拉:      CRH[11:8] = 0x8
     */
    GPIOA->CRH &= ~0x00000FF0U;
    GPIOA->CRH |=  0x000008B0U;
    GPIOA->BSRR = (1U << 10);

    /* PCLK2 = SystemCoreClock (APB2不分频) */
    uint32_t pclk2 = (SystemCoreClock != 0U) ? SystemCoreClock : 72000000U;
    uint32_t div = (pclk2 + (baudrate / 2U)) / baudrate;
    USART1->BRR = div;

    USART1->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE | USART_CR1_RXNEIE;
    USART1->CR2 = 0U;
    USART1->CR3 = 0U;

    NVIC_SetPriority(USART1_IRQn, 1);
    NVIC_EnableIRQ(USART1_IRQn);
}

/*
 * RXNE/ORE 共用 RXNEIE 中断: 先读SR再读DR即可同时清除两个标志,
 * 否则 ORE 置位后若不清理会造成中断风暴。
 */
void USART1_IRQHandler(void)
{
    uint32_t sr = USART1->SR;

    if ((sr & (USART_SR_RXNE | USART_SR_ORE)) != 0U) {
        uint8_t ch = (uint8_t)(USART1->DR & 0xFFU);
        if ((sr & USART_SR_RXNE) != 0U) {
            uint16_t next_head = (uint16_t)((rx_head + 1U) % UART_RX_BUFFER_SIZE);
            if (next_head != rx_tail) {
                rx_ring_buf[rx_head] = ch;
                rx_head = next_head;
            }
        }
    }
}

void uart_write_byte(uint8_t ch)
{
    while ((USART1->SR & USART_SR_TXE) == 0U) {
        /* wait TXE */
    }
    USART1->DR = ch;
}

void uart_write_bytes(const uint8_t *data, uint16_t len)
{
    for (uint16_t i = 0U; i < len; i++) {
        uart_write_byte(data[i]);
    }
}

void uart_write_str(const char *str)
{
    while (*str != '\0') {
        uart_write_byte((uint8_t)*str++);
    }
}

bool uart_read_byte(uint8_t *ch)
{
    if (rx_head == rx_tail) {
        return false;
    }
    *ch = rx_ring_buf[rx_tail];
    rx_tail = (uint16_t)((rx_tail + 1U) % UART_RX_BUFFER_SIZE);
    return true;
}

uint16_t uart_available(void)
{
    if (rx_head >= rx_tail) {
        return (uint16_t)(rx_head - rx_tail);
    }
    return (uint16_t)(UART_RX_BUFFER_SIZE - rx_tail + rx_head);
}

void uart_flush_rx(void)
{
    rx_tail = rx_head;
}
