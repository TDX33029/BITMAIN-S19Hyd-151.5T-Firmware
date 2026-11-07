// FUN_011c6514 @ 011c6514 size=4252 calls_out=20 calls_in=0
// strings: modes | modeDefault | powerTarget | enabled | hashrateTarget

void FUN_011c6514(uint *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  int iVar9;
  int iVar10;
  undefined4 **ppuVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *unaff_r8;
  undefined4 *puVar16;
  undefined4 *unaff_r9;
  undefined4 uVar17;
  int iVar18;
  undefined4 *unaff_r10;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  int *local_310;
  int *local_30c;
  int *local_308;
  undefined4 *local_2f4;
  undefined4 *local_2ec;
  int *local_2e8;
  int *local_2e4;
  undefined4 *local_2d8;
  undefined4 *puStack_2d4;
  undefined4 *puStack_2d0;
  undefined4 *puStack_2cc;
  undefined4 *local_2c8;
  undefined4 *puStack_2c4;
  undefined4 *puStack_2c0;
  undefined4 *puStack_2bc;
  undefined4 uStack_2b8;
  undefined4 *local_290;
  undefined4 *puStack_28c;
  undefined4 *puStack_288;
  undefined4 *puStack_284;
  undefined4 *local_280;
  undefined4 *puStack_27c;
  undefined4 *puStack_278;
  undefined4 *puStack_274;
  undefined4 uStack_270;
  undefined4 *local_268;
  undefined4 *puStack_264;
  undefined4 *puStack_260;
  undefined4 *local_25c;
  undefined4 *local_258;
  undefined4 *puStack_254;
  undefined4 *puStack_250;
  undefined4 *puStack_24c;
  undefined4 uStack_248;
  undefined4 *local_240;
  undefined4 *puStack_23c;
  undefined4 *puStack_238;
  undefined4 *local_234;
  undefined4 *local_230;
  undefined4 *puStack_22c;
  undefined4 *puStack_228;
  undefined4 *puStack_224;
  undefined4 *puStack_220;
  undefined4 *local_218;
  undefined4 *local_214;
  undefined4 *local_210;
  undefined4 *local_20c;
  undefined4 *local_208;
  undefined4 *local_204;
  undefined4 *local_200;
  undefined4 *local_1fc;
  undefined4 *local_1f8;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e4;
  undefined4 *puStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_e4;
  undefined4 *local_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 *local_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  undefined4 *local_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *local_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *local_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 *local_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar10 = param_2[1];
    puVar20 = (undefined4 *)0x80000007;
    param_2[2] = iVar10;
    uVar14 = 0;
    iVar13 = *param_2;
    iVar9 = *(int *)(iVar10 + 0x10);
    local_2e8 = param_3;
    local_2ec = param_4;
    local_2e4 = unaff_r9;
    switch(*(undefined4 *)(iVar9 + 0x40)) {
    case 5:
      iVar9 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,"modes",5);
      local_2e8 = extraout_r2;
      local_2ec = extraout_r3;
      if (iVar9 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_011c666c;
      }
      break;
    case 7:
      iVar9 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,"enabled",7);
      local_2e8 = extraout_r2_01;
      local_2ec = extraout_r3_01;
      if (iVar9 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_011c673c;
      }
      break;
    case 0xb:
      iVar15 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,"modeDefault",0xb);
      if (iVar15 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_011c6780;
      }
      iVar9 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,"powerTarget",0xb);
      local_2e8 = extraout_r2_00;
      local_2ec = extraout_r3_00;
      if (iVar9 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_011c66b4;
      }
      break;
    case 0xe:
      iVar9 = thunk_FUN_01bed842(*(int *)(iVar9 + 0x3c) + 8,"hashrateTarget",0xe);
      local_2e8 = extraout_r2_02;
      local_2ec = extraout_r3_02;
      if (iVar9 == 0) {
        param_2[4] = iVar13;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar10;
        goto LAB_011c67c4;
      }
    }
    goto switchD_011c65a0_caseD_6;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20dc4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20dc4);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar10 = param_2[5];
LAB_011c673c:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20dc4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20dc4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20dc4);
      }
      iVar13 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x74;
    iVar21 = piVar7[4];
    iVar23 = piVar7[5];
    iVar19 = piVar7[6];
    iVar18 = piVar7[7];
    iVar13 = piVar7[8];
    iVar10 = piVar7[1];
    iVar9 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar9;
    param_2[8] = iVar15;
    param_2[9] = iVar21 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar19;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar7[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar13;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar10 = param_2[5];
LAB_011c666c:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20dc4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20dc4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20dc4);
      }
      iVar13 = param_2[6];
    }
    piVar7 = param_2 + 4;
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x68;
    local_2e4 = param_2 + 5;
    iVar18 = piVar5[4];
    iVar19 = piVar5[5];
    unaff_r10 = (undefined4 *)piVar5[6];
    unaff_r9 = (undefined4 *)piVar5[7];
    iVar13 = piVar5[8];
    iVar10 = piVar5[1];
    iVar9 = piVar5[2];
    iVar15 = piVar5[3];
    *local_2e4 = *piVar5;
    param_2[6] = iVar10;
    param_2[7] = iVar9;
    param_2[8] = iVar15;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = (int)unaff_r10;
    param_2[0xc] = (int)unaff_r9;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    local_2f4 = (undefined4 *)piVar5[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2c] = (int)local_2f4;
    param_2[0x2b] = (int)local_2e4;
    param_2[0x2a] = (int)piVar7;
LAB_011c6884:
    iVar13 = *piVar7;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar13;
    param_2[0x27] = (int)local_2e4;
    param_2[0x28] = (int)local_2f4;
LAB_011c68a4:
    uVar14 = *(uint *)(iVar13 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar13;
    param_2[0x11] = (int)local_2f4;
    param_2[0xe] = 1;
    param_2[0xf] = uVar14;
    param_2[0x10] = (int)local_2e4;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2e8 = local_2e4 + 6;
    if (*(int *)(*(int *)*local_2e8 + 0x10) != 0) {
LAB_011c68e8:
      if (0x690690 < uVar14) {
        uVar17 = 0;
LAB_011c68fc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,unaff_r10);
      }
      unaff_r10 = (undefined4 *)(uVar14 * 0x138);
      if (unaff_r10 == (undefined4 *)0x0) {
        iVar10 = 4;
        uVar14 = 0;
      }
      else {
        uVar17 = 4;
        iVar10 = FUN_01298504(unaff_r10,4);
        if (iVar10 == 0) goto LAB_011c68fc;
      }
      param_2[0x14] = uVar14;
LAB_011c6f28:
      param_2[0x15] = iVar10;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      puVar20 = *(undefined4 **)(iVar13 + 8);
      if (puVar20 != (undefined4 *)0x0) {
        iVar13 = *(int *)(iVar13 + 4);
        puVar16 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)((uint)&local_218 | 4);
        do {
          if (*local_2e4 == 1) {
            local_b8 = (undefined4 *)local_2e4[1];
            puStack_b4 = (undefined4 *)local_2e4[2];
            puStack_b0 = (undefined4 *)local_2e4[3];
          }
          local_218 = (undefined4 *)(uint)(*local_2e4 == 1);
          local_208 = (undefined4 *)local_2e4[4];
          local_204 = (undefined4 *)local_2e4[5];
          local_1f0 = (undefined4 *)(iVar13 + (int)puVar16);
          local_1fc = (undefined4 *)local_2e4[7];
          iVar10 = local_2e4[8];
          local_200 = (undefined4 *)*local_2e8;
          *puVar6 = local_b8;
          puVar6[1] = puStack_b4;
          puVar6[2] = puStack_b0;
          local_e4 = 0;
          iVar9 = param_2[0x16];
          local_1f8 = (undefined4 *)CONCAT31(local_1f8._1_3_,(char)iVar10);
          local_1f4 = local_2f4;
          local_1ec = puVar16;
          if (iVar9 == param_2[0x14]) {
            FUN_00f9d6bc(param_2 + 0x14);
          }
          puVar16 = (undefined4 *)((int)puVar16 + 1);
          FUN_01bed4e2(iVar9 * 0x138 + param_2[0x15],&local_218,0x138);
          param_2[0x16] = iVar9 + 1;
        } while (puVar20 != puVar16);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_01171f1c(&local_218);
      local_b8 = local_218;
      puStack_b4 = local_214;
      puStack_b0 = local_210;
      puStack_ac = local_20c;
      local_a8 = local_208;
      puStack_a4 = local_204;
      puStack_a0 = local_200;
      puStack_9c = local_1fc;
      puStack_98 = local_1f8;
      local_94 = local_1f4;
      puStack_90 = local_1f0;
      puStack_8c = local_1ec;
      puStack_88 = puStack_1e8;
      puStack_84 = puStack_1e4;
      param_2[0x18] = (int)local_218;
      param_2[0x19] = (int)local_214;
      param_2[0x1a] = (int)local_210;
      param_2[0x1b] = (int)local_20c;
      param_2[0x1c] = (int)local_208;
      param_2[0x1d] = (int)local_204;
      param_2[0x1e] = (int)local_200;
      param_2[0x1f] = (int)local_1fc;
      param_2[0x20] = (int)local_1f8;
      param_2[0x21] = (int)local_1f4;
      param_2[0x22] = (int)local_1f0;
      param_2[0x23] = (int)local_1ec;
      param_2[0x24] = (int)puStack_1e8;
      param_2[0x25] = (int)puStack_1e4;
      goto switchD_011c6ea0_caseD_3;
    }
LAB_011c7240:
    if (0x1999999 < uVar14) {
      uVar17 = 0;
LAB_011c7254:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,unaff_r9);
    }
    unaff_r9 = (undefined4 *)(uVar14 * 0x50);
    if (unaff_r9 == (undefined4 *)0x0) {
      iVar10 = 4;
      uVar14 = 0;
    }
    else {
      uVar17 = 4;
      iVar10 = FUN_01298504(unaff_r9,4);
      if (iVar10 == 0) goto LAB_011c7254;
    }
    param_2[0x14] = uVar14;
LAB_011c72a8:
    piVar7 = param_2 + 0x14;
    param_2[0x15] = iVar10;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    iVar10 = *(int *)(iVar13 + 8);
    if (iVar10 != 0) {
      iVar15 = *(int *)(iVar13 + 4);
      iVar18 = param_2[0x16];
      iVar13 = iVar18 * 0x50;
      iVar9 = 0;
      do {
        iVar19 = local_2e4[4];
        iVar21 = local_2e4[6];
        iVar23 = local_2e4[7];
        piVar5 = (int *)0x0;
        if (*local_2e4 != 0) {
          piVar5 = local_2e4 + 1;
        }
        iVar22 = local_2e4[5];
        iVar2 = local_2e4[8];
        iVar12 = iVar18 + iVar9;
        if (iVar12 == *piVar7) {
          FUN_00a20f30(piVar7);
        }
        iVar8 = iVar9 + 1;
        puVar20 = (undefined4 *)(param_2[0x15] + iVar13);
        *puVar20 = 1;
        iVar13 = iVar13 + 0x50;
        puVar20[9] = iVar15 + iVar9;
        puVar20[4] = iVar19;
        puVar20[6] = iVar21;
        puVar20[7] = iVar23;
        puVar20[1] = 0;
        puVar20[2] = iVar9;
        *(undefined1 *)(puVar20 + 0x13) = 0;
        puVar20[10] = local_2f4;
        *(char *)(puVar20 + 8) = (char)iVar2;
        puVar20[3] = piVar5;
        puVar20[5] = iVar22;
        param_2[0x16] = iVar12 + 1;
        iVar9 = iVar8;
      } while (iVar10 != iVar8);
    }
    local_80 = *piVar7;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_01172554(&local_218);
    local_b8 = local_218;
    puStack_b4 = local_214;
    puStack_b0 = local_210;
    puStack_ac = local_20c;
    local_a8 = local_208;
    puStack_a4 = local_204;
    puStack_a0 = local_200;
    puStack_9c = local_1fc;
    puStack_98 = local_1f8;
    local_94 = local_1f4;
    puStack_90 = local_1f0;
    puStack_8c = local_1ec;
    puStack_88 = puStack_1e8;
    puStack_84 = puStack_1e4;
    param_2[0x18] = (int)local_218;
    param_2[0x19] = (int)local_214;
    param_2[0x1a] = (int)local_210;
    param_2[0x1b] = (int)local_20c;
    param_2[0x1c] = (int)local_208;
    param_2[0x1d] = (int)local_204;
    param_2[0x1e] = (int)local_200;
    param_2[0x1f] = (int)local_1fc;
    param_2[0x20] = (int)local_1f8;
    param_2[0x21] = (int)local_1f4;
    param_2[0x22] = (int)local_1f0;
    param_2[0x23] = (int)local_1ec;
    param_2[0x24] = (int)puStack_1e8;
    param_2[0x25] = (int)puStack_1e4;
switchD_011c6ea0_caseD_4:
    FUN_01146d2c(&local_218,param_2 + 0x18,*param_3);
    puVar20 = local_204;
    unaff_r8 = local_208;
    unaff_r10 = local_218;
    if (local_218 != (undefined4 *)&DAT_00000003) {
      local_2ec = local_214;
      local_2e4 = local_210;
      local_2e8 = local_20c;
      local_70 = local_200;
      puStack_6c = local_1fc;
      puStack_68 = local_1f8;
      puStack_64 = local_1f4;
      local_60 = local_1f0;
      puStack_5c = local_1ec;
      puStack_58 = puStack_1e8;
      puStack_54 = puStack_1e4;
      puStack_50 = puStack_1e0;
      FUN_011c7aac(param_2 + 0x18);
      if (unaff_r10 == (undefined4 *)0x2) goto LAB_011c74b0;
      local_48 = local_70;
      puStack_44 = puStack_6c;
      puStack_40 = puStack_68;
      local_3c = puStack_64;
      local_38 = local_60;
      puStack_34 = puStack_5c;
      puStack_30 = puStack_58;
      puStack_2c = puStack_54;
      puStack_28 = puStack_50;
      goto LAB_011c74cc;
    }
    uVar3 = 4;
LAB_011c7438:
    local_308 = param_2 + 0x2d;
    local_30c = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar3;
    *(undefined1 *)local_308 = 3;
    *(undefined1 *)local_30c = 3;
    *param_1 = 2;
    uVar3 = 6;
    goto LAB_011c6e84;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar7 = (int *)param_2[0x2a];
      local_2e4 = (int *)param_2[0x2b];
      local_2f4 = (undefined4 *)param_2[0x2c];
      goto LAB_011c6884;
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
      local_2e4 = (int *)param_2[0x27];
      local_2f4 = (undefined4 *)param_2[0x28];
      goto LAB_011c68a4;
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
      local_2e4 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_2e8 = local_2e4 + 6;
      uVar14 = param_2[0xf];
      local_2f4 = (undefined4 *)param_2[0x11];
      iVar13 = param_2[0x12];
      if (*(int *)(*(int *)*local_2e8 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_011c7240;
        param_2[0x14] = 0;
        iVar10 = 4;
        goto LAB_011c72a8;
      }
      if (param_2[0xe] != 0) goto LAB_011c68e8;
      param_2[0x14] = 0;
      iVar10 = 4;
      goto LAB_011c6f28;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x04':
      goto switchD_011c6ea0_caseD_4;
    }
switchD_011c6ea0_caseD_3:
    FUN_01169c30(&local_218,param_2 + 0x18,param_3);
    puVar20 = local_204;
    unaff_r8 = local_208;
    unaff_r10 = local_218;
    if (local_218 == (undefined4 *)&DAT_00000003) {
      uVar3 = 3;
      goto LAB_011c7438;
    }
    local_2ec = local_214;
    local_2e4 = local_210;
    local_2e8 = local_20c;
    local_e0 = local_200;
    puStack_dc = local_1fc;
    puStack_d8 = local_1f8;
    puStack_d4 = local_1f4;
    local_d0 = local_1f0;
    puStack_cc = local_1ec;
    puStack_c8 = puStack_1e8;
    puStack_c4 = puStack_1e4;
    puStack_c0 = puStack_1e0;
    FUN_011c796c(param_2 + 0x18);
    if (unaff_r10 == (undefined4 *)0x2) {
LAB_011c74b0:
      puVar20 = (undefined4 *)0x80000006;
      bVar24 = false;
    }
    else {
      local_48 = local_e0;
      puStack_44 = puStack_dc;
      puStack_40 = puStack_d8;
      local_3c = puStack_d4;
      local_38 = local_d0;
      puStack_34 = puStack_cc;
      puStack_30 = puStack_c8;
      puStack_2c = puStack_c4;
      puStack_28 = puStack_c0;
LAB_011c74cc:
      bVar24 = true;
    }
    local_308 = param_2 + 0x2d;
    local_30c = param_2 + 0x29;
    local_310 = param_2 + 0xe;
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_011c7c0c(local_310);
    *(undefined1 *)local_308 = 1;
    *(undefined1 *)local_30c = 1;
    if (bVar24) {
      local_240 = local_48;
      puStack_23c = puStack_44;
      puStack_238 = puStack_40;
      local_234 = local_3c;
      local_230 = local_38;
      puStack_22c = puStack_34;
      puStack_228 = puStack_30;
      puStack_224 = puStack_2c;
      puStack_220 = puStack_28;
      uVar14 = 1;
    }
    else {
      local_240 = local_48;
      puStack_23c = puStack_44;
      puStack_238 = puStack_40;
      local_234 = local_3c;
      local_230 = local_38;
      puStack_22c = puStack_34;
      puStack_228 = puStack_30;
      uVar14 = 0;
    }
    goto LAB_011c6e44;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar10 = param_2[5];
LAB_011c6780:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20dc4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20dc4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20dc4);
      }
      iVar13 = param_2[6];
    }
    local_2e4 = param_2 + 4;
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x75;
    iVar21 = piVar5[4];
    unaff_r10 = (undefined4 *)piVar5[5];
    iVar19 = piVar5[6];
    iVar18 = piVar5[7];
    iVar13 = piVar5[8];
    iVar10 = piVar5[1];
    iVar9 = piVar5[2];
    iVar15 = piVar5[3];
    *piVar7 = *piVar5;
    param_2[6] = iVar10;
    param_2[7] = iVar9;
    param_2[8] = iVar15;
    param_2[9] = iVar21 + 0x20;
    param_2[10] = (int)unaff_r10;
    param_2[0xb] = iVar19;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar5[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_2e4;
    param_2[0xf] = (int)piVar7;
    param_2[0x10] = iVar13;
LAB_011c6c74:
    puVar4 = (undefined1 *)*local_2e4;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)puVar4;
    param_2[0x12] = (int)piVar7;
    param_2[0x13] = iVar13;
    goto LAB_011c6c8c;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_2e4 = (int *)param_2[0xe];
      piVar7 = (int *)param_2[0xf];
      iVar13 = param_2[0x10];
      goto LAB_011c6c74;
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
          FUN_013079f0(&DAT_01c22530);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22530);
      }
      puVar4 = (undefined1 *)param_2[0x11];
    }
LAB_011c6c8c:
    FUN_00b565c4(&local_218,*puVar4);
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_240 = local_204;
    puStack_23c = local_200;
    puStack_238 = local_1fc;
    local_234 = local_1f8;
    local_230 = local_1f4;
    puStack_22c = local_1f0;
    puStack_228 = local_1ec;
    uVar14 = 0;
    local_2e8 = local_210;
    local_2ec = local_218;
    unaff_r8 = local_20c;
    local_2e4 = local_214;
    puVar20 = local_208;
    goto switchD_011c65a0_caseD_6;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar10 = param_2[5];
LAB_011c66b4:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20dc4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20dc4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20dc4);
      }
      iVar13 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13 + 0x48;
    iVar21 = piVar7[4];
    iVar23 = piVar7[5];
    iVar19 = piVar7[6];
    iVar18 = piVar7[7];
    iVar13 = piVar7[8];
    iVar10 = piVar7[1];
    iVar9 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar9;
    param_2[8] = iVar15;
    param_2[9] = iVar21 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar19;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar7[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar13;
  case '\n':
    FUN_011a2318(&local_218,param_2 + 0xe,param_3);
    if (local_218 == (undefined4 *)0x2) {
      *param_1 = 2;
      uVar3 = 10;
      goto LAB_011c6e84;
    }
    ppuVar11 = &local_290;
    local_290 = local_1fc;
    puStack_28c = local_1f8;
    puStack_288 = local_1f4;
    puStack_284 = local_1f0;
    local_280 = local_1ec;
    puStack_27c = puStack_1e8;
    puStack_278 = puStack_1e4;
    puStack_274 = puStack_1e0;
    uStack_270 = uStack_1dc;
    unaff_r8 = local_204;
    unaff_r10 = local_214;
    puVar20 = local_200;
    local_2ec = local_210;
    local_2e8 = local_208;
    local_2e4 = local_20c;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar24 = cVar1 == '\x03';
      if (bVar24) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar24 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto joined_r0x011c6e20;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar13 = param_2[4];
      iVar10 = param_2[5];
LAB_011c67c4:
      param_2[6] = iVar13;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar10;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20dc4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20dc4);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20dc4);
      }
      iVar13 = param_2[6];
    }
    piVar7 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar13;
    iVar21 = piVar7[4];
    iVar23 = piVar7[5];
    iVar19 = piVar7[6];
    iVar18 = piVar7[7];
    iVar13 = piVar7[8];
    iVar10 = piVar7[1];
    iVar9 = piVar7[2];
    iVar15 = piVar7[3];
    param_2[5] = *piVar7;
    param_2[6] = iVar10;
    param_2[7] = iVar9;
    param_2[8] = iVar15;
    param_2[9] = iVar21 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar19;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar13;
    iVar13 = piVar7[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar13;
  case '\f':
    FUN_011a1c14(&local_218,param_2 + 0xe,param_3);
    if (local_218 == (undefined4 *)0x2) {
      *param_1 = 2;
      uVar3 = 0xc;
      goto LAB_011c6e84;
    }
    ppuVar11 = &local_268;
    local_268 = local_1fc;
    puStack_264 = local_1f8;
    puStack_260 = local_1f4;
    local_25c = local_1f0;
    local_258 = local_1ec;
    puStack_254 = puStack_1e8;
    puStack_250 = puStack_1e4;
    puStack_24c = puStack_1e0;
    uStack_248 = uStack_1dc;
    unaff_r8 = local_204;
    unaff_r10 = local_214;
    puVar20 = local_200;
    local_2ec = local_210;
    local_2e8 = local_208;
    local_2e4 = local_20c;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar24 = cVar1 == '\x03';
      if (bVar24) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar24 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto joined_r0x011c6e20;
  }
  FUN_011a14b4(&local_218,param_2 + 0xe,param_3);
  if (local_218 == (undefined4 *)0x2) {
    *param_1 = 2;
    uVar3 = 4;
  }
  else {
    ppuVar11 = &local_2d8;
    local_2d8 = local_1fc;
    puStack_2d4 = local_1f8;
    puStack_2d0 = local_1f4;
    puStack_2cc = local_1f0;
    local_2c8 = local_1ec;
    puStack_2c4 = puStack_1e8;
    puStack_2c0 = puStack_1e4;
    puStack_2bc = puStack_1e0;
    uStack_2b8 = uStack_1dc;
    unaff_r8 = local_204;
    unaff_r10 = local_214;
    puVar20 = local_200;
    local_2ec = local_210;
    local_2e8 = local_208;
    local_2e4 = local_20c;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar24 = cVar1 == '\x03';
      if (bVar24) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar24 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
joined_r0x011c6e20:
    bVar24 = ((uint)local_218 & 1) != 0;
    if (bVar24) {
      local_240 = *ppuVar11;
      puStack_23c = ppuVar11[1];
      puStack_238 = ppuVar11[2];
      local_234 = ppuVar11[3];
      local_230 = ppuVar11[4];
      puStack_22c = ppuVar11[5];
      puStack_228 = ppuVar11[6];
      puStack_224 = ppuVar11[7];
      puStack_220 = ppuVar11[8];
    }
    else {
      local_240 = *ppuVar11;
      puStack_23c = ppuVar11[1];
      puStack_238 = ppuVar11[2];
      local_234 = ppuVar11[3];
      local_230 = ppuVar11[4];
      puStack_22c = ppuVar11[5];
      puStack_228 = ppuVar11[6];
    }
    uVar14 = (uint)bVar24;
LAB_011c6e44:
switchD_011c65a0_caseD_6:
    *param_1 = uVar14;
    param_1[1] = (uint)unaff_r10;
    param_1[4] = (uint)local_2e8;
    param_1[5] = (uint)unaff_r8;
    param_1[6] = (uint)puVar20;
    param_1[2] = (uint)local_2ec;
    param_1[3] = (uint)local_2e4;
    param_1[7] = (uint)local_240;
    param_1[8] = (uint)puStack_23c;
    param_1[9] = (uint)puStack_238;
    param_1[10] = (uint)local_234;
    param_1[0xb] = (uint)local_230;
    param_1[0xc] = (uint)puStack_22c;
    param_1[0xd] = (uint)puStack_228;
    param_1[0xe] = (uint)puStack_224;
    param_1[0xf] = (uint)puStack_220;
    uVar3 = 1;
  }
LAB_011c6e84:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

