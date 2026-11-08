# S19 WebUI「不自动刷新」问题分析报告

- 目标固件：`Firmware/S19/Antminer-S19-Hydro-release-202212170935.bmu`
- 分析对象：WebUI 备份 `Firmware/S19/analysis/webui_backup/`（原版产物未做任何修改）
- 分析日期：2026-11-08
- 结论：WebUI 里有**两条独立的「不刷新」路径**：
  1. **Miner Log 页**（本次现场观察到的现象）：页面**完全没有轮询**，只在打开/切标签时取一次日志，所以必须退出重进才能看到新日志（P0-3）。
  2. **Dashboard 仪表盘**：有 15s 轮询，但刷新链没有容错、定时器没有生命周期管理、请求没有超时，任何一次 CGI 异常/页面切换/API 卡顿都会表现为「停在旧数据上不再刷新」（P0-1、P0-2、P1-1）。

---

## 0. 结论摘要（TL;DR）

| 编号 | 缺陷 | 后果 | 严重度 |
|---|---|---|---|
| P0-3 | **Miner Log 页（blog 包）没有任何定时器**：只在 `created()` / `mounted()` / 切标签时各取一次 `/cgi-bin/log.cgi` | 打开后永远显示打开那一刻的快照；新日志必须「退出重进」或切一次标签才出现（与用户观察到的现象一致） | P0 |
| P0-1 | 一次 tick 内串行调用 4 个取数函数，无 try/catch；`getMinerData()` 失败返回 `[]`（truthy），`doMinerData()` 访问 `t.INFO.type` 抛 TypeError | 抛错点之后的 `doStatus()`/`drawLine()` 全部不执行 → 算力/拒绝率/运行时间/曲线冻结；首次加载时若抛在 `mounted()` 里，`this.timer()` 根本不会执行 → **整页永不自动刷新** | P0 |
| P0-2 | `timer()` 的 `setInterval` 句柄直接丢弃，`destroyed()` 不清理，页面切换用 `$.load()` 直接换 DOM，从不 `$destroy()` | 每次进入 Dashboard 新增一个 Vue 实例 + 一个 15s 轮询，旧的永不停止；离开页面后仍在后台打 CGI；多次往返后浏览器卡顿、曲线被多个 echarts 实例抢同一个 `#line` 节点 | P0 |
| P1-1 | `pools/stats/chart` 三个请求 `async:false` 且没有 timeout；`cgminer-api` 只有 `socket/connect/send/recv/close`，无任何 socket 超时 | bmminer API 一次不响应，浏览器主线程被同步 XHR 锁死 → 页面点不动、也不刷新 | P1 |
| P1-2 | 顶栏「刷新时间」由客户端 `new Date()` 生成，并由独立的 `get_system_info.cgi` 轮询驱动，与仪表盘数据无关 | 数据冻结时时间戳照样跳，用户无法判断数据是否已过期（实测 D 段：算力冻结，时间戳照常更新） | P1 |
| P2-1 | 只有裸 `setInterval`，无 `visibilitychange`/focus 处理 | 后台标签页被 Chrome 节流到 ≥1 分钟，移动端可能挂起；切回前台最长 1 分钟看到旧值 | P2 |
| P2-2 | 轮询 GET 无 `cache:false`，CGI 响应无 `Cache-Control`/`ETag`；lighttpd 的 `expire.url=("/*html"=>...)` 覆盖不到 `.cgi` | 部分浏览器/中间代理可能复用旧 JSON | P2 |
| P3 | miner 页 `n.pools[i]` 对 i=0..2 不判空；`/static/favicon.ico` 404；`expire.url` 规则写法无效 | 配置少于 3 组矿池时矿池页脚本抛错、表单空白；控制台 404 噪声 | P3 |

---

## 1. 分析对象与方法

### 1.1 目录

```
analysis/webui_backup/
├── www/pages/           ← 从固件提取的原始 WebUI（只读，未改动）
├── etc/                 ← lighttpd / cgminer 启动脚本
├── _pretty/             ← 反美化后的 JS 副本（prettier，便于阅读）
├── _harness/            ← 复现环境（mock 后端 + Chrome 无头探测 + 打补丁脚本）
├── _fix/                ← 已打补丁的 WebUI 副本（可直接部署）
└── REFRESH_ISSUE_REPORT.md  ← 本报告
```

### 1.2 方法

1. 反美化 10 个 webpack 页面包（`_pretty/`）。
2. 静态追踪刷新链路：`index.html → index.7b063c.js → $.load(dashboard.html) → dashboard.f675cc.js → CGI → cgminer-api → bmminer`。
3. 用 Node 写 mock 后端（还原该 bmminer 的 JSON 结构：`STATUS` 是对象、`SUMMARY/STATS/POOLS/RATE` 是数组），注入 4 类故障（stats 失败、chart 失败、summary 失败、页面切换）。
4. 用 Puppeteer + 本机 Chrome 无头实测 DOM 变化、活跃定时器数量、每 15s 的 CGI 调用次数、页面异常。
5. 在副本上打补丁后，用同一套探测脚本复测。

> 复现环境只服务 `www/pages` 的副本，不写原目录；所有结论都可用 `_harness/` 重跑。

---

## 2. 正常时的刷新链路

```
index.html
 └─ index.7b063c.js
     ├─ $(ready) → setInterval(n, 15s)            // 顶栏/页脚：get_system_info.cgi
     └─ loadInner(hash || "dashboard")
         └─ $("#content").load("dashboard.html")   // jQuery 插入 HTML 并同步执行包内 <script>
             ├─ jquery / echarts / vue 重新加载（每次都会重新执行一遍）
             └─ dashboard.f675cc.js
                 ├─ window.vm1 = new Vue({el:"#Dashboard"})
                 └─ mounted(): doPoolData → doMinerData → doStatus → timer()
                     └─ timer(): setInterval(15s):
                          doPoolData()  → /cgi-bin/pools.cgi    (同步 XHR)
                          doMinerData() → /cgi-bin/stats.cgi    (同步 XHR)
                          doStatus()    → /cgi-bin/summary.cgi  (异步, 30s 超时)
                          l.drawLine()  → /cgi-bin/chart.cgi    (同步 XHR) + echarts
```

CGI 层：`.cgi` 由 `cgi.assign = ( ".cgi" => "/bin/sh" )` 交给 `/bin/sh` 执行，脚本内部调用
`cgminer-api -o '{"command":"...","new_api":true}'`，连本机 bmminer 的 API 端口取 JSON。

对应代码位置（`_pretty/` 下）：

| 逻辑 | 文件:行 |
|---|---|
| `loadInner`（页面切换，无销毁） | `index.7b063c.pretty.js:129-132` |
| 顶栏 15s 轮询 | `index.7b063c.pretty.js:1156-1228` |
| 首次加载路由 | `index.7b063c.pretty.js:1361-1363` |
| `mounted()` / `destroyed()` / `timer()` | `dashboard.f675cc.pretty.js:976-999` |
| `doStatus()` | `dashboard.f675cc.pretty.js:1001-1041` |
| `doPoolData()` | `dashboard.f675cc.pretty.js:1043-1070` |
| `getMinerData()` / `doMinerData()` | `dashboard.f675cc.pretty.js:1072-1130` |
| `getLineData()` / `drawLine()` | `dashboard.f675cc.pretty.js:1135-1290` |

---

## 3. 问题详述

### P0-1 轮询链无隔离，单点失败让主面板停止刷新

**代码**

```js
// dashboard.f675cc.pretty.js:993-999
timer() {
  return setInterval(() => {
    (this.doPoolData(), this.doMinerData(), this.doStatus(), l.drawLine());
  }, 15e3);
}
```

```js
// dashboard.f675cc.pretty.js:1072-1088
getMinerData() {
  var t = [];                       // ← 失败时的哨兵是空数组
  return ($.ajax({ ..., async: !1,
    success: function (e) { "S" === e.STATUS.STATUS && (t = e); },
    error: function () {} }), t);
}
doMinerData() {
  var t = this.getMinerData(), e = this;
  if (t) {                          // ← [] 是 truthy，判断失效
    e.minerType = t.INFO.type,      // ← TypeError: undefined.type
    ...
```

**根因**

1. 4 个取数函数在同一个 `setInterval` 回调里顺序执行，**没有 try/catch**。前一个抛错，后面的全部跳过。
2. `getMinerData()` 在失败（网络错误、`STATUS !== "S"`、JSON 解析失败）时返回 `[]`，而 `if (t)` 对 `[]` 恒真 → `t.INFO.type` 必然抛 `TypeError`。
3. `doMinerData` 排在 `doStatus` 前面，所以 `stats.cgi` 一失败，**算力/拒绝率/运行时间（summary）和曲线（chart）就都不刷新了**，尽管 `summary.cgi` 完全正常。
4. 首次加载时 `mounted()` 的顺序是 `doPoolData → doMinerData → doStatus → timer()`。如果 `doMinerData` 在挂载时抛错，**`this.timer()` 根本不会执行**——整页从此再也不自动刷新，只有手动 F5 才行。这条路径已实测复现：当 `stats.cgi` 在挂载阶段失败时，页面只剩顶栏那 1 个 interval，仪表盘不再发出任何取数请求。
5. `doStatus` 里同样的模式：`if ("S" === n.STATUS.STATUS)`，如果 CGI 返回空对象/`null`，`n.STATUS` 直接抛错；`doPoolData` 同理；`drawLine` 在 `chart.cgi` 无数据时访问 `t.series.length` 抛错。

**实测（原版）**

- 注入 `stats.cgi` 失败、`summary.cgi` 正常：17 秒内 `summary.cgi` 调用 **0 次**，算力面板保持 `151232.00 GH/s` 不变，而顶栏时间戳照常走；控制台出现 3 个 `TypeError: Cannot read properties of undefined (reading 'type')`。
- 首次加载注入 `chart.cgi` 失败：`drawLine` 抛 `TypeError ... (reading 'length')`，曲线永远不初始化。

**影响**：bmminer 在启动、链重启、降频、温度保护期间，`stats`/`pools` 这类命令短时返回错误是常态。这本应只是「某一块数据暂时没有」，实际却导致整个仪表盘冻结且无任何提示。

---

### P0-2 定时器泄漏：切换页面后旧轮询永不停止

**代码**

```js
// dashboard.f675cc.pretty.js:985-991
destroyed() {
  (this.summaryData.length = 0, this.poolData.length = 0,
   this.minerData.length = 0, this.fanData.length = 0,
   this.chainDataArr.length = 0);
}                                   // ← 没有 clearInterval
```

```js
// index.7b063c.pretty.js:129-132
loadInner: function (n) {
  var t = n + ".html";
  $("#content").load(t);           // ← 直接换 DOM，不 $destroy() 旧实例
}
```

**根因**

1. `timer()` 返回的 interval id 被丢弃，没有任何地方保存或清理。
2. `destroyed()` 只清数组，即使被调用也停不掉定时器。
3. 页面切换走 jQuery `.load()`：它把 `#content` 的 HTML 整体替换，**不会触发 Vue 的销毁流程**；`dashboard.html` 里的 `<script>` 又会被 jQuery 的 `_evalUrl` 同步重新执行，于是每进一次 Dashboard 就新建一个 `Vue` 实例和一个 15s 轮询，旧实例的闭包和定时器全部留在内存里继续跑。
4. 旧轮询的 `drawLine()` 用 `document.getElementById("line")` 取节点，切回来后会取到**新页面**的 `#line`，多个 echarts 实例往同一个节点上画。

**实测**

| 场景 | 原版 | 修复后 |
|---|---|---|
| 停留在 Dashboard | 2 个 interval（顶栏 + 页面） | 2 个 |
| 切到 Miner 页 16 秒内 | 仍在打 `stats.cgi` 1 次、`summary.cgi` 1 次 | **0 次** |
| Dashboard 往返 1 次 | 3 个 interval，16 秒内 2 次 summary | 2 个 interval，1 次 |
| Dashboard 往返 4 次 | **6 个 interval**（线性增长） | **2 个**（恒定） |

**影响**：矿机是低功耗 ARM，每个 tick 会 fork 4 个 `sh` + 4 个 `cgminer-api` 进程；多次切换后成倍放大，页面越用越卡、曲线抖动，最终表现为「页面卡住了/不刷新了」。

---

### P0-3 Miner Log 页没有自动刷新（本次现场观察到的现象）

**现象**：点进 “Miner Log” 后，日志停在被打开的那一刻；后续新产生的日志必须退出重进（或切换一次 clog/hlog 标签）才能看到。

**代码**

```js
// blog.07d12d.pretty.js:991-1005
created() {
  this.getLogInfo(this.currentTab);      // 只取一次（clog）
},
mounted() {
  const e = this;
  (window.onresize = ...,
   this.getLogInfo("dlog"));             // 再取一次 dlog 列表
},
// 1008-1010
switchTab(e) {
  ((this.currentTab = e), this.getLogInfo(this.currentTab));  // 切标签才取
},
// 1036-1038
setText(e) {
  ("clog" !== this.currentTab && "hlog" !== this.currentTab) ||
    $(".log-content").text(e);           // 一次性整体替换
},
```

整个 `blog.07d12d.js` 里**没有任何 `setInterval` / `setTimeout` 轮询**（grep 结果只有公共 util 里的 toast 超时）。
`/cgi-bin/log.cgi` 每次返回的是 `dmesg` + `/var/log/miner.log*` 的完整内容，
CGI 本身也不做增量，所以页面只能靠「重新打开」触发一次新的完整拉取。

**实测（mock 日志每次请求追加一行）**

| | 原版 | 修复后 |
|---|---|---|
| 打开 Miner Log 后 12s 内 `/cgi-bin/log.cgi` 请求数 | **0** | **1**（10s 轮询） |
| 日志尾部标记是否变化 | 否（`#4` → `#4`） | 是（`#2` → `#3`） |
| 切 hlog 标签 | 会刷新 | 会刷新 |
| 离开页面后 12s 内请求数 | 0 | 0（定时器随页面销毁） |

**注意**：这和 Dashboard 的 P0-1/P0-2 是两条独立的代码路径，Dashboard 的修复**不能**解决日志页的问题，反之亦然。



**前端**

```js
// pools / stats / chart 三个请求都是同步的，且没有 timeout
$.ajax({ url: "/cgi-bin/stats.cgi", dataType: "json", type: "GET",
         async: !1, processData: !1, contentType: !1, ... })
```

同步 XHR 会阻塞浏览器主线程：请求不返回，页面就不能滚动、不能点击、不能重绘，定时器也不会跑——表现就是「整个 WebUI 卡死，更谈不上刷新」。

**后端**

对 `cgminer-api`（`analysis/reverse/full_aux/cgminer-api/decompiled/10b4c_FUN_00010b4c.c`）的调用链核对：

- 只用到了 `socket / connect / send / recv / close`；
- 没有 `select/poll/setsockopt/alarm`，**没有任何 socket 超时**；
- `recv` 循环虽然会用 `realloc` 正确收完大包（这一点没问题），但 bmminer 不返回数据时它会**永久阻塞**；
- CGI 本身是 `/bin/sh` 脚本，lighttpd 也没有配置 CGI 超时。

也就是说：bmminer 的 API 线程只要有一次不响应（例如链重启期间），`cgminer-api` 挂着、CGI 挂着、浏览器主线程也挂着。这是「点不动、也不刷新」最直接的成因。

> 注：同步 XHR 不能设置 `timeout`（浏览器会抛 `InvalidAccessError`），所以正确做法是把这三个请求改成异步（见 §5.2），而不是简单加 timeout。

---

### P1-2 「刷新时间」是假时间戳

```js
// index.7b063c.pretty.js:1168-1175
var t = o.a.getCurrentTime();     // new Date() —— 浏览器本地时钟
$("#refreshTime").text(t);
```

`getCurrentTime()`（`index.7b063c.pretty.js:689-710`）完全基于浏览器 `new Date()`，与设备时间、与数据是否真的取到都无关；它由顶栏独立的 `get_system_info.cgi` 轮询驱动。

实测 D 段：算力面板冻结在 `151232.00 GH/s`，`#refreshTime` 仍从 `11:53:23` 走到 `11:53:38`。**用户看到「时间在跳」，会以为页面在刷新，实际数据已经停止更新**——这正是「不自动刷新」最容易被误判的地方。

---

### P2-1 后台标签页节流 / 无 focus 刷新

只有裸 `setInterval`。Chrome 会把后台标签页的定时器节流到 ≥1 分钟（移动端可能整个挂起），切回前台后要等下一个 tick 才更新，最长空白 1 分钟。对「开着网页看矿机」的用法很常见。

---

### P2-2 无缓存控制

- 所有轮询都是 GET，jQuery 默认 `cache:true`，没有 `_=timestamp`；
- CGI 响应没有 `Cache-Control`/`Expires`/`ETag`/`Last-Modified`；
- lighttpd 里只有 `expire.url = ( "/*html" => "access 0 seconds" )`，而 `expire.url` 的 key 是 **URL 前缀**，`/*html` 匹配不到 `/index.html`，也覆盖不到 `/cgi-bin/*.cgi`。
- 结果：缓存策略实际未生效，行为完全交给浏览器启发式缓存，部分环境确实会复用旧 JSON。

---

### P3 其他顺带发现

1. **矿池页不判空**：`miner.d6054b.pretty.js:1042-1045` 对 `i=0..2` 直接取 `n.pools[i].url`。配置里不足 3 组矿池时（例如写入中断/手工改过 `cgminer.conf`），整页脚本抛错、表单空白。复现中 `pools: []` 即触发 `TypeError ... (reading 'url')`。
2. **favicon 404**：`index.html` 引用 `static/favicon.ico`，实际文件在 `pages/favicon.ico`，真机同样 404（仅控制台噪声）。
3. **fans 卡片删除逻辑**：`doStatus` 用「与末位交换再 pop」删除 `type==="fans"` 的卡片，前提是 fans 必须是倒数第二个；顺序变化会复制/丢卡片（当前 bmminer 顺序下恰好成立）。
4. **`destroyed()` 本身是死代码**：没有 `$destroy()` 调用，这个钩子永远不会执行。

---

## 4. 实测对照表

环境：mock 后端（还原 bmminer JSON 结构）+ 本机 Chrome 无头模式，15s 轮询。

| 用例 | 原版 | 修复后 |
|---|---|---|
| A. 正常停留 17s，算力是否变化 | 是（151261→151340） | 是 |
| A. 每 17s 的 summary 调用 | 1 | 1 |
| A. 活跃 interval 数 | 2 | 2 |
| B. 切到 Miner 页后 16s 内的 CGI 轮询 | **1 次 stats + 1 次 summary** | **0 次** |
| C. 往返一次后的 interval 数 | **3** | **2** |
| C. 往返一次后 16s 内 summary 调用 | 2 | 1 |
| C. 往返 4 次后的 interval 数 | **6** | **2** |
| D. `stats.cgi` 失败、`summary.cgi` 正常：算力是否继续刷新 | **否（冻结）** | **是** |
| D. 同期 summary 调用次数 | **0** | 1 |
| D. 页面异常数 | 3 × TypeError | **0** |
| E. 加载时 `chart.cgi` 失败 | 抛 TypeError | **0 异常，页面正常** |
| F. Miner Log 打开后 12s 内日志是否变化 | **否（0 次请求）** | **是（10s 轮询，1 次请求）** |
| F. 离开日志页后 12s 内日志请求 | 0 | 0（已停） |

> 原始数据：`_harness/probe_original.json`、`_harness/probe_fixed.json`；
> 往返压力测试：`_harness/probe_multi.js`（原版 2→6，修复后恒为 2）。

---

## 5. 解决方案

### 5.1 已实现补丁（可直接部署）

补丁只改三个文件，全部是「最小语义替换」，不重构打包结构。产物在 `_fix/pages/js/`：

| 文件 | 原 MD5 | 补丁后 MD5 |
|---|---|---|
| `index.7b063c.js` | `a21dc0811023e0de2c218e4b0b0f2974` | `b0ac28b0b8243d535bc86af80b4107ba` |
| `dashboard.f675cc.js` | `0af5d4ff7e1046025ad33c52ffa6e441` | `608657196dd404e660f2f5619ce5aa92` |
| `blog.07d12d.js` | `da5a21af81f2ad43a272f3f356918c66` | `1d02d3b94c35454ee61f14251229dfa1` |

共 13 处替换（`_harness/apply_fix.js` 可重放，幂等）：

1. **`loadInner` 先销毁旧页面实例**
   ```js
   // 原
   loadInner:function(n){var t=n+".html";$("#content").load(t)}
   // 新
   loadInner:function(n){var t=n+".html";
     try{window.vm1&&window.vm1.$destroy&&window.vm1.$destroy()}catch(e){}
     window.vm1=null;$("#content").empty().load(t)}
   ```
   → 切换页面时触发 Vue 的 `destroyed()`，定时器随之停止。

2. **`destroyed()` 清理定时器与监听**
   ```js
   destroyed(){clearInterval(this.__timer),this.__timer=null,
     this.__vis&&document.removeEventListener&&
       document.removeEventListener("visibilitychange",this.__vis), ...}
   ```

3. **`timer()` 保存句柄、逐面板隔离、后台跳过、回到前台立即刷新**
   ```js
   timer(){var t=this;
     t.__tick=function(){try{t.doStatus()}catch(e){}try{t.doPoolData()}catch(e){}
                         try{t.doMinerData()}catch(e){}try{l.drawLine()}catch(e){}};
     t.__vis=function(){document.hidden||t.__tick()};
     document.addEventListener&&document.addEventListener("visibilitychange",t.__vis);
     this.__timer=setInterval(function(){document.hidden||t.__tick()},15e3)}
   ```
   → 任一 CGI 失败只影响它自己那一块；`doStatus` 放到最前，算力/运行时间优先刷新。

4. **`mounted()` 同样逐面板 try/catch**
   → 即使首次加载某个 CGI 异常，`this.timer()` 也一定会执行，不会再出现「一进来就永不刷新」。

5. **`getMinerData()` 失败返回 `null`（而不是 `[]`），并按 `STATS/INFO` 结构校验**
6. **`doMinerData()` 只处理结构完整的 stats 响应**
7. **`doPoolData()` / `doStatus()` / `getLineData()` 增加空响应、缺字段保护**
8. **`drawLine()` 无 series 时直接 return，不再抛异常**
9. **所有轮询加 `cache:!1`**

**Miner Log 页（`blog.07d12d.js`）**

10. **把实例登记为 `window.vm1`**，让 `loadInner` 切换页面时能 `$destroy()` 它（否则日志页的定时器也会泄漏）
    ```js
    window.vm1 = new Vue({ el: "#blogPage", ... })
    ```
11. **新增 10s 日志轮询**：仅在 `clog`/`hlog` 标签、页面可见、没有在途请求时拉取
    ```js
    startLogRefresh(){                       // mounted() 末尾调用
      this.stopLogRefresh();
      this.logTimer = setInterval(() => {
        if (document.hidden) return;
        if (this.currentTab !== "clog" && this.currentTab !== "hlog") return;
        if (this.logBusy) return;
        this.getLogInfo(this.currentTab, true);   // true = 静默，不弹 loading
      }, 10000);
    }
    stopLogRefresh(){ clearInterval(this.logTimer); this.logTimer = null; }  // destroyed() 调用
    ```
12. **`getLogInfo(tab, silent)`**：后台轮询不闪 loading、加 `cache:false`、响应回来时校验 `currentTab === tab`（避免切标签瞬间把旧标签内容写进新标签）
13. **`setText()` 增量渲染 + 滚动保持**：新内容是旧内容的超集时只 `appendChild` 差异部分（大日志下比重绘整个 `<pre>` 便宜得多）；刷新时如果用户原本在底部就自动跟到底部，否则保持原滚动位置

**部署方式**

```bash
# 设备上（/www/pages/js/ 为运行时目录）
cp index.7b063c.js      /www/pages/js/index.7b063c.js
cp dashboard.f675cc.js  /www/pages/js/dashboard.f675cc.js
cp blog.07d12d.js       /www/pages/js/blog.07d12d.js
# 无需重启 lighttpd；浏览器强制刷新（Ctrl+F5）一次即可
```

> 仅替换 JS，不动 HTML/CGI/后端，回滚只需还原这三个文件。
> 若只想解决 **Miner Log 不刷新**，可以只替换 `blog.07d12d.js`——但请同时替换 `index.7b063c.js`，
> 因为日志页轮询的停止依赖 `loadInner` 里的 `$destroy()`。

### 5.2 进一步建议（结构性，按优先级）

**① 把三个同步 XHR 改成异步（解决整页冻结，P1）**

```js
timer(){ this.__timer = setInterval(() => this.refresh(), 15000); }
async refresh(){
  if (document.hidden) return;
  try { this.updateSummary(await this.fetchJSON("/cgi-bin/summary.cgi")); } catch(e){}
  try { this.updatePools(await this.fetchJSON("/cgi-bin/pools.cgi", 8000)); } catch(e){}
  try { this.updateStats(await this.fetchJSON("/cgi-bin/stats.cgi", 8000)); } catch(e){}
  try { this.updateChart(await this.fetchJSON("/cgi-bin/chart.cgi", 8000)); } catch(e){}
}
fetchJSON(url, timeout=8000){
  return new Promise((res, rej) => $.ajax({url, dataType:"json", cache:false, timeout})
    .done(res).fail(rej));
}
```

要点：`timeout` 只在异步 XHR 上有效；每个请求独立失败；上一轮未完成时跳过本轮（避免请求堆叠）。

**② 给后端加硬超时（解决 CGI 永久阻塞，P1）**

CGI 改为（若 busybox 带 `timeout` applet）：

```sh
timeout 5 cgminer-api -o '{"command":"stats","new_api":true}' || echo '{"STATUS":{"STATUS":"E","Msg":"api timeout"}}'
```

若设备 busybox 没有 `timeout`，用可移植 watchdog：

```sh
cgminer-api -o "$CMD" & pid=$!
( sleep 5; kill -9 $pid 2>/dev/null ) & wd=$!
wait $pid; rc=$?; kill $wd 2>/dev/null
[ $rc -ne 0 ] && echo '{"STATUS":{"STATUS":"E","Msg":"api timeout"}}'
```

这样前端一定会拿到 JSON（至少是 `STATUS:"E"`），不会把浏览器一起拖死。

**③ 让「刷新时间」可信（P2）**

- 在 `doStatus()` 成功回调里更新时间戳（数据时间），或在 summary 响应中带上设备时间；
- 连续 N 次失败时把时间戳标红 / 显示「数据已过期」。

**④ 缓存头（P2）**

CGI 统一输出：

```
Content-Type: application/json
Cache-Control: no-store, no-cache, must-revalidate
```

或在 lighttpd 加 `setenv.add-response-header`（需启用 `mod_setenv`）。

**⑤ 日志页增量拉取（大日志场景，建议后续做）**

当前 10s 轮询每次都会重新下载 `dmesg` + `/var/log/miner.log*`。按固件里的轮转策略
（`etc/bitmain_category.conf`：`/var/log/miner.log` 2MB × 1），最坏情况一次约 4MB。

建议给 `log.cgi` 加 `offset` 参数，只返回新增字节：

```sh
offset=${QUERY_STRING#*offset=}; offset=${offset%%&*}
[ -z "$offset" ] && offset=0
skip=$offset
for f in `ls -r /var/log/miner.log*`; do
    sz=$(wc -c < "$f")
    if [ "$skip" -ge "$sz" ]; then skip=$((skip - sz)); continue; fi
    tail -c +$((skip + 1)) "$f"; skip=0
done
```

客户端记录已收到的字节数作为下次 `offset`；若收到的内容短于上次（日志轮转/重启），自动回退为全量重载。
注意 `dmesg` 部分不参与 offset（首次加载后不再重复拉取）。

**⑥ 修掉 P3 小问题**

- `miner` 页：`n.pools[i] && (…= n.pools[i].url …)`；
- `favicon`：把 `static/favicon.ico` 改为 `/favicon.ico`，或复制一份到 `static/`；
- `expire.url`：改成 `( "/" => "access 0 seconds" )` 或直接用 `Cache-Control`。

---

## 6. 复现与验证

```bash
cd Firmware/S19/analysis/webui_backup/_harness

# 1) 还原为原始文件
cp ../www/pages/js/index.7b063c.js ../www/pages/js/dashboard.f675cc.js ../_fix/pages/js/

# 2) 打补丁（写入 _fix/pages/js，原版不动）
node apply_fix.js

# 3) 起 mock 后端（原版 18080 / 修复版 18081）
PORT=18080 node mock_server.js &
PORT=18081 WEBROOT="../_fix/pages" node mock_server.js &

# 4) 实测
PORT=18080 node probe.js > probe_original.json
PORT=18081 node probe.js > probe_fixed.json

# 5) 往返压力测试（原版 interval 线性增长，修复版恒定）
PORT=18080 node probe_multi.js
PORT=18081 node probe_multi.js
```

真机验证建议：

1. 打开 WebUI 的 DevTools → Network，过滤 `cgi-bin`，正常应为 **每 15s 各一次** `pools/stats/summary/chart`；
2. 切到 Miner/Update 页后，**不应再有**这些请求；
3. 反复切换页面 5 次，请求频率不应上升（原版会变成 5 倍）；
4. 人为让 bmminer API 忙（如链重启）时，页面不应卡死，只是对应面板短暂停更。

---

## 7. 附：关键文件清单

| 路径 | 说明 |
|---|---|
| `_pretty/*.pretty.js` | 10 个页面包的反美化副本（含行号，便于对照本报告） |
| `_harness/mock_server.js` | mock lighttpd + CGI（可注入 stats/summary/chart 故障） |
| `_harness/probe.js` | 主探测：刷新、切换、故障注入 |
| `_harness/probe_blog.js` | Miner Log 页探测：打开后是否自刷新、离开后是否停止 |
| `_harness/probe_multi.js` | 多轮页面往返压力测试 |
| `_harness/apply_fix.js` | 补丁脚本（13 处替换，幂等，失败即报错） |
| `_harness/probe_original.json` / `probe_fixed.json` | 实测原始数据 |
| `_fix/pages/` | 已打补丁的完整 WebUI 副本 |
| `_fix/pages/js/index.7b063c.js` | 修复页面切换生命周期 |
| `_fix/pages/js/dashboard.f675cc.js` | 修复仪表盘轮询容错、定时器、图表保护 |
| `_fix/pages/js/blog.07d12d.js` | 新增日志页 10s 轮询、增量渲染、滚动保持 |

---

## 8. 固化到 SD 启动卡（本次实际产物）

不走 NAND、不触发验签，直接用 SD 卡启动一份只改了 WebUI 的 rootfs：

- 卡：`E:`，FAT32，卷标 `S19SD`
- 内容：原厂 `BOOT.BIN`（未改）+ 原厂 `uImage` / `devicetree.dtb` + 重打包的 `minerfs.image.gz` + `uEnv.txt`
- `minerfs.image.gz` 的 uImage 头（magic/hcrc/dcrc/size）与 gzip 回环均已校验；
  解压后的 ext2 内 3 个 JS 的 MD5 与 `_fix/pages/js/` 完全一致。

详细启动链路、排障表、联机验收点见：
`_build/SDCARD_README.md`

> 注意：`BOOT.BIN` 是原厂未修改的（FSBL/bitstream/U-Boot），因此 BootROM/FSBL 的校验不受影响；
> 若更换控制板型号（bitstream IDCODE 不同），只需替换卡上的 `BOOT.BIN`，rootfs 可复用。
