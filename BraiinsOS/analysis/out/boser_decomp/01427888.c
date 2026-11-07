// FUN_01427888 @ 01427888 size=408 calls_out=0 calls_in=1
// strings: 

void FUN_01427888(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = *param_1;
  iVar1 = 0x2a;
  pcVar5 = "connection closed before message completed";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(iVar4 + 8)) {
  case 0:
    uVar3 = (uint)*(byte *)(iVar4 + 9);
    uVar2 = 5;
    if (3 < uVar3) {
      uVar2 = uVar3 - 4;
    }
    pcVar5 = "invalid HTTP method parsed";
    iVar1 = 0x1a;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2 & 0xff) {
    case 1:
      iVar1 = 0x1b;
      pcVar5 = "invalid HTTP version parsed";
      break;
    case 2:
      iVar1 = 0x31;
      pcVar5 = "invalid HTTP version parsed (found HTTP2 preface)";
      break;
    case 3:
      iVar1 = 0xb;
      pcVar5 = "invalid URI";
      break;
    case 4:
      iVar1 = 0xc;
      pcVar5 = 
      "URI too longinvalid HTTP header parsedinvalid content-length parsedunexpected transfer-encoding parsed"
      ;
      break;
    case 5:
      iVar1 = uVar3 * 3 + 0x1a;
      pcVar5 = *(char **)(&DAT_01d3260c + uVar3 * 4);
      break;
    case 6:
      iVar1 = 0x19;
      pcVar5 = "message head is too large";
      break;
    case 7:
      iVar1 = 0x1f;
      pcVar5 = "invalid HTTP status-code parsed";
      break;
    case 8:
      iVar1 = 0x42;
      pcVar5 = "internal error inside Hyper and/or its dependencies, please report";
    }
    break;
  case 1:
    pcVar5 = (&PTR_DAT_01d325e8)[*(byte *)(iVar4 + 9)];
    iVar1 = *(int *)(&DAT_00536f10 + (uint)*(byte *)(iVar4 + 9) * 4);
    break;
  case 3:
    iVar1 = 0x2b;
    pcVar5 = "received unexpected message from connection";
    break;
  case 4:
    iVar1 = 0x16;
    pcVar5 = "operation was canceled";
    break;
  case 5:
    iVar1 = 0xe;
    pcVar5 = "channel clo";
    break;
  case 6:
    iVar1 = 0x10;
    pcVar5 = 
    "connection errorAmerica/St LuciaReverseDFAEngineapplication/wasmchipConsumptionWAfrica/BujumburaAmerica/St_Lucia\a"
    ;
    break;
  case 7:
    iVar1 = 0x1f;
    pcVar5 = &UNK_00477d9c;
    break;
  case 8:
    iVar1 = 0x24;
    pcVar5 = "error reading a body from connection";
    break;
  case 9:
    iVar1 = 0x22;
    pcVar5 = "error writing a body to connection";
    break;
  case 10:
    iVar1 = 0x1e;
    pcVar5 = "error shutting down connection";
    break;
  case 0xb:
    iVar1 = 0xb;
    pcVar5 = 
    "http2 errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:583"
    ;
  }
                    /* WARNING: Could not recover jumptable at 0x014279f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar5,iVar1);
  return;
}

