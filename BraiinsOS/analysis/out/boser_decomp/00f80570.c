// FUN_00f80570 @ 00f80570 size=1300 calls_out=0 calls_in=18
// strings: x-frame-opt | x-dns-prefetch-con | x-content-type-opt | upgrade-insecure-requ | user-a | transfer-enco

undefined8 FUN_00f80570(int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    pcVar1 = (char *)param_1[1];
    iVar2 = param_1[2];
    goto switchD_00f805a4_caseD_0;
  }
  iVar2 = 6;
  pcVar1 = 
  "accept/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:92methodevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:102content_typeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:112application/grpc-webapplication/grpc-web+protoapplication/grpc-web-textapplication/grpc-web-text+proto\r\ntrailers couldn\'t parse valuenightlymissing stable versionmissing RC iterRC is zerorcrequest timed outoverflow in Duration::newassertion failed: retry_percent >= 0.0assertion failed: retry_percent <= 1000.0generation lockoverflow when subtracting durations./\x02.//[consistency] already confirmed that there are no more dot segments[consistency] loop condition of the previous loopdeflatebrinternal error: entered unreachable code: this case should be handled by the callerInvalidUriimage/image/svg+xmltext/event-stream"
  ;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[1]) {
  case '\x01':
    iVar2 = 0xe;
    pcVar1 = "accept-charset";
    break;
  case '\x02':
    iVar2 = 0xf;
    pcVar1 = "accept-enco";
    break;
  case '\x03':
    iVar2 = 0xf;
    pcVar1 = "accept-lang";
    break;
  case '\x04':
    iVar2 = 0xd;
    pcVar1 = "accept-ra";
    break;
  case '\x05':
    iVar2 = 0x20;
    pcVar1 = "access-control-allow-credent";
    break;
  case '\x06':
    iVar2 = 0x1c;
    pcVar1 = "access-control-allow-hea";
    break;
  case '\a':
    iVar2 = 0x1c;
    pcVar1 = "access-control-allow-met";
    break;
  case '\b':
    iVar2 = 0x1b;
    pcVar1 = "access-control-allow-or";
    break;
  case '\t':
    iVar2 = 0x1d;
    pcVar1 = "access-control-expose-hea";
    break;
  case '\n':
    iVar2 = 0x16;
    pcVar1 = "access-control-max";
    break;
  case '\v':
    iVar2 = 0x1e;
    pcVar1 = "access-control-request-hea";
    break;
  case '\f':
    iVar2 = 0x1d;
    pcVar1 = "access-control-request-me";
    break;
  case '\r':
    iVar2 = 3;
    pcVar1 = "age";
    break;
  case '\x0e':
    iVar2 = 5;
    pcVar1 = "a";
    break;
  case '\x0f':
    iVar2 = 7;
    pcVar1 = "alt";
    break;
  case '\x10':
    iVar2 = 0xd;
    pcVar1 = "authoriza";
    break;
  case '\x11':
    iVar2 = 0xd;
    pcVar1 = "cache-con";
    break;
  case '\x12':
    iVar2 = 0xc;
    pcVar1 = "cache-st";
    break;
  case '\x13':
    iVar2 = 0x11;
    pcVar1 = "cdn-cache-con";
    break;
  case '\x14':
    iVar2 = 10;
    pcVar1 = "c";
    break;
  case '\x15':
    iVar2 = 0x13;
    pcVar1 = "content-disposi";
    break;
  case '\x16':
    pcVar1 = &UNK_0056a378;
    goto LAB_00f80ae0;
  case '\x17':
    pcVar1 = &UNK_0056a018;
    goto LAB_00f80ae0;
  case '\x18':
    iVar2 = 0xe;
    pcVar1 = "content-le";
    break;
  case '\x19':
    pcVar1 = &UNK_00568458;
    goto LAB_00f80ae0;
  case '\x1a':
    iVar2 = 0xd;
    pcVar1 = "content-r";
    break;
  case '\x1b':
    iVar2 = 0x17;
    pcVar1 = "content-security-po";
    break;
  case '\x1c':
    iVar2 = 0x23;
    pcVar1 = "content-security-policy-report-";
    break;
  case '\x1d':
    iVar2 = 0xc;
    pcVar1 = "content-";
    break;
  case '\x1e':
    pcVar1 = "co";
    break;
  case '\x1f':
    iVar2 = 3;
    pcVar1 = "dnt";
    break;
  case ' ':
    iVar2 = 4;
    pcVar1 = (char *)&DAT_0056d8a0;
    break;
  case '!':
    iVar2 = 4;
    pcVar1 = (char *)&DAT_0056d3dc;
    break;
  case '\"':
    pcVar1 = "ex";
    break;
  case '#':
    iVar2 = 7;
    pcVar1 = "exp";
    break;
  case '$':
    iVar2 = 9;
    pcVar1 = "forwa";
    break;
  case '%':
    iVar2 = 4;
    pcVar1 = "fromp\x01";
    break;
  case '&':
    iVar2 = 4;
    pcVar1 = (char *)&DAT_0056d4cc;
    break;
  case '\'':
    iVar2 = 8;
    pcVar1 = &DAT_005710c0;
    break;
  case '(':
    iVar2 = 0x11;
    pcVar1 = "if-modified-s";
    break;
  case ')':
    iVar2 = 0xd;
    pcVar1 = "if-none-m";
    break;
  case '*':
    iVar2 = 8;
    pcVar1 = &DAT_00570e78;
    break;
  case '+':
    iVar2 = 0x13;
    pcVar1 = "if-unmodified-s";
    break;
  case ',':
    iVar2 = 0xd;
    pcVar1 = "last-modi";
    break;
  case '-':
    iVar2 = 4;
    pcVar1 = (char *)&DAT_0056e4f0;
    break;
  case '.':
    iVar2 = 8;
    pcVar1 = &DAT_005704f8;
    break;
  case '/':
    iVar2 = 0xc;
    pcVar1 = "max-forw";
    break;
  case '0':
    pcVar1 = "or";
    break;
  case '1':
    pcVar1 = "pr";
    break;
  case '2':
    iVar2 = 0x12;
    pcVar1 = "proxy-authenti";
    break;
  case '3':
    iVar2 = 0x13;
    pcVar1 = "proxy-authoriza";
    break;
  case '4':
    iVar2 = 0xf;
    pcVar1 = "public-key-";
    break;
  case '5':
    iVar2 = 0x1b;
    pcVar1 = "public-key-pins-report-";
    break;
  case '6':
    iVar2 = 5;
    pcVar1 = "r";
    break;
  case '7':
    iVar2 = 7;
    pcVar1 = "ref";
    break;
  case '8':
    iVar2 = 0xf;
    pcVar1 = "referrer-po";
    break;
  case '9':
    iVar2 = 7;
    pcVar1 = "ref";
    break;
  case ':':
    iVar2 = 0xb;
    pcVar1 = "retry-a";
    break;
  case ';':
    iVar2 = 0x14;
    pcVar1 = "sec-websocket-ac";
    break;
  case '<':
    iVar2 = 0x18;
    pcVar1 = "sec-websocket-extens";
    break;
  case '=':
    iVar2 = 0x11;
    pcVar1 = "sec-websocket";
    break;
  case '>':
    iVar2 = 0x16;
    pcVar1 = "sec-websocket-prot";
    break;
  case '?':
    iVar2 = 0x15;
    pcVar1 = "sec-websocket-ver";
    break;
  case '@':
    pcVar1 = "se";
    break;
  case 'A':
    iVar2 = 10;
    pcVar1 = "s";
    break;
  case 'B':
    iVar2 = 0x19;
    pcVar1 = "strict-transport-secu";
    break;
  case 'C':
    iVar2 = 2;
    pcVar1 = "te";
    break;
  case 'D':
    iVar2 = 7;
    pcVar1 = "tra";
    break;
  case 'E':
    iVar2 = 0x11;
    pcVar1 = "transfer-enco";
    break;
  case 'F':
    iVar2 = 10;
    pcVar1 = "user-a";
    break;
  case 'G':
    iVar2 = 7;
    pcVar1 = "upg";
    break;
  case 'H':
    iVar2 = 0x19;
    pcVar1 = "upgrade-insecure-requ";
    break;
  case 'I':
    iVar2 = 4;
    pcVar1 = (char *)&DAT_0056f14c;
    break;
  case 'J':
    iVar2 = 3;
    pcVar1 = "via";
    break;
  case 'K':
    iVar2 = 7;
    pcVar1 = "war";
    break;
  case 'L':
    pcVar1 = &UNK_0056ac78;
    goto LAB_00f80ae0;
  case 'M':
    iVar2 = 0x16;
    pcVar1 = "x-content-type-opt";
    break;
  case 'N':
    iVar2 = 0x16;
    pcVar1 = "x-dns-prefetch-con";
    break;
  case 'O':
    iVar2 = 0xf;
    pcVar1 = "x-frame-opt";
    break;
  case 'P':
    pcVar1 = &DAT_00569298;
LAB_00f80ae0:
    iVar2 = 0x10;
  }
switchD_00f805a4_caseD_0:
  return CONCAT44(iVar2,pcVar1);
}

