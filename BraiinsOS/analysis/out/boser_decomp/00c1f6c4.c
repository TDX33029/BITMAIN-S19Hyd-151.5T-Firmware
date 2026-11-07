// FUN_00c1f6c4 @ 00c1f6c4 size=1632 calls_out=16 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c1f6c4(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
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
  uint local_f0;
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
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  param_2 = (undefined4 *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x23)) {
  case 0:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    puVar15 = (undefined4 *)param_2[0x20];
    uVar17 = param_2[0x21];
    uVar12 = param_2[0x22];
    param_2[0x1c] = puVar15;
    param_2[0x1d] = uVar17;
    param_2[0x1e] = uVar12;
LAB_00c1f758:
    uVar19 = *puVar15;
    *(undefined1 *)(param_2 + 0x1b) = 0;
    param_2[0x18] = uVar19;
    param_2[0x19] = uVar17;
    param_2[0x1a] = uVar12;
LAB_00c1f778:
    *(undefined1 *)(param_2 + 0x16) = 0;
    param_2[0x14] = uVar17;
    param_2[0x15] = uVar19;
LAB_00c1f78c:
    *(undefined2 *)((int)param_2 + 0x15) = 0x100;
    uVar23 = 1;
    param_2[3] = uVar17;
    param_2[4] = uVar19;
LAB_00c1f7a0:
    *param_2 = 0;
    param_2[1] = 4;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    FUN_008248bc(&local_110,param_2,uVar17,uVar19);
    if (local_110 != 2) {
      local_60 = local_10c;
      local_5c = local_108;
      uStack_58 = uStack_104;
      local_54 = local_100;
      local_50 = local_fc;
      local_4c = local_f8;
      local_48 = uStack_f4;
      uStack_44 = local_f0;
      local_40 = local_ec;
      local_3c = local_e8;
      local_38 = local_e4;
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      uVar25 = local_110;
      goto LAB_00c1f88c;
    }
    if ((uVar23 & 1) != 0) {
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
      param_2[0xe] = local_f0;
      param_2[0xf] = local_ec;
      param_2[0x10] = local_e8;
      param_2[0x11] = local_e4;
      param_2[0x12] = uStack_e0;
      param_2[0x13] = uStack_dc;
      goto switchD_00c1faec_caseD_3;
    }
    uVar22 = param_2[2];
    if (0x2492492 < uVar22) {
      uVar17 = 0;
LAB_00c1f9f4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,uVar23);
    }
    uVar25 = 0;
    uVar23 = uVar22 * 0x38;
    if (uVar23 == 0) {
      iVar14 = 8;
      uVar22 = 0;
    }
    else {
      uVar17 = 8;
      iVar14 = FUN_01298504(uVar23,8);
      if (iVar14 == 0) goto LAB_00c1f9f4;
    }
    puVar16 = (undefined4 *)param_2[1];
    param_2[7] = iVar14;
    puVar15 = puVar16 + param_2[2] * 2;
    param_2[6] = uVar22;
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[0xe] = puVar16;
    param_2[0xf] = puVar16;
    param_2[0x10] = *param_2;
    param_2[0x11] = puVar15;
    while (puVar16 != puVar15) {
      uVar17 = *puVar16;
      iVar14 = puVar16[1];
      param_2[0xf] = puVar16 + 2;
      param_2[0xc] = uVar17;
      param_2[9] = param_2 + 6;
      param_2[10] = uVar17;
      param_2[0xb] = iVar14;
      param_2[0xd] = iVar14;
LAB_00c1fd10:
      (**(code **)(iVar14 + 0xc))(&local_110,uVar17,param_3);
      uVar25 = local_10c;
      uVar23 = local_110;
      if (local_110 == 2) {
        uVar11 = 4;
        goto LAB_00c1fe34;
      }
      local_d0 = local_108;
      uStack_cc = uStack_104;
      uStack_c8 = local_100;
      uStack_c4 = local_fc;
      local_c0 = local_f8;
      uStack_bc = uStack_f4;
      uStack_b8 = local_f0;
      uStack_b4 = local_ec;
      uStack_b0 = local_e8;
      local_ac = local_e4;
      uStack_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      FUN_01139b38(param_2[0xc],param_2[0xd]);
      if ((uVar23 & 1) != 0) {
        local_60 = local_d0;
        local_5c = uStack_cc;
        uStack_58 = uStack_c8;
        local_54 = uStack_c4;
        local_50 = local_c0;
        local_4c = uStack_bc;
        local_48 = uStack_b8;
        uStack_44 = uStack_b4;
        local_40 = uStack_b0;
        local_3c = local_ac;
        local_38 = uStack_a8;
        uStack_34 = uStack_a4;
        uStack_30 = uStack_a0;
        uStack_2c = uStack_9c;
        FUN_009495dc(param_2 + 0xe);
        FUN_007bc140(param_2 + 6);
        goto LAB_00c1f88c;
      }
      local_98 = local_d0;
      uStack_94 = uStack_cc;
      uStack_90 = uStack_c8;
      uStack_8c = uStack_c4;
      local_88 = local_c0;
      uStack_84 = uStack_bc;
      local_80 = uStack_b8;
      uStack_7c = uStack_b4;
      uStack_78 = uStack_b0;
      local_74 = local_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      piVar24 = (int *)param_2[9];
      iVar14 = piVar24[2];
      if (iVar14 == *piVar24) {
        FUN_006e4ec8(piVar24);
      }
      puVar13 = (uint *)(piVar24[1] + iVar14 * 0x38);
      *puVar13 = local_d0;
      puVar13[1] = uStack_cc;
      puVar13[2] = uStack_c8;
      puVar13[3] = uStack_c4;
      puVar13[4] = local_c0;
      puVar13[5] = uStack_bc;
      puVar13[6] = uStack_b8;
      puVar13[7] = uStack_b4;
      puVar13[8] = uStack_b0;
      puVar13[9] = local_ac;
      puVar13[10] = uStack_a8;
      puVar13[0xb] = uStack_a4;
      puVar13[0xc] = uStack_a0;
      puVar13[0xd] = uStack_9c;
      piVar24[2] = iVar14 + 1;
      puVar15 = (undefined4 *)param_2[0x11];
      puVar16 = (undefined4 *)param_2[0xf];
    }
    param_2[10] = 0;
    FUN_009495dc(param_2 + 0xe);
    local_120 = param_2[6];
    uStack_11c = param_2[7];
    uStack_118 = param_2[8];
LAB_00c1fe00:
    FUN_006cac18(&local_110,&local_120);
    bVar1 = false;
    local_60 = local_110;
    local_5c = local_10c;
    uStack_58 = local_108;
    local_54 = uStack_104;
    local_50 = local_100;
    local_4c = local_fc;
    local_48 = local_f8;
    uStack_44 = uStack_f4;
    local_40 = local_f0;
    local_3c = local_ec;
    local_38 = local_e8;
    uStack_34 = local_e4;
    *(undefined1 *)(param_2 + 5) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13f00);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13f00);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1f)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x1c];
      uVar17 = param_2[0x1d];
      uVar12 = param_2[0x1e];
      goto LAB_00c1f758;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      uVar19 = param_2[0x18];
      uVar17 = param_2[0x19];
      goto LAB_00c1f778;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22540);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22540);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      uVar17 = param_2[0x14];
      uVar19 = param_2[0x15];
      goto LAB_00c1f78c;
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
      uVar17 = param_2[3];
      uVar19 = param_2[4];
      uVar23 = (uint)*(byte *)((int)param_2 + 0x16);
      goto LAB_00c1f7a0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0xc];
      iVar14 = param_2[0xd];
      goto LAB_00c1fd10;
    }
switchD_00c1faec_caseD_3:
    FUN_009ecbe0(&local_110,param_2 + 6,param_3);
    uVar22 = uStack_d8;
    uVar23 = uStack_dc;
    uStack_34 = uStack_e0;
    local_38 = local_e4;
    local_3c = local_e8;
    local_40 = local_ec;
    uStack_44 = local_f0;
    local_48 = uStack_f4;
    local_4c = local_f8;
    local_50 = local_fc;
    local_54 = local_100;
    uVar25 = local_110;
    if (local_110 == 3) {
      uVar11 = 3;
LAB_00c1fe34:
      local_1ec = param_2 + 0x1b;
      local_1f0 = param_2 + 0x16;
      local_1e8 = param_2 + 0x1f;
      *(undefined1 *)((int)param_2 + 0x15) = uVar11;
      uVar11 = 3;
      *(undefined1 *)local_1f0 = 3;
      *(undefined1 *)local_1ec = 3;
      *(undefined1 *)local_1e8 = 3;
      *param_1 = 2;
      goto LAB_00c1fe60;
    }
    puVar13 = (uint *)((uint)&local_110 | 4);
    uVar18 = *puVar13;
    uVar20 = puVar13[1];
    uVar21 = puVar13[2];
    FUN_00ba64b4(param_2 + 6);
    if (uVar25 == 2) {
      local_120 = uVar18;
      uStack_11c = uVar20;
      uStack_118 = uVar21;
      goto LAB_00c1fe00;
    }
    uStack_30 = uVar23;
    uStack_2c = uVar22;
    local_60 = uVar18;
    local_5c = uVar20;
    uStack_58 = uVar21;
LAB_00c1f88c:
    if (*(char *)(param_2 + 5) != '\0') {
      FUN_00b7d620(param_2);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 5) = 0;
  }
  uVar10 = uStack_2c;
  uVar9 = uStack_30;
  uVar8 = uStack_34;
  uVar7 = local_38;
  uVar6 = local_3c;
  uVar5 = local_40;
  uVar4 = uStack_44;
  uVar3 = local_48;
  uVar2 = local_4c;
  uVar21 = local_50;
  uVar20 = local_54;
  uVar18 = uStack_58;
  uVar22 = local_5c;
  uVar23 = local_60;
  local_1e8 = param_2 + 0x1f;
  local_1ec = param_2 + 0x1b;
  local_1f0 = param_2 + 0x16;
  *(undefined1 *)((int)param_2 + 0x15) = 1;
  FUN_00ba638c(param_2);
  *(undefined1 *)local_1f0 = 1;
  *(undefined1 *)local_1ec = 1;
  *(undefined1 *)local_1e8 = 1;
  local_98 = uVar23;
  uStack_94 = uVar22;
  uStack_90 = uVar18;
  uStack_8c = uVar20;
  local_88 = uVar21;
  uStack_84 = uVar2;
  local_80 = uVar3;
  uStack_7c = uVar4;
  uStack_78 = uVar5;
  local_74 = uVar6;
  uStack_70 = uVar7;
  uStack_6c = uVar8;
  uStack_68 = uVar9;
  uStack_64 = uVar10;
  if (!bVar1) {
    local_108 = uVar23;
    uStack_104 = uVar22;
    local_100 = uVar18;
    local_fc = uVar20;
    local_f8 = uVar21;
    uStack_f4 = uVar2;
    local_f0 = uVar3;
    local_ec = uVar4;
    local_e8 = uVar5;
    local_e4 = uVar6;
    uStack_e0 = uVar7;
    uStack_dc = uVar8;
  }
  else {
    local_5c = uVar23;
    uStack_58 = uVar22;
    local_54 = uVar18;
    local_50 = uVar20;
    local_4c = uVar21;
    local_48 = uVar2;
    uStack_44 = uVar3;
    local_40 = uVar4;
    local_3c = uVar5;
    local_38 = uVar6;
    uStack_34 = uVar7;
    uStack_30 = uVar8;
    uStack_2c = uVar9;
    uStack_28 = uVar10;
    local_60 = uVar25;
    FUN_009ed8c0((uint)&local_110 | 4,param_2[0x21],&local_60);
  }
  *param_1 = (uint)bVar1;
  param_1[1] = local_10c;
  param_1[2] = local_108;
  param_1[3] = uStack_104;
  param_1[4] = local_100;
  param_1[5] = local_fc;
  param_1[6] = local_f8;
  param_1[7] = uStack_f4;
  param_1[8] = local_f0;
  param_1[9] = local_ec;
  uVar11 = 1;
  param_1[10] = local_e8;
  param_1[0xb] = local_e4;
  param_1[0xc] = uStack_e0;
  param_1[0xd] = uStack_dc;
  param_1[0xe] = uStack_d8;
  param_1[0xf] = uStack_d4;
LAB_00c1fe60:
  *(undefined1 *)(param_2 + 0x23) = uVar11;
  return;
}

