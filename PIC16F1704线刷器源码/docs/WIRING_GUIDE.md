# PIC16F1704 烧录硬件连接与引脚定义指南

本工具基于 **STM32F103C8T6 (Blue Pill / 最小系统板)**，通过 ICSP (In-Circuit Serial Programming) 低压编程模式 (LVP) 对 Microchip **PIC16F1704** 进行读写与固件刷写，特别适用于 **蚂蚁矿机 (Bitmain Antminer) S19 / S19 Pro / S19j / S19 Hyd** 系列算力板的维修与固件修复。

> 协议与电气依据：Microchip《PIC16(L)F170X Memory Programming Specification》DS40001683B、
> 《PIC16(L)F1704/8 Data Sheet》DS40001715D。

---

## 1. STM32F103C8T6 引脚定义

| STM32 引脚 | 信号名称 | 方向 | 连接目标 | 说明 |
| :--- | :--- | :--- | :--- | :--- |
| **PA0** | `PIC_MCLR` | 输出 (推挽) | PIC Pin 4 (`RA3/MCLR/VPP`) | 复位 / LVP 编程使能控制 (0V=编程/复位, 3.3V=运行) |
| **PA1** | `PIC_DAT` | 双向 | PIC Pin 10 (`RB7/ICSPDAT`) | ICSP 串行双向数据线 |
| **PA2** | `PIC_CLK` | 输出 (推挽) | PIC Pin 11 (`RB6/ICSPCLK`) | ICSP 串行时钟线 |
| **PA3** | `PIC_VDD_EN` | 输出 (可选) | 目标板供电使能 | 可驱动 P-MOS 管为算力板 PIC 供电 (不用可悬空) |
| **PA9** | `USART1_TX` | 输出 | USB-TTL 的 `RXD` | 连接电脑串口 (波特率 115200 8-N-1) |
| **PA10**| `USART1_RX` | 输入 | USB-TTL 的 `TXD` | 连接电脑串口 (波特率 115200 8-N-1) |
| **PB9** | `KEY_TRIG` | 输入 (内部上拉) | 接按键到 GND | **一键脱机烧录按键** (按下即自动烧录内嵌固件) |
| **PC13**| `LED_STATUS`| 输出 | 板载 LED | 状态指示灯 (闪烁=就绪, 常亮=烧录中/成功, 快闪=错误) |
| **3.3V**| `VDD` | 电源 | PIC Pin 1 (`VDD`) | 3.3V 供电 (离线单板烧录时由 STM32 供电) |
| **GND** | `VSS` | 地 | PIC Pin 14 (`VSS`) | 共地连接 (所有参考地必须相连) |

---

## 2. PIC16F1704 芯片引脚对应 (DIP-14 / SOIC-14 / TSSOP-14)

```text
                PIC16F1704 (Top View)
                   +---\/---+
        VDD (3.3V) |1       14| VSS (GND)
     RA5 / OSC1    |2       13| RB4
     RA4 / AN3     |3       12| RB5
  RA3 / MCLR / VPP |4       11| RB6 / ICSPCLK  <--> STM32 PA2
     RC5 / RX      |5       10| RB7 / ICSPDAT  <--> STM32 PA1
     RC4 / C2IN+   |6        9| RC7 / TX
     RC3 / AN7     |7        8| RC6 / SDA
                   +---------+
```

> ⚠️ **重要更正**：早期版本文档曾把 ICSPDAT/ICSPCLK 标注在 Pin 13/12 (RA0/RA1)，
> **那是错误的**——PIC16F1704 的 14 脚封装上根本没有 RA0/RA1 引脚。
> ICSP 引脚由芯片内部硬件固定：
> - **ICSPDAT = RB7 = Pin 10**
> - **ICSPCLK = RB6 = Pin 11**
> - **MCLR/VPP = RA3 = Pin 4**（LVP 模式下该脚无需 9V 高压，拉低即可进编程模式）

---

## 3. 算力板上的接线 (S19 / S19 Hyd 系列)

S19 系列算力板上有一颗 PIC16F1704（约 6mm 宽 SOP-14，位于接口插座附近）。
不同批次板卡的编程焊盘位置不同，接线前请按以下步骤确认：

1. **找 PIC**：板上唯一的 14 脚 SOP 芯片即 PIC16F1704；
2. **找焊点**：从芯片 4/10/11/1/14 脚沿走线找测试焊点或飞线引出；
   若板上没有预留焊盘，直接在芯片引脚上飞线（建议线长 < 15cm）；
3. **接线**（5 根线）：

| 信号 | PIC 引脚 | STM32 |
| :--- | :--- | :--- |
| MCLR | Pin 4 | PA0 |
| DAT  | Pin 10 (RB7) | PA1 |
| CLK  | Pin 11 (RB6) | PA2 |
| VDD  | Pin 1 | 3.3V (离线) / 悬空 (在线) |
| GND  | Pin 14 | GND |

> 先用上位机执行 `DETECT`（串口命令 `ID`）验证接线正确后再擦写。

---

## 4. 供电方式选择 (重要)

1. **离线单板维修 (推荐)**：
   - 算力板未上主电源，由 STM32 的 `3.3V`/`GND` 给 PIC 供电；
   - 注意：整片擦除后的芯片 BOR 默认开启，编程期间 PIC VDD 需 ≥ 2.85V
     (DS40001683B Table 8-1 Note 2)，3.3V 供电满足。
2. **在线维修 (算力板已上电)**：
   - **切勿把 STM32 的 3.3V 与板上电源并联！** 只接 `GND / PA0 / PA1 / PA2` 四线；
   - 在线擦写会短暂复位 PIC（MCLR 拉低），整机可能报 PIC 通信错误，刷完重新上电即可。
3. **信号完整性**：
   - 建议 `PA0/PA1/PA2` 三根线各串 **100Ω** 电阻，排线尽量短（< 15cm）。

---

## 5. LVP 进模条件与代码保护 (务必阅读)

- 本烧录器为**纯 3.3V 低压编程 (LVP)**，进模前提是目标芯片 **CONFIG2.LVP = 1**：
  - **全新/整片擦除过的芯片：LVP 出厂默认为 1，必定可以刷写**（换新片修复流程 100% 适用）；
  - **原厂芯片**：Bitmain 出厂 PIC 通常开了代码保护 (CP=1)，CP 不影响本工具的
    擦除/写入（规范规定 Bulk Erase 不受 CP 限制），但**若其 LVP=0 则无法进模**——
    表现为上位机/CLI 始终 "PIC not detected"。此时直接换新片即可；
- LVP 一旦被配置为 0，只有 8-9V 高压编程 (HVP) 才能恢复，本硬件不支持 HVP；
- 刷写完成后的配置字来自 HEX 文件，请确认所刷 HEX 的 CONFIG2.LVP=1，
  否则这块芯片以后只能用 HVP 编程器处理。
