// FUN_00a908d4 @ 00a908d4 size=4268 calls_out=20 calls_in=0
// strings: performanceScaling | powerTarget | hashrateTarget

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a908d4(undefined4 *param_1,int *param_2,int *****param_3)

{
  bool bVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  undefined1 uVar4;
  int ****ppppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *****pppppiVar8;
  int *piVar9;
  int *****extraout_r3;
  int *****pppppiVar10;
  int iVar11;
  int *****extraout_r3_00;
  int *****extraout_r3_01;
  int *****extraout_r3_02;
  int *****unaff_r5;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  int *****pppppiVar15;
  int iVar16;
  undefined4 uVar17;
  int *piVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  int *****pppppiVar22;
  int iVar23;
  int *****pppppiVar24;
  int *****in_r12;
  int *****extraout_r12;
  int iVar25;
  int *****extraout_r12_00;
  int *****extraout_r12_01;
  int *****extraout_r12_02;
  int *****extraout_r12_03;
  int *****extraout_r12_04;
  int *****unaff_lr;
  int iVar26;
  undefined8 uVar27;
  undefined1 *local_258;
  int *local_254;
  int *local_250;
  int *local_244;
  int *local_240;
  int *****local_238;
  int *****local_234;
  int *local_230;
  int *****local_228;
  int *****local_220;
  int *****local_21c;
  int *****local_210;
  int *****pppppiStack_20c;
  int *****pppppiStack_208;
  int *****local_204;
  int *****pppppiStack_200;
  int *****pppppiStack_1fc;
  int *****pppppiStack_1f8;
  int *****local_1b0;
  int *****pppppiStack_1ac;
  int *****pppppiStack_1a8;
  int *****local_1a4;
  int *****pppppiStack_1a0;
  int *****pppppiStack_19c;
  int *****pppppiStack_198;
  int ****local_188;
  int *****local_184;
  int *****local_17c;
  int *****local_178;
  int *****pppppiStack_174;
  int *****pppppiStack_170;
  int *****local_16c;
  int *****pppppiStack_168;
  int *****pppppiStack_164;
  int *****pppppiStack_160;
  int *****local_15c;
  int *****pppppiStack_158;
  int *****local_150;
  int *****pppppiStack_14c;
  int *****pppppiStack_148;
  int *****pppppiStack_144;
  int *****local_140;
  int *****pppppiStack_13c;
  int *****pppppiStack_138;
  int *****pppppiStack_134;
  int *****pppppiStack_130;
  int *****local_12c;
  int *****pppppiStack_128;
  int *****pppppiStack_124;
  int *****pppppiStack_120;
  int *****pppppiStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int *****local_108;
  int *****pppppiStack_104;
  int *****pppppiStack_100;
  int *****local_fc;
  int *****pppppiStack_f8;
  int *****pppppiStack_f4;
  int *****pppppiStack_f0;
  int *****local_e8;
  int *****local_e4;
  int *****local_e0;
  int *****local_d8;
  int *****local_d4;
  int *****local_d0;
  int *****local_cc;
  int *****local_c8;
  int *****local_c4;
  int *****local_c0;
  int *****local_bc;
  int *****local_b8;
  int *****local_b4;
  int *****local_b0;
  int *****pppppiStack_ac;
  int *****pppppiStack_a8;
  int *****local_a4;
  int *****local_a0;
  int *****local_9c;
  int *****local_98;
  int *****pppppiStack_94;
  int *****pppppiStack_90;
  int *****local_8c;
  int *****pppppiStack_88;
  int *****pppppiStack_84;
  int *****pppppiStack_80;
  int *****local_78 [3];
  int *****local_6c;
  int *****local_68;
  int *****local_64;
  int *****pppppiStack_60;
  int *****pppppiStack_5c;
  int *****local_58;
  int *****pppppiStack_54;
  int *****pppppiStack_50;
  int *****pppppiStack_4c;
  int *****local_40;
  int *****pppppiStack_3c;
  int *****pppppiStack_38;
  int *****local_34;
  int *****pppppiStack_30;
  int *****pppppiStack_2c;
  int *****pppppiStack_28;
  
  pppppiVar24 = (int *****)&local_d0;
  puVar12 = (undefined4 *)((uint)local_78 | 4);
  pppppiVar10 = &local_188;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    pppppiVar15 = (int *****)0x0;
    iVar20 = *param_2;
    pppppiVar22 = (int *****)param_2[1];
    param_2[2] = (int)pppppiVar22;
    ppppiVar5 = pppppiVar22[4];
    pppppiVar8 = (int *****)ppppiVar5[0x10];
    if ((int)pppppiVar8 < 0xb) {
      if (pppppiVar8 == (int *****)&SUB_00000004) {
        pppppiVar8 = (int *****)0x65646f6d;
        if (ppppiVar5[0xf][2] == (int **)0x65646f6d) {
          param_2[4] = iVar20;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)pppppiVar22;
          goto LAB_00a90ad8;
        }
        goto LAB_00a9144c;
      }
      local_220 = (int *****)0x80000007;
      if (pppppiVar8 == (int *****)&DAT_00000007) {
        unaff_lr = (int *****)0xa912e0;
        uVar27 = thunk_FUN_01bed842(ppppiVar5[0xf] + 2,&DAT_005325f1,7);
        pppppiVar8 = (int *****)((ulonglong)uVar27 >> 0x20);
        pppppiVar10 = extraout_r3_00;
        in_r12 = extraout_r12_01;
        if ((int)uVar27 == 0) {
          param_2[4] = iVar20;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)pppppiVar22;
          goto LAB_00a90b18;
        }
      }
      local_d0 = unaff_r5;
      local_c4 = param_3;
      local_a0 = in_r12;
    }
    else {
      if (pppppiVar8 == (int *****)&DAT_0000000b) {
        unaff_lr = (int *****)0xa913cc;
        uVar27 = thunk_FUN_01bed842(ppppiVar5[0xf] + 2,"powerTarget",0xb);
        pppppiVar8 = (int *****)((ulonglong)uVar27 >> 0x20);
        pppppiVar10 = extraout_r3_01;
        in_r12 = extraout_r12_03;
        if ((int)uVar27 == 0) {
          param_2[4] = iVar20;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)pppppiVar22;
          goto LAB_00a90b5c;
        }
      }
      else if (pppppiVar8 == (int *****)&DAT_0000000e) {
        unaff_lr = (int *****)0xa9140c;
        uVar27 = thunk_FUN_01bed842(ppppiVar5[0xf] + 2,"hashrateTarget",0xe);
        pppppiVar8 = (int *****)((ulonglong)uVar27 >> 0x20);
        pppppiVar10 = extraout_r3_02;
        in_r12 = extraout_r12_04;
        if ((int)uVar27 == 0) {
          param_2[4] = iVar20;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)pppppiVar22;
          goto LAB_00a90a0c;
        }
      }
      else if (pppppiVar8 == (int *****)&DAT_00000012) {
        unaff_lr = (int *****)0xa909ac;
        uVar27 = thunk_FUN_01bed842(ppppiVar5[0xf] + 2,"performanceScaling",0x12);
        pppppiVar8 = (int *****)((ulonglong)uVar27 >> 0x20);
        pppppiVar10 = extraout_r3;
        unaff_r5 = (int *****)&local_cc;
        in_r12 = extraout_r12;
        if ((int)uVar27 == 0) {
          param_2[4] = iVar20;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)pppppiVar22;
          goto LAB_00a90a84;
        }
      }
LAB_00a9144c:
      local_220 = (int *****)0x80000007;
      local_d0 = unaff_r5;
      local_c4 = param_3;
      local_a0 = in_r12;
    }
    goto LAB_00a91454;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22388);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22388);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar20 = param_2[4];
      pppppiVar22 = (int *****)param_2[5];
LAB_00a90b18:
      param_2[6] = iVar20;
      param_2[7] = (int)pppppiVar22;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22388);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22388);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      iVar20 = param_2[6];
    }
    piVar6 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar9 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar18 = param_2 + 4;
    *piVar18 = iVar20;
    iVar11 = piVar6[4];
    iVar16 = piVar6[5];
    iVar23 = piVar6[6];
    iVar21 = piVar6[7];
    iVar20 = piVar6[8];
    iVar13 = piVar6[1];
    iVar25 = piVar6[2];
    iVar26 = piVar6[3];
    *piVar9 = *piVar6;
    param_2[6] = iVar13;
    param_2[7] = iVar25;
    param_2[8] = iVar26;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar16;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar20;
    iVar11 = piVar6[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar18;
    param_2[0xf] = (int)piVar9;
    param_2[0x10] = iVar11;
LAB_00a91100:
    iVar20 = *piVar18;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar20;
    param_2[0x12] = (int)piVar9;
    param_2[0x13] = iVar11;
    goto LAB_00a91118;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar18 = (int *)param_2[0xe];
      piVar9 = (int *)param_2[0xf];
      iVar11 = param_2[0x10];
      goto LAB_00a91100;
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
      iVar20 = param_2[0x11];
    }
LAB_00a91118:
    unaff_lr = (int *****)0xa91130;
    FUN_006666fc(&local_d8,*(undefined4 *)(iVar20 + 4),*(undefined4 *)(iVar20 + 8));
    local_210 = local_c4;
    pppppiStack_20c = local_c0;
    pppppiStack_208 = local_bc;
    local_204 = local_b8;
    pppppiStack_200 = local_b4;
    pppppiStack_1fc = local_b0;
    pppppiStack_1f8 = pppppiStack_ac;
    local_220 = (int *****)0x80000002;
    *(undefined1 *)(param_2 + 0x15) = 1;
    pppppiVar15 = (int *****)0x0;
    *(undefined1 *)(param_2 + 0x14) = 1;
    pppppiVar8 = local_d0;
    pppppiVar10 = local_b4;
    local_d0 = local_d8;
    pppppiVar22 = local_d4;
    local_c4 = local_cc;
    local_a0 = extraout_r12_00;
    goto LAB_00a91454;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar20 = param_2[4];
      pppppiVar22 = (int *****)param_2[5];
LAB_00a90ad8:
      param_2[6] = iVar20;
      param_2[7] = (int)pppppiVar22;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22388);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22388);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      iVar20 = param_2[6];
    }
    piVar18 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar20 + 0xc;
    iVar11 = piVar18[4];
    iVar26 = piVar18[5];
    iVar23 = piVar18[6];
    iVar21 = piVar18[7];
    iVar20 = piVar18[8];
    iVar13 = piVar18[1];
    iVar16 = piVar18[2];
    iVar25 = piVar18[3];
    param_2[5] = *piVar18;
    param_2[6] = iVar13;
    param_2[7] = iVar16;
    param_2[8] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar20;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar21;
    iVar20 = piVar18[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar20;
  case '\x06':
    FUN_011adb38(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar4 = 6;
      goto LAB_00a91494;
    }
    goto LAB_00a9122c;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar20 = param_2[4];
      pppppiVar22 = (int *****)param_2[5];
LAB_00a90b5c:
      param_2[6] = iVar20;
      param_2[7] = (int)pppppiVar22;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22388);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22388);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      iVar20 = param_2[6];
    }
    piVar18 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar20 + 0x18;
    iVar11 = piVar18[4];
    iVar26 = piVar18[5];
    iVar23 = piVar18[6];
    iVar21 = piVar18[7];
    iVar20 = piVar18[8];
    iVar13 = piVar18[1];
    iVar16 = piVar18[2];
    iVar25 = piVar18[3];
    param_2[5] = *piVar18;
    param_2[6] = iVar13;
    param_2[7] = iVar16;
    param_2[8] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar20;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar21;
    iVar20 = piVar18[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar20;
  case '\b':
    FUN_011adb38(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar4 = 8;
      goto LAB_00a91494;
    }
    goto LAB_00a9122c;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar20 = param_2[4];
      pppppiVar22 = (int *****)param_2[5];
LAB_00a90a0c:
      param_2[6] = iVar20;
      param_2[7] = (int)pppppiVar22;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22388);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22388);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      iVar20 = param_2[6];
    }
    piVar18 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar20 + 0x24;
    iVar11 = piVar18[4];
    iVar26 = piVar18[5];
    iVar23 = piVar18[6];
    iVar21 = piVar18[7];
    iVar20 = piVar18[8];
    iVar13 = piVar18[1];
    iVar16 = piVar18[2];
    iVar25 = piVar18[3];
    param_2[5] = *piVar18;
    param_2[6] = iVar13;
    param_2[7] = iVar16;
    param_2[8] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar20;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar21;
    iVar20 = piVar18[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar20;
  case '\n':
    FUN_011adb38(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar4 = 10;
      goto LAB_00a91494;
    }
LAB_00a9122c:
    local_210 = local_bc;
    pppppiStack_20c = local_b8;
    pppppiStack_208 = local_b4;
    local_204 = local_b0;
    pppppiStack_200 = pppppiStack_ac;
    pppppiStack_1fc = pppppiStack_a8;
    pppppiStack_1f8 = local_a4;
    pppppiVar8 = local_c8;
    pppppiVar10 = local_9c;
    local_220 = local_c0;
    pppppiVar15 = local_d8;
    pppppiVar22 = local_cc;
    unaff_lr = local_d4;
    goto LAB_00a91454;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar20 = param_2[4];
      pppppiVar22 = (int *****)param_2[5];
LAB_00a90a84:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = iVar20;
      param_2[7] = (int)pppppiVar22;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22388);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22388);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      iVar20 = param_2[6];
    }
    piVar9 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar18 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    pppppiVar10 = (int *****)(param_2 + 4);
    *pppppiVar10 = (int ****)(iVar20 + 0x30);
    iVar11 = piVar9[4];
    iVar16 = piVar9[5];
    iVar23 = piVar9[6];
    iVar21 = piVar9[7];
    iVar20 = piVar9[8];
    unaff_r5 = (int *****)piVar9[1];
    iVar13 = piVar9[2];
    iVar25 = piVar9[3];
    *piVar18 = *piVar9;
    param_2[6] = (int)unaff_r5;
    param_2[7] = iVar13;
    param_2[8] = iVar25;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar16;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar21;
    *(char *)(param_2 + 0xd) = (char)iVar20;
    iVar20 = piVar9[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)pppppiVar10;
    param_2[0x31] = (int)piVar18;
    param_2[0x32] = iVar20;
    local_234 = pppppiVar24;
    local_21c = pppppiVar10;
LAB_00a90d2c:
    ppppiVar5 = *pppppiVar10;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = (int)ppppiVar5;
    param_2[0x2b] = (int)piVar18;
    param_2[0x2c] = iVar20;
LAB_00a90d4c:
    param_2[0x2d] = (int)piVar18;
    if (*ppppiVar5 != (int ***)0x80000001) {
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x26] = (int)ppppiVar5;
      param_2[0x27] = (int)piVar18;
      param_2[0x28] = param_2[0x2c];
LAB_00a90d88:
      *(undefined1 *)(param_2 + 0x24) = 0;
      param_2[0x22] = (int)piVar18;
      param_2[0x23] = (int)ppppiVar5;
LAB_00a90da0:
      *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
      bVar19 = 1;
      param_2[0x11] = (int)piVar18;
      param_2[0x12] = (int)ppppiVar5;
LAB_00a90dbc:
      piVar9 = param_2 + 0xe;
      *piVar9 = 0;
      param_2[0x10] = 0;
      param_2[0xf] = 4;
      *(undefined1 *)(param_2 + 0x13) = 1;
      FUN_007c1290(&local_d8,piVar9,piVar18,ppppiVar5);
      if (local_d8 != (int *****)0x2) {
        local_21c = local_d4;
        local_228 = local_cc;
        local_40 = local_c0;
        pppppiStack_3c = local_bc;
        pppppiStack_38 = local_b8;
        local_34 = local_b4;
        pppppiStack_30 = local_b0;
        pppppiStack_2c = pppppiStack_ac;
        pppppiStack_28 = pppppiStack_a8;
        local_234 = local_a4;
        local_238 = local_a0;
        local_220 = local_c4;
        pppppiVar24 = local_d0;
        param_3 = local_c8;
        goto LAB_00a90edc;
      }
      if ((bVar19 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x13) = 0;
        local_118 = *piVar9;
        iStack_114 = param_2[0xf];
        iStack_110 = param_2[0x10];
        FUN_009ec520(&local_d8);
        local_150 = local_d8;
        pppppiStack_14c = local_d4;
        pppppiStack_148 = local_d0;
        pppppiStack_144 = local_cc;
        local_140 = local_c8;
        pppppiStack_13c = local_c4;
        pppppiStack_138 = local_c0;
        pppppiStack_134 = local_bc;
        pppppiStack_130 = local_b8;
        local_12c = local_b4;
        pppppiStack_128 = local_b0;
        pppppiStack_124 = pppppiStack_ac;
        pppppiStack_120 = pppppiStack_a8;
        pppppiStack_11c = local_a4;
        param_2[0x14] = (int)local_d8;
        param_2[0x15] = (int)local_d4;
        param_2[0x16] = (int)local_d0;
        param_2[0x17] = (int)local_cc;
        param_2[0x18] = (int)local_c8;
        param_2[0x19] = (int)local_c4;
        param_2[0x1a] = (int)local_c0;
        param_2[0x1b] = (int)local_bc;
        param_2[0x1c] = (int)local_b8;
        param_2[0x1d] = (int)local_b4;
        param_2[0x1e] = (int)local_b0;
        param_2[0x1f] = (int)pppppiStack_ac;
        param_2[0x20] = (int)pppppiStack_a8;
        param_2[0x21] = (int)local_a4;
        goto switchD_00a915fc_caseD_3;
      }
      uVar14 = param_2[0x10];
      if (0x2492492 < uVar14) {
        uVar17 = 0;
LAB_00a9136c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,unaff_r5);
      }
      unaff_r5 = (int *****)(uVar14 * 0x38);
      if (unaff_r5 == (int *****)0x0) {
        iVar20 = 8;
        uVar14 = 0;
      }
      else {
        uVar17 = 8;
        iVar20 = FUN_01298504(unaff_r5,8);
        if (iVar20 == 0) goto LAB_00a9136c;
      }
      piVar9 = (int *)param_2[0xf];
      param_2[0x15] = iVar20;
      piVar18 = piVar9 + param_2[0x10] * 2;
      param_2[0x14] = uVar14;
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x1c] = (int)piVar9;
      param_2[0x1d] = (int)piVar9;
      param_2[0x1e] = param_2[0xe];
      param_2[0x1f] = (int)piVar18;
      while (piVar9 != piVar18) {
        iVar20 = *piVar9;
        iVar11 = piVar9[1];
        param_2[0x1d] = (int)(piVar9 + 2);
        param_2[0x1a] = iVar20;
        param_2[0x17] = (int)(param_2 + 0x14);
        param_2[0x18] = iVar20;
        param_2[0x19] = iVar11;
        param_2[0x1b] = iVar11;
LAB_00a91a20:
        (**(code **)(iVar11 + 0xc))(&local_d8,iVar20,param_3);
        pppppiVar3 = local_9c;
        pppppiVar2 = local_a0;
        local_220 = local_c0;
        pppppiVar15 = local_c4;
        pppppiVar8 = local_c8;
        pppppiVar24 = local_cc;
        pppppiVar22 = local_d0;
        pppppiVar10 = local_d8;
        if (local_d8 == (int *****)0x2) {
          uVar4 = 4;
          goto LAB_00a91bfc;
        }
        local_21c = local_d0;
        local_228 = local_c8;
        local_98 = local_bc;
        pppppiStack_94 = local_b8;
        pppppiStack_90 = local_b4;
        local_8c = local_b0;
        pppppiStack_88 = pppppiStack_ac;
        pppppiStack_84 = pppppiStack_a8;
        pppppiStack_80 = local_a4;
        local_234 = local_a0;
        local_238 = local_9c;
        FUN_01139b38(param_2[0x1a],param_2[0x1b]);
        if (((uint)pppppiVar10 & 1) != 0) {
          local_40 = local_98;
          pppppiStack_3c = pppppiStack_94;
          pppppiStack_38 = pppppiStack_90;
          local_34 = local_8c;
          pppppiStack_30 = pppppiStack_88;
          pppppiStack_2c = pppppiStack_84;
          pppppiStack_28 = pppppiStack_80;
          FUN_009495dc(param_2 + 0x1c);
          FUN_007bc140(param_2 + 0x14);
          param_3 = pppppiVar15;
          goto LAB_00a90edc;
        }
        local_68 = local_220;
        *puVar12 = pppppiVar24;
        puVar12[1] = pppppiVar8;
        local_78[0] = pppppiVar22;
        local_6c = pppppiVar15;
        local_64 = local_98;
        pppppiStack_60 = pppppiStack_94;
        pppppiStack_5c = pppppiStack_90;
        local_58 = local_8c;
        pppppiStack_54 = pppppiStack_88;
        pppppiStack_50 = pppppiStack_84;
        pppppiStack_4c = pppppiStack_80;
        piVar18 = (int *)param_2[0x17];
        puVar12[0xb] = pppppiVar2;
        puVar12[0xc] = pppppiVar3;
        iVar20 = piVar18[2];
        if (iVar20 == *piVar18) {
          FUN_006e4ec8(piVar18);
        }
        puVar7 = (undefined4 *)(piVar18[1] + iVar20 * 0x38);
        *puVar7 = pppppiVar22;
        puVar7[2] = pppppiVar8;
        puVar7[3] = pppppiVar15;
        puVar7[1] = pppppiVar24;
        puVar7[4] = local_220;
        puVar7[5] = local_98;
        puVar7[6] = pppppiStack_94;
        puVar7[7] = pppppiStack_90;
        puVar7[8] = local_8c;
        puVar7[9] = pppppiStack_88;
        puVar7[10] = pppppiStack_84;
        puVar7[0xb] = pppppiStack_80;
        puVar7[0xc] = pppppiVar2;
        puVar7[0xd] = pppppiVar3;
        piVar18[2] = iVar20 + 1;
        piVar18 = (int *)param_2[0x1f];
        piVar9 = (int *)param_2[0x1d];
      }
      param_2[0x18] = 0;
      FUN_009495dc(param_2 + 0x1c);
      local_e8 = (int *****)param_2[0x14];
      local_e4 = (int *****)param_2[0x15];
      local_e0 = (int *****)param_2[0x16];
LAB_00a91ba0:
      FUN_006cac18(&local_d8,&local_e8);
      local_21c = local_d8;
      local_228 = local_d0;
      local_220 = local_c8;
      local_40 = local_c4;
      pppppiStack_3c = local_c0;
      pppppiStack_38 = local_bc;
      local_34 = local_b8;
      pppppiStack_30 = local_b4;
      pppppiStack_2c = local_b0;
      pppppiStack_28 = pppppiStack_ac;
      bVar1 = false;
      *(undefined1 *)(param_2 + 0x13) = 0;
      pppppiVar24 = local_d4;
      param_3 = local_cc;
      goto LAB_00a90f04;
    }
    local_220 = (int *****)&DAT_80000000;
    break;
  case '\f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      pppppiVar10 = (int *****)param_2[0x30];
      piVar18 = (int *)param_2[0x31];
      iVar20 = param_2[0x32];
      goto LAB_00a90d2c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2e]) {
    case '\0':
      ppppiVar5 = (int ****)param_2[0x2a];
      piVar18 = (int *)param_2[0x2b];
      goto LAB_00a90d4c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      ppppiVar5 = (int ****)param_2[0x26];
      piVar18 = (int *)param_2[0x27];
      goto LAB_00a90d88;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0f77c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0f77c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      piVar18 = (int *)param_2[0x22];
      ppppiVar5 = (int ****)param_2[0x23];
      goto LAB_00a90da0;
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
      piVar18 = (int *)param_2[0x11];
      ppppiVar5 = (int ****)param_2[0x12];
      bVar19 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00a90dbc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar20 = param_2[0x1a];
      iVar11 = param_2[0x1b];
      goto LAB_00a91a20;
    }
switchD_00a915fc_caseD_3:
    FUN_009ecbe0(&local_d8,param_2 + 0x14,param_3);
    local_220 = local_c4;
    param_3 = local_c8;
    pppppiVar24 = local_d0;
    pppppiVar22 = local_d4;
    pppppiVar10 = local_d8;
    if (local_d8 == (int *****)&DAT_00000003) {
      uVar4 = 3;
LAB_00a91bfc:
      local_240 = param_2 + 0x2e;
      local_250 = param_2 + 0x29;
      local_254 = param_2 + 0x24;
      local_258 = (undefined1 *)((int)param_2 + 0x4d);
      local_244 = param_2 + 0x33;
      *local_258 = uVar4;
      *(undefined1 *)local_250 = 3;
      *(undefined1 *)local_254 = 3;
      *(undefined1 *)local_240 = 3;
      *(undefined1 *)local_244 = 3;
      *param_1 = 2;
      uVar4 = 0xc;
      goto LAB_00a91494;
    }
    local_21c = local_d4;
    local_228 = local_cc;
    local_108 = local_c0;
    pppppiStack_104 = local_bc;
    pppppiStack_100 = local_b8;
    local_fc = local_b4;
    pppppiStack_f8 = local_b0;
    pppppiStack_f4 = pppppiStack_ac;
    pppppiStack_f0 = pppppiStack_a8;
    local_234 = local_a4;
    local_238 = local_a0;
    FUN_011928d4(param_2 + 0x14);
    if (pppppiVar10 == (int *****)0x2) {
      local_e8 = pppppiVar22;
      local_e4 = pppppiVar24;
      local_e0 = local_228;
      goto LAB_00a91ba0;
    }
    local_40 = local_108;
    pppppiStack_3c = pppppiStack_104;
    pppppiStack_38 = pppppiStack_100;
    local_34 = local_fc;
    pppppiStack_30 = pppppiStack_f8;
    pppppiStack_2c = pppppiStack_f4;
    pppppiStack_28 = pppppiStack_f0;
LAB_00a90edc:
    local_230 = param_2 + 0xe;
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(local_230);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
LAB_00a90f04:
    pppppiStack_198 = pppppiStack_28;
    pppppiStack_19c = pppppiStack_2c;
    pppppiStack_1a0 = pppppiStack_30;
    local_1a4 = local_34;
    pppppiStack_1a8 = pppppiStack_38;
    pppppiStack_1ac = pppppiStack_3c;
    local_1b0 = local_40;
    local_230 = param_2 + 0xe;
    local_250 = param_2 + 0x29;
    local_254 = param_2 + 0x24;
    local_258 = (undefined1 *)((int)param_2 + 0x4d);
    *local_258 = 1;
    FUN_01192a14(local_230);
    *(undefined1 *)local_250 = 1;
    *(undefined1 *)local_254 = 1;
    if (bVar1) {
      local_184 = local_228;
      local_17c = local_220;
      local_178 = local_1b0;
      pppppiStack_174 = pppppiStack_1ac;
      pppppiStack_170 = pppppiStack_1a8;
      local_16c = local_1a4;
      pppppiStack_168 = pppppiStack_1a0;
      pppppiStack_164 = pppppiStack_19c;
      pppppiStack_160 = pppppiStack_198;
      local_15c = local_234;
      pppppiStack_158 = local_238;
      local_220 = (int *****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x2d] + 0x18));
    }
  }
  local_230 = param_2 + 0xe;
  local_240 = param_2 + 0x2e;
  local_244 = param_2 + 0x33;
  *(undefined1 *)local_240 = 1;
  *(undefined1 *)local_244 = 1;
  unaff_lr = (int *****)0xa9132c;
  FUN_00a9039c(local_230);
  local_210 = local_1b0;
  pppppiStack_20c = pppppiStack_1ac;
  pppppiStack_208 = pppppiStack_1a8;
  local_204 = local_1a4;
  pppppiStack_200 = pppppiStack_1a0;
  pppppiStack_1fc = pppppiStack_19c;
  pppppiStack_1f8 = pppppiStack_198;
  pppppiVar15 = (int *****)0x0;
  pppppiVar8 = local_228;
  pppppiVar10 = pppppiStack_19c;
  local_d0 = local_21c;
  pppppiVar22 = pppppiVar24;
  local_c4 = param_3;
  local_a0 = extraout_r12_02;
LAB_00a91454:
  param_1[5] = local_c4;
  *param_1 = pppppiVar15;
  param_1[1] = unaff_lr;
  param_1[3] = pppppiVar22;
  param_1[4] = pppppiVar8;
  param_1[2] = local_d0;
  param_1[6] = local_220;
  param_1[7] = local_210;
  param_1[8] = pppppiStack_20c;
  param_1[9] = pppppiStack_208;
  param_1[10] = local_204;
  param_1[0xb] = pppppiStack_200;
  param_1[0xc] = pppppiStack_1fc;
  param_1[0xd] = pppppiStack_1f8;
  uVar4 = 1;
  param_1[0xe] = local_a0;
  param_1[0xf] = pppppiVar10;
LAB_00a91494:
  *(undefined1 *)(param_2 + 3) = uVar4;
  return;
}

