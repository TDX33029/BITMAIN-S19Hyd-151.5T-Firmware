// Apply the auto-refresh fixes to the COPIES in ../_fix/pages.
// Originals under ../www/pages are only read.
const fs = require("fs");
const path = require("path");

const SRC = path.resolve(__dirname, "..", "www", "pages", "js");
const DST = path.resolve(__dirname, "..", "_fix", "pages", "js");

const patches = {
  "index.7b063c.js": [
    [
      `loadInner:function(n){var t=n+".html";$("#content").load(t)}`,
      `loadInner:function(n){var t=n+".html";try{window.vm1&&window.vm1.$destroy&&window.vm1.$destroy()}catch(e){}window.vm1=null;$("#content").empty().load(t)}`,
      "loadInner: destroy previous page Vue instance (stops its timers) before swapping content",
    ],
  ],
  "dashboard.f675cc.js": [
    [
      `mounted(){this.doPoolData(),this.doMinerData(),this.doStatus(),this.timer(),window.onresize=()=>{s&&i.resize()}},destroyed(){this.summaryData.length=0,this.poolData.length=0,this.minerData.length=0,this.fanData.length=0,this.chainDataArr.length=0},`,
      `mounted(){try{this.doStatus()}catch(e){}try{this.doPoolData()}catch(e){}try{this.doMinerData()}catch(e){}this.timer(),window.onresize=()=>{s&&i.resize()}},destroyed(){clearInterval(this.__timer),this.__timer=null,this.__vis&&document.removeEventListener&&document.removeEventListener("visibilitychange",this.__vis),this.summaryData.length=0,this.poolData.length=0,this.minerData.length=0,this.fanData.length=0,this.chainDataArr.length=0},`,
      "mounted: each panel isolated in try/catch so the timer always starts; destroyed: clear interval + visibility listener",
    ],
    [
      `timer(){return setInterval(()=>{this.doPoolData(),this.doMinerData(),this.doStatus(),l.drawLine()},15e3)}`,
      `timer(){var t=this;return t.__tick=function(){try{t.doStatus()}catch(e){}try{t.doPoolData()}catch(e){}try{t.doMinerData()}catch(e){}try{l.drawLine()}catch(e){}},t.__vis=function(){document.hidden||t.__tick()},document.addEventListener&&document.addEventListener("visibilitychange",t.__vis),this.__timer=setInterval(function(){document.hidden||t.__tick()},15e3)}`,
      "timer: keep handle, isolate every panel, skip ticks while tab hidden, refresh immediately on focus",
    ],
    [
      `getMinerData(){var t=[];return $.ajax({url:"/cgi-bin/stats.cgi",dataType:"json",type:"GET",async:!1,processData:!1,contentType:!1,success:function(e){"S"===e.STATUS.STATUS&&(t=e)},error:function(){}}),t}`,
      `getMinerData(){var t=null;return $.ajax({url:"/cgi-bin/stats.cgi",dataType:"json",type:"GET",async:!1,cache:!1,processData:!1,contentType:!1,success:function(e){try{e&&e.STATUS&&"S"===e.STATUS.STATUS&&e.STATS&&e.STATS[0]&&(t=e)}catch(n){t=null}},error:function(){t=null}}),t}`,
      "getMinerData: null sentinel instead of [] (was truthy and crashed on t.INFO), guard shape, cache:false",
    ],
    [
      `doMinerData(){var t=this.getMinerData(),e=this;if(t){e.minerType=t.INFO.type,e.fanData=t.STATS[0].fan;var n=t.STATS[0].chain,a=t.STATS[0].rate_unit;`,
      `doMinerData(){var t=this.getMinerData(),e=this;if(t&&t.STATS&&t.STATS[0]){e.minerType=t.INFO&&t.INFO.type,e.fanData=t.STATS[0].fan||[];var n=t.STATS[0].chain,a=t.STATS[0].rate_unit;`,
      "doMinerData: only process a well-formed stats reply",
    ],
    [
      `url:"/cgi-bin/pools.cgi",dataType:"json",type:"GET",async:!1,processData:!1,contentType:!1,success:function(n){if("S"===n.STATUS.STATUS&&(e=n)&&e.POOLS){`,
      `url:"/cgi-bin/pools.cgi",dataType:"json",type:"GET",async:!1,cache:!1,processData:!1,contentType:!1,success:function(n){if(n&&n.STATUS&&"S"===n.STATUS.STATUS&&(e=n)&&e.POOLS){`,
      "doPoolData: guard empty reply, cache:false",
    ],
    [
      `url:"/cgi-bin/summary.cgi",dataType:"json",type:"GET",timeout:3e4,async:!0,processData:!1,contentType:!1,success:function(n){if("S"===n.STATUS.STATUS){e=n,`,
      `url:"/cgi-bin/summary.cgi",dataType:"json",type:"GET",timeout:3e4,async:!0,cache:!1,processData:!1,contentType:!1,success:function(n){if(n&&n.STATUS&&"S"===n.STATUS.STATUS&&n.SUMMARY&&n.SUMMARY[0]){e=n,`,
      "doStatus: guard reply shape, cache:false",
    ],
    [
      `url:"/cgi-bin/chart.cgi",dataType:"json",type:"GET",async:!1,processData:!1,contentType:!1,success:function(e){"S"===e.STATUS.STATUS&&(t=e.RATE[0])}`,
      `url:"/cgi-bin/chart.cgi",dataType:"json",type:"GET",async:!1,cache:!1,processData:!1,contentType:!1,success:function(e){e&&e.STATUS&&"S"===e.STATUS.STATUS&&e.RATE&&e.RATE[0]&&(t=e.RATE[0])}`,
      "getLineData: guard empty reply, cache:false",
    ],
    [
      `drawLine:function(){var t=this.getLineData(),e=(t.unit,t.xAxis),n=t.series,a=[],o=[];`,
      `drawLine:function(){var t=this.getLineData();if(!t||!t.series||!t.series.length||!document.getElementById("line"))return;var e=(t.unit,t.xAxis),n=t.series,a=[],o=[];`,
      "drawLine: return instead of throwing when the chart endpoint has no series / node missing",
    ],
  ],
  "blog.07d12d.js": [
    [
      `new Vue({el:"#blogPage",data(){return{topHeight:126,screenHeight:document.body.clientHeight-this.topHeight-68,showLoading:!1,chooseAllValue:!1,currentTab:"clog",dlog_display:!0}},created(){`,
      `window.vm1=new Vue({el:"#blogPage",data(){return{topHeight:126,screenHeight:document.body.clientHeight-this.topHeight-68,showLoading:!1,chooseAllValue:!1,currentTab:"clog",dlog_display:!0,logTimer:null,logBusy:!1,_lastLogText:null}},created(){`,
      "blog: register instance as window.vm1 so loadInner can destroy it; add polling state",
    ],
    [
      `this.getLogInfo("dlog")},methods:{switchTab(e){this.currentTab=e,this.getLogInfo(this.currentTab)},`,
      `this.getLogInfo("dlog"),this.startLogRefresh()},destroyed(){this.stopLogRefresh()},methods:{startLogRefresh(){var t=this;this.stopLogRefresh(),this.logTimer=setInterval((function(){document.hidden||"clog"!==t.currentTab&&"hlog"!==t.currentTab||t.logBusy||t.getLogInfo(t.currentTab,!0)}),1e4)},stopLogRefresh(){this.logTimer&&(clearInterval(this.logTimer),this.logTimer=null)},switchTab(e){this.currentTab=e,this._lastLogText=null,this.getLogInfo(this.currentTab)},`,
      "blog: 10s log polling (visible tabs only, no overlap), stopped on destroy",
    ],
    [
      `getLogInfo(e){var t=this,n="/cgi-bin/log.cgi",r="text";"hlog"===e?n="/cgi-bin/hlog.cgi":"dlog"===e&&(n="/cgi-bin/dlog.cgi",r="json"),t.showLoading=!0,$.ajax({url:n,dataType:r,type:"GET",timeout:3e4,async:!0,processData:!1,contentType:!1,success:function(e){"text"===r?t.setText(e):"json"===r&&t.setJson(e),t.showLoading=!1},error:function(e){t.showLoading=!1}})}`,
      `getLogInfo(e,s){var t=this,n="/cgi-bin/log.cgi",r="text";"hlog"===e?n="/cgi-bin/hlog.cgi":"dlog"===e&&(n="/cgi-bin/dlog.cgi",r="json"),s||(t.showLoading=!0),t.logBusy=!0,$.ajax({url:n,dataType:r,type:"GET",timeout:3e4,async:!0,cache:!1,processData:!1,contentType:!1,success:function(n){t.currentTab===e&&("text"===r?t.setText(n,s):"json"===r&&t.setJson(n)),t.showLoading=!1,t.logBusy=!1},error:function(e){t.showLoading=!1,t.logBusy=!1}})}`,
      "blog: silent background polls, no spinner, no stale-tab writes, cache:false",
    ],
    [
      `setText(e){"clog"!==this.currentTab&&"hlog"!==this.currentTab||$(".log-content").text(e)}`,
      `setText(e,s){if("clog"===this.currentTab||"hlog"===this.currentTab){var l=$(".log-content"),d=l[0];if(d){var b=document.scrollingElement||document.documentElement,a=window.innerHeight+window.scrollY>=b.scrollHeight-40,o=window.scrollY;this._lastLogText&&e.length>=this._lastLogText.length&&0===e.indexOf(this._lastLogText)?d.appendChild(document.createTextNode(e.slice(this._lastLogText.length))):l.text(e),this._lastLogText=e,s&&(a?window.scrollTo(0,b.scrollHeight):window.scrollTo(0,o))}}}`,
      "blog: append-only render on refresh (cheap for large logs) + keep scroll position / stick to bottom",
    ],
  ],
};

let failed = 0;
for (const [file, reps] of Object.entries(patches)) {
  const srcPath = path.join(SRC, file);
  const dstPath = path.join(DST, file);
  let code = fs.readFileSync(srcPath, "utf8");
  for (const [oldText, newText, why] of reps) {
    const n = code.split(oldText).length - 1;
    if (n !== 1) {
      console.error(`✗ ${file}: expected 1 match, got ${n} — ${why}`);
      failed++;
      continue;
    }
    code = code.replace(oldText, newText);
    console.log(`✓ ${file}: ${why}`);
  }
  fs.writeFileSync(dstPath, code);
}
if (failed) {
  console.error(`\n${failed} replacement(s) failed — patched copies may be incomplete.`);
  process.exit(1);
}
console.log("\nAll patches applied to " + DST);
