# PIC16F1704 烧录硬件连接与引脚定义指南 (权威更正版)

本工具基于 **STM32F103C8T6 (Blue Pill / 最小系统板)**，通过 ICSP (In-Circuit Serial Programming) 低压编程模式 (LVP) 对 Microchip **PIC16F1704** 进行读写、固件提取与刷写，特别适用于 **蚂蚁矿机 (Bitmain Antminer) S19 / S19 Pro / S19j / S19 Hyd** 系列算力板的维修与固件修复。

> 协议与电气依据：
> 1. Microchip《PIC16(L)F170X Memory Programming Specification》DS40001683B Figure 2-1
> 2. Microchip《PIC16(L)F1704/8 Data Sheet》DS40001715D Table 2 (14-Pin Allocation Table)

---

## ⚠️ 关键排错警示：为什么接上 PIC_DAT 芯片就死机？

### 常见故障现象：
> “不管另外两根线怎么接，只要 `PIC_DAT` 接上后 PIC 芯片就不工作了，移开恢复正常。程序无法识别和读取到 PIC 信息。”

### 根本原因深度分析：
1. **引脚接错（误将 Pin 10 当成 ICSPDAT）**：
   - 早期个别网络资料错误地将 28/40 脚单片机（如 PIC16F1718 的 RB7）当成了 14 脚单片机引脚。
   - 在 PIC16F1704（14 脚封装）上，**Pin 10 实际上是 `RC0`，而不是 `DAT`**！
   - 在蚂蚁 S19 算力板上，**Pin 10（RC0）连接的是整板核心的 I2C 硬件通信时钟线（SCL）**。
   - 当 STM32 的 `PA1`（`PIC_DAT`）接在 Pin 10 上时，会直接把整块算力板的 I2C SCL 强制拉到 0V（拉死在地），PIC 内部的 MSSP/I2C 模块瞬间进入时钟死锁或中断卡死，导致整颗芯片完全停工！
   - 拔开 `PIC_DAT` 后，板载上拉电阻恢复 3.3V，PIC 芯片立刻恢复正常。
   - **正确的 ICSPDAT 是 Pin 13（RA0），ICSPCLK 是 Pin 12（RA1）！**
2. **烧录器空闲态已升级为高阻保护 (Hi-Z)**：
   - 最新固件已将空闲态下的 `PA1`（DAT）与 `PA2`（CLK）设为**完全浮空高阻输入模式（Hi-Z）**，仅在拉低 MCLR 进入复位编程时才切换为输出，从固件源头彻底杜绝拉死目标芯片总线的问题。

---

## 1. PIC16F1704 正确芯片引脚对应 (DIP-14 / SOIC-14 / TSSOP-14)

根据 Microchip 官方手册：PIC16F1704 只有 **PORTA**（RA0~RA5）和 **PORTC**（RC0~RC5），**没有任何 PORTB 引脚**！

```text
               PIC16F1704 (Top View 顶视图)
                        +---\/---+
            VDD (3.3V) | 1     14 | VSS (GND)
             RA5 / OSC | 2     13 | RA0 / ICSPDAT  <==【STM32 PA1】(数据线)
             RA4 / AN3 | 3     12 | RA1 / ICSPCLK  <==【STM32 PA2】(时钟线)
      RA3 / MCLR / VPP | 4     11 | RA2 (板载电源控制)
              RC5 / RX | 5     10 | RC0 (板载 I2C SCL - 绝不可接烧录线!)
           RC4 / C2IN+ | 6      9 | RC1 (板载 I2C SDA)
             RC3 / AN7 | 7      8 | RC2 (板载供电ADC检测)
                        +---------+
```

---

## 2. STM32F103C8T6 与 PIC16F1704 接线对照表

| STM32 引脚 | 信号名称 | 方向 | 连接 PIC16F1704 (14脚封装) | 算力板焊盘标识 | 功能说明 |
| :---: | :---: | :---: | :---: | :---: | :--- |
| **PA0** | `PIC_MCLR` | 输出 (推挽) | **Pin 4** (`RA3/MCLR/VPP`) | `RST` / `MCLR` | 复位与 LVP 编程使能控制 (0V=进模, 3.3V=运行) |
| **PA1** | `PIC_DAT` | 双向 (空闲Hi-Z) | **Pin 13** (`RA0/ICSPDAT`) | `DAT` / `PGD` | **ICSP 串行数据线 (严禁接到 Pin 10!)** |
| **PA2** | `PIC_CLK` | 输出 (空闲Hi-Z) | **Pin 12** (`RA1/ICSPCLK`) | `CLK` / `PGC` | **ICSP 串行时钟线 (严禁接到 Pin 11!)** |
| **3.3V** | `VDD` | 供电 (3.3V) | **Pin 1** (`VDD`) | `3V3` / `VCC` | 目标芯片供电 (离线单板维修时连接) |
| **GND** | `VSS` | 地 | **Pin 14** (`VSS`) | `GND` | 共地信号参考点 (必须可靠共地) |
| **PA3** | `PIC_VDD_EN` | 输出 (可选) | -- | -- | 目标板供电控制引脚 (可选悬空) |
| **PB9** | `KEY_TRIG` | 输入 (上拉) | 按键接到 GND | -- | **一键脱机烧录按键** (点按直接烧录内嵌固件) |
| **PC13** | `LED_STATUS`| 输出 | 板载 LED | -- | 状态灯 (慢闪=就绪, 常亮=烧录中/成功, 快闪=失败) |
| **PA9** | `USART1_TX` | 输出 | USB-TTL 的 `RXD` | -- | 串口调试通信 (115200 8-N-1) |
| **PA10**| `USART1_RX` | 输入 | USB-TTL 的 `TXD` | -- | 串口调试通信 (115200 8-N-1) |

---

## 3. 蚂蚁 S19 系列算力板接线实操指导

算力板接口处通常留有 PIC 专用的烧录焊盘排针（J2 / J6 / 4-Pin / 6-Pin）。若无排针，可直接在芯片引脚上用细漆包线飞线：

```text
 算力板 PIC 芯片 (SOP-14)                STM32F103 烧录器
  +------------------+                    +---------------+
  | Pin 1  (VDD 3.3V)| <----------------- | 3.3V (仅离线) |
  | Pin 4  (MCLR)    | <----------------- | PA0           |
  | Pin 12 (ICSPCLK) | <----------------- | PA2           |
  | Pin 13 (ICSPDAT) | <----------------- | PA1           |
  | Pin 14 (VSS GND) | <----------------- | GND           |
  +------------------+                    +---------------+
```

1. **飞线顺序与长度**：
   - 线长尽量控制在 **10~15cm** 以内，过长的高频时钟线容易受到电磁干扰导致校验错误。
   - 建议在 `PA0/PA1/PA2` 上各串联一颗 **100Ω** 的小电阻，可以极大改善信号边沿反射。
2. **供电模式二选一（极度重要）**：
   - **离线维修（算力板未上电源）**：将 STM32 的 `3.3V` 和 `GND` 分别接到 PIC 的 Pin 1 和 Pin 14，由 STM32 独立供电。
   - **在线维修（算力板已上 12V/14V 电源）**：**千万不要接 STM32 的 3.3V 输出！** 只接 `GND`、`PA0`、`PA1`、`PA2` 共四根线即可。

---

## 4. 连好后的验证流程

接线完成后，打开电脑终端或图形界面：
1. 启动工具：
   ```bash
   python host_tool/pic16f_flasher.py -d
   ```
2. 正确识别输出示例：
   ```text
   [*] Connecting to STM32 PIC Programmer...
   [+] Connected successfully on COM8!
   [+] PIC Detected: PIC16F1704
       Device ID:  0x3043 (Revision: 0x03)
       CONFIG1:    0x3F84
       CONFIG2:    0x1C13
       User IDs:   ['0x0001', '0x0002', '0x0003', '0x0004']
   ```
   只要显示出 `PIC16F1704 (0x3043)`，即代表引脚完全正确，可以放心执行固件读取（`-r`）或刷写（`-w`）！
