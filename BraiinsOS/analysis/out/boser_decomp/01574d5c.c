// FUN_01574d5c @ 01574d5c size=640 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01574d5c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  int iVar19;
  int *piVar20;
  undefined4 uVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 *local_88;
  undefined4 *local_38;
  undefined4 *local_34;
  int iStack_30;
  undefined4 *local_2c;
  
  piVar20 = *(int **)(param_2 + 0x38);
  do {
    iVar3 = *piVar20;
    bVar22 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar22);
  *piVar20 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x1574fe0);
    (*pcVar2)();
  }
  uVar21 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  uVar5 = FUN_015707a4();
  puVar18 = (undefined4 *)param_3[2];
  uVar6 = *param_3;
  puVar11 = (undefined4 *)param_3[1];
  bVar23 = (undefined4 *)0x7fffffe < puVar18;
  bVar22 = puVar18 == (undefined4 *)0x7ffffff;
  uVar17 = 0;
  uVar1 = (int)puVar18 * 0x20;
  puVar10 = puVar11 + (int)puVar18 * 2;
  if (puVar18 < (undefined4 *)0x8000000) {
    bVar23 = 0x7ffffffb < uVar1;
    bVar22 = uVar1 == 0x7ffffffc;
    local_88 = param_1;
  }
  if (!bVar23 || bVar22) {
    iVar3 = 0;
    if (uVar1 == 0) {
      iVar7 = 4;
      puVar18 = (undefined4 *)0x0;
    }
    else {
      uVar17 = 4;
      iVar7 = FUN_01298504(uVar1,4);
      if (iVar7 == 0) goto LAB_01574dec;
    }
    local_38 = puVar11;
    local_34 = puVar11;
    iStack_30 = uVar6;
    local_2c = puVar10;
    if (puVar11 != puVar10) {
      uVar17 = *(undefined4 *)(param_2 + 0x84);
      iVar16 = 0;
      iVar19 = 0x10;
      iVar3 = 0;
      do {
        puVar8 = (undefined4 *)((int)puVar11 + iVar16);
        uVar12 = *puVar8;
        uVar13 = puVar8[1];
        uVar24 = FUN_01534eac((undefined4 *)(param_2 + 0x38),iVar3);
        uVar14 = (undefined4)((ulonglong)uVar24 >> 0x20);
        uVar9 = FUN_01570620(uVar4,uVar17,(int)uVar24,uVar14);
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar7 + iVar19 + -0x10) = uVar12;
        iVar15 = iVar7 + iVar16 * 4;
        iVar16 = iVar16 + 8;
        *(undefined4 *)(iVar15 + 0xc) = uVar14;
        *(undefined4 *)(iVar15 + 4) = uVar13;
        *(int *)(iVar15 + 8) = (int)uVar24;
        *(undefined4 *)(iVar7 + iVar19) = uVar9;
        iVar19 = iVar19 + 0x20;
        *(undefined4 *)(iVar15 + 0x1c) = 3;
      } while (puVar8 + 2 != puVar10);
      local_34 = (undefined4 *)((int)puVar11 + iVar16);
    }
    FUN_01573744(&local_38);
    local_38 = puVar18;
    local_34 = (undefined4 *)iVar7;
    iStack_30 = iVar3;
    puVar8 = (undefined4 *)thunk_FUN_01be5118(0x14);
    iVar3 = iStack_30;
    puVar18 = local_34;
    puVar11 = local_38;
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x14);
    }
    *puVar8 = 1;
    puVar8[1] = 1;
    puVar8[2] = uVar6;
    puVar8[3] = puVar10;
    puVar8[4] = 3;
    puVar10 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    *puVar10 = 1;
    puVar10[1] = 1;
    puVar10[2] = 0x80000002;
    puVar10[3] = puVar11;
    puVar10[4] = puVar18;
    puVar10[5] = iVar3;
    *local_88 = puVar10;
    local_88[1] = piVar20;
    local_88[2] = uVar21;
    local_88[3] = puVar8;
    local_88[4] = uVar5;
    return;
  }
LAB_01574dec:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar17,uVar1);
}

