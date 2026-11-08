// FUN_00a25ef0 @ 00a25ef0 size=148 calls_out=3 calls_in=9
// strings: 

void FUN_00a25ef0(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_118;
  byte local_10c;
  undefined4 local_dc;
  int local_c8 [28];
  undefined1 auStack_58 [72];
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = param_2;
  uVar1 = uVar2;
  if (uVar2 != 0x80000000) {
    uVar3 = param_5 & 0xff;
    unaff_r5 = param_2;
    uVar1 = param_5;
  }
  if (uVar2 != 0x80000000 && uVar3 != 2) {
    local_10c = (byte)uVar1 & 1;
    local_118 = 0x80000003;
    local_124 = 0x80000003;
    local_130 = 0x80000003;
    local_dc = 5;
    local_138[0] = 1;
    FUN_01a60d04(auStack_58,param_3,param_4);
    FUN_01a4b734(local_c8,unaff_r5,auStack_58,local_138);
    if (local_c8[0] != 4) {
      FUN_01224384(local_c8);
    }
  }
  *param_1 = &DAT_80000005;
  return;
}

