# PIC16F1704 烧录硬件连接与引脚定义指南

本工具基于 **STM32F103C8T6 (Blue Pill / 最小系统板)**，通过 ICSP (In-Circuit Serial Programming) 低压编程模式 (LVP) 对 Microchip **PIC16F1704** 进行读写与固件刷写，特别适用于 **蚂蚁矿机 (Bitmain Antminer) S19 / S19 Pro / S19j / S19 Hyd** 系列算力板的维修与固件修复。

---

## 1. STM32F103C8T6 引脚定义

| STM32 引脚 | 信号名称 | 方向 | 连接目标 | 说明 |
| :--- | :--- | :--- | :--- | :--- |
| **PA0** | `PIC_MCLR` | 输出 (推挽) | PIC Pin 4 (`RA3/MCLR/VPP`) | 复位 / LVP 编程使能控制 (0V=编程/复位, 3.3V=运行) |
| **PA1** | `PIC_DAT` | 双向 (开漏/推挽+上拉) | PIC Pin 13 (`RA0/ICSPDAT`) | ICSP 串行双向数据线 |
| **PA2** | `PIC_CLK` | 输出 (推挽) | PIC Pin 12 (`RA1/ICSPCLK`) | ICSP 串行时钟线 |
| **PA3** | `PIC_VDD_EN` | 输出 (可选) | 目标板供电使能 | 高电平输出 3.3V (亦可用于外接 MOS 驱动供电) |
| **PA9** | `USART1_TX` | 输出 | USB-TTL 的 `RXD` | 连接电脑串口 (波特率 115200 8-N-1) |
| **PA10**| `USART1_RX` | 输入 | USB-TTL 的 `TXD` | 连接电脑串口 (波特率 115200 8-N-1) |
| **PB9** | `KEY_TRIG` | 输入 (内部上拉) | 接按键到 GND | **一键脱机烧录按键** (按下即自动烧录内置固件) |
| **PC13**| `LED_STATUS`| 输出 | 板载绿色/红色 LED | 状态指示灯 (常亮=就绪/成功, 闪烁=进行中, 快闪=错误) |
| **3.3V**| `VDD` | 电源 | PIC Pin 1 (`VDD`) | 3.3V 电源 (离线单板烧录时为 PIC 供电) |
| **GND** | `VSS` | 地 | PIC Pin 14 (`VSS`) | 共地连接 (所有参考地必须相连) |

---

## 2. PIC16F1704 芯片引脚对应 (TSSOP-14 / SOIC-14 / DIP-14)

```text
               PIC16F1704 (Top View)
                  +---+-+---+
        VDD (3.3V) | 1     14 | VSS (GND)
     RA5 / OSC1   | 2     13 | RA0 / ICSPDAT  <---> STM32 PA1
     RA4 / AN3    | 3     12 | RA1 / ICSPCLK  <---> STM32 PA2
  RA3 / MCLR / VPP | 4     11 | RA2 / INT
     RC5 / RX     | 5     10 | RC0 / SCL
     RC4 / C2IN+  | 6      9 | RC1 / SDA
     RC3 / AN7    | 7      8 | RC2 / AN6
                  +---------+
```

---

## 3. 蚂蚁算力板 (Antminer S19 / S19 Hyd) PIC 烧录接口对照

在 S19 系列算力板上，通常在 PIC16F1704 附近留有 **J2 / J6 / 4-Pin / 6-Pin 烧录排针或测试焊盘 (Test Pads)**：

### 常见 4-Pin 接口定义：
1. **Pin 1 (VDD)**: 3.3V
2. **Pin 2 (GND)**: 地
3. **Pin 3 (CLK)**: 接 STM32 `PA2` (`PIC_CLK`)
4. **Pin 4 (DAT)**: 接 STM32 `PA1` (`PIC_DAT`)
*(注意：MCLR 可直接飞线连接至 PIC16F1704 的第 4 脚或板上的 RST 测试点)*

### 常见 6-Pin / PICkit 标准接口定义：
| 排针脚位 | 标号 | 连接到 STM32 |
| :---: | :---: | :---: |
| **1** | MCLR / VPP | `PA0` |
| **2** | VDD (3.3V) | `3.3V` (或板载自带供电) |
| **3** | GND / VSS | `GND` |
| **4** | ICSPDAT / PGD | `PA1` |
| **5** | ICSPCLK / PGC | `PA2` |
| **6** | NC | 悬空 |

---

## 4. 供电方式选择 (重要建议)

1. **工作台离线单板维修 (推荐)**：
   - 算力板未上主电源，使用 STM32 的 `3.3V` 和 `GND` 为算力板的 PIC16F1704 供电。
   - STM32 本身通过 USB 线从电脑取电 (5V 转 3.3V LDO)。
2. **整机 / 算力板已上电在线维修**：
   - 如果算力板已有 12V/14V 及辅助 3.3V 供电，**切勿将 STM32 的 3.3V 输出接在板上**！
   - 只需连接 **GND、PA0(MCLR)、PA1(DAT)、PA2(CLK)** 四根信号线。
3. **信号完整性保护**：
   - 建议在 `PA0`、`PA1`、`PA2` 线上串接 **100Ω ~ 330Ω** 的限流/阻抗匹配电阻，防止信号反射和意外过流。
