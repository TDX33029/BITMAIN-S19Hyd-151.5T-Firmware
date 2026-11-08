// FUN_008e73b8 @ 008e73b8 size=784 calls_out=3 calls_in=1
// strings: 

void FUN_008e73b8(uint *param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6
                 ,uint param_7,uint param_8,uint param_9)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  
  uVar22 = *(uint *)(param_2 + 8);
  bVar30 = 0x1ffffffe < uVar22;
  bVar29 = uVar22 == 0x1fffffff;
  uVar9 = uVar22 * 8;
  if (uVar22 < 0x20000000) {
    bVar30 = 0x7ffffffb < uVar9;
    bVar29 = uVar9 == 0x7ffffffc;
  }
  if (bVar30 && !bVar29) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar9 == 0) {
    uVar9 = 0;
    uVar2 = 4;
  }
  else {
    puVar10 = *(undefined4 **)(param_2 + 4);
    uVar2 = thunk_FUN_016d4a50(uVar9);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9);
    }
    if (uVar22 != 0) {
      puVar24 = puVar10 + uVar22 * 2;
      iVar7 = 0;
      uVar9 = uVar22;
      do {
        if (puVar10 == puVar24) break;
        piVar17 = (int *)*puVar10;
        uVar9 = uVar9 - 1;
        uVar11 = puVar10[1];
        do {
          iVar15 = *piVar17;
          bVar29 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar29);
        *piVar17 = iVar15 + 1;
        if (iVar15 < 0) goto LAB_008e7574;
        puVar10 = puVar10 + 2;
        puVar5 = (undefined4 *)(uVar2 + iVar7 * 8);
        *puVar5 = piVar17;
        iVar7 = iVar7 + 1;
        puVar5[1] = uVar11;
      } while (uVar9 != 0);
    }
    uVar9 = uVar22;
  }
  piVar17 = *(int **)(param_2 + 0x18);
  do {
    iVar7 = *piVar17;
    bVar29 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar29);
  *piVar17 = iVar7 + 1;
  if (iVar7 < 0) {
LAB_008e7574:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x8e7574);
    (*pcVar1)();
  }
  uVar23 = *(uint *)(param_2 + 0x14);
  uVar11 = 0;
  uVar18 = *(uint *)(param_2 + 0x1c);
  bVar30 = 0x1ffffffe < uVar23;
  bVar29 = uVar23 == 0x1fffffff;
  uVar8 = uVar23 * 8;
  if (uVar23 < 0x20000000) {
    bVar30 = 0x7ffffffb < uVar8;
    bVar29 = uVar8 == 0x7ffffffc;
  }
  if (bVar30 && !bVar29) {
LAB_008e74cc:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar11,uVar8);
  }
  uVar3 = *(uint *)(param_2 + 0x2c);
  if (uVar8 == 0) {
    uVar4 = 4;
    uVar8 = 0;
  }
  else {
    piVar19 = *(int **)(param_2 + 0x10);
    uVar4 = thunk_FUN_016d4a50(uVar8);
    if (uVar4 == 0) {
      uVar11 = 4;
      goto LAB_008e74cc;
    }
    if (uVar23 != 0) {
      piVar25 = piVar19 + uVar23 * 2;
      uVar8 = uVar23;
      iVar7 = 0;
      do {
        if (piVar19 == piVar25) break;
        iVar15 = *piVar19;
        iVar27 = piVar19[1];
        if (iVar15 != -1) {
          puVar16 = (uint *)(iVar15 + 4);
          do {
            uVar13 = *puVar16;
            bVar29 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar29);
          *puVar16 = uVar13 + 1;
          if (0x7fffffff < uVar13) goto LAB_008e7574;
        }
        piVar12 = (int *)(uVar4 + iVar7 * 8);
        *piVar12 = iVar15;
        uVar8 = uVar8 - 1;
        piVar19 = piVar19 + 2;
        piVar12[1] = iVar27;
        iVar7 = iVar7 + 1;
      } while (uVar8 != 0);
    }
    uVar8 = uVar23;
  }
  uVar14 = *(uint *)(param_2 + 0x20);
  uVar28 = *(uint *)(param_2 + 0x24);
  uVar6 = *(uint *)(param_2 + 0x28);
  uVar20 = param_3 + param_7;
  uVar13 = param_4 + param_8 + (uint)CARRY4(param_3,param_7);
  if ((int)param_8 < 0 != (int)((param_4 ^ uVar13) & ~(param_4 ^ param_8)) < 0) {
LAB_008e7644:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar26 = (undefined1 *)(param_9 + param_5);
  if (&DAT_3b9aca00 <= puVar26) {
    bVar29 = 0xfffffffe < uVar20;
    uVar20 = uVar20 + 1;
    uVar21 = uVar13 + bVar29;
    if ((int)((uVar13 ^ uVar21) & ~uVar13) < 0) goto LAB_008e7644;
    puVar26 = puVar26 + -1000000000;
    uVar13 = uVar21;
  }
  *param_1 = uVar9;
  param_1[1] = uVar2;
  param_1[2] = uVar22;
  param_1[3] = uVar8;
  param_1[4] = uVar4;
  param_1[5] = uVar23;
  param_1[6] = (uint)piVar17;
  param_1[7] = uVar18;
  param_1[8] = uVar14;
  param_1[9] = uVar28;
  param_1[10] = uVar6;
  param_1[0xb] = uVar3;
  param_1[0x12] = (uint)puVar26;
  param_1[0xc] = param_7;
  param_1[0xd] = param_8;
  param_1[0x10] = uVar20;
  param_1[0x11] = uVar13;
  param_1[0xe] = param_9;
  return;
}

