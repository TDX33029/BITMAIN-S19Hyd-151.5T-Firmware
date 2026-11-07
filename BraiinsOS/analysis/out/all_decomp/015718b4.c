// FUN_015718b4 @ 015718b4 size=360 calls_out=4 calls_in=1
// strings: 

void FUN_015718b4(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iStack_30;
  undefined *local_2c;
  int local_28;
  
  piVar3 = (int *)((uint)&local_40 | 4);
  if (*param_2 != 3) {
    iVar1 = *param_2;
    iVar4 = param_2[1];
    iVar5 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0xc);
    piVar3[3] = param_2[3];
    iVar6 = param_2[2];
    local_28 = 0x1c;
    *piVar3 = iVar1;
    piVar3[1] = iVar4;
    piVar3[2] = iVar6;
    local_40 = -0x7fffffff;
    local_2c = &DAT_0040d8b5;
    if (iVar5 == iVar2) {
      FUN_01571e44();
    }
    piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar5 * 0x1c);
    *piVar3 = local_40;
    piVar3[1] = local_3c;
    piVar3[2] = local_38;
    piVar3[3] = local_34;
    piVar3[4] = iStack_30;
    piVar3[5] = (int)local_2c;
    piVar3[6] = local_28;
    *(int *)(param_1 + 0x14) = iVar5 + 1;
    return;
  }
  iVar2 = param_2[1];
  iVar6 = param_2[2];
  if (param_4 == 0) {
    local_3c = 1;
  }
  else {
    local_3c = thunk_FUN_016d4a50(param_4);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(local_3c,param_3,param_4);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0xc);
  piVar3[2] = iVar2;
  piVar3[3] = iVar6;
  local_28 = 0x1c;
  local_2c = &DAT_0040d8b5;
  local_40 = param_4;
  local_38 = param_4;
  if (iVar4 == iVar1) {
    FUN_01571e44(param_1 + 0xc);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar4 * 0x1c);
  *piVar3 = local_40;
  piVar3[1] = local_3c;
  piVar3[2] = local_38;
  piVar3[3] = local_34;
  piVar3[4] = iStack_30;
  piVar3[5] = (int)local_2c;
  piVar3[6] = local_28;
  *(int *)(param_1 + 0x14) = iVar4 + 1;
  return;
}

