// FUN_00748cc4 @ 00748cc4 size=180 calls_out=3 calls_in=15
// strings: 

void FUN_00748cc4(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint unaff_r8;
  uint uVar2;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = 0;
  local_34 = 0;
  local_38 = 1;
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) != 2) {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = 1;
      param_1[1] = 0;
      FUN_014b4d20(&local_38);
      return;
    }
    uVar2 = (uVar1 & 0xffffff) >> 8;
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
  }
  (**(code **)(*(int *)(param_2 + 8) + 0xc))(param_2,&local_38,param_3);
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = iStack_30;
  param_1[3] = iStack_2c;
  param_1[4] = iStack_28;
  param_1[5] = iStack_24;
  uVar1 = 0;
  if (local_38 != 0 || local_34 != 0) {
    uVar1 = uVar2;
  }
  FUN_019edbc4(uVar1,unaff_r8);
  return;
}

