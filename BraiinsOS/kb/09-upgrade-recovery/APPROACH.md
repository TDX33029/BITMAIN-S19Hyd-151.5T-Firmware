# 09 升级与恢复（Upgrade / Recovery）——思路方法

> NAND 分区图与两阶段安装详见 `../BOS_FW_REPORT.md` 3.1/3.2 节。此处讲机制设计。

## 思路要点

### 1. per-partes 升级（逐级过渡）

`transitional_am3_aml` 等中间镜像 + `UPGRADE_FW_REQUIRE`（跨大版本门槛）+
`UPGRADE_FW_MAJOR`（降级限制：大版本内自由降，跨版本需 factory reset）。
命令行开关 `force_disable_per_partes` / `force_sysupgrade`。
**学点：宁可多跳几级，也不做"任意版本直升"——每级的迁移逻辑都真实测试过。**

### 2. 首启回滚（recover-to-stock）

恢复标志 `RW flags @0xC300000`：INSTALLED / FIRST_BOOT。
首启失败 → U-Boot 用 0x5300000 备份还原股票 uImage（mtd1 股票 ramfs 全程未动）。
`S97recovery-flag` init 脚本 + `S97bosminer-detect`。
**"永久安全退路"是用户敢装你固件的心理基础。**

### 3. 升级包即脚本

`COMMAND` 文件是可读 shell（版本门槛检查 / NAND 块参数 / 校验重试逻辑全在里面），
`nand_env` 是 U-Boot 环境镜像，写前 `nanddump` 读回验证。
升级工具链（nandwrite/flash_erase/fw_setenv）随包携带——**目标机不需要预装任何工具**。

### 4. BOS_MODE 五态

`UPGRADE / RECOVERY / SD / NAND / EMMC`（toolbox proto 枚举）——
同一 rootfs 以不同模式引导，RECOVERY 模式专门用于救援。

## 重写要点

1. 升级脚本保持可读 shell + 显式版本门槛
2. 备份-标志-回滚三件套的布局直接参考（偏移在 BOS_FW_REPORT.md）
3. 写后读回验证（nanddump 比对）是 NAND 操作的底线
4. 你的固件也留一个等价 FIRST_BOOT 标志位——成本一小时，收益是用户信任
