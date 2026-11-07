// FUN_00afa334 @ 00afa334 size=4336 calls_out=19 calls_in=0
// strings: speed | pause | minFanRpm | minFans | minFanSpeed | maxFanSpeed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00afa334(undefined4 *param_1,int *param_2,int *****param_3)

{
  bool bVar1;
  int *****pppppiVar2;
  undefined1 uVar3;
  int *****pppppiVar4;
  undefined4 *puVar5;
  int *****pppppiVar6;
  int *piVar7;
  int *****extraout_r2;
  int *****pppppiVar8;
  int *****extraout_r2_00;
  int *****extraout_r2_01;
  int *****extraout_r2_02;
  int *****extraout_r3;
  int *****pppppiVar9;
  int *****extraout_r3_00;
  int *****extraout_r3_01;
  int *****extraout_r3_02;
  int iVar10;
  int unaff_r4;
  int *****pppppiVar11;
  byte bVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *****pppppiVar19;
  undefined4 uVar20;
  int *****pppppiVar21;
  int *piVar22;
  int iVar23;
  int ****ppppiVar24;
  int iVar25;
  int *****in_r12;
  int *****extraout_r12;
  int iVar26;
  int *****extraout_r12_00;
  int *****extraout_r12_01;
  int *****extraout_r12_02;
  int *****extraout_r12_03;
  int *****unaff_lr;
  undefined1 *local_25c;
  int *local_258;
  int *local_254;
  int *****local_250;
  int *local_244;
  int *****local_238;
  int *****local_234;
  int *****local_230;
  int *local_228;
  int *****local_224;
  int *****local_21c;
  int *****local_1f0;
  int *****pppppiStack_1ec;
  int *****pppppiStack_1e8;
  int *****local_1e4;
  int *****pppppiStack_1e0;
  int *****pppppiStack_1dc;
  int *****pppppiStack_1d8;
  int *****local_1b0;
  int *****pppppiStack_1ac;
  int *****pppppiStack_1a8;
  int *****local_1a4;
  int *****pppppiStack_1a0;
  int *****pppppiStack_19c;
  int *****pppppiStack_198;
  int *****local_190;
  int *****local_18c;
  int *****local_188;
  int *****pppppiStack_184;
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
  
  pppppiVar19 = (int *****)&local_cc;
  local_234 = (int *****)&local_d0;
  puVar13 = (undefined4 *)((uint)local_78 | 4);
  pppppiVar8 = (int *****)&local_190;
  pppppiVar9 = (int *****)&local_188;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    pppppiVar6 = (int *****)param_2[1];
    pppppiVar11 = (int *****)0x80000007;
    param_2[2] = (int)pppppiVar6;
    pppppiVar21 = (int *****)0x0;
    ppppiVar24 = pppppiVar6[4];
    iVar16 = *param_2;
    pppppiVar4 = (int *****)((int)ppppiVar24[0x10] + -5);
    switch(pppppiVar4) {
    case (int *****)0x0:
      iVar10 = thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"speed",5);
      if (iVar10 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        goto LAB_00afa67c;
      }
      unaff_lr = (int *****)0xafa458;
      pppppiVar4 = (int *****)thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"pause",5);
      pppppiVar8 = extraout_r2;
      pppppiVar9 = extraout_r3;
      in_r12 = extraout_r12;
      if (pppppiVar4 == (int *****)0x0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        local_224 = pppppiVar6;
        goto LAB_00afa5e8;
      }
      break;
    case (int *****)0x2:
      unaff_lr = (int *****)0xafaf10;
      pppppiVar4 = (int *****)thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"minFans",7);
      pppppiVar8 = extraout_r2_01;
      pppppiVar9 = extraout_r3_01;
      in_r12 = extraout_r12_02;
      if (pppppiVar4 == (int *****)0x0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        goto LAB_00afa594;
      }
      break;
    case (int *****)0x4:
      unaff_lr = (int *****)0xafaed0;
      pppppiVar4 = (int *****)thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"minFanRpm",9);
      pppppiVar8 = extraout_r2_00;
      pppppiVar9 = extraout_r3_00;
      in_r12 = extraout_r12_01;
      if (pppppiVar4 == (int *****)0x0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        goto LAB_00afa504;
      }
      break;
    case (int *****)0x6:
      iVar10 = thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"minFanSpeed",0xb);
      if (iVar10 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        goto LAB_00afa54c;
      }
      unaff_lr = (int *****)0xafaf70;
      pppppiVar4 = (int *****)thunk_FUN_01bed842(ppppiVar24[0xf] + 2,"maxFanSpeed",0xb);
      pppppiVar8 = extraout_r2_02;
      pppppiVar9 = extraout_r3_02;
      in_r12 = extraout_r12_03;
      if (pppppiVar4 == (int *****)0x0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar6;
        goto LAB_00afa634;
      }
    }
    goto switchD_00afa400_caseD_1;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c10794);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c10794);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa67c:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16;
    iVar10 = piVar22[4];
    iVar26 = piVar22[5];
    iVar17 = piVar22[6];
    iVar23 = piVar22[7];
    iVar16 = piVar22[8];
    iVar14 = piVar22[1];
    iVar18 = piVar22[2];
    iVar25 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar14;
    param_2[7] = iVar18;
    param_2[8] = iVar25;
    param_2[0xb] = iVar17;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar26;
    param_2[0xc] = iVar23;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar16;
  case '\x04':
    FUN_007cb920(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar3 = 4;
      goto LAB_00afae50;
    }
LAB_00afad70:
    local_21c = local_c8;
    local_1f0 = local_bc;
    pppppiStack_1ec = local_b8;
    pppppiStack_1e8 = local_b4;
    local_1e4 = local_b0;
    pppppiStack_1e0 = pppppiStack_ac;
    pppppiStack_1dc = pppppiStack_a8;
    pppppiStack_1d8 = local_a4;
    pppppiVar4 = local_cc;
    pppppiVar8 = local_d0;
    pppppiVar9 = local_9c;
    pppppiVar11 = local_c0;
    in_r12 = local_a0;
    unaff_lr = local_d4;
    goto LAB_00afae0c;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa594:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16 + 8;
    iVar10 = piVar22[4];
    iVar26 = piVar22[5];
    iVar23 = piVar22[6];
    iVar18 = piVar22[7];
    iVar16 = piVar22[8];
    iVar14 = piVar22[1];
    iVar17 = piVar22[2];
    iVar25 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar14;
    param_2[7] = iVar17;
    param_2[8] = iVar25;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar16;
  case '\x06':
    FUN_007cb920(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar3 = 6;
      goto LAB_00afae50;
    }
    goto LAB_00afad70;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa504:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16 + 0x10;
    iVar10 = piVar22[4];
    iVar26 = piVar22[5];
    iVar23 = piVar22[6];
    iVar18 = piVar22[7];
    iVar16 = piVar22[8];
    iVar14 = piVar22[1];
    iVar17 = piVar22[2];
    iVar25 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar14;
    param_2[7] = iVar17;
    param_2[8] = iVar25;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar16;
  case '\b':
    FUN_007cb920(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar3 = 8;
      goto LAB_00afae50;
    }
    goto LAB_00afad70;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa54c:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16 + 0x18;
    iVar10 = piVar22[4];
    iVar26 = piVar22[5];
    iVar23 = piVar22[6];
    iVar18 = piVar22[7];
    iVar16 = piVar22[8];
    iVar14 = piVar22[1];
    iVar17 = piVar22[2];
    iVar25 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar14;
    param_2[7] = iVar17;
    param_2[8] = iVar25;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar16;
  case '\n':
    FUN_007cb920(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar3 = 10;
      goto LAB_00afae50;
    }
    goto LAB_00afad70;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa634:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar22 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar16 + 0x20;
    iVar10 = piVar22[4];
    iVar26 = piVar22[5];
    iVar23 = piVar22[6];
    iVar18 = piVar22[7];
    iVar16 = piVar22[8];
    iVar14 = piVar22[1];
    iVar17 = piVar22[2];
    iVar25 = piVar22[3];
    param_2[5] = *piVar22;
    param_2[6] = iVar14;
    param_2[7] = iVar17;
    param_2[8] = iVar25;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar26;
    param_2[0xb] = iVar23;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar22[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar16;
  case '\f':
    FUN_007cb920(&local_d8,param_2 + 0xe);
    if (local_d8 == (int *****)0x2) {
      *param_1 = 2;
      uVar3 = 0xc;
      goto LAB_00afae50;
    }
    goto LAB_00afad70;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar6 = (int *****)param_2[5];
LAB_00afa5e8:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10794);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10794);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10794);
      }
      iVar16 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar22 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    pppppiVar8 = (int *****)(param_2 + 4);
    *pppppiVar8 = (int ****)(iVar16 + 0x28);
    iVar10 = piVar7[4];
    iVar18 = piVar7[5];
    iVar25 = piVar7[6];
    iVar23 = piVar7[7];
    iVar16 = piVar7[8];
    unaff_r4 = *piVar7;
    iVar14 = piVar7[1];
    iVar17 = piVar7[2];
    iVar26 = piVar7[3];
    *piVar22 = unaff_r4;
    param_2[6] = iVar14;
    param_2[7] = iVar17;
    param_2[8] = iVar26;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar25;
    param_2[0xc] = iVar23;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar7[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)pppppiVar8;
    param_2[0x31] = (int)piVar22;
    param_2[0x32] = iVar16;
    local_21c = pppppiVar8;
LAB_00afa97c:
    ppppiVar24 = *pppppiVar8;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = (int)ppppiVar24;
    param_2[0x2b] = (int)piVar22;
    param_2[0x2c] = iVar16;
LAB_00afa99c:
    param_2[0x2d] = (int)piVar22;
    if (*ppppiVar24 != (int ***)0x2) {
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x26] = (int)ppppiVar24;
      param_2[0x27] = (int)piVar22;
      param_2[0x28] = param_2[0x2c];
LAB_00afa9d4:
      *(undefined1 *)(param_2 + 0x24) = 0;
      param_2[0x22] = (int)piVar22;
      param_2[0x23] = (int)ppppiVar24;
LAB_00afa9ec:
      *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
      bVar12 = 1;
      param_2[0x11] = (int)piVar22;
      param_2[0x12] = (int)ppppiVar24;
LAB_00afaa08:
      piVar7 = param_2 + 0xe;
      *piVar7 = 0;
      param_2[0x10] = 0;
      param_2[0xf] = 4;
      *(undefined1 *)(param_2 + 0x13) = 1;
      FUN_0080e148(&local_d8,piVar7,piVar22,ppppiVar24);
      if (local_d8 != (int *****)0x2) {
        local_250 = local_d8;
        local_224 = local_d4;
        local_230 = local_d0;
        local_21c = local_cc;
        local_40 = local_c0;
        pppppiStack_3c = local_bc;
        pppppiStack_38 = local_b8;
        local_34 = local_b4;
        pppppiStack_30 = local_b0;
        pppppiStack_2c = pppppiStack_ac;
        pppppiStack_28 = pppppiStack_a8;
        local_234 = local_a4;
        local_238 = local_a0;
        pppppiVar11 = local_c4;
        param_3 = local_c8;
        goto LAB_00afab24;
      }
      if ((bVar12 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x13) = 0;
        local_118 = *piVar7;
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
        goto switchD_00afb0cc_caseD_3;
      }
      uVar15 = param_2[0x10];
      if (0x2492492 < uVar15) {
        uVar20 = 0;
LAB_00afae74:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar20,unaff_r4);
      }
      unaff_r4 = uVar15 * 0x38;
      if (unaff_r4 == 0) {
        iVar16 = 8;
        uVar15 = 0;
      }
      else {
        uVar20 = 8;
        iVar16 = FUN_01298504(unaff_r4,8);
        if (iVar16 == 0) goto LAB_00afae74;
      }
      piVar7 = (int *)param_2[0xf];
      param_2[0x15] = iVar16;
      piVar22 = piVar7 + param_2[0x10] * 2;
      param_2[0x14] = uVar15;
      param_2[0x16] = 0;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x1c] = (int)piVar7;
      param_2[0x1d] = (int)piVar7;
      param_2[0x1e] = param_2[0xe];
      param_2[0x1f] = (int)piVar22;
      while (piVar7 != piVar22) {
        iVar16 = *piVar7;
        iVar10 = piVar7[1];
        param_2[0x1d] = (int)(piVar7 + 2);
        param_2[0x1a] = iVar16;
        param_2[0x17] = (int)(param_2 + 0x14);
        param_2[0x18] = iVar16;
        param_2[0x19] = iVar10;
        param_2[0x1b] = iVar10;
LAB_00afb4d4:
        (**(code **)(iVar10 + 0xc))(&local_d8,iVar16,param_3);
        pppppiVar2 = local_9c;
        pppppiVar21 = local_a0;
        pppppiVar11 = local_c0;
        pppppiVar4 = local_c4;
        pppppiVar6 = local_c8;
        pppppiVar19 = local_cc;
        pppppiVar9 = local_d0;
        pppppiVar8 = local_d8;
        if (local_d8 == (int *****)0x2) {
          uVar3 = 4;
          goto LAB_00afb6b4;
        }
        local_250 = local_d4;
        local_224 = local_d0;
        local_230 = local_cc;
        local_21c = local_c8;
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
        if (((uint)pppppiVar8 & 1) != 0) {
          local_40 = local_98;
          pppppiStack_3c = pppppiStack_94;
          pppppiStack_38 = pppppiStack_90;
          local_34 = local_8c;
          pppppiStack_30 = pppppiStack_88;
          pppppiStack_2c = pppppiStack_84;
          pppppiStack_28 = pppppiStack_80;
          FUN_009495dc(param_2 + 0x1c);
          FUN_007bc140(param_2 + 0x14);
          param_3 = pppppiVar4;
          goto LAB_00afab24;
        }
        *puVar13 = pppppiVar19;
        puVar13[1] = pppppiVar6;
        local_78[0] = pppppiVar9;
        local_6c = pppppiVar4;
        local_68 = pppppiVar11;
        local_64 = local_98;
        pppppiStack_60 = pppppiStack_94;
        pppppiStack_5c = pppppiStack_90;
        local_58 = local_8c;
        pppppiStack_54 = pppppiStack_88;
        pppppiStack_50 = pppppiStack_84;
        pppppiStack_4c = pppppiStack_80;
        piVar22 = (int *)param_2[0x17];
        puVar13[0xb] = pppppiVar21;
        puVar13[0xc] = pppppiVar2;
        iVar16 = piVar22[2];
        if (iVar16 == *piVar22) {
          FUN_006e4ec8(piVar22);
        }
        puVar5 = (undefined4 *)(piVar22[1] + iVar16 * 0x38);
        *puVar5 = pppppiVar9;
        puVar5[2] = pppppiVar6;
        puVar5[3] = pppppiVar4;
        puVar5[1] = pppppiVar19;
        puVar5[4] = pppppiVar11;
        puVar5[5] = local_98;
        puVar5[6] = pppppiStack_94;
        puVar5[7] = pppppiStack_90;
        puVar5[8] = local_8c;
        puVar5[9] = pppppiStack_88;
        puVar5[10] = pppppiStack_84;
        puVar5[0xb] = pppppiStack_80;
        puVar5[0xc] = pppppiVar21;
        puVar5[0xd] = pppppiVar2;
        piVar22[2] = iVar16 + 1;
        piVar22 = (int *)param_2[0x1f];
        piVar7 = (int *)param_2[0x1d];
      }
      param_2[0x18] = 0;
      FUN_009495dc(param_2 + 0x1c);
      local_e8 = (int *****)param_2[0x14];
      local_e4 = (int *****)param_2[0x15];
      local_e0 = (int *****)param_2[0x16];
LAB_00afb65c:
      FUN_006cac18(&local_d8,&local_e8);
      local_224 = local_d8;
      bVar1 = false;
      local_230 = local_d4;
      local_21c = local_d0;
      local_40 = local_c4;
      pppppiStack_3c = local_c0;
      pppppiStack_38 = local_bc;
      local_34 = local_b8;
      pppppiStack_30 = local_b4;
      pppppiStack_2c = local_b0;
      pppppiStack_28 = pppppiStack_ac;
      *(undefined1 *)(param_2 + 0x13) = 0;
      pppppiVar11 = local_c8;
      param_3 = local_cc;
      goto LAB_00afab44;
    }
    pppppiVar11 = (int *****)&DAT_80000000;
    break;
  case '\x0e':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      pppppiVar8 = (int *****)param_2[0x30];
      piVar22 = (int *)param_2[0x31];
      iVar16 = param_2[0x32];
      goto LAB_00afa97c;
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
      ppppiVar24 = (int ****)param_2[0x2a];
      piVar22 = (int *)param_2[0x2b];
      goto LAB_00afa99c;
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
      ppppiVar24 = (int ****)param_2[0x26];
      piVar22 = (int *)param_2[0x27];
      goto LAB_00afa9d4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c107b4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c107b4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      piVar22 = (int *)param_2[0x22];
      ppppiVar24 = (int ****)param_2[0x23];
      goto LAB_00afa9ec;
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
      piVar22 = (int *)param_2[0x11];
      ppppiVar24 = (int ****)param_2[0x12];
      bVar12 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_00afaa08;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar16 = param_2[0x1a];
      iVar10 = param_2[0x1b];
      goto LAB_00afb4d4;
    }
switchD_00afb0cc_caseD_3:
    FUN_009ecbe0(&local_d8,param_2 + 0x14,param_3);
    pppppiVar11 = local_c4;
    param_3 = local_c8;
    pppppiVar9 = local_d4;
    pppppiVar8 = local_d8;
    if (local_d8 == (int *****)&DAT_00000003) {
      uVar3 = 3;
LAB_00afb6b4:
      local_254 = param_2 + 0x29;
      local_258 = param_2 + 0x24;
      local_25c = (undefined1 *)((int)param_2 + 0x4d);
      local_244 = param_2 + 0x2e;
      *local_25c = uVar3;
      *(undefined1 *)local_254 = 3;
      *(undefined1 *)local_258 = 3;
      *(undefined1 *)(param_2 + 0x33) = 3;
      *(undefined1 *)local_244 = 3;
      *param_1 = 2;
      uVar3 = 0xe;
      goto LAB_00afae50;
    }
    local_250 = local_d8;
    local_224 = local_d4;
    local_230 = local_d0;
    local_21c = local_cc;
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
    if (pppppiVar8 == (int *****)0x2) {
      local_e8 = pppppiVar9;
      local_e4 = local_230;
      local_e0 = local_21c;
      goto LAB_00afb65c;
    }
    local_40 = local_108;
    pppppiStack_3c = pppppiStack_104;
    pppppiStack_38 = pppppiStack_100;
    local_34 = local_fc;
    pppppiStack_30 = pppppiStack_f8;
    pppppiStack_2c = pppppiStack_f4;
    pppppiStack_28 = pppppiStack_f0;
LAB_00afab24:
    local_228 = param_2 + 0xe;
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(local_228);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
LAB_00afab44:
    pppppiStack_198 = pppppiStack_28;
    pppppiStack_19c = pppppiStack_2c;
    pppppiStack_1a0 = pppppiStack_30;
    local_1a4 = local_34;
    pppppiStack_1a8 = pppppiStack_38;
    pppppiStack_1ac = pppppiStack_3c;
    local_1b0 = local_40;
    local_228 = param_2 + 0xe;
    local_254 = param_2 + 0x29;
    local_258 = param_2 + 0x24;
    local_25c = (undefined1 *)((int)param_2 + 0x4d);
    *local_25c = 1;
    FUN_01192a14(local_228);
    *(undefined1 *)local_254 = 1;
    *(undefined1 *)local_258 = 1;
    if (bVar1) {
      local_188 = local_230;
      pppppiStack_184 = local_21c;
      local_18c = local_224;
      local_190 = local_250;
      local_178 = local_1b0;
      pppppiStack_174 = pppppiStack_1ac;
      pppppiStack_170 = pppppiStack_1a8;
      local_16c = local_1a4;
      pppppiStack_168 = pppppiStack_1a0;
      pppppiStack_164 = pppppiStack_19c;
      pppppiStack_160 = pppppiStack_198;
      local_15c = local_234;
      pppppiStack_158 = local_238;
      pppppiVar11 = (int *****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x2d] + 0x18));
    }
  }
  local_228 = param_2 + 0xe;
  local_244 = param_2 + 0x2e;
  *(undefined1 *)(param_2 + 0x33) = 1;
  *(undefined1 *)local_244 = 1;
  unaff_lr = (int *****)0xafadec;
  FUN_00a9039c(local_228);
  local_d8 = (int *****)0x0;
  local_1f0 = local_1b0;
  pppppiStack_1ec = pppppiStack_1ac;
  pppppiStack_1e8 = pppppiStack_1a8;
  local_1e4 = local_1a4;
  pppppiStack_1e0 = pppppiStack_1a0;
  pppppiStack_1dc = pppppiStack_19c;
  pppppiStack_1d8 = pppppiStack_198;
  pppppiVar4 = local_230;
  pppppiVar8 = local_224;
  pppppiVar9 = pppppiStack_19c;
  local_c4 = param_3;
  in_r12 = extraout_r12_00;
LAB_00afae0c:
  pppppiVar19 = local_21c;
  pppppiVar21 = local_d8;
  param_3 = local_c4;
switchD_00afa400_caseD_1:
  *param_1 = pppppiVar21;
  param_1[1] = unaff_lr;
  param_1[2] = pppppiVar8;
  param_1[5] = param_3;
  param_1[3] = pppppiVar4;
  param_1[4] = pppppiVar19;
  param_1[6] = pppppiVar11;
  param_1[7] = local_1f0;
  param_1[8] = pppppiStack_1ec;
  param_1[9] = pppppiStack_1e8;
  param_1[10] = local_1e4;
  param_1[0xb] = pppppiStack_1e0;
  param_1[0xc] = pppppiStack_1dc;
  param_1[0xd] = pppppiStack_1d8;
  uVar3 = 1;
  param_1[0xe] = in_r12;
  param_1[0xf] = pppppiVar9;
LAB_00afae50:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

