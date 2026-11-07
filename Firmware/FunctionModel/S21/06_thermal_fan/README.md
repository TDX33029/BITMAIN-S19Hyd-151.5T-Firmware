# 06_thermal_fan 温度 / 风扇

温度传感器读取、风扇 PWM/PID、过温保护与降额。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 32 |
| 程序 | bmminer, cgminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x3ffbc | tuning_freq_thread | 1472 | 10 | tuning freq end / tuning freq start |
| bmminer | 0x16de0 | fan_control | 548 | 5 | fan[%u] speed[%u]\n / Error, fan lost, only find %d (< %d)\n / fan lost |
| bmminer | 0x17004 | fan_pid_init | 168 | 5 | init fan pid target=%d |
| bmminer | 0x18aa0 | read_max_chip_temp | 144 | 0 |  |
| bmminer | 0x18a2c | read_board_temp | 116 | 0 |  |
| bmminer | 0x171dc | FUN_000171dc | 692 | 13 | PWM keep 100:  airin_temp=%d, airout_temp=%f\n |
| bmminer | 0x54a78 | FUN_00054a78 | 2716 | 12 | Fan check passed.\n |
| bmminer | 0x33d3c | FUN_00033d3c | 4700 | 10 | bitmain-fan-pwm / get bitmain-fan-pwm failed\n |
| cgminer | 0x18ca8 | FUN_00018ca8 | 4436 | 10 | frequency |
| bmminer | 0x36460 | FUN_00036460 | 1312 | 10 | bitmain-fan-pwm |
| bmminer | 0x170ac | FUN_000170ac | 304 | 10 | set pwm = %d / pwm for fan init error |
| bmminer | 0x29e18 | FUN_00029e18 | 1736 | 9 | /etc/topol.conf |
| bmminer | 0x77d6c | FUN_00077d6c | 432 | 8 | can nont get power temp and fan speed\n |
| bmminer | 0x1a1d0 | FUN_0001a1d0 | 5412 | 7 | too low water temperature pic temp %d (min %d)\n / too hot water temperature pic temp %d ( |
| bmminer | 0x18e18 | FUN_00018e18 | 676 | 7 | temperature/temperature.c |
| bmminer | 0x17ee4 | FUN_00017ee4 | 704 | 6 | %s chain %d not pluged / %s invalid param. index = %d, type = %d, model = %d on chain %d / |
| bmminer | 0x51174 | FUN_00051174 | 328 | 6 | water temp %d ~ %d, sleep %ds to cool down\n |
| bmminer | 0x290c8 | FUN_000290c8 | 1376 | 5 | get fan failed\n |
| bmminer | 0x62d54 | FUN_00062d54 | 292 | 5 | pwm type %d not supported\n |
| bmminer | 0x2725c | FUN_0002725c | 244 | 5 | inc_freq to %d timeout spend %ds, wait target temp:%d failed, real_temp=%d |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
