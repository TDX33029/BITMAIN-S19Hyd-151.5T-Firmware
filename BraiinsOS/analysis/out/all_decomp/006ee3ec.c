// FUN_006ee3ec @ 006ee3ec size=392 calls_out=6 calls_in=0
// strings: 

void FUN_006ee3ec(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_2 + 0x30) == -0x80000000) {
    param_1[6] = 0x80000000;
    return;
  }
  iVar6 = *(int *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  if (iVar6 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar6);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  FUN_016dd1aa(iVar2,uVar5,iVar6);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x18)) {
  case 0:
    uVar1 = 0;
    break;
  default:
    local_40 = *(undefined4 *)(param_2 + 0x18);
    local_3c = *(int *)(param_2 + 0x1c);
    local_38 = *(int *)(param_2 + 0x20);
    local_34 = *(int *)(param_2 + 0x24);
    uStack_30 = *(undefined4 *)(param_2 + 0x28);
    uStack_2c = *(undefined4 *)(param_2 + 0x2c);
    goto LAB_006ee544;
  case 3:
    iVar4 = *(int *)(param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    if (iVar4 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
    }
    FUN_016dd1aa(iVar3,uVar5,iVar4);
    uVar1 = 3;
    local_3c = iVar4;
    local_38 = iVar3;
    local_34 = iVar4;
    break;
  case 4:
    FUN_007ba870((uint)&local_40 | 4,param_2 + 0x1c);
    uVar1 = 4;
    break;
  case 5:
    if (*(int *)(param_2 + 0x24) == 0) {
      local_34 = 0;
      local_3c = 0;
    }
    else {
      if (*(int *)(param_2 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_00747b14((uint)&local_40 | 4,*(int *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    }
    uVar1 = 5;
  }
  local_40 = CONCAT31(local_40._1_3_,uVar1);
LAB_006ee544:
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  param_1[4] = uStack_30;
  param_1[5] = uStack_2c;
  param_1[6] = iVar6;
  param_1[7] = iVar2;
  param_1[8] = iVar6;
  return;
}

