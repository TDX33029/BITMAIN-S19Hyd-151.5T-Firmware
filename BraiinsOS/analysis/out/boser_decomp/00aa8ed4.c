// FUN_00aa8ed4 @ 00aa8ed4 size=2848 calls_out=16 calls_in=0
// strings: pools

void FUN_00aa8ed4(uint *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int unaff_r6;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint unaff_r8;
  int iVar16;
  uint unaff_r9;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint in_r12;
  uint extraout_r12;
  uint unaff_lr;
  bool bVar21;
  int *local_2fc;
  int *local_2f4;
  int *local_2f0;
  int *local_2ec;
  uint local_2d4;
  int *local_2d0;
  int *local_2cc;
  uint local_2c8;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint local_294;
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
  uint uStack_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint uStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  int local_1e8;
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
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
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
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
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
    iVar12 = *param_2;
    unaff_r9 = param_2[1];
    local_2d4 = 0x80000007;
    uVar9 = 0;
    param_2[2] = unaff_r9;
    local_2d0 = *(int **)(unaff_r9 + 0x10);
    if (*(int *)((int)local_2d0 + 0x40) == 5) {
      local_2cc = (int *)0xaa91fc;
      local_2d0 = (int *)thunk_FUN_01bed842(*(int *)((int)local_2d0 + 0x3c) + 8,"pools",5);
      local_2c8 = extraout_r12;
      if (local_2d0 == (int *)0x0) {
        param_2[4] = iVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = unaff_r9;
        goto LAB_00aa92ac;
      }
    }
    else {
      local_2c8 = in_r12;
      local_2cc = (int *)unaff_lr;
      if ((*(int *)((int)local_2d0 + 0x40) == 4) &&
         (local_2d0 = *(int **)(*(int *)((int)local_2d0 + 0x3c) + 8), local_2d0 == (int *)0x656d616e
         )) {
        param_2[4] = iVar12;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = unaff_r9;
        goto LAB_00aa9018;
      }
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c129a8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c129a8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      unaff_r9 = param_2[5];
LAB_00aa9018:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = unaff_r9;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c129a8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c129a8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c129a8);
      }
      iVar12 = param_2[6];
    }
    piVar3 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar4 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar12;
    iVar19 = piVar8[4];
    iVar18 = piVar8[5];
    unaff_r9 = piVar8[6];
    iVar16 = piVar8[7];
    iVar12 = piVar8[8];
    iVar10 = piVar8[1];
    iVar13 = piVar8[2];
    iVar14 = piVar8[3];
    *piVar4 = *piVar8;
    param_2[6] = iVar10;
    param_2[7] = iVar13;
    param_2[8] = iVar14;
    param_2[9] = iVar19 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = unaff_r9;
    param_2[0xc] = iVar16;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar3;
    param_2[0xf] = (int)piVar4;
    param_2[0x10] = iVar10;
LAB_00aa9140:
    iVar12 = *piVar3;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar12;
    param_2[0x12] = (int)piVar4;
    param_2[0x13] = iVar10;
    goto LAB_00aa9170;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar3 = (int *)param_2[0xe];
      piVar4 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_00aa9140;
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
      iVar12 = param_2[0x11];
    }
LAB_00aa9170:
    FUN_006666fc(&local_278,*(undefined4 *)(iVar12 + 4),*(undefined4 *)(iVar12 + 8));
    uVar9 = 0;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_2a0 = local_264;
    uStack_29c = local_260;
    uStack_298 = uStack_25c;
    local_294 = local_258;
    local_290 = local_254;
    uStack_28c = local_250;
    uStack_288 = uStack_24c;
    local_2d4 = 0x80000002;
    local_2d0 = (int *)local_278;
    unaff_r8 = local_26c;
    local_2c8 = local_274;
    local_2cc = (int *)local_270;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar12 = param_2[4];
      unaff_r9 = param_2[5];
LAB_00aa92ac:
      param_2[6] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = unaff_r9;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c129a8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c129a8);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c129a8);
      }
      iVar12 = param_2[6];
    }
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_2cc = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar4 = param_2 + 4;
    *piVar4 = iVar12 + 0xc;
    iVar10 = piVar3[4];
    iVar19 = piVar3[5];
    iVar18 = piVar3[6];
    iVar16 = piVar3[7];
    iVar12 = piVar3[8];
    iVar13 = piVar3[1];
    unaff_r6 = piVar3[2];
    iVar14 = piVar3[3];
    *local_2cc = *piVar3;
    param_2[6] = iVar13;
    param_2[7] = unaff_r6;
    param_2[8] = iVar14;
    param_2[9] = iVar10 + 0x20;
    param_2[0xb] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar12;
    param_2[10] = iVar19;
    param_2[0xc] = iVar16;
    local_2c8 = piVar3[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar4;
    param_2[0x2b] = (int)local_2cc;
    param_2[0x2c] = local_2c8;
LAB_00aa9348:
    iVar12 = *piVar4;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar12;
    param_2[0x27] = (int)local_2cc;
    param_2[0x28] = local_2c8;
LAB_00aa9368:
    puVar11 = *(undefined **)(iVar12 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar12;
    param_2[0x11] = local_2c8;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar11;
    param_2[0x10] = (int)local_2cc;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2d0 = local_2cc + 6;
    if (*(int *)(*(int *)*local_2d0 + 0x10) == 0) {
LAB_00aa9624:
      if (&UNK_00ba2e8b < puVar11) {
        uVar15 = 0;
LAB_00aa9638:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar15,unaff_r6);
      }
      unaff_r6 = (int)puVar11 * 0xb0;
      if (unaff_r6 == 0) {
        iVar10 = 8;
        puVar11 = (undefined *)0x0;
      }
      else {
        uVar15 = 8;
        iVar10 = FUN_01298504(unaff_r6,8);
        if (iVar10 == 0) goto LAB_00aa9638;
      }
      param_2[0x14] = (int)puVar11;
LAB_00aa9690:
      piVar4 = param_2 + 0x14;
      param_2[0x15] = iVar10;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar12 + 8) != 0) {
        iVar13 = param_2[0x16];
        iVar16 = 0;
        iVar10 = *(int *)(iVar12 + 8) * 0x78;
        iVar14 = iVar13 * 0xb0 + 0xac;
        iVar12 = *(int *)(iVar12 + 4);
        do {
          iVar18 = local_2cc[4];
          iVar19 = local_2cc[5];
          piVar3 = (int *)0x0;
          if (*local_2cc != 0) {
            piVar3 = local_2cc + 1;
          }
          iVar5 = local_2cc[6];
          iVar6 = local_2cc[7];
          iVar1 = local_2cc[8];
          iVar17 = iVar13 + iVar16;
          if (iVar17 == *piVar4) {
            FUN_00a20d80(piVar4);
          }
          iVar10 = iVar10 + -0x78;
          puVar7 = (undefined1 *)(param_2[0x15] + iVar14);
          *puVar7 = 0;
          iVar14 = iVar14 + 0xb0;
          *(int *)(puVar7 + -0xc) = iVar5;
          *(uint *)(puVar7 + -0x28) = local_2c8;
          *(undefined4 *)(puVar7 + -0x24) = 1;
          *(undefined4 *)(puVar7 + -0x20) = 0;
          *(int *)(puVar7 + -0x1c) = iVar16;
          *(int **)(puVar7 + -0x18) = piVar3;
          iVar16 = iVar16 + 1;
          puVar7[-4] = (char)iVar1;
          *(int *)(puVar7 + -0x2c) = iVar12;
          *(int *)(puVar7 + -0x14) = iVar18;
          *(int *)(puVar7 + -8) = iVar6;
          *(int *)(puVar7 + -0x10) = iVar19;
          param_2[0x16] = iVar17 + 1;
          iVar12 = iVar12 + 0x78;
        } while (iVar10 != 0);
      }
      local_80 = *piVar4;
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
      uStack_9c = uStack_25c;
      uStack_98 = local_258;
      local_94 = local_254;
      uStack_90 = local_250;
      uStack_8c = uStack_24c;
      iStack_88 = iStack_248;
      iStack_84 = iStack_244;
      param_2[0x18] = local_278;
      param_2[0x19] = local_274;
      param_2[0x1a] = local_270;
      param_2[0x1b] = local_26c;
      param_2[0x1c] = local_268;
      param_2[0x1d] = local_264;
      param_2[0x1e] = local_260;
      param_2[0x1f] = uStack_25c;
      param_2[0x20] = local_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = uStack_24c;
      param_2[0x24] = iStack_248;
      param_2[0x25] = iStack_244;
      goto switchD_00aa921c_caseD_4;
    }
LAB_00aa93ac:
    if (&UNK_00505050 < puVar11) {
      uVar15 = 0;
LAB_00aa93c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,unaff_r6);
    }
    unaff_r6 = (int)puVar11 * 0x198;
    if (unaff_r6 == 0) {
      iVar10 = 8;
      puVar11 = (undefined *)0x0;
    }
    else {
      uVar15 = 8;
      iVar10 = FUN_01298504(unaff_r6,8);
      if (iVar10 == 0) goto LAB_00aa93c0;
    }
    param_2[0x14] = (int)puVar11;
LAB_00aa9420:
    param_2[0x15] = iVar10;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar12 + 8) != 0) {
      iVar13 = *(int *)(iVar12 + 4);
      iVar10 = 0;
      iVar12 = *(int *)(iVar12 + 8) * 0x78;
      do {
        if (*local_2cc == 1) {
          local_b8 = local_2cc[1];
          uStack_b4 = local_2cc[2];
          uStack_b0 = local_2cc[3];
        }
        local_108 = (uint)(*local_2cc == 1);
        local_f8 = local_2cc[4];
        local_f4 = local_2cc[5];
        local_f0 = *local_2d0;
        local_ec = local_2cc[7];
        local_e8 = (undefined1)local_2cc[8];
        local_104 = local_b8;
        uStack_100 = uStack_b4;
        uStack_fc = uStack_b0;
        local_e4 = 0;
        iVar14 = param_2[0x16];
        local_110 = local_2c8;
        local_1e8 = iVar10;
        local_10c = iVar13;
        if (iVar14 == param_2[0x14]) {
          FUN_00f9d59c(param_2 + 0x14);
        }
        iVar13 = iVar13 + 0x78;
        FUN_01bed4e2(iVar14 * 0x198 + param_2[0x15],&local_278,0x198);
        iVar10 = iVar10 + 1;
        iVar12 = iVar12 + -0x78;
        param_2[0x16] = iVar14 + 1;
      } while (iVar12 != 0);
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
    uStack_9c = uStack_25c;
    uStack_98 = local_258;
    local_94 = local_254;
    uStack_90 = local_250;
    uStack_8c = uStack_24c;
    iStack_88 = iStack_248;
    iStack_84 = iStack_244;
    param_2[0x18] = local_278;
    param_2[0x19] = local_274;
    param_2[0x1a] = local_270;
    param_2[0x1b] = local_26c;
    param_2[0x1c] = local_268;
    param_2[0x1d] = local_264;
    param_2[0x1e] = local_260;
    param_2[0x1f] = uStack_25c;
    param_2[0x20] = local_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = uStack_24c;
    param_2[0x24] = iStack_248;
    param_2[0x25] = iStack_244;
switchD_00aa921c_caseD_3:
    FUN_00a078c4(&local_278,param_2 + 0x18,param_3);
    if (local_278 != 3) {
      puVar20 = &local_e0;
      local_2d0 = (int *)local_274;
      local_2c8 = local_270;
      local_2cc = (int *)local_26c;
      local_2d4 = local_264;
      local_e0 = local_260;
      uStack_dc = uStack_25c;
      uStack_d8 = local_258;
      uStack_d4 = local_254;
      local_d0 = local_250;
      uStack_cc = uStack_24c;
      iStack_c8 = iStack_248;
      iStack_c4 = iStack_244;
      uStack_c0 = uStack_240;
      FUN_00bb7e00(param_2 + 0x18);
      unaff_r8 = local_268;
      unaff_r9 = local_278;
      goto LAB_00aa989c;
    }
    uVar2 = 3;
LAB_00aa9824:
    local_2ec = param_2 + 0x29;
    local_2fc = param_2 + 0x13;
    *(undefined1 *)local_2fc = uVar2;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_2ec = 3;
    *param_1 = 2;
    uVar2 = 6;
    goto LAB_00aa9970;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar4 = (int *)param_2[0x2a];
      local_2cc = (int *)param_2[0x2b];
      local_2c8 = param_2[0x2c];
      goto LAB_00aa9348;
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
      iVar12 = param_2[0x26];
      local_2cc = (int *)param_2[0x27];
      local_2c8 = param_2[0x28];
      goto LAB_00aa9368;
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
      puVar11 = (undefined *)param_2[0xf];
      local_2cc = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_2d0 = local_2cc + 6;
      local_2c8 = param_2[0x11];
      iVar12 = param_2[0x12];
      if (*(int *)(*(int *)*local_2d0 + 0x10) != 0) {
        if (param_2[0xe] != 0) goto LAB_00aa93ac;
        param_2[0x14] = 0;
        iVar10 = 8;
        goto LAB_00aa9420;
      }
      if (param_2[0xe] != 0) goto LAB_00aa9624;
      param_2[0x14] = 0;
      iVar10 = 8;
      goto LAB_00aa9690;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto switchD_00aa921c_caseD_3;
    }
switchD_00aa921c_caseD_4:
    FUN_00a013f0(&local_278,param_2 + 0x18,param_3);
    if (local_278 == 3) {
      uVar2 = 4;
      goto LAB_00aa9824;
    }
    puVar20 = &local_70;
    local_2d0 = (int *)local_274;
    local_2c8 = local_270;
    local_2cc = (int *)local_26c;
    local_2d4 = local_264;
    local_70 = local_260;
    uStack_6c = uStack_25c;
    uStack_68 = local_258;
    uStack_64 = local_254;
    local_60 = local_250;
    uStack_5c = uStack_24c;
    iStack_58 = iStack_248;
    iStack_54 = iStack_244;
    uStack_50 = uStack_240;
    FUN_00bb7f40(param_2 + 0x18);
    unaff_r8 = local_268;
    unaff_r9 = local_278;
LAB_00aa989c:
    local_2f4 = param_2 + 0x2d;
    local_2ec = param_2 + 0x29;
    local_2f0 = param_2 + 0xe;
    bVar21 = unaff_r9 != 2;
    if (bVar21) {
      local_48 = *puVar20;
      uStack_44 = puVar20[1];
      uStack_40 = puVar20[2];
      local_3c = puVar20[3];
      local_38 = puVar20[4];
      uStack_34 = puVar20[5];
      uStack_30 = puVar20[6];
      uStack_2c = puVar20[7];
      uStack_28 = puVar20[8];
    }
    else {
      local_2d4 = 0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00bb8080(local_2f0);
    *(undefined1 *)local_2f4 = 1;
    *(undefined1 *)local_2ec = 1;
    if (bVar21) {
      uStack_284 = uStack_2c;
      uStack_280 = uStack_28;
    }
    uStack_288 = uStack_30;
    uStack_28c = uStack_34;
    local_290 = local_38;
    local_294 = local_3c;
    uStack_298 = uStack_40;
    uStack_29c = uStack_44;
    local_2a0 = local_48;
    uVar9 = (uint)bVar21;
  }
  *param_1 = uVar9;
  param_1[1] = unaff_r9;
  param_1[2] = (uint)local_2d0;
  param_1[3] = local_2c8;
  param_1[4] = (uint)local_2cc;
  param_1[5] = unaff_r8;
  param_1[6] = local_2d4;
  param_1[7] = local_2a0;
  param_1[8] = uStack_29c;
  param_1[9] = uStack_298;
  param_1[10] = local_294;
  param_1[0xb] = local_290;
  param_1[0xc] = uStack_28c;
  param_1[0xd] = uStack_288;
  param_1[0xe] = uStack_284;
  param_1[0xf] = uStack_280;
  uVar2 = 1;
LAB_00aa9970:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

