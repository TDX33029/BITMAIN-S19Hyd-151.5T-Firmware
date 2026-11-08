(()=>{"use strict";var e,t,n,r={54487(){},25833(e,t,n){var r=n(72240);function a(e){return"string"==typeof e&&e.length>0}function o(e){return(0,r.Q)(e)&&a(e.href)&&a(e.text)&&(null==e.isActive||"boolean"==typeof e.isActive)}function s(e){try{let t=window.BRAND;return e.reduce((e,t)=>e[t],t)}catch(e){return}}function i(e,t){let n=s(e);return a(n)?n:t}function l(e){let t,n=s(e),o=null;return(0,r.Q)(n)&&(a(n.src)&&(o=n.src),(0,r.Q)(n.style)&&(t=n.style)),{src:o,style:t}}t.A={get name(){return i(["name"],"Braiins OS")},colors:{get topMenuButton(){return i(["colors","topMenuButton"],"transparent")}},logo:{get header(){return l(["logo","header"])},get footer(){return l(["logo","footer"])}},copy:{get poweredBy(){return i(["copy","poweredBy"],"")||null},get footerSubtitle(){return i(["copy","footerSubtitle"],"")||null}},links:{get products(){let e;return Array.isArray(e=s(["links","products"]))&&e.every(o)?e:null},get documentation(){return i(["links","documentation"],"")||null},get supportTicket(){return i(["links","supportTicket"],"")||null},get supportEmail(){return i(["links","supportEmail"],"")||null}},get upgradeLink(){let e;return o(e=s(["upgradeLink"]))?e:null}}},58771(e,t,n){n.d(t,{$:()=>c});var r=n(74848),a=n(96540),o=n(97912),s=n(70682),i=n(34164),l={root:"root-cSaA_z",sm:"sm-nS5ssT",ghost:"ghost-EdOm1q",buttonText:"buttonText-KZSMWF horizontal-BH7kES center-w9rB27",iconOnly:"iconOnly-dcP9Uv",secondary:"secondary-MM1FXt","cds--btn__icon":"cds--btn__icon-Uf_WbJ","ghost-dim":"ghost-dim-sr7J7W",disabled:"disabled-Hb1koX",loading:"loading-J4xOpl fit-xdYcds centerCenter-GXaPL5"};function d(e){let{icon:t,hasIconOnly:n,children:a,title:d,onClick:c,blurOnClick:u=!0,className:h,innerRef:p,loading:m,kind:g="primary",tooltipPosition:f,tooltipAlignment:b,...y}=e,w=a;null==a&&y.href&&(w=y.href);let _=e.renderIcon;t&&(_=t);let A=n||!!(_&&!w),x={kind:g,title:void 0,renderIcon:_,...y};return A&&Object.assign(x,{children:null,hasIconOnly:!0,iconDescription:d,tooltipPosition:f??"top",tooltipAlignment:b??"center"}),c&&Object.assign(x,s.K.button(c,u)),x.iconDescription||(x.iconDescription=""),m&&(x.disabled=!0,x["aria-busy"]=!0),x.className=(0,i.A)(h,l.root,e.disabled&&l.disabled,e.size&&l[e.size],e.kind&&l[e.kind],A?l.iconOnly:null),(0,r.jsxs)(o.$nd,{...x,ref:p,children:[!!m&&(0,r.jsx)("div",{className:l.loading,role:"status",children:(0,r.jsx)(o.OuH,{status:"active",iconDescription:"string"==typeof m?m:void 0})},"loading"),null!=w&&(0,r.jsx)("div",{className:l.buttonText,children:w},"textWrapper")]})}let c=(0,a.forwardRef)((e,t)=>(0,r.jsx)(d,{...e,innerRef:t}))},67044(e,t,n){n.d(t,{Vw:()=>h});var r=n(74848),a=n(96540),o=n(49112),s=n(64683),i=n(4270),l=n(58771),d=n(54499),c=n(98495);class u extends a.Component{#e=(0,o.SG)(e=>[e.formatMessage({id:"jg4LUw",defaultMessage:[{type:0,value:"We have been notified about the issue and are working on a fix."}]}),e.formatMessage({id:"0yifHL",defaultMessage:[{type:0,value:"For further information, please contact our technical support."}]})]);get #t(){return this.#e(this.props.intl)}#n=(0,o.SG)(e=>({title:e.formatMessage({id:"Xr4vRh",defaultMessage:[{type:0,value:"There's a new version of this page available"}]}),message:[e.formatMessage({id:"zxu8qS",defaultMessage:[{type:0,value:"This is not an error, we have just released a new version of this page."}]}),e.formatMessage({id:"Xj0kCw",defaultMessage:[{type:0,value:"Please reload the page to get the latest version."}]})]}));get #r(){return this.#n(this.props.intl)}#a(e,t,n,a){let{intl:o}=this.props,c=null;return a&&(c=(0,r.jsx)(l.$,{kind:"primary",icon:d.wM,onClick:()=>window.location.reload(),children:o.formatMessage({id:"fPUgHb",defaultMessage:[{type:0,value:"Reload the page to continue"}]})})),(0,r.jsx)("div",{className:"root-Wx5S6x",children:(0,r.jsx)(s.S,{className:"empty-qEwnWc",icon:e,kind:"error",title:t||o.formatMessage({id:"FfYsOb",defaultMessage:[{type:0,value:"An error has occured!"}]}),message:Array.isArray(n)?(0,r.jsx)(i.E,{className:"message-WwcAhJ",container:"p",source:n.join("<br />")}):n,fullWidth:!0,controls:c})})}render(){let{title:e,error:t}=this.props;if(t?.name==="ChunkLoadError"){let{title:e,message:t}=this.#r;return this.#a(d.wM,e,t,!0)}return this.#a(c.Cp,e,this.#t,!1)}}let h=(0,o.QY)(u)},64683(e,t,n){n.d(t,{S:()=>s});var r=n(74848),a={root:"root-rwyFXO vertical-MOU5qc start-rj85ll",transparent:"transparent-NvaTq2",header:"header-X5PBB3 horizontal-BH7kES center-w9rB27",info:"info-MeHQLc",icon:"icon-sftIIO",error:"error-paDHa7",title:"title-pYIMYv heading-04-Ek10rg",message:"message-ElOlJp body-short-02-DaDjLN",fullWidth:"fullWidth-i_i50z",controls:"controls-aLWF3I"},o=n(34164);function s(e){let{icon:t,iconSize:n,title:s,message:i,controls:l,kind:d,fullWidth:c,transparent:u,className:h,style:p}=e;return(0,r.jsxs)("div",{className:(0,o.A)(a.root,c&&a.fullWidth,u&&a.transparent,a[d||"info"],h),style:p,children:[(0,r.jsxs)("div",{className:a.header,children:[(0,r.jsx)(t,{size:n||48,className:a.icon}),s&&(0,r.jsx)("div",{className:a.title,children:s})]}),i&&(0,r.jsx)("div",{className:a.message,children:i}),l&&(0,r.jsx)("div",{className:a.controls,children:l})]})}},83788(e,t,n){n.d(t,{j:()=>i});var r=n(74848),a=n(92488),o=n(34164),s=n(97912);function i(e){let{stretch:t,className:n,kind:i,theme:l,action:d,children:c,title:u,...h}=e;if(!c&&!u)return null;let p="";switch(i){case"info":default:p="info-ZlBZHV";break;case"warning":case"warning-alt":p="warning-oc_EbR";break;case"error":p="error-eSVFdM";break;case"success":p="success-DKGNVb"}let m={...h,children:null!=c?(0,r.jsx)("div",{className:"children-FDzz0X",children:c}):null,kind:i,lowContrast:!0,title:u||"",inline:!0,className:(0,o.A)("root-LrlF69 vertical-MOU5qc",t&&"stretch-eIuuWm",p,d?.kind==="link"&&"actionLink-QN0IeF",l&&a.A[l],n)};return d&&Object.assign(m,{actionButtonLabel:d.label,onActionButtonClick:d.onClick}),(0,r.jsx)(s.kZS,{...m})}},42473(e,t,n){n.d(t,{V:()=>i});var r=n(74848),a=n(34164),o=n(92488),s=n(83788);function i(e){let{items:t,renderedItems:n,className:i,kind:l,theme:d,stretch:c,...u}=e,h=[];return(t?.forEach((e,t)=>{if(null==e||!1===e)return;let n={stretch:c,kind:l||"info",hideCloseButton:!0};"string"==typeof e?n.children=e:Object.assign(n,e),h.push((0,r.jsx)(s.j,{...n},t))}),n?.length&&h.push(...n),h.length)?(0,r.jsx)("div",{...u,role:"alert",className:(0,a.A)("root-avSqvi",d&&o.A[d],c&&"stretch-pUpq6D",i),children:h}):null}},52671(e,t,n){n.d(t,{R:()=>s});var r=n(74848),a=n(33177),o=n(34164);function s(e){let{size:t,active:n,wrapper:s,cover:i,...l}=e;if(!0!==n)return null;let d=(0,o.A)("root-qxR21K",l.className),c={...l.style};t&&(c.width=c.height=t);let u=(0,r.jsxs)("div",{...l,className:d,style:c,children:[(0,r.jsxs)("svg",{className:"spinner-JYwdxA fit-xdYcds",viewBox:"25 25 50 50",children:[(0,r.jsx)("circle",{className:"bg-qK2M1v",cx:"50",cy:"50",r:"20",fill:"none",strokeMiterlimit:"10"}),(0,r.jsx)("circle",{className:"fg-N11EHT",cx:"50",cy:"50",r:"20",fill:"none",strokeMiterlimit:"10"})]}),(0,r.jsx)("svg",{viewBox:"0 0 34 32",className:"ii-4xEwki",children:(0,r.jsx)("path",{d:"M7.10151.00481167 0 0v5.54545L6.73872 27.4794V32h7.10148v-5.5454L7.10151 4.51816V.00481167Zm20.15979 0L20.1573 0v5.54545L26.896 27.4794V32H34v-5.5454L27.2613 4.51816V.00481167Z"})})]});if(s||i){let e={};return i?e.className="cover-ggDnfW fit-xdYcds vertical-MOU5qc centerCenter-GXaPL5":"string"==typeof s?e.className=s:(0,a.Q)(s)&&Object.assign(e,s),(0,r.jsx)("div",{...e,children:u})}return u}},53658(e,t,n){n.d(t,{a:()=>l});var r=n(74848),a=n(96540),o=n(40961),s=n(34164),i=n(97912);class l extends a.Component{#o;#s;constructor(e){super(e);const t=document.body.querySelector('div[data-cy="modals-root"]');t?this.#o=t:(this.#o=document.createElement("div"),this.#o.setAttribute("data-cy","modals-root"),document.body.appendChild(this.#o)),this.#s=document.createElement("div"),this.#s.setAttribute("data-modal-mount",e.id)}componentDidMount(){this.#o.appendChild(this.#s)}componentWillUnmount(){try{this.#o.removeChild(this.#s)}catch(e){console.error(e)}}render(){let{portal:e=!0,cancelContentPadding:t,cancelBodyOverflowShadow:n,...a}=this.props,l=(0,r.jsx)(i.aFV,{...a,className:(0,s.A)("root-KG7byw",t&&"cancelContentPadding-RxD7Cu",n&&"cancelBodyOverflowShadow-vHSAvK",a.className,!a.onRequestClose&&"hideCloseButton-VkzyaG"),"data-cy":a.id});return e?(0,o.createPortal)(l,this.#s):l}}},70682(e,t,n){function r(e,t){e?.key&&("Enter"===e.key||" "===e.key)&&(e.preventDefault(),t(e))}n.d(t,{},{K:{checkbox:(e,t)=>({tabIndex:0,role:"checkbox","aria-checked":e,onKeyDown:e=>r(e,t),onClick:t}),listItem:(e,t,n,r)=>{let a={tabIndex:-1,role:"listItem","aria-labelledby":n||void 0,"aria-describedby":r||void 0};return(e||t)&&(a.tabIndex=0,a.onKeyDown=n=>{e&&(" "===n.key||"Enter"===n.key)&&(n.preventDefault(),n.stopPropagation(),e(n)),t&&("ArrowUp"===n.key||"ArrowDown"===n.key)&&(n.preventDefault(),n.stopPropagation(),t("ArrowUp"===n.key?-1:1))}),e&&(a.onClick=t=>{e(t),t.stopPropagation(),t.preventDefault()}),a},button:(e,t)=>({tabIndex:0,role:"button",onKeyDown:t=>r(t,e),onClick:n=>{e(n),t&&document.activeElement?.blur()}})}})},4270(e,t,n){var r=n(96540),a=n(99418),o=n(59476);let s=["a","b","code","div","em","h1","h2","h3","h4","h5","h6","i","img","input","li","ol","p","picture","pre","source","span","strong","table","tbody","td","th","thead","tr","ul"],i=["class","height","id","media","name","rel","srcset","style","value","width"];function l(e){var t,n;let l,d,{source:c,children:u,container:h,additionalTags:p,additionalAttrs:m,className:g,style:f,fwdRef:b,process:y}=e,w=(t={additionalTags:p,additionalAttrs:m},l=new Set(s),t.additionalTags&&t.additionalTags.forEach(e=>{l.add(e)}),d=new Set(i),t.additionalAttrs&&t.additionalAttrs.forEach(e=>{l.add(e)}),{ADD_TAGS:Array.from(l),ADD_ATTR:Array.from(d)}),_=null==(n=c||u)?"":a.A.sanitize(n,w),A=(0,r.useRef)(null);return(0,r.useEffect)(()=>{let e=A.current;y&&e&&y(e)},[y]),(0,r.createElement)(h||"span",{dangerouslySetInnerHTML:{__html:_},ref:(0,o.P)(A,b),className:g,style:f})}n.d(t,{E:()=>l})},76369(e,t,n){n.d(t,{A:()=>g,Qo:()=>m,h$:()=>h,tl:()=>p});var r=n(33177),a=n(13907),o=n(72630);let s=function(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n];return t.join("/").replace(/^\/?|\/{2,}/g,"/").replace(/\/$/,"").replace(/^\//,"")||"/"},i=e=>{let t=e||window.location.pathname+window.location.hash,n=t.indexOf("#/");return n>-1?t.slice(n+1):(0,o.pb)(String(e||window.location.pathname))};function l(e,t,n){if(t?.match(/[()]/g))throw Error(`Invalid route pattern "${t}"!`);let o=n?.withLang?s(":lang",e):s(e),l=null==t?o:s(o,t);return{getRouteBase:()=>o,getRoutePath(){let e=arguments.length>0&&void 0!==arguments[0]&&arguments[0];return e?l.replace(/\/?$/,"/*"):l},getHref(e,t){let s=Object.assign({},e);n?.withLang&&!s.lang&&(s.lang=window.i18n?.locale||"en");let i=new URL(null==e?(0,a.tW)(o,s):(0,a.tW)(l,s),window.location.origin);i.pathname=i.pathname.replace(/^\/?|\/?$/,"/");let d=t?.query;d&&(0,r.Q)(d)&&Object.entries(d).forEach(e=>{let[t,n]=e;null!=n&&i.searchParams.set(t,n)});let c=t?.hash;return c&&(i.hash=c),i.pathname+i.search+i.hash},isBase(e){let t=i(e);return!!(0,a.B6)(o,t)},matchBase(e){return!!(0,a.B6)(this.getRoutePath(!0),i(e))},matchFull:e=>!!(0,a.B6)(l,i(e))}}let{protocol:d,host:c}=window.location,u={pools:l("settings/pools"),performance:l("settings/performance"),temperature:l("settings/temperature"),actions:l("settings/actions"),manager:l("settings/manager"),advanced:l("settings/advanced")},h={settings:l("system/settings"),hashboardHealth:l("system/hashboard-health"),network:l("system/network"),log:l("system/log"),upgrade:l("system/upgrade"),reset:l("system/reset")},p={index:l("/"),login:l("login"),settings:{index:{index:l("settings"),tagged:l("settings",":tab")},...u},system:{index:{index:l("system"),tagged:l("system",":tab")},...h},sys:{graphql:`${d}//${c}/graphql`,graphqlws:`${"https:"===d?"wss:":"ws:"}//${c}/graphql`,supportZip:`${d}//${c}/miner/support_archive`},external:{download:"https://braiins.com/os-firmware/download",support:"https://help.braiins.com/support/tickets/new"}},m="SESSION_EXPIRED",g={braiins:{academy:"https://academy.braiins.com",blog:"https://braiins.com/blog",books:"https://braiins.com/books",brandAssets:"https://design.braiins.com",careers:"https://braiins.com/careers",contact:"https://help.braiins.com/en/support/tickets/new",cookiePolicy:"https://cdn.prod.website-files.com/5e5ee6f9b325a6509259421f/5f84550533feeefe970c8e54_01_braiins.com_Cookie%20Policy.pdf",specializedBitcoinServices:"https://braiins.com/specialized-bitcoin-services",index:"https://braiins.com",newsroom:"https://braiins.com/category/braiins-news",privacyPolicy:"https://academy.braiins.com/en/terms-and-policies/",store:"https://shop.braiins.com"},hardware:{bcb100:"https://braiins.com/hardware/control-board-bcb-100",bmm100:"https://braiins.com/hardware/mini-miner-bmm-100",bmm101:"https://braiins.com/hardware/mini-miner-bmm-101"},bos:{index:"https://braiins.com/os-firmware",signUp:"https://braiins.com/os-firmware#sign-up-form",partnership:"https://braiins.com/os-firmware/partnership"},pool:{index:"https://braiins.com/pool",solo:"https://solo.braiins.com",story:"https://braiins.com/pool/story"},manager:"https://braiins.com/manager",toolbox:"https://braiins.com/toolbox",insights:"https://learn.braiins.com",braiinsProxy:"https://braiins.com/braiins-proxy",stratumV2:"https://braiins.com/stratum-v2"}},32020(e,t,n){var r=n(96540),a=n(18987);let o=()=>({storage:{webTheme:"AUTO",dashboardDensity:"DEFAULT"},info:{minerUpSince:null,modelName:null,macAddress:null,hostName:null,hwid:null,version:null,uptime:null},cookies:{set(e,t){a.A.set(e,t)},getSync:e=>a.A.get(e),getAsync:e=>Promise.resolve(a.A.get(e))},confirm:()=>Promise.resolve(!1),fetchData:()=>Promise.reject(),query:()=>Promise.reject(),mutation:()=>Promise.reject(),subscribe:()=>()=>{},render:{appeals:()=>null},auth:{isAuthenticated:!1,check:()=>Promise.resolve(null),logout(){}}});t.A=(0,r.createContext)(o()),n.d(t,{},{h:o})},73970(e,t,n){var r=n(74848);n(59494);var a=n(5338),o=n(96540),s=n(54060),i=n(72630),l=n(81174),d=n(37065),c=n(49112),u=n(89084),h=n(10008);let p=function(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n]};var m=(0,o.createContext)({getCount:()=>0,getCurrentIndex:()=>0,goPrev:p,goNext:p,register:p,observe:p,open:p,close:p,isOpen:p});class g extends o.Component{state={isOpen:!1,activeChapterIndex:0};#i=(0,u.s)(()=>{this.state.isOpen&&this.#l()},500,{leading:!1,trailing:!0});componentDidMount(){window.addEventListener("resize",this.#i,!1),window.addEventListener("keydown",this.#d,!1)}componentWillUnmount(){window.removeEventListener("resize",this.#i,!1),window.removeEventListener("keydown",this.#d,!1)}componentDidUpdate(e,t){let{isOpen:n,activeChapterIndex:r}=this.state;(r!==t.activeChapterIndex||n!==t.isOpen)&&this.#l()}#c=[];#u=new Map;#h=[];#p=e=>{let t=()=>{this.#c=this.#c.filter(t=>t!==e),this.#m(),window.setTimeout(this.#g,0)};return t(),this.#c.push(e),t};#f=(e,t)=>{let n=()=>{this.#u.delete(e),this.#h=Array.from(this.#u.keys()),this.#m(),window.setTimeout(this.#g,0)};return this.#u.has(e)||this.#u.has(e)||(this.#u.set(e,t),this.#h=Array.from(this.#u.keys()),this.#g(),this.#m()),n};#m=(0,u.s)(()=>{let{state:{activeChapterIndex:e,isOpen:t}}=this;if(t){if(!this.#u.size)return this.setState({isOpen:!1,activeChapterIndex:0});if(e>=this.#u.size)return console.log("//",e,this.#u.size),this.setState({activeChapterIndex:this.#u.size-1});this.#l()}},200,{leading:!1,trailing:!0});#g=()=>{this.#c.forEach(e=>{e(Array.from(this.#u.keys()))})};#l=()=>{let{isOpen:e,activeChapterIndex:t}=this.state,n=0;this.#u.forEach(r=>{r(e&&n===t),n+=1})};#d=e=>{if(!this.state.isOpen)return;let t=e.key;(0,h.jo)(e),"Escape"===t&&this.#b();let n=this.#h[this.state.activeChapterIndex];n?.().disablePaging||("ArrowRight"===t&&this.#v(),"ArrowLeft"===t&&this.#y())};#v=e=>{this.setState(e=>{let{activeChapterIndex:t}=e;return{isOpen:!0,activeChapterIndex:(t+1)%this.#u.size}}),(0,h.jo)(e)};#y=e=>{this.setState(e=>{let{activeChapterIndex:t}=e;return{isOpen:!0,activeChapterIndex:0===t?this.#u.size-1:t-1}}),(0,h.jo)(e)};#w=e=>{let t=this.#h.indexOf(e);this.setState({isOpen:!0,activeChapterIndex:t>-1?t:0})};#b=()=>{this.state.isOpen&&this.setState({isOpen:!1})};#_=e=>{let{isOpen:t,activeChapterIndex:n}=this.state,r=this.#h.indexOf(e);return t&&r===n};#A={getCount:()=>this.#u.size,getCurrentIndex:()=>this.state.activeChapterIndex,goPrev:this.#y,goNext:this.#v,open:this.#w,close:this.#b,isOpen:this.#_,observe:this.#p,register:this.#f};render=()=>(0,r.jsx)(m,{value:this.#A,children:o.Children.only(this.props.children)})}var f=(0,c.QY)(g),b=n(57496),y=n(10456),w=n(46873),_=n(74945),A=n.n(_),x=n(33177),S=n(71027),C=n(26720),k=n(49285);function M(e,t){return new Promise(n=>{let{unsubscribe:r}=C.Fs(e,C.pb(e=>!e.stale&&!e.hasNext),C.s(1),C.B1(e=>{n(e),r()})),a=t?.signal;a instanceof AbortSignal&&a.addEventListener("abort",()=>{n({data:void 0,error:Object.assign(new DOMException("Aborted","AbortError"),{graphQLErrors:[]})}),r()})})}var E=n(76369);let j=()=>({headers:{"Accept-Language":window.i18n?.locale??"en"}});var P=function(e){let t,n=()=>{},r=[S.WG,S.cI],a=e.ws;if(a?.url){var o;let s,i,l={error(t){e.ws?.onError?.(t),n(t)},closed(t){[1002,1003].includes(t.code)?l.error(Object.assign(Error(t.reason),{code:t.code})):e.ws?.onClosed?.(t)},connected:(t,n)=>e.ws?.onConnected?.(t,n),message:t=>e.ws?.onMessage?.(t)},d=(o={url:a.url,connectionParams(){let e={},t=a.init;return"function"==typeof t?e=t():t&&(0,x.Q)(t)&&(e=t),e},on:l},s=!1,i=()=>{s=!0},t={...(0,k.U)({...o,on:{...o.on,connected(e){o.on?.connected?.(e,void 0,!1),i=()=>{e.readyState===WebSocket.OPEN?e.close(4205,"Client Restart"):s=!0},s&&(s=!1,i())}}}),restart(){i()}});r.push(S.B8({forwardSubscription:e=>({subscribe:t=>({unsubscribe:d.subscribe(e,t)})})}))}let s=Object.freeze({credentials:"include"}),i=S.UU({...e.clientOptions,url:e.url,fetch:A(),fetchOptions(){let t={...s},n=e.clientOptions?.fetchOptions;return"function"==typeof n?t=n(t):n&&Object.assign(t,n),t},exchanges:r});return{client:i,query:(e,t,n)=>M(i.query(e,t??void 0,n),n),mutation:(e,t,n)=>M(i.mutation(e,t??void 0,n),n),subscription(e,t,n,r){let a=i.subscription(t,n,r);return C.Fs(a,C.B1(e)).unsubscribe},set onError(v){n=v},get onError(){return n},restartWsClient:()=>t?.restart()}}({url:E.tl.sys.graphql,clientOptions:{requestPolicy:"network-only",fetchOptions:j,preferGetMethod:!1},ws:{url:E.tl.sys.graphqlws,init:j,onError:e=>console.error("graphql websocket client error",e)}}),L=n(42187),O=n(52671),I=n(67044);function T(e){let t=(0,o.lazy)(()=>e().catch(e=>Promise.reject(e)));class n extends o.Component{state={error:null,errorInfo:null};componentDidCatch(e,t){(0,L.xQ)(e,t),this.setState({error:e,errorInfo:t})}render(){let{formatMessage:e}=this.props.intl,{error:n}=this.state;return n?(0,r.jsx)(I.Vw,{title:e({id:"PzBgv0",defaultMessage:[{type:0,value:"An error has occurred while loading the page!"}]}),error:n}):(0,r.jsx)(o.Suspense,{fallback:(0,r.jsx)(O.R,{"data-cy":"lazy-loader",active:!0,cover:!0}),children:(0,o.createElement)(t,this.props)})}}return(0,o.createElement)((0,c.QY)(n))}var D=n(95101),N=n(54300),R=n(18987),F=n(25833),z=n(58131),U=n(36073),$=n(59647),B=n(81495),W=n(79784),J=n(61812),H=n(8713),q=n(61138),G=n(69308),V=n(38036);let Q=()=>({tzname:"UTC"}),K=(0,o.createContext)(Q());var Y=n(42473),Z=n(53658),X=n(32020);n(54487);let ee=e=>({isBooted:!1,rootContextValue:e??(0,X.h)(),userContextValue:Q(),appeals:{items:new Map,hidden:new Set,removing:new Set}}),et=(0,J.Z)("Root",{mute:!0});class en extends o.Component{AppealsHideStorage=new H.po(window.sessionStorage,{key:"hiddenAppeals",defaultValue:new Set,parse:e=>new Set(JSON.parse(e)),stringify:e=>JSON.stringify(Array.from(e)),validate:e=>e instanceof Set});constructor(e){super(e);const{info:t,storage:n}=(0,X.h)();this.state=ee({info:t,storage:n,cookies:{set:this.#x,getSync:this.#S,getAsync:this.#C},confirm:this.#k,fetchData:this.#M,query:this.#E,mutation:this.#j,subscribe:this.#P,render:{appeals:this.#L},auth:{isAuthenticated:!1,check:this.#O,logout:this.#I}}),this.state.appeals.hidden=this.AppealsHideStorage.load()}componentDidMount=()=>this.#s();componentWillUnmount=()=>this.#T();#s=(0,D.s)(async()=>{let{intl:e}=this.props;P.onError=t=>{let n="string"==typeof t?t:t.message||e.formatMessage({id:"OkVfg3",defaultMessage:[{type:0,value:"Unknown graphql client error!"}]});$.o.error(`GraphQL error:
${n}`)},await this.#M()},150);#T(){this.AppealsHideStorage.save(this.state.appeals.hidden),delete P.onError,B.h.all(this)}abortFetchData=B.h.get();#M=async()=>{let{intl:e}=this.props,t=et("fetchData"),{signal:n}=this.abortFetchData.replace(),{data:r,error:a}=await this.#E((0,S.J1)`
                query RootFetchData {
                    storage {
                        public {
                            webTheme
                            dashboardDensity
                            webLanguage
                        }
                    }
                    bos {
                        info {
                            version {
                                full
                            }
                        }
                        hostname
                        macAddress
                        hwid
                        uptime {
                            since
                            durationS
                        }
                    }
                    bosminer {
                        info {
                            modelName
                        }
                    }
                }
            `,null,{signal:n});if(t.info({data:r,error:a}),B.h.is(a))return t.error("Aborted").end();a?.message&&$.o.error(a.message),t.end();let o=(0,N.m)(this.state.rootContextValue.storage),s=r?.storage.public;if(s?.__typename==="PublicStorage"){s.webTheme&&(t.info("Switch theme",s.webTheme),(0,W.sy)(s.webTheme.toLowerCase())),o.webTheme=s.webTheme??"AUTO",o.dashboardDensity=s.dashboardDensity??"DEFAULT";let e=(0,G.C$)(s.webLanguage);await (0,w.Qw)(e).catch(t=>et("applyStoredLocale").error(e,t).end())}else{let t=e.formatMessage({id:"B9wT3V",defaultMessage:[{type:0,value:"Failed to load configuration!"}]});"string"==typeof a?.message&&a.message.length&&(t+=`

${a.message}`),$.o.error(t)}let i=r?.bos,l=r?.bosminer?.info;await (0,q.wb)(this,e=>({isBooted:!0,rootContextValue:{...e.rootContextValue,info:{minerUpSince:null,hostName:i?.hostname,macAddress:i?.macAddress,modelName:l?.modelName,version:i?.info.version.full,uptime:i?.uptime??null,hwid:i?.hwid},storage:o}}))};#D(){let{intl:e}=this.props,t=et("handleAppealsFetch"),n=(0,S.J1)`
            query RootAppealsFetch {
                events {
                    appeals {
                        ...FragAppeal
                    }
                }
            }
            ${z.A.Appeal}
        `;return new Promise((r,a)=>{this.#E(n).then(n=>{let{data:o,error:s}=n;t.info({data:o,error:s});let i=o?.events;i?.__typename==="EventQuery"&&Array.isArray(i.appeals)?(this.setState(e=>({appeals:{...e.appeals,items:new Map(i.appeals.map(e=>[e.id,e]))}})),r(null),t.info("OK")):(this.#N(s,e.formatMessage({id:"z7a6Y2",defaultMessage:[{type:0,value:"Invalid response for backend notifications!"}]})),a(Error("Invalid response")),t.error("Invalid response")),t.end()})})}#R;#F=async()=>{let{intl:e}=this.props,{isAuthenticated:t}=this.state.rootContextValue.auth,n=et("handleAppealsUnsubscribe");if(!t)return n.error("Not Authenticated!").end();this.#R&&(n.info("Found existing Appeals subscription, unsubscribing"),this.#R()),n.info("Fetch the current state");try{await this.#D()}catch(e){return n.error("Failed, aborting",e).end()}n.info("Subscribe for updates").end();let r=(0,S.J1)`
            subscription RootAppeals {
                event {
                    # "__typename" seems to be omited here,
                    # so we need to mention it explicitly
                    __typename
                    ... on Appeal {
                        ...FragAppeal
                    }
                    ... on RemoveAppeal {
                        id
                    }
                }
            }
            ${z.A.Appeal}
        `,a=t=>{let{data:n}=t,r=n?.event;switch(r?.__typename){case"Appeal":this.setState(e=>({appeals:{...e.appeals,items:new Map(e.appeals.items).set(r.id,r)}}));break;case"RemoveAppeal":this.setState(e=>{let t=new Map(e.appeals.items);return t.delete(r.id),{appeals:{...e.appeals,items:t}}});break;default:{if(null==r)break;let t=e.formatMessage({id:"XWMlMf",defaultMessage:[{type:0,value:'Unknown event type "'},{type:1,value:"type"},{type:0,value:'" received!'}]},{type:r?.__typename||"[undefined]"});this.#N(null,t)}}},o=this.#P(a,r);this.#R=()=>{let e=et("handleAppealsUnsubscribe");o(),this.#R=void 0,this.forceUpdate(),e.end()},this.setState(e=>({appeals:{...e.appeals,hiding:new Set}}))};#z(e){let{intl:t}=this.props,n=et("handleAppealDismiss");this.setState(t=>({appeals:{...t.appeals,removing:t.appeals.removing.add(e)}}),()=>{this.#j((0,S.J1)`
                        mutation RootAppealDismiss($id: ID!) {
                            events {
                                removeAppeal(id: $id) {
                                    ... on AppealRemoveError {
                                        message
                                    }
                                }
                            }
                        }
                    `,{id:e}).then(r=>{let{data:a,error:o}=r;n.info({data:a,error:o}).end();let s=a?.events.removeAppeal;s?.__typename==="VoidResult"||(s?.__typename==="AppealRemoveError"?$.o.error(s.message||t.formatMessage({id:"nAUm1o",defaultMessage:[{type:0,value:"An error has occurred while trying to remove an appeal!"}]})):this.#N(o,t.formatMessage({id:"bJAH1n",defaultMessage:[{type:0,value:"Invalid response in group edit!"}]}))),this.setState(t=>({appeals:{...t.appeals,hiding:t.appeals.removing.delete(e)}}))})})}#L=()=>{let{intl:e}=this.props,{items:t,removing:n,hidden:a}=this.state.appeals;return(0,r.jsx)(Y.V,{stretch:!0,theme:"inverse",className:"appeals-W4ESkl",items:Array.from(t.values()).filter(e=>!a.has(e.id)).sort((e,t)=>e.timestamp-t.timestamp).map(t=>{let r=t.kind.toLowerCase(),a=n.has(t.id);return{kind:r,hideCloseButton:!1,children:t.message,onClose:()=>(this.setState(e=>({appeals:{...e.appeals,hidden:e.appeals.hidden.add(t.id)}})),!1),actions:[{onClick:()=>!a&&this.#z(t.id),children:e.formatMessage({id:"TDaF6J",defaultMessage:[{type:0,value:"Dismiss"}]}),kind:"ghost",disabled:a}]}})})};#U=(e,t)=>{let n=R.A.get(e);return Array.isArray(t)?t.includes(n)?n:t[0]:n};#x=(e,t,n)=>{R.A.set(e,t,n)};#S=(e,t)=>this.#U(e,t);#C=(e,t)=>new Promise(n=>{n(this.#U(e,t))});#N(e,t){let{intl:n}=this.props;$.o.error(e?.message||t||n.formatMessage({id:"uZBz7D",defaultMessage:[{type:0,value:"Invalid response received!"}]}))}#$=e=>{let{intl:t}=this.props;return!e.error?.graphQLErrors.some(e=>"UNAUTHORIZED"===e.extensions.code)||(this.#B(),$.o.error(t.formatMessage({id:"Lrsdc7",defaultMessage:[{type:0,value:"Your session has expired. Please login again."}]}),{id:E.Qo}),!1)};#E=(e,t,n)=>new Promise(r=>{P.query(e,t,n).then(e=>{this.#$(e)&&r(e)})});#j=(e,t,n)=>new Promise(r=>{P.mutation(e,t,n).then(e=>{this.#$(e)&&r(e)})});#P=(e,t,n,r)=>P.subscription(t=>this.#$(t)&&e(t),t,n,r);#W=0;#J=new Map;#H=null;#k=e=>{if(!e.message)throw Error("Confirmation message needs at least a message");let t=this.#W;return this.#W+=1,new Promise(n=>{let r=Object.assign({},e,{resolve:()=>{this.#J.delete(t),this.forceUpdate(),n(!0)},reject:()=>{this.#J.delete(t),this.forceUpdate(),n(!1)}});this.#J.set(t,r),this.forceUpdate()})};#q(){let{intl:e}=this.props,t=this.#J.values().next().value;t&&(this.#H=t);let n=t??this.#H,a=n?.title,o=n?.confirmLabel??e.formatMessage({id:"N2IrpM",defaultMessage:[{type:0,value:"Confirm"}]}),s=n?.cancelLabel??e.formatMessage({id:"47FYwb",defaultMessage:[{type:0,value:"Cancel"}]}),i=n?.message;return(0,r.jsx)(Z.a,{id:"confirm-dialog",danger:n?.danger??!1,open:!!t,size:n?.size||"xs",modalHeading:a,modalAriaLabel:a,primaryButtonText:o,secondaryButtonText:s,onRequestClose:t?.reject,onSecondarySubmit:t?.reject,shouldSubmitOnEnter:!1,onRequestSubmit:t?.resolve,children:i,className:"confirmationDialog-z8RSJG"})}abortLoginCheck=B.h.get();#O=async()=>{let{signal:e}=this.abortLoginCheck.replace(),t=e=>(e||this.#B(),e),n=et("handleLoginCheck"),{data:r,error:a}=await this.#j((0,S.J1)`
                mutation RootLoginCheck {
                    auth {
                        extend {
                            ... on Error {
                                message
                            }
                        }
                    }
                }
            `,null,{signal:e});if(B.h.is(a))return n.info("Aborted").end(),null;let o=r?.auth.extend.__typename!=="AuthError";return n.info({isAuthenticated:o}).end(),await (0,q.wb)(this,e=>({rootContextValue:{...e.rootContextValue,auth:{...e.rootContextValue.auth,isAuthenticated:o}}})),o?this.#G():this.#B(),t(o)};abortLogout=B.h.get();#I=async()=>{this.abortLogout.replace();let{data:e,error:t}=await this.#j((0,S.J1)`
            mutation RootLogout {
                auth {
                    logout {
                        __typename
                        ... on VoidResult {
                            void
                        }
                        ... on Error {
                            message
                        }
                    }
                }
            }
        `,void 0,this.abortLogout);B.h.is(t)||(e?.auth.logout.__typename==="AuthError"&&$.o.error(e.auth.logout.message),this.#B())};#V=()=>{let e=new URL(window.location.href),t=e.searchParams.get("next");t?e=new URL(t,window.location.origin):(e.search="",e.hash="");let n=(0,i.pb)(e.pathname);if(!("/"===n||E.tl.login.matchBase(n)))return e.href};#B=async()=>{let{router:e}=this.props;this.#R?.();let t=ee(this.state.rootContextValue);if(t.isBooted=!0,t.rootContextValue.auth.isAuthenticated=!1,await (0,q.wb)(this,t),this.AppealsHideStorage.clear(),R.A.remove("session_id"),!E.tl.login.matchBase(window.location.pathname)){let t=this.#V();(0,U.g)(e,E.tl.login.getHref(null,{query:{next:t}}))}};#G=()=>{$.o.dismiss(E.Qo),setTimeout(this.#F,1e3)};#Q="";render(){let{rootContextValue:e,userContextValue:t}=this.state;return(0,r.jsx)(K,{value:t,children:(0,r.jsxs)(X.A,{value:e,children:[(0,r.jsx)(l.mg,{titleTemplate:`%s | ${F.A.name}`}),(0,r.jsx)($.l,{position:"top-right",visibleToasts:3,duration:4}),(0,r.jsx)(s.aT,{onChange:e=>{this.#Q.replace(/\/$/,"")!==e.replace(/\/$/,"")&&(this.#Q=e,document.body.scrollTo({top:0,left:0,behavior:"smooth"}))}}),this.state.isBooted?(0,r.jsx)(V.sv,{}):(0,r.jsx)(O.R,{active:!0,cover:!0}),this.#q()]})})}}let er=(0,s.y)(en);var ea=(0,c.QY)(er),eo=[{element:(0,r.jsx)(ea,{}),children:[{path:E.tl.login.getRoutePath(),element:T(()=>n.e(755).then(n.bind(n,2230)))},{element:T(()=>Promise.all([n.e(630),n.e(367),n.e(941),n.e(378),n.e(681)]).then(n.bind(n,58311))),children:[{path:E.tl.index.getRoutePath(),element:T(()=>Promise.all([n.e(630),n.e(97),n.e(564),n.e(705),n.e(367),n.e(683),n.e(941),n.e(378),n.e(78),n.e(661)]).then(n.bind(n,14763)))},(0,s.IT)(E.tl.settings.index,T(()=>Promise.all([n.e(630),n.e(564),n.e(656),n.e(367),n.e(683),n.e(520)]).then(n.bind(n,61365)))),(0,s.IT)(E.tl.system.index,T(()=>Promise.all([n.e(630),n.e(97),n.e(657),n.e(367),n.e(683),n.e(941),n.e(78),n.e(547)]).then(n.bind(n,67193))))]},{path:"*",element:T(()=>Promise.all([n.e(769),n.e(766)]).then(n.bind(n,56845)))}]}];let es=window.document.body.parentElement,ei=es?.getBoundingClientRect();(0,y.V)().then(e=>{(0,a.createRoot)(document.getElementById("app")).render((0,r.jsx)(o.StrictMode,{children:(0,r.jsx)(l.vd,{children:(0,r.jsx)(b.Kq,{value:P.client,children:(0,r.jsx)(d.U,{rootNode:es,width:ei?.width,height:ei?.height,debounce:150,children:(0,r.jsx)(w.YO,{initial:e,children:(0,r.jsx)(f,{children:(0,r.jsx)(s.Ix,{routes:eo,basename:(0,i.hA)()})})})})})})}))})},81495(e,t,n){var r=n(75436),a=n(12164);function o(e){let t=new AbortController;return e&&t.signal.addEventListener("abort",e),t}class s{#K;constructor(e){this.#K=o(e)}replace(e,t){return this.#K?.abort(e),this.#K=o(t),this}get signal(){return this.#K?.signal??AbortSignal.abort()}abort=e=>{var t=this.#K;if(!t||"object"!=typeof t||!("signal"in t))throw Error("Aborter is not initialized");this.#K.abort(e)};destroy(e){this.#K?.abort(e)}attach(e){if(!e)return this;let t="signal"in e?e.signal:e;return t.addEventListener("abort",()=>this.abort(t.reason)),"abort"in e&&"function"==typeof e.abort&&this.signal.addEventListener("abort",()=>e.abort(this.signal.reason)),this}}n.d(t,{},{h:{is:e=>!!e&&!!(e&&"AbortError"===e.name||e instanceof r.T&&e.code===a.C.Canceled||e instanceof Event&&"abort"===e.type),all(e){Object.keys(e).forEach(t=>{let n=e[t];if(n&&"object"==typeof n){if("destroy"in n&&"function"==typeof n.destroy)return void n.destroy();"abort"in n&&"function"==typeof n.abort&&(n.abort(),delete e[t])}})},get:e=>new s(e),combine(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n];let r=new s;return t.forEach(e=>{r.attach(e)}),r}}})},32071(e,t,n){var r=n(20541);let a=!1;n.d(t,{},{b:{begin:function(){r.P.enable(),a=!0},end:function(){r.P.disable(),a=!1},get isActive(){return a}}})},79784(e,t,n){var r=n(92488);Object.keys(r.A).sort();let a=Object.values(r.A);function o(e){let t=document.documentElement,n=String(t.getAttribute("theme")),o=n in r.A?n:"auto",s=e||o;return Object.hasOwn(r.A,s)?(t.setAttribute("theme",s),t.classList.remove(...a),t.classList.add(r.A[s])):console.error(`Invalid theme "${String(e)}"!`),o}function s(e){return getComputedStyle(document.documentElement).getPropertyValue(e).trim()}n.d(t,{f4:()=>s,sy:()=>o})},20541(e,t,n){let r=!1;function a(e){e.returnValue=!0,e.preventDefault()}n.d(t,{},{P:{enable:function(){window.addEventListener("beforeunload",a),r=!0},disable:function(){window.removeEventListener("beforeunload",a),r=!1},get isEnabled(){return r}}})},10008(e,t,n){function r(e){let t;return Math.round(e/(16/(t=window.getComputedStyle(window.document.body),Number.parseFloat(t?.fontSize??"10"))))}function a(e,t){t&&e?.preventDefault(),e?.stopPropagation()}function o(e){if(!e)return;let t=e instanceof Element?e:e.target,n=document.createRange();n.selectNode(t),window.getSelection()?.removeAllRanges(),window.getSelection()?.addRange(n)}n.d(t,{A0:()=>o,Ij:()=>r,jo:()=>a})},10456(e,t,n){n.d(t,{V:()=>d,t:()=>l});var r=n(38401),a=n(31842),o=n(69308),s=JSON.parse('{"mining-stats.tuner.stage.stabilizing_temperature":"Stabilizing temperature","mining-stats.tuner.stage.optimizing_efficiency":"Optimizing efficiency","mining-stats.tuner.stage.testing_performance_profile":"Testing performance profile","mining-stats.tuner.stage.tuning_individual_chips":"Tuning individual chips","mining-stats.tuner.stage.continuous_tuning":"Continuous tuning","mining-stats.tuner.stage.stable":"Stable","mining-stats.tuner.stage.not_running":"Tuner not running","mining-stats.tuner.stage.running_with_fixed_settings":"Running with fixed settings","mining-stats.dps.disabled":"Disabled","mining-stats.dps.initial_power_target":"Enabled","mining-stats.dps.initial_hashrate_target":"Enabled","mining-stats.dps.lowered_power_target":"Power target changed to {powerTargetW, number, ::.00} W","mining-stats.dps.lowered_hashrate_target":"Hashrate target changed to {hashrate}/s","mining-stats.dps.mining_shutdown":"Mining shutdown, will start again in {countdown}","advanced-settings.allow_disabling_hashboards_on_nopic_miners.title":"Hashboard Disabling on NoPIC Miners","advanced-settings.allow_disabling_hashboards_on_nopic_miners.description":"Allows NoPIC miners to continue mining with a damaged hashboard by bypassing the default safety shutdown. Use only if you understand the risks.","advanced-settings.allow_missing_voltage_feedback.title":"Allow missing voltage feedback","advanced-settings.allow_missing_voltage_feedback.description":"Allows miner to start without voltage feedback from PIC or PSU. Disables voltage verification and short-circuit detection. Use only if you understand the risks.","advanced-settings.cgminer_readonly.title":"CGMiner API Read-Only","advanced-settings.cgminer_readonly.description":"When enabled, all mutating CGMiner API commands are blocked. This includes pool management (add/remove/replace/enable/disable/switch) and mining control (pause/resume).","advanced-settings.defrost_temperature_limit_c.title":"Defrost Temperature Limit","advanced-settings.defrost_temperature_limit_c.description":"When defrost temperature is reached, miner will stop heating up the hashboards and proceed to boot up. Recommended value for Immersion and Hydro miners is 10 °C, for air-cooled miners set a temperature that fits your operation. Keep in mind that booting machines that are too cold may affect hardware health.","advanced-settings.defrost_timeout_mode.title":"Defrost Timeout Mode","advanced-settings.defrost_timeout_mode.description":"Controls how long the hashboard heat-up routine runs. Indefinite means defrost runs until the hashboard is warm. Timed means defrost stops after the Defrost Timeout Duration.","advanced-settings.defrost_timeout_mode.option.indefinite":"Indefinite","advanced-settings.defrost_timeout_mode.option.timed":"Timed","advanced-settings.defrost_timeout_s.title":"Defrost Timeout Duration","advanced-settings.defrost_timeout_s.description":"Timeout in seconds for the hashboard heat-up routine.","advanced-settings.enable_continuous_tuning.title":"Continuous Tuning","advanced-settings.enable_continuous_tuning.description":"Keeps tuning the miner continuously after the initial tuning is complete.","advanced-settings.enable_defrost.title":"Defrost Hashboards","advanced-settings.enable_defrost.description":"Preheats cold hashboards to allow mining startup in low-temperature conditions.","advanced-settings.ignore_internal_chip_temperature.title":"Override Chip Temperature Safety Check","advanced-settings.ignore_internal_chip_temperature.description":"Disables the automatic pause triggered when an internal chip reaches DANGEROUS temperature. May lead to overheating or hardware damage.","advanced-settings.mdns_enabled.title":"Advertise over mDNS","advanced-settings.mdns_enabled.description":"When enabled, the miner advertises its web interface and API over mDNS/DNS-SD so it can be discovered on the local network without knowing its IP address. Large miners default to disabled because link-local multicast is flooded to every port on flat farm networks. Small miners default to enabled; a device\'s live schema reports the default for its platform.","advanced-settings.min_fan_pwm.title":"Min Fan PWM","advanced-settings.min_fan_pwm.description":"Minimum fan PWM percentage used when Min Fan PWM Mode is set to Manual.","advanced-settings.min_fan_pwm_mode.title":"Min Fan PWM Mode","advanced-settings.min_fan_pwm_mode.description":"Controls how the minimum fan PWM is determined at startup. In Auto mode, the miner runs fan autoconfiguration to find the minimum RPM. In Manual mode, a fixed value from Min Fan PWM is used instead.","advanced-settings.min_fan_pwm_mode.option.auto":"Auto","advanced-settings.min_fan_pwm_mode.option.manual":"Manual","advanced-settings.normal_ramping_time_down_mode.title":"Normal Ramp-Down Time Mode","advanced-settings.normal_ramping_time_down_mode.description":"Controls the ramp-down time during shutdown or restart. By default, the built-in timing is used. In Custom mode, the Normal Ramping Time Down value is applied.","advanced-settings.normal_ramping_time_down_mode.option.unchanged":"Unchanged","advanced-settings.normal_ramping_time_down_mode.option.custom":"Custom","advanced-settings.normal_ramping_time_down_s.title":"Normal Ramping Time Down","advanced-settings.normal_ramping_time_down_s.description":"Controls how quickly the miner ramps down frequency. Lower values may increase stress on components and reduce device lifespan. Higher values may be limited during miner shutdown and restart.","advanced-settings.normal_ramping_time_up_mode.title":"Normal Ramp-Up Time Mode","advanced-settings.normal_ramping_time_up_mode.description":"Controls the ramp-up time after boot or restart (not pause/resume). By default, the built-in timing is used. In Custom mode, the Normal Ramping Time Up value is applied.","advanced-settings.normal_ramping_time_up_mode.option.unchanged":"Unchanged","advanced-settings.normal_ramping_time_up_mode.option.custom":"Custom","advanced-settings.normal_ramping_time_up_s.title":"Normal Ramping Time Up","advanced-settings.normal_ramping_time_up_s.description":"Controls how quickly the miner ramps up after boot or restart (not pause/resume). Lower values may increase stress on components and reduce device lifespan.","advanced-settings.overheat_recovery_mode.title":"Auto-Recovery After Overheating","advanced-settings.overheat_recovery_mode.description":"Override the behavior after the miner pauses due to DANGEROUS temperature. By default, automatic resume after cooldown is enabled for air-cooled and immersion miners but disabled for Hydro miners (to protect against damage when cooling water is not flowing).","advanced-settings.overheat_recovery_mode.option.unchanged":"Unchanged","advanced-settings.overheat_recovery_mode.option.disabled":"Disabled","advanced-settings.overheat_recovery_mode.option.enabled":"Enabled","advanced-settings.rambo_mode.title":"Rambo Mode","advanced-settings.rambo_mode.description":"Rambo mode is a \\"fault tolerance level\\". Will ignore some errors in chip and PSU communication.","advanced-settings.rambo_mode.option.disabled":"Disabled","advanced-settings.rambo_mode.option.cautious":"Cautious","advanced-settings.rambo_mode.option.maximum":"Maximum","advanced-settings.start_cooldown_mode.title":"Cooldown Before Start Mode","advanced-settings.start_cooldown_mode.description":"Controls the cooldown that runs before mining starts or resumes. By default the miner waits for the chips to cool down to a pre-defined temperature. Timed mode caps the total wait time. Disabled mode skips the cooldown altogether. Starting with chips too hot can affect hardware health.","advanced-settings.start_cooldown_mode.option.unchanged":"Unchanged","advanced-settings.start_cooldown_mode.option.timed":"Timed","advanced-settings.start_cooldown_mode.option.disabled":"Disabled","advanced-settings.start_cooldown_timeout_s.title":"Cooldown Before Start Timeout","advanced-settings.start_cooldown_timeout_s.description":"Maximum time the miner spends cooling the chips down before mining starts or resumes.","advanced-settings.startup_delay_max_s.title":"Maximum Startup Delay","advanced-settings.startup_delay_max_s.description":"Maximum random delay before mining startup. A random value between 0 and this maximum is chosen each time the miner starts or resumes from pause. Useful for staggering startup across a farm after a power event."}');let i=()=>{};async function l(e){let t=await (0,o.fH)(e),n=(0,r.EY)({locale:e,timeZone:"UTC",messages:{...s,...t},onWarn:i,onError:i},(0,a.MT)());return{locale:e,intl:n}}function d(){return l((0,o.Oj)()??(0,o.tF)()??"en")}},49112(e,t,n){var r=n(74848),a=n(38401);function o(e){let t=t=>{let n=(0,a.tz)();return(0,r.jsx)(e,{...t,intl:n})};return t.displayName=`withIntl(${e.displayName||e.name||"Component"})`,t}function s(e){let t=null;return n=>(t?.intl!==n&&(t={intl:n,value:e(n)}),t.value)}n.d(t,{QY:()=>o,SG:()=>s})},69308(e,t,n){let r=["en","ru","zh"];function a(e){return"string"==typeof e&&r.includes(e)}function o(){let e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:navigator.languages;for(let t of e){let e=t.split("-")[0].toLowerCase();if(a(e))return e}return null}function s(){return o()??"en"}function i(e){let t=e?.toLowerCase();return a(t)?t:s()}function l(){let e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:window.location.search,t=new URLSearchParams(e).get("lang");return a(t)?t:null}async function d(e){switch(e){case"en":return{};case"ru":return{...(await n.e(741).then(n.t.bind(n,35084,19))).default,...(await n.e(951).then(n.t.bind(n,18130,19))).default};case"zh":return{...(await n.e(400).then(n.t.bind(n,86035,19))).default,...(await n.e(954).then(n.t.bind(n,60233,19))).default}}}n.d(t,{C$:()=>i,Oj:()=>l,fH:()=>d,tF:()=>o,yJ:()=>s})},46873(e,t,n){var r=n(74848),a=n(96540),o=n(38401),s=n(10456),i=n(69308);let l=(0,a.createContext)(null),d=null,c=null,u=null;function h(e){c=e,document.documentElement.lang=e,window.i18n={locale:e}}function p(e){let[t,n]=(0,a.useState)(e.initial),i=(0,a.useRef)(null),p=(0,a.useCallback)(async e=>{let t;if(e===c){i.current=null;return}if(e!==i.current){i.current=e;try{t=await (0,s.t)(e)}catch(t){throw i.current===e&&(i.current=null),t}i.current===e&&(i.current=null,h(t.locale),n(t))}},[]);(0,a.useEffect)(()=>h(t.locale),[t.locale]),(0,a.useEffect)(()=>(d=p,()=>{d=null,c=null,u=null}),[p]);let m=(0,a.useMemo)(()=>({locale:t.locale,setLocale:p}),[t.locale,p]);return(0,r.jsx)(l.Provider,{value:m,children:(0,r.jsx)(o.Lq,{value:t.intl,children:e.children})})}async function m(e){let t=u;u=e;let n="auto"===e?(0,i.yJ)():e;try{await d?.(n)}catch(n){throw u===e&&(u=t),n}}function g(e){return null!=(0,i.Oj)()||u?Promise.resolve():d?.(e)??Promise.resolve()}function f(){return u}n.d(t,{Qw:()=>g,YO:()=>p,Zj:()=>m,th:()=>f})},55483(e,t,n){var r=n(96540);let a=new(n(74184)).A(0,0);t.A=(0,r.createContext)(a)},37065(e,t,n){var r=n(74848),a=n(96540),o=n(89084),s=n(55483),i=n(74184);class l extends a.Component{static displayName="LayoutProvider";static defaultProps={debounce:300};isLive=!1;Store;size;dbn;constructor(e){super(e),this.size={width:e.width||0,height:e.height||0},this.Store=new i.A(this.size.width,this.size.height),this.debounceResizeHandler(this.props.debounce)}componentDidMount=()=>this.addListener();componentWillUnmount=()=>this.removeListener();componentDidUpdate(e){let{props:t}=this;if(!!t.rootNode!=!!e.rootNode&&(t.rootNode?this.addListener():this.removeListener()),t.debounce!==e.debounce&&this.debounceResizeHandler(t.debounce),t.width!==e.width||t.height!==e.height){if(this.isLive||t.rootNode)return void console.error("Do not set layout dimensions directly when using node watching mode!");this.size.width="number"==typeof t.width?Math.floor(t.width):t.width,this.size.height="number"==typeof t.height?Math.floor(t.height):t.height,this.Store.notify(this.size.width,this.size.height)}}debounceResizeHandler(e){this.dbn=e?(0,o.s)(this.handleResize,e):this.handleResize}handleResize=()=>{if(!this.props.rootNode)return;let{width:e,height:t}=this.size,n=this.props.rootNode.getBoundingClientRect(),r=Math.floor(n.width),a=Math.floor(n.height);(r!==e||a!==t)&&(this.size.width=r,this.size.height=a,this.Store.notify(r,a))};handleResizeDebounced=()=>{this.dbn&&this.dbn()};addListener(){!this.isLive&&this.props.rootNode&&(this.isLive=!0,this.handleResizeDebounced(),window.addEventListener("resize",this.handleResizeDebounced,!1))}removeListener(){window.removeEventListener("resize",this.handleResizeDebounced,!1),this.isLive=!1}render(){return(0,r.jsx)(s.A,{value:this.Store,children:a.Children.only(this.props.children)})}}n.d(t,{U:()=>l})},74184(e,t,n){var r=n(20311),a=n.n(r);class o{lastSubscriptionID;subscribers;args;constructor(...e){this.args=e,this.subscribers={},this.lastSubscriptionID=0}subscribe=e=>{a()("function"==typeof e,`Callback function must be supplied while subscribing to layout updates in <LayoutProvider />
"${typeof e}" received instead!`);let t=++this.lastSubscriptionID;return this.subscribers[t]=e,{id:t,args:this.args}};unsubscribe=e=>{a()(Number.isFinite(e),`{Number} Subscription ID must be supplied when trying to unsubscribefrom layout updates in <LayoutProvider />
"${typeof e}" received instead!`),Object.hasOwn(this.subscribers,e)&&delete this.subscribers[e]};notify=(()=>{var e=this;return function(){for(var t=arguments.length,n=Array(t),r=0;r<t;r++)n[r]=arguments[r];n.length&&(e.args=[...n]),Object.values(e.subscribers).forEach(t=>{"function"==typeof t&&t(...e.args)})}})()}n.d(t,{A:()=>o})},61812(e,t,n){function r(e,t){let n=performance.now(),r=r=>{let a=`in ${Math.round(performance.now()-n)}ms`,o=console[r?.method||(t?.expand?"group":"groupCollapsed")],s=`color: ${t?.color??"inherit"}`,i="color: gold",l="color: gray";this.location?o(`%c${this.location}/%c${e}%c(${r?.extras??"…"}) %c${a}`,s,i,s,l):o(`%c${e}%c(…) %c${a}`,i,s,l)},a=[],o=!1,s={end:()=>{t?.mute||o||(o=!0,r(),a.length&&(a.forEach(e=>{let[t,n]=e;console[t](...n)}),a=[]),console.groupEnd())},once(){for(var e=arguments.length,n=Array(e),a=0;a<e;a++)n[a]=arguments[a];t?.mute||r({method:"log",extras:n})},log:i("log","font-weight: bold; color: inherit"),info:i("info","font-weight: bold; color: turquise"),warn:i("log","font-weight: bold; color: orange"),error:i("log","font-weight: bold; color: red")};function i(e,n){return function(){for(var r=arguments.length,o=Array(r),i=0;i<r;i++)o[i]=arguments[i];if(t?.mute)return s;if("string"==typeof o[0]&&void 0!==o[1]){let t=[`%c${o[0]}:`,n,o[1]];a.push([e,t])}else if("[object Object]"===({}).toString.call(o[0]))Object.entries(o[0]).forEach(t=>{let[r,o]=t,s=[`%c${r}`,n,o];a.push([e,s])});else if(1===o.length&&("number"==typeof o[0]||"string"==typeof o[0])){let t=[`%c${o[0]}`,n];a.push([e,t])}else a.push([e,o]);return s}}return s}function a(e,t){return(n,a)=>r.call({location:e},n,{...t,...a})}r.bind({location:null}),n.d(t,{Z:()=>a})},61138(e,t,n){function r(e,t){return new Promise(n=>e.setState(t,n))}function a(e){e.preventDefault(),e.stopPropagation()}function o(e){try{e.target?.select()}catch(e){console.warn("selfSelect caused an error",e)}}function s(e){let t=new Set(e);return{add(e){t.add(e)},clear(){t.forEach(e=>{try{e()}catch(e){console.log("🧹 cleanupQueue error",e)}}),t.clear()}}}n(81174),n.d(t,{EI:()=>a,kN:()=>s,tB:()=>o,wb:()=>r})},59476(e,t,n){function r(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n];return e=>{t.forEach(t=>{"function"==typeof t?t(e):Object(t)===t&&(t.current=e)})}}n.d(t,{P:()=>r})},72630(e,t,n){let r="/bos",a=e=>e===r||e.startsWith(`${r}/`);function o(){return a(window.location.pathname)?r:""}function s(e){return a(e)?e.slice(r.length)||"/":e}n.d(t,{hA:()=>o,pb:()=>s},{hK:"/display"})},54060(e,t,n){var r=n(74848),a=n(96540),o=n(12918),s=n(92368);function i(e){let{routes:t,wrapUseRoutes:n,type:i,basename:l}=e,d=(0,a.useRef)(o.Ye);function c(){return(0,d.current)(t)}switch((0,a.useEffect)(()=>{n&&(d.current=n(o.Ye))},[n]),i||"history"){case"hash":return(0,r.jsx)(s.I9,{basename:l,children:(0,r.jsx)(c,{})});case"history":return(0,r.jsx)(s.Kd,{basename:l,children:(0,r.jsx)(c,{})});case"pass":return(0,r.jsx)(c,{})}}function l(e,t){return n=>{let a=(0,o.g)(),i=(0,o.zy)(),l=(0,o.Zp)(),d=(0,o.wQ)(),[c,u]=(0,s.ok)(),h={...n,router:{params:a,location:i,navigate:l,type:d,search:c}};return"function"==typeof t?Object.assign(h,t(h)):"string"==typeof t?h[t]=n[t]||a[t]:Array.isArray(t)&&t.every(e=>"string"==typeof e)&&t.forEach(e=>{h[e]=n[e]||a[e]}),(0,r.jsx)(e,{...h})}}function d(){let e=(0,o.g)(),t=(0,o.zy)(),n=(0,o.Zp)(),r=(0,o.wQ)(),[a,i]=(0,s.ok)();return{params:e,location:t,navigate:n,type:r,search:a}}function c(e){let{onChange:t}=e,{pathname:n}=(0,o.zy)();return(0,a.useLayoutEffect)(()=>t(n),[n,t]),null}function u(e,t,n){return{children:(Array.isArray(e)?e:Object.values(e)).map(e=>({path:"string"==typeof e?e:e.getRoutePath(),element:t,ErrorBoundary:n}))}}n.d(t,{IT:()=>u,Ix:()=>i,aT:()=>c,rd:()=>d,y:()=>l})},59647(e,t,n){n.d(t,{l:()=>c,o:()=>h});var r=n(74848),a=n(64721),o=n(32071),s=n(96540),i=n(4270),l=n(97912);function d(e){let{id:t,title:n,message:o,kind:d}=e,c=(0,s.useCallback)(()=>{a.oR.dismiss(t)},[t]);return(0,r.jsx)(l.HYS,{kind:d,title:n,children:(0,r.jsx)(s.Fragment,{children:"string"==typeof o?(0,r.jsx)(i.E,{children:o}):o}),onClose:c},t)}function c(e){return(0,r.jsx)(a.l$,{...e,toastOptions:{...e.toastOptions,className:"item-_1qla3 elevation-6dp-Dx64ka body-short-01-VGrx6b"}})}function u(e,t,n){let o=n?.duration;return null!=o&&Number.isFinite(o)&&(o*=1e3),a.oR.custom(a=>(0,r.jsx)(d,{id:a,kind:e,title:n?.title,message:t}),{...n,duration:o})}let h={show:u,success:function(e,t){return u("success",e,{...t,duration:t?.duration??5})},error:function(e,t){return o.b.isActive?"":u("error",e,{...t,duration:t?.duration??10})},dismiss:function(e){a.oR.dismiss(null==e?void 0:e)}}},8713(e,t,n){var r=n(21280);function a(e,t){let n=t?`Unexected ${t} value has been reached!`:"Unexected value has been reached!";throw Error(`${n} - ${e}`)}class o{#Y;#Z;constructor(e,t){this.#Y=e,this.#Z=t}#X(e,t){try{return e()}catch(e){return t}}save=e=>{this.#X(()=>{let{key:t,stringify:n}=this.#Z;this.#Y.setItem(t,n(e))},null)};clear=()=>{this.#X(()=>{this.#Y.removeItem(this.#Z.key)},null)};load=()=>{let{key:e,parse:t,defaultValue:n,validate:r}=this.#Z,a="function"==typeof n?n():n;return this.#X(()=>{let n=this.#Y.getItem(e),o=n?t(n):a;return r&&!0!==r(o)?a:o},a)};listen=e=>{let t=t=>{t.key!==this.#Z.key||t.storageArea!==this.#Y||(0,r.n)(t.oldValue,t.newValue)||e(this.load())};return window.addEventListener("storage",t),{dispose:()=>window.removeEventListener("storage",t)}}}n.d(t,{dr:()=>a,po:()=>o})},36073(e,t,n){n.d(t,{g:()=>s});var r=n(33177),a=n(72630);let o={};function s(e,t,n){let s="function"==typeof e?e:e.navigate,i=Object.assign({},o,"boolean"==typeof n?{replace:n}:n||{},"object"==typeof n?{state:n.state}:{});if(!t||"#"===t)return;if("back"===t)return s(-1);let l=new URL(function(e,t){if(!t||!(0,r.Q)(t))return e;let n=new URL(e,window.location.origin);return Object.entries(t).forEach(e=>{let[t,r]=e;n.searchParams.set(t,r)}),n.href}(t,i.query),window.location.origin);return!function(e){if("string"!=typeof e)return null;if("/"===e)return"/";let t=e.match(/(?:https?:)?(?:\/\/)?(.*)$/)?.[1];return t?.startsWith(window.location.host)?t.slice(window.location.host.length):/^\/[0-9a-zA-Z]*/.test(e)?e:null}(l.href)||i.target?void window.open(l.href,i.target||"_blank"):(i.prefix&&(l.pathname=`${i.prefix}/${l.pathname}`.replace(/\/{2,}/g,"/")),i.keepHash||(l.hash=""),i.hash&&(l.hash=i.hash),!1===i.search||!1===i.keepQuery?l.search="":(0,r.Q)(i.search)&&(l.search=new URLSearchParams(i.search).toString()),i.blurActiveElement&&document.activeElement?.blur(),s({pathname:(0,a.pb)(l.pathname),search:l.search,hash:l.hash},{replace:!!i.replace,state:i.state}))}s.lazy=function(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n];return()=>s(...t)},s.config=function(){for(var e=arguments.length,t=Array(e),n=0;n<e;n++)t[n]=arguments[n];let[r,a]=t;if(null==a)return o[r];null==a?delete o[r]:o[r]=a}},92488(e,t){t.A={light:"br-theme-light",dark:"br-theme-dark",auto:"br-theme-auto",inverse:"br-theme-inverse"}},58131(e,t,n){var r=n(71027);let a=(0,r.J1)`
    fragment FragTunerInfo on TunerInfo {
        __typename
        uptimeS
        iteration
        stageDurationS
        status
        stage
        loadedProfileTimestamp
    }
`,o=(0,r.J1)`
    fragment FragPowerInfo on PowerInfo {
        __typename
        limitW
        approxConsumptionW
        chipConsumptionW
        efficiencyWMhs
        estimatedEfficiencyWMhs
    }
`,s=(0,r.J1)`
    fragment FragPsuInfo on PsuInfo {
        version
        fwVersion
        serialNumber
        modelName
        minVoltage
        maxVoltage
    }
`,i=(0,r.J1)`
    fragment FragSharesInfo on SharesInfo {
        __typename
        acceptedDifficulty
        acceptedSolutions
        rejectedDifficulty
        rejectedRatio
        rejectedSolutions
        staleDifficulty
        staleRatio
        staleSolutions
    }
`,l=(0,r.J1)`
    fragment FragRealHashrate on RealHashrate {
        __typename
        mhsAv
        mhs5S
        mhs15S
        mhs30S
        mhs1M
        mhs5M
        mhs15M
        mhs30M
        mhs1H
        mhs24H
        mhsSinceRestart
    }
`,d=(0,r.J1)`
    fragment FragPoolConfig on PoolConfig {
        __typename
        id
        enabled
        url
        user
        password
    }
`,c=(0,r.J1)`
    fragment FragWorkSolverInfo on WorkSolverInfo {
        __typename
        name
        hwDetails {
            __typename
            chips
            frequencyMhz
            voltageV
            hbSerialNumber
            hashboardName
            chipType
        }
        nominalMhs
        realHashrate {
            ...FragRealHashrate
        }
        temperatures {
            __typename
            name
            degreesC
        }
        power {
            ...FragPowerInfo
        }
        psuInfo {
            ...FragPsuInfo
        }
        tuner {
            ...FragTunerInfo
        }
        hwErrorMhs15M
    }
    ${l}
    ${a}
    ${s}
`,u=(0,r.J1)`
    fragment FragTemperature on Temperature {
        __typename
        degreesC
        name
    }
`;t.A={Link:(0,r.J1)`
        fragment FragLink on Link {
            __typename
            href
            label
        }
    `,Appeal:(0,r.J1)`
        fragment FragAppeal on Appeal {
            __typename
            id
            kind
            message
            timestamp
        }
    `,PublicStorage:(0,r.J1)`
        fragment FragPublicStorage on PublicStorage {
            __typename
            webTheme
            webLanguage
        }
    `,LicenseState:(0,r.J1)`
        fragment FragLicenseState on LicenseState {
            __typename
            ... on ExpiredLicense {
                contractName
                devfeeRatio
                type
            }
            ... on LimitedLicense {
                limited
            }
            ... on ValidLicense {
                type
                devfeeRatio
                contractName
                secondsToRestricted
            }
            ... on NoneLicense {
                secondsToRestricted
            }
        }
    `,FanInfo:(0,r.J1)`
        fragment FragFanInfo on FanInfo {
            __typename
            name
            rpm
            speed
        }
    `,GroupInfo:(0,r.J1)`
        fragment FragGroupInfo on GroupInfo {
            __typename
            name
            pools {
                __typename
                active
                bestShare
                generatedWork
                lastDifficulty
                shares {
                    ...FragSharesInfo
                }
                status
                url
                user
            }
        }
        ${i}
    `,SummaryInfo:(0,r.J1)`
        fragment FragSummaryInfo on SummaryInfo {
            __typename
            foundBlocks
            poolStatus
            realHashrate {
                ...FragRealHashrate
            }
            shares {
                ...FragSharesInfo
            }
            bestShare
            temperatureChip {
                ...FragTemperature
            }
            temperatureAmbient {
                ...FragTemperature
            }
            power {
                ...FragPowerInfo
            }
            tunerStatus
            dynamicPerformanceScaling {
                __typename
                status
                powerTargetW
                hashrateMhs
                restartAt
            }
        }
        ${l}
        ${u}
        ${i}
        ${o}
    `,TempCtrlInfo:(0,r.J1)`
        fragment FragTempCtrlInfo on TempCtrlInfo {
            __typename
            hotC
            targetC
            dangerousC
        }
    `,WorkSolverInfoRecursive:(0,r.J1)`
        fragment FragWorkSolverInfoRecursive on WorkSolverInfo {
            ...FragWorkSolverInfo
            childSolvers {
                ...FragWorkSolverInfo
            }
        }
        ${c}
    `,GroupConfig:(0,r.J1)`
        fragment FragGroupConfig on GroupConfig {
            __typename
            id
            name
            pools {
                ...FragPoolConfig
            }
            strategy {
                __typename
                ... on QuotaStrategy {
                    quota
                }
                ... on FixedShareRatioStrategy {
                    fixedShareRatio
                }
            }
        }
        ${d}
    `,PerformanceScaling:(0,r.J1)`
        fragment FragPerformanceScaling on PerformanceScaling {
            __typename
            enabled
            powerStep
            minPowerTarget
            onStartTargetPercent
            hashrateStep
            minHashrateTarget
            shutdownEnabled
            shutdownDuration
            dpsMode
        }
    `,Autotuning:(0,r.J1)`
        fragment FragAutotuning on Autotuning {
            __typename
            enabled
            mode
            powerTarget
            hashrateTarget
        }
    `,HashChainGlobal:(0,r.J1)`
        fragment FragHashChainGlobal on HashChainGlobal {
            __typename
            voltage
            frequency
            asicBoost
        }
    `,HashChains:(0,r.J1)`
        fragment FragHashChains on HashChain {
            __typename
            name
            enabled
            voltage
            frequency
        }
    `,PoolConfig:d,TempControl:(0,r.J1)`
        fragment FragTempControl on TempControl {
            __typename
            mode
            targetTemp
            hotTemp
            dangerousTemp
        }
    `,FanControl:(0,r.J1)`
        fragment FragFanControl on FanControl {
            __typename
            speed
            minFans
            minFanRpm
            minFanSpeed
            maxFanSpeed
            pause {
                __typename
                mode
                cooldownFanSpeed
            }
        }
    `,ErrorEntry:(0,r.J1)`
        fragment FragErrorEntry on ErrorEntry {
            __typename
            timestamp
            errorCodes {
                __typename
                code
                hint
                reason
            }
            components {
                __typename
                name
                index
            }
            message
        }
    `,TimezoneData:(0,r.J1)`
        fragment FragTimezoneData on TimezoneData {
            id
            label
            offset
        }
    `,WifiCell:(0,r.J1)`
        fragment FragWifiCell on WifiCell {
            ssid
            connected
            signalStrength
            encryptionType
        }
    `,meta:{String:(0,r.J1)`
            fragment FragStringMetadata on StringMetadata {
                __typename
                default
                minLength
                maxLength
            }
        `,Usize:(0,r.J1)`
            fragment FragUsizeMetadata on UsizeMetadata {
                __typename
                default
                min
                max
                unit
            }
        `,Float:(0,r.J1)`
            fragment FragFloatMetadata on FloatMetadata {
                __typename
                default
                min
                max
                step
                unit
            }
        `,Bool:(0,r.J1)`
            fragment FragBooleanMetadata on BooleanMetadata {
                __typename
                default
            }
        `,UpgradeMetadata:(0,r.J1)`
        fragment FragUpgradeMetadata on UpgradeMetadata {
            __typename
            hash
            version
            releaseDate
            description
            url
            fileSize
        }
    `},ReleaseInfo:(0,r.J1)`
        fragment FragReleaseInfo on ReleaseInfo {
            version
            description
            url
        }
    `}}},a={};function o(e){var t=a[e];if(void 0!==t)return t.exports;var n=a[e]={exports:{}};return r[e].call(n.exports,n,n.exports,o),n.exports}o.m=r,o.n=e=>{var t=e&&e.__esModule?()=>e.default:()=>e;return o.d(t,{a:t}),t},i=Object.getPrototypeOf?e=>Object.getPrototypeOf(e):e=>e.__proto__,o.t=function(e,t){if(1&t&&(e=this(e)),8&t||"object"==typeof e&&e&&(4&t&&e.__esModule||16&t&&"function"==typeof e.then))return e;var n=Object.create(null);o.r(n);var r={};s=s||[null,i({}),i([]),i(i)];for(var a=2&t&&e;("object"==typeof a||"function"==typeof a)&&!~s.indexOf(a);a=i(a))Object.getOwnPropertyNames(a).forEach(t=>{r[t]=()=>e[t]});return r.default=()=>e,o.d(n,r),n},o.d=(e,t,n)=>{var r=(t,n)=>{for(var r in t)o.o(t,r)&&!o.o(e,r)&&Object.defineProperty(e,r,{enumerable:!0,[n]:t[r]})};r(t,"get"),r(n,"value")},o.f={},o.e=e=>Promise.all(Object.keys(o.f).reduce((t,n)=>(o.f[n](e,t),t),[])),o.u=e=>"static/js/async/"+e+"."+({367:"30e66a7f81",378:"951c8bb292",400:"e41162c26b",520:"8b88515ca0",547:"2bba31c9cc",564:"bcd62f0c4b",630:"924f400981",656:"7861eb39c7",657:"c956eba4b9",661:"d487a05983",681:"88de65db9e",683:"9ce0dd53d7",705:"08f2fd8d79",741:"e3d4234e0b",755:"0b7cd4fb43",766:"b2e70cf266",769:"612e86c3ca",78:"c21b2e0a27",941:"7f64ee2cc9",951:"b4f72672b9",954:"9ccd57f07a",97:"3491334bab"})[e]+".js",o.miniCssF=e=>"static/css/async/"+e+"."+({378:"7c913dffba",520:"6f8d85b54b",547:"bec8425afd",661:"3663b78d2e",755:"8dfeae20b4",766:"c315373d51",78:"2086ddf75d"})[e]+".css",o.g=(()=>{if("object"==typeof globalThis)return globalThis;try{return this||Function("return this")()}catch(e){if("object"==typeof window)return window}})(),o.o=(e,t)=>Object.prototype.hasOwnProperty.call(e,t),l={},o.l=function(e,t,n,r){if(l[e])return void l[e].push(t);if(void 0!==n)for(var a,s,i=document.getElementsByTagName("script"),d=0;d<i.length;d++){var c=i[d];if(c.getAttribute("src")==e||c.getAttribute("data-rspack")=="boser-frontend:"+n){a=c;break}}a||(s=!0,(a=document.createElement("script")).timeout=120,o.nc&&a.setAttribute("nonce",o.nc),a.setAttribute("data-rspack","boser-frontend:"+n),a.src=e),l[e]=[t];var u=function(t,n){a.onerror=a.onload=null,clearTimeout(h);var r=l[e];if(delete l[e],a.parentNode&&a.parentNode.removeChild(a),r&&r.forEach(function(e){return e(n)}),t)return t(n)},h=setTimeout(u.bind(null,void 0,{type:"timeout",target:a}),12e4);a.onerror=u.bind(null,a.onerror),a.onload=u.bind(null,a.onload),s&&document.head.appendChild(a)},o.r=e=>{"u">typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})},d=[],o.O=(e,t,n,r)=>{if(t){r=r||0;for(var a=d.length;a>0&&d[a-1][2]>r;a--)d[a]=d[a-1];d[a]=[t,n,r];return}for(var s=1/0,a=0;a<d.length;a++){for(var[t,n,r]=d[a],i=!0,l=0;l<t.length;l++)(!1&r||s>=r)&&Object.keys(o.O).every(e=>o.O[e](t[l]))?t.splice(l--,1):(i=!1,r<s&&(s=r));if(i){d.splice(a--,1);var c=n();void 0!==c&&(e=c)}}return e},o.g.importScripts&&(c=o.g.location+"");var s,i,l,d,c,u=o.g.document;if(!c&&u&&(u.currentScript&&"SCRIPT"===u.currentScript.tagName.toUpperCase()&&(c=u.currentScript.src),!c)){var h=u.getElementsByTagName("script");if(h.length)for(var p=h.length-1;p>-1&&(!c||!/^http(s?):/.test(c));)c=h[p--].src}if(!c)throw Error("Automatic publicPath is not supported in this browser");if(o.p=(c=c.replace(/^blob:/,"").replace(/#.*$/,"").replace(/\?.*$/,"").replace(/\/[^\/]+$/,"/"))+"../../","u">typeof document){var m=function(e,t,n,r,a,s){var i=document.createElement("link");return i.rel="stylesheet",i.type="text/css",o.nc&&(i.nonce=o.nc),i.href=t,i.onerror=i.onload=function(n){if(i.onerror=i.onload=null,"load"===n.type)r();else{var o=n&&("load"===n.type?"missing":n.type),s=n&&n.target&&n.target.href||t,l=Error("Loading CSS chunk "+e+" failed.\\n("+s+")");l.code="CSS_CHUNK_LOAD_FAILED",l.type=o,l.request=s,i.parentNode&&i.parentNode.removeChild(i),a(l)}},n?n.parentNode.insertBefore(i,n.nextSibling):document.head.appendChild(i),i},g=function(e,t){for(var n=document.getElementsByTagName("link"),r=0;r<n.length;r++){var a=n[r],o=a.getAttribute("data-href")||a.getAttribute("href");if(o&&(o=o.split("?")[0]),"stylesheet"===a.rel&&(o===e||o===t))return a}for(var s=document.getElementsByTagName("style"),r=0;r<s.length;r++){var a=s[r],o=a.getAttribute("data-href");if(o===e||o===t)return a}},f={410:0};o.f.miniCss=function(e,t,n){if(f[e])t.push(f[e]);else 0!==f[e]&&({378:1,520:1,547:1,661:1,755:1,766:1,78:1})[e]&&t.push(f[e]=new Promise(function(t,r){var a=o.miniCssF(e),s=o.p+a;if(g(a,s))return t();m(e,s,null,t,r,n)}).then(function(){f[e]=0},function(t){throw delete f[e],t}))}}e={410:0},o.f.j=function(t,n){var r=o.o(e,t)?e[t]:void 0;if(0!==r)if(r)n.push(r[2]);else{var a=new Promise((n,a)=>r=e[t]=[n,a]);n.push(r[2]=a);var s=o.p+o.u(t),i=Error();o.l(s,function(n){if(o.o(e,t)&&(0!==(r=e[t])&&(e[t]=void 0),r)){var a=n&&("load"===n.type?"missing":n.type),s=n&&n.target&&n.target.src;i.message="Loading chunk "+t+" failed.\n("+a+": "+s+")",i.name="ChunkLoadError",i.type=a,i.request=s,r[1](i)}},"chunk-"+t,t)}},o.O.j=t=>0===e[t],t=(t,n)=>{var r,a,[s,i,l]=n,d=0;if(s.some(t=>0!==e[t])){for(r in i)o.o(i,r)&&(o.m[r]=i[r]);if(l)var c=l(o)}for(t&&t(n);d<s.length;d++)a=s[d],o.o(e,a)&&e[a]&&e[a][0](),e[a]=0;return o.O(c)},(n=self.rspackChunkboser_frontend=self.rspackChunkboser_frontend||[]).forEach(t.bind(null,0)),n.push=t.bind(null,n.push.bind(n));var b=o.O(void 0,["783","535","218"],()=>o(73970));b=o.O(b)})();