// FUN_0095db3c @ 0095db3c size=564 calls_out=3 calls_in=2
// strings: 

void FUN_0095db3c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_40;
  int local_34;
  
  iVar10 = *(int *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 4);
  iVar6 = 1;
  iVar4 = 1;
  if ((iVar10 != 0) && (iVar4 = thunk_FUN_016d4a50(iVar10), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar10);
  }
  FUN_016dd1aa(iVar4,uVar3,iVar10);
  iVar8 = *(int *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if ((iVar8 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar8), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar8);
  }
  FUN_016dd1aa(iVar6,uVar3,iVar8);
  if (*(int *)(param_2 + 0x3c) == -0x80000000) {
    local_34 = -0x80000000;
  }
  else {
    local_34 = *(int *)(param_2 + 0x44);
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    if (local_34 == 0) {
      local_40 = 1;
    }
    else {
      local_40 = thunk_FUN_016d4a50(local_34);
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_34);
      }
    }
    FUN_016dd1aa(local_40,uVar3,local_34);
  }
  iVar11 = *(int *)(param_2 + 0x20);
  iVar7 = 1;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = 1;
  if ((iVar11 != 0) && (iVar1 = thunk_FUN_016d4a50(iVar11), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar11);
  }
  FUN_016dd1aa(iVar1,uVar3,iVar11);
  iVar9 = *(int *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  if ((iVar9 != 0) && (iVar7 = thunk_FUN_016d4a50(iVar9), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar9);
  }
  FUN_016dd1aa(iVar7,uVar3,iVar9);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  iVar5 = *(int *)(param_2 + 0x38);
  if (iVar5 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar5);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar2,uVar3,iVar5);
  param_1[0x10] = local_40;
  param_1[0x11] = local_34;
  param_1[0xf] = local_34;
  *param_1 = iVar10;
  param_1[2] = iVar10;
  param_1[1] = iVar4;
  param_1[4] = iVar6;
  param_1[5] = iVar8;
  param_1[6] = iVar11;
  param_1[8] = iVar11;
  param_1[9] = iVar9;
  param_1[10] = iVar7;
  param_1[0xb] = iVar9;
  param_1[0xc] = iVar5;
  param_1[0xd] = iVar2;
  param_1[0xe] = iVar5;
  param_1[3] = iVar8;
  param_1[7] = iVar1;
  return;
}

