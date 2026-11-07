// FUN_00953084 @ 00953084 size=192 calls_out=1 calls_in=18
// strings: 

void FUN_00953084(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  piVar2 = param_2 + 1;
  iVar6 = *param_2;
  if (iVar6 == 0) {
    param_1[1] = *piVar2;
    *param_1 = 0;
    return;
  }
  if (iVar6 == 1) {
    local_38 = *piVar2;
    local_34 = param_2[2];
    iVar5 = param_2[3];
    iStack_2c = param_2[4];
    iStack_28 = param_2[5];
    if (iVar5 == local_38) {
      local_30 = iVar5;
      FUN_0166e5d0(&local_38);
    }
  }
  else {
    local_38 = *piVar2;
    local_34 = param_2[2];
    iVar5 = param_2[3];
    iStack_2c = param_2[4];
    iStack_28 = param_2[5];
    if (iVar5 == local_38) {
      local_30 = iVar5;
      FUN_0166e5d0(&local_38);
    }
  }
  uVar4 = param_3[2];
  uVar3 = param_3[1];
  puVar1 = (undefined4 *)(local_34 + iVar5 * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = iVar5 + 1;
  param_1[4] = iStack_2c;
  param_1[5] = iStack_28;
  *param_1 = iVar6;
  return;
}

