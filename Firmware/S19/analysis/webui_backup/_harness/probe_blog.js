// Probe for the "Miner Log" page: does it refresh while open?
const puppeteer = require("puppeteer-core");
const PORT = Number(process.env.PORT || 18080);
const BASE = `http://127.0.0.1:${PORT}/`;
const CHROME = "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe";
const sleep = (ms) => new Promise((r) => setTimeout(r, ms));

(async () => {
  const browser = await puppeteer.launch({
    executablePath: CHROME,
    headless: "new",
    args: ["--no-sandbox", "--disable-background-timer-throttling"],
    defaultViewport: { width: 1440, height: 900 },
  });
  const page = await browser.newPage();
  const errs = [];
  page.on("pageerror", (e) => errs.push(String(e)));

  await fetch(`${BASE}__reset`);
  await page.goto(BASE, { waitUntil: "networkidle2" });
  await sleep(3000);

  const text = () =>
    page.evaluate(() => {
      const el = document.querySelector(".log-content");
      return el ? el.textContent.slice(-120) : null;
    });
  const logCalls = async (since) => {
    const log = await fetch(`${BASE}__log`).then((r) => r.json());
    return log.filter((e) => e.url.startsWith("/cgi-bin/log.cgi") && e.t >= since).length;
  };

  // open "Miner Log"
  await page.click('.menu-b li[data-id="blog"]');
  await sleep(2500);
  const t0 = Date.now();
  const first = await text();
  await sleep(12000);
  const second = await text();
  const callsWhileOpen = await logCalls(t0);

  // switch to hlog tab
  await page.click(".tab span:nth-child(2)");
  await sleep(2000);
  const hlog = await text();

  // leave the page: does a timer keep polling?
  await page.click('.menu-t > li[data-id="dashboard"]');
  await sleep(1000);
  const t1 = Date.now();
  await sleep(12000);
  const callsAfterLeave = await logCalls(t1);

  console.log(
    JSON.stringify(
      {
        openTab: "clog",
        firstTail: first,
        after12sTail: second,
        autoRefreshedWhileOpen: first !== second,
        logCallsWhileOpen12s: callsWhileOpen,
        hlogTail: hlog,
        logCallsAfterLeaving12s: callsAfterLeave,
        pageErrors: errs,
      },
      null,
      2
    )
  );
  await browser.close();
})().catch((e) => {
  console.error(e);
  process.exit(1);
});
