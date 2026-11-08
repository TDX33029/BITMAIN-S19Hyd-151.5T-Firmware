// FUN_0090fb34 @ 0090fb34 size=10268 calls_out=36 calls_in=0
// strings: fanControl | autotuning | management | groups | hashChainGlobal | performanceScaling

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0090fb34(uint *param_1,int *param_2,int *****param_3)

{
  char cVar1;
  undefined8 uVar2;
  int *****pppppiVar3;
  int *****pppppiVar4;
  int *****pppppiVar5;
  int *****pppppiVar6;
  int *****pppppiVar7;
  int *****pppppiVar8;
  undefined1 uVar9;
  byte bVar10;
  int ***pppiVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int *****extraout_r2;
  int *****extraout_r3;
  int *unaff_r4;
  int iVar16;
  int ****ppppiVar17;
  int iVar18;
  uint uVar19;
  int *****pppppiVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  int *****pppppiVar24;
  int *piVar25;
  int *****pppppiVar26;
  int iVar27;
  int iVar28;
  int *****pppppiVar29;
  int iVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined1 *local_290;
  int *local_28c;
  int *local_288;
  int *local_284;
  int *****local_280;
  int *local_274;
  int *****local_270;
  int *local_26c;
  int *local_268;
  int *****local_264;
  int *local_260;
  int *****local_25c;
  int *****local_258;
  int *****local_254;
  int *****local_250;
  int *****local_24c;
  int *****local_23c;
  int *****local_218;
  int *****pppppiStack_214;
  int *****pppppiStack_210;
  int *****local_20c;
  int *****pppppiStack_208;
  int *****pppppiStack_204;
  int *****pppppiStack_200;
  int *****local_1f8;
  int *****pppppiStack_1f4;
  int *****pppppiStack_1f0;
  int *****local_1ec;
  int *****pppppiStack_1e8;
  int *****pppppiStack_1e4;
  int *****pppppiStack_1e0;
  int *****local_1d8;
  int *****pppppiStack_1d4;
  int *****pppppiStack_1d0;
  int *****local_1cc;
  int *****pppppiStack_1c8;
  int *****pppppiStack_1c4;
  int *****pppppiStack_1c0;
  int *****local_1b8;
  int *****pppppiStack_1b4;
  int *****pppppiStack_1b0;
  int *****local_1ac;
  int *****pppppiStack_1a8;
  int *****pppppiStack_1a4;
  int *****pppppiStack_1a0;
  int *****local_198;
  int *****local_194;
  int *****local_190;
  int *****local_18c;
  int *****local_188;
  int *****local_184;
  int *****local_180;
  int *****pppppiStack_17c;
  int *****pppppiStack_178;
  int *****local_174;
  int *****pppppiStack_170;
  int *****pppppiStack_16c;
  int *****pppppiStack_168;
  int *****local_164;
  int *****pppppiStack_160;
  int *****local_158;
  int *****pppppiStack_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int *****local_148;
  int *****pppppiStack_144;
  int *****pppppiStack_140;
  int *****pppppiStack_13c;
  int *****pppppiStack_138;
  int *****local_134;
  int *****pppppiStack_130;
  int *****pppppiStack_12c;
  int *****pppppiStack_128;
  int *****pppppiStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int *****local_110;
  int *****pppppiStack_10c;
  int *****pppppiStack_108;
  int *****local_104;
  int *****pppppiStack_100;
  int *****pppppiStack_fc;
  int *****pppppiStack_f8;
  int *****local_f0;
  int *****local_ec;
  int *****local_e8;
  int *****local_e0;
  int *****pppppiStack_dc;
  int *****pppppiStack_d8;
  int *****local_d4;
  int *****pppppiStack_d0;
  int *****pppppiStack_cc;
  int *****pppppiStack_c8;
  int *****local_c0;
  int *****pppppiStack_bc;
  int *****pppppiStack_b8;
  int *****local_b4;
  int *****local_b0;
  int *****local_ac;
  int *****pppppiStack_a8;
  int *****pppppiStack_a4;
  int *****local_a0;
  int *****pppppiStack_9c;
  int *****pppppiStack_98;
  int *****pppppiStack_94;
  int *****local_88;
  int *****pppppiStack_84;
  int *****pppppiStack_80;
  int *****local_7c;
  int *****pppppiStack_78;
  int *****pppppiStack_74;
  int *****pppppiStack_70;
  int *****local_68;
  int *****local_64;
  int *****local_60;
  int *****local_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****pppppiStack_3c;
  int *****pppppiStack_38;
  int *****local_34;
  int *****local_30;
  int *****local_2c;
  
  local_264 = (int *****)&local_60;
  pppppiVar20 = (int *****)((uint)&local_c0 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar16 = *param_2;
    pppppiVar26 = (int *****)param_2[1];
    param_2[2] = (int)pppppiVar26;
    ppppiVar17 = pppppiVar26[4];
    switch(ppppiVar17[0x10]) {
    case (int ***)0xa:
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"fanControl",10);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090fd48;
      }
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"autotuning",10);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090fe8c;
      }
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"management",10);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090ffa4;
      }
      break;
    case (int ***)0xb:
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"tempControl",0xb);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090ff10;
      }
      break;
    case (int ***)0xc:
    case (int ***)0xd:
    case (int ***)0xe:
    case (int ***)0x10:
    case (int ***)0x11:
      break;
    case (int ***)0xf:
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"hashChainGlobal",0xf);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090ff58;
      }
      break;
    case (int ***)0x12:
      iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"performanceScaling",0x12);
      if (iVar14 == 0) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090fd90;
      }
      break;
    default:
      if ((ppppiVar17[0x10] == (int ***)0x6) &&
         (iVar14 = thunk_FUN_01bed842(ppppiVar17[0xf] + 2,"groups",6), iVar14 == 0)) {
        param_2[4] = iVar16;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = (int)pppppiVar26;
        goto LAB_0090fff4;
      }
    }
    param_2[4] = iVar16;
    param_2[5] = (int)pppppiVar26;
    *(undefined1 *)(param_2 + 7) = 0;
LAB_009114c0:
    param_2[6] = (int)pppppiVar26;
    pppppiVar29 = (int *****)0x0;
    local_250 = (int *****)0x80000007;
    local_23c = param_3;
    if ((pppppiVar26[4][0x10] == (int ***)0xa) &&
       (iVar14 = thunk_FUN_01bed842(pppppiVar26[4][0xf] + 2,"hashChains",10), iVar14 == 0)) {
      param_2[8] = iVar16;
      param_2[9] = (int)pppppiVar26;
      *(undefined1 *)(param_2 + 0x1d) = 0;
LAB_0091152c:
      *(undefined1 *)(param_2 + 0x1c) = 0;
      param_2[10] = iVar16;
      param_2[0xb] = (int)pppppiVar26;
LAB_00911544:
      param_2[0xc] = iVar16;
      *(undefined1 *)(param_2 + 0x1b) = 0;
LAB_0091155c:
      piVar13 = (int *)(iVar16 + 0x38);
      param_2[0xd] = (int)piVar13;
      *(undefined1 *)(param_2 + 0x1a) = 0;
LAB_00911574:
      iVar16 = *piVar13;
      *(undefined1 *)(param_2 + 0x19) = 0;
      iVar16 = iVar16 + 8;
      param_2[0xe] = iVar16;
LAB_0091158c:
      param_2[0xf] = iVar16;
      *(undefined1 *)(param_2 + 0x18) = 0;
LAB_009115a0:
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 1;
      param_2[0x16] = 1;
      param_2[0x10] = iVar16 + 4;
      param_2[0x11] = 0;
switchD_00911e6c_caseD_3:
      local_24c = (int *****)(param_2 + 0x1b);
      local_254 = (int *****)(param_2 + 0x1c);
      local_258 = (int *****)(param_2 + 0xc);
      local_250 = (int *****)(param_2 + 0x1d);
      bVar10 = FUN_019f9bc4(param_2 + 0x10,param_3);
      if (bVar10 == 2) {
        *(undefined1 *)(param_2 + 0x18) = 3;
        *(undefined1 *)(param_2 + 0x19) = 3;
        *(undefined1 *)(param_2 + 0x1a) = 3;
        *(undefined1 *)local_24c = 3;
      }
      else {
        FUN_0193c3cc(param_2 + 0x10);
        if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
        }
        iVar16 = param_2[0xf];
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(undefined1 *)(param_2 + 0x19) = 1;
        *(undefined1 *)(param_2 + 0x1a) = 1;
        FUN_00b56184(&local_68,*(undefined4 *)(iVar16 + 0x1c),*(undefined4 *)(iVar16 + 0x20));
        FUN_019f8c54(iVar16 + 4,1);
        pppppiVar24 = local_60;
        pppppiVar26 = local_64;
        pppppiVar20 = local_68;
        *(undefined1 *)local_24c = 1;
        if (local_68 != (int *****)&DAT_80000000) {
          FUN_00bba254(local_258);
          piVar13 = (int *)param_2[6];
          *(undefined1 *)(param_2 + 0x1d) = 1;
          *(undefined1 *)(param_2 + 0x1c) = 1;
          param_2[8] = (int)pppppiVar20;
          param_2[9] = (int)pppppiVar26;
          param_2[10] = (int)pppppiVar24;
          iVar27 = piVar13[4];
          iVar28 = piVar13[5];
          iVar30 = piVar13[6];
          iVar23 = piVar13[7];
          iVar16 = piVar13[8];
          iVar14 = piVar13[1];
          iVar18 = piVar13[2];
          iVar21 = piVar13[3];
          param_2[0xb] = *piVar13;
          param_2[0xc] = iVar14;
          param_2[0xd] = iVar18;
          param_2[0xe] = iVar21;
          param_2[0xf] = iVar27 + 0x20;
          param_2[0x10] = iVar28;
          param_2[0x11] = iVar30;
          *(char *)(param_2 + 0x13) = (char)iVar16;
          param_2[0x12] = iVar23;
          iVar16 = piVar13[4];
          *(undefined1 *)(param_2 + 0x2f) = 0;
          param_2[0x2c] = (int)(param_2 + 8);
          param_2[0x2d] = (int)(param_2 + 0xb);
          param_2[0x2e] = iVar16;
          goto switchD_0090febc_caseD_4;
        }
      }
      uVar9 = 3;
      *(undefined1 *)local_250 = 3;
      *(undefined1 *)local_254 = 3;
      goto LAB_009118fc;
    }
    goto LAB_009119a0;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c10870);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c10870);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090ff58:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x34;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar13;
    param_2[0x39] = (int)piVar25;
    param_2[0x3a] = iVar16;
LAB_00910a38:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_00910a54:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_00910a74:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_00910a84:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911b54_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00910580_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00910b40:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00910b4c;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar13 = (int *)param_2[0x38];
      piVar25 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910a38;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_00910a54;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_00910a74;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_00910a84;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911b54_caseD_3;
    }
switchD_00910580_caseD_4:
    FUN_008bd804(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_00910b40;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar31 = cVar1 == '\x03';
      if (bVar31) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar31 && cVar1 == '\x03') {
        FUN_00ba638c(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_009133b0(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_68 != (int *****)0x2) goto LAB_00910bfc;
LAB_00910b4c:
    *param_1 = 2;
    uVar9 = 4;
    goto LAB_00911a54;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090ff10:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x3c;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar13;
    param_2[0x39] = (int)piVar25;
    param_2[0x3a] = iVar16;
LAB_00910834:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_00910850:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_00910870:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_00910880:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911b28_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00910548_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_0091093c:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00910948;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar13 = (int *)param_2[0x38];
      piVar25 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910834;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_00910850;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_00910870;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_00910880;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911b28_caseD_3;
    }
switchD_00910548_caseD_4:
    FUN_008f2964(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_0091093c;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar31 = cVar1 == '\x03';
      if (bVar31) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar31 && cVar1 == '\x03') {
        FUN_00ba638c(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_009133b0(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_68 != (int *****)0x2) goto LAB_00910bfc;
LAB_00910948:
    *param_1 = 2;
    uVar9 = 6;
    goto LAB_00911a54;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090fd48:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x40;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar13;
    param_2[0x39] = (int)piVar25;
    param_2[0x3a] = iVar16;
LAB_00910180:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_0091019c:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_009101bc:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_009101cc:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911afc_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00910510_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00910288:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00910294;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar13 = (int *)param_2[0x38];
      piVar25 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910180;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_0091019c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_009101bc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_009101cc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911afc_caseD_3;
    }
switchD_00910510_caseD_4:
    FUN_008f3264(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_00910288;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar31 = cVar1 == '\x03';
      if (bVar31) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar31 && cVar1 == '\x03') {
        FUN_00ba638c(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_009133b0(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_68 != (int *****)0x2) goto LAB_00910bfc;
LAB_00910294:
    *param_1 = 2;
    uVar9 = 8;
    goto LAB_00911a54;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090fe8c:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x44;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar13;
    param_2[0x39] = (int)piVar25;
    param_2[0x3a] = iVar16;
LAB_00910630:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_0091064c:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_0091066c:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_0091067c:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911ad0_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_009100d0_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_00910738:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00910744;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar13 = (int *)param_2[0x38];
      piVar25 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910630;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_0091064c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_0091066c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_0091067c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911ad0_caseD_3;
    }
switchD_009100d0_caseD_4:
    FUN_008c9304(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_00910738;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar31 = cVar1 == '\x03';
      if (bVar31) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar31 && cVar1 == '\x03') {
        FUN_00ba638c(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_009133b0(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_68 != (int *****)0x2) goto LAB_00910bfc;
LAB_00910744:
    *param_1 = 2;
    uVar9 = 10;
    goto LAB_00911a54;
  case '\v':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090fd90:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x48;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)piVar13;
    param_2[0x39] = (int)piVar25;
    param_2[0x3a] = iVar16;
LAB_00910384:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_009103a0:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_009103c0:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_009103d0:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911bb8_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x32] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x33] = param_2[0x11];
      param_2[0x34] = param_2[0x12];
      goto switchD_00911178_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_0091048c:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x3b) = 3;
    goto LAB_00910498;
  case '\f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      piVar13 = (int *)param_2[0x38];
      piVar25 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910384;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_009103a0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_009103c0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_009103d0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911bb8_caseD_3;
    }
switchD_00911178_caseD_4:
    FUN_008c9c04(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_0091048c;
    if ((char)param_2[0x36] == '\x03') {
      cVar1 = (char)param_2[0x31];
      bVar31 = cVar1 == '\x03';
      if (bVar31) {
        cVar1 = (char)param_2[0x2c];
      }
      if (bVar31 && cVar1 == '\x03') {
        FUN_00ba638c(param_2 + 0x16);
      }
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_009133b0(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x3b) = 1;
    if (local_68 != (int *****)0x2) goto LAB_00910bfc;
LAB_00910498:
    *param_1 = 2;
    uVar9 = 0xc;
    goto LAB_00911a54;
  case '\r':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090ffa4:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar25 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    pppppiVar26 = (int *****)(param_2 + 4);
    *pppppiVar26 = (int ****)(iVar16 + 0x4c);
    piVar13 = param_2 + 5;
    iVar14 = piVar25[4];
    iVar21 = piVar25[5];
    iVar18 = piVar25[6];
    iVar28 = piVar25[7];
    iVar16 = piVar25[8];
    iVar23 = piVar25[1];
    iVar27 = piVar25[2];
    iVar30 = piVar25[3];
    *piVar13 = *piVar25;
    param_2[6] = iVar23;
    param_2[7] = iVar27;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar21;
    param_2[0xb] = iVar18;
    param_2[0xc] = iVar28;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar25[4];
    *(undefined1 *)(param_2 + 0x3b) = 0;
    param_2[0x38] = (int)pppppiVar26;
    param_2[0x39] = (int)piVar13;
    param_2[0x3a] = iVar16;
    local_24c = pppppiVar26;
LAB_00910ccc:
    ppppiVar17 = *pppppiVar26;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)ppppiVar17;
    param_2[0xf] = (int)piVar13;
    param_2[0x10] = iVar16;
LAB_00910cec:
    param_2[0x11] = (int)piVar13;
    param_2[0x12] = iVar16;
    pppiVar11 = *ppppiVar17;
    *(undefined1 *)(param_2 + 0x21) = 0;
    pppiVar11 = pppiVar11 + 2;
    param_2[0x16] = (int)pppiVar11;
LAB_00910d0c:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = (int)pppiVar11;
LAB_00910d1c:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = (int)(pppiVar11 + 1);
    param_2[0x19] = 0;
switchD_00911a70_caseD_3:
    unaff_r4 = param_2 + 0x20;
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      iVar16 = param_2[0x11];
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      piVar13 = (int *)(param_2[0x17] + 0x18);
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = (int)piVar13;
      param_2[0x32] = (int)piVar13;
      param_2[0x33] = iVar16;
      param_2[0x34] = param_2[0x12];
LAB_00910dec:
      pppppiVar26 = (int *****)&local_c0;
      param_2[0x35] = iVar16;
      if (*piVar13 != 2) {
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2e] = (int)piVar13;
        param_2[0x2f] = iVar16;
        param_2[0x30] = param_2[0x34];
LAB_00910e24:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = iVar16;
        param_2[0x2b] = (int)piVar13;
LAB_00910e38:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar10 = 1;
        param_2[0x19] = iVar16;
        param_2[0x1a] = (int)piVar13;
LAB_00910e50:
        pppppiVar26 = (int *****)&local_c0;
        piVar25 = param_2 + 0x16;
        *piVar25 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        FUN_00809600(&local_68,piVar25,iVar16,piVar13);
        if (local_68 == (int *****)0x2) {
          if ((bVar10 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1b) = 0;
            local_120 = *piVar25;
            iStack_11c = param_2[0x17];
            iStack_118 = param_2[0x18];
            FUN_009ec520(&local_68);
            local_158 = local_68;
            pppppiStack_154 = local_64;
            pppppiStack_150 = local_60;
            pppppiStack_14c = local_5c;
            local_148 = local_58;
            pppppiStack_144 = local_54;
            pppppiStack_140 = local_50;
            pppppiStack_13c = local_4c;
            pppppiStack_138 = local_48;
            local_134 = local_44;
            pppppiStack_130 = local_40;
            pppppiStack_12c = pppppiStack_3c;
            pppppiStack_128 = pppppiStack_38;
            pppppiStack_124 = local_34;
            param_2[0x1c] = (int)local_68;
            param_2[0x1d] = (int)local_64;
            param_2[0x1e] = (int)local_60;
            param_2[0x1f] = (int)local_5c;
            param_2[0x20] = (int)local_58;
            param_2[0x21] = (int)local_54;
            param_2[0x22] = (int)local_50;
            param_2[0x23] = (int)local_4c;
            param_2[0x24] = (int)local_48;
            param_2[0x25] = (int)local_44;
            param_2[0x26] = (int)local_40;
            param_2[0x27] = (int)pppppiStack_3c;
            param_2[0x28] = (int)pppppiStack_38;
            param_2[0x29] = (int)local_34;
            goto switchD_00911e08_caseD_3;
          }
          uVar19 = param_2[0x18];
          if (0x2492492 < uVar19) {
            uVar22 = 0;
LAB_00911840:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar22,unaff_r4);
          }
          unaff_r4 = (int *)(uVar19 * 0x38);
          if (unaff_r4 == (int *)0x0) {
            iVar16 = 8;
            uVar19 = 0;
          }
          else {
            uVar22 = 8;
            iVar16 = FUN_01298504(unaff_r4,8);
            if (iVar16 == 0) goto LAB_00911840;
          }
          piVar25 = (int *)param_2[0x17];
          param_2[0x1d] = iVar16;
          piVar13 = piVar25 + param_2[0x18] * 2;
          param_2[0x1c] = uVar19;
          param_2[0x1e] = 0;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x24] = (int)piVar25;
          param_2[0x25] = (int)piVar25;
          param_2[0x26] = param_2[0x16];
          param_2[0x27] = (int)piVar13;
          while (pppppiVar26 = (int *****)&local_c0, piVar25 != piVar13) {
            iVar16 = *piVar25;
            iVar14 = piVar25[1];
            param_2[0x25] = (int)(piVar25 + 2);
            param_2[0x22] = iVar16;
            param_2[0x1f] = (int)(param_2 + 0x1c);
            param_2[0x20] = iVar16;
            param_2[0x21] = iVar14;
            param_2[0x23] = iVar14;
LAB_00913004:
            pppppiVar26 = (int *****)&local_c0;
            (**(code **)(iVar14 + 0xc))(&local_68,iVar16,param_3);
            pppppiVar8 = local_2c;
            pppppiVar7 = local_30;
            pppppiVar6 = local_50;
            pppppiVar5 = local_54;
            pppppiVar4 = local_58;
            pppppiVar3 = local_5c;
            pppppiVar29 = local_60;
            pppppiVar24 = local_68;
            if (local_68 == (int *****)0x2) {
              uVar9 = 4;
              goto LAB_00913228;
            }
            local_280 = local_64;
            local_24c = local_60;
            local_25c = local_54;
            local_250 = local_50;
            local_254 = local_5c;
            local_258 = local_58;
            local_e0 = local_4c;
            pppppiStack_dc = local_48;
            pppppiStack_d8 = local_44;
            local_d4 = local_40;
            pppppiStack_d0 = pppppiStack_3c;
            pppppiStack_cc = pppppiStack_38;
            pppppiStack_c8 = local_34;
            local_264 = local_30;
            local_270 = local_2c;
            FUN_01139b38(param_2[0x22],param_2[0x23]);
            if (((uint)pppppiVar24 & 1) != 0) {
              local_88 = local_e0;
              pppppiStack_84 = pppppiStack_dc;
              pppppiStack_80 = pppppiStack_d8;
              local_7c = local_d4;
              pppppiStack_78 = pppppiStack_d0;
              pppppiStack_74 = pppppiStack_cc;
              pppppiStack_70 = pppppiStack_c8;
              FUN_009495dc(param_2 + 0x24);
              FUN_007bc140(param_2 + 0x1c);
              goto LAB_00911260;
            }
            *pppppiVar20 = (int ****)pppppiVar3;
            pppppiVar20[1] = (int ****)pppppiVar4;
            local_c0 = pppppiVar29;
            local_b0 = pppppiVar6;
            local_b4 = pppppiVar5;
            local_ac = local_e0;
            pppppiStack_a8 = pppppiStack_dc;
            pppppiStack_a4 = pppppiStack_d8;
            local_a0 = local_d4;
            pppppiStack_9c = pppppiStack_d0;
            pppppiStack_98 = pppppiStack_cc;
            pppppiStack_94 = pppppiStack_c8;
            piVar13 = (int *)param_2[0x1f];
            pppppiVar20[0xb] = (int ****)pppppiVar7;
            pppppiVar20[0xc] = (int ****)pppppiVar8;
            iVar16 = piVar13[2];
            if (iVar16 == *piVar13) {
              FUN_006e4ec8(piVar13);
            }
            puVar15 = (undefined4 *)(piVar13[1] + iVar16 * 0x38);
            *puVar15 = pppppiVar29;
            puVar15[1] = pppppiVar3;
            puVar15[2] = pppppiVar4;
            puVar15[3] = pppppiVar5;
            puVar15[4] = pppppiVar6;
            puVar15[5] = local_e0;
            puVar15[6] = pppppiStack_dc;
            puVar15[7] = pppppiStack_d8;
            puVar15[8] = local_d4;
            puVar15[9] = pppppiStack_d0;
            puVar15[10] = pppppiStack_cc;
            puVar15[0xb] = pppppiStack_c8;
            puVar15[0xc] = pppppiVar7;
            puVar15[0xd] = pppppiVar8;
            piVar13[2] = iVar16 + 1;
            piVar13 = (int *)param_2[0x27];
            piVar25 = (int *)param_2[0x25];
          }
          param_2[0x20] = 0;
          FUN_009495dc(param_2 + 0x24);
          local_f0 = (int *****)param_2[0x1c];
          local_ec = (int *****)param_2[0x1d];
          local_e8 = (int *****)param_2[0x1e];
          goto LAB_009131b8;
        }
        local_280 = local_68;
        local_24c = local_64;
        local_25c = local_58;
        local_250 = local_54;
        local_254 = local_60;
        local_258 = local_5c;
        local_88 = local_50;
        pppppiStack_84 = local_4c;
        pppppiStack_80 = local_48;
        local_7c = local_44;
        pppppiStack_78 = local_40;
        pppppiStack_74 = pppppiStack_3c;
        pppppiStack_70 = pppppiStack_38;
        local_264 = local_34;
        local_270 = local_30;
        goto LAB_00911260;
      }
      local_250 = (int *****)&DAT_80000000;
      goto LAB_00911390;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)unaff_r4 = 3;
LAB_00910d70:
    local_268 = param_2 + 0x15;
    local_26c = param_2 + 0x3b;
    *(undefined1 *)local_26c = 3;
    *(undefined1 *)local_268 = uVar9;
    *param_1 = 2;
    uVar9 = 0xe;
    goto LAB_00911a54;
  case '\x0e':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x3b]) {
    case '\0':
      pppppiVar26 = (int *****)param_2[0x38];
      piVar13 = (int *)param_2[0x39];
      iVar16 = param_2[0x3a];
      goto LAB_00910ccc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      ppppiVar17 = (int ****)param_2[0xe];
      piVar13 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_00910cec;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        pppiVar11 = (int ***)param_2[0x16];
        goto LAB_00910d0c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        pppiVar11 = (int ***)param_2[0x17];
        goto LAB_00910d1c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911a70_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x36]) {
    case '\0':
      piVar13 = (int *)param_2[0x32];
      iVar16 = param_2[0x33];
      goto LAB_00910dec;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21c3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x31]) {
    case '\0':
      piVar13 = (int *)param_2[0x2e];
      iVar16 = param_2[0x2f];
      goto LAB_00910e24;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c107a4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c107a4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2c]) {
    case '\0':
      iVar16 = param_2[0x2a];
      piVar13 = (int *)param_2[0x2b];
      goto LAB_00910e38;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      iVar16 = param_2[0x19];
      piVar13 = (int *)param_2[0x1a];
      bVar10 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00910e50;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar16 = param_2[0x22];
      iVar14 = param_2[0x23];
      goto LAB_00913004;
    }
switchD_00911e08_caseD_3:
    FUN_009ecbe0(&local_68,param_2 + 0x1c,param_3);
    pppppiVar24 = local_64;
    pppppiVar20 = local_68;
    if (local_68 == (int *****)&DAT_00000003) {
      uVar9 = 3;
LAB_00913228:
      local_284 = param_2 + 0x36;
      local_288 = param_2 + 0x31;
      local_28c = param_2 + 0x2c;
      local_290 = (undefined1 *)((int)param_2 + 0x6d);
      *local_290 = uVar9;
      *(undefined1 *)local_288 = 3;
      *(undefined1 *)local_28c = 3;
      *(undefined1 *)local_284 = 3;
      uVar9 = 4;
      goto LAB_00910d70;
    }
    local_280 = local_68;
    pppppiVar26 = (int *****)&local_110;
    local_24c = local_64;
    local_25c = local_58;
    local_250 = local_54;
    local_254 = local_60;
    local_258 = local_5c;
    local_110 = local_50;
    pppppiStack_10c = local_4c;
    pppppiStack_108 = local_48;
    local_104 = local_44;
    pppppiStack_100 = local_40;
    pppppiStack_fc = pppppiStack_3c;
    pppppiStack_f8 = pppppiStack_38;
    local_264 = local_34;
    local_270 = local_30;
    FUN_00ba64b4(param_2 + 0x1c);
    if (pppppiVar20 == (int *****)0x2) {
      local_f0 = pppppiVar24;
      local_ec = local_254;
      local_e8 = local_258;
LAB_009131b8:
      FUN_006cac18(&local_68,&local_f0);
      local_24c = local_68;
      bVar31 = false;
      local_254 = local_64;
      local_258 = local_60;
      local_25c = local_5c;
      local_250 = local_58;
      local_88 = local_54;
      pppppiStack_84 = local_50;
      pppppiStack_80 = local_4c;
      local_7c = local_48;
      pppppiStack_78 = local_44;
      pppppiStack_74 = local_40;
      pppppiStack_70 = pppppiStack_3c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    else {
      pppppiVar26 = (int *****)&local_104;
      local_88 = local_110;
      pppppiStack_84 = pppppiStack_10c;
      pppppiStack_80 = pppppiStack_108;
      local_7c = local_104;
      pppppiStack_78 = pppppiStack_100;
      pppppiStack_74 = pppppiStack_fc;
      pppppiStack_70 = pppppiStack_f8;
LAB_00911260:
      if ((char)param_2[0x1b] != '\0') {
        FUN_00b7d620(param_2 + 0x16);
      }
      bVar31 = true;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    local_288 = param_2 + 0x31;
    local_28c = param_2 + 0x2c;
    local_290 = (undefined1 *)((int)param_2 + 0x6d);
    local_1d8 = local_88;
    pppppiStack_1d4 = pppppiStack_84;
    pppppiStack_1d0 = pppppiStack_80;
    local_1cc = local_7c;
    pppppiStack_1c8 = pppppiStack_78;
    pppppiStack_1c4 = pppppiStack_74;
    pppppiStack_1c0 = pppppiStack_70;
    *local_290 = 1;
    FUN_00ba638c(param_2 + 0x16);
    *(undefined1 *)local_288 = 1;
    *(undefined1 *)local_28c = 1;
    local_1b8 = local_1d8;
    pppppiStack_1b4 = pppppiStack_1d4;
    pppppiStack_1b0 = pppppiStack_1d0;
    local_1ac = local_1cc;
    pppppiStack_1a8 = pppppiStack_1c8;
    pppppiStack_1a4 = pppppiStack_1c4;
    pppppiStack_1a0 = pppppiStack_1c0;
    if (bVar31) {
      local_194 = local_24c;
      local_198 = local_280;
      local_184 = local_250;
      local_188 = local_25c;
      local_180 = local_1d8;
      pppppiStack_17c = pppppiStack_1d4;
      pppppiStack_178 = pppppiStack_1d0;
      local_174 = local_1cc;
      pppppiStack_170 = pppppiStack_1c8;
      pppppiStack_16c = pppppiStack_1c4;
      pppppiStack_168 = pppppiStack_1c0;
      local_164 = local_264;
      pppppiStack_160 = local_270;
      FUN_00a20afc(*(undefined4 *)(param_2[0x35] + 0x18));
      local_250 = (int *****)&DAT_80000000;
    }
LAB_00911390:
    pppppiVar24 = pppppiStack_1a0;
    pppppiVar7 = pppppiStack_1a4;
    pppppiVar6 = pppppiStack_1a8;
    pppppiVar5 = local_1ac;
    pppppiVar4 = pppppiStack_1b0;
    pppppiVar3 = pppppiStack_1b4;
    pppppiVar29 = local_1b8;
    uVar2 = CONCAT44(local_254,local_24c);
    local_268 = param_2 + 0x15;
    local_26c = param_2 + 0x3b;
    local_274 = param_2 + 0xe;
    pppppiVar20 = (int *****)&DAT_00000001;
    *(undefined1 *)(param_2 + 0x36) = 1;
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)local_268 = 1;
    FUN_009133b0(local_274);
    *(undefined1 *)local_26c = 1;
    local_1f8 = pppppiVar29;
    pppppiStack_1f4 = pppppiVar3;
    pppppiStack_1f0 = pppppiVar4;
    uVar19 = 0;
    local_1ec = pppppiVar5;
    pppppiStack_1e8 = pppppiVar6;
    pppppiStack_1e4 = pppppiVar7;
    pppppiStack_1e0 = pppppiVar24;
    local_58 = local_258;
    local_54 = local_25c;
    break;
  case '\x0f':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
LAB_0090fff4:
      param_2[6] = iVar16;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = (int)pppppiVar26;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10870);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10870);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10870);
      }
      iVar16 = param_2[6];
    }
    piVar12 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar25 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar13 = param_2 + 4;
    *piVar13 = iVar16 + 0x50;
    iVar14 = piVar12[4];
    iVar23 = piVar12[5];
    iVar28 = piVar12[6];
    iVar27 = piVar12[7];
    iVar16 = piVar12[8];
    iVar18 = piVar12[1];
    iVar21 = piVar12[2];
    iVar30 = piVar12[3];
    *piVar25 = *piVar12;
    param_2[6] = iVar18;
    param_2[7] = iVar21;
    param_2[8] = iVar30;
    param_2[9] = iVar14 + 0x20;
    param_2[10] = iVar23;
    param_2[0xb] = iVar28;
    param_2[0xc] = iVar27;
    *(char *)(param_2 + 0xd) = (char)iVar16;
    iVar16 = piVar12[4];
    *(undefined1 *)(param_2 + 0x35) = 0;
    param_2[0x32] = (int)piVar13;
    param_2[0x33] = (int)piVar25;
    param_2[0x34] = iVar16;
LAB_00910fa8:
    piVar13 = (int *)*piVar13;
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar13;
    param_2[0xf] = (int)piVar25;
    param_2[0x10] = iVar16;
LAB_00910fc4:
    param_2[0x11] = (int)piVar25;
    param_2[0x12] = iVar16;
    iVar16 = *piVar13;
    *(undefined1 *)(param_2 + 0x21) = 0;
    iVar16 = iVar16 + 8;
    param_2[0x16] = iVar16;
LAB_00910fe4:
    *(undefined1 *)(param_2 + 0x20) = 0;
    param_2[0x17] = iVar16;
LAB_00910ff4:
    *(undefined1 *)(param_2 + 0x1f) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 1;
    param_2[0x1e] = 1;
    param_2[0x18] = iVar16 + 4;
    param_2[0x19] = 0;
switchD_00911be4_caseD_3:
    bVar10 = FUN_019f9bc4(param_2 + 0x18,param_3);
    if (bVar10 != 2) {
      FUN_0193c3cc(param_2 + 0x18);
      if ((bVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b3f0);
      }
      *(undefined1 *)(param_2 + 0x21) = 1;
      *(undefined1 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x31) = 0;
      iVar16 = param_2[0x17] + 0x18;
      param_2[0x2e] = iVar16;
      param_2[0x13] = param_2[0x17] + 4;
      param_2[0x14] = iVar16;
      param_2[0x2f] = param_2[0x11];
      param_2[0x30] = param_2[0x12];
      goto switchD_009111b0_caseD_4;
    }
    uVar9 = 3;
    *(undefined1 *)(param_2 + 0x21) = 3;
    *(undefined1 *)(param_2 + 0x20) = 3;
LAB_009110b0:
    *(undefined1 *)(param_2 + 0x15) = uVar9;
    *(undefined1 *)(param_2 + 0x35) = 3;
LAB_009110bc:
    *param_1 = 2;
    uVar9 = 0x10;
    goto LAB_00911a54;
  case '\x10':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x35]) {
    case '\0':
      piVar13 = (int *)param_2[0x32];
      piVar25 = (int *)param_2[0x33];
      iVar16 = param_2[0x34];
      goto LAB_00910fa8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar13 = (int *)param_2[0xe];
      piVar25 = (int *)param_2[0xf];
      iVar16 = param_2[0x10];
      goto LAB_00910fc4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x21]) {
      case '\0':
        iVar16 = param_2[0x16];
        goto LAB_00910fe4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x20]) {
      case '\0':
        iVar16 = param_2[0x17];
        goto LAB_00910ff4;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911be4_caseD_3;
    }
switchD_009111b0_caseD_4:
    FUN_008cbeb4(&local_68,param_2 + 0x16,param_3);
    uVar9 = 4;
    if (local_68 == (int *****)0x2) goto LAB_009110b0;
    if ((char)param_2[0x31] == '\x03') {
      FUN_008b62b8(param_2 + 0x16);
    }
    FUN_019f8c54(param_2[0x13],1);
    *(undefined1 *)(param_2 + 0x15) = 1;
    FUN_008c7634(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x35) = 1;
    if (local_68 == (int *****)0x2) goto LAB_009110bc;
LAB_00910bfc:
    uVar19 = (uint)local_68 & 1;
    pppppiVar20 = local_30;
    pppppiVar24 = local_64;
    pppppiVar26 = local_2c;
    local_250 = local_50;
    local_1f8 = local_4c;
    pppppiStack_1f4 = local_48;
    pppppiStack_1f0 = local_44;
    local_1ec = local_40;
    pppppiStack_1e8 = pppppiStack_3c;
    pppppiStack_1e4 = pppppiStack_38;
    pppppiStack_1e0 = local_34;
    uVar2 = CONCAT44(local_5c,local_60);
    break;
  case '\x11':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar16 = param_2[4];
      pppppiVar26 = (int *****)param_2[5];
      goto LAB_009114c0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10ad8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10ad8);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1d]) {
      case '\0':
        iVar16 = param_2[8];
        pppppiVar26 = (int *****)param_2[9];
        goto LAB_0091152c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1c]) {
      case '\0':
        iVar16 = param_2[10];
        goto LAB_00911544;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1b]) {
      case '\0':
        iVar16 = param_2[0xc];
        goto LAB_0091155c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c10ad8);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c10ad8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1a]) {
      case '\0':
        piVar13 = (int *)param_2[0xd];
        goto LAB_00911574;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f190);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f190);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x19]) {
      case '\0':
        iVar16 = param_2[0xe];
        goto LAB_0091158c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3d0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3d0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x18]) {
      case '\0':
        iVar16 = param_2[0xf];
        goto LAB_009115a0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b3e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b3e0);
      }
      goto switchD_00911e6c_caseD_3;
    }
switchD_0090febc_caseD_4:
    FUN_008be370(&local_68,param_2 + 0x14,param_3);
    if (local_68 == (int *****)0x2) {
      uVar9 = 4;
LAB_009118fc:
      local_260 = param_2 + 7;
      *(undefined1 *)local_260 = uVar9;
      *param_1 = 2;
      uVar9 = 0x11;
      goto LAB_00911a54;
    }
    local_23c = local_64;
    local_24c = local_60;
    local_25c = local_54;
    local_250 = local_50;
    local_254 = local_5c;
    local_258 = local_58;
    local_c0 = local_4c;
    pppppiStack_bc = local_48;
    pppppiStack_b8 = local_44;
    local_b4 = local_40;
    local_b0 = pppppiStack_3c;
    local_ac = pppppiStack_38;
    pppppiStack_a8 = local_34;
    if ((char)param_2[0x2f] == '\x03') {
      FUN_008be1e4(param_2 + 0x14);
    }
    local_198 = local_c0;
    local_194 = pppppiStack_bc;
    local_190 = pppppiStack_b8;
    local_18c = local_b4;
    local_188 = local_b0;
    local_184 = local_ac;
    local_180 = pppppiStack_a8;
    FUN_00b5f0e4(param_2 + 8);
    pppppiVar20 = local_30;
    pppppiVar26 = local_2c;
    pppppiVar29 = local_68;
LAB_009119a0:
    uVar2 = CONCAT44(local_254,local_24c);
    local_260 = param_2 + 7;
    pppppiVar24 = (int *****)&local_218;
    local_218 = local_198;
    pppppiStack_214 = local_194;
    pppppiStack_210 = local_190;
    local_20c = local_18c;
    pppppiStack_208 = local_188;
    pppppiStack_204 = local_184;
    pppppiStack_200 = local_180;
    uVar19 = 1;
    *(undefined1 *)local_260 = 1;
    uVar32 = FUN_00913448(param_2 + 4);
    if ((((uint)pppppiVar29 & 1) == 0) && (uVar19 = 0, local_250 == (int *****)0x80000007)) {
      local_250 = (int *****)0x80000007;
      local_58 = extraout_r2;
      local_54 = extraout_r3;
      uVar2 = uVar32;
    }
    else {
      local_1f8 = local_218;
      pppppiStack_1f4 = pppppiStack_214;
      pppppiStack_1f0 = pppppiStack_210;
      local_1ec = local_20c;
      pppppiStack_1e8 = pppppiStack_208;
      pppppiStack_1e4 = pppppiStack_204;
      pppppiStack_1e0 = pppppiStack_200;
      local_58 = local_258;
      local_54 = local_25c;
      pppppiVar24 = local_23c;
    }
  }
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[4] = (uint)local_58;
  param_1[5] = (uint)local_54;
  *param_1 = uVar19;
  param_1[1] = (uint)pppppiVar24;
  param_1[6] = (uint)local_250;
  param_1[7] = (uint)local_1f8;
  param_1[8] = (uint)pppppiStack_1f4;
  param_1[9] = (uint)pppppiStack_1f0;
  param_1[10] = (uint)local_1ec;
  param_1[0xb] = (uint)pppppiStack_1e8;
  param_1[0xc] = (uint)pppppiStack_1e4;
  param_1[0xd] = (uint)pppppiStack_1e0;
  uVar9 = 1;
  param_1[0xe] = (uint)pppppiVar20;
  param_1[0xf] = (uint)pppppiVar26;
LAB_00911a54:
  *(undefined1 *)(param_2 + 3) = uVar9;
  return;
}

