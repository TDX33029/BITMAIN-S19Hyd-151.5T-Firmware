# 10_config_eeprom 配置 / EEPROM

topol.conf/cgminer.conf/network.conf 解析，EEPROM 校准数据与 CRC。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 63 |
| 程序 | FileParser, bmminer, cgminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x36fe4 | clear_find_asic_fail_record | 7860 | 13 | \n asic nonce number for chain[%d]...\n / /nonce / \nchain[%d] nonce info:\n |
| bmminer | 0x13300 | config_parse_topol | 8140 | 10 | alloc topol failed\n |
| bmminer | 0x55518 | freq_voltage_main_init | 4240 | 10 | fixed frequency is %d, g_frequency_offset is %d\n / press any key to start rising frequenc |
| bmminer | 0x513a0 | mode_init | 2444 | 6 |  |
| bmminer | 0x1d4fc | eeprom_get_sweep_result | 1180 | 5 | eeprom is not init, chain = %d\n |
| bmminer | 0x1c934 | eeprom_get_max_freq | 912 | 5 |  |
| bmminer | 0x4e344 | power_get_max_voltage_eeprom | 224 | 5 | max voltage in eeprom = %d\n |
| bmminer | 0x542f8 | find_asic_counter | 860 | 3 | exist chain |
| bmminer | 0x25b38 | build_freq_plan | 612 | 3 |  |
| bmminer | 0x456ec | find_asic_counter_board | 440 | 2 |  |
| bmminer | 0x12c78 | parse_strategy | 1660 | 0 |  |
| bmminer | 0x152cc | parse_adjust_strategy | 560 | 0 |  |
| bmminer | 0x36460 | FUN_00036460 | 1312 | 10 | bitmain-fan-pwm |
| bmminer | 0x29e18 | FUN_00029e18 | 1736 | 9 | /etc/topol.conf |
| bmminer | 0x4546c | FUN_0004546c | 484 | 9 | /etc/cgminer.conf.factory |
| bmminer | 0x36980 | FUN_00036980 | 392 | 9 | open /config/cgminer.conf failed / /config/cgminer.conf |
| bmminer | 0x36b08 | FUN_00036b08 | 1244 | 7 | serialize input miner conf failed / open /cofig/cgminer.conf failed / serialize local  min |
| bmminer | 0x15500 | FUN_00015500 | 5956 | 6 | nonce fifo flush by nonce, last_ts = %.2f.\n / repeat nonce error |
| bmminer | 0x47af0 | FUN_00047af0 | 1064 | 6 | chain %d asic %d get reg value failed / Chain %d is not exist.\n |
| bmminer | 0x46a48 | FUN_00046a48 | 1060 | 6 | !!! nonce invalid / !!! nonce crc error |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
