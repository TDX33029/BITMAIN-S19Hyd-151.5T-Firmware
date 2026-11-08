// FUN_00e89de4 @ 00e89de4 size=5512 calls_out=18 calls_in=0
// strings: components

void FUN_00e89de4(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int unaff_r9;
  undefined *puVar12;
  int iVar13;
  int unaff_r10;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int in_r12;
  int extraout_r12;
  int *piVar18;
  int extraout_r12_00;
  int extraout_r12_01;
  int unaff_lr;
  int *local_340;
  int *local_33c;
  int *local_338;
  int *local_334;
  int *local_328;
  int *local_31c;
  int *local_314;
  int *local_310;
  int aiStack_308 [8];
  int local_2e8 [8];
  int local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  int local_2bc;
  int local_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int iStack_25c;
  int local_258;
  int local_254;
  int local_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined4 uStack_240;
  int local_1e8;
  int local_110;
  int local_10c;
  uint local_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
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
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar7 = param_2[1];
    iVar14 = -0x7ffffff9;
    param_2[2] = iVar7;
    uVar10 = 0;
    iVar9 = *param_2;
    local_310 = *(int **)(iVar7 + 0x10);
    iVar2 = *(int *)((int)local_310 + 0x40);
    if (iVar2 == 7) {
      unaff_lr = 0xe8a674;
      iVar2 = thunk_FUN_01bed842(*(int *)((int)local_310 + 0x3c) + 8,&DAT_005325f1,7);
      local_314 = (int *)extraout_r12_01;
      if (iVar2 == 0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar7;
        goto LAB_00e89f4c;
      }
    }
    else if (iVar2 == 10) {
      iVar2 = thunk_FUN_01bed842(*(int *)((int)local_310 + 0x3c) + 8,&DAT_003f1b00,10);
      if (iVar2 == 0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar7;
        goto LAB_00e8a088;
      }
      unaff_lr = 0xe8a630;
      iVar2 = thunk_FUN_01bed842(*(int *)((int)local_310 + 0x3c) + 8,"components",10);
      unaff_r9 = param_3;
      local_314 = (int *)extraout_r12_00;
      if (iVar2 == 0) {
        param_2[4] = iVar9;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar7;
        goto LAB_00e89f94;
      }
    }
    else {
      local_314 = (int *)in_r12;
      if (iVar2 == 9) {
        unaff_lr = 0xe89e80;
        iVar2 = thunk_FUN_01bed842(*(int *)((int)local_310 + 0x3c) + 8,&DAT_004c1920,9);
        local_314 = (int *)extraout_r12;
        if (iVar2 == 0) {
          param_2[4] = iVar9;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = iVar7;
          goto LAB_00e8a010;
        }
      }
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
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar7 = param_2[5];
LAB_00e8a010:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      iVar9 = param_2[6];
    }
    piVar18 = param_2 + 4;
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9;
    piVar4 = param_2 + 5;
    iVar16 = piVar3[4];
    iVar15 = piVar3[5];
    iVar13 = piVar3[6];
    iVar11 = piVar3[7];
    iVar9 = piVar3[8];
    iVar7 = piVar3[1];
    iVar14 = piVar3[2];
    iVar2 = piVar3[3];
    *piVar4 = *piVar3;
    param_2[6] = iVar7;
    param_2[7] = iVar14;
    param_2[8] = iVar2;
    param_2[0xc] = iVar11;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar15;
    param_2[0xb] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    iVar7 = piVar3[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar18;
    param_2[0xf] = (int)piVar4;
    param_2[0x10] = iVar7;
LAB_00e8a3d0:
    iVar9 = *piVar18;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar9;
    param_2[0x12] = (int)piVar4;
    param_2[0x13] = iVar7;
    goto LAB_00e8a3e8;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar18 = (int *)param_2[0xe];
      piVar4 = (int *)param_2[0xf];
      iVar7 = param_2[0x10];
      goto LAB_00e8a3d0;
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
      iVar9 = param_2[0x11];
    }
LAB_00e8a3e8:
    FUN_006666fc(&local_278,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
    piVar4 = aiStack_308;
    local_310 = (int *)local_274;
    unaff_lr = local_278;
LAB_00e8a44c:
    iVar14 = -0x7ffffffe;
    *piVar4 = local_264;
    piVar4[1] = local_260;
    piVar4[2] = iStack_25c;
    piVar4[3] = local_258;
    piVar4[4] = local_254;
    piVar4[5] = local_250;
    piVar4[6] = iStack_24c;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_2c8 = *piVar4;
    iStack_2c4 = piVar4[1];
    iStack_2c0 = piVar4[2];
    local_2bc = piVar4[3];
    local_2b8 = piVar4[4];
    iStack_2b4 = piVar4[5];
    iStack_2b0 = piVar4[6];
    uVar10 = 0;
    iVar7 = local_254;
    unaff_r9 = local_26c;
    local_314 = (int *)local_270;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar7 = param_2[5];
LAB_00e89f4c:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      iVar9 = param_2[6];
    }
    piVar18 = param_2 + 4;
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9 + 0xc;
    piVar4 = param_2 + 5;
    iVar16 = piVar3[4];
    iVar15 = piVar3[5];
    iVar13 = piVar3[6];
    iVar11 = piVar3[7];
    iVar9 = piVar3[8];
    iVar7 = piVar3[1];
    iVar14 = piVar3[2];
    iVar2 = piVar3[3];
    *piVar4 = *piVar3;
    param_2[6] = iVar7;
    param_2[7] = iVar14;
    param_2[8] = iVar2;
    param_2[9] = iVar16 + 0x20;
    param_2[0xc] = iVar11;
    param_2[10] = iVar15;
    param_2[0xb] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    iVar7 = piVar3[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar18;
    param_2[0xf] = (int)piVar4;
    param_2[0x10] = iVar7;
LAB_00e8a1b0:
    iVar9 = *piVar18;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar9;
    param_2[0x12] = (int)piVar4;
    param_2[0x13] = iVar7;
    goto LAB_00e8a424;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar18 = (int *)param_2[0xe];
      piVar4 = (int *)param_2[0xf];
      iVar7 = param_2[0x10];
      goto LAB_00e8a1b0;
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
      iVar9 = param_2[0x11];
    }
LAB_00e8a424:
    FUN_006666fc(&local_278,*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8));
    piVar4 = local_2e8;
    local_310 = (int *)local_274;
    unaff_lr = local_278;
    goto LAB_00e8a44c;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar7 = param_2[5];
LAB_00e8a088:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      iVar9 = param_2[6];
    }
    local_310 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_314 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9 + 0x18;
    iVar7 = piVar4[4];
    iVar16 = piVar4[5];
    iVar15 = piVar4[6];
    iVar13 = piVar4[7];
    iVar9 = piVar4[8];
    iVar14 = piVar4[1];
    iVar2 = piVar4[2];
    iVar11 = piVar4[3];
    *local_314 = *piVar4;
    param_2[6] = iVar14;
    param_2[7] = iVar2;
    param_2[8] = iVar11;
    param_2[9] = iVar7 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_2[10] = iVar16;
    param_2[0xb] = iVar15;
    param_2[0xc] = iVar13;
    iVar7 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_310;
    param_2[0x2b] = (int)local_314;
    param_2[0x2c] = iVar7;
LAB_00e8a530:
    iVar9 = *local_310;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar9;
    param_2[0x27] = (int)local_314;
    param_2[0x28] = iVar7;
LAB_00e8a554:
    puVar12 = *(undefined **)(iVar9 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar12;
    param_2[0x10] = (int)local_314;
    param_2[0x11] = iVar7;
    param_2[0x12] = iVar9;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_31c = local_314 + 6;
    if (*(int *)(*(int *)*local_31c + 0x10) != 0) {
LAB_00e8a59c:
      piVar4 = param_2 + 0xe;
      if (&UNK_00505050 < puVar12) {
        uVar10 = 0;
LAB_00e8a5b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,piVar4);
      }
      piVar4 = (int *)((int)puVar12 * 0x198);
      if (piVar4 == (int *)0x0) {
        iVar14 = 8;
        puVar12 = (undefined *)0x0;
      }
      else {
        uVar10 = 8;
        iVar14 = FUN_01298504(piVar4,8);
        if (iVar14 == 0) goto LAB_00e8a5b0;
      }
      param_2[0x14] = (int)puVar12;
LAB_00e8a7a4:
      param_2[0x15] = iVar14;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar9 + 8) != 0) {
        iVar14 = *(int *)(iVar9 + 4);
        iVar2 = 0;
        iVar9 = *(int *)(iVar9 + 8) * 0x24;
        do {
          if (*local_314 == 1) {
            local_b8 = local_314[1];
            iStack_b4 = local_314[2];
            iStack_b0 = local_314[3];
          }
          local_108 = (uint)(*local_314 == 1);
          local_f8 = local_314[4];
          local_f4 = local_314[5];
          local_ec = local_314[7];
          local_e8 = (undefined1)local_314[8];
          local_f0 = *local_31c;
          local_104 = local_b8;
          iStack_100 = iStack_b4;
          iStack_fc = iStack_b0;
          local_e4 = 0;
          iVar11 = param_2[0x16];
          local_1e8 = iVar2;
          local_110 = iVar7;
          local_10c = iVar14;
          if (iVar11 == param_2[0x14]) {
            FUN_00f9d59c(param_2 + 0x14);
          }
          iVar14 = iVar14 + 0x24;
          FUN_01bed4e2(iVar11 * 0x198 + param_2[0x15],&local_278,0x198);
          iVar2 = iVar2 + 1;
          iVar9 = iVar9 + -0x24;
          param_2[0x16] = iVar11 + 1;
        } while (iVar9 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_011737cc(&local_278);
      local_b8 = local_278;
      iStack_b4 = local_274;
      iStack_b0 = local_270;
      iStack_ac = local_26c;
      local_a8 = local_268;
      iStack_a4 = local_264;
      iStack_a0 = local_260;
      iStack_9c = iStack_25c;
      iStack_98 = local_258;
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
      param_2[0x20] = local_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = iStack_24c;
      param_2[0x24] = iStack_248;
      param_2[0x25] = iStack_244;
      goto LAB_00e8a92c;
    }
LAB_00e8af30:
    if (&UNK_00ba2e8b < puVar12) {
      uVar10 = 0;
      iVar2 = iVar7;
LAB_00e8af44:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,iVar2);
    }
    iVar2 = (int)puVar12 * 0xb0;
    if (iVar2 == 0) {
      iVar14 = 8;
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar10 = 8;
      iVar14 = FUN_01298504(iVar2,8);
      if (iVar14 == 0) goto LAB_00e8af44;
    }
    param_2[0x14] = (int)puVar12;
    local_310 = (int *)iVar7;
LAB_00e8afb0:
    local_328 = param_2 + 0x14;
    param_2[0x15] = iVar14;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar9 + 8) != 0) {
      iVar14 = param_2[0x16];
      iVar11 = 0;
      iVar7 = *(int *)(iVar9 + 8) * 0x24;
      iVar2 = iVar14 * 0xb0 + 0xac;
      iVar9 = *(int *)(iVar9 + 4);
      do {
        iVar13 = local_314[4];
        iVar15 = local_314[5];
        piVar4 = (int *)0x0;
        if (*local_314 != 0) {
          piVar4 = local_314 + 1;
        }
        iVar5 = local_314[6];
        iVar17 = local_314[7];
        iVar16 = local_314[8];
        iVar8 = iVar14 + iVar11;
        if (iVar8 == *local_328) {
          FUN_00a20d80(local_328);
        }
        iVar7 = iVar7 + -0x24;
        puVar6 = (undefined1 *)(param_2[0x15] + iVar2);
        *puVar6 = 0;
        iVar2 = iVar2 + 0xb0;
        *(int *)(puVar6 + -0xc) = iVar5;
        *(int *)(puVar6 + -8) = iVar17;
        *(int **)(puVar6 + -0x28) = local_310;
        *(undefined4 *)(puVar6 + -0x24) = 1;
        *(undefined4 *)(puVar6 + -0x20) = 0;
        *(int *)(puVar6 + -0x1c) = iVar11;
        *(int **)(puVar6 + -0x18) = piVar4;
        iVar11 = iVar11 + 1;
        *(int *)(puVar6 + -0x2c) = iVar9;
        *(int *)(puVar6 + -0x14) = iVar13;
        puVar6[-4] = (char)iVar16;
        *(int *)(puVar6 + -0x10) = iVar15;
        param_2[0x16] = iVar8 + 1;
        iVar9 = iVar9 + 0x24;
      } while (iVar7 != 0);
    }
    local_80 = *local_328;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_01170ca0(&local_278);
    local_b8 = local_278;
    iStack_b4 = local_274;
    iStack_b0 = local_270;
    iStack_ac = local_26c;
    local_a8 = local_268;
    iStack_a4 = local_264;
    iStack_a0 = local_260;
    iStack_9c = iStack_25c;
    iStack_98 = local_258;
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
    param_2[0x20] = local_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = iStack_24c;
    param_2[0x24] = iStack_248;
    param_2[0x25] = iStack_244;
LAB_00e8b114:
    FUN_0114ddb0(&local_278,param_2 + 0x18,param_3);
    if (local_278 != 3) {
      local_31c = (int *)local_274;
      local_310 = (int *)local_270;
      local_314 = (int *)local_26c;
      piVar4 = &local_70;
      local_70 = local_260;
      iStack_6c = iStack_25c;
      iStack_68 = local_258;
      iStack_64 = local_254;
      local_60 = local_250;
      iStack_5c = iStack_24c;
      iStack_58 = iStack_248;
      iStack_54 = iStack_244;
      uStack_50 = uStack_240;
      FUN_00e8b96c(param_2 + 0x18);
      iVar7 = local_278;
      unaff_r9 = local_268;
      iVar14 = local_264;
      goto LAB_00e8b1b4;
    }
    uVar1 = 4;
LAB_00e8b138:
    local_340 = param_2 + 0x2d;
    local_338 = param_2 + 0x29;
    local_33c = param_2 + 0x13;
    *(undefined1 *)local_33c = uVar1;
    *(undefined1 *)local_340 = 3;
    *(undefined1 *)local_338 = 3;
    *param_1 = 2;
    uVar1 = 8;
    goto LAB_00e8b26c;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      local_310 = (int *)param_2[0x2a];
      local_314 = (int *)param_2[0x2b];
      iVar7 = param_2[0x2c];
      goto LAB_00e8a530;
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
      iVar9 = param_2[0x26];
      local_314 = (int *)param_2[0x27];
      iVar7 = param_2[0x28];
      goto LAB_00e8a554;
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
      puVar12 = (undefined *)param_2[0xf];
      local_314 = (int *)param_2[0x10];
      local_31c = local_314 + 6;
      iVar7 = param_2[0x11];
      iVar9 = param_2[0x12];
      if (*(int *)(*(int *)*local_31c + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00e8af30;
        iVar14 = 8;
        param_2[0x14] = 0;
        local_310 = (int *)iVar7;
        goto LAB_00e8afb0;
      }
      if (param_2[0xe] != 0) goto LAB_00e8a59c;
      param_2[0x14] = 0;
      iVar14 = 8;
      goto LAB_00e8a7a4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00e8b114;
    }
LAB_00e8a92c:
    FUN_0114cb68(&local_278,param_2 + 0x18,param_3);
    if (local_278 == 3) {
      uVar1 = 3;
      goto LAB_00e8b138;
    }
    local_31c = (int *)local_274;
    local_310 = (int *)local_270;
    local_314 = (int *)local_26c;
    piVar4 = &local_e0;
    local_e0 = local_260;
    iStack_dc = iStack_25c;
    iStack_d8 = local_258;
    iStack_d4 = local_254;
    local_d0 = local_250;
    iStack_cc = iStack_24c;
    iStack_c8 = iStack_248;
    iStack_c4 = iStack_244;
    uStack_c0 = uStack_240;
    FUN_00e8b82c(param_2 + 0x18);
    iVar7 = local_278;
    unaff_r9 = local_268;
    iVar14 = local_264;
LAB_00e8b1b4:
    local_340 = param_2 + 0x2d;
    local_334 = param_2 + 0xe;
    local_338 = param_2 + 0x29;
    if (iVar7 != 2) {
      local_2a0 = *piVar4;
      iStack_29c = piVar4[1];
      iStack_298 = piVar4[2];
      iStack_294 = piVar4[3];
      local_290 = piVar4[4];
      iStack_28c = piVar4[5];
      iStack_288 = piVar4[6];
      iStack_284 = piVar4[7];
      iStack_280 = piVar4[8];
    }
    else {
      iVar14 = -0x7ffffffa;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00e8baac(local_334);
    *(undefined1 *)local_340 = 1;
    *(undefined1 *)local_338 = 1;
    piVar4 = &local_2a0;
    if (iVar7 != 2) goto LAB_00e8b21c;
LAB_00e8af0c:
    local_2c8 = *piVar4;
    iStack_2c4 = piVar4[1];
    iStack_2c0 = piVar4[2];
    local_2bc = piVar4[3];
    local_2b8 = piVar4[4];
    iStack_2b4 = piVar4[5];
    iStack_2b0 = piVar4[6];
    uVar10 = 0;
    unaff_lr = (int)local_31c;
    break;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar9 = param_2[4];
      iVar7 = param_2[5];
LAB_00e89f94:
      param_2[6] = iVar9;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar7;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c226a0);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c226a0);
      }
      iVar9 = param_2[6];
    }
    local_310 = param_2 + 4;
    piVar4 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    local_314 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar9 + 0x24;
    iVar7 = piVar4[4];
    iVar15 = piVar4[5];
    unaff_r10 = piVar4[6];
    iVar13 = piVar4[7];
    iVar9 = piVar4[8];
    iVar14 = piVar4[1];
    iVar2 = piVar4[2];
    iVar11 = piVar4[3];
    *local_314 = *piVar4;
    param_2[6] = iVar14;
    param_2[7] = iVar2;
    param_2[8] = iVar11;
    param_2[9] = iVar7 + 0x20;
    *(char *)(param_2 + 0xd) = (char)iVar9;
    param_2[10] = iVar15;
    param_2[0xb] = unaff_r10;
    param_2[0xc] = iVar13;
    iVar7 = piVar4[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_310;
    param_2[0x2b] = (int)local_314;
    param_2[0x2c] = iVar7;
LAB_00e8a268:
    iVar9 = *local_310;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar9;
    param_2[0x27] = (int)local_314;
    param_2[0x28] = iVar7;
LAB_00e8a288:
    puVar12 = *(undefined **)(iVar9 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0xe] = 1;
    param_2[0xf] = (int)puVar12;
    param_2[0x10] = (int)local_314;
    param_2[0x11] = iVar7;
    param_2[0x12] = iVar9;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_31c = local_314 + 6;
    if (*(int *)(*(int *)*local_31c + 0x10) != 0) {
LAB_00e8a2d0:
      if (&UNK_00505050 < puVar12) {
        uVar10 = 0;
LAB_00e8a2e4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,unaff_r10);
      }
      unaff_r10 = (int)puVar12 * 0x198;
      if (unaff_r10 == 0) {
        iVar14 = 8;
        puVar12 = (undefined *)0x0;
      }
      else {
        uVar10 = 8;
        iVar14 = FUN_01298504(unaff_r10,8);
        if (iVar14 == 0) goto LAB_00e8a2e4;
      }
      param_2[0x14] = (int)puVar12;
LAB_00e8a9b8:
      param_2[0x15] = iVar14;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      if (*(int *)(iVar9 + 8) != 0) {
        iVar14 = *(int *)(iVar9 + 4);
        iVar9 = *(int *)(iVar9 + 8) << 4;
        iVar2 = 0;
        do {
          if (*local_314 == 1) {
            local_b8 = local_314[1];
            iStack_b4 = local_314[2];
            iStack_b0 = local_314[3];
          }
          local_108 = (uint)(*local_314 == 1);
          local_f8 = local_314[4];
          local_f4 = local_314[5];
          local_ec = local_314[7];
          local_f0 = *local_31c;
          local_e8 = (undefined1)local_314[8];
          local_104 = local_b8;
          iStack_100 = iStack_b4;
          iStack_fc = iStack_b0;
          local_e4 = 0;
          iVar11 = param_2[0x16];
          local_1e8 = iVar2;
          local_110 = iVar7;
          local_10c = iVar14;
          if (iVar11 == param_2[0x14]) {
            FUN_00f9d59c(param_2 + 0x14);
          }
          iVar14 = iVar14 + 0x10;
          FUN_01bed4e2(iVar11 * 0x198 + param_2[0x15],&local_278,0x198);
          iVar2 = iVar2 + 1;
          iVar9 = iVar9 + -0x10;
          param_2[0x16] = iVar11 + 1;
        } while (iVar9 != 0);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_011737cc(&local_278);
      local_b8 = local_278;
      iStack_b4 = local_274;
      iStack_b0 = local_270;
      iStack_ac = local_26c;
      local_a8 = local_268;
      iStack_a4 = local_264;
      iStack_a0 = local_260;
      iStack_9c = iStack_25c;
      iStack_98 = local_258;
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
      param_2[0x20] = local_258;
      param_2[0x21] = local_254;
      param_2[0x22] = local_250;
      param_2[0x23] = iStack_24c;
      param_2[0x24] = iStack_248;
      param_2[0x25] = iStack_244;
      goto LAB_00e8ab44;
    }
LAB_00e8ac20:
    piVar4 = param_2 + 0x13;
    if (&UNK_00ba2e8b < puVar12) {
      uVar10 = 0;
LAB_00e8ac34:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar10,piVar4);
    }
    piVar4 = (int *)((int)puVar12 * 0xb0);
    if (piVar4 == (int *)0x0) {
      iVar14 = 8;
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar10 = 8;
      iVar14 = FUN_01298504(piVar4,8);
      if (iVar14 == 0) goto LAB_00e8ac34;
    }
    param_2[0x14] = (int)puVar12;
    local_310 = (int *)iVar7;
LAB_00e8aca4:
    local_328 = param_2 + 0x14;
    param_2[0x15] = iVar14;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(int *)(iVar9 + 8) != 0) {
      iVar14 = param_2[0x16];
      iVar7 = *(int *)(iVar9 + 8) << 4;
      iVar11 = 0;
      iVar2 = iVar14 * 0xb0 + 0xac;
      iVar9 = *(int *)(iVar9 + 4);
      do {
        iVar13 = local_314[4];
        iVar15 = local_314[5];
        piVar4 = (int *)0x0;
        if (*local_314 != 0) {
          piVar4 = local_314 + 1;
        }
        iVar5 = local_314[6];
        iVar17 = local_314[7];
        iVar16 = local_314[8];
        iVar8 = iVar14 + iVar11;
        if (iVar8 == *local_328) {
          FUN_00a20d80(local_328);
        }
        iVar7 = iVar7 + -0x10;
        puVar6 = (undefined1 *)(param_2[0x15] + iVar2);
        *puVar6 = 0;
        iVar2 = iVar2 + 0xb0;
        *(int *)(puVar6 + -0xc) = iVar5;
        *(int *)(puVar6 + -8) = iVar17;
        *(int **)(puVar6 + -0x28) = local_310;
        *(undefined4 *)(puVar6 + -0x24) = 1;
        *(undefined4 *)(puVar6 + -0x20) = 0;
        *(int *)(puVar6 + -0x1c) = iVar11;
        *(int **)(puVar6 + -0x18) = piVar4;
        iVar11 = iVar11 + 1;
        *(int *)(puVar6 + -0x2c) = iVar9;
        *(int *)(puVar6 + -0x14) = iVar13;
        puVar6[-4] = (char)iVar16;
        *(int *)(puVar6 + -0x10) = iVar15;
        param_2[0x16] = iVar8 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar7 != 0);
    }
    local_80 = *local_328;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_01170ca0(&local_278);
    local_b8 = local_278;
    iStack_b4 = local_274;
    iStack_b0 = local_270;
    iStack_ac = local_26c;
    local_a8 = local_268;
    iStack_a4 = local_264;
    iStack_a0 = local_260;
    iStack_9c = iStack_25c;
    iStack_98 = local_258;
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
    param_2[0x20] = local_258;
    param_2[0x21] = local_254;
    param_2[0x22] = local_250;
    param_2[0x23] = iStack_24c;
    param_2[0x24] = iStack_248;
    param_2[0x25] = iStack_244;
LAB_00e8ae08:
    FUN_01150eb8(&local_278,param_2 + 0x18,param_3);
    if (local_278 != 3) {
      local_31c = (int *)local_274;
      local_310 = (int *)local_270;
      local_314 = (int *)local_26c;
      piVar4 = &local_70;
      local_70 = local_260;
      iStack_6c = iStack_25c;
      iStack_68 = local_258;
      iStack_64 = local_254;
      local_60 = local_250;
      iStack_5c = iStack_24c;
      iStack_58 = iStack_248;
      iStack_54 = iStack_244;
      uStack_50 = uStack_240;
      FUN_00e8b96c(param_2 + 0x18);
      iVar7 = local_278;
      unaff_r9 = local_268;
      iVar14 = local_264;
      goto LAB_00e8aea4;
    }
    uVar1 = 4;
LAB_00e8ae2c:
    local_33c = param_2 + 0x2d;
    local_338 = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar1;
    *(undefined1 *)local_33c = 3;
    *(undefined1 *)local_338 = 3;
    *param_1 = 2;
    uVar1 = 10;
    goto LAB_00e8b26c;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      local_310 = (int *)param_2[0x2a];
      local_314 = (int *)param_2[0x2b];
      iVar7 = param_2[0x2c];
      goto LAB_00e8a268;
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
      iVar9 = param_2[0x26];
      local_314 = (int *)param_2[0x27];
      iVar7 = param_2[0x28];
      goto LAB_00e8a288;
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
      local_314 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_31c = local_314 + 6;
      puVar12 = (undefined *)param_2[0xf];
      iVar7 = param_2[0x11];
      iVar9 = param_2[0x12];
      if (*(int *)(*(int *)*local_31c + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_00e8ac20;
        iVar14 = 8;
        param_2[0x14] = 0;
        local_310 = (int *)iVar7;
        goto LAB_00e8aca4;
      }
      if (param_2[0xe] != 0) goto LAB_00e8a2d0;
      param_2[0x14] = 0;
      iVar14 = 8;
      goto LAB_00e8a9b8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x03':
      break;
    case '\x04':
      goto LAB_00e8ae08;
    }
LAB_00e8ab44:
    FUN_0114b920(&local_278,param_2 + 0x18,param_3);
    if (local_278 == 3) {
      uVar1 = 3;
      goto LAB_00e8ae2c;
    }
    local_31c = (int *)local_274;
    local_310 = (int *)local_270;
    local_314 = (int *)local_26c;
    piVar4 = &local_e0;
    local_e0 = local_260;
    iStack_dc = iStack_25c;
    iStack_d8 = local_258;
    iStack_d4 = local_254;
    local_d0 = local_250;
    iStack_cc = iStack_24c;
    iStack_c8 = iStack_248;
    iStack_c4 = iStack_244;
    uStack_c0 = uStack_240;
    FUN_00e8b82c(param_2 + 0x18);
    iVar7 = local_278;
    unaff_r9 = local_268;
    iVar14 = local_264;
LAB_00e8aea4:
    local_33c = param_2 + 0x2d;
    local_334 = param_2 + 0xe;
    local_338 = param_2 + 0x29;
    if (iVar7 != 2) {
      local_48 = *piVar4;
      iStack_44 = piVar4[1];
      iStack_40 = piVar4[2];
      local_3c = piVar4[3];
      local_38 = piVar4[4];
      iStack_34 = piVar4[5];
      iStack_30 = piVar4[6];
      iStack_2c = piVar4[7];
      iStack_28 = piVar4[8];
    }
    else {
      iVar14 = -0x7ffffffa;
    }
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_00e8baac(local_334);
    *(undefined1 *)local_33c = 1;
    *(undefined1 *)local_338 = 1;
    piVar4 = &local_48;
    if (iVar7 == 2) goto LAB_00e8af0c;
LAB_00e8b21c:
    local_2c8 = *piVar4;
    iStack_2c4 = piVar4[1];
    iStack_2c0 = piVar4[2];
    local_2bc = piVar4[3];
    local_2b8 = piVar4[4];
    iStack_2b4 = piVar4[5];
    iStack_2b0 = piVar4[6];
    iStack_2ac = piVar4[7];
    iStack_2a8 = piVar4[8];
    uVar10 = 1;
    unaff_lr = (int)local_31c;
  }
  *param_1 = uVar10;
  param_1[1] = iVar7;
  param_1[2] = unaff_lr;
  param_1[3] = local_310;
  param_1[4] = local_314;
  param_1[5] = unaff_r9;
  param_1[6] = iVar14;
  param_1[7] = local_2c8;
  param_1[8] = iStack_2c4;
  param_1[9] = iStack_2c0;
  param_1[10] = local_2bc;
  param_1[0xb] = local_2b8;
  param_1[0xc] = iStack_2b4;
  param_1[0xd] = iStack_2b0;
  param_1[0xe] = iStack_2ac;
  param_1[0xf] = iStack_2a8;
  uVar1 = 1;
LAB_00e8b26c:
  *(undefined1 *)(param_2 + 3) = uVar1;
  return;
}

