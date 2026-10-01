/**
  ******************************************************************************
  * @file    uart_protocol.c
  * @brief   UART Command Parser and Telemetry implementation
  ******************************************************************************
  */

#include "uart_protocol.h"
#include "fan.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>

static UART_HandleTypeDef *s_huart = NULL;

#define RX_BUFFER_SIZE  128
static char s_rx_buffer[RX_BUFFER_SIZE];
static uint8_t s_rx_idx = 0;
static volatile uint8_t s_cmd_ready = 0;
static volatile uint32_t s_last_rx_tick = 0;

static uint32_t s_last_report_tick = 0;

void Uart_Printf(const char *fmt, ...)
{
    char buf[192];
    va_list args;
    va_start(args, fmt);
    int len = vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    if (len > 0 && s_huart != NULL) {
        HAL_UART_Transmit(s_huart, (uint8_t*)buf, (uint16_t)len, 100);
    }
}

void UartProtocol_Init(UART_HandleTypeDef *huart)
{
    s_huart = huart;
    s_rx_idx = 0;
    s_cmd_ready = 0;
    s_last_report_tick = HAL_GetTick();

    /* Enable USART1 global interrupt in NVIC */
    HAL_NVIC_SetPriority(USART1_IRQn, 1, 0);
    HAL_NVIC_EnableIRQ(USART1_IRQn);

    /* Enable USART1 RX Not Empty Interrupt */
    __HAL_UART_ENABLE_IT(s_huart, UART_IT_RXNE);
}

void UartProtocol_OnRxByte(uint8_t byte)
{
    s_last_rx_tick = HAL_GetTick();

    if (s_cmd_ready) return; /* Wait until current command is processed */

    if (byte == '\r' || byte == '\n') {
        if (s_rx_idx > 0) {
            s_rx_buffer[s_rx_idx] = '\0';
            s_cmd_ready = 1;
        }
    } else if (s_rx_idx < (RX_BUFFER_SIZE - 1)) {
        s_rx_buffer[s_rx_idx++] = (char)byte;
    }
}

static void print_status(void)
{
    Uart_Printf("\r\n--- CoolerHD Fan Telemetry ---\r\n");
    for (uint8_t i = 1; i <= FAN_NUM_CHANNELS; i++) {
        Uart_Printf(" Fan %d: %4u RPM (Target: %4u, Duty: %4.1f%%, Pulses: %lu, Met: %s)\r\n",
                    i,
                    Fan_GetRPM(i),
                    Fan_GetTargetRPM(i),
                    Fan_GetDuty(i) / 10.0f,
                    (unsigned long)Fan_GetPulseCount(i),
                    Fan_IsMet(i) ? "YES" : "NO");
    }
    Uart_Printf(" Status: Fans 1-3 Met: %s | Fans 4-6 Met: %s | Zero RPM Alert: %s | Polarity: %s\r\n\r\n",
                Fan_IsFans1_3_Met() ? "YES (STATE1 ON)" : "NO (STATE1 BLINK)",
                Fan_IsFans4_6_Met() ? "YES (STATE2 ON)" : "NO (STATE2 BLINK)",
                Fan_HasZeroSpeed()  ? "YES (ERROR BLINK)" : "NO (ERROR OFF)",
                Fan_GetPolarity()   ? "REVERSED" : "NORMAL");
}

static void print_help(void)
{
    Uart_Printf("\r\n--- Supported Commands ---\r\n");
    Uart_Printf(" 1. SET <fan> <rpm>     : Set target speed (e.g. 'SET 1 1800', 'SET ALL 2000')\r\n");
    Uart_Printf(" 2. DUTY <fan> <pct>    : Set manual PWM duty (0~100) (e.g. 'DUTY 1 60', 'DUTY ALL 100')\r\n");
    Uart_Printf(" 3. POLARITY <NORM|REV> : Toggle PWM polarity (NORMAL or REVERSED)\r\n");
    Uart_Printf(" 4. STOP <fan>          : Stop fan (e.g. 'STOP 1', 'STOP ALL')\r\n");
    Uart_Printf(" 5. STATUS / GET        : Query real-time parameters immediately\r\n");
    Uart_Printf(" 6. HELP                : Display this help message\r\n\r\n");
}

static void parse_command(char *cmd)
{
    /* Trim leading whitespace */
    while (*cmd == ' ' || *cmd == '\t') cmd++;
    if (*cmd == '\0') return;

    /* Extract first word */
    char word[16] = {0};
    int n = 0;
    while (*cmd && !isspace((unsigned char)*cmd) && n < 15) {
        word[n++] = (char)toupper((unsigned char)*cmd);
        cmd++;
    }
    word[n] = '\0';

    if (strcmp(word, "SET") == 0) {
        char target_str[16] = {0};
        int rpm_val = 0;
        if (sscanf(cmd, "%15s %d", target_str, &rpm_val) == 2) {
            for (char *p = target_str; *p; p++) *p = (char)toupper((unsigned char)*p);
            if (rpm_val < 0) rpm_val = 0;
            if (rpm_val > 6500) rpm_val = 6500;

            if (strcmp(target_str, "ALL") == 0) {
                Fan_SetAllTargetRPM((uint16_t)rpm_val);
                Uart_Printf("OK: All fans target set to %d RPM\r\n", rpm_val);
            } else {
                int fan_id = atoi(target_str);
                if (fan_id >= 1 && fan_id <= FAN_NUM_CHANNELS) {
                    Fan_SetTargetRPM((uint8_t)fan_id, (uint16_t)rpm_val);
                    Uart_Printf("OK: Fan %d target set to %d RPM\r\n", fan_id, rpm_val);
                } else {
                    Uart_Printf("ERR: Invalid fan ID %s (Must be 1~6 or ALL)\r\n", target_str);
                }
            }
        } else {
            Uart_Printf("ERR: Usage: SET <fan_id> <rpm> (e.g. SET 1 1800 or SET ALL 2000)\r\n");
        }
    } else if (strcmp(word, "DUTY") == 0) {
        char target_str[16] = {0};
        int duty_pct = 0;
        if (sscanf(cmd, "%15s %d", target_str, &duty_pct) == 2) {
            for (char *p = target_str; *p; p++) *p = (char)toupper((unsigned char)*p);
            if (duty_pct < 0) duty_pct = 0;
            if (duty_pct > 100) duty_pct = 100;
            uint16_t duty_permille = (uint16_t)(duty_pct * 10);

            if (strcmp(target_str, "ALL") == 0) {
                Fan_SetManualDuty(0, duty_permille);
                Uart_Printf("OK: All fans duty set to %d%%\r\n", duty_pct);
            } else {
                int fan_id = atoi(target_str);
                if (fan_id >= 1 && fan_id <= FAN_NUM_CHANNELS) {
                    Fan_SetManualDuty((uint8_t)fan_id, duty_permille);
                    Uart_Printf("OK: Fan %d duty set to %d%%\r\n", fan_id, duty_pct);
                } else {
                    Uart_Printf("ERR: Invalid fan ID %s (Must be 1~6 or ALL)\r\n", target_str);
                }
            }
        } else {
            Uart_Printf("ERR: Usage: DUTY <fan_id> <0~100> (e.g. DUTY 1 75)\r\n");
        }
    } else if (strcmp(word, "STOP") == 0) {
        char target_str[16] = {0};
        if (sscanf(cmd, "%15s", target_str) == 1) {
            for (char *p = target_str; *p; p++) *p = (char)toupper((unsigned char)*p);
            if (strcmp(target_str, "ALL") == 0) {
                Fan_Stop(0);
                Uart_Printf("OK: All fans stopped\r\n");
            } else {
                int fan_id = atoi(target_str);
                if (fan_id >= 1 && fan_id <= FAN_NUM_CHANNELS) {
                    Fan_Stop((uint8_t)fan_id);
                    Uart_Printf("OK: Fan %d stopped\r\n", fan_id);
                } else {
                    Uart_Printf("ERR: Invalid fan ID %s\r\n", target_str);
                }
            }
        } else {
            Uart_Printf("ERR: Usage: STOP <fan_id|ALL>\r\n");
        }
    } else if (strcmp(word, "POLARITY") == 0) {
        char pol_str[16] = {0};
        if (sscanf(cmd, "%15s", pol_str) == 1) {
            for (char *p = pol_str; *p; p++) *p = (char)toupper((unsigned char)*p);
            if (strcmp(pol_str, "INVERT") == 0 || strcmp(pol_str, "REV") == 0) {
                Fan_SetPolarity(1);
                Uart_Printf("OK: PWM Polarity set to REVERSED (Direct output)\r\n");
            } else {
                Fan_SetPolarity(0);
                Uart_Printf("OK: PWM Polarity set to NORMAL (S8050 Inverted Output)\r\n");
            }
        } else {
            Uart_Printf("Current PWM Polarity: %s (Usage: POLARITY <NORMAL|INVERT>)\r\n",
                        Fan_GetPolarity() ? "REVERSED" : "NORMAL");
        }
    } else if (strcmp(word, "STATUS") == 0 || strcmp(word, "GET") == 0) {
        print_status();
    } else if (strcmp(word, "HELP") == 0) {
        print_help();
    } else {
        Uart_Printf("ERR: Unknown command '%s'. Type 'HELP' for command list.\r\n", word);
    }
}

void UartProtocol_Task(void)
{
    uint32_t now = HAL_GetTick();

    /* 0. Auto-submit command if line has text and idle for > 60ms (handles tools without Enter/newline) */
    if (!s_cmd_ready && s_rx_idx > 0 && (now - s_last_rx_tick >= 60)) {
        s_rx_buffer[s_rx_idx] = '\0';
        s_cmd_ready = 1;
    }

    /* 1. Process received command line if ready */
    if (s_cmd_ready) {
        parse_command(s_rx_buffer);
        s_rx_idx = 0;
        s_cmd_ready = 0;
    }

    /* 2. Periodic 0.5s (500ms) telemetry report: ONLY 6 RPM values */
    if (now - s_last_report_tick >= 500) {
        s_last_report_tick = now;

        Uart_Printf("%u,%u,%u,%u,%u,%u\r\n",
                    Fan_GetRPM(1), Fan_GetRPM(2), Fan_GetRPM(3),
                    Fan_GetRPM(4), Fan_GetRPM(5), Fan_GetRPM(6));
    }
}
