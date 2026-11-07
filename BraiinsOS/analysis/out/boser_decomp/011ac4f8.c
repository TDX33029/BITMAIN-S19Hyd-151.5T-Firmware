// FUN_011ac4f8 @ 011ac4f8 size=3088 calls_out=24 calls_in=0
// strings: appeals | internal error: entered unreachable code

void FUN_011ac4f8(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint unaff_r6;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *in_r12;
  int *extraout_r12;
  int iVar19;
  int iVar20;
  undefined4 *local_2f0;
  undefined4 *local_2e0;
  undefined4 *local_2dc;
  undefined4 *local_2d8;
  int *local_2d4;
  uint local_2d0;
  int *local_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint local_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint local_290;
  uint local_28c;
  uint local_288;
  int iStack_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int *local_25c;
  int *local_258;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  int local_200;
  int *local_1fc;
  int local_1f8;
  int local_1f4;
  int iStack_1f0;
  int iStack_1ec;
  undefined1 local_1e8;
  undefined1 local_1e4;
  int local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  uint uStack_118;
  uint uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100;
  undefined1 local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int iStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int *piStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2f)) {
  case 0:
    piVar15 = (int *)param_2[0x2c];
    uVar16 = param_2[0x2d];
    uVar18 = 0;
    local_2c8 = (int *)0x80000007;
    param_2[0x2e] = uVar16;
    local_2d4 = in_r12;
    if (*(int *)(*(int *)(uVar16 + 0x10) + 0x40) == 7) {
      iVar4 = thunk_FUN_01bed842(*(int *)(*(int *)(uVar16 + 0x10) + 0x3c) + 8,"appeals",7);
      if (iVar4 == 0) {
        *(undefined1 *)(param_2 + 3) = 0;
        *param_2 = piVar15;
        param_2[1] = uVar16;
        goto LAB_011ac634;
      }
      local_2c8 = (int *)0x80000007;
      local_2d4 = extraout_r12;
    }
LAB_011acf74:
    *param_1 = uVar18;
    param_1[1] = uVar16;
    param_1[2] = local_2a0;
    param_1[3] = uStack_29c;
    param_1[4] = uStack_298;
    param_1[5] = unaff_r6;
    param_1[6] = (uint)local_2c8;
    param_1[7] = local_2c0;
    param_1[8] = uStack_2bc;
    param_1[9] = uStack_2b8;
    uVar6 = 1;
    param_1[10] = local_2b4;
    param_1[0xb] = uStack_2b0;
    param_1[0xc] = uStack_2ac;
    param_1[0xd] = uStack_2a8;
    param_1[0xe] = (uint)piVar15;
    param_1[0xf] = (uint)local_2d4;
    goto LAB_011acfbc;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22348);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22348);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    piVar15 = (int *)*param_2;
    uVar16 = param_2[1];
LAB_011ac634:
    param_2[4] = piVar15;
    param_2[5] = uVar16;
    param_2[2] = uVar16;
    *(undefined1 *)(param_2 + 0x19) = 0;
LAB_011ac650:
    *(undefined1 *)(param_2 + 0x18) = 0;
    param_2[6] = piVar15;
    param_2[7] = uVar16;
LAB_011ac664:
    param_2[8] = piVar15;
    *(undefined1 *)(param_2 + 0x17) = 0;
LAB_011ac67c:
    iVar4 = *piVar15 + 8;
    param_2[9] = iVar4;
    *(undefined1 *)(param_2 + 0x16) = 0;
LAB_011ac69c:
    *(undefined1 *)(param_2 + 0x15) = 0;
    iVar4 = iVar4 + 0x18;
    param_2[10] = iVar4;
LAB_011ac6b4:
    param_2[0xb] = iVar4;
    *(undefined1 *)(param_2 + 0x14) = 0;
LAB_011ac6c8:
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 1;
    param_2[0x12] = 1;
    param_2[0xc] = iVar4 + 4;
    param_2[0xd] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22348);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22348);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x19)) {
    case 0:
      piVar15 = (int *)param_2[4];
      uVar16 = param_2[5];
      goto LAB_011ac650;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22348);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22348);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x18)) {
    case 0:
      piVar15 = (int *)param_2[6];
      goto LAB_011ac664;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22348);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22348);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x17)) {
    case 0:
      piVar15 = (int *)param_2[8];
      goto LAB_011ac67c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22348);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22348);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      iVar4 = param_2[9];
      goto LAB_011ac69c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22458);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22458);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x15)) {
    case 0:
      iVar4 = param_2[10];
      goto LAB_011ac6b4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3d0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 0:
      iVar4 = param_2[0xb];
      goto LAB_011ac6c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b3e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b3e0);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2b)) {
    case 0:
      local_2d8 = (undefined4 *)param_2[0x28];
      local_2c8 = (int *)param_2[0x29];
      local_2d0 = param_2[0x2a];
      goto LAB_011ac88c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x15)) {
      case 0:
        *(undefined1 *)((int)param_2 + 0x55) = 1;
        local_2c8 = (int *)param_2[0x12];
        local_2d0 = param_2[0x13];
        local_2d8 = (undefined4 *)param_2[0x14];
        local_2d4 = local_2c8 + 6;
        puVar14 = (undefined *)param_2[0x11];
        if (*(int *)(*(int *)*local_2d4 + 0x10) == 0) {
          if (param_2[0x10] != 0) goto LAB_011acc68;
          param_2[0x16] = 0;
          iVar4 = 8;
          goto LAB_011accec;
        }
        if (param_2[0x10] != 0) goto LAB_011ac8cc;
        param_2[0x16] = 0;
        iVar4 = 8;
        goto LAB_011aca54;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21a0c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21a0c);
      case 4:
        goto switchD_011ac934_caseD_4;
      }
    }
    goto switchD_011ac934_caseD_3;
  }
  local_2c8 = param_2 + 0x17;
  local_2d8 = param_2 + 4;
  local_2dc = param_2 + 0x19;
  bVar2 = FUN_019f9bc4(param_2 + 0xc,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0x14) = 3;
    *(undefined1 *)(param_2 + 0x15) = 3;
    *(undefined1 *)(param_2 + 0x16) = 3;
LAB_011ac780:
    *(undefined1 *)local_2c8 = 3;
LAB_011ac790:
    uVar3 = 3;
    *(undefined1 *)(param_2 + 0x18) = 3;
  }
  else {
    FUN_0193c3cc(param_2 + 0xc);
    if ((bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
    }
    iVar4 = param_2[0xb];
    *(undefined1 *)(param_2 + 0x14) = 1;
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_00ab7068(&local_290,iVar4 + 0x18);
    FUN_019f8c54(iVar4 + 4,1);
    uVar16 = local_290;
    *(undefined1 *)(param_2 + 0x16) = 1;
    if (local_290 == 0x80000000) goto LAB_011ac780;
    local_290 = local_28c;
    iStack_284 = local_288 * 0x2c + local_28c;
    local_288 = uVar16;
    FUN_00ded94c(&local_c8,&local_290);
    uVar1 = local_c0;
    uVar18 = local_c4;
    uVar16 = local_c8;
    *(undefined1 *)local_2c8 = 1;
    if (local_c8 == 0x80000000) goto LAB_011ac790;
    FUN_00bba254(param_2 + 8);
    *(undefined1 *)(param_2 + 0x19) = 1;
    *(undefined1 *)(param_2 + 0x18) = 1;
    local_2c8 = param_2 + 7;
    piVar15 = (int *)param_2[2];
    param_2[4] = uVar16;
    param_2[5] = uVar18;
    param_2[6] = uVar1;
    iVar9 = piVar15[4];
    iVar19 = piVar15[5];
    iVar20 = piVar15[6];
    iVar17 = piVar15[7];
    iVar4 = piVar15[8];
    iVar8 = piVar15[1];
    iVar11 = piVar15[2];
    iVar13 = piVar15[3];
    *local_2c8 = *piVar15;
    param_2[8] = iVar8;
    param_2[9] = iVar11;
    param_2[10] = iVar13;
    param_2[0xb] = iVar9 + 0x20;
    param_2[0xc] = iVar19;
    param_2[0xd] = iVar20;
    param_2[0xe] = iVar17;
    *(char *)(param_2 + 0xf) = (char)iVar4;
    local_2d0 = piVar15[4];
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0x28] = local_2d8;
    param_2[0x29] = local_2c8;
    param_2[0x2a] = local_2d0;
LAB_011ac88c:
    puVar14 = (undefined *)local_2d8[2];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0x14] = local_2d8;
    param_2[0x13] = local_2d0;
    param_2[0x10] = 1;
    param_2[0x11] = puVar14;
    param_2[0x12] = local_2c8;
    *(undefined1 *)((int)param_2 + 0x55) = 1;
    local_2d4 = local_2c8 + 6;
    if (*(int *)(*(int *)*local_2d4 + 0x10) == 0) {
LAB_011acc68:
      puVar10 = param_2 + 0x15;
      if (&UNK_00ba2e8b < puVar14) {
        uVar7 = 0;
LAB_011acc80:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,puVar10);
      }
      puVar10 = (undefined4 *)((int)puVar14 * 0xb0);
      if (puVar10 == (undefined4 *)0x0) {
        iVar4 = 8;
        puVar14 = (undefined *)0x0;
      }
      else {
        uVar7 = 8;
        iVar4 = FUN_01298504(puVar10,8);
        if (iVar4 == 0) goto LAB_011acc80;
      }
      param_2[0x16] = puVar14;
LAB_011accec:
      local_2d4 = param_2 + 0x16;
      param_2[0x17] = iVar4;
      param_2[0x18] = 0;
      *(undefined1 *)((int)param_2 + 0x55) = 0;
      if (local_2d8[2] != 0) {
        iVar4 = local_2d8[1];
        iVar8 = local_2d8[2] * 0x2c;
        iVar9 = 0;
        do {
          local_1f4 = local_2c8[5];
          iStack_1f0 = local_2c8[6];
          iStack_1ec = local_2c8[7];
          local_1e8 = (undefined1)local_2c8[8];
          local_1f8 = local_2c8[4];
          iVar11 = param_2[0x18];
          local_1fc = (int *)0x0;
          if (*local_2c8 != 0) {
            local_1fc = local_2c8 + 1;
          }
          local_208 = 1;
          local_204 = 0;
          local_1e4 = 0;
          local_20c = local_2d0;
          local_210 = iVar4;
          local_200 = iVar9;
          if (iVar11 == param_2[0x16]) {
            FUN_00a20d80(local_2d4);
          }
          iVar4 = iVar4 + 0x2c;
          FUN_01bed4e2(iVar11 * 0xb0 + param_2[0x17],&local_290,0xb0);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + -0x2c;
          param_2[0x18] = iVar11 + 1;
        } while (iVar8 != 0);
      }
      local_90 = *local_2d4;
      uStack_8c = param_2[0x17];
      uStack_88 = param_2[0x18];
      FUN_01170ca0(&local_290);
      local_c8 = local_290;
      local_c4 = local_28c;
      local_c0 = local_288;
      iStack_bc = iStack_284;
      local_b8 = local_280;
      uStack_b4 = local_27c;
      uStack_b0 = local_278;
      uStack_ac = uStack_274;
      uStack_a8 = uStack_270;
      local_a4 = local_26c;
      uStack_a0 = uStack_268;
      uStack_9c = uStack_264;
      uStack_98 = uStack_260;
      piStack_94 = local_25c;
      param_2[0x1a] = local_290;
      param_2[0x1b] = local_28c;
      param_2[0x1c] = local_288;
      param_2[0x1d] = iStack_284;
      param_2[0x1e] = local_280;
      param_2[0x1f] = local_27c;
      param_2[0x20] = local_278;
      param_2[0x21] = uStack_274;
      param_2[0x22] = uStack_270;
      param_2[0x23] = local_26c;
      param_2[0x24] = uStack_268;
      param_2[0x25] = uStack_264;
      param_2[0x26] = uStack_260;
      param_2[0x27] = local_25c;
switchD_011ac934_caseD_4:
      FUN_0115c15c(&local_290,param_2 + 0x1a,param_3);
      uVar16 = local_290;
      if (local_290 != 3) {
        puVar5 = (uint *)((uint)&local_290 | 4);
        puVar12 = &local_60;
        local_60 = *puVar5;
        uStack_5c = puVar5[1];
        uStack_58 = puVar5[2];
        puVar5 = &local_80;
        local_2d0 = local_280;
        local_2c8 = (int *)local_27c;
        local_80 = local_278;
        uStack_7c = uStack_274;
        uStack_78 = uStack_270;
        local_74 = local_26c;
        uStack_70 = uStack_268;
        uStack_6c = uStack_264;
        uStack_68 = uStack_260;
        FUN_011c634c(param_2 + 0x1a);
        goto LAB_011acec0;
      }
      uVar3 = 4;
    }
    else {
LAB_011ac8cc:
      puVar10 = param_2 + 0x15;
      if (&UNK_00505050 < puVar14) {
        uVar7 = 0;
LAB_011ac8e4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar7,puVar10);
      }
      puVar10 = (undefined4 *)((int)puVar14 * 0x198);
      if (puVar10 == (undefined4 *)0x0) {
        iVar4 = 8;
        puVar14 = (undefined *)0x0;
      }
      else {
        iVar4 = FUN_01298504(puVar10,8);
        uVar7 = 8;
        if (iVar4 == 0) goto LAB_011ac8e4;
      }
      param_2[0x16] = puVar14;
LAB_011aca54:
      param_2[0x17] = iVar4;
      param_2[0x18] = 0;
      *(undefined1 *)((int)param_2 + 0x55) = 0;
      if (local_2d8[2] != 0) {
        iVar4 = local_2d8[1];
        iVar9 = local_2d8[2] * 0x2c;
        iVar8 = 0;
        do {
          if (*local_2c8 == 1) {
            local_c8 = local_2c8[1];
            local_c4 = local_2c8[2];
            local_c0 = local_2c8[3];
          }
          local_120 = (uint)(*local_2c8 == 1);
          local_110 = local_2c8[4];
          local_10c = local_2c8[5];
          local_104 = local_2c8[7];
          local_100 = (undefined1)local_2c8[8];
          local_108 = *local_2d4;
          local_11c = local_c8;
          uStack_118 = local_c4;
          uStack_114 = local_c0;
          local_fc = 0;
          iVar11 = param_2[0x18];
          local_128 = local_2d0;
          local_200 = iVar8;
          local_124 = iVar4;
          if (iVar11 == param_2[0x16]) {
            FUN_00f9d59c(param_2 + 0x16);
          }
          iVar4 = iVar4 + 0x2c;
          FUN_01bed4e2(iVar11 * 0x198 + param_2[0x17],&local_290,0x198);
          param_2[0x18] = iVar11 + 1;
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -0x2c;
        } while (iVar9 != 0);
      }
      local_90 = param_2[0x16];
      uStack_8c = param_2[0x17];
      uStack_88 = param_2[0x18];
      FUN_011712dc(&local_290);
      local_c8 = local_290;
      local_c4 = local_28c;
      local_c0 = local_288;
      iStack_bc = iStack_284;
      local_b8 = local_280;
      uStack_b4 = local_27c;
      uStack_b0 = local_278;
      uStack_ac = uStack_274;
      uStack_a8 = uStack_270;
      local_a4 = local_26c;
      uStack_a0 = uStack_268;
      uStack_9c = uStack_264;
      uStack_98 = uStack_260;
      piStack_94 = local_25c;
      param_2[0x1a] = local_290;
      param_2[0x1b] = local_28c;
      param_2[0x1c] = local_288;
      param_2[0x1d] = iStack_284;
      param_2[0x1e] = local_280;
      param_2[0x1f] = local_27c;
      param_2[0x20] = local_278;
      param_2[0x21] = uStack_274;
      param_2[0x22] = uStack_270;
      param_2[0x23] = local_26c;
      param_2[0x24] = uStack_268;
      param_2[0x25] = uStack_264;
      param_2[0x26] = uStack_260;
      param_2[0x27] = local_25c;
switchD_011ac934_caseD_3:
      FUN_0115f27c(&local_290,param_2 + 0x1a,param_3);
      uVar16 = local_290;
      if (local_290 != 3) {
        puVar5 = (uint *)((uint)&local_290 | 4);
        puVar12 = &local_d8;
        local_d8 = *puVar5;
        uStack_d4 = puVar5[1];
        uStack_d0 = puVar5[2];
        puVar5 = &local_f8;
        local_2d0 = local_280;
        local_2c8 = (int *)local_27c;
        local_f8 = local_278;
        uStack_f4 = uStack_274;
        uStack_f0 = uStack_270;
        local_ec = local_26c;
        uStack_e8 = uStack_268;
        uStack_e4 = uStack_264;
        uStack_e0 = uStack_260;
        FUN_011c620c(param_2 + 0x1a);
LAB_011acec0:
        local_2f0 = param_2 + 0x10;
        if (uVar16 != 2) {
          local_50 = *puVar5;
          uStack_4c = puVar5[1];
          uStack_48 = puVar5[2];
          local_44 = puVar5[3];
          uStack_40 = puVar5[4];
          uStack_3c = puVar5[5];
          uStack_38 = puVar5[6];
          local_30 = *puVar12;
          uStack_2c = puVar12[1];
          uStack_28 = puVar12[2];
          piVar15 = local_25c;
          local_2d4 = local_258;
        }
        else {
          local_30 = *puVar12;
          uStack_2c = puVar12[1];
          uStack_28 = puVar12[2];
          local_2c8 = (int *)0x80000006;
          piVar15 = param_2 + 0x1a;
        }
        uVar18 = (uint)(uVar16 != 2);
        *(undefined2 *)(param_2 + 0x15) = 1;
        FUN_011c5fe8(local_2f0);
        *(undefined1 *)(param_2 + 0x2b) = 1;
        FUN_00bba28c(param_2 + 4);
        local_2a0 = local_30;
        uStack_29c = uStack_2c;
        uStack_298 = uStack_28;
        local_2c0 = local_50;
        uStack_2bc = uStack_4c;
        uStack_2b8 = uStack_48;
        local_2b4 = local_44;
        uStack_2b0 = uStack_40;
        uStack_2ac = uStack_3c;
        uStack_2a8 = uStack_38;
        *(undefined1 *)(param_2 + 3) = 1;
        FUN_011ac470(param_2);
        unaff_r6 = local_2d0;
        goto LAB_011acf74;
      }
      uVar3 = 3;
    }
    local_2dc = param_2 + 0x2b;
    *(undefined1 *)(param_2 + 0x15) = uVar3;
    uVar3 = 4;
  }
  local_2e0 = param_2 + 3;
  uVar6 = 3;
  *(undefined1 *)local_2dc = 3;
  *(undefined1 *)local_2e0 = uVar3;
  *param_1 = 2;
LAB_011acfbc:
  *(undefined1 *)(param_2 + 0x2f) = uVar6;
  return;
}

