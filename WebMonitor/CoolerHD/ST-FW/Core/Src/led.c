/**
  ******************************************************************************
  * @file    led.c
  * @brief   LED indicators driver implementation
  ******************************************************************************
  */

#include "led.h"

static LED_Mode_t s_state1_mode = LED_MODE_OFF;
static LED_Mode_t s_state2_mode = LED_MODE_OFF;
static LED_Mode_t s_error_mode  = LED_MODE_OFF;

static uint32_t s_last_blink_tick = 0;
static uint8_t  s_blink_state = 0;

void LED_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* Enable AFIO and GPIOB clocks */
    __HAL_RCC_AFIO_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();

    /** 
      * CRITICAL FOR SWD ST-LINK PROTECTION:
      * Disables JTAG-DP, but keeps SW-DP Enabled!
      * This frees PB3 (JTDO) and PB4 (JNTRST) for normal GPIO use
      * while keeping PA13 (SWDIO) and PA14 (SWCLK) fully functional for ST-LINK!
      */
    __HAL_AFIO_REMAP_SWJ_NOJTAG();

    /* Turn off all LEDs initially (LOW = OFF) */
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5, GPIO_PIN_RESET);

    /* Configure PB3, PB4, PB5 as Output Push-Pull */
    GPIO_InitStruct.Pin   = GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5;
    GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull  = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

void LED_SetState1(LED_Mode_t mode)
{
    s_state1_mode = mode;
    if (mode == LED_MODE_OFF) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_RESET);
    } else if (mode == LED_MODE_ON) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, GPIO_PIN_SET);
    }
}

void LED_SetState2(LED_Mode_t mode)
{
    s_state2_mode = mode;
    if (mode == LED_MODE_OFF) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
    } else if (mode == LED_MODE_ON) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
    }
}

void LED_SetError(LED_Mode_t mode)
{
    s_error_mode = mode;
    if (mode == LED_MODE_OFF) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET);
    } else if (mode == LED_MODE_ON) {
        HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET);
    }
}

void LED_UpdateFromFans(uint8_t fan1_3_met, uint8_t fan4_6_met, uint8_t has_zero_speed)
{
    /* 1-3风扇转速达标则state1-LED常亮，反之闪烁 */
    LED_SetState1(fan1_3_met ? LED_MODE_ON : LED_MODE_BLINK);

    /* 4-6风扇转速达标则state2-LED常亮，反之闪烁 */
    LED_SetState2(fan4_6_met ? LED_MODE_ON : LED_MODE_BLINK);

    /* 如果有风扇转速为0则ERROR闪烁，反之熄灭 */
    LED_SetError(has_zero_speed ? LED_MODE_BLINK : LED_MODE_OFF);
}

void LED_UpdateTask(void)
{
    uint32_t now = HAL_GetTick();

    /* Toggle blink state every 250ms (500ms full period) */
    if (now - s_last_blink_tick >= 250) {
        s_last_blink_tick = now;
        s_blink_state = !s_blink_state;

        if (s_state1_mode == LED_MODE_BLINK) {
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, s_blink_state ? GPIO_PIN_SET : GPIO_PIN_RESET);
        }

        if (s_state2_mode == LED_MODE_BLINK) {
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, s_blink_state ? GPIO_PIN_SET : GPIO_PIN_RESET);
        }

        if (s_error_mode == LED_MODE_BLINK) {
            HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, s_blink_state ? GPIO_PIN_SET : GPIO_PIN_RESET);
        }
    }
}
