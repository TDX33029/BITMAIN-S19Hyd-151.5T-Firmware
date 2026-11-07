// FUN_00042fa0 @ 00042fa0  size=212  callers=2
// program: bmminer


void FUN_00042fa0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_00b2d274;
  if (param_2 == 0) {
    iVar2 = param_1[1];
    if (iVar2 == 0x10) {
      return;
    }
  }
  else {
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_30 = 8;
    local_1c = param_2;
    FUN_00042d88(&local_34);
    iVar2 = param_1[1];
    if (iVar2 == 0x10) goto LAB_00043028;
  }
  do {
    if (iVar2 == 8) {
      FUN_00042fa0(*param_1,param_1[6]);
    }
    else {
      FUN_00042c14(param_1);
      FUN_00042d88(param_1);
    }
    iVar2 = param_1[8];
    param_1 = param_1 + 7;
  } while (iVar2 != 0x10);
  if (param_2 == 0) {
    return;
  }
LAB_00043028:
  *(int *)(DAT_00b2d26c + iVar1 * 0x1c + 0x14) = DAT_00b2d274 - iVar1;
  return;
}

