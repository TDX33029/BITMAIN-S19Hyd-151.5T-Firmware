// FUN_00a32254 @ 00a32254 size=4096 calls_out=18 calls_in=0
// strings: globalVoltage | hashChains | globalFrequency

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a32254(undefined4 *param_1,int *param_2,undefined4 *****param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *****pppppuVar3;
  undefined4 uVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *****extraout_r2;
  undefined4 *****extraout_r2_00;
  undefined4 *****extraout_r2_01;
  undefined4 *****extraout_r2_02;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  int *piVar12;
  int iVar13;
  undefined4 *****unaff_r5;
  int iVar14;
  int unaff_r6;
  int iVar15;
  undefined4 ****ppppuVar16;
  undefined *puVar17;
  undefined4 *****unaff_r8;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *in_r12;
  int *extraout_r12;
  int *extraout_r12_00;
  int *extraout_r12_01;
  int *extraout_r12_02;
  int *extraout_r12_03;
  int *extraout_r12_04;
  int *extraout_r12_05;
  undefined4 *****unaff_lr;
  int iVar23;
  undefined8 uVar24;
  int *local_328;
  int *local_31c;
  int *local_318;
  int *local_304;
  undefined4 *****local_300;
  undefined4 *****local_2fc;
  undefined4 *****local_2f8;
  undefined4 *****local_2f0;
  undefined4 *****local_2ec;
  undefined4 *****local_2e0;
  undefined4 *****pppppuStack_2dc;
  undefined4 *****pppppuStack_2d8;
  undefined4 *****local_2d4;
  undefined4 *****pppppuStack_2d0;
  undefined4 *****pppppuStack_2cc;
  undefined4 *****pppppuStack_2c8;
  undefined4 *****local_2c0;
  undefined4 *****pppppuStack_2bc;
  undefined4 *****pppppuStack_2b8;
  undefined4 *****local_2b4;
  undefined4 *****pppppuStack_2b0;
  undefined4 *****pppppuStack_2ac;
  undefined4 *****pppppuStack_2a8;
  undefined4 *****local_2a0;
  undefined4 *****local_29c;
  undefined4 *****local_298;
  undefined4 *****local_294;
  undefined4 *****local_290;
  undefined4 *****local_28c;
  undefined4 *****local_288;
  undefined4 *****pppppuStack_284;
  undefined4 *****pppppuStack_280;
  undefined4 *****local_27c;
  undefined4 *****pppppuStack_278;
  undefined4 *****pppppuStack_274;
  undefined4 *****pppppuStack_270;
  undefined4 *****local_260;
  undefined4 *****local_25c;
  undefined4 *****local_258;
  undefined4 *****local_254;
  undefined4 *****local_250;
  undefined4 *****local_24c;
  undefined4 *****local_248;
  undefined4 *****local_244;
  undefined4 *****local_240;
  undefined4 *****local_23c;
  undefined4 *****local_238;
  undefined4 *****pppppuStack_234;
  undefined4 *****pppppuStack_230;
  undefined4 *****local_22c;
  int *local_228;
  undefined4 *****local_224;
  int local_1d0;
  int local_f8;
  int local_f4;
  uint local_f0;
  undefined4 *****local_ec;
  undefined4 *****pppppuStack_e8;
  undefined4 *****pppppuStack_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0;
  undefined1 local_cc;
  undefined4 *****local_c8;
  undefined4 *****pppppuStack_c4;
  undefined4 *****pppppuStack_c0;
  undefined4 *****local_bc;
  undefined4 *****pppppuStack_b8;
  undefined4 *****pppppuStack_b4;
  undefined4 *****pppppuStack_b0;
  undefined4 *****local_a8;
  undefined4 *****pppppuStack_a4;
  undefined4 *****pppppuStack_a0;
  undefined4 *****pppppuStack_9c;
  undefined4 *****local_98;
  undefined4 *****pppppuStack_94;
  undefined4 *****pppppuStack_90;
  undefined4 *****pppppuStack_8c;
  undefined4 *****pppppuStack_88;
  undefined4 *****local_84;
  undefined4 *****pppppuStack_80;
  undefined4 *****pppppuStack_7c;
  undefined4 *****pppppuStack_78;
  undefined4 *****pppppuStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *****local_60;
  undefined4 *****pppppuStack_5c;
  undefined4 *****pppppuStack_58;
  undefined4 *****local_54;
  undefined4 *****pppppuStack_50;
  undefined4 *****pppppuStack_4c;
  undefined4 *****pppppuStack_48;
  undefined4 *****local_40;
  undefined4 *****pppppuStack_3c;
  undefined4 *****pppppuStack_38;
  undefined4 *****local_34;
  undefined4 *****pppppuStack_30;
  undefined4 *****pppppuStack_2c;
  undefined4 *****pppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    pppppuVar3 = (undefined4 *****)param_2[1];
    pppppuVar11 = (undefined4 *****)0x0;
    param_2[2] = (int)pppppuVar3;
    ppppuVar16 = pppppuVar3[4];
    iVar15 = *param_2;
    local_28c = (undefined4 *****)0x80000007;
    pppppuVar5 = pppppuVar3;
    pppppuVar10 = param_3;
    switch(ppppuVar16[0x10]) {
    case (undefined4 ***)0x7:
      unaff_lr = (undefined4 *****)0xa32344;
      uVar24 = thunk_FUN_01bed842(ppppuVar16[0xf] + 2,&DAT_005325f1,7);
      pppppuVar5 = (undefined4 *****)((ulonglong)uVar24 >> 0x20);
      pppppuVar10 = extraout_r2;
      in_r12 = extraout_r12;
      if ((int)uVar24 == 0) {
        param_2[4] = iVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppuVar3;
        goto LAB_00a32428;
      }
      break;
    case (undefined4 ***)0x8:
    case (undefined4 ***)0x9:
    case (undefined4 ***)0xb:
    case (undefined4 ***)0xc:
    case (undefined4 ***)0xe:
      goto switchD_00a32304_caseD_8;
    case (undefined4 ***)0xa:
      unaff_lr = (undefined4 *****)0xa32a5c;
      uVar24 = thunk_FUN_01bed842(ppppuVar16[0xf] + 2,"hashChains",10);
      pppppuVar5 = (undefined4 *****)((ulonglong)uVar24 >> 0x20);
      pppppuVar10 = extraout_r2_01;
      in_r12 = extraout_r12_02;
      if ((int)uVar24 == 0) {
        param_2[4] = iVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppuVar3;
        local_2f8 = &local_254;
        local_2f0 = pppppuVar3;
        goto LAB_00a32470;
      }
      break;
    case (undefined4 ***)0xd:
      unaff_lr = (undefined4 *****)0xa32a14;
      uVar24 = thunk_FUN_01bed842(ppppuVar16[0xf] + 2,"globalVoltage",0xd);
      pppppuVar5 = (undefined4 *****)((ulonglong)uVar24 >> 0x20);
      pppppuVar10 = extraout_r2_00;
      in_r12 = extraout_r12_01;
      if ((int)uVar24 == 0) {
        param_2[4] = iVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppuVar3;
        goto LAB_00a323e4;
      }
      break;
    case (undefined4 ***)0xf:
      unaff_lr = (undefined4 *****)0xa32aa4;
      uVar24 = thunk_FUN_01bed842(ppppuVar16[0xf] + 2,"globalFrequency",0xf);
      pppppuVar5 = (undefined4 *****)((ulonglong)uVar24 >> 0x20);
      pppppuVar10 = extraout_r2_02;
      in_r12 = extraout_r12_03;
      if ((int)uVar24 == 0) {
        param_2[4] = iVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppuVar3;
        goto LAB_00a324f4;
      }
    }
    local_28c = (undefined4 *****)0x80000007;
    goto switchD_00a32304_caseD_8;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22398);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22398);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar15 = param_2[4];
      pppppuVar3 = (undefined4 *****)param_2[5];
LAB_00a32428:
      param_2[6] = iVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppuVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22398);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22398);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22398);
      }
      iVar15 = param_2[6];
    }
    piVar21 = param_2 + 4;
    piVar2 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar15;
    piVar12 = param_2 + 5;
    iVar23 = piVar2[4];
    iVar7 = piVar2[5];
    iVar6 = piVar2[6];
    iVar22 = piVar2[7];
    iVar15 = piVar2[8];
    iVar18 = piVar2[1];
    iVar19 = piVar2[2];
    iVar13 = piVar2[3];
    *piVar12 = *piVar2;
    param_2[6] = iVar18;
    param_2[7] = iVar19;
    param_2[8] = iVar13;
    param_2[9] = iVar23 + 0x20;
    param_2[10] = iVar7;
    param_2[0xb] = iVar6;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar15;
    iVar18 = piVar2[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar21;
    param_2[0xf] = (int)piVar12;
    param_2[0x10] = iVar18;
LAB_00a32694:
    iVar15 = *piVar21;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar15;
    param_2[0x12] = (int)piVar12;
    param_2[0x13] = iVar18;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar21 = (int *)param_2[0xe];
      piVar12 = (int *)param_2[0xf];
      iVar18 = param_2[0x10];
      goto LAB_00a32694;
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
      iVar15 = param_2[0x11];
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar15 = param_2[4];
      pppppuVar3 = (undefined4 *****)param_2[5];
LAB_00a324f4:
      param_2[6] = iVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppuVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22398);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22398);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22398);
      }
      iVar15 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar15 + 0xc;
    iVar18 = piVar12[4];
    iVar23 = piVar12[5];
    iVar6 = piVar12[6];
    iVar22 = piVar12[7];
    iVar15 = piVar12[8];
    iVar19 = piVar12[1];
    iVar13 = piVar12[2];
    iVar7 = piVar12[3];
    param_2[5] = *piVar12;
    param_2[6] = iVar19;
    param_2[7] = iVar13;
    param_2[8] = iVar7;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar6;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar15;
    iVar15 = piVar12[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar15;
  case '\x06':
    FUN_011adb38(&local_260,param_2 + 0xe);
    if (local_260 == (undefined4 *****)0x2) {
      *param_1 = 2;
      uVar1 = 6;
      goto LAB_00a331c8;
    }
    goto LAB_00a32948;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar15 = param_2[4];
      pppppuVar3 = (undefined4 *****)param_2[5];
LAB_00a323e4:
      param_2[6] = iVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppuVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22398);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22398);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22398);
      }
      iVar15 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar15 + 0x18;
    iVar18 = piVar12[4];
    iVar23 = piVar12[5];
    iVar6 = piVar12[6];
    iVar22 = piVar12[7];
    iVar15 = piVar12[8];
    iVar19 = piVar12[1];
    iVar13 = piVar12[2];
    iVar7 = piVar12[3];
    param_2[5] = *piVar12;
    param_2[6] = iVar19;
    param_2[7] = iVar13;
    param_2[8] = iVar7;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar6;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar15;
    iVar15 = piVar12[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar15;
  case '\b':
    FUN_011adb38(&local_260,param_2 + 0xe);
    if (local_260 == (undefined4 *****)0x2) {
      *param_1 = 2;
      uVar1 = 8;
      goto LAB_00a331c8;
    }
LAB_00a32948:
    local_2ec = local_25c;
    local_2e0 = local_244;
    pppppuStack_2dc = local_240;
    pppppuStack_2d8 = local_23c;
    local_2d4 = local_238;
    pppppuStack_2d0 = pppppuStack_234;
    pppppuStack_2cc = pppppuStack_230;
    pppppuStack_2c8 = local_22c;
    pppppuVar5 = local_224;
    pppppuVar10 = local_250;
    pppppuVar11 = local_260;
    unaff_r5 = local_254;
    unaff_r8 = local_258;
    local_28c = local_248;
    in_r12 = local_228;
    unaff_lr = local_24c;
    goto switchD_00a32304_caseD_8;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar15 = param_2[4];
      pppppuVar3 = (undefined4 *****)param_2[5];
LAB_00a32470:
      param_2[6] = iVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppuVar3;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22398);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22398);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22398);
      }
      iVar15 = param_2[6];
    }
    in_r12 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar15 + 0x24;
    piVar21 = param_2 + 5;
    iVar18 = piVar12[4];
    iVar7 = piVar12[5];
    iVar6 = piVar12[6];
    iVar22 = piVar12[7];
    iVar15 = piVar12[8];
    iVar19 = piVar12[1];
    unaff_r6 = piVar12[2];
    iVar13 = piVar12[3];
    *piVar21 = *piVar12;
    param_2[6] = iVar19;
    param_2[7] = unaff_r6;
    param_2[8] = iVar13;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar7;
    param_2[0xb] = iVar6;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar15;
    iVar15 = piVar12[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)in_r12;
    param_2[0x31] = (int)piVar21;
    param_2[0x32] = iVar15;
LAB_00a32758:
    piVar12 = (int *)*in_r12;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = (int)piVar12;
    param_2[0x2b] = (int)piVar21;
    param_2[0x2c] = iVar15;
LAB_00a32774:
    param_2[0x2d] = (int)piVar21;
    if (*piVar12 != -0x80000000) {
      *(undefined1 *)(param_2 + 0x29) = 0;
      local_2ec = (undefined4 *****)param_2[0x2c];
      param_2[0x26] = (int)piVar12;
      param_2[0x27] = (int)piVar21;
      param_2[0x28] = (int)local_2ec;
LAB_00a327b0:
      puVar17 = (undefined *)piVar12[2];
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0xe] = 1;
      param_2[0xf] = (int)puVar17;
      param_2[0x10] = (int)piVar21;
      param_2[0x11] = (int)local_2ec;
      param_2[0x12] = (int)piVar12;
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_2f8 = (undefined4 *****)(piVar21 + 6);
      if (*(int *)((int)**local_2f8 + 0x10) != 0) {
LAB_00a327f0:
        if (&UNK_00505050 < puVar17) {
          uVar4 = 0;
LAB_00a32804:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar4,unaff_r6);
        }
        unaff_r6 = (int)puVar17 * 0x198;
        if (unaff_r6 == 0) {
          iVar15 = 8;
          puVar17 = (undefined *)0x0;
        }
        else {
          iVar15 = FUN_01298504(unaff_r6,8);
          uVar4 = 8;
          if (iVar15 == 0) goto LAB_00a32804;
        }
        param_2[0x14] = (int)puVar17;
LAB_00a32b48:
        param_2[0x15] = iVar15;
        param_2[0x16] = 0;
        *(undefined1 *)((int)param_2 + 0x4d) = 0;
        if (piVar12[2] != 0) {
          iVar19 = piVar12[1];
          iVar18 = 0;
          iVar15 = piVar12[2] * 0x24;
          do {
            if (*piVar21 == 1) {
              local_a8 = (undefined4 *****)piVar21[1];
              pppppuStack_a4 = (undefined4 *****)piVar21[2];
              pppppuStack_a0 = (undefined4 *****)piVar21[3];
            }
            local_f0 = (uint)(*piVar21 == 1);
            local_e0 = piVar21[4];
            local_dc = piVar21[5];
            local_d8 = (int)*local_2f8;
            local_d4 = piVar21[7];
            local_d0 = (undefined1)piVar21[8];
            local_ec = local_a8;
            pppppuStack_e8 = pppppuStack_a4;
            pppppuStack_e4 = pppppuStack_a0;
            local_cc = 0;
            iVar13 = param_2[0x16];
            local_f8 = (int)local_2ec;
            local_1d0 = iVar18;
            local_f4 = iVar19;
            if (iVar13 == param_2[0x14]) {
              FUN_00f9d59c(param_2 + 0x14);
            }
            iVar19 = iVar19 + 0x24;
            FUN_01bed4e2(iVar13 * 0x198 + param_2[0x15],&local_260,0x198);
            iVar18 = iVar18 + 1;
            iVar15 = iVar15 + -0x24;
            param_2[0x16] = iVar13 + 1;
          } while (iVar15 != 0);
        }
        local_70 = param_2[0x14];
        iStack_6c = param_2[0x15];
        iStack_68 = param_2[0x16];
        FUN_00a138ec(&local_260);
        local_a8 = local_260;
        pppppuStack_a4 = local_25c;
        pppppuStack_a0 = local_258;
        pppppuStack_9c = local_254;
        local_98 = local_250;
        pppppuStack_94 = local_24c;
        pppppuStack_90 = local_248;
        pppppuStack_8c = local_244;
        pppppuStack_88 = local_240;
        local_84 = local_23c;
        pppppuStack_80 = local_238;
        pppppuStack_7c = pppppuStack_234;
        pppppuStack_78 = pppppuStack_230;
        pppppuStack_74 = local_22c;
        param_2[0x18] = (int)local_260;
        param_2[0x19] = (int)local_25c;
        param_2[0x1a] = (int)local_258;
        param_2[0x1b] = (int)local_254;
        param_2[0x1c] = (int)local_250;
        param_2[0x1d] = (int)local_24c;
        param_2[0x1e] = (int)local_248;
        param_2[0x1f] = (int)local_244;
        param_2[0x20] = (int)local_240;
        param_2[0x21] = (int)local_23c;
        param_2[0x22] = (int)local_238;
        param_2[0x23] = (int)pppppuStack_234;
        param_2[0x24] = (int)pppppuStack_230;
        param_2[0x25] = (int)local_22c;
        goto LAB_00a32cc8;
      }
LAB_00a32d98:
      if (&UNK_00ba2e8b < puVar17) {
        uVar4 = 0;
LAB_00a32db0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,unaff_r6);
      }
      unaff_r6 = (int)puVar17 * 0xb0;
      if (unaff_r6 == 0) {
        iVar15 = 8;
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar4 = 8;
        iVar15 = FUN_01298504(unaff_r6,8);
        if (iVar15 == 0) goto LAB_00a32db0;
      }
      param_2[0x14] = (int)puVar17;
      local_2f0 = (undefined4 *****)piVar21;
LAB_00a32e34:
      local_304 = param_2 + 0x14;
      param_2[0x15] = iVar15;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (piVar12[2] != 0) {
        iVar19 = param_2[0x16];
        iVar22 = 0;
        iVar15 = piVar12[2] * 0x24;
        iVar13 = iVar19 * 0xb0 + 0xac;
        iVar18 = piVar12[1];
        do {
          iVar6 = (int)local_2f0[4];
          iVar7 = (int)local_2f0[5];
          piVar12 = (int *)0x0;
          if (*local_2f0 != (undefined4 ****)0x0) {
            piVar12 = (int *)(local_2f0 + 1);
          }
          iVar8 = (int)local_2f0[6];
          iVar20 = (int)local_2f0[7];
          iVar23 = (int)local_2f0[8];
          iVar14 = iVar19 + iVar22;
          if (iVar14 == *local_304) {
            FUN_00a20d80(local_304);
          }
          iVar15 = iVar15 + -0x24;
          puVar9 = (undefined1 *)(param_2[0x15] + iVar13);
          *puVar9 = 0;
          iVar13 = iVar13 + 0xb0;
          puVar9[-4] = (char)iVar23;
          *(int *)(puVar9 + -0xc) = iVar8;
          *(int *)(puVar9 + -8) = iVar20;
          *(undefined4 ******)(puVar9 + -0x28) = local_2ec;
          *(undefined4 *)(puVar9 + -0x24) = 1;
          *(undefined4 *)(puVar9 + -0x20) = 0;
          *(int *)(puVar9 + -0x1c) = iVar22;
          iVar22 = iVar22 + 1;
          *(int *)(puVar9 + -0x2c) = iVar18;
          *(int *)(puVar9 + -0x14) = iVar6;
          *(int **)(puVar9 + -0x18) = piVar12;
          *(int *)(puVar9 + -0x10) = iVar7;
          param_2[0x16] = iVar14 + 1;
          iVar18 = iVar18 + 0x24;
        } while (iVar15 != 0);
      }
      local_70 = *local_304;
      iStack_6c = param_2[0x15];
      iStack_68 = param_2[0x16];
      FUN_00a1563c(&local_260);
      local_a8 = local_260;
      pppppuStack_a4 = local_25c;
      pppppuStack_a0 = local_258;
      pppppuStack_9c = local_254;
      local_98 = local_250;
      pppppuStack_94 = local_24c;
      pppppuStack_90 = local_248;
      pppppuStack_8c = local_244;
      pppppuStack_88 = local_240;
      local_84 = local_23c;
      pppppuStack_80 = local_238;
      pppppuStack_7c = pppppuStack_234;
      pppppuStack_78 = pppppuStack_230;
      pppppuStack_74 = local_22c;
      param_2[0x18] = (int)local_260;
      param_2[0x19] = (int)local_25c;
      param_2[0x1a] = (int)local_258;
      param_2[0x1b] = (int)local_254;
      param_2[0x1c] = (int)local_250;
      param_2[0x1d] = (int)local_24c;
      param_2[0x1e] = (int)local_248;
      param_2[0x1f] = (int)local_244;
      param_2[0x20] = (int)local_240;
      param_2[0x21] = (int)local_23c;
      param_2[0x22] = (int)local_238;
      param_2[0x23] = (int)pppppuStack_234;
      param_2[0x24] = (int)pppppuStack_230;
      param_2[0x25] = (int)local_22c;
LAB_00a32f98:
      FUN_009eecb0(&local_260,param_2 + 0x18,param_3);
      if (local_260 != (undefined4 *****)&DAT_00000003) {
        pppppuVar3 = &local_60;
        local_2f8 = local_25c;
        local_300 = local_250;
        local_2f0 = local_258;
        local_2fc = local_254;
        local_2ec = local_260;
        local_60 = local_248;
        pppppuStack_5c = local_244;
        pppppuStack_58 = local_240;
        local_54 = local_23c;
        pppppuStack_50 = local_238;
        pppppuStack_4c = pppppuStack_234;
        pppppuStack_48 = pppppuStack_230;
        FUN_00a35200(param_2 + 0x18);
        local_28c = local_24c;
        goto LAB_00a3304c;
      }
      uVar1 = 4;
      goto LAB_00a32fc0;
    }
    local_28c = (undefined4 *****)&DAT_80000000;
    goto LAB_00a3314c;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      in_r12 = (int *)param_2[0x30];
      piVar21 = (int *)param_2[0x31];
      iVar15 = param_2[0x32];
      goto LAB_00a32758;
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
      piVar12 = (int *)param_2[0x2a];
      piVar21 = (int *)param_2[0x2b];
      goto LAB_00a32774;
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
      piVar12 = (int *)param_2[0x26];
      piVar21 = (int *)param_2[0x27];
      local_2ec = (undefined4 *****)param_2[0x28];
      goto LAB_00a327b0;
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
      puVar17 = (undefined *)param_2[0xf];
      piVar21 = (int *)param_2[0x10];
      local_2ec = (undefined4 *****)param_2[0x11];
      local_2f8 = (undefined4 *****)(piVar21 + 6);
      piVar12 = (int *)param_2[0x12];
      if (*(int *)((int)**local_2f8 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00a32d98;
        param_2[0x14] = 0;
        iVar15 = 8;
        local_2f0 = (undefined4 *****)piVar21;
        goto LAB_00a32e34;
      }
      if (param_2[0xe] != 0) goto LAB_00a327f0;
      param_2[0x14] = 0;
      iVar15 = 8;
      goto LAB_00a32b48;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00a32f98;
    }
LAB_00a32cc8:
    FUN_00a0cb44(&local_260,param_2 + 0x18,param_3);
    if (local_260 == (undefined4 *****)&DAT_00000003) {
      uVar1 = 3;
LAB_00a32fc0:
      local_328 = param_2 + 0x13;
      local_31c = param_2 + 0x29;
      *(undefined1 *)local_328 = uVar1;
      *(undefined1 *)(param_2 + 0x2e) = 3;
      *(undefined1 *)local_31c = 3;
      *(undefined1 *)(param_2 + 0x33) = 3;
      *param_1 = 2;
      uVar1 = 10;
      goto LAB_00a331c8;
    }
    pppppuVar3 = &local_c8;
    local_2f8 = local_25c;
    local_300 = local_250;
    local_2f0 = local_258;
    local_2fc = local_254;
    local_2ec = local_260;
    local_c8 = local_248;
    pppppuStack_c4 = local_244;
    pppppuStack_c0 = local_240;
    local_bc = local_23c;
    pppppuStack_b8 = local_238;
    pppppuStack_b4 = pppppuStack_234;
    pppppuStack_b0 = pppppuStack_230;
    FUN_0093d43c(param_2 + 0x18);
    local_28c = local_24c;
LAB_00a3304c:
    local_318 = param_2 + 0xe;
    local_31c = param_2 + 0x29;
    if (local_2ec != (undefined4 *****)0x2) {
      local_40 = (undefined4 *****)*pppppuVar3;
      pppppuStack_3c = (undefined4 *****)pppppuVar3[1];
      pppppuStack_38 = (undefined4 *****)pppppuVar3[2];
      local_34 = (undefined4 *****)pppppuVar3[3];
      pppppuStack_30 = (undefined4 *****)pppppuVar3[4];
      pppppuStack_2c = (undefined4 *****)pppppuVar3[5];
      pppppuStack_28 = (undefined4 *****)pppppuVar3[6];
    }
    else {
      local_28c = (undefined4 *****)0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_0093d57c(local_318);
    *(undefined1 *)local_31c = 1;
    local_2c0 = local_40;
    pppppuStack_2bc = pppppuStack_3c;
    pppppuStack_2b8 = pppppuStack_38;
    local_2b4 = local_34;
    pppppuStack_2b0 = pppppuStack_30;
    pppppuStack_2ac = pppppuStack_2c;
    pppppuStack_2a8 = pppppuStack_28;
    in_r12 = extraout_r12_04;
    if (local_2ec != (undefined4 *****)0x2) {
      local_298 = local_2f0;
      local_294 = local_2fc;
      local_29c = local_2f8;
      local_2a0 = local_2ec;
      local_290 = local_300;
      local_288 = local_40;
      pppppuStack_284 = pppppuStack_3c;
      pppppuStack_280 = pppppuStack_38;
      local_27c = local_34;
      pppppuStack_278 = pppppuStack_30;
      pppppuStack_274 = pppppuStack_2c;
      pppppuStack_270 = pppppuStack_28;
      FUN_00a20afc(*(undefined4 *)(param_2[0x2d] + 0x18));
      local_28c = (undefined4 *****)&DAT_80000000;
      in_r12 = extraout_r12_05;
    }
LAB_00a3314c:
    pppppuVar11 = (undefined4 *****)0x0;
    local_2e0 = local_2c0;
    pppppuStack_2dc = pppppuStack_2bc;
    pppppuStack_2d8 = pppppuStack_2b8;
    pppppuVar5 = &local_2d4;
    local_2d4 = local_2b4;
    pppppuStack_2d0 = pppppuStack_2b0;
    pppppuStack_2cc = pppppuStack_2ac;
    pppppuStack_2c8 = pppppuStack_2a8;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    *(undefined1 *)(param_2 + 0x33) = 1;
    pppppuVar10 = local_2fc;
    unaff_r5 = local_2f0;
    unaff_r8 = local_2f8;
    unaff_lr = local_300;
    goto switchD_00a32304_caseD_8;
  }
  FUN_006666fc(&local_260,*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
  local_28c = (undefined4 *****)0x80000002;
  local_2e0 = local_24c;
  pppppuStack_2dc = local_248;
  pppppuStack_2d8 = local_244;
  pppppuVar5 = &local_2d4;
  local_2d4 = local_240;
  pppppuStack_2d0 = local_23c;
  pppppuStack_2cc = local_238;
  pppppuStack_2c8 = pppppuStack_234;
  pppppuVar11 = (undefined4 *****)0x0;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  pppppuVar10 = local_258;
  unaff_r5 = local_25c;
  unaff_r8 = local_260;
  in_r12 = extraout_r12_00;
  unaff_lr = local_254;
switchD_00a32304_caseD_8:
  param_1[5] = unaff_lr;
  param_1[1] = local_2ec;
  param_1[2] = unaff_r8;
  *param_1 = pppppuVar11;
  param_1[6] = local_28c;
  param_1[3] = unaff_r5;
  param_1[4] = pppppuVar10;
  param_1[7] = local_2e0;
  param_1[8] = pppppuStack_2dc;
  param_1[9] = pppppuStack_2d8;
  param_1[10] = local_2d4;
  param_1[0xb] = pppppuStack_2d0;
  param_1[0xc] = pppppuStack_2cc;
  param_1[0xd] = pppppuStack_2c8;
  param_1[0xe] = in_r12;
  param_1[0xf] = pppppuVar5;
  uVar1 = 1;
LAB_00a331c8:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

