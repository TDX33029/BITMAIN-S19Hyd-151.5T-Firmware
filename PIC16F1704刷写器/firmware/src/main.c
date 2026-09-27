/**
 * @file main.c
 * @brief STM32F103C8T6 PIC16F1704 Flasher Main Application
 * @author TDX33029 / AntMiner Project
 */

#include "stm32f1xx.h"
#include "pic16f1704_icsp.h"
#include "uart.h"
#include "protocol.h"
#include <stdio.h>

/* System Clock: 72MHz from 8MHz Crystal via PLL */
static void system_clock_config(void) {
    /* Enable HSE */
    RCC->CR |= RCC_CR_HSEON;
    uint32_t timeout = 50000;
    while (!(RCC->CR & RCC_CR_HSERDY) && --timeout);

    if (RCC->CR & RCC_CR_HSERDY) {
        /* FLASH 2 wait states for 72MHz */
        FLASH->ACR |= FLASH_ACR_PRFTBE | FLASH_ACR_LATENCY_2;

        /* HCLK = SYSCLK, PCLK2 = HCLK, PCLK1 = HCLK / 2 */
        RCC->CFGR |= RCC_CFGR_HPRE_DIV1 | RCC_CFGR_PPRE2_DIV1 | RCC_CFGR_PPRE1_DIV2;

        /* PLL: HSE * 9 = 72MHz */
        RCC->CFGR &= ~(RCC_CFGR_PLLSRC | RCC_CFGR_PLLXTPRE | RCC_CFGR_PLLMULL);
        RCC->CFGR |= (RCC_CFGR_PLLSRC | RCC_CFGR_PLLMULL9);

        /* Enable PLL */
        RCC->CR |= RCC_CR_PLLON;
        while (!(RCC->CR & RCC_CR_PLLRDY));

        /* Select PLL as system clock */
        RCC->CFGR &= ~RCC_CFGR_SW;
        RCC->CFGR |= RCC_CFGR_SW_PLL;
        while ((RCC->CFGR & RCC_CFGR_SWS) != RCC_CFGR_SWS_PLL);

        SystemCoreClock = 72000000;
    } else {
        /* Fallback: HSI * 8 / 2 = 32MHz */
        FLASH->ACR |= FLASH_ACR_LATENCY_1;
        RCC->CFGR |= RCC_CFGR_PLLMULL8;
        RCC->CR |= RCC_CR_PLLON;
        while (!(RCC->CR & RCC_CR_PLLRDY));
        RCC->CFGR |= RCC_CFGR_SW_PLL;
        SystemCoreClock = 32000000;
    }
}

int main(void) {
    system_clock_config();
    icsp_delay_init();
    icsp_gpio_init();
    uart_init(115200);
    protocol_init();

    /* Startup Banner */
    printf("\r\n=======================================================\r\n");
    printf("   AntMiner PIC16F1704 ICSP Flasher Tool (STM32F103)   \r\n");
    printf("   Firmware: v1.0.0 | System Clock: %lu MHz\r\n", (unsigned long)(SystemCoreClock / 1000000));
    printf("   Baud Rate: 115200 8-N-1 (USART1: PA9 TX, PA10 RX)   \r\n");
    printf("-------------------------------------------------------\r\n");
    printf("   Pin Connections to Target PIC16F1704 / Hashboard:   \r\n");
    printf("     PA0 -> PIC MCLR / VPP (Pin 4)                     \r\n");
    printf("     PA1 -> PIC ICSPDAT / PGD (Pin 13)                 \r\n");
    printf("     PA2 -> PIC ICSPCLK / PGC (Pin 12)                 \r\n");
    printf("     PA3 -> PIC VDD_EN (3.3V Power Control)            \r\n");
    printf("     GND -> PIC VSS (Pin 14 / Board Ground)            \r\n");
    printf("     3V3 -> PIC VDD (Pin 1)                            \r\n");
    printf("-------------------------------------------------------\r\n");
    printf("   Offline Mode: Press PB9 key to burn embedded FW     \r\n");
    printf("   Online Mode: Send 'HELP' or use host Python tool    \r\n");
    printf("=======================================================\r\n\r\n");

    uint32_t heartbeat_tick = 0;
    uint32_t key_debounce = 0;
    bool key_pressed_prev = false;

    while (1) {
        /* Process serial communications */
        protocol_process();

        /* Check PB9 Trigger Button (Active LOW) */
        bool key_down = KEY_IS_PRESSED();
        if (key_down && !key_pressed_prev) {
            key_debounce++;
            if (key_debounce >= 20000) { // ~20ms debounce
                key_pressed_prev = true;
                key_debounce = 0;

                printf("\r\n[KEY] Standalone One-Key Offline Burn Triggered!\r\n");
                LED_ON();

                icsp_status_t status = icsp_burn_default_firmware();
                if (status == ICSP_OK) {
                    printf("[SUCCESS] Hashboard PIC16F1704 Flashed & Verified 100%% OK!\r\n");
                    LED_ON();
                    icsp_delay_ms(1500);
                    LED_OFF();
                } else {
                    printf("[FAIL] Burn Failed with Error Code %d! Check connections.\r\n", status);
                    for (int i = 0; i < 10; i++) {
                        LED_TOGGLE();
                        icsp_delay_ms(100);
                    }
                    LED_OFF();
                }
            }
        } else if (!key_down) {
            key_pressed_prev = false;
            key_debounce = 0;
        }

        /* Heartbeat LED blink (gentle toggle every ~1s) */
        heartbeat_tick++;
        if (heartbeat_tick >= 1000000) {
            heartbeat_tick = 0;
            LED_TOGGLE();
        }
    }
}
