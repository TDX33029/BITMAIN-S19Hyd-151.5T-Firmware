# 02_power_psu 电源 / PSU 控制

PSU 的 I²C 命令、电压设定与回读、电源类型识别、上电时序与保护。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 41 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x388ec | board_power_init_sequence | 1128 | 12 | warning:power is not calibrated.\n / get power type version failed! / power sn:%s\n |
| bmminer | 0x1cd50 | power_init | 504 | 9 | Initializing the power, please wait, this may take up to 2 minutes...\n / power voltage ca |
| bmminer | 0x506f8 | bitmain_get_voltage | 772 | 5 | Get power set_volt value failed\n / %s: auto exec bitmain_power_open, but open power faile |
| bmminer | 0x4f8b4 | power_read_voltage | 372 | 5 | %s: auto exec bitmain_power_open, but open power failed\n |
| bmminer | 0x1c978 | get_chain_voltage | 272 | 4 | chain = %d, voltage = %f\n |
| bmminer | 0x1caa8 | get_min_voltage | 188 | 4 | the minimal voltage = %.2f |
| bmminer | 0x4e2c4 | power_cmd_v2 | 520 | 3 |  |
| bmminer | 0x1cba0 | wait_sensor_stable | 192 | 3 |  |
| bmminer | 0x50d88 | i2c_read_seg | 168 | 3 | failed to i2c lock\n |
| bmminer | 0x50e30 | i2c_write_seg | 168 | 3 | failed to i2c lock\n |
| bmminer | 0x4f1d4 | power_open | 1668 | 1 | power open power_version < 0 will close power\n / power is not Calibrated\n / power is Cal |
| bmminer | 0x50390 | bitmain_set_voltage | 652 | 1 | %s: auto exec bitmain_power_open, but open power failed\n |
| bmminer | 0x4eae4 | power_get_error_data | 568 | 1 | Get power error data failed\n / Get power error data:\n |
| bmminer | 0x4f034 | power_get_type_version | 412 | 1 | %s: auto exec bitmain_power_open, but open power failed\n / check power version failed, us |
| bmminer | 0x4e7fc | power_get_error_code | 352 | 1 | Get power error code failed\n / Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%0 |
| bmminer | 0x4fe60 | power_get_sw_version | 272 | 1 | get power fw ver failed\n / %s: auto exec bitmain_power_open, but open power failed\n |
| bmminer | 0x4e544 | power_get_dc_voltage | 240 | 1 | Get power dc_volt value failed\n |
| bmminer | 0x4e718 | power_get_ac_voltage | 220 | 1 | Get ac power failed\n |
| bmminer | 0x4e648 | power_cmd_0x05 | 204 | 1 | power 0x05 cmd failed\n |
| bmminer | 0x4e960 | power_get_reset_cause | 196 | 1 | Get power reset root cause failed\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
