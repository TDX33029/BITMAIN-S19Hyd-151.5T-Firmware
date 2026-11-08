// FUN_0119e34c @ 0119e34c size=3708 calls_out=18 calls_in=0
// strings: controlBoardSocFamily

void FUN_0119e34c(uint *param_1,int *param_2,undefined4 ****param_3)

{
  bool bVar1;
  undefined4 ****ppppuVar2;
  undefined1 uVar3;
  undefined4 ****ppppuVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 ***pppuVar8;
  undefined4 ****ppppuVar9;
  int *piVar10;
  undefined4 ****unaff_r4;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 ****ppppuVar21;
  int iVar22;
  undefined4 ****in_r12;
  undefined4 ****extraout_r12;
  undefined4 ****extraout_r12_00;
  int iVar23;
  undefined4 ****extraout_r12_01;
  undefined4 ****unaff_lr;
  undefined1 *local_26c;
  int *local_268;
  int *local_264;
  int *local_260;
  undefined4 ****local_25c;
  undefined4 ****local_258;
  undefined4 ****local_254;
  undefined4 ****local_250;
  undefined4 ****local_24c;
  int *local_248;
  undefined4 ****local_240;
  undefined4 ****ppppuStack_23c;
  undefined4 ****ppppuStack_238;
  undefined4 ***apppuStack_234 [5];
  undefined4 ****local_220;
  undefined4 ****ppppuStack_21c;
  undefined4 ****ppppuStack_218;
  undefined4 ****ppppuStack_214;
  undefined4 ****local_210;
  undefined4 ****ppppuStack_20c;
  undefined4 ****ppppuStack_208;
  undefined4 ****ppppuStack_204;
  undefined4 ****ppppuStack_200;
  undefined4 ***local_1ec [7];
  undefined4 ***apppuStack_1d0 [8];
  undefined4 ***local_1b0 [8];
  undefined4 ****local_190;
  undefined4 ****ppppuStack_18c;
  undefined4 ****ppppuStack_188;
  undefined4 ****local_184;
  undefined4 ****local_180;
  undefined4 ****ppppuStack_17c;
  undefined4 ****ppppuStack_178;
  undefined4 ****ppppuStack_174;
  undefined4 ****ppppuStack_170;
  undefined4 ****local_168;
  undefined4 ****ppppuStack_164;
  undefined4 ****ppppuStack_160;
  undefined4 ****ppppuStack_15c;
  undefined4 ****local_158;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 ****ppppuStack_148;
  undefined4 ****local_144;
  undefined4 ****ppppuStack_140;
  undefined4 ****ppppuStack_13c;
  undefined4 ****ppppuStack_138;
  undefined4 ****ppppuStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 ****local_120;
  undefined4 ****ppppuStack_11c;
  undefined4 ****ppppuStack_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****local_110;
  undefined4 ****ppppuStack_10c;
  undefined4 ****ppppuStack_108;
  undefined4 ****ppppuStack_104;
  undefined4 ****ppppuStack_100;
  undefined4 ****local_f8;
  undefined4 ****local_f4;
  undefined4 ****local_f0;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****ppppuStack_b8;
  undefined4 ****ppppuStack_b4;
  undefined4 ****ppppuStack_b0;
  undefined4 ****ppppuStack_ac;
  undefined4 ****local_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 ****ppppuStack_a0;
  undefined4 ****ppppuStack_9c;
  undefined4 ****local_98;
  undefined4 ****ppppuStack_94;
  undefined4 ****ppppuStack_90;
  undefined4 ****ppppuStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  undefined4 ****ppppuStack_68;
  undefined4 ****ppppuStack_64;
  undefined4 ****ppppuStack_60;
  undefined4 ****local_5c;
  undefined4 ****ppppuStack_58;
  undefined4 ****ppppuStack_54;
  undefined4 ****ppppuStack_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ****local_48;
  undefined4 ****ppppuStack_44;
  undefined4 ****ppppuStack_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 ****ppppuStack_34;
  undefined4 ****ppppuStack_30;
  undefined4 ****ppppuStack_2c;
  undefined4 ****ppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar12 = param_2[1];
    uVar13 = 0;
    param_2[2] = iVar12;
    iVar19 = *param_2;
    ppppuVar4 = *(undefined4 *****)(iVar12 + 0x10);
    pppuVar8 = ppppuVar4[0x10];
    if ((int)pppuVar8 < 8) {
      if (pppuVar8 == (undefined4 ***)0x4) {
        ppppuVar4 = (undefined4 ****)ppppuVar4[0xf][2];
        if (ppppuVar4 == (undefined4 ****)0x65646f6d) {
          param_2[4] = iVar19;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = iVar12;
          goto LAB_0119e564;
        }
      }
      else if (pppuVar8 == (undefined4 ***)0x7) {
        unaff_lr = (undefined4 ****)0x119e3e8;
        ppppuVar4 = (undefined4 ****)thunk_FUN_01bed842(ppppuVar4[0xf] + 2,&DAT_00520eda,7);
        in_r12 = extraout_r12;
        if (ppppuVar4 == (undefined4 ****)0x0) {
          param_2[4] = iVar19;
          *(undefined1 *)(param_2 + 9) = 0;
          param_2[5] = iVar12;
          goto LAB_0119e4a4;
        }
      }
    }
    else if (pppuVar8 == (undefined4 ***)0x8) {
      unaff_lr = (undefined4 ****)0x119edd0;
      ppppuVar4 = (undefined4 ****)thunk_FUN_01bed842(ppppuVar4[0xf] + 2,&DAT_00571138,8);
      in_r12 = extraout_r12_01;
      if (ppppuVar4 == (undefined4 ****)0x0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar12;
        goto LAB_0119e4ec;
      }
    }
    else if (pppuVar8 == (undefined4 ***)0x15) {
      unaff_lr = (undefined4 ****)0x119e620;
      ppppuVar4 = (undefined4 ****)
                  thunk_FUN_01bed842(ppppuVar4[0xf] + 2,"controlBoardSocFamily",0x15);
      in_r12 = extraout_r12_00;
      if (ppppuVar4 == (undefined4 ****)0x0) {
        param_2[4] = iVar19;
        *(undefined1 *)(param_2 + 9) = 0;
        param_2[5] = iVar12;
        goto LAB_0119e5e4;
      }
    }
    ppppuVar21 = (undefined4 ****)0x80000007;
    local_24c = unaff_r4;
    local_258 = in_r12;
    local_254 = unaff_lr;
    goto LAB_0119ec5c;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20d54);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20d54);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar12 = param_2[5];
LAB_0119e564:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar12;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d54);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d54);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d54);
      }
      iVar19 = param_2[6];
    }
    local_248 = param_2 + 4;
    piVar10 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar16 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x28;
    iVar20 = piVar10[4];
    iVar18 = piVar10[5];
    iVar12 = piVar10[6];
    iVar23 = piVar10[7];
    iVar19 = piVar10[8];
    iVar11 = piVar10[1];
    iVar14 = piVar10[2];
    iVar22 = piVar10[3];
    *piVar16 = *piVar10;
    param_2[6] = iVar11;
    param_2[7] = iVar14;
    param_2[8] = iVar22;
    param_2[9] = iVar20 + 0x20;
    param_2[10] = iVar18;
    param_2[0xb] = iVar12;
    param_2[0xc] = iVar23;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar19 = piVar10[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_248;
    param_2[0xf] = (int)piVar16;
    param_2[0x10] = iVar19;
LAB_0119eac4:
    puVar6 = (undefined1 *)*local_248;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = (int)puVar6;
    param_2[0x12] = (int)piVar16;
    param_2[0x13] = iVar19;
    goto LAB_0119eadc;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_248 = (int *)param_2[0xe];
      piVar16 = (int *)param_2[0xf];
      iVar19 = param_2[0x10];
      goto LAB_0119eac4;
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
          FUN_013079f0(&DAT_01c22650);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22650);
      }
      puVar6 = (undefined1 *)param_2[0x11];
    }
LAB_0119eadc:
    FUN_00b05628(&local_e8,*puVar6);
    ppppuVar9 = &local_240;
    local_240 = local_d4;
    ppppuStack_23c = local_d0;
    ppppuStack_238 = local_cc;
    ppppuVar4 = apppuStack_234;
    local_24c = local_dc;
    ppppuVar21 = local_d8;
    param_3 = local_e0;
    local_258 = local_e4;
    local_254 = local_e8;
LAB_0119ec2c:
    *ppppuVar4 = local_c8;
    ppppuVar4[1] = local_c4;
    ppppuVar4[2] = local_c0;
    ppppuVar4[3] = local_bc;
    *(undefined1 *)(param_2 + 0x15) = 1;
    *(undefined1 *)(param_2 + 0x14) = 1;
    local_190 = (undefined4 ****)*ppppuVar9;
    ppppuStack_18c = (undefined4 ****)ppppuVar9[1];
    ppppuStack_188 = (undefined4 ****)ppppuVar9[2];
    ppppuVar4 = &local_184;
    local_184 = (undefined4 ****)ppppuVar9[3];
    local_180 = (undefined4 ****)ppppuVar9[4];
    ppppuStack_17c = (undefined4 ****)ppppuVar9[5];
    ppppuStack_178 = (undefined4 ****)ppppuVar9[6];
    uVar13 = 0;
    goto LAB_0119ec5c;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar12 = param_2[5];
LAB_0119e4a4:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar12;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d54);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d54);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d54);
      }
      iVar19 = param_2[6];
    }
    piVar5 = (int *)param_2[2];
    piVar10 = param_2 + 4;
    *piVar10 = iVar19;
    piVar16 = param_2 + 5;
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    iVar12 = piVar5[4];
    iVar22 = piVar5[5];
    iVar20 = piVar5[6];
    iVar11 = piVar5[7];
    iVar19 = piVar5[8];
    iVar14 = piVar5[1];
    iVar18 = piVar5[2];
    iVar23 = piVar5[3];
    *piVar16 = *piVar5;
    param_2[6] = iVar14;
    param_2[7] = iVar18;
    param_2[8] = iVar23;
    param_2[10] = iVar22;
    param_2[9] = iVar12 + 0x20;
    param_2[0xb] = iVar20;
    param_2[0xc] = iVar11;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar12 = piVar5[4];
    *(undefined1 *)(param_2 + 0x2d) = 0;
    param_2[0x2a] = (int)piVar10;
    param_2[0x2b] = (int)piVar16;
    param_2[0x2c] = iVar12;
LAB_0119e700:
    iVar19 = *piVar10;
    *(undefined1 *)(param_2 + 0x29) = 0;
    param_2[0x26] = iVar19;
    param_2[0x27] = (int)piVar16;
    param_2[0x28] = iVar12;
LAB_0119e720:
    *(undefined1 *)(param_2 + 0x24) = 0;
    param_2[0x22] = (int)piVar16;
    param_2[0x23] = iVar19;
LAB_0119e73c:
    *(undefined2 *)((int)param_2 + 0x4d) = 0x100;
    bVar17 = 1;
    param_2[0x11] = (int)piVar16;
    param_2[0x12] = iVar19;
LAB_0119e754:
    iVar12 = (int)param_2 + 0x4d;
    piVar10 = param_2 + 0xe;
    *piVar10 = 0;
    param_2[0x10] = 0;
    param_2[0xf] = 4;
    *(undefined1 *)(param_2 + 0x13) = 1;
    FUN_00cea898(&local_e8,piVar10,piVar16,iVar19);
    if (local_e8 != (undefined4 ****)0x2) {
      local_25c = local_e8;
      local_250 = local_dc;
      local_24c = local_d8;
      local_48 = local_d0;
      ppppuStack_44 = local_cc;
      ppppuStack_40 = local_c8;
      local_3c = local_c4;
      local_38 = local_c0;
      ppppuStack_34 = local_bc;
      ppppuStack_30 = ppppuStack_b8;
      ppppuStack_2c = ppppuStack_b4;
      ppppuStack_28 = ppppuStack_b0;
      local_254 = local_e4;
      ppppuVar21 = local_d4;
      local_258 = local_e0;
      goto LAB_0119e870;
    }
    if ((bVar17 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x13) = 0;
      local_130 = *piVar10;
      iStack_12c = param_2[0xf];
      iStack_128 = param_2[0x10];
      FUN_009ec520(&local_e8);
      local_168 = local_e8;
      ppppuStack_164 = local_e4;
      ppppuStack_160 = local_e0;
      ppppuStack_15c = local_dc;
      local_158 = local_d8;
      ppppuStack_154 = local_d4;
      ppppuStack_150 = local_d0;
      ppppuStack_14c = local_cc;
      ppppuStack_148 = local_c8;
      local_144 = local_c4;
      ppppuStack_140 = local_c0;
      ppppuStack_13c = local_bc;
      ppppuStack_138 = ppppuStack_b8;
      ppppuStack_134 = ppppuStack_b4;
      param_2[0x14] = (int)local_e8;
      param_2[0x15] = (int)local_e4;
      param_2[0x16] = (int)local_e0;
      param_2[0x17] = (int)local_dc;
      param_2[0x18] = (int)local_d8;
      param_2[0x19] = (int)local_d4;
      param_2[0x1a] = (int)local_d0;
      param_2[0x1b] = (int)local_cc;
      param_2[0x1c] = (int)local_c8;
      param_2[0x1d] = (int)local_c4;
      param_2[0x1e] = (int)local_c0;
      param_2[0x1f] = (int)local_bc;
      param_2[0x20] = (int)ppppuStack_b8;
      param_2[0x21] = (int)ppppuStack_b4;
      goto switchD_0119ee18_caseD_3;
    }
    uVar13 = param_2[0x10];
    if (0x2492492 < uVar13) {
      uVar15 = 0;
LAB_0119ecb4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar15,iVar12);
    }
    iVar12 = uVar13 * 0x38;
    if (iVar12 == 0) {
      iVar19 = 8;
      uVar13 = 0;
    }
    else {
      uVar15 = 8;
      iVar19 = FUN_01298504(iVar12,8);
      if (iVar19 == 0) goto LAB_0119ecb4;
    }
    piVar10 = (int *)param_2[0xf];
    param_2[0x15] = iVar19;
    piVar16 = piVar10 + param_2[0x10] * 2;
    param_2[0x14] = uVar13;
    param_2[0x16] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[0x1c] = (int)piVar10;
    param_2[0x1d] = (int)piVar10;
    param_2[0x1e] = param_2[0xe];
    param_2[0x1f] = (int)piVar16;
    while (piVar10 != piVar16) {
      iVar19 = *piVar10;
      iVar12 = piVar10[1];
      param_2[0x1d] = (int)(piVar10 + 2);
      param_2[0x1a] = iVar19;
      param_2[0x17] = (int)(param_2 + 0x14);
      param_2[0x18] = iVar19;
      param_2[0x19] = iVar12;
      param_2[0x1b] = iVar12;
LAB_0119f28c:
      (**(code **)(iVar12 + 0xc))(&local_e8,iVar19,param_3);
      ppppuVar21 = local_d0;
      ppppuVar2 = local_d4;
      ppppuVar9 = local_d8;
      local_258 = local_dc;
      local_254 = local_e0;
      ppppuVar4 = local_e8;
      if (local_e8 == (undefined4 ****)0x2) {
        uVar3 = 4;
        goto LAB_0119f434;
      }
      local_25c = local_e4;
      local_250 = local_d8;
      local_24c = local_d4;
      local_a8 = local_cc;
      ppppuStack_a4 = local_c8;
      ppppuStack_a0 = local_c4;
      ppppuStack_9c = local_c0;
      local_98 = local_bc;
      ppppuStack_94 = ppppuStack_b8;
      ppppuStack_90 = ppppuStack_b4;
      ppppuStack_8c = ppppuStack_b0;
      ppppuStack_88 = ppppuStack_ac;
      FUN_01139b38(param_2[0x1a],param_2[0x1b]);
      if (((uint)ppppuVar4 & 1) != 0) {
        local_48 = local_a8;
        ppppuStack_44 = ppppuStack_a4;
        ppppuStack_40 = ppppuStack_a0;
        local_3c = ppppuStack_9c;
        local_38 = local_98;
        ppppuStack_34 = ppppuStack_94;
        ppppuStack_30 = ppppuStack_90;
        ppppuStack_2c = ppppuStack_8c;
        ppppuStack_28 = ppppuStack_88;
        FUN_009495dc(param_2 + 0x1c);
        FUN_007bc140(param_2 + 0x14);
        goto LAB_0119e870;
      }
      local_70 = ppppuVar21;
      local_74 = ppppuVar2;
      local_78 = ppppuVar9;
      local_7c = local_258;
      local_80 = local_254;
      local_6c = local_a8;
      ppppuStack_68 = ppppuStack_a4;
      ppppuStack_64 = ppppuStack_a0;
      ppppuStack_60 = ppppuStack_9c;
      local_5c = local_98;
      ppppuStack_58 = ppppuStack_94;
      ppppuStack_54 = ppppuStack_90;
      ppppuStack_50 = ppppuStack_8c;
      ppppuStack_4c = ppppuStack_88;
      piVar16 = (int *)param_2[0x17];
      iVar19 = piVar16[2];
      if (iVar19 == *piVar16) {
        FUN_006e4ec8(piVar16);
      }
      puVar7 = (undefined4 *)(piVar16[1] + iVar19 * 0x38);
      *puVar7 = local_254;
      puVar7[2] = ppppuVar9;
      puVar7[3] = ppppuVar2;
      puVar7[1] = local_258;
      puVar7[4] = ppppuVar21;
      puVar7[5] = local_a8;
      puVar7[6] = ppppuStack_a4;
      puVar7[7] = ppppuStack_a0;
      puVar7[8] = ppppuStack_9c;
      puVar7[9] = local_98;
      puVar7[10] = ppppuStack_94;
      puVar7[0xb] = ppppuStack_90;
      puVar7[0xc] = ppppuStack_8c;
      puVar7[0xd] = ppppuStack_88;
      piVar16[2] = iVar19 + 1;
      piVar16 = (int *)param_2[0x1f];
      piVar10 = (int *)param_2[0x1d];
    }
    param_2[0x18] = 0;
    FUN_009495dc(param_2 + 0x1c);
    local_f8 = (undefined4 ****)param_2[0x14];
    local_f4 = (undefined4 ****)param_2[0x15];
    local_f0 = (undefined4 ****)param_2[0x16];
LAB_0119f3dc:
    FUN_006cac18(&local_e8,&local_f8);
    local_254 = local_e8;
    bVar1 = false;
    local_258 = local_e4;
    local_24c = local_dc;
    local_48 = local_d4;
    ppppuStack_44 = local_d0;
    ppppuStack_40 = local_cc;
    local_3c = local_c8;
    local_38 = local_c4;
    ppppuStack_34 = local_c0;
    ppppuStack_30 = local_bc;
    *(undefined1 *)(param_2 + 0x13) = 0;
    ppppuVar21 = local_d8;
    param_3 = local_e0;
    break;
  case '\x06':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2d]) {
    case '\0':
      piVar10 = (int *)param_2[0x2a];
      piVar16 = (int *)param_2[0x2b];
      iVar12 = param_2[0x2c];
      goto LAB_0119e700;
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
      iVar19 = param_2[0x26];
      piVar16 = (int *)param_2[0x27];
      goto LAB_0119e720;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d74);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d74);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      piVar16 = (int *)param_2[0x22];
      iVar19 = param_2[0x23];
      goto LAB_0119e73c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x4d)) {
    case 0:
      piVar16 = (int *)param_2[0x11];
      iVar19 = param_2[0x12];
      bVar17 = *(byte *)((int)param_2 + 0x4e);
      goto LAB_0119e754;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      iVar19 = param_2[0x1a];
      iVar12 = param_2[0x1b];
      goto LAB_0119f28c;
    }
switchD_0119ee18_caseD_3:
    FUN_009ecbe0(&local_e8,param_2 + 0x14,param_3);
    ppppuVar21 = local_d4;
    ppppuVar9 = local_dc;
    local_258 = local_e0;
    local_254 = local_e4;
    ppppuVar4 = local_e8;
    if (local_e8 == (undefined4 ****)&DAT_00000003) {
      uVar3 = 3;
LAB_0119f434:
      local_264 = param_2 + 0x29;
      local_268 = param_2 + 0x24;
      local_26c = (undefined1 *)((int)param_2 + 0x4d);
      local_260 = param_2 + 0x2d;
      *local_26c = uVar3;
      *(undefined1 *)local_268 = 3;
      *(undefined1 *)local_264 = 3;
      *(undefined1 *)local_260 = 3;
      *param_1 = 2;
      uVar3 = 6;
      goto LAB_0119ec90;
    }
    local_25c = local_e8;
    local_250 = local_dc;
    local_24c = local_d8;
    local_120 = local_d0;
    ppppuStack_11c = local_cc;
    ppppuStack_118 = local_c8;
    ppppuStack_114 = local_c4;
    local_110 = local_c0;
    ppppuStack_10c = local_bc;
    ppppuStack_108 = ppppuStack_b8;
    ppppuStack_104 = ppppuStack_b4;
    ppppuStack_100 = ppppuStack_b0;
    FUN_011928d4(param_2 + 0x14);
    if (ppppuVar4 == (undefined4 ****)0x2) {
      local_f8 = local_254;
      local_f4 = local_258;
      local_f0 = ppppuVar9;
      goto LAB_0119f3dc;
    }
    local_48 = local_120;
    ppppuStack_44 = ppppuStack_11c;
    ppppuStack_40 = ppppuStack_118;
    local_3c = ppppuStack_114;
    local_38 = local_110;
    ppppuStack_34 = ppppuStack_10c;
    ppppuStack_30 = ppppuStack_108;
    ppppuStack_2c = ppppuStack_104;
    ppppuStack_28 = ppppuStack_100;
LAB_0119e870:
    if ((char)param_2[0x13] != '\0') {
      FUN_00b7d620(param_2 + 0xe);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_3 = local_250;
    break;
  case '\a':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar12 = param_2[5];
LAB_0119e5e4:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar12;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d54);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d54);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d54);
      }
      iVar19 = param_2[6];
    }
    piVar5 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar10 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    piVar16 = param_2 + 4;
    *piVar16 = iVar19 + 0x10;
    iVar12 = piVar5[4];
    iVar22 = piVar5[5];
    iVar20 = piVar5[6];
    iVar18 = piVar5[7];
    iVar19 = piVar5[8];
    iVar11 = piVar5[1];
    iVar14 = piVar5[2];
    iVar23 = piVar5[3];
    *piVar10 = *piVar5;
    param_2[6] = iVar11;
    param_2[7] = iVar14;
    param_2[8] = iVar23;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar22;
    param_2[0xb] = iVar20;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar12 = piVar5[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)piVar16;
    param_2[0xf] = (int)piVar10;
    param_2[0x10] = iVar12;
LAB_0119ebd4:
    iVar19 = *piVar16;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar19;
    param_2[0x12] = (int)piVar10;
    param_2[0x13] = iVar12;
    goto LAB_0119ebec;
  case '\b':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      piVar16 = (int *)param_2[0xe];
      piVar10 = (int *)param_2[0xf];
      iVar12 = param_2[0x10];
      goto LAB_0119ebd4;
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
      iVar19 = param_2[0x11];
    }
LAB_0119ebec:
    FUN_006666fc(&local_e8,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
    ppppuVar9 = apppuStack_1d0;
LAB_0119ec14:
    ppppuVar21 = (undefined4 ****)0x80000002;
    *ppppuVar9 = local_d4;
    ppppuVar9[1] = local_d0;
    ppppuVar9[2] = local_cc;
    ppppuVar4 = ppppuVar9 + 3;
    local_24c = local_dc;
    param_3 = local_e0;
    local_258 = local_e4;
    local_254 = local_e8;
    goto LAB_0119ec2c;
  case '\t':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[9]) {
    case '\0':
      iVar19 = param_2[4];
      iVar12 = param_2[5];
LAB_0119e4ec:
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 8) = 0;
      param_2[7] = iVar12;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20d54);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20d54);
    case '\x03':
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20d54);
      }
      iVar19 = param_2[6];
    }
    local_248 = param_2 + 4;
    piVar10 = (int *)param_2[2];
    *(undefined1 *)(param_2 + 9) = 1;
    piVar16 = param_2 + 5;
    *(undefined1 *)(param_2 + 8) = 1;
    param_2[4] = iVar19 + 0x1c;
    iVar12 = piVar10[4];
    iVar22 = piVar10[5];
    iVar20 = piVar10[6];
    iVar18 = piVar10[7];
    iVar19 = piVar10[8];
    iVar11 = piVar10[1];
    iVar14 = piVar10[2];
    iVar23 = piVar10[3];
    *piVar16 = *piVar10;
    param_2[6] = iVar11;
    param_2[7] = iVar14;
    param_2[8] = iVar23;
    param_2[9] = iVar12 + 0x20;
    param_2[10] = iVar22;
    param_2[0xb] = iVar20;
    param_2[0xc] = iVar18;
    *(char *)(param_2 + 0xd) = (char)iVar19;
    iVar12 = piVar10[4];
    *(undefined1 *)(param_2 + 0x15) = 0;
    param_2[0xe] = (int)local_248;
    param_2[0xf] = (int)piVar16;
    param_2[0x10] = iVar12;
LAB_0119e9e4:
    iVar19 = *local_248;
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x11] = iVar19;
    param_2[0x12] = (int)piVar16;
    param_2[0x13] = iVar12;
    goto LAB_0119e9fc;
  case '\n':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x15]) {
    case '\0':
      local_248 = (int *)param_2[0xe];
      piVar16 = (int *)param_2[0xf];
      iVar12 = param_2[0x10];
      goto LAB_0119e9e4;
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
      iVar19 = param_2[0x11];
    }
LAB_0119e9fc:
    FUN_006666fc(&local_e8,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
    ppppuVar9 = local_1b0;
    goto LAB_0119ec14;
  }
  local_248 = param_2 + 0xe;
  local_260 = param_2 + 0x2d;
  local_264 = param_2 + 0x29;
  local_268 = param_2 + 0x24;
  local_26c = (undefined1 *)((int)param_2 + 0x4d);
  local_220 = local_48;
  ppppuStack_21c = ppppuStack_44;
  ppppuStack_218 = ppppuStack_40;
  ppppuStack_214 = local_3c;
  local_210 = local_38;
  ppppuStack_20c = ppppuStack_34;
  ppppuStack_208 = ppppuStack_30;
  ppppuStack_204 = ppppuStack_2c;
  ppppuStack_200 = ppppuStack_28;
  *local_26c = 1;
  FUN_01192a14(local_248);
  *(undefined1 *)local_268 = 1;
  *(undefined1 *)local_264 = 1;
  *(undefined1 *)local_260 = 1;
  if (!bVar1) {
    ppppuVar4 = local_1ec;
  }
  else {
    ppppuStack_174 = ppppuStack_204;
    ppppuStack_170 = ppppuStack_200;
    ppppuVar4 = local_25c;
  }
  ppppuStack_178 = ppppuStack_208;
  ppppuStack_17c = ppppuStack_20c;
  local_180 = local_210;
  local_184 = ppppuStack_214;
  ppppuStack_188 = ppppuStack_218;
  ppppuStack_18c = ppppuStack_21c;
  local_190 = local_220;
  uVar13 = (uint)bVar1;
LAB_0119ec5c:
  param_1[1] = (uint)ppppuVar4;
  param_1[2] = (uint)local_254;
  *param_1 = uVar13;
  param_1[3] = (uint)local_258;
  param_1[4] = (uint)param_3;
  param_1[5] = (uint)local_24c;
  param_1[6] = (uint)ppppuVar21;
  param_1[7] = (uint)local_190;
  param_1[8] = (uint)ppppuStack_18c;
  param_1[9] = (uint)ppppuStack_188;
  param_1[10] = (uint)local_184;
  param_1[0xb] = (uint)local_180;
  param_1[0xc] = (uint)ppppuStack_17c;
  param_1[0xd] = (uint)ppppuStack_178;
  param_1[0xe] = (uint)ppppuStack_174;
  param_1[0xf] = (uint)ppppuStack_170;
  uVar3 = 1;
LAB_0119ec90:
  *(undefined1 *)(param_2 + 3) = uVar3;
  return;
}

