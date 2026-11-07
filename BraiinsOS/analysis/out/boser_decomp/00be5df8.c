// FUN_00be5df8 @ 00be5df8 size=5584 calls_out=18 calls_in=0
// strings: components

void FUN_00be5df8(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *unaff_r6;
  uint uVar8;
  uint uVar9;
  uint *unaff_r8;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint **ppuVar18;
  uint *in_r12;
  uint *extraout_r12;
  uint uVar19;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *unaff_lr;
  uint uVar20;
  bool bVar21;
  uint *local_284;
  uint *local_280;
  uint *local_27c;
  uint *local_278;
  uint *local_26c;
  uint *local_268;
  uint *local_260;
  uint *local_25c;
  uint *local_258;
  uint *local_250;
  uint *local_24c;
  uint *local_248;
  uint *local_244;
  uint *local_240;
  uint *local_23c;
  uint *local_238;
  uint *puStack_234;
  uint *local_230;
  uint *local_22c;
  uint *local_228;
  uint *puStack_224;
  uint *puStack_220;
  uint uStack_21c;
  undefined4 uStack_218;
  int local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  uint *local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined1 local_1a8;
  undefined1 local_1a4;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint *local_dc;
  uint *puStack_d8;
  uint *puStack_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 local_c0;
  undefined1 local_bc;
  uint *local_b8;
  uint *puStack_b4;
  uint *puStack_b0;
  uint *puStack_ac;
  uint *local_a8;
  uint *puStack_a4;
  uint *puStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  uint *local_90;
  uint *puStack_8c;
  uint *puStack_88;
  uint *local_84;
  uint *local_80;
  uint *puStack_7c;
  uint *puStack_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *local_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint *local_48;
  uint *puStack_44;
  uint *puStack_40;
  uint *local_3c;
  uint *local_38;
  uint *puStack_34;
  uint *puStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  puVar13 = (uint *)*param_2;
  puVar6 = puVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)puVar13[3]) {
  case '\0':
    uVar8 = *puVar13;
    uVar11 = puVar13[1];
    uVar9 = 0;
    puVar13[2] = uVar11;
    iVar7 = *(int *)(uVar11 + 0x10);
    iVar2 = *(int *)(iVar7 + 0x40);
    local_268 = param_1;
    if (iVar2 == 7) {
      unaff_lr = (uint *)0xbe66c4;
      iVar2 = thunk_FUN_01bed842(*(int *)(iVar7 + 0x3c) + 8,&DAT_005325f1,7);
      local_258 = extraout_r12_01;
      if (iVar2 == 0) {
        puVar13[4] = uVar8;
        *(undefined1 *)(puVar13 + 9) = 0;
        puVar13[5] = uVar11;
        goto LAB_00be5f58;
      }
LAB_00be66cc:
      local_26c = (uint *)0x80000007;
    }
    else {
      if (iVar2 == 10) {
        iVar2 = thunk_FUN_01bed842(*(int *)(iVar7 + 0x3c) + 8,&DAT_003f1b00,10);
        if (iVar2 == 0) {
          puVar13[4] = uVar8;
          *(undefined1 *)(puVar13 + 9) = 0;
          puVar13[5] = uVar11;
          goto LAB_00be6098;
        }
        unaff_lr = (uint *)0xbe6688;
        iVar2 = thunk_FUN_01bed842(*(int *)(iVar7 + 0x3c) + 8,"components",10);
        local_258 = extraout_r12_00;
        if (iVar2 == 0) {
          puVar13[4] = uVar8;
          *(undefined1 *)(puVar13 + 9) = 0;
          puVar13[5] = uVar11;
          goto LAB_00be5f9c;
        }
        goto LAB_00be66cc;
      }
      local_258 = in_r12;
      if (iVar2 != 9) goto LAB_00be66cc;
      unaff_lr = (uint *)0xbe5e90;
      iVar2 = thunk_FUN_01bed842(*(int *)(iVar7 + 0x3c) + 8,&DAT_004c1920,9);
      local_26c = (uint *)0x80000007;
      if (iVar2 == 0) {
        puVar13[4] = uVar8;
        *(undefined1 *)(puVar13 + 9) = 0;
        puVar13[5] = uVar11;
        goto LAB_00be6018;
      }
      local_258 = extraout_r12;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c226a0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c226a0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[9]) {
    case '\0':
      uVar8 = puVar13[4];
      uVar11 = puVar13[5];
LAB_00be6018:
      puVar13[6] = uVar8;
      *(undefined1 *)(puVar13 + 8) = 0;
      puVar13[7] = uVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((puVar13[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      uVar8 = puVar13[6];
    }
    local_258 = puVar13 + 4;
    puVar3 = (uint *)puVar13[2];
    *(undefined1 *)(puVar13 + 9) = 1;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[4] = uVar8;
    puVar5 = puVar13 + 5;
    uVar17 = puVar3[4];
    uVar15 = puVar3[5];
    uVar12 = puVar3[6];
    uVar20 = puVar3[7];
    uVar8 = puVar3[8];
    uVar11 = puVar3[1];
    uVar9 = puVar3[2];
    uVar19 = puVar3[3];
    *puVar5 = *puVar3;
    puVar13[6] = uVar11;
    puVar13[7] = uVar9;
    puVar13[8] = uVar19;
    puVar13[9] = uVar17 + 0x20;
    puVar13[10] = uVar15;
    puVar13[0xb] = uVar12;
    puVar13[0xc] = uVar20;
    *(char *)(puVar13 + 0xd) = (char)uVar8;
    uVar11 = puVar3[4];
    *(undefined1 *)(puVar13 + 0x15) = 0;
    puVar13[0xe] = (uint)local_258;
    puVar13[0xf] = (uint)puVar5;
    puVar13[0x10] = uVar11;
LAB_00be63f0:
    uVar8 = *local_258;
    *(undefined1 *)(puVar13 + 0x14) = 0;
    puVar13[0x11] = uVar8;
    puVar13[0x12] = (uint)puVar5;
    puVar13[0x13] = uVar11;
    goto LAB_00be6408;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x15]) {
    case '\0':
      local_258 = (uint *)puVar13[0xe];
      puVar5 = (uint *)puVar13[0xf];
      uVar11 = puVar13[0x10];
      goto LAB_00be63f0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)puVar13[0x14] != '\0') {
        if ((char)puVar13[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      uVar8 = puVar13[0x11];
    }
LAB_00be6408:
    FUN_006666fc(&local_250,*(undefined4 *)(uVar8 + 4),*(undefined4 *)(uVar8 + 8));
LAB_00be6454:
    local_26c = (uint *)0x80000002;
    *(undefined1 *)(puVar13 + 0x15) = 1;
    *(undefined1 *)(puVar13 + 0x14) = 1;
    local_90 = local_23c;
    puStack_8c = local_238;
    puStack_88 = puStack_234;
    local_84 = local_230;
    local_80 = local_22c;
    puStack_7c = local_228;
    puStack_78 = puStack_224;
    unaff_r8 = local_250;
    local_258 = local_24c;
    unaff_lr = local_248;
LAB_00be64a4:
    uVar9 = 0;
    local_268 = local_244;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[9]) {
    case '\0':
      uVar8 = puVar13[4];
      uVar11 = puVar13[5];
LAB_00be5f58:
      puVar13[6] = uVar8;
      *(undefined1 *)(puVar13 + 8) = 0;
      puVar13[7] = uVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((puVar13[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      uVar8 = puVar13[6];
    }
    puVar5 = puVar13 + 4;
    puVar4 = (uint *)puVar13[2];
    *(undefined1 *)(puVar13 + 9) = 1;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[4] = uVar8 + 0xc;
    puVar3 = puVar13 + 5;
    uVar19 = puVar4[4];
    uVar17 = puVar4[5];
    uVar15 = puVar4[6];
    uVar12 = puVar4[7];
    uVar8 = puVar4[8];
    uVar11 = puVar4[1];
    uVar9 = puVar4[2];
    uVar20 = puVar4[3];
    *puVar3 = *puVar4;
    puVar13[6] = uVar11;
    puVar13[7] = uVar9;
    puVar13[8] = uVar20;
    puVar13[9] = uVar19 + 0x20;
    puVar13[10] = uVar17;
    puVar13[0xb] = uVar15;
    puVar13[0xc] = uVar12;
    *(char *)(puVar13 + 0xd) = (char)uVar8;
    uVar11 = puVar4[4];
    *(undefined1 *)(puVar13 + 0x15) = 0;
    puVar13[0xe] = (uint)puVar5;
    puVar13[0xf] = (uint)puVar3;
    puVar13[0x10] = uVar11;
LAB_00be61b0:
    uVar8 = *puVar5;
    *(undefined1 *)(puVar13 + 0x14) = 0;
    puVar13[0x11] = uVar8;
    puVar13[0x12] = (uint)puVar3;
    puVar13[0x13] = uVar11;
    goto LAB_00be6438;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x15]) {
    case '\0':
      puVar5 = (uint *)puVar13[0xe];
      puVar3 = (uint *)puVar13[0xf];
      uVar11 = puVar13[0x10];
      goto LAB_00be61b0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    case '\x03':
      if ((char)puVar13[0x14] != '\0') {
        if ((char)puVar13[0x14] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21c0c);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21c0c);
      }
      uVar8 = puVar13[0x11];
    }
LAB_00be6438:
    FUN_006666fc(&local_250,*(undefined4 *)(uVar8 + 4),*(undefined4 *)(uVar8 + 8));
    goto LAB_00be6454;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[9]) {
    case '\0':
      uVar8 = puVar13[4];
      uVar11 = puVar13[5];
LAB_00be6098:
      puVar13[6] = uVar8;
      *(undefined1 *)(puVar13 + 8) = 0;
      puVar13[7] = uVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((puVar13[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      uVar8 = puVar13[6];
    }
    local_258 = puVar13 + 4;
    puVar5 = (uint *)puVar13[2];
    *(undefined1 *)(puVar13 + 9) = 1;
    puVar6 = puVar13 + 5;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[4] = uVar8 + 0x18;
    uVar11 = puVar5[4];
    uVar19 = puVar5[5];
    uVar15 = puVar5[6];
    uVar12 = puVar5[7];
    uVar8 = puVar5[8];
    unaff_r6 = (uint *)puVar5[1];
    uVar9 = puVar5[2];
    uVar17 = puVar5[3];
    *puVar6 = *puVar5;
    puVar13[6] = (uint)unaff_r6;
    puVar13[7] = uVar9;
    puVar13[8] = uVar17;
    puVar13[9] = uVar11 + 0x20;
    puVar13[10] = uVar19;
    puVar13[0xb] = uVar15;
    puVar13[0xc] = uVar12;
    *(char *)(puVar13 + 0xd) = (char)uVar8;
    local_25c = (uint *)puVar5[4];
    *(undefined1 *)(puVar13 + 0x2d) = 0;
    puVar13[0x2c] = (uint)local_25c;
    puVar13[0x2b] = (uint)puVar6;
    puVar13[0x2a] = (uint)local_258;
LAB_00be6580:
    uVar8 = *local_258;
    *(undefined1 *)(puVar13 + 0x29) = 0;
    puVar13[0x26] = uVar8;
    puVar13[0x27] = (uint)puVar6;
    puVar13[0x28] = (uint)local_25c;
LAB_00be659c:
    puVar14 = *(undefined **)(uVar8 + 8);
    *(undefined1 *)(puVar13 + 0x13) = 0;
    puVar13[0xe] = 1;
    puVar13[0xf] = (uint)puVar14;
    puVar13[0x10] = (uint)puVar6;
    puVar13[0x11] = (uint)local_25c;
    puVar13[0x12] = uVar8;
    *(undefined1 *)((int)puVar13 + 0x4d) = 1;
    local_260 = puVar6 + 6;
    if (*(int *)(*(int *)*local_260 + 0x10) != 0) {
LAB_00be65e4:
      if (&UNK_00505050 < puVar14) {
        uVar10 = 0;
LAB_00be65fc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,unaff_r6);
      }
      unaff_r6 = (uint *)((int)puVar14 * 0x198);
      if (unaff_r6 == (uint *)0x0) {
        uVar11 = 8;
        puVar14 = (undefined *)0x0;
      }
      else {
        uVar10 = 8;
        uVar11 = FUN_01298504(unaff_r6,8);
        if (uVar11 == 0) goto LAB_00be65fc;
      }
      puVar13[0x14] = (uint)puVar14;
LAB_00be6820:
      local_26c = puVar13 + 0x14;
      puVar13[0x15] = uVar11;
      puVar13[0x16] = 0;
      *(undefined1 *)((int)puVar13 + 0x4d) = 0;
      if (*(int *)(uVar8 + 8) != 0) {
        iVar7 = *(int *)(uVar8 + 4);
        iVar16 = 0;
        iVar2 = *(int *)(uVar8 + 8) * 0x24;
        do {
          if (*puVar6 == 1) {
            local_90 = (uint *)puVar6[1];
            puStack_8c = (uint *)puVar6[2];
            puStack_88 = (uint *)puVar6[3];
          }
          local_e0 = (uint)(*puVar6 == 1);
          local_d0 = puVar6[4];
          local_cc = puVar6[5];
          local_c4 = puVar6[7];
          local_c0 = (undefined1)puVar6[8];
          local_c8 = *local_260;
          local_dc = local_90;
          puStack_d8 = puStack_8c;
          puStack_d4 = puStack_88;
          local_bc = 0;
          uVar8 = puVar13[0x16];
          local_e8 = (uint)local_25c;
          local_1c0 = iVar16;
          local_e4 = iVar7;
          if (uVar8 == puVar13[0x14]) {
            FUN_00f9d59c(local_26c);
          }
          iVar7 = iVar7 + 0x24;
          FUN_01bed4e2(uVar8 * 0x198 + puVar13[0x15],&local_250,0x198);
          iVar16 = iVar16 + 1;
          iVar2 = iVar2 + -0x24;
          puVar13[0x16] = uVar8 + 1;
        } while (iVar2 != 0);
      }
      local_58 = *local_26c;
      uStack_54 = puVar13[0x15];
      uStack_50 = puVar13[0x16];
      FUN_011737cc(&local_250);
      local_90 = local_250;
      puStack_8c = local_24c;
      puStack_88 = local_248;
      local_84 = local_244;
      local_80 = local_240;
      puStack_7c = local_23c;
      puStack_78 = local_238;
      puStack_74 = puStack_234;
      puStack_70 = local_230;
      local_6c = local_22c;
      puStack_68 = local_228;
      puStack_64 = puStack_224;
      puStack_60 = puStack_220;
      uStack_5c = uStack_21c;
      puVar13[0x18] = (uint)local_250;
      puVar13[0x19] = (uint)local_24c;
      puVar13[0x1a] = (uint)local_248;
      puVar13[0x1b] = (uint)local_244;
      puVar13[0x1c] = (uint)local_240;
      puVar13[0x1d] = (uint)local_23c;
      puVar13[0x1e] = (uint)local_238;
      puVar13[0x1f] = (uint)puStack_234;
      puVar13[0x20] = (uint)local_230;
      puVar13[0x21] = (uint)local_22c;
      puVar13[0x22] = (uint)local_228;
      puVar13[0x23] = (uint)puStack_224;
      puVar13[0x24] = (uint)puStack_220;
      puVar13[0x25] = uStack_21c;
      goto LAB_00be6990;
    }
LAB_00be6fac:
    if (&UNK_00ba2e8b < puVar14) {
      uVar10 = 0;
LAB_00be6fc4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,unaff_r6);
    }
    unaff_r6 = (uint *)((int)puVar14 * 0xb0);
    if (unaff_r6 == (uint *)0x0) {
      uVar11 = 8;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar10 = 8;
      uVar11 = FUN_01298504(unaff_r6,8);
      if (uVar11 == 0) goto LAB_00be6fc4;
    }
    puVar13[0x14] = (uint)puVar14;
    local_258 = puVar6;
LAB_00be7030:
    puVar13[0x15] = uVar11;
    puVar13[0x16] = 0;
    *(undefined1 *)((int)puVar13 + 0x4d) = 0;
    if (*(int *)(uVar8 + 8) != 0) {
      iVar7 = *(int *)(uVar8 + 4);
      iVar16 = 0;
      iVar2 = *(int *)(uVar8 + 8) * 0x24;
      do {
        uVar8 = puVar13[0x16];
        local_1a8 = (undefined1)local_258[8];
        local_1b4 = local_258[5];
        uStack_1b0 = local_258[6];
        uStack_1ac = local_258[7];
        local_1b8 = local_258[4];
        local_1c8 = 1;
        local_1bc = (uint *)0x0;
        if (*local_258 != 0) {
          local_1bc = local_258 + 1;
        }
        local_1c4 = 0;
        local_1a4 = 0;
        local_1cc = (uint)local_25c;
        local_1d0 = iVar7;
        local_1c0 = iVar16;
        if (uVar8 == puVar13[0x14]) {
          FUN_00a20d80(puVar13 + 0x14);
        }
        iVar7 = iVar7 + 0x24;
        FUN_01bed4e2(uVar8 * 0xb0 + puVar13[0x15],&local_250,0xb0);
        iVar16 = iVar16 + 1;
        iVar2 = iVar2 + -0x24;
        puVar13[0x16] = uVar8 + 1;
      } while (iVar2 != 0);
    }
    local_58 = puVar13[0x14];
    uStack_54 = puVar13[0x15];
    uStack_50 = puVar13[0x16];
    FUN_01170ca0(&local_250);
    local_90 = local_250;
    puStack_8c = local_24c;
    puStack_88 = local_248;
    local_84 = local_244;
    local_80 = local_240;
    puStack_7c = local_23c;
    puStack_78 = local_238;
    puStack_74 = puStack_234;
    puStack_70 = local_230;
    local_6c = local_22c;
    puStack_68 = local_228;
    puStack_64 = puStack_224;
    puStack_60 = puStack_220;
    uStack_5c = uStack_21c;
    puVar13[0x18] = (uint)local_250;
    puVar13[0x19] = (uint)local_24c;
    puVar13[0x1a] = (uint)local_248;
    puVar13[0x1b] = (uint)local_244;
    puVar13[0x1c] = (uint)local_240;
    puVar13[0x1d] = (uint)local_23c;
    puVar13[0x1e] = (uint)local_238;
    puVar13[0x1f] = (uint)puStack_234;
    puVar13[0x20] = (uint)local_230;
    puVar13[0x21] = (uint)local_22c;
    puVar13[0x22] = (uint)local_228;
    puVar13[0x23] = (uint)puStack_224;
    puVar13[0x24] = (uint)puStack_220;
    puVar13[0x25] = uStack_21c;
LAB_00be7168:
    FUN_0114ddb0(&local_250,puVar13 + 0x18,param_3);
    puVar6 = local_250;
    if (local_250 != (uint *)&DAT_00000003) {
      ppuVar18 = &local_48;
      local_260 = local_24c;
      local_258 = local_248;
      local_25c = local_244;
      local_268 = local_240;
      local_26c = local_23c;
      local_48 = local_238;
      puStack_44 = puStack_234;
      puStack_40 = local_230;
      local_3c = local_22c;
      local_38 = local_228;
      puStack_34 = puStack_224;
      puStack_30 = puStack_220;
      uStack_2c = uStack_21c;
      uStack_28 = uStack_218;
      FUN_00bb15dc(puVar13 + 0x18);
      goto LAB_00be720c;
    }
    uVar1 = 4;
LAB_00be7190:
    local_280 = puVar13 + 0x29;
    local_284 = puVar13 + 0x13;
    local_278 = puVar13 + 0x2d;
    *(undefined1 *)local_284 = uVar1;
    *(undefined1 *)local_278 = 3;
    *(undefined1 *)local_280 = 3;
    *param_1 = 2;
    uVar1 = 8;
    goto LAB_00be64d8;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x2d]) {
    case '\0':
      local_258 = (uint *)puVar13[0x2a];
      puVar6 = (uint *)puVar13[0x2b];
      local_25c = (uint *)puVar13[0x2c];
      goto LAB_00be6580;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x29]) {
    case '\0':
      uVar8 = puVar13[0x26];
      puVar6 = (uint *)puVar13[0x27];
      local_25c = (uint *)puVar13[0x28];
      goto LAB_00be659c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x13]) {
    case '\0':
      puVar6 = (uint *)puVar13[0x10];
      *(undefined1 *)((int)puVar13 + 0x4d) = 1;
      unaff_r6 = puVar6 + 6;
      puVar14 = (undefined *)puVar13[0xf];
      local_25c = (uint *)puVar13[0x11];
      uVar8 = puVar13[0x12];
      if (*(int *)(*(int *)*unaff_r6 + 0x10) == 0) {
        if (puVar13[0xe] != 0) goto LAB_00be6fac;
        puVar13[0x14] = 0;
        uVar11 = 8;
        local_258 = puVar6;
        goto LAB_00be7030;
      }
      local_260 = unaff_r6;
      if (puVar13[0xe] != 0) goto LAB_00be65e4;
      puVar13[0x14] = 0;
      uVar11 = 8;
      goto LAB_00be6820;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00be7168;
    }
LAB_00be6990:
    FUN_0114cb68(&local_250,puVar13 + 0x18,param_3);
    puVar6 = local_250;
    if (local_250 == (uint *)&DAT_00000003) {
      uVar1 = 3;
      goto LAB_00be7190;
    }
    ppuVar18 = &local_b8;
    local_260 = local_24c;
    local_258 = local_248;
    local_25c = local_244;
    local_268 = local_240;
    local_26c = local_23c;
    local_b8 = local_238;
    puStack_b4 = puStack_234;
    puStack_b0 = local_230;
    puStack_ac = local_22c;
    local_a8 = local_228;
    puStack_a4 = puStack_224;
    puStack_a0 = puStack_220;
    uStack_9c = uStack_21c;
    uStack_98 = uStack_218;
    FUN_00be78b8(puVar13 + 0x18);
LAB_00be720c:
    local_280 = puVar13 + 0x29;
    local_278 = puVar13 + 0x2d;
    local_27c = puVar13 + 0xe;
    bVar21 = puVar6 != (uint *)0x2;
    if (bVar21) {
      local_250 = *ppuVar18;
      local_24c = ppuVar18[1];
      local_248 = ppuVar18[2];
      local_244 = ppuVar18[3];
      local_240 = ppuVar18[4];
      local_23c = ppuVar18[5];
      local_238 = ppuVar18[6];
      puStack_234 = ppuVar18[7];
      local_230 = ppuVar18[8];
    }
    else {
      local_26c = (uint *)0x80000006;
    }
    *(undefined2 *)(puVar13 + 0x13) = 1;
    FUN_00be79f8(local_27c);
    *(undefined1 *)local_280 = 1;
    *(undefined1 *)local_278 = 1;
    if (bVar21) {
      puStack_74 = puStack_234;
      puStack_70 = local_230;
    }
    puStack_78 = local_238;
    puStack_7c = local_23c;
    local_80 = local_240;
    local_84 = local_244;
    puStack_88 = local_248;
    puStack_8c = local_24c;
    local_90 = local_250;
    uVar9 = (uint)bVar21;
    unaff_r8 = local_260;
    unaff_lr = local_25c;
    break;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[9]) {
    case '\0':
      uVar8 = puVar13[4];
      uVar11 = puVar13[5];
LAB_00be5f9c:
      puVar13[6] = uVar8;
      *(undefined1 *)(puVar13 + 8) = 0;
      puVar13[7] = uVar11;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((puVar13[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      uVar8 = puVar13[6];
    }
    puVar6 = puVar13 + 4;
    puVar5 = (uint *)puVar13[2];
    *(undefined1 *)(puVar13 + 9) = 1;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[4] = uVar8 + 0x24;
    local_25c = puVar13 + 5;
    uVar19 = puVar5[4];
    uVar20 = puVar5[5];
    uVar17 = puVar5[6];
    uVar15 = puVar5[7];
    uVar8 = puVar5[8];
    uVar11 = puVar5[1];
    uVar9 = puVar5[2];
    uVar12 = puVar5[3];
    *local_25c = *puVar5;
    puVar13[6] = uVar11;
    puVar13[7] = uVar9;
    puVar13[8] = uVar12;
    puVar13[9] = uVar19 + 0x20;
    puVar13[10] = uVar20;
    puVar13[0xb] = uVar17;
    puVar13[0xc] = uVar15;
    *(char *)(puVar13 + 0xd) = (char)uVar8;
    local_258 = (uint *)puVar5[4];
    *(undefined1 *)(puVar13 + 0x2d) = 0;
    puVar13[0x2c] = (uint)local_258;
    puVar13[0x2b] = (uint)local_25c;
    puVar13[0x2a] = (uint)puVar6;
LAB_00be627c:
    uVar8 = *puVar6;
    *(undefined1 *)(puVar13 + 0x29) = 0;
    puVar13[0x26] = uVar8;
    puVar13[0x27] = (uint)local_25c;
    puVar13[0x28] = (uint)local_258;
LAB_00be629c:
    puVar14 = *(undefined **)(uVar8 + 8);
    *(undefined1 *)(puVar13 + 0x13) = 0;
    puVar13[0xe] = 1;
    puVar13[0xf] = (uint)puVar14;
    puVar13[0x10] = (uint)local_25c;
    puVar13[0x11] = (uint)local_258;
    puVar13[0x12] = uVar8;
    *(undefined1 *)((int)puVar13 + 0x4d) = 1;
    local_260 = local_25c + 6;
    if (*(int *)(*(int *)*local_260 + 0x10) != 0) {
LAB_00be62e8:
      if (&UNK_00505050 < puVar14) {
        uVar10 = 0;
        puVar6 = param_1;
LAB_00be62fc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,puVar6);
      }
      puVar6 = (uint *)((int)puVar14 * 0x198);
      if (puVar6 == (uint *)0x0) {
        uVar11 = 8;
        puVar14 = (undefined *)0x0;
      }
      else {
        uVar10 = 8;
        uVar11 = FUN_01298504(puVar6,8);
        if (uVar11 == 0) goto LAB_00be62fc;
      }
      puVar13[0x14] = (uint)puVar14;
LAB_00be6a28:
      puVar13[0x15] = uVar11;
      puVar13[0x16] = 0;
      *(undefined1 *)((int)puVar13 + 0x4d) = 0;
      if (*(int *)(uVar8 + 8) != 0) {
        iVar7 = *(int *)(uVar8 + 4);
        iVar2 = *(int *)(uVar8 + 8) << 4;
        iVar16 = 0;
        do {
          if (*local_25c == 1) {
            local_90 = (uint *)local_25c[1];
            puStack_8c = (uint *)local_25c[2];
            puStack_88 = (uint *)local_25c[3];
          }
          local_e0 = (uint)(*local_25c == 1);
          local_d0 = local_25c[4];
          local_cc = local_25c[5];
          local_c4 = local_25c[7];
          local_c0 = (undefined1)local_25c[8];
          local_c8 = *local_260;
          local_dc = local_90;
          puStack_d8 = puStack_8c;
          puStack_d4 = puStack_88;
          local_bc = 0;
          uVar8 = puVar13[0x16];
          local_1c0 = iVar16;
          local_e8 = (uint)local_258;
          local_e4 = iVar7;
          if (uVar8 == puVar13[0x14]) {
            FUN_00f9d59c(puVar13 + 0x14);
          }
          iVar7 = iVar7 + 0x10;
          FUN_01bed4e2(uVar8 * 0x198 + puVar13[0x15],&local_250,0x198);
          iVar16 = iVar16 + 1;
          iVar2 = iVar2 + -0x10;
          puVar13[0x16] = uVar8 + 1;
        } while (iVar2 != 0);
      }
      local_58 = puVar13[0x14];
      uStack_54 = puVar13[0x15];
      uStack_50 = puVar13[0x16];
      FUN_011737cc(&local_250);
      local_90 = local_250;
      puStack_8c = local_24c;
      puStack_88 = local_248;
      local_84 = local_244;
      local_80 = local_240;
      puStack_7c = local_23c;
      puStack_78 = local_238;
      puStack_74 = puStack_234;
      puStack_70 = local_230;
      local_6c = local_22c;
      puStack_68 = local_228;
      puStack_64 = puStack_224;
      puStack_60 = puStack_220;
      uStack_5c = uStack_21c;
      puVar13[0x18] = (uint)local_250;
      puVar13[0x19] = (uint)local_24c;
      puVar13[0x1a] = (uint)local_248;
      puVar13[0x1b] = (uint)local_244;
      puVar13[0x1c] = (uint)local_240;
      puVar13[0x1d] = (uint)local_23c;
      puVar13[0x1e] = (uint)local_238;
      puVar13[0x1f] = (uint)puStack_234;
      puVar13[0x20] = (uint)local_230;
      puVar13[0x21] = (uint)local_22c;
      puVar13[0x22] = (uint)local_228;
      puVar13[0x23] = (uint)puStack_224;
      puVar13[0x24] = (uint)puStack_220;
      puVar13[0x25] = uStack_21c;
      goto switchD_00be66e8_caseD_3;
    }
LAB_00be6ca0:
    puVar6 = puVar13 + 0x13;
    if (&UNK_00ba2e8b < puVar14) {
      uVar10 = 0;
LAB_00be6cb4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,puVar6);
    }
    puVar6 = (uint *)((int)puVar14 * 0xb0);
    if (puVar6 == (uint *)0x0) {
      uVar11 = 8;
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar10 = 8;
      uVar11 = FUN_01298504(puVar6,8);
      if (uVar11 == 0) goto LAB_00be6cb4;
    }
    puVar13[0x14] = (uint)puVar14;
LAB_00be6d2c:
    puVar13[0x15] = uVar11;
    puVar13[0x16] = 0;
    *(undefined1 *)((int)puVar13 + 0x4d) = 0;
    if (*(int *)(uVar8 + 8) != 0) {
      iVar7 = *(int *)(uVar8 + 4);
      iVar2 = *(int *)(uVar8 + 8) << 4;
      iVar16 = 0;
      do {
        uVar8 = puVar13[0x16];
        local_1a8 = (undefined1)local_25c[8];
        local_1b4 = local_25c[5];
        uStack_1b0 = local_25c[6];
        uStack_1ac = local_25c[7];
        local_1b8 = local_25c[4];
        local_1c8 = 1;
        local_1bc = (uint *)0x0;
        if (*local_25c != 0) {
          local_1bc = local_25c + 1;
        }
        local_1c4 = 0;
        local_1a4 = 0;
        local_1cc = (uint)local_258;
        local_1d0 = iVar7;
        local_1c0 = iVar16;
        if (uVar8 == puVar13[0x14]) {
          FUN_00a20d80(puVar13 + 0x14);
        }
        iVar7 = iVar7 + 0x10;
        FUN_01bed4e2(uVar8 * 0xb0 + puVar13[0x15],&local_250,0xb0);
        iVar16 = iVar16 + 1;
        iVar2 = iVar2 + -0x10;
        puVar13[0x16] = uVar8 + 1;
      } while (iVar2 != 0);
    }
    local_58 = puVar13[0x14];
    uStack_54 = puVar13[0x15];
    uStack_50 = puVar13[0x16];
    FUN_01170ca0(&local_250);
    local_90 = local_250;
    puStack_8c = local_24c;
    puStack_88 = local_248;
    local_84 = local_244;
    local_80 = local_240;
    puStack_7c = local_23c;
    puStack_78 = local_238;
    puStack_74 = puStack_234;
    puStack_70 = local_230;
    local_6c = local_22c;
    puStack_68 = local_228;
    puStack_64 = puStack_224;
    puStack_60 = puStack_220;
    uStack_5c = uStack_21c;
    puVar13[0x18] = (uint)local_250;
    puVar13[0x19] = (uint)local_24c;
    puVar13[0x1a] = (uint)local_248;
    puVar13[0x1b] = (uint)local_244;
    puVar13[0x1c] = (uint)local_240;
    puVar13[0x1d] = (uint)local_23c;
    puVar13[0x1e] = (uint)local_238;
    puVar13[0x1f] = (uint)puStack_234;
    puVar13[0x20] = (uint)local_230;
    puVar13[0x21] = (uint)local_22c;
    puVar13[0x22] = (uint)local_228;
    puVar13[0x23] = (uint)puStack_224;
    puVar13[0x24] = (uint)puStack_220;
    puVar13[0x25] = uStack_21c;
switchD_00be66e8_caseD_4:
    FUN_01150eb8(&local_250,puVar13 + 0x18,param_3);
    puVar6 = local_250;
    if (local_250 != (uint *)&DAT_00000003) {
      ppuVar18 = &local_48;
      local_260 = local_24c;
      local_258 = local_248;
      local_25c = local_244;
      local_268 = local_240;
      local_26c = local_23c;
      local_48 = local_238;
      puStack_44 = puStack_234;
      puStack_40 = local_230;
      local_3c = local_22c;
      local_38 = local_228;
      puStack_34 = puStack_224;
      puStack_30 = puStack_220;
      uStack_2c = uStack_21c;
      uStack_28 = uStack_218;
      FUN_00bb15dc(puVar13 + 0x18);
      goto LAB_00be6f00;
    }
    uVar1 = 4;
LAB_00be6e88:
    local_27c = puVar13 + 0x29;
    local_278 = puVar13 + 0x2d;
    *(undefined1 *)(puVar13 + 0x13) = uVar1;
    *(undefined1 *)local_278 = 3;
    *(undefined1 *)local_27c = 3;
    *param_1 = 2;
    uVar1 = 10;
    goto LAB_00be64d8;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x2d]) {
    case '\0':
      puVar6 = (uint *)puVar13[0x2a];
      local_25c = (uint *)puVar13[0x2b];
      local_258 = (uint *)puVar13[0x2c];
      goto LAB_00be627c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x29]) {
    case '\0':
      uVar8 = puVar13[0x26];
      local_25c = (uint *)puVar13[0x27];
      local_258 = (uint *)puVar13[0x28];
      goto LAB_00be629c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21bdc);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21bdc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)puVar13[0x13]) {
    case '\0':
      local_25c = (uint *)puVar13[0x10];
      local_258 = (uint *)puVar13[0x11];
      uVar8 = puVar13[0x12];
      *(undefined1 *)((int)puVar13 + 0x4d) = 1;
      local_260 = local_25c + 6;
      puVar14 = (undefined *)puVar13[0xf];
      if (*(int *)(*(int *)*local_260 + 0x10) == 0) {
        if (puVar13[0xe] != 0) goto LAB_00be6ca0;
        uVar11 = 8;
        puVar13[0x14] = 0;
        goto LAB_00be6d2c;
      }
      if (puVar13[0xe] != 0) goto LAB_00be62e8;
      puVar13[0x14] = 0;
      uVar11 = 8;
      goto LAB_00be6a28;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x04':
      goto switchD_00be66e8_caseD_4;
    }
switchD_00be66e8_caseD_3:
    FUN_0114b920(&local_250,puVar13 + 0x18,param_3);
    puVar6 = local_250;
    if (local_250 == (uint *)&DAT_00000003) {
      uVar1 = 3;
      goto LAB_00be6e88;
    }
    ppuVar18 = &local_b8;
    local_260 = local_24c;
    local_258 = local_248;
    local_25c = local_244;
    local_268 = local_240;
    local_26c = local_23c;
    local_b8 = local_238;
    puStack_b4 = puStack_234;
    puStack_b0 = local_230;
    puStack_ac = local_22c;
    local_a8 = local_228;
    puStack_a4 = puStack_224;
    puStack_a0 = puStack_220;
    uStack_9c = uStack_21c;
    uStack_98 = uStack_218;
    FUN_00be78b8(puVar13 + 0x18);
LAB_00be6f00:
    local_27c = puVar13 + 0x29;
    local_278 = puVar13 + 0x2d;
    local_280 = puVar13 + 0xe;
    if (puVar6 != (uint *)0x2) {
      local_250 = *ppuVar18;
      local_24c = ppuVar18[1];
      local_248 = ppuVar18[2];
      local_244 = ppuVar18[3];
      local_240 = ppuVar18[4];
      local_23c = ppuVar18[5];
      local_238 = ppuVar18[6];
      puStack_234 = ppuVar18[7];
      local_230 = ppuVar18[8];
    }
    else {
      local_26c = (uint *)0x80000006;
      local_268 = puStack_220;
    }
    *(undefined2 *)(puVar13 + 0x13) = 1;
    FUN_00be79f8(local_280);
    *(undefined1 *)local_278 = 1;
    *(undefined1 *)local_27c = 1;
    unaff_r8 = local_260;
    unaff_lr = local_25c;
    if (puVar6 != (uint *)0x2) {
      local_90 = local_250;
      puStack_8c = local_24c;
      puStack_88 = local_248;
      local_84 = local_244;
      local_80 = local_240;
      puStack_7c = local_23c;
      puStack_78 = local_238;
      puStack_74 = puStack_234;
      puStack_70 = local_230;
      uVar9 = 1;
      break;
    }
    local_90 = local_250;
    puStack_8c = local_24c;
    puStack_88 = local_248;
    local_84 = local_244;
    local_80 = local_240;
    puStack_7c = local_23c;
    puStack_78 = local_238;
    local_244 = local_268;
    goto LAB_00be64a4;
  }
  param_1[2] = (uint)unaff_r8;
  param_1[3] = (uint)local_258;
  param_1[4] = (uint)unaff_lr;
  *param_1 = uVar9;
  param_1[1] = (uint)puVar6;
  param_1[5] = (uint)local_268;
  param_1[6] = (uint)local_26c;
  param_1[7] = (uint)local_90;
  param_1[8] = (uint)puStack_8c;
  param_1[9] = (uint)puStack_88;
  param_1[10] = (uint)local_84;
  param_1[0xb] = (uint)local_80;
  param_1[0xc] = (uint)puStack_7c;
  param_1[0xd] = (uint)puStack_78;
  param_1[0xe] = (uint)puStack_74;
  param_1[0xf] = (uint)puStack_70;
  uVar1 = 1;
LAB_00be64d8:
  *(undefined1 *)(puVar13 + 3) = uVar1;
  return;
}

