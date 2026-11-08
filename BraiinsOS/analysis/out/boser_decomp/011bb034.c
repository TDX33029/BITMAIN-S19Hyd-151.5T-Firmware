// FUN_011bb034 @ 011bb034 size=4312 calls_out=18 calls_in=0
// strings: hotTemp | modeDefault | targetTemp | allowedModes | dangerousTemp

void FUN_011bb034(uint *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *extraout_r3;
  int *extraout_r3_00;
  int *extraout_r3_01;
  int *extraout_r3_02;
  int *extraout_r3_03;
  int *unaff_r4;
  int iVar14;
  int **ppiVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int *unaff_r9;
  undefined4 uVar20;
  int *unaff_r10;
  int *piVar21;
  int iVar22;
  int *unaff_lr;
  bool bVar23;
  int *local_310;
  int *local_30c;
  int *local_308;
  int *local_2f4;
  int *local_2ec;
  int *local_2e8;
  int *local_2e4;
  int *local_2b8;
  int *piStack_2b4;
  int *piStack_2b0;
  int *piStack_2ac;
  int *local_2a8;
  int *piStack_2a4;
  int *piStack_2a0;
  int *piStack_29c;
  undefined4 uStack_298;
  int *local_290;
  int *piStack_28c;
  int *piStack_288;
  int *piStack_284;
  int *local_280;
  int *piStack_27c;
  int *piStack_278;
  int *piStack_274;
  undefined4 uStack_270;
  int *local_268;
  int *piStack_264;
  int *piStack_260;
  int *local_25c;
  int *local_258;
  int *piStack_254;
  int *piStack_250;
  int *piStack_24c;
  undefined4 uStack_248;
  int *local_240;
  int *piStack_23c;
  int *piStack_238;
  int *local_234;
  int *local_230;
  int *piStack_22c;
  int *piStack_228;
  int *piStack_224;
  int *piStack_220;
  int *local_218;
  int *local_214;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  int *local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  int *piStack_1e8;
  int *piStack_1e4;
  int *piStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_e4;
  int *local_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *local_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int *piStack_c0;
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
  int *piStack_88;
  int *piStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int *local_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *local_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *local_48;
  int *piStack_44;
  int *piStack_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar14 = param_2[1];
    piVar21 = (int *)0x80000007;
    param_2[2] = iVar14;
    uVar18 = 0;
    iVar17 = *param_2;
    iVar4 = *(int *)(iVar14 + 0x10);
    switch(*(undefined4 *)(iVar4 + 0x40)) {
    case 7:
      unaff_lr = (int *)0x11bb0f8;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"hotTemp",7);
      param_4 = extraout_r3;
      if (iVar4 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar14;
        goto LAB_011bb2a0;
      }
      break;
    case 10:
      unaff_lr = (int *)0x11bbcb8;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"targetTemp",10);
      param_4 = extraout_r3_01;
      if (iVar4 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar14;
        goto LAB_011bb214;
      }
      break;
    case 0xb:
      unaff_lr = (int *)0x11bbc7c;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"modeDefault",0xb);
      param_4 = extraout_r3_00;
      if (iVar4 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar14;
        goto LAB_011bb258;
      }
      break;
    case 0xc:
      unaff_lr = (int *)0x11bbcf4;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"allowedModes",0xc);
      param_4 = extraout_r3_02;
      if (iVar4 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar14;
        goto LAB_011bb1c8;
      }
      break;
    case 0xd:
      unaff_lr = (int *)0x11bbd34;
      iVar4 = thunk_FUN_01bed842(*(int *)(iVar4 + 0x3c) + 8,"dangerousTemp",0xd);
      param_4 = extraout_r3_03;
      if (iVar4 == 0) {
        param_2[4] = iVar17;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar14;
        goto LAB_011bb150;
      }
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20e14);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20e14);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar14 = param_2[5];
LAB_011bb258:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar14;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e14);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e14);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e14);
      }
      iVar17 = param_2[6];
    }
    local_2e4 = param_2 + 4;
    piVar6 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar21 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17 + 0xe4;
    iVar14 = piVar6[7];
    iVar11 = piVar6[4];
    unaff_r10 = (int *)piVar6[5];
    iVar10 = piVar6[6];
    iVar17 = piVar6[8];
    iVar4 = piVar6[1];
    iVar8 = piVar6[2];
    iVar9 = piVar6[3];
    *piVar21 = *piVar6;
    param_2[6] = iVar4;
    param_2[7] = iVar8;
    param_2[8] = iVar9;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = (int)unaff_r10;
    param_2[0xb] = iVar10;
    param_2[0xc] = iVar14;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    iVar17 = piVar6[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_2e4;
    param_2[0xf] = (int)piVar21;
    param_2[0x10] = iVar17;
LAB_011bb774:
    puVar5 = (undefined1 *)*local_2e4;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)puVar5;
    param_2[0x12] = (int)piVar21;
    param_2[0x13] = iVar17;
    goto LAB_011bb78c;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_2e4 = (int *)param_2[0xe];
      piVar21 = (int *)param_2[0xf];
      iVar17 = param_2[0x10];
      goto LAB_011bb774;
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
          FUN_013079f0(&DAT_01c22660);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22660);
      }
      puVar5 = (undefined1 *)param_2[0x11];
    }
LAB_011bb78c:
    FUN_00b5674c(&local_218,*puVar5);
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_240 = local_204;
    piStack_23c = local_200;
    piStack_238 = local_1fc;
    local_234 = local_1f8;
    local_230 = local_1f4;
    piStack_22c = local_1f0;
    piStack_228 = local_1ec;
    uVar18 = 0;
    param_4 = local_210;
    unaff_r4 = local_20c;
    unaff_r9 = local_214;
    piVar21 = local_208;
    unaff_lr = local_218;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar14 = param_2[5];
LAB_011bb214:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar14;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e14);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e14);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e14);
      }
      iVar17 = param_2[6];
    }
    local_2e4 = param_2 + 4;
    piVar21 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17;
    iVar11 = piVar21[4];
    iVar12 = piVar21[5];
    iVar10 = piVar21[6];
    iVar9 = piVar21[7];
    iVar17 = piVar21[8];
    iVar14 = piVar21[1];
    iVar4 = piVar21[2];
    iVar8 = piVar21[3];
    param_2[5] = *piVar21;
    param_2[6] = iVar14;
    param_2[7] = iVar4;
    param_2[8] = iVar8;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar10;
    param_2[0xc] = iVar9;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    iVar17 = piVar21[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_2e4;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar17;
  case '\x06':
    FUN_011a1c14(&local_218,param_2 + 0xe,param_3);
    if (local_218 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 6;
      goto LAB_011bb984;
    }
    ppiVar15 = &local_2b8;
    local_2b8 = local_1fc;
    piStack_2b4 = local_1f8;
    piStack_2b0 = local_1f4;
    piStack_2ac = local_1f0;
    local_2a8 = local_1ec;
    piStack_2a4 = piStack_1e8;
    piStack_2a0 = piStack_1e4;
    piStack_29c = piStack_1e0;
    uStack_298 = uStack_1dc;
    unaff_lr = local_210;
    unaff_r9 = local_20c;
    param_4 = local_208;
    unaff_r4 = local_204;
    unaff_r10 = local_214;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar23 = cVar1 == '\x03';
      if (bVar23) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar23 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto joined_r0x011bb6c4;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar14 = param_2[5];
LAB_011bb2a0:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar14;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e14);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e14);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e14);
      }
      iVar17 = param_2[6];
    }
    piVar21 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17 + 0x48;
    iVar11 = piVar21[4];
    iVar12 = piVar21[5];
    iVar10 = piVar21[6];
    iVar9 = piVar21[7];
    iVar17 = piVar21[8];
    iVar14 = piVar21[1];
    iVar4 = piVar21[2];
    iVar8 = piVar21[3];
    param_2[5] = *piVar21;
    param_2[6] = iVar14;
    param_2[7] = iVar4;
    param_2[8] = iVar8;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar10;
    param_2[0xc] = iVar9;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    iVar17 = piVar21[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)(param_2 + 4);
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar17;
  case '\b':
    FUN_011a1c14(&local_218,param_2 + 0xe,param_3);
    if (local_218 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 8;
      goto LAB_011bb984;
    }
    ppiVar15 = &local_290;
    local_290 = local_1fc;
    piStack_28c = local_1f8;
    piStack_288 = local_1f4;
    piStack_284 = local_1f0;
    local_280 = local_1ec;
    piStack_27c = piStack_1e8;
    piStack_278 = piStack_1e4;
    piStack_274 = piStack_1e0;
    uStack_270 = uStack_1dc;
    unaff_lr = local_210;
    unaff_r9 = local_20c;
    param_4 = local_208;
    unaff_r4 = local_204;
    unaff_r10 = local_214;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar23 = cVar1 == '\x03';
      if (bVar23) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar23 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
joined_r0x011bb6c4:
    bVar23 = ((uint)local_218 & 1) == 0;
    if (bVar23) {
      local_240 = *ppiVar15;
      piStack_23c = ppiVar15[1];
      piStack_238 = ppiVar15[2];
      local_234 = ppiVar15[3];
      local_230 = ppiVar15[4];
      piStack_22c = ppiVar15[5];
      piStack_228 = ppiVar15[6];
    }
    else {
      local_240 = *ppiVar15;
      piStack_23c = ppiVar15[1];
      piStack_238 = ppiVar15[2];
      local_234 = ppiVar15[3];
      local_230 = ppiVar15[4];
      piStack_22c = ppiVar15[5];
      piStack_228 = ppiVar15[6];
      piStack_224 = ppiVar15[7];
      piStack_220 = ppiVar15[8];
    }
    uVar18 = (uint)!bVar23;
    piVar21 = local_200;
    break;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar14 = param_2[5];
LAB_011bb150:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar14;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e14);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e14);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e14);
      }
      iVar17 = param_2[6];
    }
    local_2e4 = param_2 + 4;
    piVar21 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17 + 0x90;
    iVar11 = piVar21[4];
    iVar12 = piVar21[5];
    iVar10 = piVar21[6];
    iVar9 = piVar21[7];
    iVar17 = piVar21[8];
    iVar14 = piVar21[1];
    iVar4 = piVar21[2];
    iVar8 = piVar21[3];
    param_2[5] = *piVar21;
    param_2[6] = iVar14;
    param_2[7] = iVar4;
    param_2[8] = iVar8;
    param_2[9] = iVar11 + 0x20;
    param_2[10] = iVar12;
    param_2[0xb] = iVar10;
    param_2[0xc] = iVar9;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    iVar17 = piVar21[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_2e4;
    param_2[0x2b] = (int)(param_2 + 5);
    param_2[0x2c] = iVar17;
  case '\n':
    FUN_011a1c14(&local_218,param_2 + 0xe,param_3);
    if (local_218 == (int *)0x2) {
      *param_1 = 2;
      uVar3 = 10;
      goto LAB_011bb984;
    }
    ppiVar15 = &local_268;
    local_268 = local_1fc;
    piStack_264 = local_1f8;
    piStack_260 = local_1f4;
    local_25c = local_1f0;
    local_258 = local_1ec;
    piStack_254 = piStack_1e8;
    piStack_250 = piStack_1e4;
    piStack_24c = piStack_1e0;
    uStack_248 = uStack_1dc;
    unaff_lr = local_210;
    unaff_r9 = local_20c;
    param_4 = local_208;
    unaff_r4 = local_204;
    unaff_r10 = local_214;
    if ((char)param_2[0x2d] == '\x03') {
      cVar1 = (char)param_2[0x29];
      bVar23 = cVar1 == '\x03';
      if (bVar23) {
        cVar1 = (char)param_2[0x24];
      }
      if (bVar23 && cVar1 == '\x03') {
        FUN_01192a14(param_2 + 0xe);
      }
    }
    goto joined_r0x011bb6c4;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar17 = param_2[4];
      iVar14 = param_2[5];
LAB_011bb1c8:
      param_2[6] = iVar17;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar14;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20e14);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20e14);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20e14);
      }
      iVar17 = param_2[6];
    }
    local_2e4 = param_2 + 4;
    piVar21 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    unaff_r4 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar17 + 0xd8;
    iVar14 = piVar21[4];
    iVar11 = piVar21[5];
    iVar10 = piVar21[6];
    unaff_r9 = (int *)piVar21[7];
    iVar17 = piVar21[8];
    iVar4 = piVar21[1];
    iVar8 = piVar21[2];
    iVar9 = piVar21[3];
    *unaff_r4 = *piVar21;
    param_2[6] = iVar4;
    param_2[7] = iVar8;
    param_2[8] = iVar9;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar11;
    param_2[0xb] = iVar10;
    param_2[0xc] = (int)unaff_r9;
    *(char *)(param_2 + 0xd) = (char)iVar17;
    local_2f4 = (int *)piVar21[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)local_2e4;
    param_2[0x2b] = (int)unaff_r4;
    param_2[0x2c] = (int)local_2f4;
    piVar21 = unaff_r4;
LAB_011bb4e4:
    iVar17 = *local_2e4;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar17;
    param_2[0x27] = (int)piVar21;
    param_2[0x28] = (int)local_2f4;
LAB_011bb504:
    uVar18 = *(uint *)(iVar17 + 8);
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x12] = iVar17;
    param_2[0x11] = (int)local_2f4;
    param_2[0xe] = 1;
    param_2[0xf] = uVar18;
    param_2[0x10] = (int)piVar21;
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_2e8 = piVar21 + 6;
    if (*(int *)(*(int *)*local_2e8 + 0x10) != 0) {
LAB_011bb548:
      if (0x690690 < uVar18) {
        uVar20 = 0;
LAB_011bb55c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar20,unaff_r4);
      }
      unaff_r4 = (int *)(uVar18 * 0x138);
      if (unaff_r4 == (int *)0x0) {
        iVar14 = 4;
        uVar18 = 0;
      }
      else {
        uVar20 = 4;
        iVar14 = FUN_01298504(unaff_r4,4);
        if (iVar14 == 0) goto LAB_011bb55c;
      }
      param_2[0x14] = uVar18;
LAB_011bba64:
      param_2[0x15] = iVar14;
      param_2[0x16] = 0;
      *(undefined1 *)((int)param_2 + 0x4d) = 0;
      piVar6 = *(int **)(iVar17 + 8);
      if (piVar6 != (int *)0x0) {
        iVar17 = *(int *)(iVar17 + 4);
        piVar19 = (int *)0x0;
        puVar7 = (undefined4 *)((uint)&local_218 | 4);
        do {
          if (*piVar21 == 1) {
            local_b8 = (int *)piVar21[1];
            piStack_b4 = (int *)piVar21[2];
            piStack_b0 = (int *)piVar21[3];
          }
          local_218 = (int *)(uint)(*piVar21 == 1);
          local_208 = (int *)piVar21[4];
          local_204 = (int *)piVar21[5];
          local_1f0 = (int *)(iVar17 + (int)piVar19);
          local_1fc = (int *)piVar21[7];
          iVar14 = piVar21[8];
          local_200 = (int *)*local_2e8;
          *puVar7 = local_b8;
          puVar7[1] = piStack_b4;
          puVar7[2] = piStack_b0;
          local_e4 = 0;
          iVar4 = param_2[0x16];
          local_1f8 = (int *)CONCAT31(local_1f8._1_3_,(char)iVar14);
          local_1f4 = local_2f4;
          local_1ec = piVar19;
          if (iVar4 == param_2[0x14]) {
            FUN_00f9d6bc(param_2 + 0x14);
          }
          piVar19 = (int *)((int)piVar19 + 1);
          FUN_01bed4e2(iVar4 * 0x138 + param_2[0x15],&local_218,0x138);
          param_2[0x16] = iVar4 + 1;
        } while (piVar6 != piVar19);
      }
      local_80 = param_2[0x14];
      iStack_7c = param_2[0x15];
      iStack_78 = param_2[0x16];
      FUN_01172b54(&local_218);
      local_b8 = local_218;
      piStack_b4 = local_214;
      piStack_b0 = local_210;
      piStack_ac = local_20c;
      local_a8 = local_208;
      piStack_a4 = local_204;
      piStack_a0 = local_200;
      piStack_9c = local_1fc;
      piStack_98 = local_1f8;
      local_94 = local_1f4;
      piStack_90 = local_1f0;
      piStack_8c = local_1ec;
      piStack_88 = piStack_1e8;
      piStack_84 = piStack_1e4;
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
      param_2[0x24] = (int)piStack_1e8;
      param_2[0x25] = (int)piStack_1e4;
      goto switchD_011bb9dc_caseD_3;
    }
LAB_011bbd7c:
    if (0x1999999 < uVar18) {
      uVar20 = 0;
LAB_011bbd90:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar20,unaff_r9);
    }
    unaff_r9 = (int *)(uVar18 * 0x50);
    if (unaff_r9 == (int *)0x0) {
      iVar14 = 4;
      uVar18 = 0;
    }
    else {
      uVar20 = 4;
      iVar14 = FUN_01298504(unaff_r9,4);
      if (iVar14 == 0) goto LAB_011bbd90;
    }
    param_2[0x14] = uVar18;
    local_2e4 = piVar21;
LAB_011bbde4:
    piVar21 = param_2 + 0x14;
    param_2[0x15] = iVar14;
    param_2[0x16] = 0;
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    iVar14 = *(int *)(iVar17 + 8);
    if (iVar14 != 0) {
      iVar8 = *(int *)(iVar17 + 4);
      iVar9 = param_2[0x16];
      iVar17 = iVar9 * 0x50;
      iVar4 = 0;
      do {
        iVar10 = local_2e4[4];
        iVar11 = local_2e4[6];
        iVar12 = local_2e4[7];
        piVar6 = (int *)0x0;
        if (*local_2e4 != 0) {
          piVar6 = local_2e4 + 1;
        }
        iVar22 = local_2e4[5];
        iVar2 = local_2e4[8];
        iVar16 = iVar9 + iVar4;
        if (iVar16 == *piVar21) {
          FUN_00a20f30(piVar21);
        }
        iVar13 = iVar4 + 1;
        puVar7 = (undefined4 *)(param_2[0x15] + iVar17);
        *puVar7 = 1;
        iVar17 = iVar17 + 0x50;
        puVar7[9] = iVar8 + iVar4;
        puVar7[4] = iVar10;
        puVar7[6] = iVar11;
        puVar7[7] = iVar12;
        puVar7[1] = 0;
        puVar7[2] = iVar4;
        *(undefined1 *)(puVar7 + 0x13) = 0;
        puVar7[10] = local_2f4;
        *(char *)(puVar7 + 8) = (char)iVar2;
        puVar7[3] = piVar6;
        puVar7[5] = iVar22;
        param_2[0x16] = iVar16 + 1;
        iVar4 = iVar13;
      } while (iVar14 != iVar13);
    }
    local_80 = *piVar21;
    iStack_7c = param_2[0x15];
    iStack_78 = param_2[0x16];
    FUN_0117191c(&local_218);
    local_b8 = local_218;
    piStack_b4 = local_214;
    piStack_b0 = local_210;
    piStack_ac = local_20c;
    local_a8 = local_208;
    piStack_a4 = local_204;
    piStack_a0 = local_200;
    piStack_9c = local_1fc;
    piStack_98 = local_1f8;
    local_94 = local_1f4;
    piStack_90 = local_1f0;
    piStack_8c = local_1ec;
    piStack_88 = piStack_1e8;
    piStack_84 = piStack_1e4;
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
    param_2[0x24] = (int)piStack_1e8;
    param_2[0x25] = (int)piStack_1e4;
switchD_011bb9dc_caseD_4:
    FUN_01154ca8(&local_218,param_2 + 0x18,*param_3);
    piVar21 = local_204;
    unaff_r4 = local_208;
    unaff_r10 = local_218;
    if (local_218 != (int *)&DAT_00000003) {
      local_2ec = local_214;
      local_2e4 = local_210;
      local_2e8 = local_20c;
      local_70 = local_200;
      piStack_6c = local_1fc;
      piStack_68 = local_1f8;
      piStack_64 = local_1f4;
      local_60 = local_1f0;
      piStack_5c = local_1ec;
      piStack_58 = piStack_1e8;
      piStack_54 = piStack_1e4;
      piStack_50 = piStack_1e0;
      FUN_011bc4bc(param_2 + 0x18);
      if (unaff_r10 == (int *)0x2) goto LAB_011bbfec;
      local_48 = local_70;
      piStack_44 = piStack_6c;
      piStack_40 = piStack_68;
      local_3c = piStack_64;
      local_38 = local_60;
      piStack_34 = piStack_5c;
      piStack_30 = piStack_58;
      piStack_2c = piStack_54;
      piStack_28 = piStack_50;
      goto LAB_011bc008;
    }
    uVar3 = 4;
LAB_011bbf74:
    local_308 = param_2 + 0x2d;
    local_30c = param_2 + 0x29;
    *(undefined1 *)(param_2 + 0x13) = uVar3;
    *(undefined1 *)local_308 = 3;
    *(undefined1 *)local_30c = 3;
    *param_1 = 2;
    uVar3 = 0xc;
    goto LAB_011bb984;
  case '\f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      local_2e4 = (int *)param_2[0x2a];
      local_2f4 = (int *)param_2[0x2c];
      piVar21 = (int *)param_2[0x2b];
      goto LAB_011bb4e4;
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
      iVar17 = param_2[0x26];
      piVar21 = (int *)param_2[0x27];
      local_2f4 = (int *)param_2[0x28];
      goto LAB_011bb504;
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
      piVar21 = (int *)param_2[0x10];
      *(undefined1 *)((int)param_2 + 0x4d) = 1;
      local_2e8 = piVar21 + 6;
      uVar18 = param_2[0xf];
      local_2f4 = (int *)param_2[0x11];
      iVar17 = param_2[0x12];
      if (*(int *)(*(int *)*local_2e8 + 0x10) == 0) {
        if (param_2[0xe] != 0) goto LAB_011bbd7c;
        param_2[0x14] = 0;
        iVar14 = 4;
        local_2e4 = piVar21;
        goto LAB_011bbde4;
      }
      if (param_2[0xe] != 0) goto LAB_011bb548;
      param_2[0x14] = 0;
      iVar14 = 4;
      goto LAB_011bba64;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21a0c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21a0c);
    case '\x04':
      goto switchD_011bb9dc_caseD_4;
    }
switchD_011bb9dc_caseD_3:
    FUN_01155990(&local_218,param_2 + 0x18,param_3);
    piVar21 = local_204;
    unaff_r4 = local_208;
    unaff_r10 = local_218;
    if (local_218 == (int *)&DAT_00000003) {
      uVar3 = 3;
      goto LAB_011bbf74;
    }
    local_2ec = local_214;
    local_2e4 = local_210;
    local_2e8 = local_20c;
    local_e0 = local_200;
    piStack_dc = local_1fc;
    piStack_d8 = local_1f8;
    piStack_d4 = local_1f4;
    local_d0 = local_1f0;
    piStack_cc = local_1ec;
    piStack_c8 = piStack_1e8;
    piStack_c4 = piStack_1e4;
    piStack_c0 = piStack_1e0;
    FUN_011c796c(param_2 + 0x18);
    if (unaff_r10 == (int *)0x2) {
LAB_011bbfec:
      piVar21 = (int *)0x80000006;
      bVar23 = false;
    }
    else {
      local_48 = local_e0;
      piStack_44 = piStack_dc;
      piStack_40 = piStack_d8;
      local_3c = piStack_d4;
      local_38 = local_d0;
      piStack_34 = piStack_cc;
      piStack_30 = piStack_c8;
      piStack_2c = piStack_c4;
      piStack_28 = piStack_c0;
LAB_011bc008:
      bVar23 = true;
    }
    local_308 = param_2 + 0x2d;
    local_30c = param_2 + 0x29;
    local_310 = param_2 + 0xe;
    *(undefined2 *)(param_2 + 0x13) = 1;
    FUN_011bc61c(local_310);
    *(undefined1 *)local_308 = 1;
    *(undefined1 *)local_30c = 1;
    if (bVar23) {
      piStack_224 = piStack_2c;
      piStack_220 = piStack_28;
    }
    piStack_228 = piStack_30;
    piStack_22c = piStack_34;
    local_230 = local_38;
    local_234 = local_3c;
    piStack_238 = piStack_40;
    piStack_23c = piStack_44;
    local_240 = local_48;
    uVar18 = (uint)bVar23;
    param_4 = local_2e8;
    unaff_r9 = local_2e4;
    unaff_lr = local_2ec;
  }
  *param_1 = uVar18;
  param_1[1] = (uint)unaff_r10;
  param_1[2] = (uint)unaff_lr;
  param_1[4] = (uint)param_4;
  param_1[5] = (uint)unaff_r4;
  param_1[6] = (uint)piVar21;
  param_1[3] = (uint)unaff_r9;
  param_1[7] = (uint)local_240;
  param_1[8] = (uint)piStack_23c;
  param_1[9] = (uint)piStack_238;
  param_1[10] = (uint)local_234;
  param_1[0xb] = (uint)local_230;
  param_1[0xc] = (uint)piStack_22c;
  param_1[0xd] = (uint)piStack_228;
  param_1[0xe] = (uint)piStack_224;
  param_1[0xf] = (uint)piStack_220;
  uVar3 = 1;
LAB_011bb984:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

