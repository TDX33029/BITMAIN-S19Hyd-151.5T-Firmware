// FUN_011c6cb8 @ 011c6cb8 size=2036 calls_out=9 calls_in=0
// strings: 

int FUN_011c6cb8(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_d4;
  int local_d0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
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
  
  uVar18 = CONCAT44(local_ac,local_b0);
  if (*param_2 != '\x05') {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 4);
  local_4c = param_2;
  if (iVar4 != 0) {
    uVar8 = *(undefined4 *)(param_1 + 4);
    uVar14 = *(uint *)(param_1 + 8);
    local_d0 = *(int *)(param_2 + 8);
    iVar10 = iVar4;
    local_d4 = local_d0;
    do {
      uVar2 = *(ushort *)(iVar10 + 0x192);
      iVar15 = iVar10 + 0x10c;
      uVar12 = 0xffffffff;
      iVar17 = (uint)uVar2 * 0xc;
      do {
        if (iVar17 == 0) {
          uVar12 = (uint)uVar2;
          goto LAB_011c6d90;
        }
        uVar9 = *(uint *)(iVar15 + 8);
        uVar13 = uVar9;
        if (uVar14 < uVar9) {
          uVar13 = uVar14;
        }
        iVar5 = FUN_016dd50a(uVar8,*(undefined4 *)(iVar15 + 4),uVar13);
        if (iVar5 == 0) {
          iVar5 = uVar14 - uVar9;
        }
        iVar17 = iVar17 + -0xc;
        uVar12 = uVar12 + 1;
        iVar15 = iVar15 + 0xc;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      if (0 < iVar5 == iVar5 < 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x10);
        uVar14 = *(uint *)(param_1 + 0x14);
        iVar10 = iVar4;
        local_d4 = local_d0;
        goto LAB_011c6dd0;
      }
LAB_011c6d90:
      if (local_d4 == 0) break;
      local_d4 = local_d4 + -1;
      iVar10 = *(int *)(iVar10 + uVar12 * 4 + 0x198);
    } while( true );
  }
  piVar11 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar11;
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_011c74bc;
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_011c74bc;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar13 = (*(int **)(param_4 + 4))[1];
    uVar12 = *(uint *)(param_1 + 0x28);
    uVar14 = 0;
    if (uVar13 <= uVar12) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar11 + 2,uVar13);
      uVar14 = uVar13;
      if (iVar4 != 0) {
        uVar14 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar11 + 2) + uVar14,uVar12 - uVar14);
    local_bc = 3;
    uVar7 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  uVar16 = *(undefined4 *)(param_1 + 4);
  local_7c = *(int *)(param_1 + 8);
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
  FUN_016dd1aa(iVar4,uVar16,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar7;
  local_78 = iVar4;
  local_74 = local_7c;
  local_30 = piVar11;
  local_2c = uVar8;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_011c70d4:
  FUN_016dd1aa(iVar4,local_a8,0x80);
  return iVar4;
LAB_011c6dd0:
  uVar2 = *(ushort *)(iVar10 + 0x192);
  iVar15 = iVar10 + 0x10c;
  uVar12 = 0xffffffff;
  iVar17 = (uint)uVar2 * 0xc;
  do {
    if (iVar17 == 0) {
      uVar12 = (uint)uVar2;
      goto LAB_011c6e50;
    }
    uVar9 = *(uint *)(iVar15 + 8);
    uVar13 = uVar9;
    if (uVar14 < uVar9) {
      uVar13 = uVar14;
    }
    iVar5 = FUN_016dd50a(uVar8,*(undefined4 *)(iVar15 + 4),uVar13);
    if (iVar5 == 0) {
      iVar5 = uVar14 - uVar9;
    }
    iVar17 = iVar17 + -0xc;
    uVar12 = uVar12 + 1;
    iVar15 = iVar15 + 0xc;
  } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
  if (0 < iVar5 == iVar5 < 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar14 = *(uint *)(param_1 + 0x20);
    goto LAB_011c6e88;
  }
LAB_011c6e50:
  if (local_d4 == 0) goto LAB_011c70f0;
  local_d4 = local_d4 + -1;
  iVar10 = *(int *)(iVar10 + uVar12 * 4 + 0x198);
  goto LAB_011c6dd0;
LAB_011c6e88:
  uVar2 = *(ushort *)(iVar4 + 0x192);
  iVar17 = iVar4 + 0x10c;
  uVar12 = 0xffffffff;
  iVar10 = (uint)uVar2 * 0xc;
  do {
    if (iVar10 == 0) {
      uVar12 = (uint)uVar2;
      goto LAB_011c6f0c;
    }
    uVar9 = *(uint *)(iVar17 + 8);
    uVar13 = uVar9;
    if (uVar14 < uVar9) {
      uVar13 = uVar14;
    }
    iVar15 = FUN_016dd50a(uVar8,*(undefined4 *)(iVar17 + 4),uVar13);
    if (iVar15 == 0) {
      iVar15 = uVar14 - uVar9;
    }
    iVar10 = iVar10 + -0xc;
    uVar12 = uVar12 + 1;
    iVar17 = iVar17 + 0xc;
  } while ((char)((0 < iVar15) - (iVar15 < 0)) == '\x01');
  if (0 < iVar15 == iVar15 < 0) {
    return 0;
  }
LAB_011c6f0c:
  if (local_d0 == 0) goto LAB_011c71d4;
  local_d0 = local_d0 + -1;
  iVar4 = *(int *)(iVar4 + uVar12 * 4 + 0x198);
  goto LAB_011c6e88;
LAB_011c71d4:
  piVar11 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar11;
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_011c74bc;
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_011c74bc;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar13 = (*(int **)(param_4 + 4))[1];
    uVar12 = *(uint *)(param_1 + 0x28);
    uVar14 = 0;
    if (uVar13 <= uVar12) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar11 + 2,uVar13);
      uVar14 = uVar13;
      if (iVar4 != 0) {
        uVar14 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar11 + 2) + uVar14,uVar12 - uVar14);
    local_bc = 3;
    uVar7 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  local_7c = *(int *)(param_1 + 0x20);
  uVar16 = *(undefined4 *)(param_1 + 0x1c);
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
  FUN_016dd1aa(iVar4,uVar16,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar7;
  local_78 = iVar4;
  local_74 = local_7c;
  local_30 = piVar11;
  local_2c = uVar8;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  goto LAB_011c70d4;
LAB_011c70f0:
  piVar11 = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *piVar11;
    bVar3 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar3);
  *piVar11 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_011c74bc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11c74bc);
    (*pcVar1)();
  }
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  if (param_4 == 0) {
    uVar7 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_011c74bc;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar13 = (*(int **)(param_4 + 4))[1];
    uVar12 = *(uint *)(param_1 + 0x28);
    uVar14 = 0;
    if (uVar13 <= uVar12) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar11 + 2,uVar13);
      uVar14 = uVar13;
      if (iVar4 != 0) {
        uVar14 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar11 + 2) + uVar14,uVar12 - uVar14);
    local_bc = 3;
    uVar7 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  local_7c = *(int *)(param_1 + 0x14);
  uVar16 = *(undefined4 *)(param_1 + 0x10);
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
  FUN_016dd1aa(iVar4,uVar16,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar7;
  local_78 = iVar4;
  local_74 = local_7c;
  local_30 = piVar11;
  local_2c = uVar8;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  goto LAB_011c70d4;
}

