# FunctionModel — S19 Hydro 关键功能块

从 `/usr/bin/bmminer` 中提取的三类功能块（电源初始化、PIC 初始化、芯片数量检测），
按类别存放反编译伪代码、字符串证据和流程说明。

| 项 | 值 |
|---|---|
| 来源二进制 | `Unpacked/minerfs.d/rootfs/usr/bin/bmminer` |
| 大小 | 429,356 字节 |
| SHA-256 | `8f584fa9466bccaabf622eb63dda605eeadec17d83e56242e3101f77b36697ce` |
| 架构 | ARM32 little-endian，ARMv7（Cortex-A9），ET_EXEC，已 strip |
| 基址 | 链接地址从 `0x8000` 起，文中地址均为虚拟地址 |
| 反编译工具 | Ghidra 12.2（工程 `analysis/reverse/ghidra_project`） |

> 函数名是按日志字符串和调用关系**推断**的，不是原始符号（二进制无 `.symtab`）。
> 每个 `.c` 文件保留 Ghidra 原始伪代码，未做手工改写；`// callers:` 行来自 Ghidra。
> 地址以 `analysis/reverse/bmminer_functions_ghidra.csv` 为准。

---

## 1. 目录结构

```
FunctionModel/
├─ index.csv                     全部函数索引（类别/地址/名称/大小/行数/文件）
├─ README.md                     本文件
├─ 01_power_init/                电源初始化（31 个函数）
│   ├─ README.md                 流程、协议、电压换算
│   ├─ strings.csv               字符串证据
│   └─ 0x*.c
├─ 02_pic_init/                  PIC 初始化（21 个函数）
│   ├─ README.md                 I²C 拓扑、命令/应答、链级流程
│   ├─ strings.csv
│   └─ 0x*.c
└─ 03_asic_count_detect/         芯片数量检测（16 个函数）
    ├─ README.md                 期望值来源、检测循环、失败处理
    ├─ strings.csv
    └─ 0x*.c
```

跨类别复用的函数（`i2c_device_open`、`pic_enable_dcdc`、`pic_disable_dcdc`）
在各自目录中各存一份，内容相同。

## 2. 三类功能块的关系

```
board_power_init_sequence 0x388ec
├─ 选择目标电压（按板型字符串）
│    BHB28601 → 1900 (19.0 V)
│    HHB28601 / HHB28602 → 2100 (21.0 V)
│    其它 → 1500 (15.0 V)
├─ power_init 0x1cd50            ← 01_power_init
│    ├─ power_open 0x4f1d4 → i2c_device_open 0x50a64
│    ├─ power_get_type_version 0x4f034
│    ├─ power_type_is_supported 0x20854
│    ├─ set_voltage_by_steps 0x1cc60 → bitmain_set_voltage 0x50390
│    └─ get_min_voltage 0x1caa8（3 次校验 ≥ 75% 目标）
└─ chain_asic_detect 0x37218     ← 03_asic_count_detect
     ├─ chain_present 0x201d8
     ├─ 每链最多 3 次：上电 → enable_dcdc → 扫描 → 读回 ASIC 数
     ├─ get_detected_asic_num 0x205b4（FPGA 计数）
     ├─ get_expected_asic_num 0x2002c（topol.conf）
     └─ 不匹配 → disable_dcdc + 断电 + 标记链失效

PIC 层（02_pic_init）为上述两块提供底层能力：
  pic_open 0x4b97c / pic_get_version 0x4bad0 / pic_reset 0x4bcd4
  pic_start_app 0x4be78 / pic_enable_dcdc 0x4c050 / pic_get_voltage 0x4ca78
```

## 3. 关键结论（对改造最有用）

1. **PSU 挂在 I²C 上**：地址 `0x20`（`0x4f1d4` 传入 `{0x00020001}` → bus 1 / type 2 / addr 0x20），
   协议有 v1（命令字 `0x0204AA55`）和 v2（`0x0204`）两套，v1 失败自动降级 v2。
2. **PIC 挂在 I²C 上**：每链地址 `0x40 + 2*chain`（`0x50a64` 中
   `addr = (chain << 1) | (4 << 4)`），4 条链即 `0x40/0x42/0x44/0x46`。
3. **目标电压由板型决定**：19.0 / 21.0 / 15.0 V 三档，单位是 10 mV（1900/2100/1500），
   进入 `bitmain_set_voltage` 前除以 100 变成伏特。
4. **电压→DAC 码是型号相关的线性公式**：`0x4fff4` 按 PSU 类型（0x22/0x41/0x42/0x43/
   0x61/0x62/0x64/0x65/0x66/0x71…0x78）选择不同系数，系数在 `0x50318–0x50388` 字面量池。
   改动态电压时必须走这个换算，不能直接写 DAC。
5. **期望 ASIC 数来自 `/etc/topol.conf`**：`0x1eba4` 解析整机拓扑，`0x12650` 读取
   `chain_num / chain_row / chain_column / chain_asic_num / domain_asic_num`。
   检测结果与配置比对，不一致会关板。
6. **检测不是一次成功**：每链最多 3 轮，每轮重新上电（GPIO 0xD 对应 bit）+ 使能 DC-DC +
   等 3 秒 + 扫描；失败则整链断电并清除“链存在”标志。

## 4. 重新生成

```bash
cd Firmware/analysis/tools/ghidra_12.2_PUBLIC

# 反编译任意地址到指定目录
./support/analyzeHeadless \
  "D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/analysis/reverse/ghidra_project" \
  S19Hydro -process bmminer -noanalysis \
  -scriptPath "D:/Document/tempPrj/BITMAIN-S19Hyd-151T-Firmware/Firmware/analysis/reverse/ghidra_scripts" \
  -postScript S19DecompileAt.java <输出目录> 0x1cd50 0x37218
```

字符串证据来自 `analysis/reverse/refs_all.csv`（`S19FindStringRefs.java` 生成），
按功能块地址过滤后得到各目录的 `strings.csv`。

## 5. 限制

- 伪代码是 Ghidra 自动生成的，存在大量 `undefined4`、字符串逐字节拷贝等噪声；
  仅用于理解逻辑和定位改点，不能直接编译。
- 部分函数的参数类型/返回值靠调用约定推断，`0x1c978` 等涉及浮点参数传递的函数
  伪代码可读性较差。
- 文中“作用”是结合字符串与调用关系推断的，若与寄存器级行为冲突，以汇编为准。
