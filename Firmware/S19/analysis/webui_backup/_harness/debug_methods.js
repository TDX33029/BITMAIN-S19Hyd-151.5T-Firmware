const puppeteer = require("puppeteer-core");
const PORT = Number(process.env.PORT || 18080);
const BASE = `http://127.0.0.1:${PORT}/`;
const CHROME = "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe";
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

(async () => {
  const browser = await puppeteer.launch({
    executablePath: CHROME,
    headless: "new",
    args: ["--no-sandbox"],
    defaultViewport: { width: 1440, height: 900 },
  });
  const page = await browser.newPage();
  const msgs = [];
  page.on("console", async (m) => {
    const args = await Promise.all(
      m.args().map((a) => a.evaluate((v) => (v && v.stack ? v.stack : String(v))).catch(() => "?"))
    );
    msgs.push(`[${m.type()}] ${args.join(" ")}`.slice(0, 500));
  });
  page.on("pageerror", (e) => msgs.push(`[pageerror] ${e && e.stack ? e.stack : e}`));

  await page.goto(BASE, { waitUntil: "networkidle2" });
  await sleep(4000);

  const probe = await page.evaluate(() => {
    const out = { calls: {} };
    const vm = window.vm1;
    if (!vm) return { err: "no vm1" };
    for (const m of ["doPoolData", "doMinerData", "doStatus", "timer"]) {
      try {
        const r = vm[m]();
        out.calls[m] = { ok: true, ret: typeof r === "number" ? r : String(r) };
        if (m === "timer") clearInterval(r);
      } catch (e) {
        out.calls[m] = { ok: false, err: String(e), stack: e.stack };
      }
    }
    out.minerType = vm.minerType;
    out.chainLen = (vm.chainDataArr || []).length;
    out.summaryDataLen = (vm.summaryData || []).length;
    out.summaryObj = vm.summaryObj;
    out.poolLen = (vm.poolData || []).length;
    // raw responses
    const sync = (url) => {
      let r;
      $.ajax({ url, dataType: "json", type: "GET", async: false, success: (x) => (r = x) });
      return r;
    };
    out.rawStats = sync("/cgi-bin/stats.cgi");
    out.rawChart = sync("/cgi-bin/chart.cgi");
    out.rawSummary = sync("/cgi-bin/summary.cgi");
    return out;
  });

  console.log(JSON.stringify(probe, null, 2).slice(0, 6000));
  console.log("\n--- console ---\n" + msgs.join("\n"));
  await browser.close();
})().catch((e) => {
  console.error(e);
  process.exit(1);
});
