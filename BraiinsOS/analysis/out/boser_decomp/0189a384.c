// FUN_0189a384 @ 0189a384 size=712 calls_out=10 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189a384(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,int param_6,uint param_7,uint param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
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
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21dfc);
  }
  uVar5 = param_7 - param_8;
  if (param_7 < param_8) {
    uVar1 = 1;
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    local_480 = 0;
    local_47c = uVar2;
    uStack_478 = uVar3;
    uStack_474 = uVar4;
    FUN_01bed93e(&local_240,0,0x20);
    FUN_01bdb320(&local_240,&local_240,0x20,param_2 + 1,&local_480);
    local_260 = local_240;
    uStack_25c = local_23c;
    uStack_258 = local_238;
    uStack_254 = local_234;
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
    iVar6 = param_6 + param_8;
    if (param_7 != param_8) {
      if (((byte)DAT_01d53480 & 1) == 0) {
        FUN_01bd5ac8(&local_480,iVar6,uVar5);
      }
      else {
        FUN_01bd82c4(&local_480,iVar6,uVar5);
      }
      if ((uVar5 & 0xf) != 0) {
        if (((byte)DAT_01d53480 & 1) == 0) {
          FUN_01bd5ac8(&local_480,&DAT_005697d8);
        }
        else {
          FUN_01bd82c4(&local_480,&DAT_005697d8,0x10 - (uVar5 & 0xf));
        }
      }
    }
    local_240 = 1;
    local_23c = uVar2;
    local_238 = uVar3;
    local_234 = uVar4;
    if (param_8 != 0) {
      FUN_01bed864(param_6,iVar6,uVar5);
      param_7 = uVar5;
    }
    FUN_01bdb320(param_6,param_6,param_7,param_2 + 1,&local_240);
    FUN_01bed4e2(&local_240,&local_480,0x200);
    FUN_0189a678(param_1 + 1,&local_240,param_5,uVar5);
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

