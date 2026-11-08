// FUN_00b2c898 @ 00b2c898 size=2272 calls_out=15 calls_in=0
// strings: result

void FUN_00b2c898(uint *param_1,int *param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint extraout_r2;
  int *unaff_r5;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint unaff_r9;
  uint unaff_r10;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  int *local_2d4;
  int *local_2d0;
  int *local_2cc;
  int *local_2c8;
  int *local_2b0;
  int *local_2ac;
  int local_2a8;
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
  int local_274;
  uint local_270;
  int local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  int iStack_25c;
  int iStack_258;
  int local_254;
  int local_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int *local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined1 local_1d0;
  undefined1 local_1cc;
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
  uint local_a8;
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
    iVar6 = *param_2;
    iVar7 = param_2[1];
    uVar9 = 0x80000007;
    uVar5 = 0;
    param_2[2] = iVar7;
    iVar2 = *(int *)(iVar7 + 0x10);
    uVar17 = CONCAT44(*(int *)(iVar2 + 0x40),iVar2);
    local_2b0 = (int *)param_3;
    if (*(int *)(iVar2 + 0x40) == 6) {
      uVar17 = thunk_FUN_01bed842(*(int *)(iVar2 + 0x3c) + 8,"result",6);
      local_2b0 = (int *)extraout_r2;
      if ((int)uVar17 == 0) {
        param_2[4] = iVar6;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar7;
        goto LAB_00b2ca78;
      }
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12030);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12030);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar6 = param_2[4];
      iVar7 = param_2[5];
LAB_00b2ca78:
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[6] = iVar6;
      param_2[7] = iVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12030);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12030);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12030);
      }
      iVar6 = param_2[6];
    }
    puVar4 = (undefined4 *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_2ac = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar3 = param_2 + 4;
    *piVar3 = iVar6;
    iVar6 = puVar4[4];
    iVar15 = puVar4[5];
    iVar11 = puVar4[6];
    iVar10 = puVar4[7];
    uVar1 = *(undefined1 *)(puVar4 + 8);
    unaff_r5 = (int *)*puVar4;
    iVar7 = puVar4[1];
    iVar2 = puVar4[2];
    iVar14 = puVar4[3];
    *local_2ac = (int)unaff_r5;
    param_2[6] = iVar7;
    param_2[7] = iVar2;
    param_2[8] = iVar14;
    param_2[9] = iVar6 + 0x20;
    param_2[10] = iVar15;
    param_2[0xb] = iVar11;
    param_2[0xc] = iVar10;
    *(undefined1 *)(param_2 + 0xd) = uVar1;
    local_2a8 = puVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar3;
    param_2[0x2b] = (int)local_2ac;
    param_2[0x2c] = local_2a8;
LAB_00b2cb00:
    iVar6 = *piVar3;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar6;
    param_2[0x27] = (int)local_2ac;
    param_2[0x28] = local_2a8;
LAB_00b2cb20:
    puVar12 = *(undefined **)(iVar6 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar6;
    param_2[0x11] = local_2a8;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar12;
    param_2[0x10] = (int)local_2ac;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2b0 = local_2ac + 6;
    if (*(int *)(*(int *)*local_2b0 + 0x10) != 0) {
LAB_00b2cb64:
      if (&UNK_00505050 < puVar12) {
        uVar8 = 0;
LAB_00b2cb78:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,unaff_r5);
      }
      unaff_r5 = (int *)((int)puVar12 * 0x198);
      if (unaff_r5 == (int *)0x0) {
        iVar7 = 8;
        puVar12 = (undefined *)0x0;
      }
      else {
        uVar8 = 8;
        iVar7 = FUN_01298504(unaff_r5,8);
        if (iVar7 == 0) goto LAB_00b2cb78;
      }
      param_2[0x14] = (int)puVar12;
LAB_00b2cbe4:
      param_2[0x15] = iVar7;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar6 + 8) != 0) {
        iVar7 = *(int *)(iVar6 + 4);
        iVar6 = *(int *)(iVar6 + 8) << 4;
        iVar2 = 0;
        do {
          if (*local_2ac == 1) {
            local_b8 = local_2ac[1];
            iStack_b4 = local_2ac[2];
            uStack_b0 = local_2ac[3];
          }
          local_108 = (uint)(*local_2ac == 1);
          local_f8 = local_2ac[4];
          local_f4 = local_2ac[5];
          local_ec = local_2ac[7];
          local_f0 = *local_2b0;
          local_e8 = (undefined1)local_2ac[8];
          local_104 = local_b8;
          iStack_100 = iStack_b4;
          uStack_fc = uStack_b0;
          local_e4 = 0;
          iVar10 = param_2[0x16];
          local_110 = local_2a8;
          local_1e8 = iVar2;
          local_10c = iVar7;
          if (iVar10 == param_2[0x14]) {
            FUN_00f9d59c(param_2 + 0x14);
          }
          iVar7 = iVar7 + 0x10;
          FUN_01bed4e2(iVar10 * 0x198 + param_2[0x15],&local_278,0x198);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + -0x10;
          param_2[0x16] = iVar10 + 1;
        } while (iVar6 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_00a138ec(&local_278);
      local_b8 = local_278;
      iStack_b4 = local_274;
      uStack_b0 = local_270;
      iStack_ac = local_26c;
      local_a8 = local_268;
      uStack_a4 = local_264;
      uStack_a0 = local_260;
      iStack_9c = iStack_25c;
      iStack_98 = iStack_258;
      local_94 = local_254;
      iStack_90 = local_250;
      iStack_8c = iStack_24c;
      iStack_88 = iStack_248;
      iStack_84 = iStack_244;
      param_2[0x18] = local_278;
      param_2[0x19] = local_274;
      param_2[0x1a] = local_270;
      param_2[0x1b] = local_26c;
      param_2[0x1c] = local_268;
      param_2[0x1d] = local_264;
      param_2[0x1e] = local_260;
      param_2[0x1f] = iStack_25c;
      param_2[0x20] = iStack_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = iStack_24c;
      param_2[0x24] = iStack_248;
      param_2[0x25] = iStack_244;
      goto LAB_00b2cd64;
    }
LAB_00b2cdfc:
    if (&UNK_00ba2e8b < puVar12) {
      uVar8 = 0;
LAB_00b2ce10:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,unaff_r5);
    }
    unaff_r5 = (int *)((int)puVar12 * 0xb0);
    if (unaff_r5 == (int *)0x0) {
      iVar7 = 8;
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar8 = 8;
      iVar7 = FUN_01298504(unaff_r5,8);
      if (iVar7 == 0) goto LAB_00b2ce10;
    }
    param_2[0x14] = (int)puVar12;
LAB_00b2ce7c:
    param_2[0x15] = iVar7;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar6 + 8) != 0) {
      iVar7 = *(int *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 8) << 4;
      iVar2 = 0;
      do {
        local_1d4 = local_2ac[7];
        iVar10 = param_2[0x16];
        local_1e0 = local_2ac[4];
        local_1e4 = (int *)0x0;
        if (*local_2ac != 0) {
          local_1e4 = local_2ac + 1;
        }
        local_1dc = local_2ac[5];
        local_1d8 = local_2ac[6];
        local_1d0 = (undefined1)local_2ac[8];
        local_1ec = 0;
        local_1cc = 0;
        local_1f0 = 1;
        local_1f4 = local_2a8;
        local_1f8 = iVar7;
        local_1e8 = iVar2;
        if (iVar10 == param_2[0x14]) {
          FUN_00a20d80(param_2 + 0x14);
        }
        iVar7 = iVar7 + 0x10;
        FUN_01bed4e2(iVar10 * 0xb0 + param_2[0x15],&local_278,0xb0);
        iVar2 = iVar2 + 1;
        iVar6 = iVar6 + -0x10;
        param_2[0x16] = iVar10 + 1;
      } while (iVar6 != 0);
    }
    local_80 = param_2[0x14];
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_00a1563c(&local_278);
    local_b8 = local_278;
    iStack_b4 = local_274;
    uStack_b0 = local_270;
    iStack_ac = local_26c;
    local_a8 = local_268;
    uStack_a4 = local_264;
    uStack_a0 = local_260;
    iStack_9c = iStack_25c;
    iStack_98 = iStack_258;
    local_94 = local_254;
    iStack_90 = local_250;
    iStack_8c = iStack_24c;
    iStack_88 = iStack_248;
    iStack_84 = iStack_244;
    param_2[0x18] = local_278;
    param_2[0x19] = local_274;
    param_2[0x1a] = local_270;
    param_2[0x1b] = local_26c;
    param_2[0x1c] = local_268;
    param_2[0x1d] = local_264;
    param_2[0x1e] = local_260;
    param_2[0x1f] = iStack_25c;
    param_2[0x20] = iStack_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = iStack_24c;
    param_2[0x24] = iStack_248;
    param_2[0x25] = iStack_244;
LAB_00b2cfb8:
    FUN_009ffca0(&local_278,param_2 + 0x18,param_3);
    if (local_278 != 3) {
      local_2ac = (int *)local_274;
      local_2a8 = local_26c;
      local_2b0 = (int *)local_268;
      puVar13 = &local_70;
      local_70 = local_260;
      iStack_6c = iStack_25c;
      iStack_68 = iStack_258;
      iStack_64 = local_254;
      local_60 = local_250;
      iStack_5c = iStack_24c;
      iStack_58 = iStack_248;
      iStack_54 = iStack_244;
      uStack_50 = uStack_240;
      FUN_00b2bcbc(param_2 + 0x18);
      uVar9 = local_264;
      unaff_r9 = local_270;
      unaff_r10 = local_278;
      goto LAB_00b2d058;
    }
    uVar1 = 4;
LAB_00b2cfe0:
    local_2d4 = param_2 + 0x13;
    local_2c8 = param_2 + 0x29;
    *(undefined1 *)local_2d4 = uVar1;
    *(undefined1 *)(param_2 + 0x2d) = 3;
    *(undefined1 *)local_2c8 = 3;
    *param_1 = 2;
    uVar1 = 4;
    goto LAB_00b2d124;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar3 = (int *)param_2[0x2a];
      local_2ac = (int *)param_2[0x2b];
      local_2a8 = param_2[0x2c];
      goto LAB_00b2cb00;
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
      iVar6 = param_2[0x26];
      local_2ac = (int *)param_2[0x27];
      local_2a8 = param_2[0x28];
      goto LAB_00b2cb20;
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
      local_2ac = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      unaff_r5 = local_2ac + 6;
      puVar12 = (undefined *)param_2[0xf];
      local_2a8 = param_2[0x11];
      iVar6 = param_2[0x12];
      if (*(int *)(*(int *)*unaff_r5 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00b2cdfc;
        iVar7 = 8;
        param_2[0x14] = 0;
        goto LAB_00b2ce7c;
      }
      local_2b0 = unaff_r5;
      if (param_2[0xe] != 0) goto LAB_00b2cb64;
      param_2[0x14] = 0;
      iVar7 = 8;
      goto LAB_00b2cbe4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00b2cfb8;
    }
LAB_00b2cd64:
    FUN_00a06688(&local_278,param_2 + 0x18,param_3);
    if (local_278 == 3) {
      uVar1 = 3;
      goto LAB_00b2cfe0;
    }
    local_2ac = (int *)local_274;
    local_2a8 = local_26c;
    local_2b0 = (int *)local_268;
    puVar13 = &local_e0;
    local_e0 = local_260;
    iStack_dc = iStack_25c;
    iStack_d8 = iStack_258;
    iStack_d4 = local_254;
    local_d0 = local_250;
    iStack_cc = iStack_24c;
    iStack_c8 = iStack_248;
    iStack_c4 = iStack_244;
    uStack_c0 = uStack_240;
    FUN_00b2bb7c(param_2 + 0x18);
    uVar9 = local_264;
    unaff_r9 = local_270;
    unaff_r10 = local_278;
LAB_00b2d058:
    uVar17 = CONCAT44(local_2ac,local_2a8);
    local_2cc = param_2 + 0x2d;
    local_2d0 = param_2 + 0xe;
    local_2c8 = param_2 + 0x29;
    bVar16 = unaff_r10 != 2;
    if (bVar16) {
      local_48 = *puVar13;
      uStack_44 = puVar13[1];
      uStack_40 = puVar13[2];
      local_3c = puVar13[3];
      local_38 = puVar13[4];
      uStack_34 = puVar13[5];
      uStack_30 = puVar13[6];
      uStack_2c = puVar13[7];
      uStack_28 = puVar13[8];
    }
    else {
      uVar9 = 0x80000006;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00b2bdfc(local_2d0);
    *(undefined1 *)local_2cc = 1;
    *(undefined1 *)local_2c8 = 1;
    if (bVar16) {
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
    uVar5 = (uint)bVar16;
  }
  param_1[2] = (uint)((ulonglong)uVar17 >> 0x20);
  param_1[4] = (uint)uVar17;
  param_1[5] = (uint)local_2b0;
  param_1[6] = uVar9;
  *param_1 = uVar5;
  param_1[1] = unaff_r10;
  param_1[3] = unaff_r9;
  param_1[7] = local_2a0;
  param_1[8] = uStack_29c;
  param_1[9] = uStack_298;
  param_1[10] = local_294;
  param_1[0xb] = local_290;
  param_1[0xc] = uStack_28c;
  param_1[0xd] = uStack_288;
  param_1[0xe] = uStack_284;
  param_1[0xf] = uStack_280;
  uVar1 = 1;
LAB_00b2d124:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

