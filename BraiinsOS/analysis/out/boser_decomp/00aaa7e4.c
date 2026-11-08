// FUN_00aaa7e4 @ 00aaa7e4 size=4188 calls_out=7 calls_in=0
// strings: status | active | shares | lastDifficulty | bestSharechips | generatedWork

void FUN_00aaa7e4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint unaff_r8;
  uint uVar14;
  uint unaff_r10;
  uint uVar15;
  uint uVar16;
  uint unaff_lr;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  uint *local_134;
  uint auStack_130 [8];
  uint auStack_110 [16];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_68 [8];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar9 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    uVar13 = param_2[1];
    uVar11 = 0x80000007;
    param_2[2] = uVar13;
    uVar14 = 0;
    uVar15 = *param_2;
    iVar4 = *(int *)(uVar13 + 0x10);
    unaff_r8 = unaff_r8;
    unaff_r10 = unaff_r10;
    switch(*(undefined4 *)(iVar4 + 0x40)) {
    case 3:
      unaff_lr = 0xaaa8dc;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"url",3);
      uVar9 = extraout_r2;
      param_4 = extraout_r3;
      if (iVar4 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaaa84;
      }
      break;
    case 4:
      if (*(int *)(*(int *)(iVar4 + 0x3c) + 8) == 0x72657375) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaaac8;
      }
      break;
    case 6:
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"status",6);
      if (iVar10 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaaa40;
      }
      iVar10 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"active",6);
      if (iVar10 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaa964;
      }
      unaff_lr = 0xaab570;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"shares",6);
      uVar9 = extraout_r2_00;
      param_4 = extraout_r3_00;
      unaff_r8 = uVar13;
      unaff_r10 = uVar15;
      if (iVar4 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaac0c;
      }
      break;
    case 9:
      unaff_lr = 0xaab634;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"bestSharechips",9);
      uVar9 = extraout_r2_02;
      param_4 = extraout_r3_02;
      unaff_r8 = unaff_r8;
      unaff_r10 = unaff_r10;
      if (iVar4 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaab40;
      }
      break;
    case 0xd:
      unaff_lr = 0xaab67c;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"generatedWork",0xd);
      uVar9 = extraout_r2_03;
      param_4 = extraout_r3_03;
      unaff_r8 = unaff_r8;
      unaff_r10 = unaff_r10;
      if (iVar4 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaabc8;
      }
      break;
    case 0xe:
      unaff_lr = 0xaab5b4;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"lastDifficulty",0xe);
      uVar9 = extraout_r2_01;
      param_4 = extraout_r3_01;
      unaff_r8 = unaff_r8;
      unaff_r10 = unaff_r10;
      if (iVar4 == 0) {
        param_2[4] = uVar15;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar13;
        goto LAB_00aaab84;
      }
    }
    goto switchD_00aaa888_caseD_5;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c12998);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c12998);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaaa84:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    puVar6 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar8 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    puVar12 = param_2 + 4;
    *puVar12 = uVar15 + 0x50;
    uVar9 = puVar6[8];
    uVar15 = puVar6[4];
    unaff_r10 = puVar6[5];
    uVar11 = puVar6[6];
    uVar14 = puVar6[7];
    uVar13 = puVar6[1];
    uVar16 = puVar6[2];
    uVar17 = puVar6[3];
    *puVar8 = *puVar6;
    param_2[6] = uVar13;
    param_2[7] = uVar16;
    param_2[8] = uVar17;
    param_2[9] = uVar15 + 0x20;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar11;
    param_2[0xc] = uVar14;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    uVar15 = puVar6[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)puVar12;
    param_2[0xf] = (uint)puVar8;
    param_2[0x10] = uVar15;
LAB_00aaaed0:
    uVar9 = *puVar12;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = uVar9;
    param_2[0x12] = (uint)puVar8;
    param_2[0x13] = uVar15;
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      puVar12 = (uint *)param_2[0xe];
      puVar8 = (uint *)param_2[0xf];
      uVar15 = param_2[0x10];
      goto LAB_00aaaed0;
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
      uVar9 = param_2[0x11];
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaaac8:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x5c;
    uVar9 = puVar8[8];
    uVar15 = puVar8[4];
    unaff_r10 = puVar8[5];
    uVar14 = puVar8[6];
    uVar11 = puVar8[7];
    uVar13 = puVar8[1];
    uVar16 = puVar8[2];
    uVar17 = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar13;
    param_2[7] = uVar16;
    param_2[8] = uVar17;
    param_2[9] = uVar15 + 0x20;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar11;
    uVar15 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar15;
LAB_00aaafa4:
    uVar9 = *local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = uVar9;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar15;
    goto LAB_00aaafbc;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar15 = param_2[0x10];
      goto LAB_00aaafa4;
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
      uVar9 = param_2[0x11];
    }
LAB_00aaafbc:
    FUN_006666fc(&local_d0,*(undefined4 *)(uVar9 + 4),*(undefined4 *)(uVar9 + 8));
    puVar12 = auStack_110;
    goto LAB_00aab484;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaaa40:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x74;
    uVar15 = puVar8[7];
    uVar13 = puVar8[4];
    uVar16 = puVar8[5];
    uVar14 = puVar8[6];
    uVar9 = puVar8[8];
    uVar11 = puVar8[1];
    uVar17 = puVar8[2];
    uVar18 = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar11;
    param_2[7] = uVar17;
    param_2[8] = uVar18;
    param_2[9] = uVar13 + 0x20;
    param_2[10] = uVar16;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar15;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    uVar9 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar9;
LAB_00aaae24:
    puVar7 = (undefined1 *)*local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)puVar7;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar9;
    goto LAB_00aaaff8;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar9 = param_2[0x10];
      goto LAB_00aaae24;
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
          FUN_013079f0(&DAT_01c10344);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10344);
      }
      puVar7 = (undefined1 *)param_2[0x11];
    }
LAB_00aaaff8:
    FUN_00b56684(&local_d0,*puVar7);
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_48 = local_bc;
    uStack_44 = local_b8;
    uStack_40 = local_b4;
    local_3c = local_b0;
    local_38 = uStack_ac;
    uStack_34 = uStack_a8;
    uStack_30 = local_a4;
    uVar9 = local_cc;
    param_4 = local_c8;
    uVar11 = local_c0;
    unaff_r10 = local_cc;
    unaff_lr = local_c4;
    goto LAB_00aab4cc;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaa964:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x75;
    uVar9 = puVar8[8];
    param_4 = puVar8[4];
    unaff_r10 = puVar8[5];
    uVar11 = puVar8[6];
    uVar13 = puVar8[7];
    uVar15 = puVar8[1];
    uVar14 = puVar8[2];
    unaff_lr = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar15;
    param_2[7] = uVar14;
    param_2[8] = unaff_lr;
    param_2[9] = param_4 + 0x20;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar11;
    param_2[0xc] = uVar13;
    uVar9 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar9;
LAB_00aaad24:
    pbVar5 = (byte *)*local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)pbVar5;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar9;
    goto LAB_00aaad78;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar9 = param_2[0x10];
      goto LAB_00aaad24;
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
      pbVar5 = (byte *)param_2[0x11];
    }
LAB_00aaad78:
    bVar1 = *pbVar5;
    *(undefined1 *)(param_2 + 0x15) = 1;
    uVar11 = 0x80000003;
    *(undefined1 *)(param_2 + 0x14) = 1;
    uVar14 = 0;
    unaff_r8 = (uint)bVar1;
    goto switchD_00aaa888_caseD_5;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaac0c:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar12 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15;
    uVar15 = puVar12[5];
    uVar9 = puVar12[8];
    uVar13 = puVar12[4];
    uVar16 = puVar12[6];
    uVar14 = puVar12[7];
    uVar11 = puVar12[1];
    uVar17 = puVar12[2];
    uVar18 = puVar12[3];
    param_2[5] = *puVar12;
    param_2[6] = uVar11;
    param_2[7] = uVar17;
    param_2[8] = uVar18;
    param_2[9] = uVar13 + 0x20;
    param_2[10] = uVar15;
    param_2[0xb] = uVar16;
    param_2[0xc] = uVar14;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    uVar9 = puVar12[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (uint)local_134;
    param_2[0x2b] = (uint)(param_2 + 5);
    param_2[0x2c] = uVar9;
  case '\f':
    FUN_00aa7de0(&local_d0,param_2 + 0xe,param_3);
    if (local_d0 == 2) {
      *param_1 = 2;
      uVar3 = 0xc;
      goto LAB_00aab500;
    }
    local_90 = local_b4;
    uStack_8c = local_b0;
    uStack_88 = uStack_ac;
    local_84 = uStack_a8;
    local_80 = local_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    uStack_74 = uStack_98;
    uStack_70 = uStack_94;
    if ((char)param_2[0x2d] == '\x03') {
      cVar2 = (char)param_2[0x29];
      bVar19 = cVar2 == '\x03';
      if (bVar19) {
        cVar2 = (char)param_2[0x24];
      }
      if (bVar19 && cVar2 == '\x03') {
        FUN_00ba638c(param_2 + 0xe);
      }
    }
    bVar19 = (local_d0 & 1) != 0;
    if (bVar19) {
      uStack_2c = uStack_74;
      uStack_28 = uStack_70;
    }
    uStack_30 = uStack_78;
    uStack_34 = uStack_7c;
    local_38 = local_80;
    local_3c = local_84;
    uStack_40 = uStack_88;
    uStack_44 = uStack_8c;
    local_48 = local_90;
    uVar14 = (uint)bVar19;
    uVar9 = local_c4;
    param_4 = local_c0;
    uVar11 = local_b8;
    unaff_r8 = local_c8;
    unaff_r10 = local_cc;
    unaff_lr = local_bc;
    goto switchD_00aaa888_caseD_5;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaab84:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x40;
    uVar15 = puVar8[7];
    uVar13 = puVar8[4];
    unaff_r10 = puVar8[5];
    uVar14 = puVar8[6];
    uVar9 = puVar8[8];
    uVar11 = puVar8[1];
    uVar16 = puVar8[2];
    uVar17 = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar11;
    param_2[7] = uVar16;
    param_2[8] = uVar17;
    param_2[9] = uVar13 + 0x20;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar15;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    uVar9 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar9;
LAB_00aab1a0:
    local_134 = (uint *)*local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)local_134;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar9;
    goto LAB_00aab1b8;
  case '\x0e':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar9 = param_2[0x10];
      goto LAB_00aab1a0;
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
          FUN_013079f0(&DAT_01c21bec);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21bec);
      }
      local_134 = (uint *)param_2[0x11];
    }
LAB_00aab1b8:
    param_4 = *local_134;
    unaff_lr = local_134[1];
    *(undefined1 *)(param_2 + 0x15) = 1;
    uVar11 = 0x80000000;
    *(undefined1 *)(param_2 + 0x14) = 1;
    if ((unaff_lr & 0x7fffffff) < 0x7ff00000) {
      uVar11 = 0x80000001;
    }
    local_d0 = 2;
    uVar9 = 0;
    goto LAB_00aab4cc;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaabc8:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x48;
    uVar9 = puVar8[8];
    uVar15 = puVar8[4];
    unaff_r10 = puVar8[5];
    uVar14 = puVar8[6];
    uVar11 = puVar8[7];
    uVar13 = puVar8[1];
    uVar16 = puVar8[2];
    uVar17 = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar13;
    param_2[7] = uVar16;
    param_2[8] = uVar17;
    param_2[9] = uVar15 + 0x20;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar11;
    uVar9 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar9;
LAB_00aab278:
    local_134 = (uint *)*local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (uint)local_134;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar9;
    goto LAB_00aab428;
  case '\x10':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar9 = param_2[0x10];
      goto LAB_00aab278;
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
          FUN_013079f0(&DAT_01c1d0c8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1d0c8);
      }
      local_134 = (uint *)param_2[0x11];
    }
LAB_00aab428:
    param_4 = *local_134;
    unaff_lr = local_134[1];
    uVar9 = 0;
    uVar11 = 0x80000001;
    uVar14 = 0;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    unaff_r8 = 0;
    goto switchD_00aaa888_caseD_5;
  case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      uVar15 = param_2[4];
      uVar13 = param_2[5];
LAB_00aaab40:
      param_2[6] = uVar15;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar13;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12998);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12998);
    case '\x03':
      if ((param_2[8] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c12998);
      }
      uVar15 = param_2[6];
    }
    local_134 = param_2 + 4;
    puVar8 = (uint *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    puVar12 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = uVar15 + 0x68;
    uVar15 = puVar8[7];
    uVar13 = puVar8[4];
    unaff_r10 = puVar8[5];
    uVar14 = puVar8[6];
    uVar9 = puVar8[8];
    uVar11 = puVar8[1];
    uVar16 = puVar8[2];
    uVar17 = puVar8[3];
    *puVar12 = *puVar8;
    param_2[6] = uVar11;
    param_2[7] = uVar16;
    param_2[8] = uVar17;
    param_2[9] = uVar13 + 0x20;
    param_2[10] = unaff_r10;
    param_2[0xb] = uVar14;
    param_2[0xc] = uVar15;
    *(char *)(param_2 + 0xd) = (char)uVar9;
    uVar15 = puVar8[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (uint)local_134;
    param_2[0xf] = (uint)puVar12;
    param_2[0x10] = uVar15;
LAB_00aab0f8:
    uVar9 = *local_134;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = uVar9;
    param_2[0x12] = (uint)puVar12;
    param_2[0x13] = uVar15;
    goto LAB_00aab45c;
  case '\x12':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_134 = (uint *)param_2[0xe];
      puVar12 = (uint *)param_2[0xf];
      uVar15 = param_2[0x10];
      goto LAB_00aab0f8;
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
      uVar9 = param_2[0x11];
    }
LAB_00aab45c:
    FUN_006666fc(&local_d0,*(undefined4 *)(uVar9 + 4),*(undefined4 *)(uVar9 + 8));
    puVar12 = local_68;
    goto LAB_00aab484;
  }
  FUN_006666fc(&local_d0,*(undefined4 *)(uVar9 + 4),*(undefined4 *)(uVar9 + 8));
  puVar12 = auStack_130;
LAB_00aab484:
  *puVar12 = local_bc;
  puVar12[1] = local_b8;
  puVar12[2] = local_b4;
  puVar12[3] = local_b0;
  puVar12[4] = uStack_ac;
  puVar12[5] = uStack_a8;
  puVar12[6] = local_a4;
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_48 = *puVar12;
  uStack_44 = puVar12[1];
  uStack_40 = puVar12[2];
  local_3c = puVar12[3];
  local_38 = puVar12[4];
  uStack_34 = puVar12[5];
  uStack_30 = puVar12[6];
  uVar9 = local_cc;
  param_4 = local_c8;
  uVar11 = 0x80000002;
  unaff_lr = local_c4;
LAB_00aab4cc:
  uVar14 = 0;
  unaff_r8 = local_d0;
switchD_00aaa888_caseD_5:
  param_1[3] = uVar9;
  param_1[4] = param_4;
  param_1[5] = unaff_lr;
  *param_1 = uVar14;
  param_1[1] = unaff_r10;
  param_1[2] = unaff_r8;
  param_1[6] = uVar11;
  param_1[7] = local_48;
  param_1[8] = uStack_44;
  param_1[9] = uStack_40;
  param_1[10] = local_3c;
  param_1[0xb] = local_38;
  param_1[0xc] = uStack_34;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_2c;
  param_1[0xf] = uStack_28;
  uVar3 = 1;
LAB_00aab500:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

