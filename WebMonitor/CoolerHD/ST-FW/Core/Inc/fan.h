/**
  ******************************************************************************
  * @file    fan.h
  * @brief   6-Channel 12025 4-Wire Fan Controller for CoolerHD
  *          PWM: 25 kHz carrier, hardware-inverted for S8050 NPN driver
  *          TACH: 6-channel EXTI edge capture with DWT cycle timestamp
  *          Control: Automatic closed-loop speed regulation (PI)
  ******************************************************************************
  */

#ifndef __FAN_H
#define __FAN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

#define FAN_NUM_CHANNELS     6
#define FAN_PWM_ARR_PERIOD   2879   /* 72MHz / 2880 = 25.000 kHz */
#define FAN_MAX_DUTY         1000   /* 1000 = 100.0% */
#define FAN_MIN_RUN_DUTY     50     /* 5.0% minimum running duty to support low RPM (e.g. 200 RPM) */

typedef struct {
    uint16_t target_rpm;        /* Target RPM (0 = stop) */
    uint16_t current_rpm;       /* Filtered real-time RPM */
    uint16_t duty_permille;     /* PWM Duty in 0.1% (0 ~ 1000) */
    uint8_t  manual_mode;       /* 1 = manual duty override, 0 = auto RPM closed loop */
    uint8_t  target_met;        /* 1 = speed within tolerance */
    int32_t  integral_err;      /* PI integral accumulator */
    int16_t  prev_err;          /* Previous error for derivative */
    uint32_t last_calc_tick;    /* Last calculation tick (HAL_GetTick) */
    uint32_t last_calc_pulses;  /* Pulse count at last calculation */
    uint32_t last_pulse_tick;   /* Tick of latest received pulse */
    volatile uint32_t pulse_count; /* Total pulses counted */
} Fan_Channel_t;

/* Initialize Fans, timers, PWM channels, EXTI inputs and DWT timer */
void Fan_Init(TIM_HandleTypeDef *htim1, TIM_HandleTypeDef *htim2);

/* Set target RPM for fan 1~6 (fan_idx: 1..6, or 0 for ALL) */
void Fan_SetTargetRPM(uint8_t fan_idx, uint16_t target_rpm);

/* Set target RPM for all 6 fans at once */
void Fan_SetAllTargetRPM(uint16_t target_rpm);

/* Set manual PWM duty cycle (0 ~ 1000 = 0.0% ~ 100.0%) */
void Fan_SetManualDuty(uint8_t fan_idx, uint16_t duty_permille);

/* Stop a fan (fan_idx: 1..6, or 0 for ALL) */
void Fan_Stop(uint8_t fan_idx);

/* Set/Get PWM polarity (0 = normal/S8050 inverted logic, 1 = direct non-inverted) */
void Fan_SetPolarity(uint8_t inverted);
uint8_t Fan_GetPolarity(void);

/* Getters */
uint16_t Fan_GetRPM(uint8_t fan_idx);
uint16_t Fan_GetTargetRPM(uint8_t fan_idx);
uint16_t Fan_GetDuty(uint8_t fan_idx);
uint32_t Fan_GetPulseCount(uint8_t fan_idx);
uint8_t  Fan_IsMet(uint8_t fan_idx);

/* Group status getters */
uint8_t Fan_IsFans1_3_Met(void);
uint8_t Fan_IsFans4_6_Met(void);
uint8_t Fan_HasZeroSpeed(void);

/* EXTI falling edge pulse handler (called from interrupt) */
void Fan_OnExtiPulse(uint16_t gpio_pin);

/* Closed loop speed control task (call every 50ms ~ 100ms) */
void Fan_ControlLoopTask(void);

#ifdef __cplusplus
}
#endif

#endif /* __FAN_H */
