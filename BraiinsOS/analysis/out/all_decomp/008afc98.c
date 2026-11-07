// FUN_008afc98 @ 008afc98 size=680 calls_out=3 calls_in=0
// strings: 

void FUN_008afc98(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int unaff_r8;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  
  uVar1 = *(undefined2 *)(param_2 + 0x15a);
  iVar13 = -0x80000000;
  uVar2 = *(ushort *)(param_2 + 0x158);
  uVar10 = (uint)uVar2;
  uVar3 = *(undefined2 *)(param_2 + 0x15e);
  uVar4 = *(undefined2 *)(param_2 + 0x15c);
  if (*(int *)(param_2 + 0x128) == -0x80000000) {
    iVar14 = -0x80000000;
  }
  else {
    iVar14 = *(int *)(param_2 + 0x130);
    unaff_r8 = *(int *)(param_2 + 300);
    if (iVar14 == 0) {
      local_50 = 1;
    }
    else {
      local_50 = thunk_FUN_016d4a50(iVar14);
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar14);
      }
    }
    FUN_016dd1aa(local_50,unaff_r8,iVar14);
  }
  if (*(int *)(param_2 + 0x134) != -0x80000000) {
    iVar13 = *(int *)(param_2 + 0x13c);
    unaff_r8 = *(int *)(param_2 + 0x138);
    if (iVar13 == 0) {
      local_54 = 1;
    }
    else {
      local_54 = thunk_FUN_016d4a50(iVar13);
      if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar13);
      }
    }
    FUN_016dd1aa(local_54,unaff_r8,iVar13);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x108);
  uVar8 = *(undefined4 *)(param_2 + 0x10c);
  iVar12 = -0x80000000;
  uVar9 = *(undefined4 *)(param_2 + 0x11c);
  uVar11 = *(undefined4 *)(param_2 + 0x118);
  uVar16 = *(undefined8 *)(param_2 + 0x110);
  uVar15 = *(undefined8 *)(param_2 + 0x120);
  if (*(int *)(param_2 + 0x140) == -0x80000000) {
    local_4c = 0x80000000;
    iVar5 = *(int *)(param_2 + 0x14c);
  }
  else {
    uVar10 = *(uint *)(param_2 + 0x148);
    uVar6 = 0;
    if ((int)uVar10 < 0) {
LAB_008afdcc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,uVar10);
    }
    unaff_r8 = *(int *)(param_2 + 0x144);
    if (uVar10 == 0) {
      local_58 = 1;
      local_4c = 0;
    }
    else {
      local_58 = thunk_FUN_016d4a50(uVar10);
      local_4c = uVar10;
      if (local_58 == 0) {
        uVar6 = 1;
        goto LAB_008afdcc;
      }
    }
    FUN_016dd1aa(local_58,unaff_r8,uVar10);
    iVar5 = *(int *)(param_2 + 0x14c);
  }
  if (iVar5 != -0x80000000) {
    unaff_r8 = *(int *)(param_2 + 0x154);
    uVar6 = 0;
    if (unaff_r8 < 0) {
LAB_008afe54:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,unaff_r8);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x150);
    if (unaff_r8 == 0) {
      param_2 = 1;
      iVar12 = 0;
    }
    else {
      param_2 = thunk_FUN_016d4a50(unaff_r8);
      if (param_2 == 0) {
        uVar6 = 1;
        goto LAB_008afe54;
      }
      iVar12 = unaff_r8;
    }
    FUN_016dd1aa(param_2,uVar6,unaff_r8);
  }
  *param_1 = uVar7;
  param_1[9] = local_50;
  param_1[0xc] = local_54;
  param_1[0xe] = local_4c;
  param_1[0xf] = local_58;
  *(undefined2 *)((int)param_1 + 0x56) = uVar3;
  *(undefined2 *)(param_1 + 0x15) = uVar4;
  *(undefined2 *)((int)param_1 + 0x52) = uVar1;
  param_1[4] = uVar11;
  param_1[0x12] = param_2;
  param_1[0x10] = uVar10;
  param_1[8] = iVar14;
  param_1[10] = iVar14;
  param_1[0xb] = iVar13;
  param_1[0xd] = iVar13;
  *(undefined8 *)(param_1 + 2) = uVar16;
  param_1[0x11] = iVar12;
  *(undefined8 *)(param_1 + 6) = uVar15;
  *(ushort *)(param_1 + 0x14) = uVar2;
  param_1[1] = uVar8;
  param_1[5] = uVar9;
  param_1[0x13] = unaff_r8;
  return;
}

