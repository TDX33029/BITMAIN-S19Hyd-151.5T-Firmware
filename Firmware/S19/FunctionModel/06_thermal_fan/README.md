# 06_thermal_fan 温度 / 风扇

温度传感器读取、风扇 PWM/PID、过温保护与降额。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 17 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x3a5b8 | fan_pid_control | 1064 | 13 | max temp = %04d, diff = %04d, = pwm %04d\n / max temp = %04d, diff = %04d, - pwm form %04d |
| bmminer | 0x388ec | board_power_init_sequence | 1128 | 12 | warning:power is not calibrated.\n / get power type version failed! / power sn:%s\n |
| bmminer | 0x15968 | fan_pwm_init | 304 | 10 | pwm for fan init error / set pwm = %d |
| bmminer | 0x171b4 | temp_report_parse | 1060 | 7 | temperature/temperature.c |
| bmminer | 0x17830 | temp_sensor_read | 612 | 6 | read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n / can not r |
| bmminer | 0x38228 | water_temp_protect | 372 | 6 | water temp %d ~ %d, sleep %ds to cool down\n |
| bmminer | 0x1575c | fan_lost_check | 524 | 5 | fan lost / Error, fan lost, only find %d (< %d)\n |
| bmminer | 0x469bc | fan_pwm_type | 196 | 5 | pwm type %d not supported\n |
| bmminer | 0x156a8 | fan_speed_read | 180 | 5 | fan[%u] speed[%u]\n |
| bmminer | 0x17a98 | temp_sensor_offset | 1448 | 3 | chain %d temp sensor %s\n |
| bmminer | 0x15a98 | FUN_00015a98 | 100 | 5 | Note: front fan is power on!\n |
| bmminer | 0x15b68 | FUN_00015b68 | 100 | 5 | Note: rear fan is power on!\n |
| bmminer | 0x220e0 | FUN_000220e0 | 352 | 3 | temp_chip |
| bmminer | 0x22244 | FUN_00022244 | 352 | 3 | temp_pcb |
| bmminer | 0x21fb8 | FUN_00021fb8 | 292 | 3 | temp_pic |
| bmminer | 0x18510 | FUN_00018510 | 216 | 3 | do not read temp anymore... |
| bmminer | 0x1b9d4 | FUN_0001b9d4 | 68 | 3 | No temp, chain = %d.\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
