// FUN_011c8210 @ 011c8210 size=632 calls_out=7 calls_in=2
// strings: 

void FUN_011c8210(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  int local_38;
  int iStack_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  piVar17 = *(int **)(param_2 + 0x38);
  do {
    iVar3 = *piVar17;
    bVar20 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar20);
  *piVar17 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x11c848c);
    (*pcVar2)();
  }
  iVar19 = *(int *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  iVar3 = FUN_01261fac();
  local_40 = *param_3;
  puVar14 = (undefined4 *)param_3[1];
  local_30 = param_3[2];
  uVar5 = 0;
  puVar9 = puVar14 + local_30 * 2;
  uVar1 = local_30 * 0x20;
  bVar21 = 0x7fffffe < local_30;
  bVar20 = local_30 == 0x7ffffff;
  if (local_30 < 0x8000000) {
    bVar21 = 0x7ffffffb < uVar1;
    bVar20 = uVar1 == 0x7ffffffc;
  }
  if (bVar21 && !bVar20) {
LAB_011c8294:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,uVar1);
  }
  iVar16 = 0;
  if (uVar1 == 0) {
    iVar6 = 4;
    local_30 = 0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(uVar1);
    if (iVar6 == 0) {
      uVar5 = 4;
      goto LAB_011c8294;
    }
  }
  local_28 = 0;
  local_48 = puVar14;
  local_44 = puVar14;
  local_3c = puVar9;
  local_2c = iVar6;
  if (puVar14 != puVar9) {
    iVar15 = 0;
    uVar5 = *(undefined4 *)(param_2 + 0x84);
    iVar18 = 0x10;
    iVar16 = 0;
    do {
      puVar7 = (undefined4 *)((int)puVar14 + iVar15);
      uVar10 = *puVar7;
      uVar11 = puVar7[1];
      uVar22 = FUN_0123acb4((undefined4 *)(param_2 + 0x38),iVar16);
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar8 = FUN_01261dbc(uVar4,uVar5,(int)uVar22,uVar12);
      iVar16 = iVar16 + 1;
      *(undefined4 *)(iVar6 + iVar18 + -0x10) = uVar10;
      iVar13 = iVar6 + iVar15 * 4;
      iVar15 = iVar15 + 8;
      *(undefined4 *)(iVar13 + 0xc) = uVar12;
      *(undefined4 *)(iVar13 + 4) = uVar11;
      *(int *)(iVar13 + 8) = (int)uVar22;
      *(undefined4 *)(iVar6 + iVar18) = uVar8;
      iVar18 = iVar18 + 0x20;
      *(undefined4 *)(iVar13 + 0x1c) = 3;
    } while (puVar7 + 2 != puVar9);
    local_44 = (undefined4 *)((int)puVar14 + iVar15);
  }
  local_28 = iVar16;
  FUN_01242328(&local_48);
  iVar6 = local_28;
  iVar16 = local_2c;
  uVar1 = local_30;
  local_44 = (undefined4 *)0x1;
  local_38 = 3;
  local_48 = (undefined4 *)0x1;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar9 = local_48;
  puVar9[1] = local_44;
  puVar9[2] = local_40;
  puVar9[3] = local_3c;
  puVar9[4] = local_38;
  local_44 = (undefined4 *)0x1;
  local_3c = (undefined4 *)uVar1;
  local_38 = iVar16;
  iStack_34 = iVar6;
  local_40 = 0x80000002;
  local_48 = (undefined4 *)0x1;
  puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar14 = local_48;
  puVar14[1] = local_44;
  puVar14[2] = local_40;
  puVar14[3] = local_3c;
  puVar14[4] = local_38;
  puVar14[5] = iStack_34;
  *param_1 = (int)puVar14;
  param_1[1] = (int)piVar17;
  param_1[2] = iVar19;
  param_1[3] = (int)puVar9;
  param_1[4] = iVar3;
  return;
}

