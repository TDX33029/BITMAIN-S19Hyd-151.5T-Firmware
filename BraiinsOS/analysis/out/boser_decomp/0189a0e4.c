// FUN_0189a0e4 @ 0189a0e4 size=628 calls_out=9 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189a0e4(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21e0c);
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  local_480 = 0;
  local_47c = uVar1;
  uStack_478 = uVar2;
  uStack_474 = uVar3;
  FUN_01bed93e(&local_240,0,0x20);
  FUN_01bdb320(&local_240,&local_240,0x20,param_2 + 1,&local_480);
  local_260 = local_240;
  uStack_25c = local_23c;
  uStack_258 = uStack_238;
  uStack_254 = uStack_234;
  local_250 = local_230;
  uStack_24c = uStack_22c;
  uStack_248 = uStack_228;
  uStack_244 = uStack_224;
  FUN_01bed93e(&local_240,0,0x200);
  if (((byte)DAT_01d53480 & 1) == 0) {
    FUN_01bd59dc(&local_240,&local_260);
  }
  else {
    FUN_01bd81a8(&local_240,&local_260);
  }
  FUN_01bed4e2(&local_480,&local_240,0x200);
  if (param_5 != 0) {
    if (((byte)DAT_01d53480 & 1) == 0) {
      FUN_01bd5ac8(&local_480,param_4,param_5);
    }
    else {
      FUN_01bd82c4(&local_480,param_4,param_5);
    }
    if ((param_5 & 0xf) != 0) {
      if (((byte)DAT_01d53480 & 1) == 0) {
        FUN_01bd5ac8(&local_480,&DAT_005697d8);
      }
      else {
        FUN_01bd82c4(&local_480,&DAT_005697d8,0x10 - (param_5 & 0xf));
      }
    }
  }
  local_240 = 1;
  local_23c = uVar1;
  uStack_238 = uVar2;
  uStack_234 = uVar3;
  FUN_01bdb320(param_6,param_6,param_7,param_2 + 1,&local_240);
  if (param_7 != 0) {
    if (((byte)DAT_01d53480 & 1) == 0) {
      FUN_01bd5ac8(&local_480,param_6,param_7);
    }
    else {
      FUN_01bd82c4(&local_480,param_6,param_7);
    }
    if ((param_7 & 0xf) != 0) {
      if (((byte)DAT_01d53480 & 1) == 0) {
        FUN_01bd5ac8(&local_480,&DAT_005697d8);
      }
      else {
        FUN_01bd82c4(&local_480,&DAT_005697d8,0x10 - (param_7 & 0xf));
      }
    }
  }
  FUN_01bed4e2(&local_240,&local_480,0x200);
  FUN_0189a678(param_1 + 1,&local_240,param_5,param_7);
  *param_1 = 0;
  return;
}

