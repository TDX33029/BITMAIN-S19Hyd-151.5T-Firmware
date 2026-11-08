// FUN_0093b148 @ 0093b148 size=7012 calls_out=26 calls_in=0
// strings: poolRecordErrors | emptyName | fixedShareRatioSum | missingQuota | duplicateNames | zeroStrategies

void FUN_0093b148(undefined4 *param_1,int *param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int unaff_r6;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint unaff_r8;
  int iVar18;
  uint uVar19;
  undefined *puVar20;
  int iVar21;
  uint unaff_r11;
  int *piVar22;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  int iVar23;
  int *local_3ec;
  int *local_3e8;
  int *local_3e4;
  int *local_3dc;
  int *local_3d8;
  int *local_3cc;
  uint *local_3c4;
  int *local_3c0;
  int *local_3bc;
  uint local_3b4;
  uint auStack_390 [10];
  uint auStack_368 [10];
  uint auStack_340 [10];
  uint auStack_318 [10];
  uint local_2f0 [10];
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint local_2bc;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint local_290;
  uint uStack_28c;
  uint uStack_288;
  uint uStack_284;
  uint uStack_280;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  int local_1e8;
  undefined1 local_144;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint uStack_100;
  uint uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar13 = *param_2;
    iVar18 = param_2[1];
    local_3c0 = (int *)0x80000007;
    uVar11 = 0;
    param_2[2] = iVar18;
    iVar16 = *(int *)(iVar18 + 0x10);
    local_3c4 = (uint *)param_3;
    local_3b4 = unaff_r8;
    local_3bc = (int *)in_r12;
    switch(*(undefined4 *)(iVar16 + 0x40)) {
    case 7:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,&DAT_005325f1,7);
      local_3c4 = (uint *)extraout_r2;
      param_4 = (int *)extraout_r3;
      local_3bc = (int *)extraout_r12;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b344;
      }
      break;
    default:
      goto switchD_0093b1e8_caseD_8;
    case 9:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"emptyName",9);
      local_3c4 = (uint *)extraout_r2_01;
      param_4 = (int *)extraout_r3_01;
      local_3bc = (int *)extraout_r12_01;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b2c0;
      }
      break;
    case 0xc:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"missingQuota",0xc);
      local_3c4 = (uint *)extraout_r2_03;
      param_4 = (int *)extraout_r3_03;
      local_3bc = (int *)extraout_r12_03;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b440;
      }
      break;
    case 0xe:
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"duplicateNames",0xe);
      if (iVar10 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b300;
      }
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"zeroStrategies",0xe);
      local_3c4 = (uint *)extraout_r2_04;
      param_4 = (int *)extraout_r3_04;
      local_3bc = (int *)extraout_r12_04;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b400;
      }
      break;
    case 0xf:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,&DAT_003e8140,0xf);
      local_3c4 = (uint *)extraout_r2_05;
      param_4 = (int *)extraout_r3_05;
      local_3bc = (int *)extraout_r12_05;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b4bc;
      }
      break;
    case 0x10:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"poolRecordErrors",0x10);
      local_3c4 = (uint *)extraout_r2_00;
      param_4 = (int *)extraout_r3_00;
      local_3bc = (int *)extraout_r12_00;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b3bc;
      }
      break;
    case 0x12:
      iVar16 = thunk_FUN_01bed842(*(int *)(iVar16 + 0x3c) + 8,"fixedShareRatioSum",0x12);
      local_3c4 = (uint *)extraout_r2_02;
      param_4 = (int *)extraout_r3_02;
      local_3bc = (int *)extraout_r12_02;
      if (iVar16 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar18;
        goto LAB_0093b280;
      }
    }
    local_3c0 = (int *)0x80000007;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c223c8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c223c8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b344:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar3 = param_2 + 4;
    piVar2 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13;
    piVar22 = param_2 + 5;
    iVar23 = piVar2[4];
    iVar6 = piVar2[5];
    iVar5 = piVar2[6];
    iVar21 = piVar2[7];
    iVar13 = piVar2[8];
    iVar18 = piVar2[1];
    iVar16 = piVar2[2];
    iVar10 = piVar2[3];
    *piVar22 = *piVar2;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar23 + 0x20;
    param_2[10] = iVar6;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar18 = piVar2[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar3;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar18;
LAB_0093b8d8:
    iVar13 = *piVar3;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar13;
    param_2[0x12] = (int)piVar22;
    param_2[0x13] = iVar18;
    goto LAB_0093b904;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar3 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar18 = param_2[0x10];
      goto LAB_0093b8d8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)param_2[0x14] != '\0') {
        if ((char)param_2[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      iVar13 = param_2[0x11];
    }
LAB_0093b904:
    FUN_006666fc(&local_278,*(undefined4 *)(iVar13 + 4),*(undefined4 *)(iVar13 + 8));
    local_3c0 = (int *)0x80000002;
    uVar11 = 0;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_2c8 = local_264;
    uStack_2c4 = local_260;
    uStack_2c0 = local_25c;
    local_2bc = local_258;
    local_2b8 = local_254;
    uStack_2b4 = local_250;
    uStack_2b0 = local_24c;
    local_3c4 = (uint *)local_26c;
    param_4 = (int *)local_254;
    local_3b4 = local_278;
    unaff_r11 = local_270;
    local_3bc = (int *)local_274;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b2c0:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x24;
    iVar6 = piVar22[4];
    iVar23 = piVar22[5];
    iVar5 = piVar22[6];
    iVar21 = piVar22[7];
    iVar13 = piVar22[8];
    iVar18 = piVar22[1];
    iVar16 = piVar22[2];
    iVar10 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar13;
  case '\x06':
    FUN_011adb38(&local_278,param_2 + 0xe);
    if (local_278 == 2) {
      *param_1 = 2;
      uVar1 = 6;
      goto LAB_0093cbd0;
    }
    local_3c0 = (int *)local_274;
    local_3b4 = local_270;
    local_3bc = (int *)local_26c;
    puVar4 = auStack_390;
LAB_0093bdcc:
    *puVar4 = local_25c;
    puVar4[1] = local_258;
    puVar4[2] = local_254;
    puVar4[3] = local_250;
    puVar4[4] = local_24c;
    puVar4[5] = uStack_248;
    puVar4[6] = uStack_244;
    puVar4[7] = uStack_240;
    puVar4[8] = uStack_23c;
    local_3c4 = (uint *)local_264;
    unaff_r11 = local_268;
    if ((local_278 & 1) == 0) {
      local_2c8 = *puVar4;
      uStack_2c4 = puVar4[1];
      uStack_2c0 = puVar4[2];
      uVar11 = 0;
      local_2bc = puVar4[3];
      param_4 = (int *)puVar4[4];
      uStack_2b4 = puVar4[5];
      uStack_2b0 = puVar4[6];
      local_3c0 = (int *)local_260;
      local_2b8 = (uint)param_4;
    }
    else {
      local_2c8 = *puVar4;
      uStack_2c4 = puVar4[1];
      uStack_2c0 = puVar4[2];
      local_2bc = puVar4[3];
      uStack_2b4 = puVar4[5];
      uStack_2b0 = puVar4[6];
      uStack_2ac = puVar4[7];
      uStack_2a8 = puVar4[8];
      uVar11 = 1;
      param_4 = local_3c0;
      local_3c0 = (int *)local_260;
      local_2b8 = puVar4[4];
    }
    break;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b300:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = param_2 + 4;
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_3c0 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0xc;
    iVar18 = piVar3[4];
    iVar23 = piVar3[5];
    iVar6 = piVar3[6];
    iVar5 = piVar3[7];
    iVar13 = piVar3[8];
    iVar16 = piVar3[1];
    iVar10 = piVar3[2];
    iVar21 = piVar3[3];
    *local_3c0 = *piVar3;
    param_2[6] = iVar16;
    param_2[7] = iVar10;
    param_2[8] = iVar21;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar6;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    param_2[0xc] = iVar5;
    local_3bc = (int *)piVar3[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2b] = (int)local_3c0;
    param_2[0x2a] = (int)piVar22;
    param_2[0x2c] = (int)local_3bc;
LAB_0093b78c:
    iVar13 = *piVar22;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x28] = (int)local_3bc;
    param_2[0x27] = (int)local_3c0;
    param_2[0x26] = iVar13;
LAB_0093b7a0:
    uVar19 = *(uint *)(iVar13 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = uVar19;
    param_2[0x10] = (int)local_3c0;
    param_2[0x11] = (int)local_3bc;
    param_2[0x12] = iVar13;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_3c4 = (uint *)(local_3c0 + 6);
    if (*(int *)(*(int *)*local_3c4 + 0x10) == 0) {
LAB_0093c570:
      if (0x1999999 < uVar19) {
        uVar11 = 0;
        uVar14 = (uint)local_3bc;
LAB_0093c584:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,uVar14);
      }
      uVar14 = uVar19 * 0x50;
      if (uVar14 == 0) {
        iVar18 = 4;
        uVar19 = 0;
      }
      else {
        uVar11 = 4;
        iVar18 = FUN_01298504(uVar14,4);
        if (iVar18 == 0) goto LAB_0093c584;
      }
      param_2[0x14] = uVar19;
LAB_0093c5f0:
      param_2[0x15] = iVar18;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar13 + 8) != 0) {
        iVar21 = 0;
        iVar18 = *(int *)(iVar13 + 8) * 0xc;
        iVar10 = param_2[0x16];
        iVar16 = iVar10 * 0x50;
        iVar13 = *(int *)(iVar13 + 4);
        do {
          iVar5 = local_3c0[4];
          iVar6 = local_3c0[5];
          iVar23 = local_3c0[6];
          iVar12 = local_3c0[7];
          piVar22 = (int *)0x0;
          if (*local_3c0 != 0) {
            piVar22 = local_3c0 + 1;
          }
          iVar15 = local_3c0[8];
          iVar17 = iVar10 + iVar21;
          if (iVar17 == param_2[0x14]) {
            FUN_00a20f30();
          }
          iVar18 = iVar18 + -0xc;
          puVar8 = (undefined4 *)(param_2[0x15] + iVar16);
          *puVar8 = 1;
          iVar16 = iVar16 + 0x50;
          puVar8[9] = iVar13;
          puVar8[10] = local_3bc;
          puVar8[2] = iVar21;
          iVar21 = iVar21 + 1;
          puVar8[4] = iVar5;
          puVar8[6] = iVar23;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(char *)(puVar8 + 8) = (char)iVar15;
          puVar8[1] = 0;
          puVar8[3] = piVar22;
          puVar8[5] = iVar6;
          puVar8[7] = iVar12;
          param_2[0x16] = iVar17 + 1;
          iVar13 = iVar13 + 0xc;
        } while (iVar18 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a147d4(&local_278);
      local_b8 = local_278;
      uStack_b4 = local_274;
      uStack_b0 = local_270;
      uStack_ac = local_26c;
      local_a8 = local_268;
      uStack_a4 = local_264;
      uStack_a0 = local_260;
      uStack_9c = local_25c;
      uStack_98 = local_258;
      local_94 = local_254;
      uStack_90 = local_250;
      uStack_8c = local_24c;
      uStack_88 = uStack_248;
      uStack_84 = uStack_244;
      param_2[0x18] = local_278;
      param_2[0x19] = local_274;
      param_2[0x1a] = local_270;
      param_2[0x1b] = local_26c;
      param_2[0x1c] = local_268;
      param_2[0x1d] = local_264;
      param_2[0x1e] = local_260;
      param_2[0x1f] = local_25c;
      param_2[0x20] = local_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = local_24c;
      param_2[0x24] = uStack_248;
      param_2[0x25] = uStack_244;
      goto switchD_0093be84_caseD_4;
    }
LAB_0093b7e8:
    if (0x690690 < uVar19) {
      uVar11 = 0;
      uVar14 = (uint)local_3bc;
LAB_0093b7fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,uVar14);
    }
    uVar14 = uVar19 * 0x138;
    if (uVar14 == 0) {
      iVar18 = 4;
      uVar19 = 0;
    }
    else {
      uVar11 = 4;
      iVar18 = FUN_01298504(uVar14,4);
      if (iVar18 == 0) goto LAB_0093b7fc;
    }
    param_2[0x14] = uVar19;
LAB_0093bfb0:
    local_3cc = param_2 + 0x14;
    param_2[0x15] = iVar18;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar13 + 8) != 0) {
      uVar19 = *(uint *)(iVar13 + 4);
      uVar14 = 0;
      iVar13 = *(int *)(iVar13 + 8) * 0xc;
      puVar4 = (uint *)((uint)&local_278 | 4);
      do {
        if (*local_3c0 == 1) {
          local_b8 = local_3c0[1];
          uStack_b4 = local_3c0[2];
          uStack_b0 = local_3c0[3];
        }
        local_278 = (uint)(*local_3c0 == 1);
        local_268 = local_3c0[4];
        local_264 = local_3c0[5];
        local_260 = *local_3c4;
        local_25c = local_3c0[7];
        iVar18 = local_3c0[8];
        *puVar4 = local_b8;
        puVar4[1] = uStack_b4;
        puVar4[2] = uStack_b0;
        local_258 = CONCAT31(local_258._1_3_,(char)iVar18);
        local_144 = 0;
        iVar18 = param_2[0x16];
        local_254 = (uint)local_3bc;
        local_250 = uVar19;
        local_24c = uVar14;
        if (iVar18 == param_2[0x14]) {
          FUN_00f9d6bc(local_3cc);
        }
        uVar19 = uVar19 + 0xc;
        FUN_01bed4e2(iVar18 * 0x138 + param_2[0x15],&local_278,0x138);
        uVar14 = uVar14 + 1;
        iVar13 = iVar13 + -0xc;
        param_2[0x16] = iVar18 + 1;
      } while (iVar13 != 0);
    }
    local_80 = *local_3cc;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a14064(&local_278);
    local_b8 = local_278;
    uStack_b4 = local_274;
    uStack_b0 = local_270;
    uStack_ac = local_26c;
    local_a8 = local_268;
    uStack_a4 = local_264;
    uStack_a0 = local_260;
    uStack_9c = local_25c;
    uStack_98 = local_258;
    local_94 = local_254;
    uStack_90 = local_250;
    uStack_8c = local_24c;
    uStack_88 = uStack_248;
    uStack_84 = uStack_244;
    param_2[0x18] = local_278;
    param_2[0x19] = local_274;
    param_2[0x1a] = local_270;
    param_2[0x1b] = local_26c;
    param_2[0x1c] = local_268;
    param_2[0x1d] = local_264;
    param_2[0x1e] = local_260;
    param_2[0x1f] = local_25c;
    param_2[0x20] = local_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = local_24c;
    param_2[0x24] = uStack_248;
    param_2[0x25] = uStack_244;
switchD_0093be84_caseD_3:
    FUN_009ed994(&local_278,param_2 + 0x18,param_3);
    param_4 = (int *)local_278;
    if (local_278 != 3) {
      puVar4 = &local_e0;
      local_3bc = (int *)local_270;
      local_3c4 = (uint *)local_268;
      local_3c0 = (int *)local_264;
      local_e0 = local_260;
      uStack_dc = local_25c;
      uStack_d8 = local_258;
      uStack_d4 = local_254;
      local_d0 = local_250;
      uStack_cc = local_24c;
      uStack_c8 = uStack_248;
      uStack_c4 = uStack_244;
      uStack_c0 = uStack_240;
      FUN_0093d2b0(param_2 + 0x18);
      local_3b4 = local_274;
      unaff_r11 = local_26c;
      goto LAB_0093c7f8;
    }
    uVar1 = 3;
    goto LAB_0093c784;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar22 = (int *)param_2[0x2a];
      local_3c0 = (int *)param_2[0x2b];
      local_3bc = (int *)param_2[0x2c];
      goto LAB_0093b78c;
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
      iVar13 = param_2[0x26];
      local_3c0 = (int *)param_2[0x27];
      local_3bc = (int *)param_2[0x28];
      goto LAB_0093b7a0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      local_3c0 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_3c4 = (uint *)(local_3c0 + 6);
      uVar19 = param_2[0xf];
      local_3bc = (int *)param_2[0x11];
      iVar13 = param_2[0x12];
      if (*(int *)(*(int *)*local_3c4 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_0093b7e8;
        param_2[0x14] = 0;
        iVar18 = 4;
        goto LAB_0093bfb0;
      }
      if (param_2[0xe] != 0) goto LAB_0093c570;
      param_2[0x14] = 0;
      iVar18 = 4;
      goto LAB_0093c5f0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto switchD_0093be84_caseD_3;
    }
switchD_0093be84_caseD_4:
    FUN_00a09a14(&local_278,param_2 + 0x18,param_3);
    param_4 = (int *)local_278;
    if (local_278 != 3) {
      puVar4 = &local_70;
      local_3bc = (int *)local_270;
      local_3c4 = (uint *)local_268;
      local_3c0 = (int *)local_264;
      local_70 = local_260;
      uStack_6c = local_25c;
      uStack_68 = local_258;
      uStack_64 = local_254;
      local_60 = local_250;
      uStack_5c = local_24c;
      uStack_58 = uStack_248;
      uStack_54 = uStack_244;
      uStack_50 = uStack_240;
      FUN_011a1308(param_2 + 0x18);
      local_3b4 = local_274;
      unaff_r11 = local_26c;
LAB_0093c7f8:
      local_3d8 = param_2 + 0x2d;
      local_3dc = param_2 + 0xe;
      local_3e4 = param_2 + 0x29;
      if (param_4 != (int *)0x2) {
        local_2a0 = *puVar4;
        uStack_29c = puVar4[1];
        uStack_298 = puVar4[2];
        uStack_294 = puVar4[3];
        local_290 = puVar4[4];
        uStack_28c = puVar4[5];
        uStack_288 = puVar4[6];
        uStack_284 = puVar4[7];
        uStack_280 = puVar4[8];
      }
      else {
        local_3c0 = (int *)0x80000006;
      }
      *(undefined2 *)(param_2 + 0x13) = 1;
      FUN_0093d3f0(local_3dc);
      *(undefined1 *)local_3d8 = 1;
      *(undefined1 *)local_3e4 = 1;
      puVar4 = &local_2a0;
      if (param_4 == (int *)0x2) goto LAB_0093cb78;
LAB_0093c85c:
      local_2c8 = *puVar4;
      uStack_2c4 = puVar4[1];
      uStack_2c0 = puVar4[2];
      local_2bc = puVar4[3];
      local_2b8 = puVar4[4];
      uStack_2b4 = puVar4[5];
      uStack_2b0 = puVar4[6];
      uStack_2ac = puVar4[7];
      uStack_2a8 = puVar4[8];
      uVar11 = 1;
      goto LAB_0093cb90;
    }
    uVar1 = 4;
LAB_0093c784:
    *(undefined1 *)(param_2 + 0x13) = uVar1;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar1 = 8;
    goto LAB_0093cbd0;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b400:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x30;
    iVar6 = piVar22[4];
    iVar23 = piVar22[5];
    iVar5 = piVar22[6];
    iVar21 = piVar22[7];
    iVar13 = piVar22[8];
    iVar18 = piVar22[1];
    iVar16 = piVar22[2];
    iVar10 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar13;
  case '\n':
    FUN_011adb38(&local_278,param_2 + 0xe);
    if (local_278 == 2) {
      *param_1 = 2;
      uVar1 = 10;
      goto LAB_0093cbd0;
    }
    local_3c0 = (int *)local_274;
    local_3b4 = local_270;
    local_3bc = (int *)local_26c;
    puVar4 = auStack_368;
    goto LAB_0093bdcc;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b280:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x3c;
    iVar6 = piVar22[4];
    iVar23 = piVar22[5];
    iVar5 = piVar22[6];
    iVar21 = piVar22[7];
    iVar13 = piVar22[8];
    iVar18 = piVar22[1];
    iVar16 = piVar22[2];
    iVar10 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar13;
  case '\f':
    FUN_011adb38(&local_278,param_2 + 0xe);
    if (local_278 == 2) {
      *param_1 = 2;
      uVar1 = 0xc;
      goto LAB_0093cbd0;
    }
    local_3c0 = (int *)local_274;
    local_3b4 = local_270;
    local_3bc = (int *)local_26c;
    puVar4 = auStack_340;
    goto LAB_0093bdcc;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b440:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x48;
    iVar6 = piVar22[4];
    iVar23 = piVar22[5];
    iVar5 = piVar22[6];
    iVar21 = piVar22[7];
    iVar13 = piVar22[8];
    iVar18 = piVar22[1];
    iVar16 = piVar22[2];
    iVar10 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar13;
  case '\x0e':
    FUN_011adb38(&local_278,param_2 + 0xe);
    if (local_278 == 2) {
      *param_1 = 2;
      uVar1 = 0xe;
      goto LAB_0093cbd0;
    }
    local_3c0 = (int *)local_274;
    local_3b4 = local_270;
    local_3bc = (int *)local_26c;
    puVar4 = auStack_318;
    goto LAB_0093bdcc;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b4bc:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x54;
    iVar6 = piVar22[4];
    iVar23 = piVar22[5];
    iVar5 = piVar22[6];
    iVar21 = piVar22[7];
    iVar13 = piVar22[8];
    iVar18 = piVar22[1];
    iVar16 = piVar22[2];
    iVar10 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar18;
    param_2[7] = iVar16;
    param_2[8] = iVar10;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar5;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar13;
  case '\x10':
    FUN_011adb38(&local_278,param_2 + 0xe);
    if (local_278 == 2) {
      *param_1 = 2;
      uVar1 = 0x10;
      goto LAB_0093cbd0;
    }
    local_3c0 = (int *)local_274;
    local_3b4 = local_270;
    local_3bc = (int *)local_26c;
    puVar4 = local_2f0;
    goto LAB_0093bdcc;
  case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar18 = param_2[5];
LAB_0093b3bc:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar18;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c223c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c223c8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      iVar13 = param_2[6];
    }
    local_3bc = param_2 + 4;
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar22 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x18;
    iVar5 = piVar3[4];
    iVar6 = piVar3[5];
    iVar21 = piVar3[6];
    iVar10 = piVar3[7];
    iVar13 = piVar3[8];
    iVar18 = piVar3[1];
    unaff_r6 = piVar3[2];
    iVar16 = piVar3[3];
    *piVar22 = *piVar3;
    param_2[6] = iVar18;
    param_2[7] = unaff_r6;
    param_2[8] = iVar16;
    param_2[9] = iVar5 + 0x20;
    param_2[10] = iVar6;
    param_2[0xb] = iVar21;
    param_2[0xc] = iVar10;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar3[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_3bc;
    param_2[0x2b] = (int)piVar22;
    param_2[0x2c] = iVar13;
LAB_0093ba1c:
    iVar18 = *local_3bc;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar18;
    param_2[0x27] = (int)piVar22;
    param_2[0x28] = iVar13;
LAB_0093ba3c:
    puVar20 = *(undefined **)(iVar18 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar18;
    param_2[0x11] = iVar13;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar20;
    param_2[0x10] = (int)piVar22;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_3c4 = (uint *)(piVar22 + 6);
    if (*(int *)(*(int *)*local_3c4 + 0x10) == 0) {
LAB_0093c880:
      if (&UNK_00ba2e8b < puVar20) {
        uVar11 = 0;
LAB_0093c894:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,unaff_r6);
      }
      unaff_r6 = (int)puVar20 * 0xb0;
      if (unaff_r6 == 0) {
        iVar16 = 8;
        puVar20 = (undefined *)0x0;
      }
      else {
        uVar11 = 8;
        iVar16 = FUN_01298504(unaff_r6,8);
        if (iVar16 == 0) goto LAB_0093c894;
      }
      param_2[0x14] = (int)puVar20;
      local_3bc = (int *)iVar13;
LAB_0093c8f0:
      piVar3 = param_2 + 0x14;
      param_2[0x15] = iVar16;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      iVar13 = *(int *)(iVar18 + 8);
      if (iVar13 != 0) {
        iVar18 = *(int *)(iVar18 + 4);
        iVar21 = 0;
        iVar16 = param_2[0x16];
        iVar10 = 0;
        do {
          iVar5 = piVar22[4];
          iVar6 = piVar22[5];
          piVar2 = (int *)0x0;
          if (*piVar22 != 0) {
            piVar2 = piVar22 + 1;
          }
          iVar15 = piVar22[6];
          iVar12 = piVar22[7];
          iVar17 = iVar16 + iVar10;
          iVar23 = piVar22[8];
          if (iVar17 == *piVar3) {
            FUN_00a20d80(piVar3);
          }
          iVar7 = iVar18 + iVar21;
          iVar9 = param_2[0x15] + iVar16 * 0xb0 + iVar21 * 4;
          iVar21 = iVar21 + 0x2c;
          *(int *)(iVar9 + 0x80) = iVar7;
          *(int **)(iVar9 + 0x84) = local_3bc;
          *(undefined4 *)(iVar9 + 0x88) = 1;
          *(undefined4 *)(iVar9 + 0x8c) = 0;
          *(int *)(iVar9 + 0x90) = iVar10;
          iVar10 = iVar10 + 1;
          *(int *)(iVar9 + 0x98) = iVar5;
          *(int *)(iVar9 + 0x9c) = iVar6;
          *(char *)(iVar9 + 0xa8) = (char)iVar23;
          *(int *)(iVar9 + 0xa0) = iVar15;
          *(undefined1 *)(iVar9 + 0xac) = 0;
          *(int *)(iVar9 + 0xa4) = iVar12;
          *(int **)(iVar9 + 0x94) = piVar2;
          param_2[0x16] = iVar17 + 1;
        } while (iVar13 * 0x2c != iVar21);
      }
      local_80 = *piVar3;
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a1563c(&local_278);
      local_b8 = local_278;
      uStack_b4 = local_274;
      uStack_b0 = local_270;
      uStack_ac = local_26c;
      local_a8 = local_268;
      uStack_a4 = local_264;
      uStack_a0 = local_260;
      uStack_9c = local_25c;
      uStack_98 = local_258;
      local_94 = local_254;
      uStack_90 = local_250;
      uStack_8c = local_24c;
      uStack_88 = uStack_248;
      uStack_84 = uStack_244;
      param_2[0x18] = local_278;
      param_2[0x19] = local_274;
      param_2[0x1a] = local_270;
      param_2[0x1b] = local_26c;
      param_2[0x1c] = local_268;
      param_2[0x1d] = local_264;
      param_2[0x1e] = local_260;
      param_2[0x1f] = local_25c;
      param_2[0x20] = local_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = local_24c;
      param_2[0x24] = uStack_248;
      param_2[0x25] = uStack_244;
      goto switchD_0093bf18_caseD_4;
    }
LAB_0093ba7c:
    if (&UNK_00505050 < puVar20) {
      uVar11 = 0;
LAB_0093ba90:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,unaff_r6);
    }
    unaff_r6 = (int)puVar20 * 0x198;
    if (unaff_r6 == 0) {
      iVar16 = 8;
      puVar20 = (undefined *)0x0;
    }
    else {
      uVar11 = 8;
      iVar16 = FUN_01298504(unaff_r6,8);
      if (iVar16 == 0) goto LAB_0093ba90;
    }
    param_2[0x14] = (int)puVar20;
    local_3bc = (int *)iVar13;
LAB_0093c1c4:
    param_2[0x15] = iVar16;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar18 + 8) != 0) {
      iVar16 = *(int *)(iVar18 + 4);
      iVar13 = *(int *)(iVar18 + 8) * 0x2c;
      iVar18 = 0;
      do {
        if (*piVar22 == 1) {
          local_b8 = piVar22[1];
          uStack_b4 = piVar22[2];
          uStack_b0 = piVar22[3];
        }
        local_108 = (uint)(*piVar22 == 1);
        local_f8 = piVar22[4];
        local_f4 = piVar22[5];
        local_ec = piVar22[7];
        local_f0 = *local_3c4;
        local_e8 = (undefined1)piVar22[8];
        local_104 = local_b8;
        uStack_100 = uStack_b4;
        uStack_fc = uStack_b0;
        local_e4 = 0;
        iVar10 = param_2[0x16];
        local_110 = (int)local_3bc;
        local_1e8 = iVar18;
        local_10c = iVar16;
        if (iVar10 == param_2[0x14]) {
          FUN_00f9d59c(param_2 + 0x14);
        }
        iVar16 = iVar16 + 0x2c;
        FUN_01bed4e2(iVar10 * 0x198 + param_2[0x15],&local_278,0x198);
        iVar18 = iVar18 + 1;
        iVar13 = iVar13 + -0x2c;
        param_2[0x16] = iVar10 + 1;
      } while (iVar13 != 0);
    }
    local_80 = param_2[0x14];
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a138ec(&local_278);
    local_b8 = local_278;
    uStack_b4 = local_274;
    uStack_b0 = local_270;
    uStack_ac = local_26c;
    local_a8 = local_268;
    uStack_a4 = local_264;
    uStack_a0 = local_260;
    uStack_9c = local_25c;
    uStack_98 = local_258;
    local_94 = local_254;
    uStack_90 = local_250;
    uStack_8c = local_24c;
    uStack_88 = uStack_248;
    uStack_84 = uStack_244;
    param_2[0x18] = local_278;
    param_2[0x19] = local_274;
    param_2[0x1a] = local_270;
    param_2[0x1b] = local_26c;
    param_2[0x1c] = local_268;
    param_2[0x1d] = local_264;
    param_2[0x1e] = local_260;
    param_2[0x1f] = local_25c;
    param_2[0x20] = local_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = local_24c;
    param_2[0x24] = uStack_248;
    param_2[0x25] = uStack_244;
switchD_0093bf18_caseD_3:
    FUN_009fa7e4(&local_278,param_2 + 0x18,param_3);
    if (local_278 != 3) {
      puVar4 = &local_e0;
      local_3bc = (int *)local_270;
      local_3c4 = (uint *)local_268;
      local_3c0 = (int *)local_264;
      local_e0 = local_260;
      uStack_dc = local_25c;
      uStack_d8 = local_258;
      uStack_d4 = local_254;
      local_d0 = local_250;
      uStack_cc = local_24c;
      uStack_c8 = uStack_248;
      uStack_c4 = uStack_244;
      uStack_c0 = uStack_240;
      FUN_0093d43c(param_2 + 0x18);
      local_3b4 = local_274;
      param_4 = (int *)local_278;
      unaff_r11 = local_26c;
      goto LAB_0093cb14;
    }
    uVar1 = 3;
LAB_0093caa0:
    local_3e4 = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar1;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_3e4 = 3;
    *param_1 = 2;
    uVar1 = 0x12;
    goto LAB_0093cbd0;
  case '\x12':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      local_3bc = (int *)param_2[0x2a];
      piVar22 = (int *)param_2[0x2b];
      iVar13 = param_2[0x2c];
      goto LAB_0093ba1c;
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
      iVar18 = param_2[0x26];
      piVar22 = (int *)param_2[0x27];
      iVar13 = param_2[0x28];
      goto LAB_0093ba3c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      puVar20 = (undefined *)param_2[0xf];
      piVar22 = (int *)param_2[0x10];
      local_3c4 = (uint *)(piVar22 + 6);
      iVar13 = param_2[0x11];
      iVar18 = param_2[0x12];
      local_3bc = (int *)iVar13;
      if (*(int *)(*(int *)*local_3c4 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_0093ba7c;
        param_2[0x14] = 0;
        iVar16 = 8;
        goto LAB_0093c1c4;
      }
      if (param_2[0xe] != 0) goto LAB_0093c880;
      param_2[0x14] = 0;
      iVar16 = 8;
      goto LAB_0093c8f0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto switchD_0093bf18_caseD_3;
    }
switchD_0093bf18_caseD_4:
    FUN_009f1e9c(&local_278,param_2 + 0x18,param_3);
    if (local_278 == 3) {
      uVar1 = 4;
      goto LAB_0093caa0;
    }
    puVar4 = &local_70;
    local_3bc = (int *)local_270;
    local_3c4 = (uint *)local_268;
    local_3c0 = (int *)local_264;
    local_70 = local_260;
    uStack_6c = local_25c;
    uStack_68 = local_258;
    uStack_64 = local_254;
    local_60 = local_250;
    uStack_5c = local_24c;
    uStack_58 = uStack_248;
    uStack_54 = uStack_244;
    uStack_50 = uStack_240;
    FUN_00a35200(param_2 + 0x18);
    local_3b4 = local_274;
    param_4 = (int *)local_278;
    unaff_r11 = local_26c;
LAB_0093cb14:
    local_3e4 = param_2 + 0x29;
    local_3e8 = param_2 + 0x2d;
    local_3ec = param_2 + 0xe;
    if (param_4 != (int *)0x2) {
      local_48 = *puVar4;
      uStack_44 = puVar4[1];
      uStack_40 = puVar4[2];
      local_3c = puVar4[3];
      local_38 = puVar4[4];
      uStack_34 = puVar4[5];
      uStack_30 = puVar4[6];
      uStack_2c = puVar4[7];
      uStack_28 = puVar4[8];
    }
    else {
      local_3c0 = (int *)0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_0093d57c(local_3ec);
    *(undefined1 *)local_3e8 = 1;
    *(undefined1 *)local_3e4 = 1;
    puVar4 = &local_48;
    if (param_4 != (int *)0x2) goto LAB_0093c85c;
LAB_0093cb78:
    local_2c8 = *puVar4;
    uStack_2c4 = puVar4[1];
    uStack_2c0 = puVar4[2];
    uVar11 = 0;
    local_2bc = puVar4[3];
    local_2b8 = puVar4[4];
    uStack_2b4 = puVar4[5];
    uStack_2b0 = puVar4[6];
LAB_0093cb90:
  }
switchD_0093b1e8_caseD_8:
  param_1[1] = param_4;
  param_1[2] = local_3b4;
  param_1[3] = local_3bc;
  *param_1 = uVar11;
  param_1[4] = unaff_r11;
  param_1[5] = local_3c4;
  param_1[6] = local_3c0;
  param_1[7] = local_2c8;
  param_1[8] = uStack_2c4;
  param_1[9] = uStack_2c0;
  param_1[10] = local_2bc;
  param_1[0xb] = local_2b8;
  param_1[0xc] = uStack_2b4;
  param_1[0xd] = uStack_2b0;
  param_1[0xe] = uStack_2ac;
  param_1[0xf] = uStack_2a8;
  uVar1 = 1;
LAB_0093cbd0:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

