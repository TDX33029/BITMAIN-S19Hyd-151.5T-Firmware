// FUN_0124eaf8 @ 0124eaf8 size=1700 calls_out=10 calls_in=0
// strings: 

int FUN_0124eaf8(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int local_d0;
  int local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar23 = CONCAT44(local_ac,local_b0);
  if (*param_2 != '\x05') {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 4);
  local_4c = param_2;
  if (iVar4 != 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    uVar16 = *(uint *)(param_1 + 0x14);
    iVar5 = *(int *)(param_2 + 8);
    iVar11 = iVar4;
    local_d0 = iVar5;
    do {
      uVar2 = *(ushort *)(iVar11 + 0x192);
      iVar22 = iVar11 + 0x10c;
      uVar19 = 0xffffffff;
      iVar17 = (uint)uVar2 * 0xc;
      do {
        if (iVar17 == 0) {
          uVar19 = (uint)uVar2;
          goto LAB_0124ebd4;
        }
        uVar12 = *(uint *)(iVar22 + 8);
        uVar15 = uVar12;
        if (uVar16 < uVar12) {
          uVar15 = uVar16;
        }
        iVar6 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar22 + 4),uVar15);
        if (iVar6 == 0) {
          iVar6 = uVar16 - uVar12;
        }
        iVar17 = iVar17 + -0xc;
        uVar19 = uVar19 + 1;
        iVar22 = iVar22 + 0xc;
      } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
      if (0 < iVar6 == iVar6 < 0) {
        uVar14 = *(undefined4 *)(param_1 + 0x1c);
        uVar16 = *(uint *)(param_1 + 0x20);
        iVar11 = iVar4;
        local_d0 = iVar5;
        goto LAB_0124ec14;
      }
LAB_0124ebd4:
      if (local_d0 == 0) break;
      local_d0 = local_d0 + -1;
      iVar11 = *(int *)(iVar11 + uVar19 * 4 + 0x198);
    } while( true );
  }
  piVar13 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_0124f1a4;
  uVar14 = *(undefined4 *)(param_1 + 0x28);
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar9 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0124f1a4;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar16 = 0;
    uVar19 = *(uint *)(param_1 + 0x28);
    uVar15 = (*(int **)(param_4 + 4))[1];
    if (uVar15 <= uVar19) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar15);
      uVar16 = uVar15;
      if (iVar4 != 0) {
        uVar16 = 0;
      }
    }
    uVar23 = FUN_011e1508((int)(piVar13 + 2) + uVar16,uVar19 - uVar16);
    local_bc = 3;
    uVar10 = 2;
  }
  uVar24 = FUN_01238114(param_3);
  uVar21 = *(undefined4 *)(param_1 + 0x10);
  local_7c = *(int *)(param_1 + 0x14);
  if (local_7c == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(local_7c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_7c);
    }
  }
  FUN_016dd1aa(iVar4,uVar21,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  local_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8 = uVar10;
  local_78 = iVar4;
  local_74 = local_7c;
  local_30 = piVar13;
  local_2c = uVar14;
  uStack_90 = uVar23;
  local_38 = uVar24;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_0124ef94:
  FUN_016dd1aa(iVar4,&local_a8,0x80);
  return iVar4;
LAB_0124ec14:
  uVar2 = *(ushort *)(iVar11 + 0x192);
  iVar22 = iVar11 + 0x10c;
  uVar19 = 0xffffffff;
  iVar17 = (uint)uVar2 * 0xc;
  do {
    if (iVar17 == 0) {
      uVar19 = (uint)uVar2;
      goto LAB_0124ec94;
    }
    uVar12 = *(uint *)(iVar22 + 8);
    uVar15 = uVar12;
    if (uVar16 < uVar12) {
      uVar15 = uVar16;
    }
    iVar6 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar22 + 4),uVar15);
    if (iVar6 == 0) {
      iVar6 = uVar16 - uVar12;
    }
    iVar17 = iVar17 + -0xc;
    uVar19 = uVar19 + 1;
    iVar22 = iVar22 + 0xc;
  } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
  if (0 < iVar6 == iVar6 < 0) {
    iVar11 = *(int *)(param_1 + 8);
    if (iVar11 != 0) {
      iVar22 = *(int *)(param_1 + 4);
      iVar17 = iVar22;
      do {
        uVar14 = *(undefined4 *)(iVar17 + 4);
        iVar7 = iVar17 + 0x20;
        uVar16 = *(uint *)(iVar17 + 8);
        iVar6 = iVar4;
        local_cc = iVar5;
        while( true ) {
          iVar20 = iVar6 + 0x10c;
          uVar2 = *(ushort *)(iVar6 + 0x192);
          uVar19 = 0xffffffff;
          iVar18 = (uint)uVar2 * 0xc;
          do {
            uVar15 = (uint)uVar2;
            if (iVar18 == 0) goto joined_r0x0124ed8c;
            uVar12 = *(uint *)(iVar20 + 8);
            uVar15 = uVar12;
            if (uVar16 < uVar12) {
              uVar15 = uVar16;
            }
            iVar8 = FUN_016dd50a(uVar14,*(undefined4 *)(iVar20 + 4),uVar15);
            if (iVar8 == 0) {
              iVar8 = uVar16 - uVar12;
            }
            iVar18 = iVar18 + -0xc;
            uVar19 = uVar19 + 1;
            iVar20 = iVar20 + 0xc;
          } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
          uVar15 = uVar19;
          if (0 < iVar8 == iVar8 < 0) break;
joined_r0x0124ed8c:
          if (local_cc == 0) goto LAB_0124ede8;
          local_cc = local_cc + -1;
          iVar6 = *(int *)(iVar6 + uVar15 * 4 + 0x198);
        }
        local_a8 = 0x80000000;
        local_a4 = uVar14;
        local_a0 = uVar16;
        local_9c = param_3;
        iVar17 = FUN_011d018c(iVar17 + 0xc,iVar6 + uVar19 * 0x18,&local_a8,param_4,param_5);
        if (iVar17 != 0) {
          return iVar17;
        }
LAB_0124ede8:
        iVar17 = iVar7;
      } while (iVar7 != iVar22 + iVar11 * 0x20);
    }
    return 0;
  }
LAB_0124ec94:
  if (local_d0 == 0) goto LAB_0124efb0;
  local_d0 = local_d0 + -1;
  iVar11 = *(int *)(iVar11 + uVar19 * 4 + 0x198);
  goto LAB_0124ec14;
LAB_0124efb0:
  piVar13 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_0124f1a4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x124f1a4);
    (*pcVar1)();
  }
  uVar14 = *(undefined4 *)(param_1 + 0x28);
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar9 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar9;
      bVar3 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar3);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0124f1a4;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar16 = 0;
    uVar19 = *(uint *)(param_1 + 0x28);
    uVar15 = (*(int **)(param_4 + 4))[1];
    if (uVar15 <= uVar19) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar15);
      uVar16 = uVar15;
      if (iVar4 != 0) {
        uVar16 = 0;
      }
    }
    uVar23 = FUN_011e1508((int)(piVar13 + 2) + uVar16,uVar19 - uVar16);
    local_bc = 3;
    uVar10 = 2;
  }
  uVar24 = FUN_01238114(param_3);
  uVar21 = *(undefined4 *)(param_1 + 0x1c);
  local_7c = *(int *)(param_1 + 0x20);
  if (local_7c == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(local_7c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_7c);
    }
  }
  FUN_016dd1aa(iVar4,uVar21,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  local_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8 = uVar10;
  local_78 = iVar4;
  local_74 = local_7c;
  local_30 = piVar13;
  local_2c = uVar14;
  uStack_90 = uVar23;
  local_38 = uVar24;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  goto LAB_0124ef94;
}

