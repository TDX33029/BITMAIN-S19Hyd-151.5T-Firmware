# 可复用性评估（把你学到的东西合法装进自己的固件）

## 四条路径，按优先级

### 1. 直接调用（零提取成本）
bosminer/boser 暴露的 gRPC + devel + cgminer API。你的固件/监控系统作为客户端调用。
- 接口定义：`BraiinsOS/bos-plus-api/proto/bos/v1/`（16 个 proto）
- ⚠️ 该仓库**无许可证声明**（GitHub license: None）→ 默认保留所有权利。
  作为互操作参考没问题；把 proto 原样复制进你要发布的仓库前，发邮件问 Braiins
  （opensource@braiins.com）要个明确授权。

### 2. 净室重写（本知识库的主用途）
APPROACH.md 给了每个功能块的"问题→思路→参数→坑"。按思路自己实现：
- **可以**对齐的：数据格式（EEPROM 布局、I2C 寄存器含义、协议字段、错误码语义）、
  配置面（22 项高级设置 schema）、指标命名（metrics 名字是事实接口）
- **自己写**的：全部代码表达
- 方法建议：读 APPROACH.md → 写自己的设计文档 → 实现 → 用真机行为对拍
  （bosminer 的 `detect` / `eeprom-parse` / `model-list` CLI 可产生对照数据）

### 3. GPL 索源（cgminer 血统部分）
bosminer 的血统是 cgminer（GPLv3）→ bmminer（Bitmain fork）→ bosminer（Braiins fork）。
GPL 义务跟随：**书面索取 complete corresponding source**（opensource@braiins.com，
install.sh 版权头里就是这个联系渠道）。拿到的是他们的 fork 源码——
比反编译干净一个数量级，且合法。*（Braiins 可能以"OS+ 专有"抗辩部分组件，
cgminer 上游公开部分 + 你自己 S19 解包的 bmminer 对比，足以支撑索源主张。）*

### 4. 不可取（明确排除）
- 反编译 C 直接粘贴进发布固件（衍生作品风险）
- 未经许可重新分发 bos-plus-api 的 proto 原文
- 绕过 Braiins 解锁/许可机制（license.rs/devfee 相关内容只用于理解机制，
  重写时不要实现它的规避路径）

## 各功能块的推荐路径

| 功能块 | 推荐 | 理由 |
|---|---|---|
| 调优状态机/梯度下降 | 净室重写 | 核心价值，算法思想不受版权保护 |
| 调压/温控/风扇 | 净室重写 + 接口对齐 | 接口（I2C 寄存器/协议）是事实标准 |
| EEPROM 解析 | 净室重写 | 数据格式对齐即可，格式用于你们自己的机型 |
| SV2 协议栈 | 用 SRI 开源库 | Braiins 自己也用生态实现 |
| cgminer API 兼容 | 净室重写 | 协议公开 |
| boser gRPC | 调用 or 索源后移植 | proto 无许可证是唯一障碍 |
| devfee/license | 只学机制，不复刻 | 商业组件 |
