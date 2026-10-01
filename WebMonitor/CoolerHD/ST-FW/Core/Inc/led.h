/**
  ******************************************************************************
  * @file    led.h
  * @brief   LED indicators driver for CoolerHD
  *          STATE1 : PB3 (Active HIGH)
  *          STATE2 : PB4 (Active HIGH)
  *          ERROR  : PB5 (Active HIGH)
  *          3V3    : Hardware Power LED (Always on)
  ******************************************************************************
  */

#ifndef __LED_H
#define __LED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

typedef enum {
    LED_MODE_OFF   = 0,
    LED_MODE_ON    = 1,
    LED_MODE_BLINK = 2
} LED_Mode_t;

/* Initialize LED pins and safely disable JTAG while preserving SWD */
void LED_Init(void);

/* Direct LED mode setters */
void LED_SetState1(LED_Mode_t mode);
void LED_SetState2(LED_Mode_t mode);
void LED_SetError(LED_Mode_t mode);

/* Update LED state based on fan target-met flags and stall detection */
void LED_UpdateFromFans(uint8_t fan1_3_met, uint8_t fan4_6_met, uint8_t has_zero_speed);

/* Periodic task for blinking LEDs (call every 50ms ~ 100ms) */
void LED_UpdateTask(void);

#ifdef __cplusplus
}
#endif

#endif /* __LED_H */
