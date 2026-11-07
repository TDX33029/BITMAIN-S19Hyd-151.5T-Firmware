// FUN_00645110 @ 00645110 size=152 calls_out=3 calls_in=6
// strings: 

void FUN_00645110(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 local_124;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_dc;
  int local_c8 [28];
  undefined1 auStack_58 [72];
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar1 = uVar2;
  if (uVar2 != 0x80000000) {
    uVar1 = param_5;
  }
  if (uVar2 != 0x80000000 && (uVar1 & 1) != 0) {
    local_118 = param_6;
    local_dc = 3;
    local_110 = 0x80000003;
    local_124 = 0x80000003;
    local_130 = 0x80000003;
    local_114 = 0;
    local_138[0] = 1;
    FUN_01a60d04(auStack_58,param_3,param_4);
    FUN_01a4b734(local_c8,param_2,auStack_58,local_138);
    if (local_c8[0] != 4) {
      FUN_005f6530(local_c8);
    }
  }
  *param_1 = &DAT_80000005;
  return;
}

