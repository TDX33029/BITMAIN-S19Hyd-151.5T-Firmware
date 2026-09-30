/**
 * @file    uprintf.c
 * @brief   轻量格式化输出实现
 * @author  TDX33029 / AntMiner Project
 */

#include "uprintf.h"
#include "uart.h"
#include <stdarg.h>

#define UPBUF_MAX 320U

static void emit_char(char c)
{
    uart_write_byte((uint8_t)c);
}

/* 输出无符号十进制/十六进制, width>0 时左补指定字符 */
static void emit_num(uint32_t val, uint8_t base, bool upper, uint8_t width, char pad)
{
    char tmp[11];   /* 2^32-1 十进制最多10位 */
    uint8_t n = 0U;

    do {
        uint32_t d = val % base;
        tmp[n++] = (char)((d < 10U) ? ('0' + d) :
                          ((upper ? 'A' : 'a') + (d - 10U)));
        val /= base;
    } while (val != 0U);

    while ((n < width) && (n < sizeof(tmp))) {
        emit_char(pad);
        width--;
    }
    while (n > 0U) {
        n--;
        emit_char(tmp[n]);
    }
}

void uprintf(const char *fmt, ...)
{
    char buf[UPBUF_MAX];
    uint16_t idx = 0U;

    va_list args;
    va_start(args, fmt);

    for (; *fmt != '\0'; fmt++) {
        char c = *fmt;

        if (c != '%') {
            if (idx < (UPBUF_MAX - 1U)) {
                buf[idx++] = c;
            }
            continue;
        }

        /* 先把已积累的缓冲发出, 再逐个处理转换符 */
        if (idx > 0U) {
            uart_write_bytes((const uint8_t *)buf, idx);
            idx = 0U;
        }

        fmt++;
        if (*fmt == '\0') {
            break;
        }

        if (*fmt == '%') {
            emit_char('%');
            continue;
        }

        /* 解析宽度与零填充 */
        char pad = ' ';
        uint8_t width = 0U;
        if (*fmt == '0') {
            pad = '0';
            fmt++;
        }
        while ((*fmt >= '0') && (*fmt <= '9')) {
            width = (uint8_t)((width * 10U) + (uint8_t)(*fmt - '0'));
            fmt++;
            if (*fmt == '\0') {
                break;
            }
        }
        if (*fmt == '\0') {
            break;
        }

        /* 解析长度修饰 (仅处理 l, 用于 %lu 等) */
        bool long_arg = false;
        if (*fmt == 'l') {
            long_arg = true;
            fmt++;
            if (*fmt == '\0') {
                break;
            }
        }

        char spec = *fmt;
        switch (spec) {
            case 'c':
                emit_char((char)va_arg(args, int));
                break;
            case 's': {
                const char *s = va_arg(args, const char *);
                if (s == NULL) {
                    s = "(null)";
                }
                while (*s != '\0') {
                    emit_char(*s++);
                }
                break;
            }
            case 'd':
            case 'i': {
                int32_t v = long_arg ? (int32_t)va_arg(args, long) : va_arg(args, int);
                if (v < 0) {
                    emit_char('-');
                    emit_num((uint32_t)(-v), 10U, false, width, pad);
                } else {
                    emit_num((uint32_t)v, 10U, false, width, pad);
                }
                break;
            }
            case 'u': {
                uint32_t v = long_arg ? va_arg(args, unsigned long) : va_arg(args, unsigned int);
                emit_num(v, 10U, false, width, pad);
                break;
            }
            case 'x':
            case 'X':
            case 'p': {
                uint32_t v;
                if (spec == 'p') {
                    v = (uint32_t)va_arg(args, void *);
                    emit_char('0');
                    emit_char('x');
                } else {
                    v = long_arg ? va_arg(args, unsigned long) : va_arg(args, unsigned int);
                }
                emit_num(v, 16U, (spec == 'X'), width, pad);
                break;
            }
            default:
                emit_char('%');
                emit_char(spec);
                break;
        }
    }

    if (idx > 0U) {
        uart_write_bytes((const uint8_t *)buf, idx);
    }

    va_end(args);
}
