// FUN_00a2f8bc @ 00a2f8bc size=4112 calls_out=17 calls_in=0
// strings: netmask | gateway | dnsServers

void FUN_00a2f8bc(uint *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *unaff_r7;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int **ppiVar16;
  int iVar17;
  int *unaff_r10;
  int iVar18;
  int *unaff_r11;
  int iVar19;
  int *in_r12;
  int *extraout_r12;
  int *piVar20;
  int *extraout_r12_00;
  int iVar21;
  bool bVar22;
  int *local_328;
  int *local_324;
  int *local_320;
  int *local_31c;
  int *local_304;
  int *local_300;
  int *local_2fc;
  uint auStack_2d0 [10];
  uint auStack_2a8 [10];
  uint local_280 [10];
  int *local_258;
  int *piStack_254;
  int *piStack_250;
  int *local_24c;
  int *local_248;
  int *piStack_244;
  int *piStack_240;
  int *piStack_23c;
  int *piStack_238;
  int *local_230;
  int *local_22c;
  int *local_228;
  int *local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined1 local_e8;
  int *local_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *local_d0;
  int *piStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int *local_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *local_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *local_94;
  int *piStack_90;
  int *piStack_8c;
  uint uStack_88;
  uint uStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int *local_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *local_60;
  int *piStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int *local_48;
  int *piStack_44;
  int *piStack_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  piVar9 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar11 = *param_2;
    local_2fc = (int *)param_2[1];
    local_304 = (int *)0x80000007;
    uVar15 = 0;
    param_2[2] = (int)local_2fc;
    iVar10 = local_2fc[4];
    if (*(int *)(iVar10 + 0x40) == 10) {
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,"dnsServers",10);
      local_300 = extraout_r12_00;
      if (iVar10 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2fc;
        goto LAB_00a30124;
      }
LAB_00a2ff04:
      local_304 = (int *)0x80000007;
      goto LAB_00a300c8;
    }
    local_300 = in_r12;
    if (*(int *)(iVar10 + 0x40) == 7) {
      iVar3 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,&DAT_005325f1,7);
      if (iVar3 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2fc;
        goto LAB_00a2ffb0;
      }
      iVar3 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,&DAT_004cfb47,7);
      if (iVar3 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2fc;
        goto LAB_00a2faa0;
      }
      iVar3 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,"netmask",7);
      if (iVar3 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2fc;
        goto LAB_00a2fb04;
      }
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar10 + 0x3c) + 8,"gateway",7);
      local_300 = extraout_r12;
      if (iVar10 == 0) {
        param_2[4] = iVar11;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)local_2fc;
        goto LAB_00a2fa00;
      }
      goto LAB_00a2ff04;
    }
    goto LAB_00a300c4;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0e0cc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e0cc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      local_2fc = (int *)param_2[5];
LAB_00a2ffb0:
      param_2[6] = iVar11;
      param_2[7] = (int)local_2fc;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0cc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0cc);
      }
      iVar11 = param_2[6];
    }
    piVar20 = param_2 + 4;
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar5 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar11;
    iVar21 = piVar7[4];
    iVar19 = piVar7[5];
    iVar18 = piVar7[6];
    iVar17 = piVar7[7];
    iVar11 = piVar7[8];
    iVar10 = piVar7[1];
    iVar3 = piVar7[2];
    iVar13 = piVar7[3];
    *piVar5 = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar21 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    iVar10 = piVar7[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar20;
    param_2[0xf] = (int)piVar5;
    param_2[0x10] = iVar10;
LAB_00a30040:
    iVar11 = *piVar20;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar11;
    param_2[0x12] = (int)piVar5;
    param_2[0x13] = iVar10;
    goto LAB_00a30058;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar20 = (int *)param_2[0xe];
      piVar5 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_00a30040;
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
      iVar11 = param_2[0x11];
    }
LAB_00a30058:
    FUN_006666fc(&local_230,*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
    local_304 = (int *)0x80000002;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_258 = local_21c;
    piStack_254 = local_218;
    piStack_250 = local_214;
    local_24c = local_210;
    local_248 = local_20c;
    piStack_244 = local_208;
    piStack_240 = local_204;
    local_2fc = local_22c;
    unaff_r10 = local_224;
    unaff_r11 = local_228;
    local_300 = local_230;
LAB_00a300c4:
    uVar15 = 0;
    goto LAB_00a300c8;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      local_2fc = (int *)param_2[5];
LAB_00a2faa0:
      param_2[6] = iVar11;
      param_2[7] = (int)local_2fc;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0cc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0cc);
      }
      iVar11 = param_2[6];
    }
    piVar9 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar11 + 0x18;
    iVar19 = piVar9[4];
    iVar21 = piVar9[5];
    iVar18 = piVar9[6];
    iVar17 = piVar9[7];
    iVar11 = piVar9[8];
    iVar10 = piVar9[1];
    iVar3 = piVar9[2];
    iVar13 = piVar9[3];
    param_2[5] = *piVar9;
    param_2[6] = iVar10;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar21;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    iVar11 = piVar9[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar11;
  case '\x06':
    FUN_011adb38(&local_230,param_2 + 0xe);
    if (local_230 == (int *)0x2) {
      *param_1 = 2;
      uVar2 = 6;
      goto LAB_00a300fc;
    }
    local_300 = local_228;
    local_2fc = local_224;
    puVar4 = auStack_2d0;
    unaff_r11 = local_220;
    local_304 = local_218;
    goto LAB_00a2fe54;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      local_2fc = (int *)param_2[5];
LAB_00a2fb04:
      param_2[6] = iVar11;
      param_2[7] = (int)local_2fc;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0cc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0cc);
      }
      iVar11 = param_2[6];
    }
    piVar9 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar11 + 0x24;
    iVar19 = piVar9[4];
    iVar21 = piVar9[5];
    iVar18 = piVar9[6];
    iVar17 = piVar9[7];
    iVar11 = piVar9[8];
    iVar10 = piVar9[1];
    iVar3 = piVar9[2];
    iVar13 = piVar9[3];
    param_2[5] = *piVar9;
    param_2[6] = iVar10;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar21;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    iVar11 = piVar9[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar11;
  case '\b':
    FUN_011adb38(&local_230,param_2 + 0xe);
    if (local_230 == (int *)0x2) {
      *param_1 = 2;
      uVar2 = 8;
      goto LAB_00a300fc;
    }
    local_300 = local_228;
    local_2fc = local_224;
    puVar4 = auStack_2a8;
    goto LAB_00a2fe44;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      local_2fc = (int *)param_2[5];
LAB_00a2fa00:
      param_2[6] = iVar11;
      param_2[7] = (int)local_2fc;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0cc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0cc);
      }
      iVar11 = param_2[6];
    }
    piVar9 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar11 + 0x30;
    iVar19 = piVar9[4];
    iVar21 = piVar9[5];
    iVar18 = piVar9[6];
    iVar17 = piVar9[7];
    iVar11 = piVar9[8];
    iVar10 = piVar9[1];
    iVar3 = piVar9[2];
    iVar13 = piVar9[3];
    param_2[5] = *piVar9;
    param_2[6] = iVar10;
    param_2[7] = iVar3;
    param_2[8] = iVar13;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar21;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    iVar11 = piVar9[4];
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0xe] = (int)(param_2 + 4);
    param_2[0xf] = (int)(param_2 + 5);
    param_2[0x10] = iVar11;
    break;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar11 = param_2[4];
      local_2fc = (int *)param_2[5];
LAB_00a30124:
      param_2[6] = iVar11;
      param_2[7] = (int)local_2fc;
      *(undefined1 *)(param_2 + 8) = 0;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e0cc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e0cc);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e0cc);
      }
      iVar11 = param_2[6];
    }
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_300 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar9 = param_2 + 4;
    *piVar9 = iVar11 + 0xc;
    iVar10 = piVar5[4];
    iVar19 = piVar5[5];
    iVar18 = piVar5[6];
    iVar17 = piVar5[7];
    iVar11 = piVar5[8];
    iVar3 = piVar5[1];
    iVar13 = piVar5[2];
    unaff_r7 = (int *)piVar5[3];
    *local_300 = *piVar5;
    param_2[6] = iVar3;
    param_2[7] = iVar13;
    param_2[8] = (int)unaff_r7;
    param_2[9] = iVar10 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar17;
    *(char *)(param_2 + 0xd) = (char)iVar11;
    local_2fc = (int *)piVar5[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar9;
    param_2[0x2b] = (int)local_300;
    param_2[0x2c] = (int)local_2fc;
LAB_00a301cc:
    iVar11 = *piVar9;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar11;
    param_2[0x27] = (int)local_300;
    param_2[0x28] = (int)local_2fc;
LAB_00a301e8:
    uVar15 = *(uint *)(iVar11 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = uVar15;
    param_2[0x10] = (int)local_300;
    param_2[0x11] = (int)local_2fc;
    param_2[0x12] = iVar11;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_304 = local_300 + 6;
    if (*(int *)(*(int *)*local_304 + 0x10) != 0) {
LAB_00a3022c:
      if (0x62b2e4 < uVar15) {
        uVar14 = 0;
        piVar9 = local_2fc;
LAB_00a30240:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,piVar9);
      }
      piVar9 = (int *)(uVar15 * 0x14c);
      if (piVar9 == (int *)0x0) {
        iVar10 = 4;
        uVar15 = 0;
      }
      else {
        uVar14 = 4;
        iVar10 = FUN_01298504(piVar9,4);
        if (iVar10 == 0) goto LAB_00a30240;
      }
      param_2[0x14] = uVar15;
LAB_00a302a8:
      param_2[0x15] = iVar10;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar11 + 8) != 0) {
        piVar5 = *(int **)(iVar11 + 4);
        piVar9 = (int *)0x0;
        iVar11 = *(int *)(iVar11 + 8) * 0xc;
        puVar6 = (undefined4 *)((uint)&local_230 | 4);
        do {
          if (*local_300 == 1) {
            local_b8 = (int *)local_300[1];
            piStack_b4 = (int *)local_300[2];
            piStack_b0 = (int *)local_300[3];
          }
          local_230 = (int *)(uint)(*local_300 == 1);
          local_220 = (int *)local_300[4];
          local_21c = (int *)local_300[5];
          local_218 = (int *)*local_304;
          local_214 = (int *)local_300[7];
          iVar10 = local_300[8];
          *puVar6 = local_b8;
          puVar6[1] = piStack_b4;
          puVar6[2] = piStack_b0;
          local_e8 = 0;
          iVar3 = param_2[0x16];
          local_210 = (int *)CONCAT31(local_210._1_3_,(char)iVar10);
          local_20c = local_2fc;
          local_208 = piVar5;
          local_204 = piVar9;
          if (iVar3 == param_2[0x14]) {
            FUN_00a20f90(param_2 + 0x14);
          }
          piVar5 = piVar5 + 3;
          FUN_01bed4e2(iVar3 * 0x14c + param_2[0x15],&local_230,0x14c);
          piVar9 = (int *)((int)piVar9 + 1);
          iVar11 = iVar11 + -0xc;
          param_2[0x16] = iVar3 + 1;
        } while (iVar11 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a1317c(&local_230);
      local_b8 = local_230;
      piStack_b4 = local_22c;
      piStack_b0 = local_228;
      piStack_ac = local_224;
      local_a8 = local_220;
      piStack_a4 = local_21c;
      piStack_a0 = local_218;
      piStack_9c = local_214;
      piStack_98 = local_210;
      local_94 = local_20c;
      piStack_90 = local_208;
      piStack_8c = local_204;
      uStack_88 = uStack_200;
      uStack_84 = uStack_1fc;
      param_2[0x18] = (int)local_230;
      param_2[0x19] = (int)local_22c;
      param_2[0x1a] = (int)local_228;
      param_2[0x1b] = (int)local_224;
      param_2[0x1c] = (int)local_220;
      param_2[0x1d] = (int)local_21c;
      param_2[0x1e] = (int)local_218;
      param_2[0x1f] = (int)local_214;
      param_2[0x20] = (int)local_210;
      param_2[0x21] = (int)local_20c;
      param_2[0x22] = (int)local_208;
      param_2[0x23] = (int)local_204;
      param_2[0x24] = uStack_200;
      param_2[0x25] = uStack_1fc;
      goto LAB_00a30420;
    }
LAB_00a304e4:
    if (0x147ae14 < uVar15) {
      uVar14 = 0;
LAB_00a304f8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,unaff_r7);
    }
    unaff_r7 = (int *)(uVar15 * 100);
    if (unaff_r7 == (int *)0x0) {
      iVar10 = 4;
      uVar15 = 0;
    }
    else {
      uVar14 = 4;
      iVar10 = FUN_01298504(unaff_r7,4);
      if (iVar10 == 0) goto LAB_00a304f8;
    }
    param_2[0x14] = uVar15;
LAB_00a30568:
    piVar9 = param_2 + 0x14;
    param_2[0x15] = iVar10;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar11 + 8) != 0) {
      iVar3 = param_2[0x16];
      iVar17 = 0;
      iVar10 = *(int *)(iVar11 + 8) * 0xc;
      iVar13 = iVar3 * 100;
      iVar11 = *(int *)(iVar11 + 4);
      do {
        iVar18 = local_300[4];
        iVar19 = local_300[5];
        iVar21 = local_300[6];
        iVar8 = local_300[7];
        piVar5 = (int *)0x0;
        if (*local_300 != 0) {
          piVar5 = local_300 + 1;
        }
        iVar1 = local_300[8];
        iVar12 = iVar3 + iVar17;
        if (iVar12 == *piVar9) {
          FUN_00a21020(piVar9);
        }
        iVar10 = iVar10 + -0xc;
        puVar6 = (undefined4 *)(param_2[0x15] + iVar13);
        *puVar6 = 1;
        iVar13 = iVar13 + 100;
        *(char *)(puVar6 + 8) = (char)iVar1;
        puVar6[4] = iVar18;
        puVar6[2] = iVar17;
        iVar17 = iVar17 + 1;
        puVar6[5] = iVar19;
        puVar6[9] = iVar11;
        puVar6[6] = iVar21;
        *(undefined1 *)(puVar6 + 0x18) = 0;
        puVar6[10] = local_2fc;
        puVar6[1] = 0;
        puVar6[3] = piVar5;
        puVar6[7] = iVar8;
        param_2[0x16] = iVar12 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar10 != 0);
    }
    local_80 = *piVar9;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a16528(&local_230);
    local_b8 = local_230;
    piStack_b4 = local_22c;
    piStack_b0 = local_228;
    piStack_ac = local_224;
    local_a8 = local_220;
    piStack_a4 = local_21c;
    piStack_a0 = local_218;
    piStack_9c = local_214;
    piStack_98 = local_210;
    local_94 = local_20c;
    piStack_90 = local_208;
    piStack_8c = local_204;
    uStack_88 = uStack_200;
    uStack_84 = uStack_1fc;
    param_2[0x18] = (int)local_230;
    param_2[0x19] = (int)local_22c;
    param_2[0x1a] = (int)local_228;
    param_2[0x1b] = (int)local_224;
    param_2[0x1c] = (int)local_220;
    param_2[0x1d] = (int)local_21c;
    param_2[0x1e] = (int)local_218;
    param_2[0x1f] = (int)local_214;
    param_2[0x20] = (int)local_210;
    param_2[0x21] = (int)local_20c;
    param_2[0x22] = (int)local_208;
    param_2[0x23] = (int)local_204;
    param_2[0x24] = uStack_200;
    param_2[0x25] = uStack_1fc;
LAB_00a306d0:
    FUN_00a08b00(&local_230,param_2 + 0x18,param_3);
    unaff_r10 = local_220;
    piVar9 = local_230;
    if (local_230 != (int *)&DAT_00000003) {
      ppiVar16 = &local_70;
      local_300 = local_22c;
      local_2fc = local_228;
      local_304 = local_21c;
      local_70 = local_218;
      piStack_6c = local_214;
      piStack_68 = local_210;
      piStack_64 = local_20c;
      local_60 = local_208;
      piStack_5c = local_204;
      uStack_58 = uStack_200;
      uStack_54 = uStack_1fc;
      uStack_50 = uStack_1f8;
      FUN_00a30d7c(param_2 + 0x18);
      unaff_r11 = local_224;
      goto LAB_00a3076c;
    }
    uVar2 = 4;
LAB_00a306f8:
    local_328 = param_2 + 0x13;
    *(undefined1 *)local_328 = uVar2;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar2 = 0xc;
    goto LAB_00a300fc;
  case '\f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar9 = (int *)param_2[0x2a];
      local_300 = (int *)param_2[0x2b];
      local_2fc = (int *)param_2[0x2c];
      goto LAB_00a301cc;
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
      iVar11 = param_2[0x26];
      local_300 = (int *)param_2[0x27];
      local_2fc = (int *)param_2[0x28];
      goto LAB_00a301e8;
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
      uVar15 = param_2[0xf];
      local_300 = (int *)param_2[0x10];
      unaff_r7 = local_300 + 6;
      local_2fc = (int *)param_2[0x11];
      iVar11 = param_2[0x12];
      if (*(int *)(*(int *)*unaff_r7 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00a304e4;
        iVar10 = 4;
        param_2[0x14] = 0;
        goto LAB_00a30568;
      }
      local_304 = unaff_r7;
      if (param_2[0xe] != 0) goto LAB_00a3022c;
      param_2[0x14] = 0;
      iVar10 = 4;
      goto LAB_00a302a8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00a306d0;
    }
LAB_00a30420:
    FUN_009f827c(&local_230,param_2 + 0x18,param_3);
    unaff_r10 = local_220;
    piVar9 = local_230;
    if (local_230 == (int *)&DAT_00000003) {
      uVar2 = 3;
      goto LAB_00a306f8;
    }
    ppiVar16 = &local_e0;
    local_300 = local_22c;
    local_2fc = local_228;
    local_304 = local_21c;
    local_e0 = local_218;
    piStack_dc = local_214;
    piStack_d8 = local_210;
    piStack_d4 = local_20c;
    local_d0 = local_208;
    piStack_cc = local_204;
    uStack_c8 = uStack_200;
    uStack_c4 = uStack_1fc;
    uStack_c0 = uStack_1f8;
    FUN_00a30c3c(param_2 + 0x18);
    unaff_r11 = local_224;
LAB_00a3076c:
    local_320 = param_2 + 0x2d;
    local_324 = param_2 + 0x29;
    local_31c = param_2 + 0xe;
    bVar22 = piVar9 != (int *)0x2;
    if (bVar22) {
      local_48 = *ppiVar16;
      piStack_44 = ppiVar16[1];
      piStack_40 = ppiVar16[2];
      local_3c = ppiVar16[3];
      local_38 = ppiVar16[4];
      piStack_34 = ppiVar16[5];
      piStack_30 = ppiVar16[6];
      piStack_2c = ppiVar16[7];
      piStack_28 = ppiVar16[8];
    }
    else {
      local_304 = (int *)0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00a30edc(local_31c);
    *(undefined1 *)local_320 = 1;
    *(undefined1 *)local_324 = 1;
    if (bVar22) {
      piStack_23c = piStack_2c;
      piStack_238 = piStack_28;
    }
    piStack_240 = piStack_30;
    piStack_244 = piStack_34;
    local_248 = local_38;
    local_24c = local_3c;
    piStack_250 = piStack_40;
    piStack_254 = piStack_44;
    local_258 = local_48;
    uVar15 = (uint)bVar22;
    goto LAB_00a300c8;
  }
  FUN_011adb38(&local_230,param_2 + 0xe);
  if (local_230 == (int *)0x2) {
    *param_1 = 2;
    uVar2 = 10;
  }
  else {
    local_300 = local_228;
    local_2fc = local_224;
    puVar4 = local_280;
LAB_00a2fe44:
    unaff_r11 = local_220;
    local_304 = local_218;
LAB_00a2fe54:
    bVar22 = ((uint)local_230 & 1) == 0;
    *puVar4 = (uint)local_214;
    puVar4[1] = (uint)local_210;
    puVar4[2] = (uint)local_20c;
    puVar4[3] = (uint)local_208;
    puVar4[4] = (uint)local_204;
    puVar4[5] = uStack_200;
    puVar4[6] = uStack_1fc;
    puVar4[7] = uStack_1f8;
    puVar4[8] = uStack_1f4;
    if (bVar22) {
      local_258 = (int *)*puVar4;
      piStack_254 = (int *)puVar4[1];
      piStack_250 = (int *)puVar4[2];
      local_24c = (int *)puVar4[3];
      local_248 = (int *)puVar4[4];
      piStack_244 = (int *)puVar4[5];
      piStack_240 = (int *)puVar4[6];
    }
    else {
      local_258 = (int *)*puVar4;
      piStack_254 = (int *)puVar4[1];
      piStack_250 = (int *)puVar4[2];
      local_24c = (int *)puVar4[3];
      local_248 = (int *)puVar4[4];
      piStack_244 = (int *)puVar4[5];
      piStack_240 = (int *)puVar4[6];
      piStack_23c = (int *)puVar4[7];
      piStack_238 = (int *)puVar4[8];
    }
    uVar15 = (uint)!bVar22;
    piVar9 = local_22c;
    unaff_r10 = local_21c;
LAB_00a300c8:
    *param_1 = uVar15;
    param_1[1] = (uint)piVar9;
    param_1[2] = (uint)local_300;
    param_1[3] = (uint)local_2fc;
    param_1[4] = (uint)unaff_r11;
    param_1[5] = (uint)unaff_r10;
    param_1[6] = (uint)local_304;
    param_1[7] = (uint)local_258;
    param_1[8] = (uint)piStack_254;
    param_1[9] = (uint)piStack_250;
    param_1[10] = (uint)local_24c;
    param_1[0xb] = (uint)local_248;
    param_1[0xc] = (uint)piStack_244;
    param_1[0xd] = (uint)piStack_240;
    param_1[0xe] = (uint)piStack_23c;
    param_1[0xf] = (uint)piStack_238;
    uVar2 = 1;
  }
LAB_00a300fc:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

