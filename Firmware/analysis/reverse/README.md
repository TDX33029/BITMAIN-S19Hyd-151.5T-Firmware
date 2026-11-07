# S19 Hydro 固件逆向基线（bmminer / cgminer / WebUI）

> 目标：判断哪些部分能"恢复成源码"，并把算力板控制、Web UI 两条改造路径落到可操作的地址/文件上。
> 前置成果见 `../../Unpacked/REPORT.md`（容器、签名链、BOOT.bin、内核、根文件系统）。

---

## 1. 结论：分层看"能不能拿到源码"

| 层次 | 对象 | 源码可得性 | 说明 |
|---|---|---|---|
| Web UI 前端 | `/www/pages/*.html`、`js/`、`i18n/`、`static/` | **100% 源码**（HTML/JS/CSS 明文） | 直接改，无需逆向 |
| Web UI 后端 | `/www/pages/cgi-bin/*.cgi`（22 个） | **100% 源码**（全部是 shell 脚本） | 直接改；本质是 `cgminer-api` 的封装 |
| 系统/启动/升级 | `/etc/init.d/*`、`Update.sh`、`bitmain_logrotate` | **100% 源码**（shell） | 直接改 |
| 升级工具 | `/usr/bin/FileParser` | 二进制，**无符号**（15.7 KB） | 逻辑简单，可反编译到近似源码 |
| 矿机主程序 | `/usr/bin/bmminer`（429,356 B） | **只有二进制**：ARM32 ET_EXEC、已 strip（无 `.symtab`/DWARF），仅 `.dynsym` | 可恢复函数边界、字符串、调用图；**C 源码不能自动还原**，需反编译后人工重写 |
| 旧版矿机程序 | `/usr/bin/cgminer`（297,636 B） | 同上 | 仅含 `bitmain_c5`（S9 世代）驱动，S19 Hydro 的控制逻辑不在这里 |
| 内核 | `uImage` → `vmlinux.bin` | 配置可 100% 还原（IKCONFIG 已导出）；源码需匹配 Xilinx 4.6 树 | Bitmain 改动集中在驱动/设备树 |
| 内核模块 | `bitmain_axi.ko`（7.4 KB）、`fpga_mem_driver.ko`（7.9 KB） | 二进制，小 | 只是把 FPGA 寄存器窗口 `mmap` 给用户态，逻辑很少 |
| PL 逻辑 | `bitstream.bin` | **不可逆**（无法从 bitstream 还原 Verilog） | 只能通过寄存器接口适配，不能改逻辑 |

**一句话**：WebUI 和升级/启动流程是"真源码"，可以直接改；算力板控制的核心在 `bmminer` 里，
属于"可逆向、可打补丁、可按函数重写"，但不是一键反编译出可编译工程。

### 重要背景：bmminer 是 cgminer 的分支

`bmminer` 保留了 cgminer 的骨架（stratum、API、work 管理、日志、`--bitmain-*` 选项），
只是把驱动层换成了 Bitmain 私有实现。这意味着：

- **非驱动部分**（stratum 协议、4028 API 服务、配置解析、统计上报）可以对照公开的
  cgminer 4.9.x 源码理解，几乎不用逆向；
- **需要逆向的只有 Bitmain 私有层**：`driver-btm-api`（链/ASIC/PIC/ADC/温度/风扇/电压）。

因此实际工作量集中在下面第 3 节那 30 来个函数上，而不是 969 个函数。

---

## 2. 已生成的分析产物

| 文件 | 内容 |
|---|---|
| `bmminer_functions.json` | 969 个函数：地址、大小、引用的 `.rodata` 字符串、BL 调用目标 |
| `bmminer_strings_by_function.md` | 按函数聚合的可读字符串视图（Top 60） |
| `cgminer_functions.json` | 441 个函数，同上（从 ext2 镜像内存读取，未落盘） |
| `cgminer_strings_by_function.md` | 同上 |

生成方式（`../bmminer_map.py`）：

```bash
cd Firmware
python -I analysis/bmminer_map.py Unpacked/minerfs.d/rootfs/usr/bin/bmminer analysis/reverse
python -I analysis/bmminer_map.py --ext2 Unpacked/minerfs.d/ramdisk.ext2 /usr/bin/cgminer analysis/reverse
```

方法说明（也是精度边界）：

- 函数起点用 ARM 序言 `push {..., lr}` 识别（`w & 0xFFFF4000 == 0xE92D4000`）；
  叶子函数（不压栈）和 `push` 前有栈调整的函数会漏检，所以 969 是**下界**。
- 字符串引用靠扫描 `.text` 里的字面量池（指向 `.rodata` 的 32 位字），
  再二分归到所属函数；通过寄存器间接加载的字符串会漏。
- 调用图只统计 `BL` 且目标落在已识别函数起点的情况；`BLX`/函数指针调用不计。
- 所以这张表适合**定位**（"哪个函数在处理 PIC/温度/电压"），不适合当作完整反汇编。

> `cgminer` 落盘会被 Windows Defender 隔离（已发生两次）。分析脚本用 `--ext2` 直接从
> `ramdisk.ext2` 内存读取，不需要文件存在。若确实要落盘，需给 `Firmware\` 加杀软排除目录。

---

## 3. bmminer 控制面函数表（重点）

> **地址已按 Ghidra 修正**：下列地址中部分比启发式结果偏移 4 字节（`pic_get_voltage` 等），
> `bitmain_set_voltage_by_n` 旧值 `0x4ff74` 实为函数间隙，正确入口是 `0x4fff4`。
> 权威清单见 `bmminer_functions_ghidra.csv`，环境见 `ghidra_env.md`。

地址均为链接地址（`0x8000` 起 load base 的虚拟地址），可直接在反汇编器里跳转。

### 3.1 PIC（16F1704）与升级 —— 与你现有 PIC 烧录项目直接相关

| 地址 | 大小 | 关键字符串 | 作用 |
|---:|---:|---|---|
| `0x4d3e0` | 1608 | `upgrade_pic`、`_bitmain_pic_erase_1704`、`_bitmain_pic_write_1704`、`_erase_pic_app`、`_update_pic_app_program_1704` | **PIC 固件升级主流程**：擦除 → 写入 → 校验 → 启动 APP。适合作为 ICSP 时序/协议参考 |
| `0x4bad4` | 516 | `get_pic_version`、`_bitmain_pic_get_sw_ver_common` | 读 PIC 软件版本 |
| `0x4bcd8` | 420 | `reset_pic` | 复位 PIC |
| `0x4be7c` | 472 | `_bitmain_pic_start_app_common` | 让 PIC 从 bootloader 跳 APP |
| `0x4c3f4` | 460 | `send_pic_heart_beat`、`_bitmain_pic_heart_beat_common` | 心跳（掉链检测依据） |
| `0x4c054` / `0x4c228` | 468 / 460 | `enable_dc_dc` / `disable_dc_dc` | 开/关 DC-DC（算力板供电使能） |
| `0x4da28` | 812 | `pic_read_iic`、`_pic_read_iic` | 经 PIC 读 I²C（EEPROM/传感器） |
| `0x4dd54` | 956 | `pic_write_iic` | 经 PIC 写 I²C |

### 3.2 电压 / 电流 / ADC

| 地址 | 大小 | 关键字符串 | 作用 |
|---:|---:|---|---|
| `0x4ca7c` | 968 | `pic_get_voltage`、`_read_an_voltage`、`_read_an6_voltage` | 读 PIC ADC 通道得到的电压 |
| `0x4ff74` | 884 | `bitmain_set_voltage_by_n` | 按板号设置电压（逐链校准） |
| `0x50390` | 732 | `bitmain_set_voltage` | 设置电压（统一入口） |
| `0x506f8` | 876 | `bitmain_get_voltage` | 读回电压 |
| `0x44310` | 3876 | `check_adc_voltage`、`dump_adc_voltage` | ADC 巡检/告警（过压/欠压判定） |

### 3.3 温度

| 地址 | 大小 | 关键字符串 | 作用 |
|---:|---:|---|---|
| `0x18dcc` | 3388 | `read_sensor_on_pic`、`dump_temp_info` | 读 PIC 侧温度传感器（板级） |
| `0x171b4` | 1068 | `I2A_deal_temp_from_respone` | 解析 PIC 温度应答帧 |

### 3.4 链 / ASIC / UART / 频率

| 地址 | 大小 | 关键字符串 | 作用 |
|---:|---:|---|---|
| `0x46a84` | 1160 | `check_how_many_uart_data_in_fpga` | 查询 FPGA 里待取 UART 数据量 |
| `0x46f0c` / `0x472ec` / `0x4782c` | 312 / 588 / 260 | `clear_uart_tx_fifo`、`uart_send`、`clear_uart_rx_fifo` | 链上 UART 收发（ASIC 命令通道） |
| `0x2a3a4` | 832 | `_tuning_freq_dump_nonce_info` | 频率调优中的 nonce 统计（降频/提频决策） |
| `0x1cd50` | 532 | `power_init` | 上电初始化序列 |

### 3.5 EEPROM / 序列号

| 地址 | 大小 | 关键字符串 | 作用 |
|---:|---:|---|---|
| `0x49a1c` / `0x49ab8` / `0x49c14` | 156 / 348 / 348 | `eeprom_close`、`eeprom_write`、`eeprom_read` | 板载 EEPROM 读写（型号/SN/校准） |

### 3.6 对外 API 字段（WebUI 数据源）

`0x21368` – `0x22798` 连续一组小函数，每个对应 cgminer API 的一个字段：

```
api_miner_chain_num / _frequency / _rate_ideal / _rate_real / _asic_num
api_miner_chain_asic_status / _temp_pic / _temp_chip / _temp_pcb
api_miner_chain_rate_array / _hw / _nonce / _eeprom / _sn
api_miner_fan_num / _fan_speed
```

改 WebUI 显示或新增字段时，**先看这里**：新增字段需要在 bmminer 里挂到 `stats` 输出，
否则前端只能显示已有字段。

### 3.7 风扇

风扇没有独立的导出函数名，逻辑内联在温度控制循环里，特征字符串：

```
fan[%u] speed[%u]        fan_eft : %d  fan_pwm : %d
max temp = %04d, diff = %04d, + pwm form %04d to %04d
fan_etf: Set fixed fan speed=%d
ERROR_FAN_LOST           Error, fan lost, only find %d (< %d)
```

定位方法：在 `bmminer_strings_by_function.md` 里搜 `fan_eft`，取所属函数地址。
手动验证可用 `--bitmain-fan-pwm <0-100>` / `--bitmain-fan-ctrl` 命令行选项。

---

## 4. WebUI 改造路径（无需逆向）

服务是 lighttpd，根目录 `/www/pages`；页面通过 `cgi-bin/*.cgi` 调 `cgminer-api`。
CGI 全部是 shell，例如 `stats.cgi` 完整内容就是：

```sh
echo
echo
cgminer-api -o {"command":"stats","new_api":true}
```

现有 CGI 清单（22 个）：

```
blink  chart  create_log_backup  dlog  get_blink_status  get_droa
get_miner_conf  get_network_info  get_system_info  hlog  log  miner_type
passwd  pools  reboot  reset_conf  set_miner_conf  set_network_conf
stats  summary  upgrade  upgrade_clear
```

三种改法，按侵入性排序：

1. **只改显示/交互**：直接改 `www/pages/*.html` + `js/`。零风险，改完刷新即可。
2. **改数据来源**：改 `cgi-bin/*.cgi`（shell），可以调 `cgminer-api`、读 `/config`、
   读 sysfs、调自写脚本。需要注意 BusyBox ash 语法。
3. **新增字段**：需要 bmminer 侧提供（见 3.6），或由 CGI 自行从 `/sys`、日志、自写守护进程汇总。

### 改完怎么生效

- **设备上直接改**（推荐调试期）：SSH 登录后编辑 `/www/pages/...`，lighttpd 无需重启。
  注意根文件系统可能是 UBIFS 只读挂载，需要 `mount -o remount,rw /`。
- **重打包固件**（量产/分发）：替换 `minerfs.d/rootfs` 内文件 → 重新生成 ext2 →
  gzip → 套 64 字节 uImage 头 → 替换 `.bmu` 内 `minerfs.image.gz`。
  **但这会破坏 `.bmu` 的 RSA 签名**，官方 `FileParser` 会拒刷；需要走
  "设备上改" 或自建升级通道（U-Boot/网络启动/直接写 mtd1）。

---

## 5. 二进制的改造方式（bmminer）

| 方式 | 适用 | 代价 |
|---|---|---|
| 常量/阈值打补丁 | 改电压上限、温度阈值、风扇曲线参数、超频档位 | 低。定位到 `LDR` 字面量或 `CMP` 立即数，等长替换；ARM 固定 4 字节指令，好改 |
| 分支打补丁 | 跳过某项检查（如 fan lost 关机、ASIC 数量不匹配关机） | 中。把条件跳转改成 `NOP`/无条件跳转；注意别破坏栈平衡 |
| 函数替换（hook） | 换传感器型号、换 PIC 协议、改电压算法 | 高。可在函数入口写 `B` 到自己的代码洞（需找 padding 或扩段），或用 `LD_PRELOAD` 拦截 libc/驱动调用 |
| 重写驱动层 | 彻底适配新器件 | 最高，但最干净：保留 cgminer 骨架，只重写 `driver-btm-api` 等价层 |

打补丁的前提是**先有伪代码**。当前环境没有 Ghidra/IDA/radare2，只有 capstone/unicorn，
所以下一步建议装 Ghidra（免费，支持 ARM），导入 `bmminer` 后按第 3 节地址逐个反编译。

---

## 6. 建议的下一步（按你的目标排序）

1. **明确要适配的器件**（风扇？温度传感器？PIC 型号？电压芯片？算力板型号？），
   这决定了只需要看第 3 节的哪几行。
2. 装 Ghidra，对 `bmminer` 的 6–8 个关键函数出伪代码：
   `upgrade_pic`、`pic_get_voltage`、`bitmain_set_voltage`、`read_sensor_on_pic`、
   `check_adc_voltage`、风扇控制循环、`uart_send`/`check_how_many_uart_data_in_fpga`。
3. 先用**运行时验证**降低风险：设备上 `strace`/`gdb`（若有）或直接读
   `/sys/class/gpio`、`/dev/mem` 观察寄存器，确认函数行为再改。
4. WebUI 侧可以先独立动手：它不依赖逆向，改完即可验证。

---

## 7. 已知限制

- `bmminer` 无符号表，函数名来自字符串**推断**，不是真实符号；同一函数内的字符串
  不代表该函数一定实现该功能（可能只是日志）。
- 969 个函数是下界；`push` 之外的序言（`sub sp, sp, #N` 后直接使用）未覆盖。
- `cgminer` 与 `bmminer` 的关系尚未完全确认：启动脚本两个都拉起，但只有 `bmminer`
  含 S19 Hydro 的链/PIC/温度代码，`cgminer` 仅含 `bitmain_c5`（S9 世代）。
  实际绑定 4028 端口的进程需在设备上 `netstat -lntp` 确认。
- PL bitstream 不可逆，FPGA 寄存器语义只能通过 bmminer 的读写序列反推。
- 修改根文件系统会破坏 `.bmu` 整体签名；仅设备本地修改不受影响。
