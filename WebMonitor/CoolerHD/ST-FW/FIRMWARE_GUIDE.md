# CoolerHD 固件说明与通信协议指南

## 1. 固件工程概述
- **工程路径**：`WebMonitor\CoolerHD\ST-FW\MDK-ARM\CoolerHD.uvprojx`
- **生成产物**：`CoolerHD.hex` / `CoolerHD.axf`（已通过 Keil MDK-ARM 编译，0 错误 0 警告）
- **单片机型号**：STM32F103C8T6（LQFP-48，72MHz 主频，8MHz 外部晶振）
- **开发框架**：STM32 HAL 库

---

## 2. 硬件引脚分配与外设驱动

### 2.1 风扇控制与测速
- **PWM 载波频率**：标准 25.000 kHz（ARR=2879 @ 72MHz）
- **驱动电路适配**：板载 S8050 NPN 三极管硬件反相逻辑，固件设置 `TIM_OCPOLARITY_LOW`，实现正逻辑输出（CCR 寄存器越大，风扇端有效占空比越高）。
- **测速机制**：采用 6 路完全独立的 EXTI 下降沿外部中断 + Cortex-M3 DWT 高分辨率周期时间戳测量，单脉冲实时更新转速，经 4 点滑动加权均值滤波平滑，400ms 无脉冲自动置 0（停转检测）。

| 通道 | 接口 | PWM 引脚 | 定时器分配 | TACH 引脚 | 测速中断 |
| :---: | :---: | :---: | :---: | :---: | :---: |
| Fan 1 | CN1 | PA8 | TIM1_CH1 | PA2 | EXTI2 |
| Fan 2 | CN2 | PA9 | TIM1_CH2 | PA3 | EXTI3 |
| Fan 3 | CN3 | PA10 | TIM1_CH3 | PA6 | EXTI9_5 |
| Fan 4 | CN4 | PA11 | TIM1_CH4 | PA7 | EXTI9_5 |
| Fan 5 | CN5 | PA0 | TIM2_CH1 | PB0 | EXTI0 |
| Fan 6 | CN6 | PA1 | TIM2_CH2 | PB1 | EXTI1 |

### 2.2 串口通信（CH340C）
- **引脚**：PB6 (TX), PB7 (RX)（USART1 外部重映射）
- **波特率**：`115200, 8, N, 1`

### 2.3 指示灯与 SWD 调试防锁死保护
- **STATE1 (PB3)**：Fan 1~3 达标时常亮，未达标时 250ms 闪烁。
- **STATE2 (PB4)**：Fan 4~6 达标时常亮，未达标时 250ms 闪烁。
- **ERROR (PB5)**：任意风扇转速为 0 时 250ms 闪烁，全转速正常（>0）时熄灭。
- **SWD 防锁死机制**：
  - 调用 `__HAL_AFIO_REMAP_SWJ_NOJTAG()` 仅关闭 JTAG，严格保留 SW-DP（PA13/PA14），不会锁死 ST-LINK。
  - 上电初始增加 300ms 延迟，确保 ST-LINK 具备充足的 Halt / Connect Under Reset 窗口。

---

## 3. 串口通信协议

### 3.1 周期上报（每 0.5s 自动回传）
单片机每 500ms 通过 USART1 输出两行数据：

1. **机器解析格式（CSV 简易行）**：
   ```
   $RPM,<F1>,<F2>,<F3>,<F4>,<F5>,<F6>\r\n
   ```
   示例：
   ```
   $RPM,1502,1498,1510,1995,2005,2012
   ```

2. **终端人类可读格式**：
   ```
   [FAN] F1:1502, F2:1498, F3:1510, F4:1995, F5:2005, F6:2012 RPM | Target:[1500,1500,1500,2000,2000,2000] | S1:OK, S2:OK, ERR:NORMAL
   ```

### 3.2 下行控制指令

| 指令 | 语法格式 | 说明 | 示例 | 回复示例 |
| :--- | :--- | :--- | :--- | :--- |
| **闭环设定目标转速** | `SET <fan_id> <rpm>` | `<fan_id>` 为 1~6 或 `ALL`，`<rpm>` 0~6000 | `SET 1 1800`<br>`SET ALL 2000` | `OK: Fan 1 target set to 1800 RPM`<br>`OK: All fans target set to 2000 RPM` |
| **开环手动占空比** | `DUTY <fan_id> <pct>` | 切换为手动模式，直接输出指定占空比 (0~100%) | `DUTY 1 70`<br>`DUTY ALL 50` | `OK: Fan 1 duty set to 70%`<br>`OK: All fans duty set to 50%` |
| **停止风扇** | `STOP <fan_id>` | 关闭指定风扇或全部风扇 | `STOP 1`<br>`STOP ALL` | `OK: Fan 1 stopped`<br>`OK: All fans stopped` |
| **即时查询状态** | `STATUS` 或 `GET` | 立即打印全部 6 个风扇转速、目标、占空比与达标情况 | `STATUS` | 详细状态列表 |
| **帮助说明** | `HELP` | 打印指令帮助 | `HELP` | 指令清单 |

---

## 4. 烧录与测试说明
1. 用 ST-LINK 连接 H1 接口：
   - Pin 1: 3.3V
   - Pin 2: GND
   - Pin 3: SWCLK (PA14)
   - Pin 4: SWDIO (PA13)
2. 接入 P1 12V 稳压电源上电。
3. 在 Keil MDK 中打开 `CoolerHD.uvprojx`，直接按 `F8`（Download）即可完成固件烧录。
4. 插入 Type-B USB 数据线连接电脑，打开串口助手（115200 8-N-1），即可看到每 0.5s 回传的风扇数据，并可发送 `SET 1 2000` 等指令测试调速。
