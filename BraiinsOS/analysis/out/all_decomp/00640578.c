// FUN_00640578 @ 00640578 size=348 calls_out=1 calls_in=1
// strings: am1-s9 | stm32mp157c-ii1-am2 | am2-s17 | am3-bbb | am3-aml | stm32mp157c-ii2-bmm1

undefined4 FUN_00640578(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 9;
  switch(param_2) {
  case 6:
    iVar1 = thunk_FUN_016dd50a(param_1,"am1-s9",6);
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_1,"am2-s17",7);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"am3-bbb",7);
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,"am3-aml",7);
    if (iVar1 == 0) {
      return 3;
    }
    break;
  case 9:
    iVar1 = thunk_FUN_016dd50a(param_1,"simulator",9);
    if (iVar1 == 0) {
      uVar2 = 8;
    }
    return uVar2;
  case 0xc:
    iVar1 = thunk_FUN_016dd50a(param_1,"zynq-bm3-am2",0xc);
    if (iVar1 == 0) {
      return 4;
    }
    break;
  case 0xe:
    iVar1 = thunk_FUN_016dd50a(param_1,
                               "cvitek-bm1-am2Received unsupported Stratum V2 mining message",0xe);
    if (iVar1 == 0) {
      return 5;
    }
    break;
  case 0x13:
    iVar1 = thunk_FUN_016dd50a(param_1,"stm32mp157c-ii1-am2",0x13);
    uVar2 = 9;
    if (iVar1 == 0) {
      uVar2 = 6;
    }
    return uVar2;
  case 0x14:
    iVar1 = thunk_FUN_016dd50a(param_1,"stm32mp157c-ii2-bmm1",0x14);
    uVar2 = 9;
    if (iVar1 == 0) {
      uVar2 = 7;
    }
    return uVar2;
  }
  return 9;
}

