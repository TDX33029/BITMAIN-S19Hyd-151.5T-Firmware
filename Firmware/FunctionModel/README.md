# FunctionModel — S19 / S21 水冷机全量函数与功能块

> 范围：**只包含 Zynq7007 水冷控制板**。
> S21 升级包中的 `AMLCtrl_H6HB70801`（风冷机 Amlogic 镜像）**不纳入**，未做任何提取。

本目录是两套固件的完整函数语料 + 功能块索引：

- `S19/`：S19 Hydro（2022-12-17，bmminer 429,356 B）
- `S21/`：S21e Hyd（2025-10-16，bmminer 655,256 B）

全量反编译原始文件保留在各固件的 `analysis/reverse/` 下，本目录通过**硬链接**组织，
不重复占用空间。

---

## 1. 统计

| 项 | S19 | S21 |
|---|---:|---:|
| 程序数 | 10 | 10 |
| 函数总数（含 thunk/导入） | 1,843 | 3,328 |
| 实际反编译函数 | 1,186 | 2,245 |
| thunk / 外部导入 | 657 | 1,083 |
| WebUI CGI | 22 | 28 |
| CGI shell 函数 | 29 | 36 |
| WebUI 端点 | 21 | 22 |
| init 脚本 | 18 | 18 |

### 程序清单

| 程序 | S19 函数 | S21 函数 | 说明 |
|---|---:|---:|---|
| `bmminer` | 1,420 | 2,035 | 主矿机程序（电源/PIC/ASIC/调频/矿池/API） |
| `cgminer` | — | 853 | S21 的矿池客户端/算力引擎 |
| `FileParser` | 65 | 76 | 配置/固件包解析（含 miner.pem 校验） |
| `update-daemon` | 70 | 74 | 升级守护进程（`daemonc`/`daemons`） |
| `monitor-ipsig` | 90 | 90 | IPSIG/电流信号监控 |
| `monitor-recobtn` | 54 | 54 | 录音按键/恢复按键监控 |
| `antlogin` | 16 | 16 | Web 登录鉴权 |
| `cgminer-api` | 53 | 55 | 本地 API 客户端 |
| `id2mac` | 31 | 31 | 由 ID 生成 MAC |
| `bitmain_axi.ko` | 22 | 22（同 S19） | FPGA AXI 驱动 |
| `fpga_mem_driver.ko` | 22 | 22（同 S19） | FPGA 内存映射驱动 |

> 两个 `.ko` 在 S19/S21 中完全相同（SHA-256 一致），只分析一次，S21 直接复用。

---

## 2. 功能块

| 块 | 名称 | S19 | S21 |
|---|---|---:|---:|
| `00_imports_thunks` | 导入符号 / Thunk | 657 | 1,083 |
| `01_boot_upgrade` | 固件升级与启动 | 13 | 14 |
| `02_power_psu` | 电源 / PSU 控制 | 42 | 28 |
| `03_pic_ctrl` | PIC 控制 | 20 | 14 |
| `04_asic_chain` | ASIC / 算力链 | 110 | 133 |
| `05_freq_voltage` | 频率 / 电压调节 | 27 | 63 |
| `06_thermal_fan` | 温度 / 风扇 | 18 | 32 |
| `07_mining_pool` | 矿池 / Stratum | 9 | 463 |
| `08_network` | 网络 | 13 | 17 |
| `09_web_api` | WebUI / API | 24 | 29 |
| `10_config_eeprom` | 配置 / EEPROM | 25 | 62 |
| `11_log_monitor` | 日志 / 监控 / 看门狗 | 34 | 41 |
| `12_crypto` | 加密 / 签名 | 3 | 6 |
| `13_os_service` | 系统服务 / 线程 | 18 | 38 |
| `99_unclassified` | 未分类 | 866 | 1,414 |

> 一个函数可以属于多个块，所以块计数之和大于函数总数。
> 分类是**启发式**的：字符串关键词 + 已知关键函数种子 + 外部调用（pthread/socket/RSA 等）。
> 完整、无遗漏的函数列表始终以各固件的 `index.csv` 为准。

### 各块目录内容

```
<块>/
├─ README.md              块说明 + 主要函数（按种子/分数/大小排序）
├─ functions.csv          该块函数子集（program/address/name/size/labels/seed/score/evidence/source）
└─ decompiled/<程序>/     反编译 C 文件（硬链接到全量语料）
```

`index.csv` 字段：

| 字段 | 含义 |
|---|---|
| `program` | 所属程序 |
| `address` | 虚拟地址（Ghidra 基址） |
| `name` | 推断名（已知函数用语义名，其余保留 `FUN_xxxx`） |
| `size` | 函数体字节数 |
| `labels` | 功能块标签（`;` 分隔） |
| `seed` | 是否人工种子（1=是） |
| `score` | 关键词证据分 |
| `evidence` | 命中的代表字符串 |
| `source` | 反编译 .c 的相对路径 |

---

## 3. WebUI 与启动脚本

- `S19/09_web_api/webui/`、`S21/09_web_api/webui/`
  - `cgi-bin/`：全部 CGI 脚本（shell）
  - `functions.csv`：每个 CGI 的 shell 函数、行号范围、调用的命令、读写的文件
  - `endpoints.csv`：JS/HTML 中引用的 CGI 端点及对应文件
  - `init_scripts/`：`/etc/init.d` 全部启动脚本
  - `init_scripts.csv`：启动脚本的函数/命令/文件索引
- `S19/01_boot_upgrade/init_scripts/`、`S21/01_boot_upgrade/init_scripts/`：
  同一份启动脚本，放在升级/启动块下便于查阅。

---

## 4. 关键二进制哈希

| 文件 | SHA-256 |
|---|---|
| S19 `bmminer` | `8f584fa9466bccaabf622eb63dda605eeadec17d83e56242e3101f77b36697ce` |
| S21 `bmminer` | `aac3a8c0edb729c00fffa010d0e0a92c63548908d2359481478dee7c8c56af8e` |
| S21 `cgminer` | `9637106d2823996d12c6daeeb1e3ababacc2fb5ab5c8b44b1a1df82117e3abfc` |
| `bitmain_axi.ko`（两版相同） | `32da56d0a8aa13158706d3bb63c16c9452c277f33845cadd51d501c1e2ec3f10` |
| `fpga_mem_driver.ko`（两版相同） | `772fcd01373dda9f24eab164c0183e2620e44607ef16f01213f35cc573c663ad` |

---

## 5. 与旧目录的关系

- `S19/FunctionModel/` 是**早期人工整理的 3 个专题块**：
  `01_power_init`、`02_pic_init`、`03_asic_count_detect`，含详细协议说明与流程。
  它仍然保留，作为电源/PIC/ASIC 检测的深度阅读材料。
- 本目录 `FunctionModel/S19/` 是**全量模型**，覆盖全部程序与全部函数；
  其中 `02_power_psu`、`03_pic_ctrl`、`04_asic_chain` 与旧专题块主题对应。
- 两者的 .c 文件都来自同一份 Ghidra 工程，内容一致。

---

## 6. 复现方法

```bash
# 1) 全量反编译（Ghidra 12.2 + JDK 25）
#    工程：S19/analysis/reverse/ghidra_project/S19Hydro
#          S21/analysis/reverse/ghidra_project/S21Hydro
#    脚本：S19/analysis/reverse/ghidra_scripts/BMDump*.java

# 2) WebUI / init 脚本提取
python -I S19/analysis/extract_webui.py <rootfs> <outdir> S19
python -I S19/analysis/extract_webui.py S21/Unpacked/zynq/minerfs.d/rootfs \
        S21/analysis/reverse/webui S21

# 3) 生成功能块模型
python -I S19/analysis/build_function_model.py S19
python -I S19/analysis/build_function_model.py S21
```

反编译命令示例（S19）：

```bash
analyzeHeadless <proj_dir> S19Hydro -process bmminer -noanalysis \
  -scriptPath <ghidra_scripts> \
  -postScript BMDumpAllFunctions.java <out>/bmminer/decompiled <out>/bmminer/functions.csv 60
```

---

## 7. 注意事项

1. **地址是虚拟地址**，不同固件/程序不能直接互套；S19 与 S21 的同一功能地址通常不同。
2. 反编译结果是 Ghidra 伪 C，保留了 `FUN_xxxx`、`DAT_xxxx`、`undefined4` 等类型；
   未做手工改写，便于回溯。
3. `00_imports_thunks` 只有符号名，没有实现；它们来自 PLT/动态链接。
4. 函数名是推断的：电源/PIC/ASIC 的 S19 名称来自旧专题块的人工确认；
   S21 的调频链名称来自 `S21/analysis/reverse/FREQ_FEASIBILITY.md`；其余保留 Ghidra 名。
5. 分类只用于导航，不代表函数只做该块的事；跨块复用很常见。
6. 未修改任何固件、二进制或配置；本目录全部是只读分析产物。
