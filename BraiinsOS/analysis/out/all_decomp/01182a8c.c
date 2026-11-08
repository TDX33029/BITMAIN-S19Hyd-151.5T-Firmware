// FUN_01182a8c @ 01182a8c size=1504 calls_out=16 calls_in=0
// strings: 

void FUN_01182a8c(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint unaff_r5;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  uint local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar11 = *(uint *)(param_3 + 0xc);
  uVar17 = uVar11 * 0xc;
  local_108 = 0;
  if (0xaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar15 = 0;
  if (uVar17 == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar17);
    local_108 = uVar11;
    unaff_r5 = uVar17;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar17);
    }
  }
  local_100 = 0;
  local_104 = iVar4;
  if ((0x3ffffff < uVar11) || (unaff_r5 = uVar11 * 0x40, 0x7ffffffc < unaff_r5)) {
LAB_01182b78:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar15,unaff_r5);
  }
  if (unaff_r5 == 0) {
    local_f8 = 4;
    local_fc = 0;
  }
  else {
    local_f8 = thunk_FUN_016d4a50(unaff_r5);
    if (local_f8 == 0) {
      uVar15 = 4;
      goto LAB_01182b78;
    }
    local_fc = uVar11;
  }
  local_e8 = *(int *)(param_3 + 4);
  local_e4 = *(undefined4 *)(param_3 + 8);
  if (local_e8 == 0) {
    uVar11 = 0;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar9 = *(int *)(param_2 + 8);
  local_f0 = (uint)(local_e8 != 0);
  local_f4 = 0;
  local_dc = 0;
  local_ec = 0;
  local_e0 = local_f0;
  local_d8 = local_e8;
  local_d4 = local_e4;
  local_d0 = uVar11;
  if (iVar9 == 0) {
    iVar5 = 0;
    uVar17 = 0;
    while (iVar9 = FUN_00f45584(&local_f0), iVar9 != 0) {
      uVar15 = *(undefined4 *)(iVar9 + 4);
      iVar9 = *(int *)(iVar9 + 8);
      if (iVar9 == 0) {
        iVar13 = 1;
      }
      else {
        iVar13 = thunk_FUN_016d4a50(iVar9);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar9);
        }
      }
      FUN_016dd1aa(iVar13,uVar15,iVar9);
      if (uVar17 == local_108) {
        FUN_015f37b0(&local_108);
        iVar4 = local_104;
      }
      uVar17 = uVar17 + 1;
      piVar10 = (int *)(iVar4 + iVar5);
      *piVar10 = iVar9;
      iVar5 = iVar5 + 0xc;
      piVar10[1] = iVar13;
      piVar10[2] = iVar9;
      local_100 = uVar17;
    }
  }
  else {
    uVar17 = 0;
LAB_01182c20:
    uVar18 = FUN_00f45584(&local_f0);
    iVar13 = (int)uVar18;
    if (iVar13 != 0) {
      uVar15 = *(undefined4 *)(iVar13 + 4);
      iVar12 = *(int *)(iVar13 + 8);
      iVar13 = iVar5;
      iVar16 = iVar9 << 5;
      do {
        if ((*(int *)(iVar13 + 8) == iVar12) &&
           (iVar6 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 4),uVar15,iVar12), iVar6 == 0)) {
          local_c8 = 0x80000000;
          local_c4 = uVar15;
          local_c0 = iVar12;
          local_bc = param_4;
          FUN_011c9534(&local_a8,iVar13 + 0xc,(int)((ulonglong)uVar18 >> 0x20),&local_c8,param_5,
                       param_6);
          uVar11 = local_f4;
          if (local_f4 == local_fc) {
            FUN_011ca644(&local_fc);
          }
          puVar7 = (uint *)(local_f8 + uVar11 * 0x40);
          *puVar7 = local_a8;
          puVar7[1] = uStack_a4;
          puVar7[2] = uStack_a0;
          puVar7[3] = uStack_9c;
          puVar7[4] = local_98;
          puVar7[5] = local_94;
          puVar7[6] = uStack_90;
          puVar7[7] = uStack_8c;
          puVar7[8] = (uint)local_88;
          puVar7[9] = local_84;
          puVar7[10] = local_80;
          puVar7[0xb] = uStack_7c;
          puVar7[0xc] = uStack_78;
          puVar7[0xd] = uStack_74;
          puVar7[0xe] = uStack_70;
          puVar7[0xf] = uStack_6c;
          local_f4 = uVar11 + 1;
          goto LAB_01182c20;
        }
        iVar13 = iVar13 + 0x20;
        iVar16 = iVar16 + -0x20;
      } while (iVar16 != 0);
      if (iVar12 == 0) {
        iVar13 = 1;
      }
      else {
        iVar13 = thunk_FUN_016d4a50(iVar12);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar12);
        }
      }
      FUN_016dd1aa(iVar13,uVar15,iVar12);
      if (uVar17 == local_108) {
        FUN_015f37b0(&local_108);
        iVar4 = local_104;
      }
      local_100 = uVar17 + 1;
      piVar10 = (int *)(iVar4 + uVar17 * 0xc);
      *piVar10 = iVar12;
      piVar10[1] = iVar13;
      piVar10[2] = iVar12;
      uVar17 = local_100;
      goto LAB_01182c20;
    }
  }
  iVar5 = local_f4 << 6;
  iVar9 = local_f8;
  do {
    if (iVar5 == 0) {
      uVar15 = 0;
      local_b8 = 0;
      local_c8 = 0x80000000;
      local_c4 = local_fc;
      local_bc = local_f4;
      local_c0 = local_f8;
      goto joined_r0x01182e90;
    }
    pcVar1 = (char *)(iVar9 + 0x3c);
    iVar5 = iVar5 + -0x40;
    iVar9 = iVar9 + 0x40;
  } while (*pcVar1 != '\0');
  uVar15 = 4;
  local_b0 = 0;
  local_c0 = 0;
  local_c4 = 4;
  local_c8 = 0;
  local_b8 = local_f8;
  local_bc = local_fc;
  local_b4 = local_f4;
joined_r0x01182e90:
  if (uVar17 == 0) {
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    if (local_108 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_104);
    return;
  }
  piVar10 = *(int **)(param_2 + 0xc);
  uVar17 = *(uint *)(param_2 + 0x10);
  if (param_5 == 0) {
    uVar11 = 0;
    iVar5 = local_f8;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_5 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_5 + 0xc),param_5);
    }
    piVar8 = *(int **)(param_5 + 0xc);
    do {
      iVar4 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_01183074;
    iVar5 = *(int *)(param_5 + 0xc);
    uVar11 = 0;
    iVar4 = *(int *)(param_5 + 0x10);
    uVar14 = (*(int **)(param_5 + 4))[1];
    if (uVar14 <= uVar17) {
      iVar9 = thunk_FUN_016dd50a(**(int **)(param_5 + 4) + 8,piVar10 + 2,uVar14);
      uVar11 = uVar14;
      if (iVar9 != 0) {
        uVar11 = 0;
      }
    }
    uVar18 = FUN_011e1508((int)(piVar10 + 2) + uVar11,uVar17 - uVar11);
    uVar15 = (undefined4)((ulonglong)uVar18 >> 0x20);
    param_2 = (int)uVar18;
    uVar11 = 2;
  }
  do {
    iVar9 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar9 + 1;
  if (-1 < iVar9) {
    local_e4 = 3;
    local_f0 = uVar11;
    local_e0 = iVar5;
    local_dc = iVar4;
    local_d8 = param_2;
    local_d4 = uVar15;
    local_38 = FUN_01238114(param_4);
    local_88 = &DAT_8000000b;
    local_84 = local_108;
    local_80 = local_104;
    uStack_7c = local_100;
    local_50 = 6;
    local_a8 = local_f0;
    uStack_a4 = local_ec;
    uStack_a0 = local_e8;
    uStack_9c = local_e4;
    local_98 = local_e0;
    local_94 = local_dc;
    uStack_90 = local_d8;
    uStack_8c = local_d4;
    local_4c = param_3;
    local_30 = piVar10;
    local_2c = uVar17;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,&local_a8,0x80);
    local_ac = iVar4;
    FUN_011720bc(&local_a8,&local_ac);
    FUN_012128e0(&local_c8,&local_a8);
    FUN_01164df4(iVar4);
    thunk_FUN_016d3fb4(iVar4);
    *param_1 = local_c8;
    param_1[1] = local_c4;
    param_1[2] = local_c0;
    param_1[3] = local_bc;
    param_1[4] = local_b8;
    param_1[5] = local_b4;
    param_1[6] = local_b0;
    return;
  }
LAB_01183074:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x1183074);
  (*pcVar2)();
}

