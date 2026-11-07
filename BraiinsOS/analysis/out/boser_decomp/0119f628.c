// FUN_0119f628 @ 0119f628 size=5792 calls_out=22 calls_in=0
// strings: indexNames | asicBoost | frequency | voltagePerHashChain | quickRampingTimeS | enabled

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0119f628(undefined4 *param_1,int *param_2,int ****param_3,int ****param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int ****ppppiVar4;
  undefined1 uVar5;
  int ***pppiVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int ****extraout_r2;
  int iVar16;
  int ****extraout_r2_00;
  int ****extraout_r2_01;
  int ****extraout_r2_02;
  int ****extraout_r2_03;
  int ****extraout_r3;
  int *piVar17;
  int ****extraout_r3_00;
  int ****extraout_r3_01;
  int ****extraout_r3_02;
  int ****extraout_r3_03;
  int *unaff_r5;
  int iVar18;
  int ****unaff_r6;
  int iVar19;
  uint uVar20;
  int ****ppppiVar21;
  int iVar22;
  int iVar23;
  int ****ppppiVar24;
  int ****unaff_r9;
  int ****ppppiVar25;
  int iVar26;
  int ****ppppiVar27;
  int ****ppppiVar28;
  int iVar29;
  bool bVar30;
  int *local_308;
  int *local_300;
  int *local_2fc;
  int *local_2f8;
  int ****local_2f0;
  int ****local_2ec;
  int ****local_2e8;
  int ****local_2e4;
  int ****local_2e0;
  int ****local_2dc;
  int *local_2d8;
  int ****local_2c8;
  int ****ppppiStack_2c4;
  int ****ppppiStack_2c0;
  int ****local_2bc;
  int ****ppppiStack_2b8;
  int ****ppppiStack_2b4;
  int ****ppppiStack_2b0;
  int ****local_2a8;
  int ****ppppiStack_2a4;
  int ****ppppiStack_2a0;
  int ****local_29c;
  int ****ppppiStack_298;
  int ****ppppiStack_294;
  int ****ppppiStack_290;
  int ****local_288;
  int ****ppppiStack_284;
  int ****ppppiStack_280;
  int ****local_27c;
  int ****ppppiStack_278;
  int ****ppppiStack_274;
  int ****ppppiStack_270;
  int ****local_268;
  int ****ppppiStack_264;
  int ****ppppiStack_260;
  int ****local_25c;
  int ****ppppiStack_258;
  int ****ppppiStack_254;
  int ****ppppiStack_250;
  int ****local_248;
  int ****ppppiStack_244;
  int ****ppppiStack_240;
  int ****local_23c;
  int ****ppppiStack_238;
  int ****ppppiStack_234;
  int ****ppppiStack_230;
  int ****local_228;
  int ****ppppiStack_224;
  int ****ppppiStack_220;
  int ****local_21c;
  int ****ppppiStack_218;
  int ****ppppiStack_214;
  int ****ppppiStack_210;
  int ****local_208;
  int ****local_204;
  int ****local_200;
  int ****local_1fc;
  int ****local_1f8;
  int ****local_1f4;
  int ****local_1f0;
  int ****local_1ec;
  int ****local_1e8;
  int ****local_1e4;
  int ****local_1e0;
  int ****local_1dc;
  int ****ppppiStack_1d8;
  int ****local_1d4;
  int ****local_1d0;
  int ****local_1cc;
  undefined1 local_d4;
  int ****local_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  int ****local_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int ****local_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int ****local_94;
  int ****ppppiStack_90;
  int ****ppppiStack_8c;
  int ****ppppiStack_88;
  int ****local_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int ****local_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****local_60;
  int ****local_5c;
  int ****local_58;
  int ****ppppiStack_54;
  int ****local_50;
  int ****local_4c;
  int ****local_48;
  int ****ppppiStack_44;
  int ****ppppiStack_40;
  int ****local_3c;
  int ****ppppiStack_38;
  int ****ppppiStack_34;
  int ****ppppiStack_30;
  int ****local_2c;
  
  ppppiVar21 = (int ****)&local_208;
  ppppiVar25 = (int ****)&local_58;
  ppppiVar28 = (int ****)&local_200;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    local_2dc = (int ****)0x80000007;
    iVar18 = *param_2;
    ppppiVar27 = (int ****)param_2[1];
    ppppiVar24 = (int ****)0x0;
    param_2[2] = (int)ppppiVar27;
    local_2ec = (int ****)ppppiVar27[4];
    pppiVar6 = local_2ec[0x10];
    local_2f0 = unaff_r9;
    if ((int)pppiVar6 < 10) {
      if (pppiVar6 == (int ***)0x7) {
        iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"enabled",7);
        if (iVar7 == 0) {
          param_2[4] = iVar18;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)ppppiVar27;
          goto LAB_0119f7a0;
        }
        iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"voltage",7);
        local_2e0 = extraout_r2_03;
        local_2e4 = extraout_r3_03;
        if (iVar7 == 0) {
          param_2[4] = iVar18;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)ppppiVar27;
          goto LAB_0119f8b0;
        }
        goto LAB_011a0824;
      }
      ppppiVar4 = param_4;
      if (pppiVar6 == (int ***)0x9) {
        iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"asicBoost",9);
        if (iVar7 == 0) {
          param_2[4] = iVar18;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)ppppiVar27;
          goto LAB_0119f8f8;
        }
        iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"frequency",9);
        local_2e0 = extraout_r2_00;
        local_2e4 = extraout_r3_00;
        if (iVar7 == 0) {
          param_2[4] = iVar18;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = (int)ppppiVar27;
          goto LAB_0119f75c;
        }
        goto LAB_011a0824;
      }
      goto LAB_011a03f0;
    }
    if (pppiVar6 == (int ***)0x13) {
      iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"voltagePerHashChain",0x13);
      local_2e0 = extraout_r2_01;
      local_2e4 = extraout_r3_01;
      if (iVar7 == 0) {
        param_2[4] = iVar18;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)ppppiVar27;
        goto LAB_0119f7e4;
      }
    }
    else if (pppiVar6 == (int ***)0x11) {
      iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"quickRampingTimeS",0x11);
      local_2e0 = extraout_r2_02;
      local_2e4 = extraout_r3_02;
      if (iVar7 == 0) {
        param_2[4] = iVar18;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)ppppiVar27;
        goto LAB_0119f978;
      }
    }
    else {
      ppppiVar4 = param_4;
      if (pppiVar6 != (int ***)0xa) goto LAB_011a03f0;
      iVar7 = thunk_FUN_01bed842(local_2ec[0xf] + 2,"indexNames",10);
      local_2e0 = extraout_r2;
      local_2e4 = extraout_r3;
      if (iVar7 == 0) {
        param_2[4] = iVar18;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)ppppiVar27;
        goto LAB_0119f82c;
      }
    }
LAB_011a0824:
    local_2dc = (int ****)0x80000007;
    local_2e8 = ppppiVar28;
    goto LAB_011a03f4;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20d94);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20d94);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f82c:
      param_2[6] = iVar18;
      param_2[7] = (int)ppppiVar27;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_2d8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar17 = param_2 + 4;
    *piVar17 = iVar18 + 0xb0;
    iVar7 = piVar12[7];
    iVar16 = piVar12[4];
    iVar29 = piVar12[5];
    iVar26 = piVar12[6];
    iVar18 = piVar12[8];
    unaff_r5 = (int *)piVar12[1];
    iVar19 = piVar12[2];
    iVar22 = piVar12[3];
    *local_2d8 = *piVar12;
    param_2[6] = (int)unaff_r5;
    param_2[7] = iVar19;
    param_2[8] = iVar22;
    param_2[9] = iVar16 + 0x20;
    param_2[0xc] = iVar7;
    param_2[10] = iVar29;
    param_2[0xb] = iVar26;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    local_2dc = (int ****)piVar12[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar17;
    param_2[0x2b] = (int)local_2d8;
    param_2[0x2c] = (int)local_2dc;
LAB_0119fd74:
    iVar18 = *piVar17;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar18;
    param_2[0x27] = (int)local_2d8;
    param_2[0x28] = (int)local_2dc;
LAB_0119fd94:
    uVar20 = *(uint *)(iVar18 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar18;
    param_2[0x11] = (int)local_2dc;
    param_2[0xe] = 1;
    param_2[0xf] = uVar20;
    param_2[0x10] = (int)local_2d8;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2e0 = (int ****)(local_2d8 + 6);
    if (*(int *)((int)**local_2e0 + 0x10) != 0) {
LAB_0119fdd4:
      if (0x690690 < uVar20) {
        uVar13 = 0;
LAB_0119fde8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar13,unaff_r5);
      }
      unaff_r5 = (int *)(uVar20 * 0x138);
      if (unaff_r5 == (int *)0x0) {
        iVar7 = 4;
        uVar20 = 0;
      }
      else {
        iVar7 = FUN_01298504(unaff_r5,4);
        uVar13 = 4;
        if (iVar7 == 0) goto LAB_0119fde8;
      }
      param_2[0x14] = uVar20;
LAB_011a0564:
      local_2e8 = (int ****)(param_2 + 0x14);
      param_2[0x15] = iVar7;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar18 + 8) != 0) {
        ppppiVar28 = *(int *****)(iVar18 + 4);
        ppppiVar21 = (int ****)0x0;
        iVar18 = *(int *)(iVar18 + 8) * 0xc;
        puVar11 = (undefined4 *)((uint)&local_208 | 4);
        do {
          if (*local_2d8 == 1) {
            local_60 = (int ****)local_2d8[1];
            local_5c = (int ****)local_2d8[2];
            local_58 = (int ****)local_2d8[3];
          }
          local_208 = (int ****)(uint)(*local_2d8 == 1);
          local_1f8 = (int ****)local_2d8[4];
          local_1f4 = (int ****)local_2d8[5];
          local_1f0 = (int ****)*local_2e0;
          local_1ec = (int ****)local_2d8[7];
          iVar7 = local_2d8[8];
          *puVar11 = local_60;
          puVar11[1] = local_5c;
          puVar11[2] = local_58;
          local_d4 = 0;
          iVar16 = param_2[0x16];
          local_1e8 = (int ****)CONCAT31(local_1e8._1_3_,(char)iVar7);
          local_1e4 = local_2dc;
          local_1e0 = ppppiVar28;
          local_1dc = ppppiVar21;
          if (iVar16 == param_2[0x14]) {
            FUN_00f9d6bc(local_2e8);
          }
          ppppiVar28 = ppppiVar28 + 3;
          FUN_01bed4e2(iVar16 * 0x138 + param_2[0x15],&local_208,0x138);
          ppppiVar21 = (int ****)((int)ppppiVar21 + 1);
          iVar18 = iVar18 + -0xc;
          param_2[0x16] = iVar16 + 1;
        } while (iVar18 != 0);
      }
      local_b0 = (int)*local_2e8;
      iStack_ac = param_2[0x15];
      iStack_a8 = param_2[0x16];
      FUN_00a14064(&local_208);
      local_60 = local_208;
      local_5c = local_204;
      local_58 = local_200;
      ppppiStack_54 = local_1fc;
      local_50 = local_1f8;
      local_4c = local_1f4;
      local_48 = local_1f0;
      ppppiStack_44 = local_1ec;
      ppppiStack_40 = local_1e8;
      local_3c = local_1e4;
      ppppiStack_38 = local_1e0;
      ppppiStack_34 = local_1dc;
      ppppiStack_30 = ppppiStack_1d8;
      local_2c = local_1d4;
      param_2[0x18] = (int)local_208;
      param_2[0x19] = (int)local_204;
      param_2[0x1a] = (int)local_200;
      param_2[0x1b] = (int)local_1fc;
      param_2[0x1c] = (int)local_1f8;
      param_2[0x1d] = (int)local_1f4;
      param_2[0x1e] = (int)local_1f0;
      param_2[0x1f] = (int)local_1ec;
      param_2[0x20] = (int)local_1e8;
      param_2[0x21] = (int)local_1e4;
      param_2[0x22] = (int)local_1e0;
      param_2[0x23] = (int)local_1dc;
      param_2[0x24] = (int)ppppiStack_1d8;
      param_2[0x25] = (int)local_1d4;
      goto LAB_011a06e0;
    }
LAB_011a08a4:
    if (0x1999999 < uVar20) {
      uVar13 = 0;
      piVar17 = local_2d8;
LAB_011a08b8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,piVar17);
    }
    piVar17 = (int *)(uVar20 * 0x50);
    if (piVar17 == (int *)0x0) {
      iVar7 = 4;
      uVar20 = 0;
    }
    else {
      uVar13 = 4;
      iVar7 = FUN_01298504(piVar17,4);
      if (iVar7 == 0) goto LAB_011a08b8;
    }
    param_2[0x14] = uVar20;
LAB_011a0920:
    piVar17 = param_2 + 0x14;
    param_2[0x15] = iVar7;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar18 + 8) != 0) {
      iVar22 = 0;
      iVar7 = *(int *)(iVar18 + 8) * 0xc;
      iVar19 = param_2[0x16];
      iVar16 = iVar19 * 0x50;
      iVar18 = *(int *)(iVar18 + 4);
      do {
        iVar26 = local_2d8[4];
        iVar29 = local_2d8[5];
        iVar14 = local_2d8[6];
        iVar15 = local_2d8[7];
        piVar12 = (int *)0x0;
        if (*local_2d8 != 0) {
          piVar12 = local_2d8 + 1;
        }
        iVar3 = local_2d8[8];
        iVar23 = iVar19 + iVar22;
        if (iVar23 == *piVar17) {
          FUN_00a20f30(piVar17);
        }
        iVar7 = iVar7 + -0xc;
        puVar11 = (undefined4 *)(param_2[0x15] + iVar16);
        *puVar11 = 1;
        puVar11[1] = 0;
        puVar11[2] = iVar22;
        iVar22 = iVar22 + 1;
        iVar16 = iVar16 + 0x50;
        *(undefined1 *)(puVar11 + 0x13) = 0;
        puVar11[4] = iVar26;
        puVar11[5] = iVar29;
        puVar11[9] = iVar18;
        puVar11[6] = iVar14;
        puVar11[10] = local_2dc;
        *(char *)(puVar11 + 8) = (char)iVar3;
        puVar11[3] = piVar12;
        puVar11[7] = iVar15;
        param_2[0x16] = iVar23 + 1;
        iVar18 = iVar18 + 0xc;
      } while (iVar7 != 0);
    }
    local_b0 = *piVar17;
    iStack_ac = param_2[0x15];
    iStack_a8 = param_2[0x16];
    FUN_00a147d4(&local_208);
    local_60 = local_208;
    local_5c = local_204;
    local_58 = local_200;
    ppppiStack_54 = local_1fc;
    local_50 = local_1f8;
    local_4c = local_1f4;
    local_48 = local_1f0;
    ppppiStack_44 = local_1ec;
    ppppiStack_40 = local_1e8;
    local_3c = local_1e4;
    ppppiStack_38 = local_1e0;
    ppppiStack_34 = local_1dc;
    ppppiStack_30 = ppppiStack_1d8;
    local_2c = local_1d4;
    param_2[0x18] = (int)local_208;
    param_2[0x19] = (int)local_204;
    param_2[0x1a] = (int)local_200;
    param_2[0x1b] = (int)local_1fc;
    param_2[0x1c] = (int)local_1f8;
    param_2[0x1d] = (int)local_1f4;
    param_2[0x1e] = (int)local_1f0;
    param_2[0x1f] = (int)local_1ec;
    param_2[0x20] = (int)local_1e8;
    param_2[0x21] = (int)local_1e4;
    param_2[0x22] = (int)local_1e0;
    param_2[0x23] = (int)local_1dc;
    param_2[0x24] = (int)ppppiStack_1d8;
    param_2[0x25] = (int)local_1d4;
LAB_011a0a88:
    FUN_00a09a14(&local_208,param_2 + 0x18,param_3);
    local_2ec = local_208;
    if (local_208 != (int ****)&DAT_00000003) {
      local_2e4 = local_204;
      local_2e8 = local_1f8;
      local_2dc = local_1f4;
      local_2e0 = local_1fc;
      ppppiVar21 = (int ****)&local_80;
      local_80 = local_1f0;
      ppppiStack_7c = local_1ec;
      ppppiStack_78 = local_1e8;
      local_74 = local_1e4;
      ppppiStack_70 = local_1e0;
      ppppiStack_6c = local_1dc;
      ppppiStack_68 = ppppiStack_1d8;
      FUN_011a1308(param_2 + 0x18);
      local_2f0 = local_200;
      ppppiVar25 = local_1d4;
      local_1cc = local_1d0;
      goto LAB_011a0b38;
    }
    uVar5 = 4;
LAB_011a0ab4:
    local_308 = param_2 + 0x13;
    *(undefined1 *)local_308 = uVar5;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar5 = 4;
    goto LAB_011a0434;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar17 = (int *)param_2[0x2a];
      local_2d8 = (int *)param_2[0x2b];
      local_2dc = (int ****)param_2[0x2c];
      goto LAB_0119fd74;
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
      local_2d8 = (int *)param_2[0x27];
      local_2dc = (int ****)param_2[0x28];
      goto LAB_0119fd94;
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
      uVar20 = param_2[0xf];
      local_2d8 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      unaff_r5 = local_2d8 + 6;
      local_2dc = (int ****)param_2[0x11];
      iVar18 = param_2[0x12];
      if (*(int *)(*(int *)*unaff_r5 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_011a08a4;
        param_2[0x14] = 0;
        iVar7 = 4;
        goto LAB_011a0920;
      }
      local_2e0 = (int ****)unaff_r5;
      if (param_2[0xe] != 0) goto LAB_0119fdd4;
      param_2[0x14] = 0;
      iVar7 = 4;
      goto LAB_011a0564;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_011a0a88;
    }
LAB_011a06e0:
    FUN_009ed994(&local_208,param_2 + 0x18,param_3);
    local_2ec = local_208;
    if (local_208 == (int ****)&DAT_00000003) {
      uVar5 = 3;
      goto LAB_011a0ab4;
    }
    local_2e4 = local_204;
    local_2e8 = local_1f8;
    local_2dc = local_1f4;
    local_2e0 = local_1fc;
    ppppiVar21 = (int ****)&local_d0;
    local_d0 = local_1f0;
    ppppiStack_cc = local_1ec;
    ppppiStack_c8 = local_1e8;
    local_c4 = local_1e4;
    ppppiStack_c0 = local_1e0;
    ppppiStack_bc = local_1dc;
    ppppiStack_b8 = ppppiStack_1d8;
    FUN_011a11c8(param_2 + 0x18);
    local_2f0 = local_200;
    ppppiVar25 = local_1d4;
    local_1cc = local_1d0;
LAB_011a0b38:
    local_2fc = param_2 + 0xe;
    local_300 = param_2 + 0x29;
    local_2f8 = param_2 + 0x2d;
    if (local_2ec != (int ****)0x2) {
      local_a0 = (int ****)*ppppiVar21;
      ppppiStack_9c = (int ****)ppppiVar21[1];
      ppppiStack_98 = (int ****)ppppiVar21[2];
      local_94 = (int ****)ppppiVar21[3];
      ppppiStack_90 = (int ****)ppppiVar21[4];
      ppppiStack_8c = (int ****)ppppiVar21[5];
      ppppiStack_88 = (int ****)ppppiVar21[6];
    }
    else {
      local_2dc = (int ****)0x80000006;
    }
    ppppiVar24 = (int ****)(uint)(local_2ec != (int ****)0x2);
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_011a1468(local_2fc);
    *(undefined1 *)local_2f8 = 1;
    *(undefined1 *)local_300 = 1;
    local_228 = local_a0;
    ppppiStack_224 = ppppiStack_9c;
    ppppiStack_220 = ppppiStack_98;
    local_21c = local_94;
    ppppiStack_218 = ppppiStack_90;
    ppppiStack_214 = ppppiStack_8c;
    ppppiStack_210 = ppppiStack_88;
    goto LAB_011a03b4;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f7e4:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar17 = param_2 + 4;
    *piVar17 = iVar18 + 0xbc;
    param_3 = (int ****)piVar8[4];
    ppppiVar25 = (int ****)piVar8[5];
    unaff_r9 = (int ****)piVar8[6];
    iVar16 = piVar8[7];
    iVar18 = piVar8[8];
    iVar7 = piVar8[1];
    unaff_r6 = (int ****)piVar8[2];
    ppppiVar28 = (int ****)piVar8[3];
    *piVar12 = *piVar8;
    param_2[6] = iVar7;
    param_2[7] = (int)unaff_r6;
    param_2[8] = (int)ppppiVar28;
    param_2[9] = (int)(param_3 + 8);
    param_2[10] = (int)ppppiVar25;
    param_2[0xb] = (int)unaff_r9;
    param_2[0xc] = iVar16;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    ppppiVar21 = (int ****)piVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar17;
    param_2[0xf] = (int)piVar12;
    param_2[0x10] = (int)ppppiVar21;
LAB_0119fcbc:
    pbVar9 = (byte *)*piVar17;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)pbVar9;
    param_2[0x12] = (int)piVar12;
    param_2[0x13] = (int)ppppiVar21;
    goto LAB_011a03d8;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar17 = (int *)param_2[0xe];
      piVar12 = (int *)param_2[0xf];
      ppppiVar21 = (int ****)param_2[0x10];
      goto LAB_0119fcbc;
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
          FUN_013079f0(&DAT_01c21bcc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bcc);
      }
      pbVar9 = (byte *)param_2[0x11];
    }
LAB_011a03d8:
    bVar1 = *pbVar9;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_2dc = (int ****)0x80000003;
    ppppiVar4 = (int ****)(uint)bVar1;
    local_2ec = unaff_r6;
    local_2f0 = unaff_r9;
    ppppiVar27 = param_3;
LAB_011a03f0:
    local_2e8 = ppppiVar28;
    local_2e4 = ppppiVar4;
    local_2e0 = ppppiVar21;
    ppppiVar24 = (int ****)0x0;
    goto LAB_011a03f4;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f7a0:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar17 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar18 + 0xbd;
    iVar29 = piVar17[4];
    iVar14 = piVar17[5];
    iVar26 = piVar17[6];
    iVar22 = piVar17[7];
    iVar18 = piVar17[8];
    iVar7 = piVar17[1];
    iVar16 = piVar17[2];
    iVar19 = piVar17[3];
    param_2[5] = *piVar17;
    param_2[6] = iVar7;
    param_2[7] = iVar16;
    param_2[8] = iVar19;
    param_2[9] = iVar29 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    iVar18 = piVar17[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar18;
  case '\b':
    FUN_011a14b4(&local_208,param_2 + 0xe,param_3);
    if (local_208 == (int ****)0x2) {
      *param_1 = 2;
      uVar5 = 8;
      goto LAB_011a0434;
    }
    local_2ec = local_204;
    local_2e4 = local_200;
    local_2e8 = local_1f4;
    local_2dc = local_1f0;
    local_2f0 = local_1fc;
    local_2e0 = local_1f8;
    ppppiVar21 = (int ****)&local_2c8;
    local_2c8 = local_1ec;
    ppppiStack_2c4 = local_1e8;
    ppppiStack_2c0 = local_1e4;
    local_2bc = local_1e0;
    ppppiStack_2b8 = local_1dc;
    ppppiStack_2b4 = ppppiStack_1d8;
    ppppiStack_2b0 = local_1d4;
    ppppiVar24 = local_208;
    if ((char)param_2[0x2d] == '\x03') {
      cVar2 = (char)param_2[0x29];
      bVar30 = cVar2 == '\x03';
      if (bVar30) {
        cVar2 = (char)param_2[0x24];
      }
      if (bVar30 && cVar2 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011a0394;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f8f8:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_2f0 = (int ****)(param_2 + 5);
    *(undefined1 *)(param_2 + 8) = 1;
    piVar17 = param_2 + 4;
    *piVar17 = iVar18 + 0xbe;
    iVar7 = piVar12[4];
    iVar22 = piVar12[5];
    iVar29 = piVar12[6];
    iVar26 = piVar12[7];
    iVar18 = piVar12[8];
    iVar16 = piVar12[1];
    iVar19 = piVar12[2];
    iVar14 = piVar12[3];
    *local_2f0 = (int ***)*piVar12;
    param_2[6] = iVar16;
    param_2[7] = iVar19;
    param_2[8] = iVar14;
    param_2[9] = iVar7 + 0x20;
    param_2[10] = iVar22;
    param_2[0xb] = iVar29;
    param_2[0xc] = iVar26;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    iVar18 = piVar12[4];
    *(undefined1 *)(param_2 + 0x33) = 0;
    param_2[0x30] = (int)piVar17;
    param_2[0x31] = (int)local_2f0;
    param_2[0x32] = iVar18;
LAB_011a0034:
    pcVar10 = (char *)*piVar17;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    param_2[0x2a] = (int)pcVar10;
    param_2[0x2b] = (int)local_2f0;
    param_2[0x2c] = iVar18;
LAB_011a0050:
    param_2[0x2d] = (int)local_2f0;
    if (*pcVar10 != '\x02') {
      param_2[0x26] = (int)pcVar10;
      *(undefined1 *)(param_2 + 0x29) = 0;
      param_2[0x27] = (int)local_2f0;
      param_2[0x28] = param_2[0x2c];
      goto switchD_0119fe44_caseD_3;
    }
    local_2dc = (int ****)&DAT_80000000;
    ppppiVar27 = param_3;
    goto LAB_011a01c4;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x33]) {
    case '\0':
      piVar17 = (int *)param_2[0x30];
      local_2f0 = (int ****)param_2[0x31];
      iVar18 = param_2[0x32];
      goto LAB_011a0034;
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
      pcVar10 = (char *)param_2[0x2a];
      local_2f0 = (int ****)param_2[0x2b];
      goto LAB_011a0050;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
switchD_0119fe44_caseD_3:
    FUN_011a15ac(&local_208,param_2 + 0xe,param_3);
    if (local_208 == (int ****)0x2) {
      *(undefined1 *)(param_2 + 0x2e) = 3;
      *(undefined1 *)(param_2 + 0x33) = 3;
      *param_1 = 2;
      uVar5 = 10;
      goto LAB_011a0434;
    }
    local_2e4 = local_200;
    local_2e8 = local_1f4;
    local_2dc = local_1f0;
    local_2e0 = local_1f8;
    local_80 = local_1ec;
    ppppiStack_7c = local_1e8;
    ppppiStack_78 = local_1e4;
    local_74 = local_1e0;
    ppppiStack_70 = local_1dc;
    ppppiStack_6c = ppppiStack_1d8;
    ppppiStack_68 = local_1d4;
    if (((char)param_2[0x29] == '\x03') && ((char)param_2[0x24] == '\x03')) {
      FUN_01192a14(param_2 + 0xe);
    }
    if (((uint)local_208 & 1) != 0) {
      local_5c = local_200;
      local_60 = local_204;
      local_4c = local_1f0;
      local_50 = local_1f4;
      local_48 = local_80;
      ppppiStack_44 = ppppiStack_7c;
      ppppiStack_40 = ppppiStack_78;
      local_3c = local_74;
      ppppiStack_38 = ppppiStack_70;
      ppppiStack_34 = ppppiStack_6c;
      ppppiStack_30 = ppppiStack_68;
      local_2dc = (int ****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x2d] + 0x18));
    }
    local_2f0 = local_1fc;
    ppppiVar27 = local_208;
LAB_011a01c4:
    local_2ec = ppppiStack_6c;
    local_2a8 = local_80;
    ppppiStack_2a4 = ppppiStack_7c;
    ppppiStack_2a0 = ppppiStack_78;
    local_29c = local_74;
    ppppiStack_298 = ppppiStack_70;
    ppppiStack_294 = ppppiStack_6c;
    ppppiStack_290 = ppppiStack_68;
    *(undefined1 *)(param_2 + 0x2e) = 1;
    *(undefined1 *)(param_2 + 0x33) = 1;
    FUN_00a9039c(param_2 + 0xe);
    ppppiVar24 = (int ****)0x0;
    local_228 = local_2a8;
    ppppiStack_224 = ppppiStack_2a4;
    ppppiStack_220 = ppppiStack_2a0;
    local_21c = local_29c;
    ppppiStack_218 = ppppiStack_298;
    ppppiStack_214 = ppppiStack_294;
    ppppiStack_210 = ppppiStack_290;
    goto LAB_011a03f4;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f75c:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar17 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar18;
    iVar29 = piVar17[4];
    iVar14 = piVar17[5];
    iVar26 = piVar17[6];
    iVar22 = piVar17[7];
    iVar18 = piVar17[8];
    iVar7 = piVar17[1];
    iVar16 = piVar17[2];
    iVar19 = piVar17[3];
    param_2[5] = *piVar17;
    param_2[6] = iVar7;
    param_2[7] = iVar16;
    param_2[8] = iVar19;
    param_2[9] = iVar29 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    iVar18 = piVar17[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar18;
  case '\f':
    FUN_011a1c14(&local_208,param_2 + 0xe,param_3);
    if (local_208 == (int ****)0x2) {
      *param_1 = 2;
      uVar5 = 0xc;
      goto LAB_011a0434;
    }
    local_2ec = local_204;
    local_2e4 = local_200;
    local_2e8 = local_1f4;
    local_2dc = local_1f0;
    local_2f0 = local_1fc;
    local_2e0 = local_1f8;
    ppppiVar21 = (int ****)&local_288;
    local_288 = local_1ec;
    ppppiStack_284 = local_1e8;
    ppppiStack_280 = local_1e4;
    local_27c = local_1e0;
    ppppiStack_278 = local_1dc;
    ppppiStack_274 = ppppiStack_1d8;
    ppppiStack_270 = local_1d4;
    ppppiVar24 = local_208;
    if ((char)param_2[0x2d] == '\x03') {
      cVar2 = (char)param_2[0x29];
      bVar30 = cVar2 == '\x03';
      if (bVar30) {
        cVar2 = (char)param_2[0x24];
      }
      if (bVar30 && cVar2 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011a0394;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f8b0:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar17 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar18 + 0x48;
    iVar29 = piVar17[4];
    iVar14 = piVar17[5];
    iVar26 = piVar17[6];
    iVar22 = piVar17[7];
    iVar18 = piVar17[8];
    iVar7 = piVar17[1];
    iVar16 = piVar17[2];
    iVar19 = piVar17[3];
    param_2[5] = *piVar17;
    param_2[6] = iVar7;
    param_2[7] = iVar16;
    param_2[8] = iVar19;
    param_2[9] = iVar29 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    iVar18 = piVar17[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar18;
  case '\x0e':
    FUN_011a1c14(&local_208,param_2 + 0xe,param_3);
    if (local_208 == (int ****)0x2) {
      *param_1 = 2;
      uVar5 = 0xe;
      goto LAB_011a0434;
    }
    local_2ec = local_204;
    local_2e4 = local_200;
    local_2e8 = local_1f4;
    local_2dc = local_1f0;
    local_2f0 = local_1fc;
    local_2e0 = local_1f8;
    ppppiVar21 = (int ****)&local_268;
    local_268 = local_1ec;
    ppppiStack_264 = local_1e8;
    ppppiStack_260 = local_1e4;
    local_25c = local_1e0;
    ppppiStack_258 = local_1dc;
    ppppiStack_254 = ppppiStack_1d8;
    ppppiStack_250 = local_1d4;
    ppppiVar24 = local_208;
    if ((char)param_2[0x2d] == '\x03') {
      cVar2 = (char)param_2[0x29];
      bVar30 = cVar2 == '\x03';
      if (bVar30) {
        cVar2 = (char)param_2[0x24];
      }
      if (bVar30 && cVar2 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011a0394;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar18 = param_2[4];
      ppppiVar27 = (int ****)param_2[5];
LAB_0119f978:
      param_2[6] = iVar18;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)ppppiVar27;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d94);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d94);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d94);
      }
      iVar18 = param_2[6];
    }
    piVar17 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar18 + 0x90;
    iVar29 = piVar17[4];
    iVar14 = piVar17[5];
    iVar26 = piVar17[6];
    iVar22 = piVar17[7];
    iVar18 = piVar17[8];
    iVar7 = piVar17[1];
    iVar16 = piVar17[2];
    iVar19 = piVar17[3];
    param_2[5] = *piVar17;
    param_2[6] = iVar7;
    param_2[7] = iVar16;
    param_2[8] = iVar19;
    param_2[9] = iVar29 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar22;
    *(char *)(param_2 + 0xd) = (char)iVar18;
    iVar18 = piVar17[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar18;
  }
  FUN_011a2318(&local_208,param_2 + 0xe,param_3);
  if (local_208 == (int ****)0x2) {
    *param_1 = 2;
    uVar5 = 0x10;
  }
  else {
    local_2ec = local_204;
    local_2e4 = local_200;
    local_2e8 = local_1f4;
    local_2dc = local_1f0;
    local_2f0 = local_1fc;
    local_2e0 = local_1f8;
    ppppiVar21 = (int ****)&local_248;
    local_248 = local_1ec;
    ppppiStack_244 = local_1e8;
    ppppiStack_240 = local_1e4;
    local_23c = local_1e0;
    ppppiStack_238 = local_1dc;
    ppppiStack_234 = ppppiStack_1d8;
    ppppiStack_230 = local_1d4;
    ppppiVar24 = local_208;
    if ((char)param_2[0x2d] == '\x03') {
      cVar2 = (char)param_2[0x29];
      bVar30 = cVar2 == '\x03';
      if (bVar30) {
        cVar2 = (char)param_2[0x24];
      }
      if (bVar30 && cVar2 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
LAB_011a0394:
    local_228 = (int ****)*ppppiVar21;
    ppppiStack_224 = (int ****)ppppiVar21[1];
    ppppiStack_220 = (int ****)ppppiVar21[2];
    local_21c = (int ****)ppppiVar21[3];
    ppppiStack_218 = (int ****)ppppiVar21[4];
    ppppiStack_214 = (int ****)ppppiVar21[5];
    ppppiStack_210 = (int ****)ppppiVar21[6];
    ppppiVar25 = local_1d0;
LAB_011a03b4:
    ppppiVar27 = local_1cc;
LAB_011a03f4:
    param_1[5] = local_2e8;
    param_1[6] = local_2dc;
    *param_1 = ppppiVar24;
    param_1[3] = local_2f0;
    param_1[1] = local_2ec;
    param_1[2] = local_2e4;
    param_1[4] = local_2e0;
    param_1[7] = local_228;
    param_1[8] = ppppiStack_224;
    param_1[9] = ppppiStack_220;
    param_1[10] = local_21c;
    param_1[0xb] = ppppiStack_218;
    param_1[0xc] = ppppiStack_214;
    param_1[0xd] = ppppiStack_210;
    uVar5 = 1;
    param_1[0xe] = ppppiVar25;
    param_1[0xf] = ppppiVar27;
  }
LAB_011a0434:
  *(undefined1 *)(param_2 + 3) = uVar5;
  return;
}

