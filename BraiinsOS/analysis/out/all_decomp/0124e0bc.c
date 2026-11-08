// FUN_0124e0bc @ 0124e0bc size=1532 calls_out=10 calls_in=0
// strings: 

void FUN_0124e0bc(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint local_d0;
  int local_cc;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    param_1[2] = 4;
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar4 = *(int *)(param_3 + 4);
  if (iVar4 != 0) {
    uVar19 = *(undefined4 *)(param_2 + 0x10);
    uVar20 = *(uint *)(param_2 + 0x14);
    iVar5 = *(int *)(param_3 + 8);
    iVar18 = iVar4;
    local_c0 = iVar5;
    do {
      uVar2 = *(ushort *)(iVar18 + 0x192);
      iVar16 = iVar18 + 0x10c;
      uVar13 = 0xffffffff;
      iVar22 = (uint)uVar2 * 0xc;
      do {
        if (iVar22 == 0) {
          uVar13 = (uint)uVar2;
          goto LAB_0124e190;
        }
        uVar15 = *(uint *)(iVar16 + 8);
        uVar12 = uVar15;
        if (uVar20 < uVar15) {
          uVar12 = uVar20;
        }
        iVar6 = FUN_016dd50a(uVar19,*(undefined4 *)(iVar16 + 4),uVar12);
        if (iVar6 == 0) {
          iVar6 = uVar20 - uVar15;
        }
        iVar22 = iVar22 + -0xc;
        uVar13 = uVar13 + 1;
        iVar16 = iVar16 + 0xc;
      } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
      if (0 < iVar6 == iVar6 < 0) {
        uVar19 = *(undefined4 *)(param_2 + 0x1c);
        uVar20 = *(uint *)(param_2 + 0x20);
        iVar18 = iVar4;
        local_c0 = iVar5;
        goto LAB_0124e1f0;
      }
LAB_0124e190:
      if (local_c0 == 0) break;
      local_c0 = local_c0 + -1;
      iVar18 = *(int *)(iVar18 + uVar13 * 4 + 0x198);
    } while( true );
  }
LAB_0124e2c0:
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
LAB_0124e1f0:
  uVar2 = *(ushort *)(iVar18 + 0x192);
  iVar16 = iVar18 + 0x10c;
  uVar13 = 0xffffffff;
  iVar22 = (uint)uVar2 * 0xc;
  do {
    if (iVar22 == 0) {
      uVar13 = (uint)uVar2;
      goto LAB_0124e270;
    }
    uVar15 = *(uint *)(iVar16 + 8);
    uVar12 = uVar15;
    if (uVar20 < uVar15) {
      uVar12 = uVar20;
    }
    iVar6 = FUN_016dd50a(uVar19,*(undefined4 *)(iVar16 + 4),uVar12);
    if (iVar6 == 0) {
      iVar6 = uVar20 - uVar15;
    }
    iVar22 = iVar22 + -0xc;
    uVar13 = uVar13 + 1;
    iVar16 = iVar16 + 0xc;
  } while ((char)((0 < iVar6) - (iVar6 < 0)) == '\x01');
  if (0 < iVar6 == iVar6 < 0) {
    uVar20 = *(uint *)(param_3 + 0xc);
    iVar18 = uVar20 * 0xc;
    if (0xaaaaaaa < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar18);
    }
    iVar22 = 0;
    iVar16 = 4;
    local_cc = 4;
    local_b8 = 0;
    if (iVar18 != 0) {
      local_cc = thunk_FUN_016d4a50(iVar18);
      local_b8 = uVar20;
      if (local_cc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar18);
      }
    }
    local_b0 = 0;
    iVar6 = *(int *)(param_2 + 4);
    iVar18 = *(int *)(param_2 + 8);
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_b4 = local_cc;
    if (iVar18 == 0) goto LAB_0124e570;
    iVar16 = 4;
    iVar22 = 0;
    local_d0 = 0;
    iVar11 = iVar6;
    goto LAB_0124e364;
  }
LAB_0124e270:
  if (local_c0 == 0) goto LAB_0124e2c0;
  local_c0 = local_c0 + -1;
  iVar18 = *(int *)(iVar18 + uVar13 * 4 + 0x198);
  goto LAB_0124e1f0;
LAB_0124e364:
  uVar19 = *(undefined4 *)(iVar11 + 4);
  uVar20 = *(uint *)(iVar11 + 8);
  iVar7 = iVar11 + 0x20;
  iVar23 = iVar4;
  local_bc = iVar5;
  do {
    iVar17 = iVar23 + 0x10c;
    uVar2 = *(ushort *)(iVar23 + 0x192);
    uVar13 = 0xffffffff;
    iVar21 = (uint)uVar2 * 0xc;
    do {
      uVar12 = (uint)uVar2;
      if (iVar21 == 0) goto joined_r0x0124e42c;
      uVar15 = *(uint *)(iVar17 + 8);
      uVar12 = uVar15;
      if (uVar20 < uVar15) {
        uVar12 = uVar20;
      }
      iVar8 = FUN_016dd50a(uVar19,*(undefined4 *)(iVar17 + 4),uVar12);
      if (iVar8 == 0) {
        iVar8 = uVar20 - uVar15;
      }
      iVar21 = iVar21 + -0xc;
      uVar13 = uVar13 + 1;
      iVar17 = iVar17 + 0xc;
    } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
    uVar12 = uVar13;
    if (0 < iVar8 == iVar8 < 0) {
      local_60[0] = -0x80000000;
      uVar14 = *(undefined4 *)(iVar11 + 4);
      iVar22 = *(int *)(iVar11 + 8);
      local_60[1] = uVar19;
      local_60[2] = uVar20;
      local_60[3] = param_4;
      if (iVar22 == 0) {
        iVar16 = 1;
      }
      else {
        iVar16 = thunk_FUN_016d4a50(iVar22);
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar22);
        }
      }
      FUN_016dd1aa(iVar16,uVar14,iVar22);
      if (local_d0 == local_b8) {
        FUN_015f37b0(&local_b8);
        local_cc = local_b4;
      }
      piVar10 = (int *)(local_cc + local_d0 * 0xc);
      *piVar10 = iVar22;
      piVar10[1] = iVar16;
      piVar10[2] = iVar22;
      local_b0 = local_d0 + 1;
      FUN_011c9534(&local_a0,iVar11 + 0xc,iVar23 + uVar13 * 0x18,local_60,param_5,param_6);
      iVar22 = local_a4;
      if (local_a4 == local_ac) {
        FUN_011ca644(&local_ac);
      }
      puVar9 = (undefined4 *)(local_a8 + iVar22 * 0x40);
      *puVar9 = local_a0;
      puVar9[1] = local_9c;
      puVar9[2] = local_98;
      puVar9[3] = uStack_94;
      puVar9[4] = local_90;
      puVar9[5] = local_8c;
      puVar9[6] = uStack_88;
      puVar9[7] = uStack_84;
      puVar9[8] = uStack_80;
      puVar9[9] = uStack_7c;
      puVar9[10] = local_78;
      puVar9[0xb] = uStack_74;
      puVar9[0xc] = uStack_70;
      puVar9[0xd] = uStack_6c;
      puVar9[0xe] = uStack_68;
      puVar9[0xf] = uStack_64;
      iVar22 = iVar22 + 1;
      iVar16 = local_a8;
      local_d0 = local_d0 + 1;
      local_a4 = iVar22;
      goto LAB_0124e54c;
    }
joined_r0x0124e42c:
    if (local_bc == 0) break;
    local_bc = local_bc + -1;
    iVar23 = *(int *)(iVar23 + uVar12 * 4 + 0x198);
  } while( true );
LAB_0124e54c:
  iVar11 = iVar7;
  if (iVar7 == iVar6 + iVar18 * 0x20) goto LAB_0124e570;
  goto LAB_0124e364;
LAB_0124e570:
  iVar4 = iVar16;
  iVar18 = iVar22 << 6;
  do {
    iVar5 = iVar18;
    if (iVar5 == 0) {
      local_60[0] = -0x80000000;
      local_50 = 0;
      local_60[1] = local_ac;
      local_60[2] = iVar16;
      local_60[3] = iVar22;
      goto LAB_0124e5d4;
    }
    pcVar1 = (char *)(iVar4 + 0x3c);
    iVar4 = iVar4 + 0x40;
    iVar18 = iVar5 + -0x40;
  } while (*pcVar1 != '\0');
  local_60[0] = 0;
  local_48 = 0;
  local_60[2] = 0;
  local_60[1] = 4;
  local_60[3] = local_ac;
  local_50 = iVar16;
  local_4c = iVar22;
LAB_0124e5d4:
  FUN_011f1dd4(&local_40,&local_b8);
  local_9c = 1;
  local_a0 = 1;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  local_90 = uStack_38;
  local_8c = uStack_34;
  uStack_88 = uStack_30;
  uStack_84 = uStack_2c;
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar9 = local_a0;
  puVar9[1] = local_9c;
  puVar9[2] = local_98;
  puVar9[3] = uStack_94;
  puVar9[4] = local_90;
  puVar9[5] = local_8c;
  puVar9[6] = uStack_88;
  puVar9[7] = uStack_84;
  iVar4 = 0x18;
  if (iVar5 == 0) {
    iVar4 = 0x10;
  }
  piVar10 = *(int **)((int)local_60 + iVar4);
  if (piVar10 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01353488(*(undefined4 *)((int)local_60 + iVar4));
    }
  }
  *(undefined4 **)((int)local_60 + iVar4) = puVar9;
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  param_1[2] = local_60[2];
  param_1[3] = local_60[3];
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  return;
}

