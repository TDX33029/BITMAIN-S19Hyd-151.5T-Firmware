# 03 芯片数量检测（ASIC Count Detect）

上电后按链检测实际可通信的 ASIC 数量，与 `/etc/topol.conf` 中的期望值比对；
不一致会关闭该链 DC-DC 并把链标记为失效。这是“能不能正常出算力”的第一道关卡。

---

## 1. 期望值从哪来

```
config_parse_topol_conf 0x1eba4      // 解析 /etc/topol.conf
└─ config_parse_chain_topology 0x12650
     读取 chain 对象：
       chain_num         → DAT_0071c3ec   // 链数（检测循环上界由代码固定为 4）
       chain_row         → DAT_0071c3f0
       chain_column      → DAT_0071c3f4
       chain_asic_num    → DAT_0071c3fc   // 每链期望 ASIC 数
       domain_asic_num   → DAT_0071c400 附近
```

- `get_expected_asic_num 0x2002c` 直接返回 `DAT_0071c3fc`。
- `get_detected_asic_num 0x205b4` 读取每链结构体中的计数字节（见 §2）。
- `chain_asic_num` 是“整链 ASIC 数”，`domain_asic_num` 是每 domain 的数量，
  两者都会参与后续频率/工作量计算。

## 2. 链状态结构（FPGA 映射）

链信息位于 `DAT_0071c448`，每链步长 `0x210`：

| 偏移 | 类型 | 含义 |
|---:|---|---|
| `+0x00` | u8 | 链存在标志（1 = 检测到/启用） |
| `+0x01` | u8 | 本链检测到的 ASIC 数 |
| 其余 | — | 每链寄存器/统计区（0x210 字节） |

访问函数：

| 地址 | 名称 | 行为 |
|---|---|---|
| `0x201d8` | chain_present | 返回 `base[chain*0x210]` |
| `0x205b4` | get_detected_asic_num | 返回 `base[chain*0x210 + 1]`；必要时先触发一次读取（`0x1ea90`） |
| `0x2013c` | set_chain_present | 写 `base[chain*0x210]`，并维护全局链计数 `DAT_0071c444` |

## 3. 检测主流程 0x37218

对 `chain = 0..3`：

```
if (!chain_present(chain)) continue;

attempt = 0;
do {
    chain_gpio_power_on(chain);      // 0x4b29c：GPIO 0xD 置 bit(chain)
    sleep(3);                        // 固定 3 秒，等链上电稳定
    pic_enable_dcdc(chain);          // 0x4c050
    delay_ms(1000);

    if (DAT_0008a844) {              // 调试开关：等待按键
        print("pic enabled for chain %d, press anykey to continue...");
        getchar();
    }

    chain_gpio_power_off(chain);     // 0x4b2e4：GPIO 0xD 清 bit
    delay_ms(200);
    chain_gpio_power_on(chain);
    sleep(1);
    chain_gpio_power_off(chain);
    delay_ms(200);

    chain_scan(chain, 0);            // 0x2f808：触发一轮扫描/等待 nonce
    found    = get_detected_asic_num(chain);
    expected = get_expected_asic_num();
    print("Chain[%d]: find %d asic, times %d", chain, found, attempt);

    attempt++;
    if (found != expected)
        pic_disable_dcdc(chain);     // 0x4c224，准备下一轮重新上电

} while (found != expected && attempt != 3);

if (expected != found) {
    print("Chain %d only find %d asic, will power off hash board %d");
    pic_disable_dcdc(chain);
    set_chain_present(chain, 0);
    result = -1;
}
```

要点：

- **最多 3 轮**，每轮都完整断电/上电一次（GPIO 0xD + DC-DC），不是简单重读计数。
- 每轮固定耗时约 `3 s + 1 s + 1.2 s + 扫描`，4 条链最坏情况会明显拉长启动时间。
- `DAT_0008a844` 是调试等待开关，量产固件为 0。
- 失败会把链从“存在”表中清除，后续调度/统计不再包含该链。

## 4. 辅助函数

| 地址 | 名称 | 作用 |
|---|---|---|
| `0x2f808` | chain_scan | 向 FPGA 发扫描命令 `0x20c04`，轮询 nonce/工作量，判断本轮是否有响应 |
| `0x37160` | chain_bad_asic_probe | 逐 ASIC 探测：对第 i 个 ASIC 单独扫描，用于定位 `bad asic is %d` |
| `0x4b29c` | chain_gpio_power_on | GPIO 0xD 对应 bit 置 1 |
| `0x4b2e4` | chain_gpio_power_off | GPIO 0xD 对应 bit 清 0 |
| `0x34a5c` | delay_ms | `clock_gettime` + 纳秒换算的毫秒延时 |

`chain_scan 0x2f808` 内部还会读取 `DAT_00722a08` 中的 nonce 表，按
`chain_asic_num × domain_num × 5` 估算应得工作量，低于阈值判定本轮无效。

## 5. 函数清单

| 地址 | 名称 | 作用 |
|---|---|---|
| `0x37218` | chain_asic_detect | 检测主流程（3 轮 × 4 链） |
| `0x37160` | chain_bad_asic_probe | 逐 ASIC 探测坏片 |
| `0x2f808` | chain_scan | 单链扫描/等待响应 |
| `0x201d8` | chain_present | 读链存在标志 |
| `0x205b4` | get_detected_asic_num | 读检测到的 ASIC 数 |
| `0x2002c` | get_expected_asic_num | 读期望 ASIC 数（配置） |
| `0x2013c` | set_chain_present | 写链存在标志并维护计数 |
| `0x12650` | config_parse_chain_topology | 解析 chain 拓扑/数量配置 |
| `0x1eba4` | config_parse_topol_conf | 解析 `/etc/topol.conf` |
| `0x4b29c` | chain_gpio_power_on | 链电源 GPIO 置位 |
| `0x4b2e4` | chain_gpio_power_off | 链电源 GPIO 清零 |
| `0x34a5c` | delay_ms | 毫秒延时 |
| `0x4c050` | pic_enable_dcdc | 使能 DC-DC（同 02） |
| `0x4c224` | pic_disable_dcdc | 关闭 DC-DC（同 02） |
| `0x1ea90` | chain_runtime_init | 按 `chain_num` 分配链状态结构（calloc `chain_num × 0x210`） |
| `0x20c04` | chain_cmd_broadcast | 向指定链（或 `0xFF` = 全部）广播 FPGA 命令 |

## 6. 改造提示

1. **改期望数量**：优先改 `/etc/topol.conf` 的 `chain_asic_num`（以及 `domain_asic_num`），
   不必动二进制；若配置不可控，再改 `0x2002c` 的返回值。
2. **缩短启动时间**：`sleep(3)`、`delay_ms(1000)`、`delay_ms(200)`、重试次数 `3`
   都是硬编码，可分别定位后调整；重试次数比较在 `0x37218` 的 `iVar1 != 3`。
3. **换 ASIC 型号**：只要“每链数量”一致，检测逻辑本身不区分型号；
   型号差异体现在 `chain_scan` 的 FPGA 命令和频率/工作量换算，不在本块。
4. **调试单链**：把 `DAT_0008a844` 置 1 可在每轮使能 DC-DC 后暂停等待按键，
   便于示波器/万用表测量；量产必须保持 0。
5. **失败策略**：当前是“关 DC-DC + 清除链标志”，不会重启整机；
   若希望坏链自动重试，应改 `0x37218` 尾部逻辑而不是外层调用者。
