/**
 * @file    uprintf.h
 * @brief   轻量格式化输出 (直写USART1, 不依赖libc printf重定向)
 * @author  TDX33029 / AntMiner Project
 *
 * 支持: %s %c %d %i %u %x %X %p, 零填充/宽度 (%04X, %2u, %3d...), %%
 * IAR DLIB / Keil ARMCC / GCC 通用, 避免 IAR 下半主机(semihosting)问题。
 */

#ifndef __UPRINTF_H
#define __UPRINTF_H

#include <stdint.h>

/* 格式化输出到 USART1 (不含自动 \n -> \r\n 转换, 调用方显式带 \r\n) */
void uprintf(const char *fmt, ...);

#endif /* __UPRINTF_H */
