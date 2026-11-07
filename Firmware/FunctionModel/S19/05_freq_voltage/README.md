# 05_freq_voltage 频率 / 电压调节

频率计划生成、EEPROM 扫描结果、增量升频、调频线程、温度分档调压。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 27 |
| 程序 | bmminer |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x418fc | FUN_000418fc | 3280 | 10 | Dump freq tuning fine result:\n / >>>> Do freq tuning fine parallel.\n / Parallel tuning f |
| bmminer | 0x39544 | FUN_00039544 | 2548 | 10 | press any key to start rising frequency... / fixed frequency is %d\n |
| bmminer | 0x2a998 | FUN_0002a998 | 1840 | 10 | tuning freq end\n / tuning freq start\n |
| bmminer | 0x405b4 | FUN_000405b4 | 1544 | 10 | Do freq tuning basic.\n / >>>> Do tuning parallel.\n |
| bmminer | 0x19dc8 | FUN_00019dc8 | 1024 | 10 | level %d, voltage = %d frequency = %d |
| bmminer | 0x1d9cc | FUN_0001d9cc | 356 | 10 | Get frequency failed! |
| bmminer | 0x417b0 | FUN_000417b0 | 332 | 10 | [DEBUG] freq tuning fine init.\n |
| bmminer | 0x3ffb0 | FUN_0003ffb0 | 312 | 10 | [DEBUG] Freq tuning basic init.\n / Fail to allocate memory for freq tuning basic context. |
| bmminer | 0x400e8 | FUN_000400e8 | 188 | 10 | [DEBUG] Freq tuning basic exit.\n / [DEBUG] Free memory for freq tuning basic.\n |
| bmminer | 0x41128 | FUN_00041128 | 188 | 10 | [DEBUG] freq tuning fine exit.\n |
| bmminer | 0x29bb8 | FUN_00029bb8 | 580 | 9 | %s, voltage = %d, freq = %d, hashrate = %f, miner_power = %04d, jt = %f\r\n |
| bmminer | 0x1e400 | FUN_0001e400 | 1336 | 5 | chain = %d, start = %d, freq_step = %.2f\n |
| bmminer | 0x412b4 | FUN_000412b4 | 1276 | 5 | freq_serial_threshold / freq_tuning_fine_count / freq_tuning_fine_step / freq_diff_thresho |
| bmminer | 0x1db34 | FUN_0001db34 | 1024 | 5 | chain = %d, freq = %g, is_higher_voltage = %s\n / [%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USE |
| bmminer | 0x40238 | FUN_00040238 | 892 | 5 | freq_base / freq_step / freq_serial_threshold / freq_threshold |
| bmminer | 0x1df34 | FUN_0001df34 | 668 | 5 | chain = %d set freq to %.2f / fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\ |
| bmminer | 0x1e1dc | FUN_0001e1dc | 540 | 5 | chain = %d set freq to %.2f / fixed step chain = %d, freq_start = %d, freq_end = %d, freq_ |
| bmminer | 0x57ae4 | FUN_00057ae4 | 540 | 5 | Want freq: %f, Real freq: %f\n |
| bmminer | 0x368b4 | FUN_000368b4 | 492 | 5 | freq = %d, percent = %d, hcn = %d, timeout = %d\n |
| bmminer | 0x40f68 | FUN_00040f68 | 448 | 5 | [DEBUG] Dump freq table, chain = %d.\n |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
