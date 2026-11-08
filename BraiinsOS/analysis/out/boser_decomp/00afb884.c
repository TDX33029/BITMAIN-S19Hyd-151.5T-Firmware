// FUN_00afb884 @ 00afb884 size=18836 calls_out=51 calls_in=0
// strings: fanControl | autotuning | management | groups | hashChainGlobal | performanceScaling

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00afb884(uint *param_1,int *param_2,int ****param_3)

{
  char cVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  undefined1 uVar8;
  byte bVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int ****extraout_r1;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined *puVar16;
  int *unaff_r5;
  int iVar17;
  uint uVar18;
  int unaff_r6;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int ****ppppiVar24;
  int iVar25;
  int iVar26;
  int ****ppppiVar27;
  int iVar28;
  undefined4 uVar29;
  int ****ppppiVar30;
  int iVar31;
  bool bVar32;
  undefined1 *local_418;
  int *local_414;
  int *local_410;
  int *local_40c;
  int *local_408;
  int *local_404;
  int *local_400;
  int *local_3fc;
  int *local_3f8;
  int *local_3ec;
  int ****local_3e8;
  int ****local_3e4;
  int ****local_3e0;
  int ****local_3dc;
  int ****local_3d4;
  int ****local_388;
  int ****ppppiStack_384;
  int ****ppppiStack_380;
  int ****local_37c;
  int ****ppppiStack_378;
  int ****ppppiStack_374;
  int ****ppppiStack_370;
  int ****local_348;
  int ****ppppiStack_344;
  int ****ppppiStack_340;
  int ****local_33c;
  int ****ppppiStack_338;
  int ****ppppiStack_334;
  int ****ppppiStack_330;
  int local_328;
  int local_324;
  int local_320;
  int ****local_2e8;
  int ****ppppiStack_2e4;
  int ****ppppiStack_2e0;
  int ****local_2dc;
  int ****local_2d8;
  int ****ppppiStack_2d4;
  int ****ppppiStack_2d0;
  int ****ppppiStack_2cc;
  int ****ppppiStack_2c8;
  int ****local_2c4;
  int ****ppppiStack_2c0;
  int ****ppppiStack_2bc;
  int ****ppppiStack_2b8;
  int ****ppppiStack_2b4;
  int local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int ****local_2a0;
  int ****ppppiStack_29c;
  int ****ppppiStack_298;
  int ****local_294;
  int ****ppppiStack_290;
  int ****ppppiStack_28c;
  int ****ppppiStack_288;
  int ****local_280;
  int ****local_27c;
  int ****local_278;
  int ****local_270;
  int ****ppppiStack_26c;
  int ****ppppiStack_268;
  int ****local_264;
  int ****local_260;
  int ****local_25c;
  int ****ppppiStack_258;
  int ****ppppiStack_254;
  int ****local_250;
  int ****ppppiStack_24c;
  int ****ppppiStack_248;
  int ****ppppiStack_244;
  int ****local_238;
  int ****local_234;
  int ****local_230;
  int ****local_22c;
  int ****local_228;
  int ****local_224;
  int ****local_220;
  int ****local_21c;
  int ****local_218;
  int ****local_214;
  int ****local_210;
  int ****ppppiStack_20c;
  int ****ppppiStack_208;
  int ****local_204;
  int ****local_200;
  int ****local_1fc;
  int local_1a8;
  int local_188;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  undefined1 local_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 local_88;
  undefined1 local_84;
  int ****local_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int ****local_74;
  int ****ppppiStack_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****local_60;
  int ****ppppiStack_5c;
  int ****ppppiStack_58;
  int ****local_54;
  int ****ppppiStack_50;
  int ****ppppiStack_4c;
  int ****ppppiStack_48;
  int ****local_40;
  int ****ppppiStack_3c;
  int ****ppppiStack_38;
  int ****local_34;
  int ****ppppiStack_30;
  int ****ppppiStack_2c;
  int ****ppppiStack_28;
  
  local_3dc = (int ****)((uint)&local_270 | 4);
  ppppiVar30 = (int ****)&local_22c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar17 = param_2[1];
    param_2[2] = iVar17;
    iVar19 = *param_2;
    iVar15 = *(int *)(iVar17 + 0x10);
    switch(*(int *)(iVar15 + 0x40)) {
    case 10:
      iVar20 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"fanControl",10);
      if (iVar20 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afba9c;
      }
      iVar20 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"autotuning",10);
      if (iVar20 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbbf4;
      }
      iVar15 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"management",10);
      if (iVar15 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbd10;
      }
      break;
    case 0xb:
      iVar15 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"tempControl",0xb);
      if (iVar15 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbc80;
      }
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
      break;
    case 0xf:
      iVar15 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"hashChainGlobal",0xf);
      if (iVar15 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbcc8;
      }
      break;
    case 0x12:
      iVar15 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"performanceScaling",0x12);
      if (iVar15 == 0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbae4;
      }
      break;
    default:
      if ((*(int *)(iVar15 + 0x40) == 6) &&
         (iVar15 = thunk_FUN_01bed842(*(int *)(iVar15 + 0x3c) + 8,"groups",6), iVar15 == 0)) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar17;
        goto LAB_00afbd58;
      }
    }
    param_2[4] = iVar19;
    param_2[5] = iVar17;
    *(undefined1 *)(param_2 + 7) = 0;
LAB_00afdaa8:
    param_2[6] = iVar17;
    bVar32 = false;
    if ((*(int *)(*(int *)(iVar17 + 0x10) + 0x40) == 10) &&
       (iVar15 = thunk_FUN_01bed842(*(int *)(*(int *)(iVar17 + 0x10) + 0x3c) + 8,"hashChains",10),
       iVar15 == 0)) {
      param_2[8] = iVar19;
      param_2[9] = iVar17;
      *(undefined1 *)(param_2 + 0x1d) = 0;
LAB_00afdb70:
      *(undefined1 *)(param_2 + 0x1c) = 0;
      param_2[10] = iVar19;
      param_2[0xb] = iVar17;
LAB_00afdb88:
      param_2[0xc] = iVar19;
      *(undefined1 *)(param_2 + 0x1b) = 0;
LAB_00afdb9c:
      piVar10 = (int *)(iVar19 + 0x38);
      param_2[0xd] = (int)piVar10;
      *(undefined1 *)(param_2 + 0x1a) = 0;
LAB_00afdbb8:
      iVar19 = *piVar10;
      *(undefined1 *)(param_2 + 0x19) = 0;
      iVar19 = iVar19 + 8;
      param_2[0xe] = iVar19;
LAB_00afdbd0:
      param_2[0xf] = iVar19;
      *(undefined1 *)(param_2 + 0x18) = 0;
LAB_00afdbe8:
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 1;
      param_2[0x16] = 1;
      param_2[0x10] = iVar19 + 4;
      param_2[0x11] = 0;
switchD_00aff594_caseD_3:
      local_3dc = (int ****)(param_2 + 0x1b);
      local_3e0 = (int ****)(param_2 + 0x1c);
      local_3e8 = (int ****)(param_2 + 8);
      local_400 = param_2 + 0x1d;
      bVar9 = FUN_019f9bc4(param_2 + 0x10,param_3);
      if (bVar9 == 2) {
        *(undefined1 *)(param_2 + 0x18) = 3;
        *(undefined1 *)(param_2 + 0x19) = 3;
        *(undefined1 *)(param_2 + 0x1a) = 3;
        *(undefined1 *)local_3dc = 3;
      }
      else {
        FUN_0193c3cc(param_2 + 0x10);
        if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
        }
        iVar19 = param_2[0xf];
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(undefined1 *)(param_2 + 0x19) = 1;
        *(undefined1 *)(param_2 + 0x1a) = 1;
        FUN_00b56184(&local_238,*(undefined4 *)(iVar19 + 0x1c),*(undefined4 *)(iVar19 + 0x20));
        FUN_019f8c54(iVar19 + 4,1);
        ppppiVar27 = local_230;
        ppppiVar24 = local_234;
        ppppiVar30 = local_238;
        *(undefined1 *)local_3dc = 1;
        if (local_238 != (int ****)&DAT_80000000) {
          FUN_00bba254(param_2 + 0xc);
          *(undefined1 *)(param_2 + 0x1d) = 1;
          local_3e0 = (int ****)(param_2 + 0xb);
          *(undefined1 *)(param_2 + 0x1c) = 1;
          piVar10 = (int *)param_2[6];
          param_2[8] = (int)ppppiVar30;
          param_2[9] = (int)ppppiVar24;
          param_2[10] = (int)ppppiVar27;
          iVar15 = piVar10[5];
          iVar17 = piVar10[4];
          iVar26 = piVar10[6];
          iVar25 = piVar10[7];
          iVar19 = piVar10[8];
          iVar20 = piVar10[1];
          unaff_r6 = piVar10[2];
          iVar21 = piVar10[3];
          *local_3e0 = (int ***)*piVar10;
          param_2[0xc] = iVar20;
          param_2[0xd] = unaff_r6;
          param_2[0xe] = iVar21;
          param_2[0xf] = iVar17 + 0x20;
          param_2[0x10] = iVar15;
          *(char *)(param_2 + 0x13) = (char)iVar19;
          param_2[0x11] = iVar26;
          param_2[0x12] = iVar25;
          local_3dc = (int ****)piVar10[4];
          *(undefined1 *)(param_2 + 0x2f) = 0;
          param_2[0x2c] = (int)local_3e8;
          param_2[0x2d] = (int)local_3e0;
          param_2[0x2e] = (int)local_3dc;
          goto LAB_00afe128;
        }
      }
      uVar8 = 3;
      *(undefined1 *)local_3e0 = 3;
      goto LAB_00aff054;
    }
    ppppiVar24 = (int ****)0x80000007;
LAB_00afdae4:
    ppppiVar7 = ppppiStack_48;
    ppppiVar6 = ppppiStack_4c;
    ppppiVar5 = ppppiStack_50;
    ppppiVar4 = local_54;
    ppppiVar3 = ppppiStack_58;
    ppppiVar2 = ppppiStack_5c;
    ppppiVar27 = local_60;
    local_3ec = param_2 + 7;
    local_3f8 = param_2 + 4;
    uVar18 = 1;
    *(undefined1 *)local_3ec = 1;
    FUN_00b01c74(local_3f8);
    if ((bVar32) || (uVar18 = 0, ppppiVar24 != (int ****)0x80000007)) {
      local_388 = ppppiVar27;
      ppppiStack_384 = ppppiVar2;
      ppppiStack_380 = ppppiVar3;
      local_37c = ppppiVar4;
      ppppiStack_378 = ppppiVar5;
      ppppiStack_374 = ppppiVar6;
      ppppiStack_370 = ppppiVar7;
      local_220 = ppppiVar24;
      goto LAB_00afd99c;
    }
    local_220 = (int ****)0x80000007;
    local_3d4 = extraout_r1;
    local_234 = ppppiVar30;
    goto LAB_00afd9a0;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c10870);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c10870);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbcc8:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar10 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x34;
    piVar22 = param_2 + 5;
    iVar17 = piVar12[4];
    iVar28 = piVar12[5];
    iVar26 = piVar12[6];
    iVar25 = piVar12[7];
    iVar19 = piVar12[8];
    iVar15 = piVar12[1];
    iVar20 = piVar12[2];
    iVar21 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar15;
    param_2[7] = iVar20;
    param_2[8] = iVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = iVar28;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
    local_3d4 = param_3;
LAB_00afca9c:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afcabc:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afcadc:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afcaec:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe4b4_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x11];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar10 = (int *)(param_2[0x17] + 0x18);
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = (int)piVar10;
      param_2[0x32] = (int)piVar10;
      param_2[0x33] = iVar19;
      param_2[0x34] = param_2[0x12];
LAB_00afcbbc:
      param_2[0x35] = iVar19;
      if (*piVar10 != 2 || piVar10[1] != 0) {
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2e] = (int)piVar10;
        param_2[0x2f] = iVar19;
        param_2[0x30] = param_2[0x34];
LAB_00afcbf8:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = iVar19;
        param_2[0x2b] = (int)piVar10;
LAB_00afcc0c:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar9 = 1;
        param_2[0x19] = iVar19;
        param_2[0x1a] = (int)piVar10;
LAB_00afcc24:
        piVar22 = param_2 + 0x16;
        *piVar22 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        ppppiVar24 = (int ****)&local_238;
        FUN_007d8394(ppppiVar24,piVar22,iVar19,piVar10);
        if (local_238 == (int ****)0x2) {
          if ((bVar9 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1b) = 0;
            local_2b0 = *piVar22;
            iStack_2ac = param_2[0x17];
            iStack_2a8 = param_2[0x18];
            FUN_009ec520(&local_238);
            local_2e8 = local_238;
            ppppiStack_2e4 = local_234;
            ppppiStack_2e0 = local_230;
            local_2dc = local_22c;
            local_2d8 = local_228;
            ppppiStack_2d4 = local_224;
            ppppiStack_2d0 = local_220;
            ppppiStack_2cc = local_21c;
            ppppiStack_2c8 = local_218;
            local_2c4 = local_214;
            ppppiStack_2c0 = local_210;
            ppppiStack_2bc = ppppiStack_20c;
            ppppiStack_2b8 = ppppiStack_208;
            ppppiStack_2b4 = local_204;
            param_2[0x1c] = (int)local_238;
            param_2[0x1d] = (int)local_234;
            param_2[0x1e] = (int)local_230;
            param_2[0x1f] = (int)local_22c;
            param_2[0x20] = (int)local_228;
            param_2[0x21] = (int)local_224;
            param_2[0x22] = (int)local_220;
            param_2[0x23] = (int)local_21c;
            param_2[0x24] = (int)local_218;
            param_2[0x25] = (int)local_214;
            param_2[0x26] = (int)local_210;
            param_2[0x27] = (int)ppppiStack_20c;
            param_2[0x28] = (int)ppppiStack_208;
            param_2[0x29] = (int)local_204;
            goto switchD_00aff1ec_caseD_3;
          }
          uVar18 = param_2[0x18];
          if (0x2492492 < uVar18) {
            uVar29 = 0;
LAB_00afdffc:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar29,ppppiVar24);
          }
          ppppiVar24 = (int ****)(uVar18 * 0x38);
          if (ppppiVar24 == (int ****)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar29 = 8;
            iVar19 = FUN_01298504(ppppiVar24,8);
            if (iVar19 == 0) goto LAB_00afdffc;
          }
          piVar22 = (int *)param_2[0x17];
          param_2[0x1d] = iVar19;
          piVar10 = piVar22 + param_2[0x18] * 2;
          param_2[0x1c] = uVar18;
          param_2[0x1e] = 0;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x24] = (int)piVar22;
          param_2[0x25] = (int)piVar22;
          param_2[0x26] = param_2[0x16];
          param_2[0x27] = (int)piVar10;
          while (piVar22 != piVar10) {
            iVar19 = *piVar22;
            iVar17 = piVar22[1];
            param_2[0x25] = (int)(piVar22 + 2);
            param_2[0x22] = iVar19;
            param_2[0x1f] = (int)(param_2 + 0x1c);
            param_2[0x20] = iVar19;
            param_2[0x21] = iVar17;
            param_2[0x23] = iVar17;
LAB_00b010d8:
            (**(code **)(iVar17 + 0xc))(&local_238,iVar19,param_3);
            ppppiVar6 = local_1fc;
            ppppiVar5 = local_200;
            ppppiVar24 = local_220;
            ppppiVar4 = local_224;
            ppppiVar3 = local_228;
            ppppiVar2 = local_22c;
            local_3d4 = local_230;
            ppppiVar27 = local_238;
            if (local_238 == (int ****)0x2) {
              uVar8 = 4;
              goto LAB_00b012b8;
            }
            local_3e8 = local_224;
            local_3e0 = local_228;
            local_3e4 = local_22c;
            local_60 = local_21c;
            ppppiStack_5c = local_218;
            ppppiStack_58 = local_214;
            local_54 = local_210;
            ppppiStack_50 = ppppiStack_20c;
            ppppiStack_4c = ppppiStack_208;
            ppppiStack_48 = local_204;
            FUN_01139b38(param_2[0x22],param_2[0x23]);
            if (((uint)ppppiVar27 & 1) != 0) {
              local_40 = local_60;
              ppppiStack_3c = ppppiStack_5c;
              ppppiStack_38 = ppppiStack_58;
              local_34 = local_54;
              ppppiStack_30 = ppppiStack_50;
              ppppiStack_2c = ppppiStack_4c;
              ppppiStack_28 = ppppiStack_48;
              FUN_009495dc(param_2 + 0x24);
              FUN_007bc140(param_2 + 0x1c);
              param_3 = local_3d4;
              goto LAB_00afd380;
            }
            *local_3dc = (int ***)ppppiVar2;
            local_3dc[1] = (int ***)ppppiVar3;
            local_264 = ppppiVar4;
            local_270 = local_3d4;
            local_260 = ppppiVar24;
            local_25c = local_60;
            ppppiStack_258 = ppppiStack_5c;
            ppppiStack_254 = ppppiStack_58;
            local_250 = local_54;
            ppppiStack_24c = ppppiStack_50;
            ppppiStack_248 = ppppiStack_4c;
            ppppiStack_244 = ppppiStack_48;
            piVar10 = (int *)param_2[0x1f];
            local_3dc[0xb] = (int ***)ppppiVar5;
            local_3dc[0xc] = (int ***)ppppiVar6;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = local_3d4;
            puVar11[1] = ppppiVar2;
            puVar11[2] = ppppiVar3;
            puVar11[3] = ppppiVar4;
            puVar11[4] = ppppiVar24;
            puVar11[5] = local_60;
            puVar11[6] = ppppiStack_5c;
            puVar11[7] = ppppiStack_58;
            puVar11[8] = local_54;
            puVar11[9] = ppppiStack_50;
            puVar11[10] = ppppiStack_4c;
            puVar11[0xb] = ppppiStack_48;
            puVar11[0xc] = ppppiVar5;
            puVar11[0xd] = ppppiVar6;
            piVar10[2] = iVar19 + 1;
            piVar10 = (int *)param_2[0x27];
            piVar22 = (int *)param_2[0x25];
          }
          param_2[0x20] = 0;
          FUN_009495dc(param_2 + 0x24);
          local_280 = (int ****)param_2[0x1c];
          local_27c = (int ****)param_2[0x1d];
          local_278 = (int ****)param_2[0x1e];
          goto LAB_00b01258;
        }
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_40 = local_220;
        ppppiStack_3c = local_21c;
        ppppiStack_38 = local_218;
        local_34 = local_214;
        ppppiStack_30 = local_210;
        ppppiStack_2c = ppppiStack_20c;
        ppppiStack_28 = ppppiStack_208;
        ppppiVar24 = local_224;
        goto LAB_00afd380;
      }
      ppppiVar24 = (int ****)&DAT_80000000;
      goto LAB_00afd464;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00afcb38:
    local_3ec = param_2 + 0x15;
    local_3f8 = param_2 + 0x3b;
    *(undefined1 *)local_3f8 = 3;
    *(undefined1 *)local_3ec = uVar8;
    *param_1 = 2;
    uVar8 = 4;
    goto LAB_00afd9f0;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afca9c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afcabc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afcadc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afcaec;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe4b4_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x36]) {
    case '\0':
      piVar10 = (int *)param_2[0x32];
      iVar19 = param_2[0x33];
      goto LAB_00afcbbc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      piVar10 = (int *)param_2[0x2e];
      iVar19 = param_2[0x2f];
      goto LAB_00afcbf8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10880);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10880);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2c]) {
    case '\0':
      iVar19 = param_2[0x2a];
      piVar10 = (int *)param_2[0x2b];
      goto LAB_00afcc0c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      iVar19 = param_2[0x19];
      piVar10 = (int *)param_2[0x1a];
      bVar9 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00afcc24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x22];
      iVar17 = param_2[0x23];
      goto LAB_00b010d8;
    }
switchD_00aff1ec_caseD_3:
    FUN_009ecbe0(&local_238,param_2 + 0x1c,param_3);
    ppppiVar24 = local_224;
    ppppiVar2 = local_234;
    ppppiVar27 = local_238;
    if (local_238 == (int ****)&DAT_00000003) {
      uVar8 = 3;
LAB_00b012b8:
      local_40c = param_2 + 0x36;
      local_410 = param_2 + 0x31;
      local_414 = param_2 + 0x2c;
      local_418 = (undefined1 *)((int)param_2 + 0x6d);
      *local_418 = uVar8;
      *(undefined1 *)local_410 = 3;
      *(undefined1 *)local_414 = 3;
      *(undefined1 *)local_40c = 3;
      uVar8 = 4;
      goto LAB_00afcb38;
    }
    ppppiVar30 = (int ****)&local_2a0;
    local_3d4 = local_234;
    local_3e8 = local_228;
    local_3e0 = local_22c;
    local_3e4 = local_230;
    local_2a0 = local_220;
    ppppiStack_29c = local_21c;
    ppppiStack_298 = local_218;
    local_294 = local_214;
    ppppiStack_290 = local_210;
    ppppiStack_28c = ppppiStack_20c;
    ppppiStack_288 = ppppiStack_208;
    FUN_011928d4(param_2 + 0x1c);
    if (ppppiVar27 == (int ****)0x2) {
      local_280 = ppppiVar2;
      local_27c = local_3e4;
      local_278 = local_3e0;
LAB_00b01258:
      FUN_006cac18(&local_238,&local_280);
      local_3d4 = local_238;
      local_3e4 = local_234;
      local_3e0 = local_230;
      local_3e8 = local_22c;
      bVar32 = false;
      local_40 = local_224;
      ppppiStack_3c = local_220;
      ppppiStack_38 = local_21c;
      local_34 = local_218;
      ppppiStack_30 = local_214;
      ppppiStack_2c = local_210;
      ppppiStack_28 = ppppiStack_20c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      ppppiVar24 = local_228;
    }
    else {
      ppppiVar30 = (int ****)&local_294;
      local_40 = local_2a0;
      ppppiStack_3c = ppppiStack_29c;
      ppppiStack_38 = ppppiStack_298;
      local_34 = local_294;
      ppppiStack_30 = ppppiStack_290;
      ppppiStack_2c = ppppiStack_28c;
      ppppiStack_28 = ppppiStack_288;
LAB_00afd380:
      local_404 = param_2 + 0x16;
      if ((char)param_2[0x1b] != '\0') {
        FUN_00b7d620(local_404);
      }
      bVar32 = true;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    ppppiStack_330 = ppppiStack_28;
    ppppiStack_334 = ppppiStack_2c;
    ppppiStack_338 = ppppiStack_30;
    local_33c = local_34;
    ppppiStack_340 = ppppiStack_38;
    ppppiStack_344 = ppppiStack_3c;
    local_348 = local_40;
    local_404 = param_2 + 0x16;
    local_410 = param_2 + 0x31;
    local_414 = param_2 + 0x2c;
    local_418 = (undefined1 *)((int)param_2 + 0x6d);
    *local_418 = 1;
    FUN_01192a14(local_404);
    *(undefined1 *)local_410 = 1;
    *(undefined1 *)local_414 = 1;
    if (bVar32) {
      ppppiVar24 = (int ****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x35] + 0x18));
    }
LAB_00afd464:
    local_3ec = param_2 + 0x15;
    local_400 = param_2 + 0xe;
    *(undefined1 *)(param_2 + 0x36) = 1;
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)local_3ec = 1;
    FUN_00b01bdc(local_400);
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbc80:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar10 = param_2 + 4;
    *piVar10 = iVar19 + 0x3c;
    piVar22 = param_2 + 5;
    iVar26 = piVar12[4];
    iVar25 = piVar12[5];
    iVar21 = piVar12[6];
    iVar28 = piVar12[7];
    iVar19 = piVar12[8];
    iVar17 = piVar12[1];
    iVar15 = piVar12[2];
    iVar20 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar17;
    param_2[7] = iVar15;
    param_2[8] = iVar20;
    param_2[10] = iVar25;
    param_2[9] = iVar26 + 0x20;
    param_2[0xb] = iVar21;
    param_2[0xc] = iVar28;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
LAB_00afc800:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afc81c:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afc83c:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afc84c:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe544_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar19;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar19;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00afc3f0_caseD_4;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00afc90c:
    *(undefined1 *)(param_2 + 0x15) = uVar8;
    *(undefined1 *)(param_2 + 0x3b) = 3;
LAB_00afc918:
    *param_1 = 2;
    uVar8 = 6;
    goto LAB_00afd9f0;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afc800;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afc81c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afc83c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afc84c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe544_caseD_3;
    }
switchD_00afc3f0_caseD_4:
    FUN_00af0cac(&local_238,param_2 + 0x16,param_3);
    uVar8 = 4;
    if (local_238 == (int ****)0x2) goto LAB_00afc90c;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar32 = cVar1 == '\x03';
      if (bVar32) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar32 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_00b01bdc(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_238 == (int ****)0x2) goto LAB_00afc918;
LAB_00afc994:
    local_3e8 = local_224;
    local_3e0 = local_228;
    local_3e4 = local_22c;
    local_388 = local_21c;
    ppppiStack_384 = local_218;
    ppppiStack_380 = local_214;
    local_37c = local_210;
    ppppiStack_378 = ppppiStack_20c;
    ppppiStack_374 = ppppiStack_208;
    ppppiStack_370 = local_204;
    uVar18 = (uint)local_238 & 1;
    local_3d4 = local_230;
    local_3dc = local_200;
    param_3 = local_1fc;
    goto LAB_00afd9a0;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afba9c:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar10 = param_2 + 4;
    *piVar10 = iVar19 + 0x40;
    piVar22 = param_2 + 5;
    iVar26 = piVar12[4];
    iVar25 = piVar12[5];
    iVar21 = piVar12[6];
    iVar28 = piVar12[7];
    iVar19 = piVar12[8];
    iVar17 = piVar12[1];
    iVar15 = piVar12[2];
    iVar20 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar17;
    param_2[7] = iVar15;
    param_2[8] = iVar20;
    param_2[9] = iVar26 + 0x20;
    param_2[10] = iVar25;
    param_2[0xb] = iVar21;
    param_2[0xc] = iVar28;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
LAB_00afbf00:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afbf1c:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afbf3c:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afbf4c:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe514_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar19;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar19;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00afc3b4_caseD_4;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00afc00c:
    *(undefined1 *)(param_2 + 0x15) = uVar8;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00afc018;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afbf00;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afbf1c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afbf3c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afbf4c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe514_caseD_3;
    }
switchD_00afc3b4_caseD_4:
    FUN_00af15ac(&local_238,param_2 + 0x16,param_3);
    uVar8 = 4;
    if (local_238 == (int ****)0x2) goto LAB_00afc00c;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar32 = cVar1 == '\x03';
      if (bVar32) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar32 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_00b01bdc(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_238 != (int ****)0x2) goto LAB_00afc994;
LAB_00afc018:
    *param_1 = 2;
    uVar8 = 8;
    goto LAB_00afd9f0;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbbf4:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar10 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x44;
    piVar22 = param_2 + 5;
    iVar17 = piVar12[4];
    iVar28 = piVar12[5];
    iVar26 = piVar12[6];
    iVar25 = piVar12[7];
    iVar19 = piVar12[8];
    iVar15 = piVar12[1];
    iVar20 = piVar12[2];
    iVar21 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar15;
    param_2[7] = iVar20;
    param_2[8] = iVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = iVar28;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
    local_3d4 = param_3;
LAB_00afc508:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afc528:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afc548:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afc558:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe420_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x11];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar10 = (int *)(param_2[0x17] + 0x18);
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = (int)piVar10;
      param_2[0x32] = (int)piVar10;
      param_2[0x33] = iVar19;
      param_2[0x34] = param_2[0x12];
LAB_00afc628:
      param_2[0x35] = iVar19;
      if (*piVar10 != 2 || piVar10[1] != 0) {
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2e] = (int)piVar10;
        param_2[0x2f] = iVar19;
        param_2[0x30] = param_2[0x34];
LAB_00afc664:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = iVar19;
        param_2[0x2b] = (int)piVar10;
LAB_00afc678:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar9 = 1;
        param_2[0x19] = iVar19;
        param_2[0x1a] = (int)piVar10;
LAB_00afc690:
        piVar22 = param_2 + 0x16;
        *piVar22 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        ppppiVar24 = (int ****)&local_238;
        FUN_007cbc08(ppppiVar24,piVar22,iVar19,piVar10);
        if (local_238 == (int ****)0x2) {
          if ((bVar9 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1b) = 0;
            local_2b0 = *piVar22;
            iStack_2ac = param_2[0x17];
            iStack_2a8 = param_2[0x18];
            FUN_009ec520(&local_238);
            local_2e8 = local_238;
            ppppiStack_2e4 = local_234;
            ppppiStack_2e0 = local_230;
            local_2dc = local_22c;
            local_2d8 = local_228;
            ppppiStack_2d4 = local_224;
            ppppiStack_2d0 = local_220;
            ppppiStack_2cc = local_21c;
            ppppiStack_2c8 = local_218;
            local_2c4 = local_214;
            ppppiStack_2c0 = local_210;
            ppppiStack_2bc = ppppiStack_20c;
            ppppiStack_2b8 = ppppiStack_208;
            ppppiStack_2b4 = local_204;
            param_2[0x1c] = (int)local_238;
            param_2[0x1d] = (int)local_234;
            param_2[0x1e] = (int)local_230;
            param_2[0x1f] = (int)local_22c;
            param_2[0x20] = (int)local_228;
            param_2[0x21] = (int)local_224;
            param_2[0x22] = (int)local_220;
            param_2[0x23] = (int)local_21c;
            param_2[0x24] = (int)local_218;
            param_2[0x25] = (int)local_214;
            param_2[0x26] = (int)local_210;
            param_2[0x27] = (int)ppppiStack_20c;
            param_2[0x28] = (int)ppppiStack_208;
            param_2[0x29] = (int)local_204;
            goto switchD_00aff188_caseD_3;
          }
          uVar18 = param_2[0x18];
          if (0x2492492 < uVar18) {
            uVar29 = 0;
LAB_00afe054:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar29,ppppiVar24);
          }
          ppppiVar24 = (int ****)(uVar18 * 0x38);
          if (ppppiVar24 == (int ****)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar29 = 8;
            iVar19 = FUN_01298504(ppppiVar24,8);
            if (iVar19 == 0) goto LAB_00afe054;
          }
          piVar22 = (int *)param_2[0x17];
          param_2[0x1d] = iVar19;
          piVar10 = piVar22 + param_2[0x18] * 2;
          param_2[0x1c] = uVar18;
          param_2[0x1e] = 0;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x24] = (int)piVar22;
          param_2[0x25] = (int)piVar22;
          param_2[0x26] = param_2[0x16];
          param_2[0x27] = (int)piVar10;
          while (piVar22 != piVar10) {
            iVar19 = *piVar22;
            iVar17 = piVar22[1];
            param_2[0x25] = (int)(piVar22 + 2);
            param_2[0x22] = iVar19;
            param_2[0x1f] = (int)(param_2 + 0x1c);
            param_2[0x20] = iVar19;
            param_2[0x21] = iVar17;
            param_2[0x23] = iVar17;
LAB_00b01664:
            (**(code **)(iVar17 + 0xc))(&local_238,iVar19,param_3);
            ppppiVar6 = local_1fc;
            ppppiVar5 = local_200;
            ppppiVar24 = local_220;
            ppppiVar4 = local_224;
            ppppiVar3 = local_228;
            ppppiVar2 = local_22c;
            local_3d4 = local_230;
            ppppiVar27 = local_238;
            if (local_238 == (int ****)0x2) {
              uVar8 = 4;
              goto LAB_00b01850;
            }
            local_3e8 = local_224;
            local_3e0 = local_228;
            local_3e4 = local_22c;
            local_60 = local_21c;
            ppppiStack_5c = local_218;
            ppppiStack_58 = local_214;
            local_54 = local_210;
            ppppiStack_50 = ppppiStack_20c;
            ppppiStack_4c = ppppiStack_208;
            ppppiStack_48 = local_204;
            FUN_01139b38(param_2[0x22],param_2[0x23]);
            if (((uint)ppppiVar27 & 1) != 0) {
              local_40 = local_60;
              ppppiStack_3c = ppppiStack_5c;
              ppppiStack_38 = ppppiStack_58;
              local_34 = local_54;
              ppppiStack_30 = ppppiStack_50;
              ppppiStack_2c = ppppiStack_4c;
              ppppiStack_28 = ppppiStack_48;
              FUN_009495dc(param_2 + 0x24);
              FUN_007bc140(param_2 + 0x1c);
              param_3 = local_3d4;
              ppppiVar30 = ppppiVar24;
              goto LAB_00afd638;
            }
            *local_3dc = (int ***)ppppiVar2;
            local_3dc[1] = (int ***)ppppiVar3;
            local_264 = ppppiVar4;
            local_270 = local_3d4;
            local_260 = ppppiVar24;
            local_25c = local_60;
            ppppiStack_258 = ppppiStack_5c;
            ppppiStack_254 = ppppiStack_58;
            local_250 = local_54;
            ppppiStack_24c = ppppiStack_50;
            ppppiStack_248 = ppppiStack_4c;
            ppppiStack_244 = ppppiStack_48;
            piVar10 = (int *)param_2[0x1f];
            local_3dc[0xb] = (int ***)ppppiVar5;
            local_3dc[0xc] = (int ***)ppppiVar6;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = local_3d4;
            puVar11[1] = ppppiVar2;
            puVar11[2] = ppppiVar3;
            puVar11[3] = ppppiVar4;
            puVar11[4] = ppppiVar24;
            puVar11[5] = local_60;
            puVar11[6] = ppppiStack_5c;
            puVar11[7] = ppppiStack_58;
            puVar11[8] = local_54;
            puVar11[9] = ppppiStack_50;
            puVar11[10] = ppppiStack_4c;
            puVar11[0xb] = ppppiStack_48;
            puVar11[0xc] = ppppiVar5;
            puVar11[0xd] = ppppiVar6;
            piVar10[2] = iVar19 + 1;
            piVar10 = (int *)param_2[0x27];
            piVar22 = (int *)param_2[0x25];
          }
          param_2[0x20] = 0;
          FUN_009495dc(param_2 + 0x24);
          local_280 = (int ****)param_2[0x1c];
          local_27c = (int ****)param_2[0x1d];
          local_278 = (int ****)param_2[0x1e];
          goto LAB_00b017f4;
        }
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_40 = local_220;
        ppppiStack_3c = local_21c;
        ppppiStack_38 = local_218;
        local_34 = local_214;
        ppppiStack_30 = local_210;
        ppppiStack_2c = ppppiStack_20c;
        ppppiStack_28 = ppppiStack_208;
        ppppiVar24 = local_224;
        goto LAB_00afd638;
      }
      ppppiVar24 = (int ****)&DAT_80000000;
      goto LAB_00afd8f0;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00afc5a4:
    local_3f8 = param_2 + 0x15;
    local_3fc = param_2 + 0x3b;
    *(undefined1 *)local_3fc = 3;
    *(undefined1 *)local_3f8 = uVar8;
    *param_1 = 2;
    uVar8 = 10;
    goto LAB_00afd9f0;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afc508;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afc528;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afc548;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afc558;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe420_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x36]) {
    case '\0':
      piVar10 = (int *)param_2[0x32];
      iVar19 = param_2[0x33];
      goto LAB_00afc628;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      piVar10 = (int *)param_2[0x2e];
      iVar19 = param_2[0x2f];
      goto LAB_00afc664;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10784);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10784);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2c]) {
    case '\0':
      iVar19 = param_2[0x2a];
      piVar10 = (int *)param_2[0x2b];
      goto LAB_00afc678;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      iVar19 = param_2[0x19];
      piVar10 = (int *)param_2[0x1a];
      bVar9 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00afc690;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x22];
      iVar17 = param_2[0x23];
      goto LAB_00b01664;
    }
switchD_00aff188_caseD_3:
    FUN_009ecbe0(&local_238,param_2 + 0x1c,param_3);
    ppppiVar24 = local_224;
    ppppiVar2 = local_234;
    ppppiVar27 = local_238;
    if (local_238 == (int ****)&DAT_00000003) {
      uVar8 = 3;
LAB_00b01850:
      local_40c = param_2 + 0x36;
      local_410 = param_2 + 0x31;
      local_414 = param_2 + 0x2c;
      local_418 = (undefined1 *)((int)param_2 + 0x6d);
      *local_418 = uVar8;
      *(undefined1 *)local_410 = 3;
      *(undefined1 *)local_414 = 3;
      *(undefined1 *)local_40c = 3;
      uVar8 = 4;
      goto LAB_00afc5a4;
    }
    ppppiVar30 = (int ****)&local_2a0;
    local_3d4 = local_234;
    local_3e8 = local_228;
    local_3e0 = local_22c;
    local_3e4 = local_230;
    local_2a0 = local_220;
    ppppiStack_29c = local_21c;
    ppppiStack_298 = local_218;
    local_294 = local_214;
    ppppiStack_290 = local_210;
    ppppiStack_28c = ppppiStack_20c;
    ppppiStack_288 = ppppiStack_208;
    FUN_011928d4(param_2 + 0x1c);
    if (ppppiVar27 == (int ****)0x2) {
      local_280 = ppppiVar2;
      local_27c = local_3e4;
      local_278 = local_3e0;
LAB_00b017f4:
      FUN_006cac18(&local_238,&local_280);
      local_3d4 = local_238;
      local_3e4 = local_234;
      local_3e0 = local_230;
      local_3e8 = local_22c;
      bVar32 = false;
      local_40 = local_224;
      ppppiStack_3c = local_220;
      ppppiStack_38 = local_21c;
      local_34 = local_218;
      ppppiStack_30 = local_214;
      ppppiStack_2c = local_210;
      ppppiStack_28 = ppppiStack_20c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      ppppiVar24 = local_228;
    }
    else {
      local_40 = local_2a0;
      ppppiStack_3c = ppppiStack_29c;
      ppppiStack_38 = ppppiStack_298;
      local_34 = local_294;
      ppppiStack_30 = ppppiStack_290;
      ppppiStack_2c = ppppiStack_28c;
      ppppiStack_28 = ppppiStack_288;
      ppppiVar30 = (int ****)&local_294;
LAB_00afd638:
      local_408 = param_2 + 0x16;
      if ((char)param_2[0x1b] != '\0') {
        FUN_00b7d620(local_408);
      }
      bVar32 = true;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    ppppiStack_330 = ppppiStack_28;
    ppppiStack_334 = ppppiStack_2c;
    ppppiStack_338 = ppppiStack_30;
    local_33c = local_34;
    ppppiStack_340 = ppppiStack_38;
    ppppiStack_344 = ppppiStack_3c;
    local_348 = local_40;
    local_408 = param_2 + 0x16;
    local_410 = param_2 + 0x31;
    local_414 = param_2 + 0x2c;
    local_418 = (undefined1 *)((int)param_2 + 0x6d);
    *local_418 = 1;
    FUN_01192a14(local_408);
    *(undefined1 *)local_410 = 1;
    *(undefined1 *)local_414 = 1;
    if (bVar32) {
      ppppiVar24 = (int ****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x35] + 0x18));
    }
LAB_00afd8f0:
    local_3f8 = param_2 + 0x15;
    local_404 = param_2 + 0xe;
    *(undefined1 *)(param_2 + 0x36) = 1;
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)local_3f8 = 1;
    FUN_00b01bdc(local_404);
    break;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbae4:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar10 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x48;
    piVar22 = param_2 + 5;
    iVar17 = piVar12[4];
    iVar28 = piVar12[5];
    iVar26 = piVar12[6];
    iVar25 = piVar12[7];
    iVar19 = piVar12[8];
    iVar15 = piVar12[1];
    iVar20 = piVar12[2];
    iVar21 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar15;
    param_2[7] = iVar20;
    param_2[8] = iVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = iVar28;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
    local_3d4 = param_3;
LAB_00afc140:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afc160:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afc180:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afc190:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe5a4_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x11];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar10 = (int *)(param_2[0x17] + 0x18);
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = (int)piVar10;
      param_2[0x32] = (int)piVar10;
      param_2[0x33] = iVar19;
      param_2[0x34] = param_2[0x12];
LAB_00afc260:
      param_2[0x35] = iVar19;
      if (*piVar10 != 2 || piVar10[1] != 0) {
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2e] = (int)piVar10;
        param_2[0x2f] = iVar19;
        param_2[0x30] = param_2[0x34];
LAB_00afc29c:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = iVar19;
        param_2[0x2b] = (int)piVar10;
LAB_00afc2b0:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar9 = 1;
        param_2[0x19] = iVar19;
        param_2[0x1a] = (int)piVar10;
LAB_00afc2c8:
        piVar22 = param_2 + 0x16;
        *piVar22 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        ppppiVar24 = (int ****)&local_238;
        FUN_007c8d90(ppppiVar24,piVar22,iVar19,piVar10);
        if (local_238 == (int ****)0x2) {
          if ((bVar9 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1b) = 0;
            local_2b0 = *piVar22;
            iStack_2ac = param_2[0x17];
            iStack_2a8 = param_2[0x18];
            FUN_009ec520(&local_238);
            local_2e8 = local_238;
            ppppiStack_2e4 = local_234;
            ppppiStack_2e0 = local_230;
            local_2dc = local_22c;
            local_2d8 = local_228;
            ppppiStack_2d4 = local_224;
            ppppiStack_2d0 = local_220;
            ppppiStack_2cc = local_21c;
            ppppiStack_2c8 = local_218;
            local_2c4 = local_214;
            ppppiStack_2c0 = local_210;
            ppppiStack_2bc = ppppiStack_20c;
            ppppiStack_2b8 = ppppiStack_208;
            ppppiStack_2b4 = local_204;
            param_2[0x1c] = (int)local_238;
            param_2[0x1d] = (int)local_234;
            param_2[0x1e] = (int)local_230;
            param_2[0x1f] = (int)local_22c;
            param_2[0x20] = (int)local_228;
            param_2[0x21] = (int)local_224;
            param_2[0x22] = (int)local_220;
            param_2[0x23] = (int)local_21c;
            param_2[0x24] = (int)local_218;
            param_2[0x25] = (int)local_214;
            param_2[0x26] = (int)local_210;
            param_2[0x27] = (int)ppppiStack_20c;
            param_2[0x28] = (int)ppppiStack_208;
            param_2[0x29] = (int)local_204;
            goto switchD_00aff224_caseD_3;
          }
          uVar18 = param_2[0x18];
          if (0x2492492 < uVar18) {
            uVar29 = 0;
LAB_00afe028:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar29,ppppiVar24);
          }
          ppppiVar24 = (int ****)(uVar18 * 0x38);
          if (ppppiVar24 == (int ****)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar29 = 8;
            iVar19 = FUN_01298504(ppppiVar24,8);
            if (iVar19 == 0) goto LAB_00afe028;
          }
          piVar22 = (int *)param_2[0x17];
          param_2[0x1d] = iVar19;
          piVar10 = piVar22 + param_2[0x18] * 2;
          param_2[0x1c] = uVar18;
          param_2[0x1e] = 0;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x24] = (int)piVar22;
          param_2[0x25] = (int)piVar22;
          param_2[0x26] = param_2[0x16];
          param_2[0x27] = (int)piVar10;
          while (piVar22 != piVar10) {
            iVar19 = *piVar22;
            iVar17 = piVar22[1];
            param_2[0x25] = (int)(piVar22 + 2);
            param_2[0x22] = iVar19;
            param_2[0x1f] = (int)(param_2 + 0x1c);
            param_2[0x20] = iVar19;
            param_2[0x21] = iVar17;
            param_2[0x23] = iVar17;
LAB_00b01390:
            (**(code **)(iVar17 + 0xc))(&local_238,iVar19,param_3);
            ppppiVar6 = local_1fc;
            ppppiVar5 = local_200;
            ppppiVar24 = local_220;
            ppppiVar4 = local_224;
            ppppiVar3 = local_228;
            ppppiVar2 = local_22c;
            local_3d4 = local_230;
            ppppiVar27 = local_238;
            if (local_238 == (int ****)0x2) {
              uVar8 = 4;
              goto LAB_00b01580;
            }
            local_3e8 = local_224;
            local_3e0 = local_228;
            local_3e4 = local_22c;
            local_60 = local_21c;
            ppppiStack_5c = local_218;
            ppppiStack_58 = local_214;
            local_54 = local_210;
            ppppiStack_50 = ppppiStack_20c;
            ppppiStack_4c = ppppiStack_208;
            ppppiStack_48 = local_204;
            FUN_01139b38(param_2[0x22],param_2[0x23]);
            if (((uint)ppppiVar27 & 1) != 0) {
              local_40 = local_60;
              ppppiStack_3c = ppppiStack_5c;
              ppppiStack_38 = ppppiStack_58;
              local_34 = local_54;
              ppppiStack_30 = ppppiStack_50;
              ppppiStack_2c = ppppiStack_4c;
              ppppiStack_28 = ppppiStack_48;
              FUN_009495dc(param_2 + 0x24);
              FUN_007bc140(param_2 + 0x1c);
              param_3 = local_3d4;
              ppppiVar30 = ppppiVar5;
              goto LAB_00afd4fc;
            }
            *local_3dc = (int ***)ppppiVar2;
            local_3dc[1] = (int ***)ppppiVar3;
            local_264 = ppppiVar4;
            local_270 = local_3d4;
            local_260 = ppppiVar24;
            local_25c = local_60;
            ppppiStack_258 = ppppiStack_5c;
            ppppiStack_254 = ppppiStack_58;
            local_250 = local_54;
            ppppiStack_24c = ppppiStack_50;
            ppppiStack_248 = ppppiStack_4c;
            ppppiStack_244 = ppppiStack_48;
            local_3dc[0xb] = (int ***)ppppiVar5;
            piVar10 = (int *)param_2[0x1f];
            local_3dc[0xc] = (int ***)ppppiVar6;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = local_3d4;
            puVar11[1] = ppppiVar2;
            puVar11[2] = ppppiVar3;
            puVar11[3] = ppppiVar4;
            puVar11[4] = ppppiVar24;
            puVar11[5] = local_60;
            puVar11[6] = ppppiStack_5c;
            puVar11[7] = ppppiStack_58;
            puVar11[8] = local_54;
            puVar11[9] = ppppiStack_50;
            puVar11[10] = ppppiStack_4c;
            puVar11[0xb] = ppppiStack_48;
            puVar11[0xc] = ppppiVar5;
            puVar11[0xd] = ppppiVar6;
            piVar10[2] = iVar19 + 1;
            piVar10 = (int *)param_2[0x27];
            piVar22 = (int *)param_2[0x25];
          }
          param_2[0x20] = 0;
          FUN_009495dc(param_2 + 0x24);
          local_280 = (int ****)param_2[0x1c];
          local_27c = (int ****)param_2[0x1d];
          local_278 = (int ****)param_2[0x1e];
          goto LAB_00b01524;
        }
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_40 = local_220;
        ppppiStack_3c = local_21c;
        ppppiStack_38 = local_218;
        local_34 = local_214;
        ppppiStack_30 = local_210;
        ppppiStack_2c = ppppiStack_20c;
        ppppiStack_28 = ppppiStack_208;
        ppppiVar24 = local_224;
        ppppiVar30 = local_204;
        goto LAB_00afd4fc;
      }
      ppppiVar24 = (int ****)&DAT_80000000;
      goto LAB_00afd8a8;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00afc1dc:
    local_3f8 = param_2 + 0x15;
    local_3fc = param_2 + 0x3b;
    *(undefined1 *)local_3fc = 3;
    *(undefined1 *)local_3f8 = uVar8;
    *param_1 = 2;
    uVar8 = 0xc;
    goto LAB_00afd9f0;
  case '\f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afc140;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afc160;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afc180;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afc190;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe5a4_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x36]) {
    case '\0':
      piVar10 = (int *)param_2[0x32];
      iVar19 = param_2[0x33];
      goto LAB_00afc260;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      piVar10 = (int *)param_2[0x2e];
      iVar19 = param_2[0x2f];
      goto LAB_00afc29c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c108c4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c108c4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2c]) {
    case '\0':
      iVar19 = param_2[0x2a];
      piVar10 = (int *)param_2[0x2b];
      goto LAB_00afc2b0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      iVar19 = param_2[0x19];
      piVar10 = (int *)param_2[0x1a];
      bVar9 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00afc2c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x22];
      iVar17 = param_2[0x23];
      goto LAB_00b01390;
    }
switchD_00aff224_caseD_3:
    FUN_009ecbe0(&local_238,param_2 + 0x1c,param_3);
    ppppiVar24 = local_224;
    ppppiVar2 = local_234;
    ppppiVar27 = local_238;
    if (local_238 == (int ****)&DAT_00000003) {
      uVar8 = 3;
LAB_00b01580:
      local_408 = param_2 + 0x36;
      local_40c = param_2 + 0x31;
      local_410 = param_2 + 0x2c;
      local_414 = (int *)((int)param_2 + 0x6d);
      *(undefined1 *)local_414 = uVar8;
      *(undefined1 *)local_40c = 3;
      *(undefined1 *)local_410 = 3;
      *(undefined1 *)local_408 = 3;
      uVar8 = 4;
      goto LAB_00afc1dc;
    }
    ppppiVar30 = (int ****)&local_2a0;
    local_3d4 = local_234;
    local_3e8 = local_228;
    local_3e0 = local_22c;
    local_3e4 = local_230;
    local_2a0 = local_220;
    ppppiStack_29c = local_21c;
    ppppiStack_298 = local_218;
    local_294 = local_214;
    ppppiStack_290 = local_210;
    ppppiStack_28c = ppppiStack_20c;
    ppppiStack_288 = ppppiStack_208;
    FUN_011928d4(param_2 + 0x1c);
    if (ppppiVar27 == (int ****)0x2) {
      local_280 = ppppiVar2;
      local_27c = local_3e4;
      local_278 = local_3e0;
LAB_00b01524:
      FUN_006cac18(&local_238,&local_280);
      local_3d4 = local_238;
      local_3e4 = local_234;
      local_3e0 = local_230;
      local_3e8 = local_22c;
      bVar32 = false;
      local_40 = local_224;
      ppppiStack_3c = local_220;
      ppppiStack_38 = local_21c;
      local_34 = local_218;
      ppppiStack_30 = local_214;
      ppppiStack_2c = local_210;
      ppppiStack_28 = ppppiStack_20c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      ppppiVar24 = local_228;
    }
    else {
      local_40 = local_2a0;
      ppppiStack_3c = ppppiStack_29c;
      ppppiStack_38 = ppppiStack_298;
      local_34 = local_294;
      ppppiStack_30 = ppppiStack_290;
      ppppiStack_2c = ppppiStack_28c;
      ppppiStack_28 = ppppiStack_288;
      ppppiVar30 = local_204;
LAB_00afd4fc:
      local_404 = param_2 + 0x16;
      if ((char)param_2[0x1b] != '\0') {
        FUN_00b7d620(local_404);
      }
      bVar32 = true;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    ppppiStack_330 = ppppiStack_28;
    ppppiStack_334 = ppppiStack_2c;
    ppppiStack_338 = ppppiStack_30;
    local_33c = local_34;
    ppppiStack_340 = ppppiStack_38;
    ppppiStack_344 = ppppiStack_3c;
    local_348 = local_40;
    local_404 = param_2 + 0x16;
    local_40c = param_2 + 0x31;
    local_410 = param_2 + 0x2c;
    local_414 = (int *)((int)param_2 + 0x6d);
    *(undefined1 *)local_414 = 1;
    FUN_01192a14(local_404);
    *(undefined1 *)local_40c = 1;
    *(undefined1 *)local_410 = 1;
    if (bVar32) {
      ppppiVar24 = (int ****)&DAT_80000000;
      FUN_00a20afc(*(undefined4 *)(param_2[0x35] + 0x18));
    }
LAB_00afd8a8:
    local_3f8 = param_2 + 0x15;
    local_400 = param_2 + 0xe;
    *(undefined1 *)(param_2 + 0x36) = 1;
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)local_3f8 = 1;
    FUN_00b01bdc(local_400);
    break;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbd10:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar10 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x4c;
    piVar22 = param_2 + 5;
    iVar17 = piVar12[4];
    iVar28 = piVar12[5];
    iVar26 = piVar12[6];
    iVar25 = piVar12[7];
    iVar19 = piVar12[8];
    iVar15 = piVar12[1];
    iVar20 = piVar12[2];
    iVar21 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar15;
    param_2[7] = iVar20;
    param_2[8] = iVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = iVar28;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar10;
    param_2[0x39] = (int)piVar22;
    param_2[0x3a] = iVar19;
    local_3d4 = param_3;
LAB_00afcda8:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afcdc8:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afcde8:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afcdf8:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe3f4_caseD_3:
    bVar9 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar19 = param_2[0x11];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar10 = (int *)(param_2[0x17] + 0x18);
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = (int)piVar10;
      param_2[0x32] = (int)piVar10;
      param_2[0x33] = iVar19;
      param_2[0x34] = param_2[0x12];
LAB_00afcec8:
      param_2[0x35] = iVar19;
      if (*piVar10 != 2) {
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2e] = (int)piVar10;
        param_2[0x2f] = iVar19;
        param_2[0x30] = param_2[0x34];
LAB_00afcf00:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = iVar19;
        param_2[0x2b] = (int)piVar10;
LAB_00afcf14:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar9 = 1;
        param_2[0x19] = iVar19;
        param_2[0x1a] = (int)piVar10;
LAB_00afcf2c:
        piVar22 = param_2 + 0x16;
        *piVar22 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        ppppiVar24 = (int ****)&local_238;
        FUN_00809600(ppppiVar24,piVar22,iVar19,piVar10);
        if (local_238 == (int ****)0x2) {
          if ((bVar9 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1b) = 0;
            local_2b0 = *piVar22;
            iStack_2ac = param_2[0x17];
            iStack_2a8 = param_2[0x18];
            FUN_009ec520(&local_238);
            local_2e8 = local_238;
            ppppiStack_2e4 = local_234;
            ppppiStack_2e0 = local_230;
            local_2dc = local_22c;
            local_2d8 = local_228;
            ppppiStack_2d4 = local_224;
            ppppiStack_2d0 = local_220;
            ppppiStack_2cc = local_21c;
            ppppiStack_2c8 = local_218;
            local_2c4 = local_214;
            ppppiStack_2c0 = local_210;
            ppppiStack_2bc = ppppiStack_20c;
            ppppiStack_2b8 = ppppiStack_208;
            ppppiStack_2b4 = local_204;
            param_2[0x1c] = (int)local_238;
            param_2[0x1d] = (int)local_234;
            param_2[0x1e] = (int)local_230;
            param_2[0x1f] = (int)local_22c;
            param_2[0x20] = (int)local_228;
            param_2[0x21] = (int)local_224;
            param_2[0x22] = (int)local_220;
            param_2[0x23] = (int)local_21c;
            param_2[0x24] = (int)local_218;
            param_2[0x25] = (int)local_214;
            param_2[0x26] = (int)local_210;
            param_2[0x27] = (int)ppppiStack_20c;
            param_2[0x28] = (int)ppppiStack_208;
            param_2[0x29] = (int)local_204;
            goto switchD_00aff150_caseD_3;
          }
          uVar18 = param_2[0x18];
          if (0x2492492 < uVar18) {
            uVar29 = 0;
LAB_00afe080:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar29,ppppiVar24);
          }
          ppppiVar24 = (int ****)(uVar18 * 0x38);
          if (ppppiVar24 == (int ****)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar29 = 8;
            iVar19 = FUN_01298504(ppppiVar24,8);
            if (iVar19 == 0) goto LAB_00afe080;
          }
          piVar22 = (int *)param_2[0x17];
          param_2[0x1d] = iVar19;
          piVar10 = piVar22 + param_2[0x18] * 2;
          param_2[0x1c] = uVar18;
          param_2[0x1e] = 0;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x24] = (int)piVar22;
          param_2[0x25] = (int)piVar22;
          param_2[0x26] = param_2[0x16];
          param_2[0x27] = (int)piVar10;
          while (piVar22 != piVar10) {
            iVar19 = *piVar22;
            iVar17 = piVar22[1];
            param_2[0x25] = (int)(piVar22 + 2);
            param_2[0x22] = iVar19;
            param_2[0x1f] = (int)(param_2 + 0x1c);
            param_2[0x20] = iVar19;
            param_2[0x21] = iVar17;
            param_2[0x23] = iVar17;
LAB_00b01930:
            (**(code **)(iVar17 + 0xc))(&local_238,iVar19,param_3);
            ppppiVar6 = local_1fc;
            ppppiVar5 = local_200;
            ppppiVar24 = local_220;
            ppppiVar4 = local_224;
            ppppiVar3 = local_228;
            ppppiVar2 = local_22c;
            local_3d4 = local_230;
            ppppiVar27 = local_238;
            if (local_238 == (int ****)0x2) {
              uVar8 = 4;
              goto LAB_00b01b20;
            }
            local_3e8 = local_224;
            local_3e0 = local_228;
            local_3e4 = local_22c;
            local_60 = local_21c;
            ppppiStack_5c = local_218;
            ppppiStack_58 = local_214;
            local_54 = local_210;
            ppppiStack_50 = ppppiStack_20c;
            ppppiStack_4c = ppppiStack_208;
            ppppiStack_48 = local_204;
            FUN_01139b38(param_2[0x22],param_2[0x23]);
            if (((uint)ppppiVar27 & 1) != 0) {
              local_40 = local_60;
              ppppiStack_3c = ppppiStack_5c;
              ppppiStack_38 = ppppiStack_58;
              local_34 = local_54;
              ppppiStack_30 = ppppiStack_50;
              ppppiStack_2c = ppppiStack_4c;
              ppppiStack_28 = ppppiStack_48;
              FUN_009495dc(param_2 + 0x24);
              FUN_007bc140(param_2 + 0x1c);
              param_3 = local_3d4;
              ppppiVar30 = ppppiVar5;
              goto LAB_00afd774;
            }
            *local_3dc = (int ***)ppppiVar2;
            local_3dc[1] = (int ***)ppppiVar3;
            local_264 = ppppiVar4;
            local_270 = local_3d4;
            local_260 = ppppiVar24;
            local_25c = local_60;
            ppppiStack_258 = ppppiStack_5c;
            ppppiStack_254 = ppppiStack_58;
            local_250 = local_54;
            ppppiStack_24c = ppppiStack_50;
            ppppiStack_248 = ppppiStack_4c;
            ppppiStack_244 = ppppiStack_48;
            local_3dc[0xb] = (int ***)ppppiVar5;
            piVar10 = (int *)param_2[0x1f];
            local_3dc[0xc] = (int ***)ppppiVar6;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = local_3d4;
            puVar11[1] = ppppiVar2;
            puVar11[2] = ppppiVar3;
            puVar11[3] = ppppiVar4;
            puVar11[4] = ppppiVar24;
            puVar11[5] = local_60;
            puVar11[6] = ppppiStack_5c;
            puVar11[7] = ppppiStack_58;
            puVar11[8] = local_54;
            puVar11[9] = ppppiStack_50;
            puVar11[10] = ppppiStack_4c;
            puVar11[0xb] = ppppiStack_48;
            puVar11[0xc] = ppppiVar5;
            puVar11[0xd] = ppppiVar6;
            piVar10[2] = iVar19 + 1;
            piVar10 = (int *)param_2[0x27];
            piVar22 = (int *)param_2[0x25];
          }
          param_2[0x20] = 0;
          FUN_009495dc(param_2 + 0x24);
          local_280 = (int ****)param_2[0x1c];
          local_27c = (int ****)param_2[0x1d];
          local_278 = (int ****)param_2[0x1e];
          goto LAB_00b01ac4;
        }
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_40 = local_220;
        ppppiStack_3c = local_21c;
        ppppiStack_38 = local_218;
        local_34 = local_214;
        ppppiStack_30 = local_210;
        ppppiStack_2c = ppppiStack_20c;
        ppppiStack_28 = ppppiStack_208;
        ppppiVar24 = local_224;
        ppppiVar30 = local_204;
        goto LAB_00afd774;
      }
      ppppiVar24 = (int ****)&DAT_80000000;
      goto LAB_00afd938;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
    goto LAB_00afce44;
  case '\x0e':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar10 = (int *)param_2[0x38];
      piVar22 = (int *)param_2[0x39];
      iVar19 = param_2[0x3a];
      goto LAB_00afcda8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afcdc8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afcde8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afcdf8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe3f4_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x36]) {
    case '\0':
      piVar10 = (int *)param_2[0x32];
      iVar19 = param_2[0x33];
      goto LAB_00afcec8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      piVar10 = (int *)param_2[0x2e];
      iVar19 = param_2[0x2f];
      goto LAB_00afcf00;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c107a4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c107a4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2c]) {
    case '\0':
      iVar19 = param_2[0x2a];
      piVar10 = (int *)param_2[0x2b];
      goto LAB_00afcf14;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      iVar19 = param_2[0x19];
      piVar10 = (int *)param_2[0x1a];
      bVar9 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00afcf2c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x22];
      iVar17 = param_2[0x23];
      goto LAB_00b01930;
    }
switchD_00aff150_caseD_3:
    FUN_009ecbe0(&local_238,param_2 + 0x1c,param_3);
    ppppiVar24 = local_224;
    ppppiVar2 = local_234;
    ppppiVar27 = local_238;
    if (local_238 != (int ****)&DAT_00000003) {
      ppppiVar30 = (int ****)&local_2a0;
      local_3d4 = local_234;
      local_3e8 = local_228;
      local_3e0 = local_22c;
      local_3e4 = local_230;
      local_2a0 = local_220;
      ppppiStack_29c = local_21c;
      ppppiStack_298 = local_218;
      local_294 = local_214;
      ppppiStack_290 = local_210;
      ppppiStack_28c = ppppiStack_20c;
      ppppiStack_288 = ppppiStack_208;
      FUN_011928d4(param_2 + 0x1c);
      if (ppppiVar27 == (int ****)0x2) {
        local_280 = ppppiVar2;
        local_27c = local_3e4;
        local_278 = local_3e0;
LAB_00b01ac4:
        FUN_006cac18(&local_238,&local_280);
        local_3d4 = local_238;
        local_3e4 = local_234;
        local_3e0 = local_230;
        local_3e8 = local_22c;
        bVar32 = false;
        local_40 = local_224;
        ppppiStack_3c = local_220;
        ppppiStack_38 = local_21c;
        local_34 = local_218;
        ppppiStack_30 = local_214;
        ppppiStack_2c = local_210;
        ppppiStack_28 = ppppiStack_20c;
        *(undefined1 *)(param_2 + 0x1b) = 0;
        ppppiVar24 = local_228;
      }
      else {
        local_40 = local_2a0;
        ppppiStack_3c = ppppiStack_29c;
        ppppiStack_38 = ppppiStack_298;
        local_34 = local_294;
        ppppiStack_30 = ppppiStack_290;
        ppppiStack_2c = ppppiStack_28c;
        ppppiStack_28 = ppppiStack_288;
        ppppiVar30 = local_204;
LAB_00afd774:
        local_404 = param_2 + 0x16;
        if ((char)param_2[0x1b] != '\0') {
          FUN_00b7d620(local_404);
        }
        bVar32 = true;
        *(undefined1 *)(param_2 + 0x1b) = 0;
      }
      ppppiStack_330 = ppppiStack_28;
      ppppiStack_334 = ppppiStack_2c;
      ppppiStack_338 = ppppiStack_30;
      local_33c = local_34;
      ppppiStack_340 = ppppiStack_38;
      ppppiStack_344 = ppppiStack_3c;
      local_348 = local_40;
      local_404 = param_2 + 0x16;
      local_40c = param_2 + 0x31;
      local_410 = param_2 + 0x2c;
      local_414 = (int *)((int)param_2 + 0x6d);
      *(undefined1 *)local_414 = 1;
      FUN_01192a14(local_404);
      *(undefined1 *)local_40c = 1;
      *(undefined1 *)local_410 = 1;
      if (bVar32) {
        ppppiVar24 = (int ****)&DAT_80000000;
        FUN_00a20afc(*(undefined4 *)(param_2[0x35] + 0x18));
      }
LAB_00afd938:
      local_3f8 = param_2 + 0x15;
      local_400 = param_2 + 0xe;
      *(undefined1 *)(param_2 + 0x36) = 1;
      FUN_019f8c54(param_2[0x13],1);
      *(undefined1 *)local_3f8 = 1;
      FUN_00b01bdc(local_400);
      break;
    }
    uVar8 = 3;
LAB_00b01b20:
    local_408 = param_2 + 0x36;
    local_40c = param_2 + 0x31;
    local_410 = param_2 + 0x2c;
    local_414 = (int *)((int)param_2 + 0x6d);
    *(undefined1 *)local_414 = uVar8;
    *(undefined1 *)local_40c = 3;
    *(undefined1 *)local_410 = 3;
    *(undefined1 *)local_408 = 3;
    uVar8 = 4;
LAB_00afce44:
    local_3f8 = param_2 + 0x15;
    local_3fc = param_2 + 0x3b;
    *(undefined1 *)local_3fc = 3;
    *(undefined1 *)local_3f8 = uVar8;
    *param_1 = 2;
    uVar8 = 0xe;
    goto LAB_00afd9f0;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
LAB_00afbd58:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar17;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar19 = param_2[6];
    }
    piVar10 = param_2 + 4;
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x50;
    piVar22 = param_2 + 5;
    iVar17 = piVar12[4];
    iVar28 = piVar12[5];
    iVar26 = piVar12[6];
    iVar25 = piVar12[7];
    iVar19 = piVar12[8];
    iVar15 = piVar12[1];
    iVar20 = piVar12[2];
    iVar21 = piVar12[3];
    *piVar22 = *piVar12;
    param_2[6] = iVar15;
    param_2[7] = iVar20;
    param_2[8] = iVar21;
    param_2[9] = iVar17 + 0x20;
    param_2[10] = iVar28;
    param_2[0xb] = iVar26;
    param_2[0xc] = iVar25;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar12[4];
    *(undefined1 *)(param_2 + 0x35) = 0;
    param_2[0x32] = (int)piVar10;
    param_2[0x33] = (int)piVar22;
    param_2[0x34] = iVar19;
LAB_00afd0b0:
    piVar10 = (int *)*piVar10;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar10;
    param_2[0xf] = (int)piVar22;
    param_2[0x10] = iVar19;
LAB_00afd0d0:
    param_2[0x11] = (int)piVar22;
    param_2[0x12] = iVar19;
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar19 = iVar19 + 8;
    param_2[0x16] = iVar19;
LAB_00afd0f4:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar19;
LAB_00afd104:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar19 + 4;
    param_2[0x19] = 0;
switchD_00afe5d0_caseD_3:
    local_3f8 = param_2 + 0x21;
    unaff_r5 = param_2 + 0x18;
    bVar9 = FUN_019f9bc4(unaff_r5,param_3);
    if (bVar9 != 2) {
      FUN_0193c3cc(unaff_r5);
      if ((bVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x31) = 0;
      local_3dc = (int ****)param_2[0x11];
      local_3e0 = (int ****)param_2[0x12];
      iVar19 = param_2[0x17] + 0x18;
      param_2[0x13] = param_2[0x17] + 4;
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      param_2[0x14] = iVar19;
      param_2[0x2e] = iVar19;
      param_2[0x30] = (int)local_3e0;
      param_2[0x2f] = (int)local_3dc;
LAB_00afd1a8:
      puVar16 = *(undefined **)(iVar19 + 8);
      *(undefined1 *)(param_2 + 0x1b) = 0;
      param_2[0x1a] = iVar19;
      param_2[0x19] = (int)local_3e0;
      param_2[0x18] = (int)local_3dc;
      param_2[0x16] = 1;
      param_2[0x17] = (int)puVar16;
      *(undefined1 *)((int)param_2 + 0x6d) = 1;
      local_3e4 = local_3dc + 6;
      if (*(int *)((int)**local_3e4 + 0x10) != 0) {
LAB_00afd1e8:
        if (&UNK_004a7904 < puVar16) {
          uVar29 = 0;
LAB_00afd1fc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar29,unaff_r5);
        }
        unaff_r5 = (int *)((int)puVar16 * 0x1b8);
        if (unaff_r5 == (int *)0x0) {
          iVar17 = 8;
          puVar16 = (undefined *)0x0;
        }
        else {
          uVar29 = 8;
          iVar17 = FUN_01298504(unaff_r5,8);
          if (iVar17 == 0) goto LAB_00afd1fc;
        }
        param_2[0x1c] = (int)puVar16;
LAB_00afe1a0:
        param_2[0x1d] = iVar17;
        param_2[0x1e] = 0;
        *(undefined1 *)((int)param_2 + 0x6d) = 0;
        if (*(int *)(iVar19 + 8) != 0) {
          iVar17 = *(int *)(iVar19 + 8) << 2;
          iVar19 = *(int *)(iVar19 + 4);
          iVar15 = 0;
          do {
            if (*local_3dc == (int ***)0x1) {
              local_324 = (int)local_3dc[2];
              local_320 = (int)local_3dc[3];
            }
            local_a8 = (uint)(*local_3dc == (int ***)0x1);
            local_98 = (int)local_3dc[4];
            local_94 = (int)local_3dc[5];
            local_8c = (int)local_3dc[7];
            local_90 = (int)*local_3e4;
            local_88 = SUB41(local_3dc[8],0);
            iStack_a0 = local_324;
            iStack_9c = local_320;
            local_84 = 0;
            iVar20 = param_2[0x1e];
            local_188 = iVar15;
            local_b0 = (int)local_3e0;
            local_ac = iVar19;
            if (iVar20 == param_2[0x1c]) {
              FUN_00a20e10(param_2 + 0x1c);
            }
            iVar19 = iVar19 + 4;
            FUN_01bed4e2(iVar20 * 0x1b8 + param_2[0x1d],&local_238,0x1b8);
            iVar15 = iVar15 + 1;
            iVar17 = iVar17 + -4;
            param_2[0x1e] = iVar20 + 1;
          } while (iVar17 != 0);
        }
        local_40 = (int ****)param_2[0x1c];
        ppppiStack_3c = (int ****)param_2[0x1d];
        ppppiStack_38 = (int ****)param_2[0x1e];
        FUN_00a16c14(&local_238);
        param_2[0x20] = (int)local_238;
        param_2[0x21] = (int)local_234;
        param_2[0x22] = (int)local_230;
        param_2[0x23] = (int)local_22c;
        param_2[0x24] = (int)local_228;
        param_2[0x25] = (int)local_224;
        param_2[0x26] = (int)local_220;
        param_2[0x27] = (int)local_21c;
        param_2[0x28] = (int)local_218;
        param_2[0x29] = (int)local_214;
        param_2[0x2a] = (int)local_210;
        param_2[0x2b] = (int)ppppiStack_20c;
        param_2[0x2c] = (int)ppppiStack_208;
        param_2[0x2d] = (int)local_204;
        goto LAB_00afe310;
      }
LAB_00aff270:
      if (&UNK_009d89d8 < puVar16) {
        uVar29 = 0;
LAB_00aff284:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar29,unaff_r5);
      }
      unaff_r5 = (int *)((int)puVar16 * 0xd0);
      if (unaff_r5 == (int *)0x0) {
        iVar17 = 8;
        puVar16 = (undefined *)0x0;
      }
      else {
        uVar29 = 8;
        iVar17 = FUN_01298504(unaff_r5,8);
        if (iVar17 == 0) goto LAB_00aff284;
      }
      param_2[0x1c] = (int)puVar16;
LAB_00aff2dc:
      piVar10 = param_2 + 0x1c;
      param_2[0x1d] = iVar17;
      param_2[0x1e] = 0;
      *(undefined1 *)((int)param_2 + 0x6d) = 0;
      if (*(int *)(iVar19 + 8) != 0) {
        iVar17 = *(int *)(iVar19 + 8) << 2;
        iVar20 = 0;
        iVar15 = param_2[0x1e];
        iVar21 = iVar15 * 0xd0 + 0xcc;
        iVar19 = *(int *)(iVar19 + 4);
        do {
          iVar25 = (int)local_3dc[4];
          iVar26 = (int)local_3dc[5];
          piVar22 = (int *)0x0;
          if (*local_3dc != (int ***)0x0) {
            piVar22 = (int *)(local_3dc + 1);
          }
          iVar13 = (int)local_3dc[6];
          iVar31 = (int)local_3dc[7];
          iVar28 = (int)local_3dc[8];
          iVar23 = iVar15 + iVar20;
          if (iVar23 == *piVar10) {
            FUN_00a20db0(piVar10);
          }
          iVar17 = iVar17 + -4;
          puVar14 = (undefined1 *)(param_2[0x1d] + iVar21);
          *puVar14 = 0;
          iVar21 = iVar21 + 0xd0;
          *(int *)(puVar14 + -0xc) = iVar13;
          *(int *****)(puVar14 + -0x28) = local_3e0;
          *(undefined4 *)(puVar14 + -0x24) = 1;
          *(undefined4 *)(puVar14 + -0x20) = 0;
          *(int *)(puVar14 + -0x1c) = iVar20;
          *(int **)(puVar14 + -0x18) = piVar22;
          iVar20 = iVar20 + 1;
          *(int *)(puVar14 + -0x2c) = iVar19;
          *(int *)(puVar14 + -0x14) = iVar25;
          puVar14[-4] = (char)iVar28;
          *(int *)(puVar14 + -8) = iVar31;
          *(int *)(puVar14 + -0x10) = iVar26;
          param_2[0x1e] = iVar23 + 1;
          iVar19 = iVar19 + 4;
        } while (iVar17 != 0);
      }
      local_40 = (int ****)*piVar10;
      ppppiStack_3c = (int ****)param_2[0x1d];
      ppppiStack_38 = (int ****)param_2[0x1e];
      FUN_00a14ec8(&local_238);
      param_2[0x20] = (int)local_238;
      param_2[0x21] = (int)local_234;
      param_2[0x22] = (int)local_230;
      param_2[0x23] = (int)local_22c;
      param_2[0x24] = (int)local_228;
      param_2[0x25] = (int)local_224;
      param_2[0x26] = (int)local_220;
      param_2[0x27] = (int)local_21c;
      param_2[0x28] = (int)local_218;
      param_2[0x29] = (int)local_214;
      param_2[0x2a] = (int)local_210;
      param_2[0x2b] = (int)ppppiStack_20c;
      param_2[0x2c] = (int)ppppiStack_208;
      param_2[0x2d] = (int)local_204;
LAB_00aff43c:
      FUN_009fba20(&local_238,param_2 + 0x20,param_3);
      if (local_238 != (int ****)&DAT_00000003) {
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_270 = local_220;
        ppppiStack_26c = local_21c;
        ppppiStack_268 = local_218;
        local_264 = local_214;
        local_260 = local_210;
        local_25c = ppppiStack_20c;
        ppppiStack_258 = ppppiStack_208;
        local_3dc = local_204;
        FUN_0093a294(param_2 + 0x20);
        if (local_238 == (int ****)0x2) goto LAB_00aff4fc;
        local_80 = local_270;
        ppppiStack_7c = ppppiStack_26c;
        ppppiStack_78 = ppppiStack_268;
        local_74 = local_264;
        ppppiStack_70 = local_260;
        ppppiStack_6c = local_25c;
        ppppiStack_68 = ppppiStack_258;
        goto LAB_00aff51c;
      }
      uVar8 = 4;
      goto LAB_00aff464;
    }
    uVar8 = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00aff470:
    local_400 = param_2 + 0x15;
    local_404 = param_2 + 0x35;
    *(undefined1 *)local_3f8 = 3;
    *(undefined1 *)local_404 = 3;
    *(undefined1 *)local_400 = uVar8;
    *param_1 = 2;
    uVar8 = 0x10;
    goto LAB_00afd9f0;
  case '\x10':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x35]) {
    case '\0':
      piVar10 = (int *)param_2[0x32];
      piVar22 = (int *)param_2[0x33];
      iVar19 = param_2[0x34];
      goto LAB_00afd0b0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar10 = (int *)param_2[0xe];
      piVar22 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_00afd0d0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar19 = param_2[0x16];
        goto LAB_00afd0f4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar19 = param_2[0x17];
        goto LAB_00afd104;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00afe5d0_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      iVar19 = param_2[0x2e];
      local_3dc = (int ****)param_2[0x2f];
      local_3e0 = (int ****)param_2[0x30];
      goto LAB_00afd1a8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x1b]) {
    case '\0':
      *(undefined1 *)((int)param_2 + 0x6d) = 1;
      local_3dc = (int ****)param_2[0x18];
      local_3e0 = (int ****)param_2[0x19];
      iVar19 = param_2[0x1a];
      local_3e4 = local_3dc + 6;
      puVar16 = (undefined *)param_2[0x17];
      if (*(int *)((int)**local_3e4 + 0x10) == 0) {
        if (param_2[0x16] != 0) goto LAB_00aff270;
        param_2[0x1c] = 0;
        iVar17 = 8;
        goto LAB_00aff2dc;
      }
      if (param_2[0x16] != 0) goto LAB_00afd1e8;
      param_2[0x1c] = 0;
      iVar17 = 8;
      goto LAB_00afe1a0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00aff43c;
    }
LAB_00afe310:
    FUN_009f0b6c(&local_238,param_2 + 0x20,param_3);
    if (local_238 == (int ****)&DAT_00000003) {
      uVar8 = 3;
LAB_00aff464:
      local_410 = param_2 + 0x1b;
      local_3f8 = param_2 + 0x31;
      *(undefined1 *)local_410 = uVar8;
      uVar8 = 4;
      goto LAB_00aff470;
    }
    local_3d4 = local_234;
    local_3e8 = local_228;
    local_3e0 = local_22c;
    local_3e4 = local_230;
    local_2e8 = local_220;
    ppppiStack_2e4 = local_21c;
    ppppiStack_2e0 = local_218;
    local_2dc = local_214;
    local_2d8 = local_210;
    ppppiStack_2d4 = ppppiStack_20c;
    ppppiStack_2d0 = ppppiStack_208;
    local_3dc = local_204;
    FUN_0093a154(param_2 + 0x20);
    if (local_238 == (int ****)0x2) {
LAB_00aff4fc:
      ppppiVar24 = (int ****)0x80000006;
      uVar18 = 0;
      param_3 = local_200;
      ppppiVar30 = local_238;
    }
    else {
      local_80 = local_2e8;
      ppppiStack_7c = ppppiStack_2e4;
      ppppiStack_78 = ppppiStack_2e0;
      local_74 = local_2dc;
      ppppiStack_70 = local_2d8;
      ppppiStack_6c = ppppiStack_2d4;
      ppppiStack_68 = ppppiStack_2d0;
LAB_00aff51c:
      uVar18 = 1;
      ppppiVar24 = local_224;
      param_3 = local_200;
      ppppiVar30 = local_238;
    }
    local_400 = param_2 + 0x15;
    local_404 = param_2 + 0x35;
    local_408 = param_2 + 0xe;
    local_40c = param_2 + 0x16;
    *(undefined2 *)(param_2 + 0x1b) = 1;
    FUN_0093a3d4(local_40c);
    *(undefined1 *)(param_2 + 0x31) = 1;
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)local_400 = 1;
    FUN_00af8bac(local_408);
    *(undefined1 *)local_404 = 1;
    local_388 = local_80;
    ppppiStack_384 = ppppiStack_7c;
    ppppiStack_380 = ppppiStack_78;
    local_37c = local_74;
    ppppiStack_378 = ppppiStack_70;
    ppppiStack_374 = ppppiStack_6c;
    ppppiStack_370 = ppppiStack_68;
    local_220 = ppppiVar24;
    goto LAB_00afd99c;
  case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar19 = param_2[4];
      iVar17 = param_2[5];
      goto LAB_00afdaa8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10ad8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10ad8);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1d]) {
      case '\0':
        iVar19 = param_2[8];
        iVar17 = param_2[9];
        goto LAB_00afdb70;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1c]) {
      case '\0':
        iVar19 = param_2[10];
        goto LAB_00afdb88;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1b]) {
      case '\0':
        iVar19 = param_2[0xc];
        goto LAB_00afdb9c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1a]) {
      case '\0':
        piVar10 = (int *)param_2[0xd];
        goto LAB_00afdbb8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f190);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f190);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x19]) {
      case '\0':
        iVar19 = param_2[0xe];
        goto LAB_00afdbd0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x18]) {
      case '\0':
        iVar19 = param_2[0xf];
        goto LAB_00afdbe8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00aff594_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2f]) {
    case '\0':
      local_3e8 = (int ****)param_2[0x2c];
      local_3e0 = (int ****)param_2[0x2d];
      local_3dc = (int ****)param_2[0x2e];
LAB_00afe128:
      puVar16 = (undefined *)local_3e8[2];
      *(undefined1 *)(param_2 + 0x19) = 0;
      param_2[0x14] = 1;
      param_2[0x15] = (int)puVar16;
      param_2[0x16] = (int)local_3e0;
      param_2[0x17] = (int)local_3dc;
      param_2[0x18] = (int)local_3e8;
      *(undefined1 *)((int)param_2 + 0x65) = 1;
      local_3e4 = local_3e0 + 6;
      if (*(int *)((int)**local_3e4 + 0x10) != 0) {
LAB_00afe168:
        if (&UNK_00505050 < puVar16) {
          uVar29 = 0;
LAB_00afe17c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar29,unaff_r6);
        }
        unaff_r6 = (int)puVar16 * 0x198;
        if (unaff_r6 == 0) {
          iVar19 = 8;
          puVar16 = (undefined *)0x0;
        }
        else {
          uVar29 = 8;
          iVar19 = FUN_01298504(unaff_r6,8);
          if (iVar19 == 0) goto LAB_00afe17c;
        }
        param_2[0x1a] = (int)puVar16;
LAB_00afeb34:
        param_2[0x1b] = iVar19;
        param_2[0x1c] = 0;
        *(undefined1 *)((int)param_2 + 0x65) = 0;
        if (local_3e8[2] != (int ***)0x0) {
          iVar17 = (int)local_3e8[1];
          iVar15 = 0;
          iVar19 = (int)local_3e8[2] * 0x30;
          do {
            if (*local_3e0 == (int ***)0x1) {
              local_328 = (int)local_3e0[1];
              local_324 = (int)local_3e0[2];
              local_320 = (int)local_3e0[3];
            }
            local_c8 = (uint)(*local_3e0 == (int ***)0x1);
            local_b8 = (int)local_3e0[4];
            local_b4 = (int)local_3e0[5];
            local_b0 = (int)*local_3e4;
            local_ac = (int)local_3e0[7];
            local_c4 = local_328;
            iStack_c0 = local_324;
            iStack_bc = local_320;
            local_a4 = 0;
            iVar20 = param_2[0x1c];
            local_a8 = CONCAT31(local_a8._1_3_,(char)local_3e0[8]);
            local_d0 = (int)local_3dc;
            local_1a8 = iVar15;
            local_cc = iVar17;
            if (iVar20 == param_2[0x1a]) {
              FUN_00f9d59c(param_2 + 0x1a);
            }
            iVar17 = iVar17 + 0x30;
            FUN_01bed4e2(iVar20 * 0x198 + param_2[0x1b],&local_238,0x198);
            iVar15 = iVar15 + 1;
            iVar19 = iVar19 + -0x30;
            param_2[0x1c] = iVar20 + 1;
          } while (iVar19 != 0);
        }
        local_2a0 = (int ****)param_2[0x1a];
        ppppiStack_29c = (int ****)param_2[0x1b];
        ppppiStack_298 = (int ****)param_2[0x1c];
        FUN_00a15db0(&local_238);
        param_2[0x1e] = (int)local_238;
        param_2[0x1f] = (int)local_234;
        param_2[0x20] = (int)local_230;
        param_2[0x21] = (int)local_22c;
        param_2[0x22] = (int)local_228;
        param_2[0x23] = (int)local_224;
        param_2[0x24] = (int)local_220;
        param_2[0x25] = (int)local_21c;
        param_2[0x26] = (int)local_218;
        param_2[0x27] = (int)local_214;
        param_2[0x28] = (int)local_210;
        param_2[0x29] = (int)ppppiStack_20c;
        param_2[0x2a] = (int)ppppiStack_208;
        param_2[0x2b] = (int)local_204;
        goto LAB_00afeca4;
      }
LAB_00afee50:
      if (&UNK_00ba2e8b < puVar16) {
        uVar29 = 0;
        piVar10 = (int *)local_3e0;
LAB_00afee64:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar29,piVar10);
      }
      piVar10 = (int *)((int)puVar16 * 0xb0);
      if (piVar10 == (int *)0x0) {
        iVar19 = 8;
        puVar16 = (undefined *)0x0;
      }
      else {
        uVar29 = 8;
        iVar19 = FUN_01298504(piVar10,8);
        if (iVar19 == 0) goto LAB_00afee64;
      }
      param_2[0x1a] = (int)puVar16;
LAB_00afeebc:
      piVar10 = param_2 + 0x1a;
      param_2[0x1b] = iVar19;
      param_2[0x1c] = 0;
      *(undefined1 *)((int)param_2 + 0x65) = 0;
      if (local_3e8[2] != (int ***)0x0) {
        iVar20 = 0;
        iVar19 = (int)local_3e8[2] * 0x30;
        iVar15 = param_2[0x1c];
        iVar21 = iVar15 * 0xb0 + 0xac;
        iVar17 = (int)local_3e8[1];
        do {
          iVar25 = (int)local_3e0[4];
          iVar26 = (int)local_3e0[5];
          piVar22 = (int *)0x0;
          if (*local_3e0 != (int ***)0x0) {
            piVar22 = (int *)(local_3e0 + 1);
          }
          iVar13 = (int)local_3e0[6];
          iVar31 = (int)local_3e0[7];
          iVar28 = (int)local_3e0[8];
          iVar23 = iVar15 + iVar20;
          if (iVar23 == *piVar10) {
            FUN_00a20d80(piVar10);
          }
          iVar19 = iVar19 + -0x30;
          puVar14 = (undefined1 *)(param_2[0x1b] + iVar21);
          *puVar14 = 0;
          iVar21 = iVar21 + 0xb0;
          *(int *)(puVar14 + -0xc) = iVar13;
          *(undefined4 *)(puVar14 + -0x24) = 1;
          *(undefined4 *)(puVar14 + -0x20) = 0;
          *(int *)(puVar14 + -0x1c) = iVar20;
          *(int **)(puVar14 + -0x18) = piVar22;
          iVar20 = iVar20 + 1;
          *(int *)(puVar14 + -8) = iVar31;
          *(int *)(puVar14 + -0x2c) = iVar17;
          *(int *)(puVar14 + -0x14) = iVar25;
          puVar14[-4] = (char)iVar28;
          *(int *****)(puVar14 + -0x28) = local_3dc;
          *(int *)(puVar14 + -0x10) = iVar26;
          param_2[0x1c] = iVar23 + 1;
          iVar17 = iVar17 + 0x30;
        } while (iVar19 != 0);
      }
      local_2a0 = (int ****)*piVar10;
      ppppiStack_29c = (int ****)param_2[0x1b];
      ppppiStack_298 = (int ****)param_2[0x1c];
      FUN_00a1563c(&local_238);
      param_2[0x1e] = (int)local_238;
      param_2[0x1f] = (int)local_234;
      param_2[0x20] = (int)local_230;
      param_2[0x21] = (int)local_22c;
      param_2[0x22] = (int)local_228;
      param_2[0x23] = (int)local_224;
      param_2[0x24] = (int)local_220;
      param_2[0x25] = (int)local_21c;
      param_2[0x26] = (int)local_218;
      param_2[0x27] = (int)local_214;
      param_2[0x28] = (int)local_210;
      param_2[0x29] = (int)ppppiStack_20c;
      param_2[0x2a] = (int)ppppiStack_208;
      param_2[0x2b] = (int)local_204;
LAB_00aff020:
      FUN_00a047cc(&local_238,param_2 + 0x1e,param_3);
      if (local_238 != (int ****)&DAT_00000003) {
        ppppiVar27 = (int ****)&local_2e8;
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_2e8 = local_220;
        ppppiStack_2e4 = local_21c;
        ppppiStack_2e0 = local_218;
        local_2dc = local_214;
        local_2d8 = local_210;
        ppppiStack_2d4 = ppppiStack_20c;
        ppppiStack_2d0 = ppppiStack_208;
        local_3dc = local_204;
        FUN_00a35200(param_2 + 0x1e);
        ppppiVar24 = local_224;
        param_3 = local_200;
        ppppiVar30 = local_238;
        goto LAB_00aff0d4;
      }
      uVar8 = 4;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x19]) {
      case '\0':
        *(undefined1 *)((int)param_2 + 0x65) = 1;
        puVar16 = (undefined *)param_2[0x15];
        local_3e0 = (int ****)param_2[0x16];
        local_3dc = (int ****)param_2[0x17];
        local_3e4 = local_3e0 + 6;
        local_3e8 = (int ****)param_2[0x18];
        if (*(int *)((int)**local_3e4 + 0x10) == 0) {
          if (param_2[0x14] != 0) goto LAB_00afee50;
          param_2[0x1a] = 0;
          iVar19 = 8;
          goto LAB_00afeebc;
        }
        if (param_2[0x14] != 0) goto LAB_00afe168;
        param_2[0x1a] = 0;
        iVar19 = 8;
        goto LAB_00afeb34;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21a0c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21a0c);
      case '\x03':
        break;
      case '\x04':
        goto LAB_00aff020;
      }
LAB_00afeca4:
      FUN_009f7040(&local_238,param_2 + 0x1e,param_3);
      if (local_238 != (int ****)&DAT_00000003) {
        ppppiVar27 = (int ****)&local_40;
        local_3d4 = local_234;
        local_3e8 = local_228;
        local_3e0 = local_22c;
        local_3e4 = local_230;
        local_40 = local_220;
        ppppiStack_3c = local_21c;
        ppppiStack_38 = local_218;
        local_34 = local_214;
        ppppiStack_30 = local_210;
        ppppiStack_2c = ppppiStack_20c;
        ppppiStack_28 = ppppiStack_208;
        local_3dc = local_204;
        FUN_00a350c0(param_2 + 0x1e);
        ppppiVar24 = local_224;
        param_3 = local_200;
        ppppiVar30 = local_238;
LAB_00aff0d4:
        local_408 = param_2 + 0x14;
        bVar32 = ppppiVar30 != (int ****)0x2;
        if (bVar32) {
          local_270 = (int ****)*ppppiVar27;
          ppppiStack_26c = (int ****)ppppiVar27[1];
          ppppiStack_268 = (int ****)ppppiVar27[2];
          local_264 = (int ****)ppppiVar27[3];
          local_260 = (int ****)ppppiVar27[4];
          local_25c = (int ****)ppppiVar27[5];
          ppppiStack_258 = (int ****)ppppiVar27[6];
        }
        else {
          ppppiVar24 = (int ****)0x80000006;
        }
        *(undefined2 *)(param_2 + 0x19) = 1;
        FUN_00a35340(local_408);
        *(undefined1 *)(param_2 + 0x2f) = 1;
        local_60 = local_270;
        ppppiStack_5c = ppppiStack_26c;
        ppppiStack_58 = ppppiStack_268;
        local_54 = local_264;
        ppppiStack_50 = local_260;
        ppppiStack_4c = local_25c;
        ppppiStack_48 = ppppiStack_258;
        FUN_00b5f0e4(param_2 + 8);
        goto LAB_00afdae4;
      }
      uVar8 = 3;
    }
    local_40c = param_2 + 0x19;
    local_400 = param_2 + 0x2f;
    *(undefined1 *)local_40c = uVar8;
    uVar8 = 4;
LAB_00aff054:
    local_3ec = param_2 + 7;
    *(undefined1 *)local_400 = 3;
    *(undefined1 *)local_3ec = uVar8;
    *param_1 = 2;
    uVar8 = 0x11;
    goto LAB_00afd9f0;
  }
  *(undefined1 *)(param_2 + 0x3b) = 1;
  uVar18 = 0;
  local_388 = local_348;
  ppppiStack_384 = ppppiStack_344;
  ppppiStack_380 = ppppiStack_340;
  local_37c = local_33c;
  ppppiStack_378 = ppppiStack_338;
  ppppiStack_374 = ppppiStack_334;
  ppppiStack_370 = ppppiStack_330;
  local_3dc = ppppiStack_330;
  local_220 = ppppiVar24;
LAB_00afd99c:
  local_234 = ppppiVar30;
LAB_00afd9a0:
  param_1[2] = (uint)local_3d4;
  param_1[5] = (uint)local_3e8;
  param_1[3] = (uint)local_3e4;
  param_1[4] = (uint)local_3e0;
  *param_1 = uVar18;
  param_1[1] = (uint)local_234;
  param_1[6] = (uint)local_220;
  param_1[7] = (uint)local_388;
  param_1[8] = (uint)ppppiStack_384;
  param_1[9] = (uint)ppppiStack_380;
  param_1[10] = (uint)local_37c;
  param_1[0xb] = (uint)ppppiStack_378;
  param_1[0xc] = (uint)ppppiStack_374;
  param_1[0xd] = (uint)ppppiStack_370;
  uVar8 = 1;
  param_1[0xe] = (uint)local_3dc;
  param_1[0xf] = (uint)param_3;
LAB_00afd9f0:
  *(undefined1 *)(param_2 + 3) = uVar8;
  return;
}

