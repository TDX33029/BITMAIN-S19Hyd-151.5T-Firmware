// FUN_00b2f25c @ 00b2f25c size=2148 calls_out=16 calls_in=0
// strings: state

void FUN_00b2f25c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined4 ****ppppuVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 ****unaff_r8;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined1 *local_20c;
  undefined4 *local_204;
  undefined4 *local_200;
  undefined4 *local_1fc;
  undefined4 ****local_1f8;
  undefined4 ****local_1f0;
  undefined4 ****local_1ec;
  undefined4 ****local_1e8;
  undefined4 ****local_1e4;
  undefined4 ****local_190;
  undefined4 ****ppppuStack_18c;
  undefined4 ****ppppuStack_188;
  undefined4 ****local_184;
  undefined4 ****local_180;
  undefined4 ****ppppuStack_17c;
  undefined4 ****ppppuStack_178;
  undefined4 ****ppppuStack_174;
  undefined4 ****ppppuStack_170;
  undefined4 ****local_168;
  undefined4 ****ppppuStack_164;
  undefined4 ****ppppuStack_160;
  undefined4 ****ppppuStack_15c;
  undefined4 ****local_158;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 ****ppppuStack_148;
  undefined4 ****local_144;
  undefined4 ****ppppuStack_140;
  undefined4 ****ppppuStack_13c;
  undefined4 ****ppppuStack_138;
  undefined4 ****ppppuStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 ****local_120;
  undefined4 ****ppppuStack_11c;
  undefined4 ****ppppuStack_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****local_110;
  undefined4 ****ppppuStack_10c;
  undefined4 ****ppppuStack_108;
  undefined4 ****ppppuStack_104;
  undefined4 ****ppppuStack_100;
  undefined4 ****local_f8;
  undefined4 ****local_f4;
  undefined4 ****local_f0;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****ppppuStack_b8;
  undefined4 ****ppppuStack_b4;
  undefined4 ****ppppuStack_b0;
  undefined4 ****ppppuStack_ac;
  undefined4 ****local_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 ****ppppuStack_a0;
  undefined4 ****ppppuStack_9c;
  undefined4 ****local_98;
  undefined4 ****ppppuStack_94;
  undefined4 ****ppppuStack_90;
  undefined4 ****ppppuStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  undefined4 ****ppppuStack_68;
  undefined4 ****ppppuStack_64;
  undefined4 ****ppppuStack_60;
  undefined4 ****local_5c;
  undefined4 ****ppppuStack_58;
  undefined4 ****ppppuStack_54;
  undefined4 ****ppppuStack_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ****local_48;
  undefined4 ****ppppuStack_44;
  undefined4 ****ppppuStack_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 ****ppppuStack_34;
  undefined4 ****ppppuStack_30;
  undefined4 ****ppppuStack_2c;
  undefined4 ****ppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar14 = *param_2;
    iVar17 = param_2[1];
    uVar12 = 0;
    local_1f0 = (undefined4 ****)0x80000007;
    param_2[2] = iVar17;
    ppppuVar9 = *(undefined4 *****)(*(int *)(iVar17 + 0x10) + 0x40);
    if (ppppuVar9 == (undefined4 ****)&DAT_00000005) {
      uVar22 = thunk_FUN_01bed842(*(int *)(*(int *)(iVar17 + 0x10) + 0x3c) + 8,"state",5);
      ppppuVar9 = (undefined4 ****)((ulonglong)uVar22 >> 0x20);
      if ((int)uVar22 == 0) {
        param_2[4] = uVar14;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00b2f3e4;
      }
    }
    goto LAB_00b2f6a0;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c122d0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c122d0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 9)) {
    case 0:
      uVar14 = param_2[4];
      iVar17 = param_2[5];
LAB_00b2f3e4:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = uVar14;
      param_2[7] = iVar17;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c122d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c122d0);
    case 3:
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c122d0);
      }
      uVar14 = param_2[6];
    }
    puVar10 = (undefined4 *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    puVar11 = param_2 + 4;
    *puVar11 = uVar14;
    iVar17 = puVar10[4];
    uVar18 = puVar10[5];
    uVar20 = puVar10[6];
    uVar19 = puVar10[7];
    uVar7 = *(undefined1 *)(puVar10 + 8);
    uVar14 = puVar10[1];
    uVar12 = puVar10[2];
    uVar21 = puVar10[3];
    *puVar8 = *puVar10;
    param_2[6] = uVar14;
    param_2[7] = uVar12;
    param_2[8] = uVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = uVar18;
    param_2[0xb] = uVar20;
    param_2[0xc] = uVar19;
    *(undefined1 *)(param_2 + 0xd) = uVar7;
    uVar12 = puVar10[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = puVar11;
    param_2[0x2b] = puVar8;
    param_2[0x2c] = uVar12;
LAB_00b2f468:
    uVar14 = *puVar11;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = uVar14;
    param_2[0x27] = puVar8;
    param_2[0x28] = uVar12;
LAB_00b2f488:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = puVar8;
    param_2[0x23] = uVar14;
LAB_00b2f4a0:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar16 = 1;
    param_2[0x11] = puVar8;
    param_2[0x12] = uVar14;
LAB_00b2f4bc:
    puVar11 = param_2 + 0xe;
    *puVar11 = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    ppppuVar9 = &local_e8;
    FUN_00886994(ppppuVar9,puVar11,puVar8,uVar14);
    if (local_e8 != (undefined4 ****)0x2) {
      local_1f8 = local_e8;
      local_1e8 = local_e4;
      local_1e4 = local_dc;
      local_1ec = local_d8;
      local_1f0 = local_d4;
      local_48 = local_d0;
      ppppuStack_44 = local_cc;
      ppppuStack_40 = local_c8;
      local_3c = local_c4;
      local_38 = local_c0;
      ppppuStack_34 = local_bc;
      ppppuStack_30 = ppppuStack_b8;
      ppppuStack_2c = ppppuStack_b4;
      ppppuStack_28 = ppppuStack_b0;
      unaff_r8 = local_e0;
      goto LAB_00b2f5d4;
    }
    if ((bVar16 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      local_130 = *puVar11;
      uStack_12c = param_2[0xf];
      uStack_128 = param_2[0x10];
      FUN_009ec520(&local_e8);
      local_168 = local_e8;
      ppppuStack_164 = local_e4;
      ppppuStack_160 = local_e0;
      ppppuStack_15c = local_dc;
      local_158 = local_d8;
      ppppuStack_154 = local_d4;
      ppppuStack_150 = local_d0;
      ppppuStack_14c = local_cc;
      ppppuStack_148 = local_c8;
      local_144 = local_c4;
      ppppuStack_140 = local_c0;
      ppppuStack_13c = local_bc;
      ppppuStack_138 = ppppuStack_b8;
      ppppuStack_134 = ppppuStack_b4;
      param_2[0x14] = local_e8;
      param_2[0x15] = local_e4;
      param_2[0x16] = local_e0;
      param_2[0x17] = local_dc;
      param_2[0x18] = local_d8;
      param_2[0x19] = local_d4;
      param_2[0x1a] = local_d0;
      param_2[0x1b] = local_cc;
      param_2[0x1c] = local_c8;
      param_2[0x1d] = local_c4;
      param_2[0x1e] = local_c0;
      param_2[0x1f] = local_bc;
      param_2[0x20] = ppppuStack_b8;
      param_2[0x21] = ppppuStack_b4;
      goto LAB_00b2f564;
    }
    uVar15 = param_2[0x10];
    if (0x2492492 < uVar15) {
      uVar14 = 0;
LAB_00b2f70c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,ppppuVar9);
    }
    ppppuVar9 = (undefined4 ****)(uVar15 * 0x38);
    if (ppppuVar9 == (undefined4 ****)0x0) {
      iVar17 = 8;
      uVar15 = 0;
    }
    else {
      uVar14 = 8;
      iVar17 = FUN_01298504(ppppuVar9,8);
      if (iVar17 == 0) goto LAB_00b2f70c;
    }
    puVar11 = (undefined4 *)param_2[0xf];
    param_2[0x15] = iVar17;
    puVar8 = puVar11 + param_2[0x10] * 2;
    param_2[0x14] = uVar15;
    param_2[0x16] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x1c] = puVar11;
    param_2[0x1d] = puVar11;
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = puVar8;
    while (puVar11 != puVar8) {
      uVar14 = *puVar11;
      iVar17 = puVar11[1];
      param_2[0x1d] = puVar11 + 2;
      param_2[0x1a] = uVar14;
      param_2[0x17] = param_2 + 0x14;
      param_2[0x18] = uVar14;
      param_2[0x19] = iVar17;
      param_2[0x1b] = iVar17;
LAB_00b2fa60:
      (**(code **)(iVar17 + 0xc))(&local_e8,uVar14,param_3);
      ppppuVar5 = local_d0;
      ppppuVar4 = local_d4;
      ppppuVar3 = local_d8;
      unaff_r8 = local_dc;
      ppppuVar2 = local_e0;
      ppppuVar9 = local_e8;
      if (local_e8 == (undefined4 ****)0x2) {
        uVar7 = 4;
        goto LAB_00b2fc10;
      }
      local_1f8 = local_e4;
      local_1e8 = local_e0;
      local_1e4 = local_d8;
      local_1f0 = local_d0;
      local_1ec = local_d4;
      local_a8 = local_cc;
      ppppuStack_a4 = local_c8;
      ppppuStack_a0 = local_c4;
      ppppuStack_9c = local_c0;
      local_98 = local_bc;
      ppppuStack_94 = ppppuStack_b8;
      ppppuStack_90 = ppppuStack_b4;
      ppppuStack_8c = ppppuStack_b0;
      ppppuStack_88 = ppppuStack_ac;
      FUN_01139b38(param_2[0x1a],param_2[0x1b]);
      if (((uint)ppppuVar9 & 1) != 0) {
        local_48 = local_a8;
        ppppuStack_44 = ppppuStack_a4;
        ppppuStack_40 = ppppuStack_a0;
        local_3c = ppppuStack_9c;
        local_38 = local_98;
        ppppuStack_34 = ppppuStack_94;
        ppppuStack_30 = ppppuStack_90;
        ppppuStack_2c = ppppuStack_8c;
        ppppuStack_28 = ppppuStack_88;
        FUN_009495dc(param_2 + 0x1c);
        FUN_007bc140(param_2 + 0x14);
        goto LAB_00b2f5d4;
      }
      local_74 = ppppuVar4;
      local_80 = ppppuVar2;
      local_78 = ppppuVar3;
      local_7c = unaff_r8;
      local_70 = ppppuVar5;
      local_6c = local_a8;
      ppppuStack_68 = ppppuStack_a4;
      ppppuStack_64 = ppppuStack_a0;
      ppppuStack_60 = ppppuStack_9c;
      local_5c = local_98;
      ppppuStack_58 = ppppuStack_94;
      ppppuStack_54 = ppppuStack_90;
      ppppuStack_50 = ppppuStack_8c;
      ppppuStack_4c = ppppuStack_88;
      piVar13 = (int *)param_2[0x17];
      iVar17 = piVar13[2];
      if (iVar17 == *piVar13) {
        FUN_006e4ec8(piVar13);
      }
      puVar8 = (undefined4 *)(piVar13[1] + iVar17 * 0x38);
      *puVar8 = ppppuVar2;
      puVar8[2] = ppppuVar3;
      puVar8[1] = unaff_r8;
      puVar8[3] = ppppuVar4;
      puVar8[4] = ppppuVar5;
      puVar8[5] = local_a8;
      puVar8[6] = ppppuStack_a4;
      puVar8[7] = ppppuStack_a0;
      puVar8[8] = ppppuStack_9c;
      puVar8[9] = local_98;
      puVar8[10] = ppppuStack_94;
      puVar8[0xb] = ppppuStack_90;
      puVar8[0xc] = ppppuStack_8c;
      puVar8[0xd] = ppppuStack_88;
      piVar13[2] = iVar17 + 1;
      puVar8 = (undefined4 *)param_2[0x1f];
      puVar11 = (undefined4 *)param_2[0x1d];
    }
    param_2[0x18] = 0;
    FUN_009495dc(param_2 + 0x1c);
    local_f8 = (undefined4 ****)param_2[0x14];
    local_f4 = (undefined4 ****)param_2[0x15];
    local_f0 = (undefined4 ****)param_2[0x16];
LAB_00b2fbb0:
    FUN_006cac18(&local_e8,&local_f8);
    local_1e8 = local_e8;
    bVar1 = false;
    local_1e4 = local_e0;
    local_1ec = local_dc;
    local_1f0 = local_d8;
    local_48 = local_d4;
    ppppuStack_44 = local_d0;
    ppppuStack_40 = local_cc;
    local_3c = local_c8;
    local_38 = local_c4;
    ppppuStack_34 = local_c0;
    ppppuStack_30 = local_bc;
    *(undefined1 *)(param_2 + 0x13) = 0;
    unaff_r8 = local_e4;
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar8 = (undefined4 *)param_2[0x2b];
      uVar12 = param_2[0x2c];
      goto LAB_00b2f468;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x29)) {
    case 0:
      uVar14 = param_2[0x26];
      puVar8 = (undefined4 *)param_2[0x27];
      goto LAB_00b2f488;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c11fe0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c11fe0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    case 0:
      puVar8 = (undefined4 *)param_2[0x22];
      uVar14 = param_2[0x23];
      goto LAB_00b2f4a0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      puVar8 = (undefined4 *)param_2[0x11];
      uVar14 = param_2[0x12];
      bVar16 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00b2f4bc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 3:
      break;
    case 4:
      uVar14 = param_2[0x1a];
      iVar17 = param_2[0x1b];
      goto LAB_00b2fa60;
    }
LAB_00b2f564:
    FUN_009ecbe0(&local_e8,param_2 + 0x14,param_3);
    ppppuVar3 = local_dc;
    unaff_r8 = local_e0;
    ppppuVar2 = local_e4;
    ppppuVar9 = local_e8;
    if (local_e8 == (undefined4 ****)&DAT_00000003) {
      uVar7 = 3;
LAB_00b2fc10:
      local_20c = (undefined1 *)((int)param_2 + 0x4d);
      local_1fc = param_2 + 0x2d;
      local_200 = param_2 + 0x29;
      local_204 = param_2 + 0x24;
      *local_20c = uVar7;
      *(undefined1 *)local_204 = 3;
      *(undefined1 *)local_200 = 3;
      *(undefined1 *)local_1fc = 3;
      *param_1 = 2;
      uVar7 = 4;
      goto LAB_00b2f6e8;
    }
    local_1f8 = local_e8;
    local_1e8 = local_e4;
    local_1e4 = local_dc;
    local_1ec = local_d8;
    local_1f0 = local_d4;
    local_120 = local_d0;
    ppppuStack_11c = local_cc;
    ppppuStack_118 = local_c8;
    ppppuStack_114 = local_c4;
    local_110 = local_c0;
    ppppuStack_10c = local_bc;
    ppppuStack_108 = ppppuStack_b8;
    ppppuStack_104 = ppppuStack_b4;
    ppppuStack_100 = ppppuStack_b0;
    FUN_00b22a20(param_2 + 0x14);
    if (ppppuVar9 == (undefined4 ****)0x2) {
      local_f8 = ppppuVar2;
      local_f4 = unaff_r8;
      local_f0 = ppppuVar3;
      goto LAB_00b2fbb0;
    }
    local_48 = local_120;
    ppppuStack_44 = ppppuStack_11c;
    ppppuStack_40 = ppppuStack_118;
    local_3c = ppppuStack_114;
    local_38 = local_110;
    ppppuStack_34 = ppppuStack_10c;
    ppppuStack_30 = ppppuStack_108;
    ppppuStack_2c = ppppuStack_104;
    ppppuStack_28 = ppppuStack_100;
LAB_00b2f5d4:
    if (*(char *)(param_2 + 0x13) != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  ppppuVar6 = ppppuStack_28;
  ppppuVar9 = ppppuStack_2c;
  ppppuVar5 = ppppuStack_30;
  ppppuVar4 = ppppuStack_34;
  ppppuVar3 = local_38;
  ppppuVar2 = local_3c;
  ppppuStack_188 = ppppuStack_40;
  ppppuStack_18c = ppppuStack_44;
  local_190 = local_48;
  local_1fc = param_2 + 0x2d;
  local_200 = param_2 + 0x29;
  local_204 = param_2 + 0x24;
  local_20c = (undefined1 *)((int)param_2 + 0x4d);
  *local_20c = 1;
  FUN_00b238c8(param_2 + 0xe);
  *(undefined1 *)local_204 = 1;
  *(undefined1 *)local_200 = 1;
  *(undefined1 *)local_1fc = 1;
  if (bVar1) {
    local_184 = ppppuVar2;
    local_180 = ppppuVar3;
    ppppuStack_17c = ppppuVar4;
    ppppuStack_178 = ppppuVar5;
    ppppuStack_174 = ppppuVar9;
    ppppuStack_170 = ppppuVar6;
    uVar12 = 1;
    ppppuVar9 = local_1f8;
  }
  else {
    uVar12 = 0;
    ppppuVar9 = &local_184;
    local_184 = ppppuVar2;
    local_180 = ppppuVar3;
    ppppuStack_17c = ppppuVar4;
    ppppuStack_178 = ppppuVar5;
  }
LAB_00b2f6a0:
  param_1[2] = local_1e8;
  param_1[4] = local_1e4;
  param_1[1] = ppppuVar9;
  param_1[5] = local_1ec;
  param_1[6] = local_1f0;
  *param_1 = uVar12;
  param_1[3] = unaff_r8;
  param_1[7] = local_190;
  param_1[8] = ppppuStack_18c;
  param_1[9] = ppppuStack_188;
  param_1[10] = local_184;
  param_1[0xb] = local_180;
  param_1[0xc] = ppppuStack_17c;
  param_1[0xd] = ppppuStack_178;
  param_1[0xe] = ppppuStack_174;
  param_1[0xf] = ppppuStack_170;
  uVar7 = 1;
LAB_00b2f6e8:
  *(undefined1 *)(param_2 + 3) = uVar7;
  return;
}

