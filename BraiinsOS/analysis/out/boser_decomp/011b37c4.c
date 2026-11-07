// FUN_011b37c4 @ 011b37c4 size=4776 calls_out=8 calls_in=0
// strings: enabled | dpsMode | powerStep | minHashrateTarget | onStartTa | hashrateStep

void FUN_011b37c4(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  uint uVar6;
  uint unaff_r4;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined4 local_288;
  int *local_284;
  undefined4 local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    uVar6 = param_2[1];
    local_280 = 0x80000007;
    param_2[2] = uVar6;
    uVar9 = 0;
    iVar10 = *param_2;
    iVar12 = *(int *)(uVar6 + 0x10);
    local_288 = param_3;
    local_284 = (int *)unaff_r4;
    switch(*(undefined4 *)(iVar12 + 0x40)) {
    case 7:
      iVar11 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"enabled",7);
      if (iVar11 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b39d0;
      }
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"dpsMode",7);
      local_288 = extraout_r2;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3b80;
      }
      break;
    case 9:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"powerStep",9);
      local_288 = extraout_r2_01;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3af0;
      }
      break;
    case 0xc:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"hashrateStep",0xc);
      local_288 = extraout_r2_04;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3940;
      }
      break;
    case 0xe:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"minPowerTarget",0xe);
      local_288 = extraout_r2_05;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3a60;
      }
      break;
    case 0xf:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"shutdownEnabled",0xf);
      local_288 = extraout_r2_06;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3b38;
      }
      break;
    case 0x10:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,&DAT_0056ad28,0x10);
      local_288 = extraout_r2_00;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3a18;
      }
      break;
    case 0x11:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"minHashrateTarget",0x11);
      local_288 = extraout_r2_02;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3aa8;
      }
      break;
    case 0x14:
      iVar12 = thunk_FUN_01bed842(*(int *)(iVar12 + 0x3c) + 8,"onStartTa",0x14);
      local_288 = extraout_r2_03;
      local_284 = (int *)uVar6;
      if (iVar12 == 0) {
        param_2[4] = iVar10;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = uVar6;
        goto LAB_011b3988;
      }
    }
    goto switchD_011b386c_caseD_8;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20c40);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20c40);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b39d0:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x138;
    iVar18 = piVar8[4];
    iVar12 = piVar8[5];
    iVar11 = piVar8[6];
    iVar16 = piVar8[7];
    iVar10 = piVar8[8];
    iVar13 = piVar8[1];
    iVar14 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar13;
    param_2[7] = iVar14;
    param_2[8] = iVar17;
    param_2[9] = iVar18 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar11;
    param_2[0xc] = iVar16;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    param_2[0x2b] = (int)(param_2 + 5);
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2c] = iVar10;
  case '\x04':
    FUN_011a14b4(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 4;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_250;
    puVar15 = &local_278;
    local_284 = (int *)local_b8;
    local_250 = local_b4;
    uStack_24c = local_b0;
    uStack_248 = local_ac;
    local_280 = local_a8;
    local_278 = local_a4;
    uStack_274 = local_a0;
    uStack_270 = uStack_9c;
    uStack_26c = uStack_98;
    local_268 = local_94;
    uStack_264 = uStack_90;
    uStack_260 = uStack_8c;
    uStack_25c = uStack_88;
    uStack_258 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
LAB_011b4598:
    local_d0 = *puVar5;
    uStack_cc = puVar5[1];
    uStack_c8 = puVar5[2];
    if ((local_c0 & 1) == 0) {
      local_48 = *puVar15;
      uStack_44 = puVar15[1];
      uStack_40 = puVar15[2];
      uVar9 = 0;
      local_3c = puVar15[3];
      local_288 = puVar15[4];
      uStack_34 = puVar15[5];
      uStack_30 = puVar15[6];
      local_38 = local_288;
    }
    else {
      local_48 = *puVar15;
      uStack_44 = puVar15[1];
      uStack_40 = puVar15[2];
      local_3c = puVar15[3];
      local_38 = puVar15[4];
      uStack_34 = puVar15[5];
      uStack_30 = puVar15[6];
      uStack_2c = puVar15[7];
      uStack_28 = puVar15[8];
      uVar9 = 1;
    }
    goto switchD_011b386c_caseD_8;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3af0:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0xd8;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\x06':
    FUN_011a2318(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 6;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_218;
    puVar15 = &local_240;
    local_284 = (int *)local_b8;
    local_218 = local_b4;
    uStack_214 = local_b0;
    uStack_210 = local_ac;
    local_280 = local_a8;
    local_240 = local_a4;
    uStack_23c = local_a0;
    uStack_238 = uStack_9c;
    uStack_234 = uStack_98;
    local_230 = local_94;
    uStack_22c = uStack_90;
    uStack_228 = uStack_8c;
    uStack_224 = uStack_88;
    uStack_220 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3a60:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0xf8;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\b':
    FUN_011a2318(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 8;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_1e0;
    puVar15 = &local_208;
    local_284 = (int *)local_b8;
    local_1e0 = local_b4;
    uStack_1dc = local_b0;
    uStack_1d8 = local_ac;
    local_280 = local_a8;
    local_208 = local_a4;
    uStack_204 = local_a0;
    uStack_200 = uStack_9c;
    uStack_1fc = uStack_98;
    local_1f8 = local_94;
    uStack_1f4 = uStack_90;
    uStack_1f0 = uStack_8c;
    uStack_1ec = uStack_88;
    uStack_1e8 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3940:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\n':
    FUN_011a1c14(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 10;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_1a8;
    puVar15 = &local_1d0;
    local_284 = (int *)local_b8;
    local_1a8 = local_b4;
    uStack_1a4 = local_b0;
    uStack_1a0 = local_ac;
    local_280 = local_a8;
    local_1d0 = local_a4;
    uStack_1cc = local_a0;
    uStack_1c8 = uStack_9c;
    uStack_1c4 = uStack_98;
    local_1c0 = local_94;
    uStack_1bc = uStack_90;
    uStack_1b8 = uStack_8c;
    uStack_1b4 = uStack_88;
    uStack_1b0 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3aa8:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x48;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\f':
    FUN_011a1c14(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 0xc;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_170;
    puVar15 = &local_198;
    local_284 = (int *)local_b8;
    local_170 = local_b4;
    uStack_16c = local_b0;
    uStack_168 = local_ac;
    local_280 = local_a8;
    local_198 = local_a4;
    uStack_194 = local_a0;
    uStack_190 = uStack_9c;
    uStack_18c = uStack_98;
    local_188 = local_94;
    uStack_184 = uStack_90;
    uStack_180 = uStack_8c;
    uStack_17c = uStack_88;
    uStack_178 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3b38:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x139;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\x0e':
    FUN_011a14b4(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 0xe;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_138;
    puVar15 = &local_160;
    local_284 = (int *)local_b8;
    local_138 = local_b4;
    uStack_134 = local_b0;
    uStack_130 = local_ac;
    local_280 = local_a8;
    local_160 = local_a4;
    uStack_15c = local_a0;
    uStack_158 = uStack_9c;
    uStack_154 = uStack_98;
    local_150 = local_94;
    uStack_14c = uStack_90;
    uStack_148 = uStack_8c;
    uStack_144 = uStack_88;
    uStack_140 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3a18:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x90;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\x10':
    FUN_011a1c14(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 0x10;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_100;
    puVar15 = &local_128;
    local_284 = (int *)local_b8;
    local_100 = local_b4;
    uStack_fc = local_b0;
    uStack_f8 = local_ac;
    local_280 = local_a8;
    local_128 = local_a4;
    uStack_124 = local_a0;
    uStack_120 = uStack_9c;
    uStack_11c = uStack_98;
    local_118 = local_94;
    uStack_114 = uStack_90;
    uStack_110 = uStack_8c;
    uStack_10c = uStack_88;
    uStack_108 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3b80:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    piVar3 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar7 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar8 = param_2 + 4;
    *piVar8 = iVar10 + 0x13a;
    iVar16 = piVar3[4];
    iVar14 = piVar3[5];
    iVar13 = piVar3[6];
    iVar18 = piVar3[7];
    iVar10 = piVar3[8];
    iVar12 = piVar3[1];
    iVar11 = piVar3[2];
    iVar17 = piVar3[3];
    *piVar7 = *piVar3;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar14;
    param_2[0xb] = iVar13;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar3[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar8;
    param_2[0xf] = (int)piVar7;
    param_2[0x10] = iVar10;
LAB_011b4688:
    puVar4 = (undefined1 *)*piVar8;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)puVar4;
    param_2[0x12] = (int)piVar7;
    param_2[0x13] = iVar10;
    break;
  case '\x12':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar8 = (int *)param_2[0xe];
      piVar7 = (int *)param_2[0xf];
      iVar10 = param_2[0x10];
      goto LAB_011b4688;
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
          FUN_013079f0(&DAT_01c22520);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22520);
      }
      puVar4 = (undefined1 *)param_2[0x11];
    }
    break;
  case '\x13':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar10 = param_2[4];
      uVar6 = param_2[5];
LAB_011b3988:
      param_2[6] = iVar10;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = uVar6;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c40);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c40);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c40);
      }
      iVar10 = param_2[6];
    }
    local_284 = param_2 + 4;
    piVar8 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar10 + 0x118;
    iVar16 = piVar8[4];
    iVar18 = piVar8[5];
    iVar14 = piVar8[6];
    iVar13 = piVar8[7];
    iVar10 = piVar8[8];
    iVar12 = piVar8[1];
    iVar11 = piVar8[2];
    iVar17 = piVar8[3];
    param_2[5] = *piVar8;
    param_2[6] = iVar12;
    param_2[7] = iVar11;
    param_2[8] = iVar17;
    param_2[9] = iVar16 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar14;
    param_2[0xc] = iVar13;
    *(char *)(param_2 + 0xd) = (char)iVar10;
    iVar10 = piVar8[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_284;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar10;
  case '\x14':
    FUN_011a2318(&local_c0,param_2 + 0xe,param_3);
    if (local_c0 == 2) {
      *param_1 = 2;
      uVar2 = 0x14;
      goto LAB_011b4934;
    }
    local_288 = local_bc;
    puVar5 = &local_58;
    puVar15 = &local_80;
    local_284 = (int *)local_b8;
    local_58 = local_b4;
    uStack_54 = local_b0;
    uStack_50 = local_ac;
    local_280 = local_a8;
    local_80 = local_a4;
    uStack_7c = local_a0;
    uStack_78 = uStack_9c;
    local_74 = uStack_98;
    local_70 = local_94;
    uStack_6c = uStack_90;
    uStack_68 = uStack_8c;
    uStack_64 = uStack_88;
    uStack_60 = uStack_84;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar19 = cVar1 == '\x03';
      if (bVar19) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar19 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto LAB_011b4598;
  }
  FUN_00b564a0(&local_c0,*puVar4);
  puVar5 = (undefined4 *)((uint)&local_c0 | 4);
  local_d0 = *puVar5;
  uStack_cc = puVar5[1];
  uStack_c8 = puVar5[2];
  *(undefined1 *)(param_2 + 0x15) = 1;
  *(undefined1 *)(param_2 + 0x14) = 1;
  local_48 = local_ac;
  uStack_44 = local_a8;
  uStack_40 = local_a4;
  local_3c = local_a0;
  local_38 = uStack_9c;
  uStack_34 = uStack_98;
  uStack_30 = local_94;
  uVar9 = 0;
  local_288 = local_a0;
  local_284 = (int *)local_c0;
  local_280 = local_b0;
switchD_011b386c_caseD_8:
  *param_1 = uVar9;
  param_1[1] = local_288;
  param_1[2] = local_284;
  param_1[3] = local_d0;
  param_1[4] = uStack_cc;
  param_1[5] = uStack_c8;
  param_1[6] = local_280;
  param_1[7] = local_48;
  param_1[8] = uStack_44;
  param_1[9] = uStack_40;
  param_1[10] = local_3c;
  param_1[0xb] = local_38;
  param_1[0xc] = uStack_34;
  param_1[0xd] = uStack_30;
  param_1[0xe] = uStack_2c;
  param_1[0xf] = uStack_28;
  uVar2 = 1;
LAB_011b4934:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

