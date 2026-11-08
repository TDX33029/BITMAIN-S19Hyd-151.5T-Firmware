# 05 Hashboard EEPROM——思路方法

## 解决的问题

hashboard 的身份/校准数据（芯片数量、电压域布局、出厂频率-电压曲线、序列号）
存在板载 EEPROM 里，跨代加密方案不同。固件要**安全地读、解析、鉴权**。

## 思路

### 1. 分代解析器 + 加密适配

```
eeprom/antminer/
├── x19_j.rs        S19j 代：明文+CRC
├── x19_plain.rs    S19 平板代（L53-331）
└── x21_aes/
    ├── types.rs    S21 代：AES 加密（L1-130）
    │   └── keygen.rs   密钥派生
    └── xxtea.rs    XXTEA 层（L32-82）
```
解析器输出统一结构 → 上层不感知代际差异。**学点：加密方案变化被隔离在
适配层，解析器的公共接口稳定。**

### 2. 型号识别靠 EEPROM 而非总线探测

`00934088` 型号表（S21 XP Hyd / S19e XP Hyd / S21e Hyd / U3S21EXPH / S19+ ...）
+ `model_detect`（`detect`/`model-list`/`eeprom-parse` CLI——bosminer 自带
eeprom 解析子命令，可直接 dump 真机数据做格式对照）。
错误码 E3/E4（EEPROM 读失败/解码失败）区分"硬件问题"和"数据问题"。

### 3. x21 AES 密钥派生是关键 learning 点

`x21_aes/types/keygen.rs`（L11）+ `xxtea.rs`——密钥来源、派生轮次、
存储位置需要重点反编译（127 个 eeprom 函数里定位 keygen 调用链）。
**这对你们的水冷板校准数据工具是直接相关的接口信息。**

### 4. 与 PIC 的关系

hashboard PIC16F1704（你们线刷器的目标）负责电压域使能与 I2C 桥；
EEPROM 在另一 I2C 地址。`is_nopic_model`（无 PIC 机型标志）说明新一代
去 PIC 化——`allow_disabling_hashboards_on_nopic_miners` 高级设置对应
NoPIC 机型的容错策略。

## 锚点

`00934088`(型号表) `00907600`(硬件描述含 hashboard_eeprom_size)
CLI: `bosminer eeprom-parse`（真机 dump 工具）模块: `eeprom/antminer/*` 行号见 source_locations.json

## 重写要点

1. 解析器按"代际适配器"组织，公共结构体稳定
2. EEPROM 解析做成 CLI 子命令（离线可调试）
3. E3/E4 式错误分级（读不到 vs 读不懂）
4. keygen 链是理解加密格式的钥匙——优先反编译
