// Reproduction probe for the S19 webUI auto-refresh behaviour.
// Drives the backup webUI in headless Chrome against mock_server.js.
const puppeteer = require("puppeteer-core");

const PORT = Number(process.env.PORT || 18080);
const BASE = `http://127.0.0.1:${PORT}/`;
const CHROME = "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe";

const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

async function ctl(params) {
  const q = new URLSearchParams(params).toString();
  await fetch(`${BASE}__ctl?${q}`).then((r) => r.json());
}
async function serverLog() {
  return fetch(`${BASE}__log`).then((r) => r.json());
}
function countReqs(log, prefix, sinceMs) {
  return log.filter((e) => e.url.startsWith(prefix) && e.t >= sinceMs).length;
}

(async () => {
  const browser = await puppeteer.launch({
    executablePath: CHROME,
    headless: "new",
    args: [
      "--disable-background-timer-throttling",
      "--disable-renderer-backgrounding",
      "--disable-backgrounding-occluded-windows",
      "--no-sandbox",
      "--window-size=1440,900",
    ],
    defaultViewport: { width: 1440, height: 900 },
  });

  const page = await browser.newPage();
  const errors = [];
  const consoleErrors = [];
  page.on("pageerror", (e) => errors.push(String(e)));
  page.on("console", (m) => {
    if (m.type() === "error") consoleErrors.push(m.text());
  });

  await page.evaluateOnNewDocument(() => {
    window.__intervals = new Set();
    const si = window.setInterval.bind(window);
    const ci = window.clearInterval.bind(window);
    window.setInterval = function (fn, ms, ...rest) {
      const id = si(fn, ms, ...rest);
      window.__intervals.add({ id, ms, fn: String(fn).slice(0, 120) });
      return id;
    };
    window.clearInterval = function (id) {
      for (const it of window.__intervals) if (it.id === id) window.__intervals.delete(it);
      return ci(id);
    };
  });

  const snapshot = async () => {
    return page.evaluate(() => {
      const q = (sel) => {
        const el = document.querySelector(sel);
        return el ? el.textContent.trim() : null;
      };
      return {
        hash: location.hash,
        rate5s: q(".col-hash .hashrate .num"),
        elapsed: q(".col-hash .line2"),
        refreshTime: q("#refreshTime"),
        chainRows: document.querySelectorAll(".xp-asic-table").length,
        contentLen: (document.querySelector("#content") || {}).innerHTML?.length || 0,
        intervals: [...window.__intervals].map((i) => ({ ms: i.ms, fn: i.fn })),
        vueInstances: window.vm1 ? 1 : 0,
      };
    });
  };

  const results = {};
  await fetch(`${BASE}__reset`);
  await page.goto(BASE, { waitUntil: "networkidle2", timeout: 30000 });
  await sleep(4000);

  // --- A. baseline auto-refresh ---
  const t0 = Date.now();
  const a1 = await snapshot();
  await sleep(17000);
  const a2 = await snapshot();
  const logA = await serverLog();
  results.A_baseline = {
    before: a1,
    after: a2,
    rateChanged: a1.rate5s !== a2.rate5s,
    refreshTimeChanged: a1.refreshTime !== a2.refreshTime,
    summaryCallsIn17s: countReqs(logA, "/cgi-bin/summary.cgi", t0),
    statsCallsIn17s: countReqs(logA, "/cgi-bin/stats.cgi", t0),
    poolsCallsIn17s: countReqs(logA, "/cgi-bin/pools.cgi", t0),
    chartCallsIn17s: countReqs(logA, "/cgi-bin/chart.cgi", t0),
    pageErrors: errors.splice(0),
    consoleErrors: consoleErrors.splice(0),
  };

  // --- B. navigate away: does the dashboard timer keep polling? ---
  await page.click('.menu-t > li[data-id="miner"]');
  await sleep(3000);
  const b1 = await snapshot();
  const tB = Date.now();
  await sleep(16000);
  const b2 = await snapshot();
  const logB = await serverLog();
  results.B_on_miner_page = {
    hash: b1.hash,
    statsCallsIn16s_while_on_miner_page: countReqs(logB, "/cgi-bin/stats.cgi", tB),
    summaryCallsIn16s_while_on_miner_page: countReqs(logB, "/cgi-bin/summary.cgi", tB),
    liveIntervals: b2.intervals,
    pageErrors: errors.splice(0),
  };

  // --- C. back to dashboard: interval duplication ---
  await page.click('.menu-t > li[data-id="dashboard"]');
  await sleep(3000);
  const c1 = await snapshot();
  const tC = Date.now();
  await sleep(16000);
  const c2 = await snapshot();
  const logC = await serverLog();
  results.C_back_to_dashboard = {
    liveIntervalsAfterReturn: c1.intervals,
    statsCallsIn16s: countReqs(logC, "/cgi-bin/stats.cgi", tC),
    summaryCallsIn16s: countReqs(logC, "/cgi-bin/summary.cgi", tC),
    chainRows: c2.chainRows,
    pageErrors: errors.splice(0),
  };

  // --- D. stats.cgi fails: do the other panels keep refreshing? ---
  await ctl({ statsMode: "fail" });
  const d1 = await snapshot();
  const tD = Date.now();
  await sleep(17000);
  const d2 = await snapshot();
  const logD = await serverLog();
  results.D_stats_failure = {
    statsMode: "fail (summary.cgi still healthy)",
    before: { rate5s: d1.rate5s, elapsed: d1.elapsed, refreshTime: d1.refreshTime },
    after: { rate5s: d2.rate5s, elapsed: d2.elapsed, refreshTime: d2.refreshTime },
    summaryCalls: countReqs(logD, "/cgi-bin/summary.cgi", tD),
    ratePanelChanged: d1.rate5s !== d2.rate5s,
    pageErrors: errors.splice(0),
    consoleErrors: consoleErrors.splice(0),
  };

  // --- E. chart.cgi fails (first load of page, chart never initialised) ---
  await ctl({ statsMode: "ok", chartMode: "fail" });
  await page.reload({ waitUntil: "networkidle2" });
  await sleep(3000);
  results.E_chart_failure_on_load = {
    snapshot: await snapshot(),
    pageErrors: errors.splice(0),
    consoleErrors: consoleErrors.splice(0),
  };

  await ctl({ chartMode: "ok", statsMode: "ok", summaryMode: "ok" });
  await browser.close();

  console.log(JSON.stringify(results, null, 2));
})().catch((e) => {
  console.error("PROBE FAILED:", e);
  process.exit(1);
});
