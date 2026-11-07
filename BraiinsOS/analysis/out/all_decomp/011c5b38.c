// FUN_011c5b38 @ 011c5b38 size=1364 calls_out=9 calls_in=0
// strings: 

int FUN_011c5b38(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
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
  iVar12 = *(int *)(param_2 + 4);
  local_4c = param_2;
  if (iVar12 != 0) {
    uVar15 = *(undefined4 *)(param_1 + 4);
    uVar14 = *(uint *)(param_1 + 8);
    local_d4 = *(int *)(param_2 + 8);
    iVar13 = iVar12;
    local_d0 = local_d4;
    do {
      uVar2 = *(ushort *)(iVar13 + 0x192);
      iVar9 = iVar13 + 0x10c;
      uVar11 = 0xffffffff;
      iVar17 = (uint)uVar2 * 0xc;
      do {
        if (iVar17 == 0) {
          uVar11 = (uint)uVar2;
          goto LAB_011c5c10;
        }
        uVar7 = *(uint *)(iVar9 + 8);
        uVar8 = uVar7;
        if (uVar14 < uVar7) {
          uVar8 = uVar14;
        }
        iVar4 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar9 + 4),uVar8);
        if (iVar4 == 0) {
          iVar4 = uVar14 - uVar7;
        }
        iVar17 = iVar17 + -0xc;
        uVar11 = uVar11 + 1;
        iVar9 = iVar9 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) {
        uVar15 = *(undefined4 *)(param_1 + 0x10);
        uVar14 = *(uint *)(param_1 + 0x14);
        goto LAB_011c5c44;
      }
LAB_011c5c10:
      if (local_d0 == 0) break;
      local_d0 = local_d0 + -1;
      iVar13 = *(int *)(iVar13 + uVar11 * 4 + 0x198);
    } while( true );
  }
  piVar10 = *(int **)(param_1 + 0x18);
  do {
    iVar12 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar12 + 1;
  if (iVar12 < 0) goto LAB_011c6094;
  uVar15 = *(undefined4 *)(param_1 + 0x1c);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar12 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_011c6094;
    uVar11 = *(uint *)(param_1 + 0x1c);
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar14 = 0;
    uVar8 = (*(int **)(param_4 + 4))[1];
    if (uVar8 <= uVar11) {
      iVar12 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar8);
      uVar14 = uVar8;
      if (iVar12 != 0) {
        uVar14 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar10 + 2) + uVar14,uVar11 - uVar14);
    local_bc = 3;
    uVar6 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  uVar16 = *(undefined4 *)(param_1 + 4);
  local_7c = *(int *)(param_1 + 8);
  if (local_7c == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = thunk_FUN_016d4a50(local_7c);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_7c);
    }
  }
  FUN_016dd1aa(iVar12,uVar16,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar6;
  local_78 = iVar12;
  local_74 = local_7c;
  local_30 = piVar10;
  local_2c = uVar15;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar12 = thunk_FUN_016d4a50(0x80);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_011c5e8c:
  FUN_016dd1aa(iVar12,local_a8,0x80);
  return iVar12;
LAB_011c5c44:
  uVar2 = *(ushort *)(iVar12 + 0x192);
  iVar17 = iVar12 + 0x10c;
  uVar11 = 0xffffffff;
  iVar13 = (uint)uVar2 * 0xc;
  do {
    if (iVar13 == 0) {
      uVar11 = (uint)uVar2;
      goto LAB_011c5cc8;
    }
    uVar7 = *(uint *)(iVar17 + 8);
    uVar8 = uVar7;
    if (uVar14 < uVar7) {
      uVar8 = uVar14;
    }
    iVar9 = FUN_016dd50a(uVar15,*(undefined4 *)(iVar17 + 4),uVar8);
    if (iVar9 == 0) {
      iVar9 = uVar14 - uVar7;
    }
    iVar13 = iVar13 + -0xc;
    uVar11 = uVar11 + 1;
    iVar17 = iVar17 + 0xc;
  } while ((char)((0 < iVar9) - (iVar9 < 0)) == '\x01');
  if (0 < iVar9 == iVar9 < 0) {
    return 0;
  }
LAB_011c5cc8:
  if (local_d4 == 0) goto LAB_011c5ea8;
  local_d4 = local_d4 + -1;
  iVar12 = *(int *)(iVar12 + uVar11 * 4 + 0x198);
  goto LAB_011c5c44;
LAB_011c5ea8:
  piVar10 = *(int **)(param_1 + 0x18);
  do {
    iVar12 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar12 + 1;
  if (iVar12 < 0) {
LAB_011c6094:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11c6094);
    (*pcVar1)();
  }
  uVar15 = *(undefined4 *)(param_1 + 0x1c);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar12 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_011c6094;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    uVar14 = 0;
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar11 = *(uint *)(param_1 + 0x1c);
    uVar8 = (*(int **)(param_4 + 4))[1];
    if (uVar8 <= uVar11) {
      iVar12 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar10 + 2,uVar8);
      uVar14 = uVar8;
      if (iVar12 != 0) {
        uVar14 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar10 + 2) + uVar14,uVar11 - uVar14);
    local_bc = 3;
    uVar6 = 2;
  }
  uVar19 = FUN_01238114(param_3);
  uVar16 = *(undefined4 *)(param_1 + 0x10);
  local_7c = *(int *)(param_1 + 0x14);
  if (local_7c == 0) {
    iVar12 = 1;
  }
  else {
    iVar12 = thunk_FUN_016d4a50(local_7c);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_7c);
    }
  }
  FUN_016dd1aa(iVar12,uVar16,local_7c);
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x80000027;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_a8[0] = uVar6;
  local_78 = iVar12;
  local_74 = local_7c;
  local_30 = piVar10;
  local_2c = uVar15;
  uStack_90 = uVar18;
  local_38 = uVar19;
  iVar12 = thunk_FUN_016d4a50(0x80);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  goto LAB_011c5e8c;
}

