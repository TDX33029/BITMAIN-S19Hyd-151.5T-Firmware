# STM32F103 与上位机通信协议规范 (Protocol Specification)

STM32F103 固件内置**双模式**协议解析引擎：
1. **高效二进制封包协议 (Binary Packet Mode)**：专为 Python 上位机 / 自动化脚本设计，包含 CRC-16 校验，传输速率高、抗干扰强。
2. **人类可读 ASCII 命令行协议 (CLI Terminal Mode)**：用户可直接通过串口助手 (Putty, XShell, 串口调试助手) 交互操作。

通信波特率：`115200 bps, 8 数据位, 无校验 (None), 1 停止位`。

---

## 一、 二进制封包协议格式

### 1. 上位机请求帧 (Host Request)

| 偏移 | 字段 | 类型 | 大小 | 说明 |
| :--- | :--- | :--- | :--- | :--- |
| 0 | `Sync0` | uint8 | 1 字节 | 固定为 `0xAA` |
| 1 | `Sync1` | uint8 | 1 字节 | 固定为 `0x55` |
| 2 | `Cmd` | uint8 | 1 字节 | 指令编码 (0x01 ~ 0x09) |
| 3 | `Seq` | uint8 | 1 字节 | 序列号 (累加自增，用于应答匹配) |
| 4..5 | `Addr` | uint16 | 2 字节 | 字地址 (小端模式 Little-Endian) |
| 6..7 | `Len` | uint16 | 2 字节 | 负载长度 (小端模式，字节数) |
| 8..N | `Payload`| 字节数组 | Len 字节 | 传输数据负载 (可为空) |
| N+1..N+2| `CRC16` | uint16 | 2 字节 | CRC-16-CCITT (小端，Poly=0x1021, Init=0xFFFF) |

### 2. 烧录器应答帧 (Programmer Response)

| 偏移 | 字段 | 类型 | 大小 | 说明 |
| :--- | :--- | :--- | :--- | :--- |
| 0 | `Sync0` | uint8 | 1 字节 | 固定为 `0x55` |
| 1 | `Sync1` | uint8 | 1 字节 | 固定为 `0xAA` |
| 2 | `Cmd` | uint8 | 1 字节 | 回显对应指令编码 |
| 3 | `Seq` | uint8 | 1 字节 | 回显对应序列号 |
| 4 | `Status`| uint8 | 1 字节 | 执行状态：`0x00`=成功，非0=错误码 |
| 5..6 | `Len` | uint16 | 2 字节 | 负载长度 (小端模式) |
| 7..N | `Payload`| 字节数组 | Len 字节 | 应答返回数据 |
| N+1..N+2| `CRC16` | uint16 | 2 字节 | CRC-16-CCITT (覆盖 Header + Payload) |

---

## 二、 指令列表 (Commands)

| 编码 | 指令宏 | 说明 | 负载内容 |
| :---: | :--- | :--- | :--- |
| `0x01` | `CMD_PING` | 测试串口连接与握手 | 请求：无，应答："PONG" (4字节) |
| `0x02` | `CMD_DETECT` | 检测 PIC16F1704 芯片状态 | 应答：`pic_chip_info_t` (见下) |
| `0x03` | `CMD_ERASE` | 整片擦除 Flash 与配置字 | 状态 0x00 表示擦除完成 |
| `0x04` | `CMD_WRITE_ROW` | 写入一行 Flash (32个14位字，64字节) | 请求：Addr=起始字地址, Payload=64字节 |
| `0x05` | `CMD_READ_FLASH` | 读取指定长度的 Flash 字 | 请求：Addr=起始字地址, **Len=读取字数**(无负载)；应答：数据字节 |
| `0x06` | `CMD_WRITE_CFG` | 写入配置字 (CONFIG1/2 或 UserID) | 请求：Payload=[Addr (2B), Value (2B)] |
| `0x07` | `CMD_READ_CFG` | 读取配置字与芯片 ID | 应答：配置字详细数据 |
| `0x08` | `CMD_RESET_TARGET` | 释放复位，启动目标 PIC 运行 | 状态 0x00 表示已释放 |
| `0x09` | `CMD_ONEKEY_BURN` | 触发一键烧录内置默认固件 | 状态 0x00 表示自动擦除、烧录与校验成功 |

### DETECT / READ_CFG 应答负载 (pic_chip_info_t)

| 偏移 | 字段 | 说明 |
| :--- | :--- | :--- |
| 0 | `dev_id` (u16) | 原始器件ID字（含版本号，PIC16F1704=0x3043） |
| 2 | `rev_id` (u16) | 版本号（低5位） |
| 4 | `config1` (u16) | CONFIG1 @0x8007 |
| 6 | `config2` (u16) | CONFIG2 @0x8008 |
| 8..15 | `userid[4]` (u16×4) | User ID @0x8000..0x8003 |
| 16 | `is_valid` (u8/bool) | 是否 F1704/05/08/09 家族 |
| 17 | `cp_on` (u8) | **v2 新增**：CONFIG1.CP=0 时代码保护开启 |
| 18 | `lvp_on` (u8) | **v2 新增**：CONFIG2.LVP=1 时允许低压进模 |

> v1 固件应答 17 字节（无最后两字段）；上位机按实际长度自适应。

---

## 三、 ASCII 命令行控制模式 (CLI Mode)

直接使用串口调试工具发送回车结尾的字符串指令：

| 指令 | 示例返回 | 功能说明 |
| :--- | :--- | :--- |
| `PING` | `PONG` | 测试连通性 |
| `ID` 或 `DETECT` | `[OK] PIC Detected: DevID=0x3043 Rev=0x03` | 识别 PIC16F1704 芯片 ID |
| `ERASE` | `[OK] Bulk Erase Completed Successfully!` | 整片擦除目标芯片 |
| `READ 0 16` | `Address 0x0000 (16 words): ...` | 读取从 0 开始的 16 个字 |
| `DUMP` | `:10000000... :00000001FF` | 完整导出 4K 程序 Flash 及配置字为标准 Intel HEX |
| `CFG` | `CONFIG1: 0x3F84, CONFIG2: 0x1C13` | 查看配置字状态 |
| `ONEKEY` | `[SUCCESS] S19 PIC Firmware Flashed & Verified!` | 一键执行烧录、校验和启动 |
| `RESET` | `[OK] Released MCLR. Target PIC is running.` | 释放复位，启动 PIC |
| `HELP` | 显示内置帮助菜单 | 帮助信息 |
