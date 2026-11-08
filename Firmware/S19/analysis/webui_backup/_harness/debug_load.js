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
  const msgs = [];
  page.on("console", (m) => msgs.push(`[${m.type()}] ${m.text()}`));
  page.on("pageerror", (e) => msgs.push(`[pageerror] ${e}`));
  page.on("response", (r) => {
    if (r.status() >= 400) msgs.push(`[http ${r.status()}] ${r.url()}`);
  });

  await page.goto(BASE, { waitUntil: "networkidle2" });
  await sleep(5000);

  const info = await page.evaluate(() => {
    const c = document.querySelector("#content");
    return {
      contentHTML: c ? c.innerHTML.slice(0, 800) : null,
      contentLen: c ? c.innerHTML.length : -1,
      hasDashboard: !!document.querySelector("#Dashboard"),
      hasStatesRow: !!document.querySelector(".states-row"),
      hasLine: !!document.querySelector("#line"),
      vm1Exists: !!window.vm1,
      vm1El: window.vm1 ? (window.vm1.$el ? window.vm1.$el.id || window.vm1.$el.tagName : null) : null,
      vm1Mounted: window.vm1 ? !!window.vm1._isMounted : null,
      scriptCount: document.scripts.length,
      lastScripts: [...document.scripts].slice(-6).map((s) => s.src || "(inline)"),
      jqVersion: window.jQuery && window.jQuery.fn.jquery,
      vueAuthored: !!(window.Vue && window.Vue.version),
    };
  });

  console.log(JSON.stringify({ info, msgs: msgs.slice(0, 40) }, null, 2));
  await browser.close();
})().catch((e) => {
  console.error(e);
  process.exit(1);
});
