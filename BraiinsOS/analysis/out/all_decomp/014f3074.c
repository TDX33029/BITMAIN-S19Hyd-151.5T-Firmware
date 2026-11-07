// FUN_014f3074 @ 014f3074 size=632 calls_out=9 calls_in=0
// strings: 

void FUN_014f3074(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6,uint param_7)

{
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
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
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a6e70);
  }
  local_48c = *param_3;
  local_480 = 0;
  local_224 = 0;
  local_228 = 0;
  local_22c = 0;
  local_230 = 0;
  local_234 = 0;
  local_238 = 0;
  local_23c = 0;
  local_240 = 0;
  local_488 = param_3[1];
  local_484 = param_3[2];
  local_490 = 1;
  local_47c = local_48c;
  local_478 = local_488;
  local_474 = local_484;
  FUN_0183c000(&local_240,&local_240,0x20,param_2 + 1,&local_480);
  local_260 = local_240;
  uStack_25c = local_23c;
  uStack_258 = local_238;
  uStack_254 = local_234;
  local_250 = local_230;
  uStack_24c = local_22c;
  uStack_248 = local_228;
  uStack_244 = local_224;
  FUN_016dd606(&local_240,0,0x200);
  if (((byte)DAT_018dffd8 & 1) == 0) {
    FUN_018384d0(&local_240,&local_260);
  }
  else {
    FUN_018396b0(&local_240,&local_260);
  }
  FUN_016dd1aa(&local_480,&local_240,0x200);
  if (param_5 != 0) {
    if (((byte)DAT_018dffd8 & 1) == 0) {
      FUN_0183870c(&local_480,param_4,param_5);
    }
    else {
      FUN_01839964(&local_480,param_4,param_5);
    }
    if ((param_5 & 0xf) != 0) {
      if (((byte)DAT_018dffd8 & 1) == 0) {
        FUN_0183870c(&local_480,&DAT_00564da0);
      }
      else {
        FUN_01839964(&local_480,&DAT_00564da0,0x10 - (param_5 & 0xf));
      }
    }
  }
  FUN_0183c000(param_6,param_6,param_7,param_2 + 1,&local_490);
  if (param_7 != 0) {
    if (((byte)DAT_018dffd8 & 1) == 0) {
      FUN_0183870c(&local_480,param_6,param_7);
    }
    else {
      FUN_01839964(&local_480,param_6,param_7);
    }
    if ((param_7 & 0xf) != 0) {
      if (((byte)DAT_018dffd8 & 1) == 0) {
        FUN_0183870c(&local_480,&DAT_00564da0);
      }
      else {
        FUN_01839964(&local_480,&DAT_00564da0,0x10 - (param_7 & 0xf));
      }
    }
  }
  FUN_016dd1aa(&local_240,&local_480,0x200);
  FUN_014f35dc(param_1 + 1,&local_240,param_5,param_7);
  *param_1 = 0;
  return;
}

