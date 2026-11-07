// FUN_00c6b774 @ 00c6b774 size=1380 calls_out=15 calls_in=0
// strings: 

void FUN_00c6b774(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1f)) {
  case 0:
    uVar7 = *(undefined4 *)param_2[0x1c];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    uVar5 = param_2[0x1d];
    param_2[0x18] = uVar7;
    param_2[0x19] = uVar5;
    param_2[0x1a] = param_2[0x1e];
LAB_00c6b800:
    *(undefined1 *)(param_2 + 0x16) = 0;
    param_2[0x14] = uVar5;
    param_2[0x15] = uVar7;
LAB_00c6b810:
    bVar10 = 1;
    *(undefined2 *)((int)param_2 + 0x15) = 0x100;
    param_2[3] = uVar5;
    param_2[4] = uVar7;
LAB_00c6b82c:
    puVar3 = param_2 + 0x1b;
    *param_2 = 0;
    param_2[1] = 4;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    FUN_00c6beb4(&local_110,param_2,uVar5,uVar7);
    uVar13 = local_110;
    if (local_110 != 2) {
      local_60 = local_10c;
      uStack_5c = local_108;
      uStack_58 = uStack_104;
      local_54 = local_100;
      local_50 = local_fc;
      uStack_4c = local_f8;
      local_48 = uStack_f4;
      uStack_44 = uStack_f0;
      local_40 = local_ec;
      local_3c = local_e8;
      uStack_38 = local_e4;
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      goto LAB_00c6b91c;
    }
    if ((bVar10 & 1) != 0) {
      *(undefined1 *)(param_2 + 5) = 0;
      FUN_009ec520(&local_110);
      param_2[6] = local_110;
      param_2[7] = local_10c;
      param_2[8] = local_108;
      param_2[9] = uStack_104;
      param_2[10] = local_100;
      param_2[0xb] = local_fc;
      param_2[0xc] = local_f8;
      param_2[0xd] = uStack_f4;
      param_2[0xe] = uStack_f0;
      param_2[0xf] = local_ec;
      param_2[0x10] = local_e8;
      param_2[0x11] = local_e4;
      param_2[0x12] = uStack_e0;
      param_2[0x13] = uStack_dc;
      goto switchD_00c6ba4c_caseD_3;
    }
    uVar6 = param_2[2];
    if (0x2492492 < uVar6) {
      uVar5 = 0;
LAB_00c6b9d4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,puVar3);
    }
    puVar3 = (undefined4 *)(uVar6 * 0x38);
    if (puVar3 == (undefined4 *)0x0) {
      iVar11 = 8;
      uVar6 = 0;
    }
    else {
      uVar5 = 8;
      iVar11 = FUN_01298504(puVar3,8);
      if (iVar11 == 0) goto LAB_00c6b9d4;
    }
    puVar4 = (undefined4 *)param_2[1];
    param_2[7] = iVar11;
    puVar3 = puVar4 + param_2[2] * 2;
    param_2[6] = uVar6;
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[0xe] = puVar4;
    param_2[0xf] = puVar4;
    param_2[0x10] = *param_2;
    param_2[0x11] = puVar3;
    while (puVar4 != puVar3) {
      uVar5 = *puVar4;
      iVar11 = puVar4[1];
      param_2[0xf] = puVar4 + 2;
      param_2[0xc] = uVar5;
      param_2[9] = param_2 + 6;
      param_2[10] = uVar5;
      param_2[0xb] = iVar11;
      param_2[0xd] = iVar11;
LAB_00c6bc78:
      (**(code **)(iVar11 + 0xc))(&local_110,uVar5,param_3);
      uVar13 = local_10c;
      uVar6 = local_110;
      if (local_110 == 2) {
        uVar1 = 4;
        goto LAB_00c6bda0;
      }
      local_d0 = local_108;
      uStack_cc = uStack_104;
      uStack_c8 = local_100;
      uStack_c4 = local_fc;
      local_c0 = local_f8;
      uStack_bc = uStack_f4;
      uStack_b8 = uStack_f0;
      uStack_b4 = local_ec;
      uStack_b0 = local_e8;
      local_ac = local_e4;
      uStack_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      FUN_00fe4378(param_2[0xc],param_2[0xd]);
      if ((uVar6 & 1) != 0) {
        local_60 = local_d0;
        uStack_5c = uStack_cc;
        uStack_58 = uStack_c8;
        local_54 = uStack_c4;
        local_50 = local_c0;
        uStack_4c = uStack_bc;
        local_48 = uStack_b8;
        uStack_44 = uStack_b4;
        local_40 = uStack_b0;
        local_3c = local_ac;
        uStack_38 = uStack_a8;
        uStack_34 = uStack_a4;
        uStack_30 = uStack_a0;
        uStack_2c = uStack_9c;
        FUN_009495dc(param_2 + 0xe);
        FUN_007bc140(param_2 + 6);
        goto LAB_00c6b91c;
      }
      local_98 = local_d0;
      uStack_94 = uStack_cc;
      uStack_90 = uStack_c8;
      uStack_8c = uStack_c4;
      local_88 = local_c0;
      uStack_84 = uStack_bc;
      uStack_80 = uStack_b8;
      uStack_7c = uStack_b4;
      uStack_78 = uStack_b0;
      local_74 = local_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      piVar12 = (int *)param_2[9];
      iVar11 = piVar12[2];
      if (iVar11 == *piVar12) {
        FUN_006e4ec8(piVar12);
      }
      puVar2 = (uint *)(piVar12[1] + iVar11 * 0x38);
      *puVar2 = local_d0;
      puVar2[1] = uStack_cc;
      puVar2[2] = uStack_c8;
      puVar2[3] = uStack_c4;
      puVar2[4] = local_c0;
      puVar2[5] = uStack_bc;
      puVar2[6] = uStack_b8;
      puVar2[7] = uStack_b4;
      puVar2[8] = uStack_b0;
      puVar2[9] = local_ac;
      puVar2[10] = uStack_a8;
      puVar2[0xb] = uStack_a4;
      puVar2[0xc] = uStack_a0;
      puVar2[0xd] = uStack_9c;
      piVar12[2] = iVar11 + 1;
      puVar3 = (undefined4 *)param_2[0x11];
      puVar4 = (undefined4 *)param_2[0xf];
    }
    param_2[10] = 0;
    FUN_009495dc(param_2 + 0xe);
    local_120 = param_2[6];
    uStack_11c = param_2[7];
    uStack_118 = param_2[8];
LAB_00c6bd68:
    FUN_006cac18(&local_110,&local_120);
    local_60 = local_110;
    uStack_5c = local_10c;
    uStack_58 = local_108;
    local_54 = uStack_104;
    local_50 = local_100;
    uStack_4c = local_fc;
    local_48 = local_f8;
    uStack_44 = uStack_f4;
    local_40 = uStack_f0;
    local_3c = local_ec;
    uStack_38 = local_e8;
    uStack_34 = local_e4;
    iVar11 = 0;
    *(undefined1 *)(param_2 + 5) = 0;
LAB_00c6b93c:
    local_1b0 = param_2 + 0x1b;
    local_1b4 = param_2 + 0x16;
    *param_1 = iVar11;
    param_1[1] = uVar13;
    param_1[2] = local_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = local_54;
    param_1[6] = local_50;
    param_1[7] = uStack_4c;
    param_1[8] = local_48;
    param_1[9] = uStack_44;
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = uStack_38;
    param_1[0xd] = uStack_34;
    param_1[0xe] = uStack_30;
    param_1[0xf] = uStack_2c;
    uVar1 = 1;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    FUN_00c423b8(param_2);
    *(undefined1 *)local_1b4 = 1;
    iVar11 = *param_1;
    *(undefined1 *)local_1b0 = 1;
    if (iVar11 != 2) goto LAB_00c6bdc8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22218);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22218);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      uVar7 = param_2[0x18];
      uVar5 = param_2[0x19];
      goto LAB_00c6b800;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e24);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e24);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      uVar5 = param_2[0x14];
      uVar7 = param_2[0x15];
      goto LAB_00c6b810;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x15)) {
    case 0:
      uVar5 = param_2[3];
      uVar7 = param_2[4];
      bVar10 = *(byte *)((int)param_2 + 0x16);
      goto LAB_00c6b82c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar5 = param_2[0xc];
      iVar11 = param_2[0xd];
      goto LAB_00c6bc78;
    }
switchD_00c6ba4c_caseD_3:
    FUN_009ecbe0(&local_110,param_2 + 6,param_3);
    uStack_38 = local_e4;
    local_3c = local_e8;
    local_40 = local_ec;
    uStack_44 = uStack_f0;
    local_48 = uStack_f4;
    uStack_4c = local_f8;
    local_50 = local_fc;
    local_54 = local_100;
    uVar13 = local_110;
    if (local_110 != 3) {
      puVar2 = (uint *)((uint)&local_110 | 4);
      uVar6 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      FUN_00c4274c(param_2 + 6);
      if (uVar13 == 2) {
        local_120 = uVar6;
        uStack_11c = uVar8;
        uStack_118 = uVar9;
        goto LAB_00c6bd68;
      }
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      local_60 = uVar6;
      uStack_5c = uVar8;
      uStack_58 = uVar9;
LAB_00c6b91c:
      if (*(char *)(param_2 + 5) != '\0') {
        FUN_00b7d620(param_2);
      }
      iVar11 = 1;
      *(undefined1 *)(param_2 + 5) = 0;
      goto LAB_00c6b93c;
    }
    uVar1 = 3;
LAB_00c6bda0:
    local_1b0 = param_2 + 0x1b;
    local_1b4 = param_2 + 0x16;
    *(undefined1 *)((int)param_2 + 0x15) = uVar1;
    *(undefined1 *)local_1b0 = 3;
    *(undefined1 *)local_1b4 = 3;
  }
  uVar1 = 3;
  *param_1 = 2;
LAB_00c6bdc8:
  *(undefined1 *)(param_2 + 0x1f) = uVar1;
  return;
}

