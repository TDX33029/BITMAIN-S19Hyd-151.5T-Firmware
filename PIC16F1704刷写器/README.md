# 基于 STM32F103C8T6 的 PIC16F1704 固件刷写器

专为 **蚂蚁矿机 (Bitmain Antminer) S19 / S19 Pro / S19j / S19 Hyd** 系列算力板 PIC 芯片研发的软硬件完整刷写工具。

本工具将常见的 **STM32F103C8T6 (Blue Pill)** 打造为专用的 ICSP 低压烧录器 (LVP Programmer)，支持**电脑图形界面联机刷写**、**命令行自动化刷写**以及**维修工作台一键脱机烧录**。

> 协议依据：Microchip《PIC16(L)F170X Memory Programming Specification》DS40001683B、
> 《PIC16(L)F1704/8 Data Sheet》DS40001715D。ICSP 命令集 / LVP 进模(33时钟) / 逐行写闩锁 /
> 整片擦除语义 / 器件ID 均已逐项对照官方规范核实。

---

## 🌟 核心特性

1. **原生物理 ICSP LVP 驱动**：
   - 纯 3.3V 低压编程，无需 9V/12V 高压升压电路，直连算力板安全不伤芯片；
   - Cortex-M3 DWT 硬件周期计数器提供微秒级精密时序；
   - 支持 4096 字程序 Flash、CONFIG1/CONFIG2 配置字、User ID 的完整读写与回读校验；
   - 代码保护 (CP) 芯片也可整片擦除解锁（规范规定 Bulk Erase 不受 CP 限制）。
2. **三模合一灵活操作**：
   - **图形界面 (GUI)**：Tkinter 桌面端，一键自动擦除、刷写、校验；
   - **命令行 (CLI)**：批量脚本自动化；
   - **脱机一键烧录 (Offline One-Key)**：PB9 按键一触即发，无需电脑。
3. **完善的协议机制**：CRC-16 校验二进制封包 + 人类可读 ASCII CLI 双协议。

---

## 📁 目录结构

```text
PIC16F1704刷写器/
├── bin/                             # 旧版 (PlatformIO) 预编译 STM32 固件
├── docs/
│   ├── WIRING_GUIDE.md             # 硬件接线与引脚图解 (PIC 引脚已修正)
│   └── PROTOCOL.md                 # 串口通讯协议与指令集
├── firmware/                        # 旧版固件源代码 (PlatformIO / CMSIS)
├── ST/Flasher/                      # ★ 新版固件 (STM32CubeMX 工程, 本目录)
│   ├── Core/Src|Inc/               #   icsp / uart / protocol / uprintf / 内嵌固件
│   ├── MDK-ARM/                    #   Keil MDK 工程 (AC5, µVision 实测 0 错误 0 警告, 含 hex/bin)
│   └── EWARM/                      #   IAR 工程 (源文件已加入, 未在本机验证)
├── host_tool/                       # PC 端上位机
│   ├── pic16f_gui.py               #   图形界面刷写工具 (推荐)
│   ├── pic16f_flasher.py           #   命令行刷写工具与核心引擎
│   ├── intel_hex.py                #   Intel HEX 解析与打包 (配置字解析已修复)
│   ├── hex2c.py                    #   HEX → 内嵌默认固件 C 文件转换工具
│   └── test_sample.hex             #   测试 HEX 文件
└── README.md
```

**新旧版固件协议完全兼容**，上位机两版通用；推荐使用 `ST/Flasher` 新版（修复了旧版
配置字写入顺序、串口中断 ORE 防卡死等问题）。

---

## 🔌 硬件引脚接线

| STM32 引脚 | 信号 | PIC16F1704 引脚 | 说明 |
| :---: | :---: | :---: | :--- |
| **PA0** | `PIC_MCLR` | **Pin 4** (`RA3/MCLR/VPP`) | 0V=编程, 3.3V=运行 |
| **PA1** | `PIC_DAT` | **Pin 10** (`RB7/ICSPDAT`) | ICSP 双向数据线 |
| **PA2** | `PIC_CLK` | **Pin 11** (`RB6/ICSPCLK`) | ICSP 时钟线 |
| **3.3V/GND** | 电源 | Pin 1 / Pin 14 | 离线烧录时给 PIC 供电 |
| **PB9** | 按键 | — | 脱机一键烧录 (接 GND) |
| **PC13** | LED | — | 板载状态灯 |

> ⚠️ ICSP 引脚是芯片硬件固定的：**DAT=Pin10(RB7)、CLK=Pin11(RB6)**。
> 详细接线、算力板飞线与供电方式请看 [docs/WIRING_GUIDE.md](docs/WIRING_GUIDE.md)。

---

## 🚀 快速使用步骤

### 第一步：烧录 STM32 固件

**新版 (推荐)** — 预编译产物在 `ST/Flasher/MDK-ARM/`（µVision + AC5 实测 0 错误 0 警告）：
- `Flasher.hex` / `Flasher.bin`：用 STM32CubeProgrammer / ST-Link / J-Link 烧录；
- 源码编译：双击 `ST/Flasher/MDK-ARM/Flasher.uvprojx`（Keil MDK + ARM Compiler 5）
  直接 F7 编译；
- CubeMX 工程文件 `Flasher.ioc` 可正常重新生成（应用代码全部位于
  USER CODE 段与独立源文件中，重新生成不会丢失；重新生成后需确认
  新增的 icsp/uart/protocol/uprintf/default_firmware 源文件仍在工程里）。

**旧版** — `bin/stm32_pic16f1704_flasher.bin` (PlatformIO 版，功能同，协议兼容)。

### 第二步：准备 PIC 固件 (HEX)

- 脱机一键烧录使用**内嵌镜像**：当前 `Core/Src/default_firmware.c` 是**演示占位固件**，
  拿到真实 S19Hyd 固件后用 `python host_tool/hex2c.py fw.hex default_firmware.c`
  生成并替换重新编译；
- 联机刷写不受此限制，直接用上位机 `-w` 指定任意 HEX。

### 第三步：刷写 PIC16F1704

#### 模式 A：图形界面 (推荐)
```bash
pip install -r host_tool/requirements.txt
python host_tool/pic16f_gui.py
```
选择串口 → 自动识别芯片 → 选择 HEX → **一键自动刷写**
（检测 → 整片擦除 → 写入 → 写配置字 → 100% 回读校验 → 释放运行）。

#### 模式 B：命令行
```bash
python host_tool/pic16f_flasher.py -d                 # 检测芯片
python host_tool/pic16f_flasher.py -w fw.hex          # 刷写并校验
python host_tool/pic16f_flasher.py -r dump_backup.hex # 整片备份导出
python host_tool/pic16f_flasher.py -e                 # 整片擦除
```

#### 模式 C：脱机一键烧录
接好 5 根线，按 PB9：LED 常亮烧录，成功常亮 1.5s 后熄灭，失败急促快闪。

---

## 🛠️ 常见故障排查

1. **"PIC not detected"**：
   - 共地、供电 (≥2.85V)、DAT/CLK 是否接反（DAT=10脚、CLK=11脚）；
   - 若为原厂芯片且替换新片可正常识别 → 原芯片 LVP 配置位为 0，低压无法进模，换片处理。
2. **在线维修**：算力板已上电时严禁并联 3.3V，只接 4 根信号线 + GND。
3. **校验失败**：排线过长引入时钟毛刺，控制在 15cm 内并串 100Ω 电阻。
4. **备份导出全是 0**：芯片带 CP 代码保护时程序区读出为 0（配置字仍可读），
   属芯片安全机制；此时直接走"擦除+刷写"流程。

---

## 📌 相对旧版的重要修正

| 问题 | 说明 |
| :--- | :--- |
| PIC 引脚图错误 | 旧文档把 ICSPDAT/ICSPCLK 标在 Pin 13/12，实际为 **Pin 10/11 (RB7/RB6)** |
| 配置字写入顺序 | 旧固件"先递增再 Load Config"会把值写进 UserID0；已按规范改为 **Load Config(带值)→递增→Begin** |
| 行写入闩锁补齐 | 未载入的写闩锁保留旧数据，不足 32 字时自动补 0x3FFF 防止污染 |
| 上位机配置字解析 | HEX 中配置字位于 0x10000 段 (0x1000E/0x10010)，旧版解析会丢失导致刷完配置字全空白；已修复并兼容两种格式 |
| 上位机 read_flash | 旧版 `addr_len_hack` 参数不存在，调用必崩；已修复 |
| 串口 ORE 卡死 | 溢出中断未清理导致死循环；已修复 |
| 器件识别 | 按 DS40001683B Table 3-1 输出具体型号 (F1704/05/08/09 及 LF 变体)，新增 CP/LVP 状态显示 |
