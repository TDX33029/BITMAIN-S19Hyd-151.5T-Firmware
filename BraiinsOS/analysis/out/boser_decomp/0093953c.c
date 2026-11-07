// FUN_0093953c @ 0093953c size=2392 calls_out=15 calls_in=0
// strings: pools

void FUN_0093953c(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint extraout_r2;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *unaff_r7;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint unaff_r10;
  int iVar16;
  undefined *puVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  int *local_2fc;
  int *local_2f8;
  int *local_2f4;
  int *local_2f0;
  uint local_2d4;
  int *local_2d0;
  int local_2cc;
  int *local_2c8;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint local_2b4;
  uint local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint local_298;
  int local_294;
  uint local_290;
  int local_28c;
  int *local_288;
  uint local_284;
  uint local_280;
  int iStack_27c;
  int iStack_278;
  int local_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  undefined4 uStack_260;
  int local_1e8;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  int iStack_100;
  uint uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  uint local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  uint local_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  int *local_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
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
    iVar10 = *param_2;
    iVar12 = param_2[1];
    local_2d4 = 0x80000007;
    uVar9 = 0;
    param_2[2] = iVar12;
    iVar3 = *(int *)(iVar12 + 0x10);
    uVar21 = CONCAT44(*(int *)(iVar3 + 0x40),iVar3);
    local_2c8 = (int *)param_3;
    piVar4 = param_2;
    if ((*(int *)(iVar3 + 0x40) == 5) &&
       (uVar21 = thunk_FUN_01bed842(*(int *)(iVar3 + 0x3c) + 8,"pools",5),
       local_2c8 = (int *)extraout_r2, (int)uVar21 == 0)) {
      param_2[4] = iVar10;
      *(undefined1 *)(param_2 + 9) = 0;
      param_2[5] = iVar12;
LAB_00939710:
      param_2[6] = iVar10;
      param_2[7] = iVar12;
      *(undefined1 *)(param_2 + 8) = 0;
      goto LAB_0093971c;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0bfb0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0bfb0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      iVar12 = param_2[5];
      goto LAB_00939710;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0bfb0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0bfb0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0bfb0);
      }
      iVar10 = param_2[6];
    }
LAB_0093971c:
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar4 = param_2 + 4;
    *piVar4 = iVar10;
    local_2c8 = param_2 + 5;
    iVar12 = piVar5[4];
    iVar19 = piVar5[5];
    iVar16 = piVar5[6];
    iVar14 = piVar5[7];
    iVar10 = piVar5[8];
    iVar3 = piVar5[1];
    iVar11 = piVar5[2];
    unaff_r7 = (int *)piVar5[3];
    *local_2c8 = *piVar5;
    param_2[6] = iVar3;
    param_2[7] = iVar11;
    param_2[8] = (int)unaff_r7;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar19;
    param_2[0xb] = iVar16;
    param_2[0xc] = iVar14;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    local_2cc = piVar5[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar4;
    param_2[0x2b] = (int)local_2c8;
    param_2[0x2c] = local_2cc;
LAB_009397b0:
    iVar10 = *piVar4;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar10;
    param_2[0x27] = (int)local_2c8;
    param_2[0x28] = local_2cc;
LAB_009397d0:
    puVar17 = *(undefined **)(iVar10 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar17;
    param_2[0x10] = (int)local_2c8;
    param_2[0x11] = local_2cc;
    param_2[0x12] = iVar10;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2d0 = local_2c8 + 6;
    if (*(int *)(*(int *)*local_2d0 + 0x10) == 0) {
LAB_00939ac0:
      if (&UNK_009d89d8 < puVar17) {
        uVar13 = 0;
LAB_00939ad8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar13,unaff_r7);
      }
      unaff_r7 = (int *)((int)puVar17 * 0xd0);
      if (unaff_r7 == (int *)0x0) {
        iVar12 = 8;
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar13 = 8;
        iVar12 = FUN_01298504(unaff_r7,8);
        if (iVar12 == 0) goto LAB_00939ad8;
      }
      param_2[0x14] = (int)puVar17;
LAB_00939b3c:
      piVar4 = param_2 + 0x14;
      param_2[0x15] = iVar12;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar10 + 8) != 0) {
        iVar3 = param_2[0x16];
        iVar12 = *(int *)(iVar10 + 8) << 2;
        iVar11 = 0;
        iVar14 = iVar3 * 0xd0 + 0xcc;
        iVar10 = *(int *)(iVar10 + 4);
        do {
          iVar16 = local_2c8[4];
          iVar19 = local_2c8[5];
          piVar5 = (int *)0x0;
          if (*local_2c8 != 0) {
            piVar5 = local_2c8 + 1;
          }
          iVar6 = local_2c8[6];
          iVar7 = local_2c8[7];
          iVar1 = local_2c8[8];
          iVar15 = iVar3 + iVar11;
          if (iVar15 == *piVar4) {
            FUN_00a20db0(piVar4);
          }
          iVar12 = iVar12 + -4;
          puVar8 = (undefined1 *)(param_2[0x15] + iVar14);
          *puVar8 = 0;
          iVar14 = iVar14 + 0xd0;
          *(int *)(puVar8 + -0xc) = iVar6;
          *(int *)(puVar8 + -0x28) = local_2cc;
          *(undefined4 *)(puVar8 + -0x24) = 1;
          *(int *)(puVar8 + -0x1c) = iVar11;
          iVar11 = iVar11 + 1;
          *(int *)(puVar8 + -0x14) = iVar16;
          *(int *)(puVar8 + -0x2c) = iVar10;
          puVar8[-4] = (char)iVar1;
          *(int *)(puVar8 + -8) = iVar7;
          *(undefined4 *)(puVar8 + -0x20) = 0;
          *(int **)(puVar8 + -0x18) = piVar5;
          *(int *)(puVar8 + -0x10) = iVar19;
          param_2[0x16] = iVar15 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar12 != 0);
      }
      local_80 = *piVar4;
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a14ec8(&local_298);
      local_b8 = local_298;
      iStack_b4 = local_294;
      uStack_b0 = local_290;
      iStack_ac = local_28c;
      local_a8 = local_288;
      uStack_a4 = local_284;
      uStack_a0 = local_280;
      iStack_9c = iStack_27c;
      iStack_98 = iStack_278;
      local_94 = local_274;
      iStack_90 = local_270;
      iStack_8c = iStack_26c;
      iStack_88 = iStack_268;
      iStack_84 = iStack_264;
      param_2[0x18] = local_298;
      param_2[0x19] = local_294;
      param_2[0x1a] = local_290;
      param_2[0x1b] = local_28c;
      param_2[0x1c] = (int)local_288;
      param_2[0x1d] = local_284;
      param_2[0x1e] = local_280;
      param_2[0x1f] = iStack_27c;
      param_2[0x20] = iStack_278;
      param_2[0x21] = local_274;
      param_2[0x22] = local_270;
      param_2[0x23] = iStack_26c;
      param_2[0x24] = iStack_268;
      param_2[0x25] = iStack_264;
      goto LAB_00939cb4;
    }
LAB_00939818:
    if (&UNK_004a7904 < puVar17) {
      uVar13 = 0;
      iVar3 = local_2cc;
LAB_0093982c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,iVar3);
    }
    iVar3 = (int)puVar17 * 0x1b8;
    if (iVar3 == 0) {
      iVar12 = 8;
      puVar17 = (undefined *)0x0;
    }
    else {
      uVar13 = 8;
      iVar12 = FUN_01298504(iVar3,8);
      if (iVar12 == 0) goto LAB_0093982c;
    }
    param_2[0x14] = (int)puVar17;
LAB_00939898:
    param_2[0x15] = iVar12;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar10 + 8) != 0) {
      iVar12 = *(int *)(iVar10 + 4);
      iVar10 = *(int *)(iVar10 + 8) << 2;
      iVar3 = 0;
      do {
        if (*local_2c8 == 1) {
          local_b8 = local_2c8[1];
          iStack_b4 = local_2c8[2];
          uStack_b0 = local_2c8[3];
        }
        local_108 = (uint)(*local_2c8 == 1);
        local_f8 = local_2c8[4];
        local_f4 = local_2c8[5];
        local_ec = local_2c8[7];
        local_f0 = *local_2d0;
        local_e8 = (undefined1)local_2c8[8];
        local_104 = local_b8;
        iStack_100 = iStack_b4;
        uStack_fc = uStack_b0;
        local_e4 = 0;
        iVar11 = param_2[0x16];
        local_110 = local_2cc;
        local_1e8 = iVar3;
        local_10c = iVar12;
        if (iVar11 == param_2[0x14]) {
          FUN_00a20e10(param_2 + 0x14);
        }
        iVar12 = iVar12 + 4;
        FUN_01bed4e2(iVar11 * 0x1b8 + param_2[0x15],&local_298,0x1b8);
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + -4;
        param_2[0x16] = iVar11 + 1;
      } while (iVar10 != 0);
    }
    local_80 = param_2[0x14];
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a16c14(&local_298);
    local_b8 = local_298;
    iStack_b4 = local_294;
    uStack_b0 = local_290;
    iStack_ac = local_28c;
    local_a8 = local_288;
    uStack_a4 = local_284;
    uStack_a0 = local_280;
    iStack_9c = iStack_27c;
    iStack_98 = iStack_278;
    local_94 = local_274;
    iStack_90 = local_270;
    iStack_8c = iStack_26c;
    iStack_88 = iStack_268;
    iStack_84 = iStack_264;
    param_2[0x18] = local_298;
    param_2[0x19] = local_294;
    param_2[0x1a] = local_290;
    param_2[0x1b] = local_28c;
    param_2[0x1c] = (int)local_288;
    param_2[0x1d] = local_284;
    param_2[0x1e] = local_280;
    param_2[0x1f] = iStack_27c;
    param_2[0x20] = iStack_278;
    param_2[0x21] = local_274;
    param_2[0x22] = local_270;
    param_2[0x23] = iStack_26c;
    param_2[0x24] = iStack_268;
    param_2[0x25] = iStack_264;
LAB_00939a1c:
    FUN_00a032ac(&local_298,param_2 + 0x18,param_3);
    if (local_298 != 3) {
      local_2c8 = (int *)local_298;
      local_2d0 = (int *)local_294;
      local_2cc = local_28c;
      local_2d4 = local_284;
      puVar18 = &local_e0;
      local_e0 = local_280;
      iStack_dc = iStack_27c;
      iStack_d8 = iStack_278;
      iStack_d4 = local_274;
      local_d0 = local_270;
      iStack_cc = iStack_26c;
      iStack_c8 = iStack_268;
      iStack_c4 = iStack_264;
      uStack_c0 = uStack_260;
      FUN_0093a154(param_2 + 0x18);
      unaff_r10 = local_290;
      goto LAB_00939d5c;
    }
    uVar2 = 3;
LAB_00939ce0:
    local_2fc = param_2 + 0x13;
    *(undefined1 *)local_2fc = uVar2;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)(param_2 + 0x29) = 3;
    *param_1 = 2;
    uVar2 = 4;
    goto LAB_00939e40;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar4 = (int *)param_2[0x2a];
      local_2c8 = (int *)param_2[0x2b];
      local_2cc = param_2[0x2c];
      goto LAB_009397b0;
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
      iVar10 = param_2[0x26];
      local_2c8 = (int *)param_2[0x27];
      local_2cc = param_2[0x28];
      goto LAB_009397d0;
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
      local_2c8 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      unaff_r7 = local_2c8 + 6;
      puVar17 = (undefined *)param_2[0xf];
      local_2cc = param_2[0x11];
      iVar10 = param_2[0x12];
      if (*(int *)(*(int *)*unaff_r7 + 0x10) != 0) {
        local_2d0 = unaff_r7;
        if (param_2[0xe] != 0) goto LAB_00939818;
        param_2[0x14] = 0;
        iVar12 = 8;
        goto LAB_00939898;
      }
      if (param_2[0xe] != 0) goto LAB_00939ac0;
      param_2[0x14] = 0;
      iVar12 = 8;
      goto LAB_00939b3c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      goto LAB_00939a1c;
    case '\x04':
    }
LAB_00939cb4:
    FUN_00a0a79c(&local_298,param_2 + 0x18,param_3);
    if (local_298 == 3) {
      uVar2 = 4;
      goto LAB_00939ce0;
    }
    local_2c8 = (int *)local_298;
    local_2d0 = (int *)local_294;
    local_2cc = local_28c;
    local_2d4 = local_284;
    puVar18 = &local_70;
    local_70 = local_280;
    iStack_6c = iStack_27c;
    iStack_68 = iStack_278;
    iStack_64 = local_274;
    local_60 = local_270;
    iStack_5c = iStack_26c;
    iStack_58 = iStack_268;
    iStack_54 = iStack_264;
    uStack_50 = uStack_260;
    FUN_0093a294(param_2 + 0x18);
    unaff_r10 = local_290;
LAB_00939d5c:
    uVar21 = CONCAT44(local_2d0,local_2cc);
    local_2f0 = param_2 + 0xe;
    local_2f8 = param_2 + 0x29;
    local_2f4 = param_2 + 0x2d;
    bVar20 = local_2c8 != (int *)0x2;
    if (bVar20) {
      local_48 = *puVar18;
      uStack_44 = puVar18[1];
      uStack_40 = puVar18[2];
      local_3c = puVar18[3];
      local_38 = puVar18[4];
      uStack_34 = puVar18[5];
      uStack_30 = puVar18[6];
      uStack_2c = puVar18[7];
      uStack_28 = puVar18[8];
    }
    else {
      local_2d4 = 0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_0093a3d4(local_2f0);
    *(undefined1 *)local_2f4 = 1;
    *(undefined1 *)local_2f8 = 1;
    if (bVar20) {
      uStack_2a4 = uStack_2c;
      uStack_2a0 = uStack_28;
    }
    uStack_2a8 = uStack_30;
    uStack_2ac = uStack_34;
    local_2b0 = local_38;
    local_2b4 = local_3c;
    uStack_2b8 = uStack_40;
    uStack_2bc = uStack_44;
    local_2c0 = local_48;
    uVar9 = (uint)bVar20;
    piVar4 = local_288;
  }
  param_1[2] = (uint)((ulonglong)uVar21 >> 0x20);
  param_1[4] = (uint)uVar21;
  *param_1 = uVar9;
  param_1[1] = (uint)local_2c8;
  param_1[3] = unaff_r10;
  param_1[5] = (uint)piVar4;
  param_1[6] = local_2d4;
  param_1[7] = local_2c0;
  param_1[8] = uStack_2bc;
  param_1[9] = uStack_2b8;
  param_1[10] = local_2b4;
  param_1[0xb] = local_2b0;
  param_1[0xc] = uStack_2ac;
  param_1[0xd] = uStack_2a8;
  param_1[0xe] = uStack_2a4;
  param_1[0xf] = uStack_2a0;
  uVar2 = 1;
LAB_00939e40:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

