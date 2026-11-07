# 05_freq_voltage 频率 / 电压调节

频率计划生成、EEPROM 扫描结果、增量升频、调频线程、温度分档调压。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 63 |
| 程序 | bmminer, cgminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x55518 | freq_voltage_main_init | 4240 | 10 | fixed frequency is %d, g_frequency_offset is %d\n / press any key to start rising frequenc |
| bmminer | 0x3ffbc | tuning_freq_thread | 1472 | 10 | tuning freq end / tuning freq start |
| bmminer | 0x259c0 | freq_check | 356 | 10 | Get frequency failed! |
| bmminer | 0x2d6b0 | set_freq_pll | 2508 | 9 |  |
| bmminer | 0x27460 | tuning_frequency | 1536 | 7 | tuning_frequency from freq %d to freq %d, end_vol=%d, not set vol / tuning_frequency from  |
| bmminer | 0x1d4fc | eeprom_get_sweep_result | 1180 | 5 | eeprom is not init, chain = %d\n |
| bmminer | 0x25da0 | pll_calc | 1032 | 5 | chain = %d, freq = %g, is_higher_voltage = %s\n / [%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USE |
| bmminer | 0x1c934 | eeprom_get_max_freq | 912 | 5 |  |
| bmminer | 0x4ebd0 | inc_freq | 864 | 5 | inc freq delay:%d / enter mixed freq mode\n |
| bmminer | 0x26ac0 | set_chain_freq_matrix | 552 | 5 | 2.chain_%d inc freq to %d\n |
| bmminer | 0x2500c | set_chain_freq | 536 | 5 | chain = %d, start = %d, freq_step = %.2f\n |
| bmminer | 0x282a4 | inc_all_chain_freq | 256 | 5 | 1.inc all chain freq to %d |
| bmminer | 0x40ca8 | create_tuning_thread | 276 | 4 |  |
| bmminer | 0x25b38 | build_freq_plan | 612 | 3 |  |
| bmminer | 0x30750 | api_get_miner_freq_adjust_info | 724 | 1 |  |
| bmminer | 0x12c78 | parse_strategy | 1660 | 0 |  |
| bmminer | 0x26ce8 | set_freq_by_plan | 648 | 0 |  |
| bmminer | 0x24f98 | chain_freq_minmax | 116 | 0 |  |
| bmminer | 0x2afc8 | FUN_0002afc8 | 5164 | 14 | miner_sim.hashrate.hashrate:%d\n / miner_sim.hashrate.avg_hashrate:%d\n / miner_sim.hashra |
| bmminer | 0x33d3c | FUN_00033d3c | 4700 | 10 | bitmain-fan-pwm / get bitmain-fan-pwm failed\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
