# 04_asic_chain ASIC / 算力链

链存在检测、ASIC 数量扫描、UART/FPGA/AXI 访问、nonce 读取、PLL 下发。

| 项 | 值 |
|---|---|
| 函数数（多标签） | 136 |
| 程序 | bitmain_axi.ko, bmminer, cgminer, fpga_mem_driver.ko |

## 主要函数

| 程序 | 地址 | 推断名 | 大小 | 分数 | 证据 |
|---|---|---|---:|---:|---|
| bmminer | 0x2afc8 | chain_asic_struct | 5164 | 14 | chain_present / miner_sim.chain_present.chain_present_map:%d\n / miner_sim.chain_present.e |
| bmminer | 0x36fe4 | clear_find_asic_fail_record | 7860 | 13 | \n asic nonce number for chain[%d]...\n / /nonce / \nchain[%d] nonce info:\n |
| bmminer | 0x13300 | config_parse_topol | 8140 | 10 | alloc topol failed\n |
| bmminer | 0x2e084 | get_chain_asic_domain_avg_voltage | 640 | 10 | chain%d, domain%d, asic avg voltage:%f / chain%d, domain%d, asic %03d, voltage:%f |
| bmminer | 0x2d6b0 | set_freq_pll | 2508 | 9 |  |
| bmminer | 0x54654 | chain_asic_detect | 1060 | 6 | pic enabled for chain %d, press anykey to continue... / Chain %d only find %d asic, will p |
| bmminer | 0x2500c | set_chain_freq | 536 | 5 | chain = %d, start = %d, freq_step = %.2f\n |
| bmminer | 0x542f8 | find_asic_counter | 860 | 3 | exist chain |
| bmminer | 0x456ec | find_asic_counter_board | 440 | 2 |  |
| bmminer | 0x2f224 | api_miner_chain_asic_status | 240 | 0 |  |
| bmminer | 0x2f160 | api_miner_chain_asic_num | 192 | 0 |  |
| bmminer | 0x3f888 | FUN_0003f888 | 828 | 13 | \n dump asic nonce number...\n / Chain[%d] total nonce number = %d\n / Chain[%d] nonce:\n |
| bmminer | 0x47894 | FUN_00047894 | 468 | 13 | \n asic nonce number for chain[%d]...\n |
| bmminer | 0x5d758 | FUN_0005d758 | 3288 | 10 | Do freq tuning fine.\n / >>>> Do single grade tuning.\n / Dump freq tuning fine result:\n  |
| bmminer | 0x5adf4 | FUN_0005adf4 | 2380 | 10 | Chain %d nonce:\n |
| bmminer | 0x47508 | FUN_00047508 | 460 | 10 | \n dump domain nonce number...\n |
| bmminer | 0x29e18 | FUN_00029e18 | 1736 | 9 | /etc/topol.conf |
| bmminer | 0x471ac | FUN_000471ac | 516 | 9 | \n dump asic nonce number...\n / Chain[%d] total nonce number = %d\n |
| bmminer | 0x476e4 | FUN_000476e4 | 432 | 9 | \n asic nonce number for chain[%d] asic[%d]...\n |
| bitmain_axi.ko | 0x10090 | init_module | 352 | 8 | Err:failed in creating axi fpga class.\n / AXI fpga dev virtual address is 0x%x\n / In axi |

## 说明

- 分类是多标签启发式结果，依据函数引用的字符串；`score` 越高证据越强。
- 完整反编译代码见 `decompiled/<program>/`（与全量语料硬链接，内容相同）。
- 函数清单与字符串证据见同目录 `functions.csv`。
