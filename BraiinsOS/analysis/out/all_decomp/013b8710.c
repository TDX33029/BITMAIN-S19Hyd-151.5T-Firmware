// FUN_013b8710 @ 013b8710 size=984 calls_out=7 calls_in=1
// strings: match states should be a proper subset of all states

void FUN_013b8710(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  undefined *local_3c;
  uint local_34;
  uint local_28;
  
  uVar20 = *(uint *)(param_1 + 0x14);
  uVar15 = *(uint *)(param_1 + 0x130) & 0x1f;
  uVar21 = uVar20 >> uVar15;
  if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893c10);
  }
  uVar4 = uVar21 << 2;
  iVar1 = thunk_FUN_016d4a50(uVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4);
  }
  uVar2 = 0;
  do {
    *(uint *)(iVar1 + uVar2 * 4) = uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar21 != uVar2);
  iVar13 = *(int *)(param_1 + 0x10);
  iVar22 = *(int *)(param_1 + 0x134);
  uVar2 = uVar21;
  uVar17 = uVar21;
  do {
    local_3c = &DAT_01894118;
    local_34 = uVar2 - 1;
    do {
      uVar7 = uVar17;
      if (uVar7 == 0) {
        bVar25 = 0x3ffffffe < uVar21;
        bVar24 = uVar21 == 0x3fffffff;
        uVar8 = 0;
        if (uVar21 < 0x40000000) {
          bVar25 = 0x7ffffffb < uVar4;
          bVar24 = uVar4 == 0x7ffffffc;
        }
        if (bVar25 && !bVar24) {
LAB_013b88b0:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar8,uVar4);
        }
        uVar2 = 0;
        if (uVar21 == 0) {
          iVar22 = 4;
          local_28 = 0;
        }
        else {
          iVar22 = thunk_FUN_016d4a50(uVar4);
          local_28 = uVar21;
          if (iVar22 == 0) {
            uVar8 = 4;
            goto LAB_013b88b0;
          }
        }
        FUN_016dd1aa(iVar22,iVar1,uVar4);
        puVar11 = &DAT_01894128;
        goto LAB_013b8924;
      }
      uVar17 = uVar7 - 1;
      uVar6 = iVar22 + (uVar17 << uVar15);
      if (uVar20 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,uVar20,&DAT_01893b20);
      }
    } while (0xfffffbff < *(uint *)(iVar13 + uVar6 * 8 + 4));
    if (uVar2 != uVar7) {
      uVar2 = uVar17 << uVar15;
      uVar7 = uVar20 - (local_34 << uVar15);
      uVar6 = 0;
      if (uVar20 < local_34 << uVar15) {
        uVar7 = 0;
      }
      uVar18 = uVar20 - uVar2;
      puVar19 = (undefined4 *)(iVar13 + uVar2 * 8);
      uVar5 = local_34 << uVar15;
      puVar10 = (undefined4 *)(iVar13 + uVar5 * 8);
      if (uVar20 < uVar2) {
        uVar18 = 0;
      }
      do {
        if (uVar7 == uVar6) {
LAB_013b8aa8:
          local_3c = &DAT_01893c00;
          local_34 = uVar5 + uVar6;
          goto LAB_013b8ab0;
        }
        if (uVar18 == uVar6) {
          uVar5 = uVar2;
          goto LAB_013b8aa8;
        }
        uVar16 = *puVar10;
        uVar6 = uVar6 + 1;
        uVar14 = puVar10[1];
        uVar8 = puVar19[1];
        *puVar10 = *puVar19;
        puVar10[1] = uVar8;
        puVar10 = puVar10 + 2;
        *puVar19 = uVar16;
        puVar19[1] = uVar14;
        puVar19 = puVar19 + 2;
      } while (uVar6 >> uVar15 == 0);
      if (uVar21 <= local_34) {
        uVar20 = uVar21;
LAB_013b8ab0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_34,uVar20,local_3c);
      }
      if (uVar21 <= uVar17) {
        uVar20 = uVar21;
        local_34 = uVar17;
        goto LAB_013b8ab0;
      }
      uVar8 = *(undefined4 *)(iVar1 + local_34 * 4);
      *(undefined4 *)(iVar1 + local_34 * 4) = *(undefined4 *)(iVar1 + uVar17 * 4);
      *(undefined4 *)(iVar1 + uVar17 * 4) = uVar8;
    }
    *(uint *)(param_1 + 0x28) = local_34;
    uVar2 = local_34;
    if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("match states should be a proper subset of all states",0x34,&DAT_01893b30);
    }
  } while( true );
  while( true ) {
    uVar17 = *(uint *)(iVar22 + uVar2 * 4);
    if (uVar2 != uVar17) {
      do {
        uVar4 = uVar17;
        if (uVar21 <= uVar4) {
          puVar11 = &DAT_01894138;
          goto LAB_013b8a60;
        }
        uVar17 = *(uint *)(iVar22 + uVar4 * 4);
      } while (uVar2 != uVar17);
      *(uint *)(iVar1 + uVar2 * 4) = uVar4;
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == uVar21) break;
LAB_013b8924:
    if (uVar2 == uVar21) {
      uVar4 = uVar21;
LAB_013b8a60:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar21,puVar11);
    }
  }
  iVar3 = *(int *)(param_1 + 300);
  if (iVar3 != 0) {
    uVar2 = 0;
    do {
      uVar4 = uVar2 << uVar15;
      uVar17 = uVar2 << uVar15;
      puVar10 = (undefined4 *)(iVar13 + uVar4 * 8);
      uVar2 = uVar2 + 1;
      uVar7 = uVar4;
      if (uVar20 < uVar17) {
        uVar7 = uVar20;
      }
      iVar23 = iVar3;
      do {
        if (uVar20 == uVar7) {
          puVar11 = &DAT_01893c70;
          uVar21 = uVar20;
          goto LAB_013b8a60;
        }
        uVar6 = puVar10[1];
        uVar17 = uVar6 >> 0xb;
        if (uVar21 <= uVar6 >> 0xb) goto LAB_013b8a34;
        iVar9 = *(int *)(iVar1 + uVar17 * 4);
        *puVar10 = *puVar10;
        uVar4 = uVar4 + 1;
        uVar7 = uVar7 + 1;
        iVar23 = iVar23 + -1;
        puVar10[1] = uVar6 & 0x7ff | iVar9 << 0xb;
        puVar10 = puVar10 + 2;
      } while (iVar23 != 0);
    } while (uVar2 != uVar21);
  }
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    puVar12 = *(uint **)(param_1 + 0x1c);
    do {
      uVar17 = *puVar12;
      if (uVar21 <= uVar17) {
LAB_013b8a34:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar21,&DAT_01893c90);
      }
      iVar13 = iVar13 + -1;
      *puVar12 = *(uint *)(iVar1 + uVar17 * 4);
      puVar12 = puVar12 + 1;
    } while (iVar13 != 0);
  }
  if (local_28 != 0) {
    thunk_FUN_016d3fb4(iVar22);
  }
  if (uVar21 != 0) {
    thunk_FUN_016d3fb4(iVar1);
  }
  return;
}

