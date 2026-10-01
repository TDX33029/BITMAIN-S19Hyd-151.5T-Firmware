/**
  ******************************************************************************
  * @file    fan.c
  * @brief   6-Channel 12025 Fan Controller implementation
  ******************************************************************************
  */

#include "fan.h"
#include <stdlib.h>

static TIM_HandleTypeDef *s_htim1 = NULL;
static TIM_HandleTypeDef *s_htim2 = NULL;

static Fan_Channel_t s_fans[FAN_NUM_CHANNELS] = {0};
static uint8_t s_pwm_polarity_reversed = 0;

/* Set hardware timer compare register for specified channel (0~5) */
static void set_hardware_ccr(uint8_t idx, uint16_t ccr)
{
    switch (idx) {
        case 0: __HAL_TIM_SET_COMPARE(s_htim1, TIM_CHANNEL_1, ccr); break;
        case 1: __HAL_TIM_SET_COMPARE(s_htim1, TIM_CHANNEL_2, ccr); break;
        case 2: __HAL_TIM_SET_COMPARE(s_htim1, TIM_CHANNEL_3, ccr); break;
        case 3: __HAL_TIM_SET_COMPARE(s_htim1, TIM_CHANNEL_4, ccr); break;
        case 4: __HAL_TIM_SET_COMPARE(s_htim2, TIM_CHANNEL_1, ccr); break;
        case 5: __HAL_TIM_SET_COMPARE(s_htim2, TIM_CHANNEL_2, ccr); break;
        default: break;
    }
}

/* Apply duty cycle (0 ~ 1000 permille) to hardware */
static void apply_fan_duty(uint8_t idx, uint16_t duty_permille)
{
    if (idx >= FAN_NUM_CHANNELS) return;

    if (duty_permille > FAN_MAX_DUTY) {
        duty_permille = FAN_MAX_DUTY;
    }

    uint16_t d = s_pwm_polarity_reversed ? (FAN_MAX_DUTY - duty_permille) : duty_permille;
    uint16_t ccr = 0;

    if (d >= FAN_MAX_DUTY) {
        ccr = FAN_PWM_ARR_PERIOD + 1;
    } else if (d == 0) {
        ccr = 0;
    } else {
        ccr = (uint32_t)d * FAN_PWM_ARR_PERIOD / 1000;
    }

    set_hardware_ccr(idx, ccr);
}

void Fan_SetPolarity(uint8_t inverted)
{
    s_pwm_polarity_reversed = inverted ? 1 : 0;
    for (int i = 0; i < FAN_NUM_CHANNELS; i++) {
        apply_fan_duty(i, s_fans[i].duty_permille);
    }
}

uint8_t Fan_GetPolarity(void)
{
    return s_pwm_polarity_reversed;
}

void Fan_Init(TIM_HandleTypeDef *htim1, TIM_HandleTypeDef *htim2)
{
    s_htim1 = htim1;
    s_htim2 = htim2;

    /* 1. Configure 6 TACH pins as EXTI Falling Edge with internal Pull-up */
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_AFIO_CLK_ENABLE();

    /* Fan 1 (PA2), Fan 2 (PA3), Fan 3 (PA6), Fan 4 (PA7) */
    GPIO_InitStruct.Pin  = GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* Fan 5 (PB0), Fan 6 (PB1) */
    GPIO_InitStruct.Pin  = GPIO_PIN_0 | GPIO_PIN_1;
    GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* Configure EXTI Interrupt Priorities and Enable */
    HAL_NVIC_SetPriority(EXTI0_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI0_IRQn);

    HAL_NVIC_SetPriority(EXTI1_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI1_IRQn);

    HAL_NVIC_SetPriority(EXTI2_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI2_IRQn);

    HAL_NVIC_SetPriority(EXTI3_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI3_IRQn);

    HAL_NVIC_SetPriority(EXTI9_5_IRQn, 2, 0);
    HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

    /* 2. Configure Timer PWM outputs (25 kHz, Polarity LOW for inverted S8050) */
    TIM_OC_InitTypeDef sConfigOC = {0};
    sConfigOC.OCMode       = TIM_OCMODE_PWM1;
    sConfigOC.Pulse        = 0;
    sConfigOC.OCPolarity   = TIM_OCPOLARITY_LOW;
    sConfigOC.OCFastMode   = TIM_OCFAST_DISABLE;
    sConfigOC.OCIdleState  = TIM_OCIDLESTATE_RESET;
    sConfigOC.OCNPolarity  = TIM_OCNPOLARITY_HIGH;
    sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;

    /* Re-init TIM1 channels with 25 kHz ARR */
    htim1->Instance->PSC = 0;
    htim1->Instance->ARR = FAN_PWM_ARR_PERIOD;
    HAL_TIM_PWM_ConfigChannel(htim1, &sConfigOC, TIM_CHANNEL_1);
    HAL_TIM_PWM_ConfigChannel(htim1, &sConfigOC, TIM_CHANNEL_2);
    HAL_TIM_PWM_ConfigChannel(htim1, &sConfigOC, TIM_CHANNEL_3);
    HAL_TIM_PWM_ConfigChannel(htim1, &sConfigOC, TIM_CHANNEL_4);

    /* Re-init TIM2 channels with 25 kHz ARR */
    htim2->Instance->PSC = 0;
    htim2->Instance->ARR = FAN_PWM_ARR_PERIOD;
    HAL_TIM_PWM_ConfigChannel(htim2, &sConfigOC, TIM_CHANNEL_1);
    HAL_TIM_PWM_ConfigChannel(htim2, &sConfigOC, TIM_CHANNEL_2);

    /* Start TIM1 PWM channels and enable Main Output (BDTR MOE) */
    HAL_TIM_PWM_Start(htim1, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(htim1, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(htim1, TIM_CHANNEL_3);
    HAL_TIM_PWM_Start(htim1, TIM_CHANNEL_4);
    htim1->Instance->BDTR |= TIM_BDTR_MOE;

    /* Start TIM2 PWM channels */
    HAL_TIM_PWM_Start(htim2, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(htim2, TIM_CHANNEL_2);

    /* 3. Initialize software fan states: default target 200 RPM, initial 10% duty */
    uint32_t now = HAL_GetTick();
    for (int i = 0; i < FAN_NUM_CHANNELS; i++) {
        s_fans[i].target_rpm        = 200;
        s_fans[i].current_rpm       = 0;
        s_fans[i].duty_permille      = 100; /* 10.0% safe initial duty */
        s_fans[i].manual_mode       = 0;
        s_fans[i].target_met        = 0;
        s_fans[i].integral_err      = 0;
        s_fans[i].prev_err          = 0;
        s_fans[i].last_calc_tick    = now;
        s_fans[i].last_calc_pulses  = 0;
        s_fans[i].last_pulse_tick   = now;
        s_fans[i].pulse_count       = 0;

        apply_fan_duty(i, s_fans[i].duty_permille);
    }
}

static uint16_t estimate_feedforward_duty(uint16_t target_rpm)
{
    if (target_rpm == 0) return 0;
    if (target_rpm <= 800) return 150; /* 15% duty for low speeds */
    int32_t d = 150 + ((int32_t)(target_rpm - 800) * 850) / 2500;
    if (d > 1000) d = 1000;
    if (d < 150)  d = 150;
    return (uint16_t)d;
}

void Fan_SetTargetRPM(uint8_t fan_idx, uint16_t target_rpm)
{
    if (fan_idx == 0) {
        Fan_SetAllTargetRPM(target_rpm);
        return;
    }
    if (fan_idx > FAN_NUM_CHANNELS) return;

    uint8_t idx = fan_idx - 1;
    s_fans[idx].target_rpm   = target_rpm;
    s_fans[idx].manual_mode  = 0;
    s_fans[idx].integral_err = 0;

    if (target_rpm == 0) {
        s_fans[idx].duty_permille = 0;
        apply_fan_duty(idx, 0);
    } else {
        /* Set feedforward initial duty directly based on target */
        s_fans[idx].duty_permille = estimate_feedforward_duty(target_rpm);
        apply_fan_duty(idx, s_fans[idx].duty_permille);
    }
}

void Fan_SetAllTargetRPM(uint16_t target_rpm)
{
    for (uint8_t i = 1; i <= FAN_NUM_CHANNELS; i++) {
        Fan_SetTargetRPM(i, target_rpm);
    }
}

void Fan_SetManualDuty(uint8_t fan_idx, uint16_t duty_permille)
{
    if (fan_idx == 0) {
        for (uint8_t i = 1; i <= FAN_NUM_CHANNELS; i++) {
            Fan_SetManualDuty(i, duty_permille);
        }
        return;
    }
    if (fan_idx > FAN_NUM_CHANNELS) return;

    uint8_t idx = fan_idx - 1;
    s_fans[idx].manual_mode   = 1;
    s_fans[idx].duty_permille = (duty_permille > 1000) ? 1000 : duty_permille;
    apply_fan_duty(idx, s_fans[idx].duty_permille);
}

void Fan_Stop(uint8_t fan_idx)
{
    Fan_SetTargetRPM(fan_idx, 0);
}

uint16_t Fan_GetRPM(uint8_t fan_idx)
{
    if (fan_idx >= 1 && fan_idx <= FAN_NUM_CHANNELS) {
        return s_fans[fan_idx - 1].current_rpm;
    }
    return 0;
}

uint16_t Fan_GetTargetRPM(uint8_t fan_idx)
{
    if (fan_idx >= 1 && fan_idx <= FAN_NUM_CHANNELS) {
        return s_fans[fan_idx - 1].target_rpm;
    }
    return 0;
}

uint16_t Fan_GetDuty(uint8_t fan_idx)
{
    if (fan_idx >= 1 && fan_idx <= FAN_NUM_CHANNELS) {
        return s_fans[fan_idx - 1].duty_permille;
    }
    return 0;
}

uint32_t Fan_GetPulseCount(uint8_t fan_idx)
{
    if (fan_idx >= 1 && fan_idx <= FAN_NUM_CHANNELS) {
        return s_fans[fan_idx - 1].pulse_count;
    }
    return 0;
}

uint8_t Fan_IsMet(uint8_t fan_idx)
{
    if (fan_idx >= 1 && fan_idx <= FAN_NUM_CHANNELS) {
        return s_fans[fan_idx - 1].target_met;
    }
    return 0;
}

uint8_t Fan_IsFans1_3_Met(void)
{
    return (s_fans[0].target_met && s_fans[1].target_met && s_fans[2].target_met);
}

uint8_t Fan_IsFans4_6_Met(void)
{
    return (s_fans[3].target_met && s_fans[4].target_met && s_fans[5].target_met);
}

uint8_t Fan_HasZeroSpeed(void)
{
    for (int i = 0; i < FAN_NUM_CHANNELS; i++) {
        if (s_fans[i].current_rpm == 0) {
            return 1;
        }
    }
    return 0;
}

void Fan_OnExtiPulse(uint16_t gpio_pin)
{
    uint8_t idx = 0xFF;
    if (gpio_pin == GPIO_PIN_2) idx = 0;       /* Fan 1: PA2 */
    else if (gpio_pin == GPIO_PIN_3) idx = 1;  /* Fan 2: PA3 */
    else if (gpio_pin == GPIO_PIN_6) idx = 2;  /* Fan 3: PA6 */
    else if (gpio_pin == GPIO_PIN_7) idx = 3;  /* Fan 4: PA7 */
    else if (gpio_pin == GPIO_PIN_0) idx = 4;  /* Fan 5: PB0 */
    else if (gpio_pin == GPIO_PIN_1) idx = 5;  /* Fan 6: PB1 */
    else return;

    s_fans[idx].pulse_count++;
    s_fans[idx].last_pulse_tick = HAL_GetTick();
}

void Fan_ControlLoopTask(void)
{
    uint32_t now_tick = HAL_GetTick();

    for (int i = 0; i < FAN_NUM_CHANNELS; i++) {
        /* Speed measurement & control loop synchronized on 250ms time window */
        uint32_t dt = now_tick - s_fans[i].last_calc_tick;
        if (dt >= 250) {
            uint32_t cur_pulses = s_fans[i].pulse_count;
            uint32_t delta_pulses = cur_pulses - s_fans[i].last_calc_pulses;
            s_fans[i].last_calc_pulses = cur_pulses;
            s_fans[i].last_calc_tick = now_tick;

            /* Check if pulses stopped (>350ms without pulse -> 0 RPM) */
            if ((now_tick - s_fans[i].last_pulse_tick > 350) || (delta_pulses == 0)) {
                s_fans[i].current_rpm = 0;
            } else {
                /* 2 pulses per revolution: RPM = (delta_pulses / 2) * (60000 / dt) */
                s_fans[i].current_rpm = (uint16_t)((delta_pulses * 30000UL) / dt);
            }

            /* Check if speed meets target ("达标") */
            if (s_fans[i].target_rpm == 0) {
                s_fans[i].target_met = (s_fans[i].current_rpm == 0) ? 1 : 0;
            } else {
                uint16_t tol = s_fans[i].target_rpm * 8 / 100;
                if (tol < 60) tol = 60;

                int diff = (int)s_fans[i].current_rpm - (int)s_fans[i].target_rpm;
                s_fans[i].target_met = (abs(diff) <= tol) ? 1 : 0;
            }

            /* Smooth Speed Regulation */
            if (!s_fans[i].manual_mode) {
                if (s_fans[i].target_rpm == 0) {
                    s_fans[i].duty_permille = 0;
                    apply_fan_duty(i, 0);
                } else if (s_fans[i].current_rpm == 0) {
                    /* ANTI-RUNAWAY: Fan is starting up or stopped, hold feedforward base duty */
                    s_fans[i].duty_permille = estimate_feedforward_duty(s_fans[i].target_rpm);
                    apply_fan_duty(i, s_fans[i].duty_permille);
                } else {
                    int32_t err = (int32_t)s_fans[i].target_rpm - (int32_t)s_fans[i].current_rpm;

                    /* Deadband: if error is within +-50 RPM, DO NOT hunt! Keep duty stable */
                    if (abs(err) > 50) {
                        /* Gentle adjustment: 1% duty per 35 RPM error, max +-1.5% (15 permille) per 250ms */
                        int32_t step = err / 35;
                        if (step > 15)  step = 15;
                        if (step < -15) step = -15;

                        int32_t new_duty = (int32_t)s_fans[i].duty_permille + step;
                        if (new_duty > FAN_MAX_DUTY) new_duty = FAN_MAX_DUTY;
                        if (new_duty < FAN_MIN_RUN_DUTY) new_duty = FAN_MIN_RUN_DUTY;

                        s_fans[i].duty_permille = (uint16_t)new_duty;
                        apply_fan_duty(i, s_fans[i].duty_permille);
                    }
                }
            }
        }
    }
}
