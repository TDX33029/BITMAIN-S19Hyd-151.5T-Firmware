// FUN_01a68498 @ 01a68498 size=1576 calls_out=4 calls_in=3
// strings: ions | trol | ions | ning | rade | gent

void FUN_01a68498(undefined4 *param_1,undefined4 param_2,char *param_3,uint param_4,
                 undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined **ppuStack_48;
  char *pcStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  char *local_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  cVar1 = FUN_0140e018(param_3,param_4);
  if (cVar1 == 'Q') {
    uVar2 = 0;
    do {
      if (""[(byte)param_3[uVar2]] == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0,0,&DAT_01cf40c4);
      }
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    local_2c = 0;
    local_38 = &PTR_FUN_01cf40d4;
    local_34 = param_3;
    uStack_30 = param_4;
    goto LAB_01a68b64;
  }
  local_34 = (char *)CONCAT31(local_34._1_3_,cVar1);
  param_4 = 6;
  local_38 = (undefined **)0x0;
  param_3 = 
  "accept/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:92methodevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:102content_typeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-web-0.13.1/src/service.rs:112application/grpc-webapplication/grpc-web+protoapplication/grpc-web-textapplication/grpc-web-text+proto\r\ntrailers couldn\'t parse valuenightlymissing stable versionmissing RC iterRC is zerorcrequest timed outoverflow in Duration::newassertion failed: retry_percent >= 0.0assertion failed: retry_percent <= 1000.0generation lockoverflow when subtracting durations./\x02.//[consistency] already confirmed that there are no more dot segments[consistency] loop condition of the previous loopdeflatebrinternal error: entered unreachable code: this case should be handled by the callerInvalidUriimage/image/svg+xmltext/event-stream"
  ;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\x01':
    param_3 = "accept-charset";
    goto LAB_01a6889c;
  case '\x02':
    param_4 = 0xf;
    param_3 = "accept-enco";
    break;
  case '\x03':
    param_4 = 0xf;
    param_3 = "accept-lang";
    break;
  case '\x04':
    param_4 = 0xd;
    param_3 = "accept-ra";
    break;
  case '\x05':
    param_4 = 0x20;
    param_3 = "access-control-allow-credent";
    break;
  case '\x06':
    param_4 = 0x1c;
    param_3 = "access-control-allow-hea";
    break;
  case '\a':
    param_4 = 0x1c;
    param_3 = "access-control-allow-met";
    break;
  case '\b':
    param_4 = 0x1b;
    param_3 = "access-control-allow-or";
    break;
  case '\t':
    param_4 = 0x1d;
    param_3 = "access-control-expose-hea";
    break;
  case '\n':
    param_4 = 0x16;
    param_3 = "access-control-max";
    break;
  case '\v':
    param_4 = 0x1e;
    param_3 = "access-control-request-hea";
    break;
  case '\f':
    param_4 = 0x1d;
    param_3 = "access-control-request-me";
    break;
  case '\r':
    param_4 = 3;
    param_3 = "age";
    break;
  case '\x0e':
    param_4 = 5;
    param_3 = "a";
    break;
  case '\x0f':
    param_4 = 7;
    param_3 = "alt";
    break;
  case '\x10':
    param_4 = 0xd;
    param_3 = "authoriza";
    break;
  case '\x11':
    param_4 = 0xd;
    param_3 = "cache-con";
    break;
  case '\x12':
    param_4 = 0xc;
    param_3 = "cache-st";
    break;
  case '\x13':
    param_4 = 0x11;
    param_3 = "cdn-cache-con";
    break;
  case '\x14':
    param_4 = 10;
    param_3 = "c";
    break;
  case '\x15':
    param_4 = 0x13;
    param_3 = "content-disposi";
    break;
  case '\x16':
    param_4 = 0x10;
    param_3 = &UNK_0056a378;
    break;
  case '\x17':
    param_4 = 0x10;
    param_3 = &UNK_0056a018;
    break;
  case '\x18':
    param_3 = "content-le";
LAB_01a6889c:
    param_4 = 0xe;
    break;
  case '\x19':
    param_4 = 0x10;
    param_3 = &UNK_00568458;
    break;
  case '\x1a':
    param_4 = 0xd;
    param_3 = "content-r";
    break;
  case '\x1b':
    param_4 = 0x17;
    param_3 = "content-security-po";
    break;
  case '\x1c':
    param_4 = 0x23;
    param_3 = "content-security-policy-report-";
    break;
  case '\x1d':
    param_4 = 0xc;
    param_3 = "content-";
    break;
  case '\x1e':
    param_3 = "co";
    break;
  case '\x1f':
    param_4 = 3;
    param_3 = "dnt";
    break;
  case ' ':
    param_4 = 4;
    param_3 = (char *)&DAT_0056d8a0;
    break;
  case '!':
    param_4 = 4;
    param_3 = (char *)&DAT_0056d3dc;
    break;
  case '\"':
    param_3 = "ex";
    break;
  case '#':
    param_4 = 7;
    param_3 = "exp";
    break;
  case '$':
    param_4 = 9;
    param_3 = "forwa";
    break;
  case '%':
    param_4 = 4;
    param_3 = "fromp\x01";
    break;
  case '&':
    param_4 = 4;
    param_3 = (char *)&DAT_0056d4cc;
    break;
  case '\'':
    param_4 = 8;
    param_3 = &DAT_005710c0;
    break;
  case '(':
    param_4 = 0x11;
    param_3 = "if-modified-s";
    break;
  case ')':
    param_4 = 0xd;
    param_3 = "if-none-m";
    break;
  case '*':
    param_4 = 8;
    param_3 = &DAT_00570e78;
    break;
  case '+':
    param_4 = 0x13;
    param_3 = "if-unmodified-s";
    break;
  case ',':
    param_4 = 0xd;
    param_3 = "last-modi";
    break;
  case '-':
    param_4 = 4;
    param_3 = (char *)&DAT_0056e4f0;
    break;
  case '.':
    param_4 = 8;
    param_3 = &DAT_005704f8;
    break;
  case '/':
    param_4 = 0xc;
    param_3 = "max-forw";
    break;
  case '0':
    param_3 = "or";
    break;
  case '1':
    param_3 = "pr";
    break;
  case '2':
    param_4 = 0x12;
    param_3 = "proxy-authenti";
    break;
  case '3':
    param_4 = 0x13;
    param_3 = "proxy-authoriza";
    break;
  case '4':
    param_4 = 0xf;
    param_3 = "public-key-";
    break;
  case '5':
    param_4 = 0x1b;
    param_3 = "public-key-pins-report-";
    break;
  case '6':
    param_4 = 5;
    param_3 = "r";
    break;
  case '7':
    param_4 = 7;
    param_3 = "ref";
    break;
  case '8':
    param_4 = 0xf;
    param_3 = "referrer-po";
    break;
  case '9':
    param_4 = 7;
    param_3 = "ref";
    break;
  case ':':
    param_4 = 0xb;
    param_3 = "retry-a";
    break;
  case ';':
    param_4 = 0x14;
    param_3 = "sec-websocket-ac";
    break;
  case '<':
    param_4 = 0x18;
    param_3 = "sec-websocket-extens";
    break;
  case '=':
    param_4 = 0x11;
    param_3 = "sec-websocket";
    break;
  case '>':
    param_4 = 0x16;
    param_3 = "sec-websocket-prot";
    break;
  case '?':
    param_4 = 0x15;
    param_3 = "sec-websocket-ver";
    break;
  case '@':
    param_3 = "se";
    break;
  case 'A':
    param_4 = 10;
    param_3 = "s";
    break;
  case 'B':
    param_4 = 0x19;
    param_3 = "strict-transport-secu";
    break;
  case 'C':
    param_4 = 2;
    param_3 = "te";
    break;
  case 'D':
    param_4 = 7;
    param_3 = "tra";
    break;
  case 'E':
    param_4 = 0x11;
    param_3 = "transfer-enco";
    break;
  case 'F':
    param_4 = 10;
    param_3 = "user-a";
    break;
  case 'G':
    param_4 = 7;
    param_3 = "upg";
    break;
  case 'H':
    param_4 = 0x19;
    param_3 = "upgrade-insecure-requ";
    break;
  case 'I':
    param_4 = 4;
    param_3 = (char *)&DAT_0056f14c;
    break;
  case 'J':
    param_4 = 3;
    param_3 = "via";
    break;
  case 'K':
    param_4 = 7;
    param_3 = "war";
    break;
  case 'L':
    param_4 = 0x10;
    param_3 = &UNK_0056ac78;
    break;
  case 'M':
    param_4 = 0x16;
    param_3 = "x-content-type-opt";
    break;
  case 'N':
    param_4 = 0x16;
    param_3 = "x-dns-prefetch-con";
    break;
  case 'O':
    param_4 = 0xf;
    param_3 = "x-frame-opt";
    break;
  case 'P':
    param_4 = 0x10;
    param_3 = &DAT_00569298;
  }
  if (3 < param_4) {
LAB_01a68b64:
    if (*(int *)(param_3 + (param_4 - 4)) == 0x6e69622d) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid metadata keyClosing",0x29,&DAT_01d2d834);
    }
  }
  ppuStack_48 = local_38;
  pcStack_44 = local_34;
  uStack_40 = uStack_30;
  uStack_3c = local_2c;
  local_38 = (undefined **)*param_5;
  local_34 = (char *)param_5[1];
  uStack_30 = param_5[2];
  local_2c = param_5[3];
  uStack_28 = param_5[4];
  FUN_00714c58(&local_60,param_2);
  if ((char)local_50 == '\x02') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *param_1 = local_60;
    param_1[1] = uStack_5c;
    param_1[2] = uStack_58;
    param_1[3] = uStack_54;
    param_1[4] = local_50;
  }
  return;
}

