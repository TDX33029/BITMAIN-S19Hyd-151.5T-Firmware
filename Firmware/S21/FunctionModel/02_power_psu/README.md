# 02_power_psu 电源 / PSU 控制

PSU 的 I²C 命令、电压设定与回读、电源类型识别、上电时序与保护。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 29 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x247d8 | power_watchdog_control | 1148 | 12 | power voltage can not meet the target, retry:%d / power voltage can not meet the target /  |
| bmminer | 0x55518 | freq_voltage_main_init | 4240 | 10 | fixed frequency is %d, g_frequency_offset is %d\n / press any key to start rising frequenc |
| bmminer | 0x2e084 | get_chain_asic_domain_avg_voltage | 640 | 10 | chain%d, domain%d, asic avg voltage:%f / chain%d, domain%d, asic %03d, voltage:%f |
| bmminer | 0x3cc08 | power_enable_watchdog | 1460 | 8 | power voltage read failed, pls check! / power voltage rise or drop, pls check! / power sta |
| bmminer | 0x29628 | power_status | 868 | 6 | power:\n / get power failed\n |
| bmminer | 0x4e344 | power_get_max_voltage_eeprom | 224 | 5 | max voltage in eeprom = %d\n |
| bmminer | 0x534b8 | hem_power_adjust | 3084 | 4 | power is err. / miner power:%d / HEM power adjust current v: %d  I :%f miner power %d targ |
| bmminer | 0x246cc | set_voltage | 260 | 0 |  |
| bmminer | 0x1b800 | FUN_0001b800 | 2552 | 10 | level %d, voltage = %d frequency = %d |
| bmminer | 0x73f10 | FUN_00073f10 | 468 | 5 | can nont get power status\n / %s: auto exec bitmain_power_open, but open power failed\n |
| bmminer | 0x75a60 | FUN_00075a60 | 328 | 5 | %s: auto exec bitmain_power_open, but open power failed\n |
| bmminer | 0x3da58 | FUN_0003da58 | 324 | 5 | power is high when inc_freq, drop vol now, power:%d |
| bmminer | 0x1cf90 | FUN_0001cf90 | 688 | 4 | No work mode voltage, chain = %d, mode = %d.\n / voltage level out of range / voltage leve |
| bmminer | 0x24490 | FUN_00024490 | 192 | 4 | the minimal voltage = %.2f |
| bmminer | 0x243f0 | FUN_000243f0 | 140 | 4 | read_feedback_voltage chain = %d, voltage = %f\n |
| bmminer | 0x3ee18 | FUN_0003ee18 | 2508 | 3 | read asic vol in 30 min |
| bmminer | 0x67604 | FUN_00067604 | 920 | 3 | failed to i2c lock\n |
| bmminer | 0x67278 | FUN_00067278 | 908 | 3 | failed to i2c lock\n |
| bmminer | 0x66f8c | FUN_00066f8c | 748 | 3 | failed to i2c lock\n |
| bmminer | 0x66cb4 | FUN_00066cb4 | 728 | 3 | failed to i2c lock\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
