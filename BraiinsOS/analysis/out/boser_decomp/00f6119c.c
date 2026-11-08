// FUN_00f6119c @ 00f6119c size=172 calls_out=2 calls_in=4
// strings: 

void FUN_00f6119c(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint unaff_r8;
  uint uVar2;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar2 = 0;
  local_40 = 1;
  local_3c = 0;
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) != 2) {
    FUN_019edbc4(0);
    if ((uVar1 & 1) != 0) {
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    uVar2 = (uVar1 & 0xffffff) >> 8;
    unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
  }
  (**(code **)(*(int *)(*param_2 + 8) + 0xc))(*param_2,&local_40,param_3);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = iStack_2c;
  uVar1 = 0;
  if (local_40 != 0 || local_3c != 0) {
    uVar1 = uVar2;
  }
  FUN_019edbc4(uVar1,unaff_r8);
  return;
}

