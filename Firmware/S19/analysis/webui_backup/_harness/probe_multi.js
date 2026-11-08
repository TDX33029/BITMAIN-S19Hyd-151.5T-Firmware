const puppeteer = require("puppeteer-core");
const PORT = Number(process.env.PORT || 18081);
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
  const errs = [];
  page.on("pageerror", (e) => errs.push(String(e)));
  await page.evaluateOnNewDocument(() => {
    window.__n = 0;
    const si = window.setInterval.bind(window);
    const ci = window.clearInterval.bind(window);
    window.setInterval = function (fn, ms, ...r) {
      const id = si(fn, ms, ...r);
      window.__n++;
      return id;
    };
    window.clearInterval = function (id) {
      window.__n--;
      return ci(id);
    };
  });

  await page.goto(BASE, { waitUntil: "networkidle2" });
  await sleep(3000);
  const out = [];
  const snap = async (tag) =>
    out.push(
      await page.evaluate((tag) => {
        const q = (s) => (document.querySelector(s) || {}).textContent;
        return {
          tag,
          netIntervals: window.__n,
          rate: (q(".col-hash .hashrate .num") || "").trim(),
          vms: window.vm1 ? 1 : 0,
          hash: location.hash,
        };
      }, tag)
    );

  await snap("dashboard#0");
  for (let i = 1; i <= 4; i++) {
    await page.click('.menu-t > li[data-id="miner"]');
    await sleep(1200);
    await page.click('.menu-t > li[data-id="dashboard"]');
    await sleep(1500);
    await snap("roundtrip#" + i);
  }
  const before = out[out.length - 1].rate;
  await sleep(16000);
  await snap("after-16s");
  const after = out[out.length - 1].rate;

  console.log(JSON.stringify({ trips: out, rateChangedAfterWait: before !== after, errors: errs }, null, 2));
  await browser.close();
})().catch((e) => {
  console.error(e);
  process.exit(1);
});
