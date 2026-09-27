# 基于 STM32F103C8T6 的 PIC16F1704 固件刷写器

专为 **蚂蚁矿机 (Bitmain Antminer) S19 / S19 Pro / S19j / S19 Hyd** 系列算力板 PIC 芯片研发的软硬件完整刷写工具。

本工具将常见的 **STM32F103C8T6 (Blue Pill)** 打造为专用的 ICSP 低压烧录器 (LVP Programmer)，支持**电脑图形界面联机刷写**、**命令行自动化刷写**以及**维修工作台一键脱机烧录**。

---

## 🌟 核心特性

1. **原生物理 ICSP LVP 驱动**：
   - 严格遵循 Microchip PIC16(L)F1704/8 官方编程规范 (DS40001715 / DS40001683)。
   - 采用 Cortex-M3 DWT 硬件周期计数器提供微秒级精密时序。
   - 纯 3.3V 低压编程协议 (无需 9V/12V 高压升压电路，直连算力板安全不伤芯片)。
2. **三模合一灵活操作**：
   - **图形界面 (GUI)**：跨平台 Tkinter 原生桌面端，免安装额外依赖，一键自动擦除、刷写、校验。
   - **命令行 (CLI)**：支持批量脚本自动化与 CI/CD 自动测试。
   - **脱机一键烧录 (Offline One-Key)**：按键一触即发，无需连接电脑，现场快速维修批量刷写。
3. **完善的协议机制**：
   - 二进制封包采用 CRC-16 硬件级可靠校验。
   - 支持全片 4096 字程序 Flash 及 CONFIG1/CONFIG2 配置字、User ID 的完整读写与按字回读校验。
   - 固件支持从 PIC 逆向完整导出并生成标准 Intel HEX 文件。

---

## 📁 目录结构

```text
PIC16F1704刷写器/
├── bin/                             # 预编译生成的 STM32 固件
│   ├── stm32_pic16f1704_flasher.bin # 二进制固件 (供串口ISP / J-Link / ST-Link 使用)
│   └── stm32_pic16f1704_flasher.hex # 十六进制固件
├── docs/                            # 硬件与协议文档
│   ├── WIRING_GUIDE.md             # 详细引脚接线与算力板接口图解
│   └── PROTOCOL.md                 # 串口通讯协议与指令集说明
├── firmware/                        # STM32F103C8T6 固件源代码 (PlatformIO / CMSIS)
│   ├── include/                    # ICSP 驱动、串口、协议头文件
│   ├── src/                        # 驱动实现、协议解析、主程序
│   └── platformio.ini              # 编译配置文件
└── host_tool/                       # PC 端上位机工具
    ├── pic16f_gui.py               # 桌面图形界面刷写工具 (推荐)
    ├── pic16f_flasher.py           # 命令行刷写工具与核心引擎
    ├── intel_hex.py                # Intel HEX 解析与打包器
    ├── test_sample.hex             # 测试 HEX 文件
    └── requirements.txt            # Python 依赖清单 (仅需 pyserial)
```

---

## 🔌 硬件引脚接线

### 1. STM32 与 PIC16F1704 / 算力板连接

| STM32 引脚 | 信号名称 | PIC16F1704 引脚 | 算力板常见焊盘 | 说明 |
| :---: | :---: | :---: | :---: | :--- |
| **PA0** | `PIC_MCLR` | Pin 4 (`RA3/MCLR`) | `RST` / `MCLR` | 复位与 LVP 编程使能控制 (0V=编程, 3.3V=运行) |
| **PA1** | `PIC_DAT` | Pin 13 (`RA0/DAT`) | `DAT` / `PGD` | ICSP 串行双向数据线 |
| **PA2** | `PIC_CLK` | Pin 12 (`RA1/CLK`) | `CLK` / `PGC` | ICSP 串行时钟线 |
| **3.3V** | `VDD` | Pin 1 (`VDD`) | `3.3V` / `VCC` | 3.3V 供电 (算力板未上电时由 STM32 供电) |
| **GND** | `VSS` | Pin 14 (`VSS`) | `GND` | 共地信号参考点 |
| **PB9** | `KEY_TRIG` | 独立按键接 GND | -- | **一键脱机烧录触发按键** |
| **PC13** | `LED_STATUS`| 板载 LED | -- | 状态指示灯 (运行/成功/错误指示) |

### 2. STM32 与电脑连接
- **PA9** (`USART1_TX`) -> USB-TTL 串口模块的 `RXD`
- **PA10** (`USART1_RX`) -> USB-TTL 串口模块的 `TXD`
- **GND** -> USB-TTL 串口模块的 `GND`

> 详细接线示意图请参阅 [docs/WIRING_GUIDE.md](docs/WIRING_GUIDE.md)。

---

## 🚀 快速使用步骤

### 第一步：烧录 STM32 固件
将预编译的 `bin/stm32_pic16f1704_flasher.bin` (或 `.hex`) 烧录进 STM32F103C8T6：
- **方式 1 (ST-Link / J-Link)**：使用 STM32CubeProgrammer 或 J-Flash 烧录 `stm32_pic16f1704_flasher.hex`。
- **方式 2 (串口 ISP)**：将 STM32 BOOT0 接 3.3V，使用 FlyMcu / stm32flash 通过串口下载 `stm32_pic16f1704_flasher.bin`。
- **方式 3 (PlatformIO 源码编译)**：
  ```bash
  cd firmware
  pio run -t upload
  ```

---

### 第二步：安装上位机依赖
在电脑终端中执行：
```bash
pip install -r host_tool/requirements.txt
```

---

### 第三步：开始刷写 PIC16F1704

#### 模式 A：图形界面 (GUI，推荐)
执行以下命令启动图形界面：
```bash
python host_tool/pic16f_gui.py
```
1. 下拉菜单选择对应的串口，点击 **🔌 打开串口**。
2. 软件将自动识别 PIC16F1704 芯片状态及当前配置字。
3. 点击 **📁 浏览...** 选择你要刷入的 PIC 固件 (`.hex`)。
4. 点击 **⚡ 一键自动刷写**，程序将自动完成：**芯片检测 -> 整片擦除 -> 写入程序 -> 写入配置字 -> 100% 回读校验 -> 释放复位运行**。

---

#### 模式 B：命令行 (CLI) 快速刷写
```bash
# 1. 自动检测并识别芯片
python host_tool/pic16f_flasher.py -d

# 2. 擦除并刷写指定 HEX 固件 (自动校验)
python host_tool/pic16f_flasher.py -w your_firmware.hex

# 3. 完整备份/导出算力板现有 PIC 固件到 HEX 文件
python host_tool/pic16f_flasher.py -r dump_backup.hex

# 4. 整片擦除芯片
python host_tool/pic16f_flasher.py -e

# 5. 复位目标芯片
python host_tool/pic16f_flasher.py --reset
```

---

#### 模式 C：维修工作台脱机一键烧录 (无需连接电脑)
1. 将 STM32 烧录器的 PA0/PA1/PA2/3.3V/GND 与算力板 PIC 编程焊盘对准插好。
2. 按下接在 **PB9** 上的微动按键（或拉低 PB9）：
   - 板载 PC13 LED 常亮，开始全自动擦除与烧录。
   - 烧录及校验 100% 成功：LED 常亮 1.5 秒后熄灭，PIC 自动启动。
   - 若接线不良或芯片损坏：LED 连续急促快闪报警。

---

## 🛠️ 常见故障排查 (Troubleshooting)

1. **上位机提示 "Target PIC not detected"**：
   - 检查算力板与 STM32 的 GND 是否牢固共地。
   - 确认 PIC16F1704 的 Pin 1 供电电压为 3.3V（电压低于 2.7V 时部分低频工作模式可能无法进入 ICSP）。
   - 检查 PA1(DAT) 与 PA2(CLK) 是否接反。
2. **算力板带电维修时连接失败**：
   - 当算力板接有外接主电源时，**严禁将 STM32 的 3.3V 输出并联连接**，仅需接 GND、PA0(MCLR)、PA1(DAT)、PA2(CLK)。
3. **校验错误 (Verify Failed)**：
   - 连接排线过长可能引起高频时钟毛刺，建议排线长度控制在 15cm 以内，并在信号线上串联 100Ω 阻尼电阻。
