# BOS 功能知识库（学习导向）

目标：**学思路方法，再在自己的工程中重写应用**——不是复制粘贴。
代码证据（反编译 C）在 `../out/all_decomp/`（20,188 个函数，129MB），本目录的 APPROACH.md 是每一块的"问题→思路→关键机制"地图。

## 使用方法

1. 读功能块的 `APPROACH.md` 理解设计思路
2. 需要细节时按函数地址去 `../out/all_decomp/<addr>.c` 看反编译
3. 数据格式/协议/寄存器等**接口信息**可直接对齐（不受表达版权约束）
4. 算法逻辑按思路**自己重写**；GPL 血统部分走索源函（见 REUSE_GUIDE.md）

## 功能块索引

| 块 | 内容 | 函数数* |
|---|---|---|
| [01-autotuning](01-autotuning/APPROACH.md) | 8 级调优状态机 + 梯度下降 + 工作点网格 | 3,775 |
| [02-dps](02-dps/APPROACH.md) | 动态性能调节（功率/算力目标、步进、boost） | 54+ |
| [03-voltage-power](03-voltage-power/APPROACH.md) | 动态调压全链（TPS6287x/PSU/电压域） | 317 |
| [04-thermal-fan](04-thermal-fan/APPROACH.md) | 温控/风扇 PID、预热带、除霜、过热恢复 | 84+ |
| [05-eeprom](05-eeprom/APPROACH.md) | hashboard EEPROM 格式与 XXTEA/AES 加密 | 127 |
| [06-stratum-v2](06-stratum-v2/APPROACH.md) | SV2 协议栈（Noise/SRI/job declaration） | 887 |
| [07-api-surface](07-api-surface/APPROACH.md) | cgminer API + devel API + boser gRPC | — |
| [08-telemetry](08-telemetry/APPROACH.md) | braa 云代理、metrics、devfee | 560 |
| [09-upgrade-recovery](09-upgrade-recovery/APPROACH.md) | per-partes 升级、recover-to-stock | — |

\* 聚类计数含传播泄漏，作浏览索引用；以 APPROACH.md 内的锚点函数为准。

## 权威数据源（比聚类更可靠）

- **模块地图**：`../out/bosminer_modules.txt`（200 个 Rust 模块路径 = 功能的真实边界）
- **源位置表**：`../out/voltage/source_locations.json`（模块→行号范围，来自 .data.rel.ro 错误码表）
- **Ghidra 全量索引**：`../out/ghidra_functions.csv` + `../out/all_decomp/all_functions_index.csv`（地址/大小/调用度/字符串证据）
- **调用图**：`../out/kb/graph_edges.csv`（107,079 条边）
- **Ghidra 工程**：`../analysis/ghidra_project/BOS.gpr`（可直接 GUI 打开继续标注）

## 已知局限（诚实声明）

- 聚类大块（stratum_v1 9,893）有传播泄漏——以各 APPROACH.md 的锚点为准
- 纯计算函数（无字符串）的归块靠调用图传播，置信度标在 CSV
- boser/braa 二进制的同流水线处理进行中
