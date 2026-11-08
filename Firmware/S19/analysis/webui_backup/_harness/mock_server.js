// Minimal mock of lighttpd + Bitmain CGI endpoints for the S19 webUI.
// Serves the backup copy at ../www/pages; never writes into it.
const http = require("http");
const fs = require("fs");
const path = require("path");

const WEBROOT = process.env.WEBROOT
  ? path.resolve(process.env.WEBROOT)
  : path.resolve(__dirname, "..", "www", "pages");
const PORT = Number(process.env.PORT || 18080);

const state = {
  seq: 0,
  rate: 151000.0,
  elapsed: 3600,
  statsMode: "ok",   // ok | fail
  summaryMode: "ok", // ok | fail
  chartMode: "ok",
  logSeq: 0,
  reqlog: [],        // {t, url}
};

const MIME = {
  ".html": "text/html",
  ".js": "text/javascript",
  ".png": "image/png",
  ".svg": "image/svg+xml",
  ".ico": "image/x-icon",
  ".properties": "text/plain",
  ".css": "text/css",
};

function summaryBody() {
  state.rate = 151000 + (state.seq % 50) * 7.25;
  if (state.summaryMode === "fail") {
    return JSON.stringify({
      STATUS: { STATUS: "E", Msg: "mock summary failure" },
      SUMMARY: [],
    });
  }
  return JSON.stringify({
    STATUS: { STATUS: "S", Msg: "Summary", Description: "mock bmminer" },
    SUMMARY: [
      {
        elapsed: state.elapsed + state.seq,
        rate_unit: "GH/s",
        rate_5s: state.rate.toFixed(2),
        rate_avg: (state.rate - 120).toFixed(2),
        rate_ideal: "152000.00",
        status: [
          { type: "rate", status: "s" },
          { type: "network", status: "s" },
          { type: "fans", status: "s" },
          { type: "temp", status: "s" },
        ],
      },
    ],
  });
}

function poolsBody() {
  return JSON.stringify({
    STATUS: { STATUS: "S", Msg: "Pools" },
    POOLS: [
      {
        index: 0,
        url: "stratum+tcp://mock.pool:3333",
        user: "worker1",
        status: "Alive",
        priority: 0,
        diff: "1",
        diffa: String(1000 + state.seq),
        diffr: "10",
        accepted: String(1000 + state.seq),
        rejected: "10",
        stale: "0",
        lstime: "0:00:12",
        lsdiff: "1",
        stratum_active: true,
      },
    ],
  });
}

function statsBody() {
  if (state.statsMode === "fail") {
    // Mirrors a CGI whose cgminer-api call failed: valid JSON, but no STATS/INFO
    return JSON.stringify({ STATUS: { STATUS: "E", Msg: "mock stats failure" } });
  }
  const chain = [0, 1, 2].map((i) => ({
    index: i,
    freq_avg: 700 + i,
    asic_num: 114,
    rate_real: (50000 + state.seq).toFixed(2),
    rate_ideal: "51000.00",
    hw: String(i),
    tpl: [[1, 2, 3], [4, 5, 6]],
    asic: "oooooooooooooooooooo",
    temp_pcb: [30 + i, 31 + i],
    temp_pic: [32 + i, 33 + i],
    temp_chip: [40 + i, 41 + i],
  }));
  return JSON.stringify({
    STATUS: { STATUS: "S", Msg: "Stats" },
    INFO: { type: "Antminer S19 Hydro", miner_version: "mock" },
    STATS: [
      {
        rate_unit: "GH/s",
        fan: [{ id: 1, speed: 4000 }],
        chain: chain,
      },
    ],
  });
}

function chartBody() {
  if (state.chartMode === "fail") {
    return JSON.stringify({ STATUS: { STATUS: "E", Msg: "mock chart failure" } });
  }
  const xs = [];
  for (let i = 0; i < 30; i++) xs.push("12:" + String(i).padStart(2, "0"));
  const series = [0, 1, 2].map((c) => ({
    name: "Chain" + (c + 1),
    data: xs.map((_, i) => 50000 + c * 10 + i),
  }));
  return JSON.stringify({
    STATUS: { STATUS: "S", Msg: "Rate" },
    RATE: [{ unit: "GH/s", xAxis: xs, series: series }],
  });
}

function sysinfoBody() {
  return JSON.stringify({
    minertype: "Antminer S19 Hydro",
    nettype: "DHCP",
    netdevice: "eth0",
    macaddr: "aa:bb:cc:dd:ee:ff",
    hostname: "antminer",
    ipaddress: "192.168.1.50",
    netmask: "255.255.255.0",
    gateway: "192.168.1.1",
    dnsservers: "8.8.8.8",
    system_mode: "GNU/Linux",
    system_kernel_version: "Linux 3.10.0 mock",
    system_filesystem_version: "mock build 20221217",
    firmware_type: "Release",
    Algorithm: "SHA256d",
  });
}

function logBody(which) {
  // grows on every request so a refresh is observable
  state.logSeq++;
  const lines = [];
  lines.push("===========================================Miner log===========================================");
  lines.push("[MOCK " + which + "] snapshot #" + state.logSeq + " at " + new Date().toISOString());
  for (let i = 0; i < 20; i++) {
    lines.push("2026-11-08 12:00:" + String(i).padStart(2, "0") + " [INFO] chain[" + (i % 4) + "] mock log line " + (state.logSeq * 100 + i));
  }
  lines.push("[TAIL-MARKER-#" + state.logSeq + "]");
  return lines.join("\n");
}

function dlogBody() {
  return JSON.stringify({ dlog: true, log_list: ["/2026-11/08", "/2026-11/07"] });
}

function send(res, code, body, headers) {
  const h = Object.assign(
    { "Content-Type": "text/html", "Content-Length": Buffer.byteLength(body) },
    headers || {}
  );
  res.writeHead(code, h);
  res.end(body);
}

const server = http.createServer((req, res) => {
  const u = new URL(req.url, "http://localhost");
  const p = decodeURIComponent(u.pathname);
  state.reqlog.push({ t: Date.now(), url: req.url });
  if (state.reqlog.length > 5000) state.reqlog.splice(0, 2500);

  // control plane for the probe
  if (p === "/__ctl") {
    for (const [k, v] of u.searchParams) {
      if (k in state && k !== "reqlog" && k !== "seq") state[k] = v;
    }
    return send(res, 200, JSON.stringify({ ok: true, state: { ...state, reqlog: undefined } }));
  }
  if (p === "/__log") {
    return send(res, 200, JSON.stringify(state.reqlog));
  }
  if (p === "/__reset") {
    state.seq = 0;
    state.reqlog.length = 0;
    state.statsMode = "ok";
    state.summaryMode = "ok";
    state.chartMode = "ok";
    return send(res, 200, "{}");
  }

  state.seq++;

  if (p.startsWith("/cgi-bin/")) {
    const name = p.slice("/cgi-bin/".length);
    switch (name) {
      case "summary.cgi":
        return send(res, 200, summaryBody());
      case "pools.cgi":
        return send(res, 200, poolsBody());
      case "stats.cgi":
        return send(res, 200, statsBody());
      case "chart.cgi":
        return send(res, 200, chartBody());
      case "log.cgi":
        return send(res, 200, logBody("clog"));
      case "hlog.cgi":
        return send(res, 200, logBody("hlog"));
      case "dlog.cgi":
        return send(res, 200, dlogBody());
      case "get_system_info.cgi":
        return send(res, 200, sysinfoBody());
      case "get_blink_status.cgi":
        return send(res, 200, JSON.stringify({ blink: false }));
      case "blink.cgi":
        return send(res, 200, "{}");
      case "miner_type.cgi":
        return send(res, 200, JSON.stringify({ miner_type: "Antminer S19 Hydro", subtype: "s19", fw_version: "mock" }));
      case "get_miner_conf.cgi":
        return send(res, 200, JSON.stringify({
          pools: [
            { url: "stratum+tcp://pool1:3333", user: "w1", pass: "x" },
            { url: "stratum+tcp://pool2:3333", user: "w2", pass: "x" },
            { url: "stratum+tcp://pool3:3333", user: "w3", pass: "x" }
          ],
          "api-listen": true,
          "bitmain-fan-ctrl": false,
          "bitmain-fan-pwm": "100",
          "bitmain-work-mode": "0",
          "bitmain-freq-level": "100"
        }));
      case "get_network_info.cgi":
        return send(res, 200, JSON.stringify({ nettype: "DHCP", ipaddress: "192.168.1.50" }));
      default:
        return send(res, 404, "not found");
    }
  }

  // static
  let rel = p === "/" ? "index.html" : p.replace(/^\/+/, "");
  const file = path.resolve(WEBROOT, rel);
  if (!file.startsWith(WEBROOT) || !fs.existsSync(file) || fs.statSync(file).isDirectory()) {
    return send(res, 404, "not found");
  }
  const body = fs.readFileSync(file);
  res.writeHead(200, {
    "Content-Type": MIME[path.extname(file).toLowerCase()] || "application/octet-stream",
    "Content-Length": body.length,
  });
  res.end(body);
});

server.listen(PORT, "127.0.0.1", () => {
  console.log("mock server: http://127.0.0.1:" + PORT + "  webroot=" + WEBROOT);
});
