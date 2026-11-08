// FUN_00798844 @ 00798844 size=184 calls_out=3 calls_in=11
// strings: 

void FUN_00798844(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  local_40 = 2;
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = 2;
      FUN_00798928(&local_40);
      return;
    }
    uVar2 = (uVar1 & 0xffffff) >> 8;
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
  }
  (**(code **)(*(int *)(param_2 + 8) + 0xc))(param_2,&local_40,param_3);
  if (local_40 != 2) {
    uVar2 = 0;
  }
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = local_30;
  param_1[5] = iStack_2c;
  param_1[6] = iStack_28;
  param_1[7] = iStack_24;
  FUN_019edbc4(uVar2,unaff_r8);
  return;
}

