// FUN_00a894ac @ 00a894ac size=740 calls_out=3 calls_in=1
// strings: 

void FUN_00a894ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_64;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar12 = 1;
  iVar3 = 1;
  iVar14 = *(int *)(param_6 + 0x154);
  uVar8 = *(undefined4 *)(param_6 + 0x150);
  if ((iVar14 != 0) && (iVar3 = thunk_FUN_016d4a50(iVar14), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar14);
  }
  FUN_016dd1aa(iVar3,uVar8,iVar14);
  iVar9 = *(int *)(param_6 + 0x160);
  uVar8 = *(undefined4 *)(param_6 + 0x15c);
  if ((iVar9 != 0) && (iVar12 = thunk_FUN_016d4a50(iVar9), iVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar9);
  }
  FUN_016dd1aa(iVar12,uVar8,iVar9);
  iVar11 = *(int *)(param_6 + 400);
  iVar4 = 1;
  uVar8 = *(undefined4 *)(param_6 + 0x18c);
  local_44 = 1;
  if ((iVar11 != 0) && (iVar4 = thunk_FUN_016d4a50(iVar11), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar11);
  }
  FUN_016dd1aa(iVar4,uVar8,iVar11);
  iVar10 = *(int *)(param_6 + 0xac);
  uVar8 = *(undefined4 *)(param_6 + 0xa8);
  if ((iVar10 != 0) && (local_44 = thunk_FUN_016d4a50(iVar10), local_44 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar10);
  }
  FUN_016dd1aa(local_44,uVar8,iVar10);
  if (*(int *)(param_6 + 0xbc) == -0x80000000) {
    local_64 = -0x80000000;
  }
  else {
    local_64 = *(int *)(param_6 + 0xc4);
    uVar8 = *(undefined4 *)(param_6 + 0xc0);
    if (local_64 == 0) {
      local_7c = 1;
    }
    else {
      local_7c = thunk_FUN_016d4a50(local_64);
      if (local_7c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_64);
      }
    }
    FUN_016dd1aa(local_7c,uVar8,local_64);
  }
  uVar15 = param_5[10];
  uVar16 = *param_5;
  uVar5 = param_5[1];
  uVar13 = param_5[2];
  uVar7 = param_5[0xb];
  uVar6 = param_5[0xc];
  uVar1 = *(undefined2 *)((int)param_5 + 0x3a);
  uVar2 = *(undefined2 *)(param_5 + 0xe);
  if (uVar13 == 0x11) {
    param_1[0x1d] = iVar10;
    param_1[2] = param_3;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[0x1e] = local_44;
    param_1[0x21] = local_7c;
    param_1[0x15] = iVar3;
    param_1[0x18] = iVar12;
    param_1[0x1b] = iVar4;
    param_1[0x1c] = iVar11;
    param_1[0x1a] = iVar11;
    param_1[0xe] = uVar15;
    param_1[3] = param_4;
    param_1[0xf] = uVar7;
    param_1[0x1f] = iVar10;
    param_1[0x10] = uVar6;
    *(undefined2 *)((int)param_1 + 0x4a) = uVar1;
    param_1[0x20] = local_64;
    param_1[0x22] = local_64;
    *(undefined2 *)(param_1 + 0x12) = uVar2;
    param_1[0x17] = iVar9;
    param_1[0x19] = iVar9;
    param_1[5] = uVar5;
    param_1[7] = local_80;
    param_1[0x14] = iVar14;
    param_1[0x16] = iVar14;
    param_1[0xc] = uStack_3c;
    param_1[0xd] = uStack_38;
    param_1[4] = uVar16;
    param_1[6] = 0x11;
    param_1[8] = local_84;
    param_1[9] = uVar8;
    param_1[10] = uVar5;
    param_1[0xb] = local_40;
    return;
  }
  iVar3 = 7;
  if (1 < uVar13) {
    iVar3 = uVar13 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00a89674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00a89678 + *(int *)(&DAT_00a89678 + iVar3 * 4)))();
  return;
}

