# S21 全量功能模型（Zynq7007 水冷机）

> 范围：S21 的 Zynq 侧固件；S21 的 AML 风冷镜像不纳入。

## 语料统计

| 程序 | 函数数 |
|---|---:|
| bmminer | 2035 |
| FileParser | 76 |
| antlogin | 16 |
| cgminer | 853 |
| cgminer-api | 55 |
| id2mac | 31 |
| monitor-ipsig | 90 |
| monitor-recobtn | 54 |
| update-daemon | 74 |
| bitmain_axi.ko | 22 |
| fpga_mem_driver.ko | 22 |
| **合计** | **3328** |

## 功能块

| 块 | 名称 | 函数数 |
|---|---|---:|
| 00_imports_thunks | 导入符号 / Thunk | 1083 |
| 01_boot_upgrade | 固件升级与启动 | 14 |
| 02_power_psu | 电源 / PSU 控制 | 28 |
| 03_pic_ctrl | PIC 控制 | 14 |
| 04_asic_chain | ASIC / 算力链 | 133 |
| 05_freq_voltage | 频率 / 电压调节 | 63 |
| 06_thermal_fan | 温度 / 风扇 | 32 |
| 07_mining_pool | 矿池 / Stratum | 463 |
| 08_network | 网络 | 17 |
| 09_web_api | WebUI / API | 29 |
| 10_config_eeprom | 配置 / EEPROM | 62 |
| 11_log_monitor | 日志 / 监控 / 看门狗 | 41 |
| 12_crypto | 加密 / 签名 | 6 |
| 13_os_service | 系统服务 / 线程 | 38 |
| 99_unclassified | 未分类 | 1414 |

## 目录

- `index.csv`：全部函数（程序/地址/名称/大小/标签/证据/源文件）
- `<块>/functions.csv`：该块函数子集
- `<块>/decompiled/<程序>/`：反编译 C 文件（硬链接）
- `<块>/README.md`：块说明与主要函数
- `09_web_api/webui/`：CGI 脚本、shell 函数索引、端点表
- `01_boot_upgrade/init_scripts/`：启动脚本

## 方法

- 用 Ghidra 12.2 对每个程序做完整分析，导出全部函数（含 thunk/外部符号清单）。
- 真实函数逐个反编译为 C；thunk/PLT 保留在清单中但不重复导出。
- 功能块由字符串关键词规则 + 人工种子（已知关键函数）多标签判定。
- 分类是启发式的，完整代码始终以 `index.csv` 和反编译目录为准。
