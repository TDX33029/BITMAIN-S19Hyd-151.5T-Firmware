// FUN_011bc6dc @ 011bc6dc size=2672 calls_out=17 calls_in=0
// strings: strategyDefault

void FUN_011bc6dc(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 ****ppppuVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 ****unaff_r8;
  int iVar21;
  undefined4 ****ppppuVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined1 *local_234;
  int *local_230;
  int *local_22c;
  int *local_228;
  undefined4 ****local_224;
  undefined4 ****local_214;
  undefined4 ****local_210;
  undefined4 ****local_20c;
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
  int local_130;
  int iStack_12c;
  int iStack_128;
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
  switch((char)param_2[3]) {
  case '\0':
    iVar16 = *param_2;
    iVar19 = param_2[1];
    ppppuVar22 = (undefined4 ****)0x80000007;
    uVar13 = 0;
    param_2[2] = iVar19;
    iVar8 = *(int *)(iVar19 + 0x10);
    ppppuVar10 = *(undefined4 *****)(iVar8 + 0x40);
    if (ppppuVar10 == (undefined4 ****)&SUB_00000004) {
      ppppuVar10 = (undefined4 ****)0x656d616e;
      if (*(int *)(*(int *)(iVar8 + 0x3c) + 8) == 0x656d616e) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar19;
        goto LAB_011bcc84;
      }
    }
    else if (ppppuVar10 == (undefined4 ****)&DAT_0000000f) {
      uVar26 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,"strategyDefault",0xf);
      ppppuVar10 = (undefined4 ****)((ulonglong)uVar26 >> 0x20);
      if ((int)uVar26 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar19;
        goto LAB_011bc820;
      }
    }
    goto LAB_011bcdfc;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20d64);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20d64);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      iVar19 = param_2[5];
LAB_011bc820:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = iVar16;
      param_2[7] = iVar19;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d64);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d64);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d64);
      }
      iVar16 = param_2[6];
    }
    piVar11 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar14 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar12 = param_2 + 4;
    *piVar12 = iVar16;
    iVar19 = piVar11[4];
    iVar23 = piVar11[5];
    iVar21 = piVar11[6];
    iVar8 = piVar11[7];
    iVar16 = piVar11[8];
    iVar17 = piVar11[1];
    iVar20 = piVar11[2];
    iVar24 = piVar11[3];
    *piVar14 = *piVar11;
    param_2[6] = iVar17;
    param_2[7] = iVar20;
    param_2[8] = iVar24;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar21;
    param_2[0xc] = iVar8;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar19 = piVar11[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar12;
    param_2[0x2b] = (int)piVar14;
    param_2[0x2c] = iVar19;
LAB_011bc90c:
    iVar16 = *piVar12;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar16;
    param_2[0x27] = (int)piVar14;
    param_2[0x28] = iVar19;
LAB_011bc92c:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = (int)piVar14;
    param_2[0x23] = iVar16;
LAB_011bc944:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar15 = 1;
    param_2[0x11] = (int)piVar14;
    param_2[0x12] = iVar16;
LAB_011bc960:
    piVar12 = param_2 + 0xe;
    *piVar12 = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    FUN_0083d478(&local_e8,piVar12,piVar14,iVar16);
    if (local_e8 == (undefined4 ****)0x2) {
      if ((bVar15 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x13) = 0;
        local_130 = *piVar12;
        iStack_12c = param_2[0xf];
        iStack_128 = param_2[0x10];
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
        param_2[0x14] = (int)local_e8;
        param_2[0x15] = (int)local_e4;
        param_2[0x16] = (int)local_e0;
        param_2[0x17] = (int)local_dc;
        param_2[0x18] = (int)local_d8;
        param_2[0x19] = (int)local_d4;
        param_2[0x1a] = (int)local_d0;
        param_2[0x1b] = (int)local_cc;
        param_2[0x1c] = (int)local_c8;
        param_2[0x1d] = (int)local_c4;
        param_2[0x1e] = (int)local_c0;
        param_2[0x1f] = (int)local_bc;
        param_2[0x20] = (int)ppppuStack_b8;
        param_2[0x21] = (int)ppppuStack_b4;
        goto LAB_011bca08;
      }
      uVar18 = param_2[0x10];
      if (0x2492492 < uVar18) {
        uVar13 = 0;
LAB_011bcb58:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar13,piVar14);
      }
      piVar14 = (int *)(uVar18 * 0x38);
      if (piVar14 == (int *)0x0) {
        iVar16 = 8;
        uVar18 = 0;
      }
      else {
        uVar13 = 8;
        iVar16 = FUN_01298504(piVar14,8);
        if (iVar16 == 0) goto LAB_011bcb58;
      }
      piVar12 = (int *)param_2[0xf];
      param_2[0x15] = iVar16;
      piVar14 = piVar12 + param_2[0x10] * 2;
      param_2[0x14] = uVar18;
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x1c] = (int)piVar12;
      param_2[0x1d] = (int)piVar12;
      param_2[0x1e] = param_2[0xe];
      param_2[0x1f] = (int)piVar14;
      while (piVar12 != piVar14) {
        iVar16 = *piVar12;
        iVar19 = piVar12[1];
        param_2[0x1d] = (int)(piVar12 + 2);
        param_2[0x1a] = iVar16;
        param_2[0x17] = (int)(param_2 + 0x14);
        param_2[0x18] = iVar16;
        param_2[0x19] = iVar19;
        param_2[0x1b] = iVar19;
LAB_011bd134:
        (**(code **)(iVar19 + 0xc))(&local_e8,iVar16,param_3);
        ppppuVar22 = local_d0;
        ppppuVar4 = local_d4;
        ppppuVar3 = local_d8;
        unaff_r8 = local_dc;
        ppppuVar2 = local_e0;
        ppppuVar10 = local_e8;
        if (local_e8 == (undefined4 ****)0x2) {
          uVar7 = 4;
          goto LAB_011bd2d8;
        }
        local_224 = local_e4;
        local_210 = local_e0;
        local_20c = local_d8;
        local_214 = local_d4;
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
        if (((uint)ppppuVar10 & 1) != 0) {
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
          goto LAB_011bca74;
        }
        local_74 = ppppuVar4;
        local_80 = ppppuVar2;
        local_78 = ppppuVar3;
        local_7c = unaff_r8;
        local_70 = ppppuVar22;
        local_6c = local_a8;
        ppppuStack_68 = ppppuStack_a4;
        ppppuStack_64 = ppppuStack_a0;
        ppppuStack_60 = ppppuStack_9c;
        local_5c = local_98;
        ppppuStack_58 = ppppuStack_94;
        ppppuStack_54 = ppppuStack_90;
        ppppuStack_50 = ppppuStack_8c;
        ppppuStack_4c = ppppuStack_88;
        piVar14 = (int *)param_2[0x17];
        iVar16 = piVar14[2];
        if (iVar16 == *piVar14) {
          FUN_006e4ec8(piVar14);
        }
        puVar9 = (undefined4 *)(piVar14[1] + iVar16 * 0x38);
        *puVar9 = ppppuVar2;
        puVar9[2] = ppppuVar3;
        puVar9[1] = unaff_r8;
        puVar9[3] = ppppuVar4;
        puVar9[4] = ppppuVar22;
        puVar9[5] = local_a8;
        puVar9[6] = ppppuStack_a4;
        puVar9[7] = ppppuStack_a0;
        puVar9[8] = ppppuStack_9c;
        puVar9[9] = local_98;
        puVar9[10] = ppppuStack_94;
        puVar9[0xb] = ppppuStack_90;
        puVar9[0xc] = ppppuStack_8c;
        puVar9[0xd] = ppppuStack_88;
        piVar14[2] = iVar16 + 1;
        piVar14 = (int *)param_2[0x1f];
        piVar12 = (int *)param_2[0x1d];
      }
      param_2[0x18] = 0;
      FUN_009495dc(param_2 + 0x1c);
      local_f8 = (undefined4 ****)param_2[0x14];
      local_f4 = (undefined4 ****)param_2[0x15];
      local_f0 = (undefined4 ****)param_2[0x16];
      goto LAB_011bd27c;
    }
    local_224 = local_e8;
    local_210 = local_e4;
    local_20c = local_dc;
    local_214 = local_d8;
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
    ppppuVar22 = local_d4;
LAB_011bca74:
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar25 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar12 = (int *)param_2[0x2a];
      piVar14 = (int *)param_2[0x2b];
      iVar19 = param_2[0x2c];
      goto LAB_011bc90c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      iVar16 = param_2[0x26];
      piVar14 = (int *)param_2[0x27];
      goto LAB_011bc92c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22670);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22670);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      piVar14 = (int *)param_2[0x22];
      iVar16 = param_2[0x23];
      goto LAB_011bc944;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      piVar14 = (int *)param_2[0x11];
      iVar16 = param_2[0x12];
      bVar15 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_011bc960;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 3:
      break;
    case 4:
      iVar16 = param_2[0x1a];
      iVar19 = param_2[0x1b];
      goto LAB_011bd134;
    }
LAB_011bca08:
    FUN_009ecbe0(&local_e8,param_2 + 0x14,param_3);
    ppppuVar22 = local_d4;
    ppppuVar3 = local_dc;
    unaff_r8 = local_e0;
    ppppuVar2 = local_e4;
    ppppuVar10 = local_e8;
    if (local_e8 == (undefined4 ****)&DAT_00000003) {
      uVar7 = 3;
LAB_011bd2d8:
      local_230 = param_2 + 0x24;
      local_234 = (undefined1 *)((int)param_2 + 0x4d);
      local_228 = param_2 + 0x2d;
      local_22c = param_2 + 0x29;
      *local_234 = uVar7;
      *(undefined1 *)local_230 = 3;
      *(undefined1 *)local_22c = 3;
      *(undefined1 *)local_228 = 3;
      *param_1 = 2;
      uVar7 = 4;
      goto LAB_011bce40;
    }
    local_224 = local_e8;
    local_210 = local_e4;
    local_20c = local_dc;
    local_214 = local_d8;
    local_120 = local_d0;
    ppppuStack_11c = local_cc;
    ppppuStack_118 = local_c8;
    ppppuStack_114 = local_c4;
    local_110 = local_c0;
    ppppuStack_10c = local_bc;
    ppppuStack_108 = ppppuStack_b8;
    ppppuStack_104 = ppppuStack_b4;
    ppppuStack_100 = ppppuStack_b0;
    FUN_011928d4(param_2 + 0x14);
    if (ppppuVar10 != (undefined4 ****)0x2) {
      local_48 = local_120;
      ppppuStack_44 = ppppuStack_11c;
      ppppuStack_40 = ppppuStack_118;
      local_3c = ppppuStack_114;
      local_38 = local_110;
      ppppuStack_34 = ppppuStack_10c;
      ppppuStack_30 = ppppuStack_108;
      ppppuStack_2c = ppppuStack_104;
      ppppuStack_28 = ppppuStack_100;
      goto LAB_011bca74;
    }
    local_f8 = ppppuVar2;
    local_f4 = unaff_r8;
    local_f0 = ppppuVar3;
LAB_011bd27c:
    FUN_006cac18(&local_e8,&local_f8);
    local_210 = local_e8;
    bVar25 = false;
    local_20c = local_e0;
    local_214 = local_dc;
    local_48 = local_d4;
    ppppuStack_44 = local_d0;
    ppppuStack_40 = local_cc;
    local_3c = local_c8;
    local_38 = local_c4;
    ppppuStack_34 = local_c0;
    ppppuStack_30 = local_bc;
    *(undefined1 *)(param_2 + 0x13) = 0;
    unaff_r8 = local_e4;
    ppppuVar22 = local_d8;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      iVar19 = param_2[5];
LAB_011bcc84:
      param_2[6] = iVar16;
      param_2[7] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d64);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d64);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d64);
      }
      iVar16 = param_2[6];
    }
    piVar14 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16 + 0x10;
    iVar19 = piVar14[4];
    iVar24 = piVar14[5];
    iVar21 = piVar14[6];
    iVar20 = piVar14[7];
    iVar16 = piVar14[8];
    iVar8 = piVar14[1];
    iVar17 = piVar14[2];
    iVar23 = piVar14[3];
    param_2[5] = *piVar14;
    param_2[6] = iVar8;
    param_2[7] = iVar17;
    param_2[8] = iVar23;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar24;
    param_2[0xb] = iVar21;
    param_2[0xc] = iVar20;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar14[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar16;
  case '\x06':
    FUN_011abd6c(&local_e8,param_2 + 0xe,param_3);
    if (local_e8 == (undefined4 ****)0x2) {
      *param_1 = 2;
      uVar7 = 6;
      goto LAB_011bce40;
    }
    local_224 = local_e4;
    local_210 = local_e0;
    local_20c = local_d8;
    local_214 = local_d4;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar25 = cVar1 == '\x03';
      if (bVar25) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar25 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    unaff_r8 = local_dc;
    ppppuVar22 = local_d0;
    if (((uint)local_e8 & 1) != 0) {
      local_190 = local_cc;
      ppppuStack_18c = local_c8;
      ppppuStack_188 = local_c4;
      local_184 = local_c0;
      local_180 = local_bc;
      ppppuStack_17c = ppppuStack_b8;
      ppppuStack_178 = ppppuStack_b4;
      ppppuStack_174 = ppppuStack_b0;
      ppppuStack_170 = ppppuStack_ac;
      goto LAB_011bcdd4;
    }
    uVar13 = 0;
    local_190 = local_cc;
    ppppuStack_18c = local_c8;
    ppppuStack_188 = local_c4;
    local_184 = local_c0;
    local_180 = local_bc;
    ppppuStack_17c = ppppuStack_b8;
    ppppuStack_178 = ppppuStack_b4;
    ppppuVar10 = local_c0;
    goto LAB_011bcdfc;
  }
  ppppuVar6 = ppppuStack_28;
  ppppuVar10 = ppppuStack_2c;
  ppppuVar5 = ppppuStack_30;
  ppppuVar4 = ppppuStack_34;
  ppppuVar3 = local_38;
  ppppuVar2 = local_3c;
  ppppuStack_188 = ppppuStack_40;
  ppppuStack_18c = ppppuStack_44;
  local_190 = local_48;
  local_228 = param_2 + 0x2d;
  local_22c = param_2 + 0x29;
  local_230 = param_2 + 0x24;
  local_234 = (undefined1 *)((int)param_2 + 0x4d);
  *local_234 = 1;
  FUN_01192a14(param_2 + 0xe);
  *(undefined1 *)local_230 = 1;
  *(undefined1 *)local_22c = 1;
  *(undefined1 *)local_228 = 1;
  if (bVar25) {
    local_184 = ppppuVar2;
    local_180 = ppppuVar3;
    ppppuStack_17c = ppppuVar4;
    ppppuStack_178 = ppppuVar5;
    ppppuStack_174 = ppppuVar10;
    ppppuStack_170 = ppppuVar6;
LAB_011bcdd4:
    uVar13 = 1;
    ppppuVar10 = local_224;
  }
  else {
    uVar13 = 0;
    ppppuVar10 = &local_184;
    local_184 = ppppuVar2;
    local_180 = ppppuVar3;
    ppppuStack_17c = ppppuVar4;
    ppppuStack_178 = ppppuVar5;
  }
LAB_011bcdfc:
  param_1[2] = local_210;
  param_1[1] = ppppuVar10;
  param_1[4] = local_20c;
  param_1[5] = local_214;
  *param_1 = uVar13;
  param_1[3] = unaff_r8;
  param_1[6] = ppppuVar22;
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
LAB_011bce40:
  *(undefined1 *)(param_2 + 3) = uVar7;
  return;
}

