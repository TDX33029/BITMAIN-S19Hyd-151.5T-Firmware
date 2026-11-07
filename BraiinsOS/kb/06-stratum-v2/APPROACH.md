# 06 Stratum V2 协议栈——思路方法

## 解决的问题

Stratum V1 明文、中间人可篡改区块模板。SV2 引入 Noise 加密 + 矿工本地
选模板（SRI, Stratum Reference Implementation 生态）。

## Braiins 的实现结构（模块路径证据）

```
bosminer/src/client/
├── stratum_v1.rs            V1 客户端（兼容）
├── stratum_v2.rs            SV2 主客户端
│   ├── connectors/insecure.rs   明文调试通道
│   ├── connectors/noise.rs      Noise_NX 握手（snow 库）
│   ├── connectors/v1.rs         V1-over-桥（过渡部署）
│   └── extension.rs             扩展协商
```
`bosminer-plus/src/bos_mgmt/stratum2.rs`——SV2 管理面（配置/状态同步）。

## 思路要点

1. **连接器抽象**：同一客户端核心跑三种传输（insecure/noise/v1-bridge），
   现场可灰度迁移协议——传输与逻辑解耦的标准做法
2. **双实现并存**：`stratum_v1.rs` 不删，矿场 V1/V2 池子混合时的现实选择
3. braiins 自己是 SRI 贡献者——协议实现细节应以 SRI 规范为准（公开资料），
   反编译用于确认它的选项配置（如 authority public key 处理、job declaration 通道）

## 重写要点

SV2 **建议直接用 SRI 开源库**（ BRAIINS 参与的公开实现），不要自己从反编译重写协议栈——
这个块的学习价值在"连接器抽象 + 双协议并存"的工程结构，不在协议本身。
