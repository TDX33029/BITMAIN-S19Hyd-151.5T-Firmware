// FUN_008c9304 @ 008c9304 size=1868 calls_out=16 calls_in=1
// strings: 

void FUN_008c9304(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  uint unaff_r4;
  byte bVar11;
  uint uVar12;
  undefined1 *unaff_r10;
  uint unaff_r11;
  uint local_244;
  undefined1 *local_240;
  undefined4 *local_238;
  undefined4 *local_234;
  uint local_230;
  uint local_228;
  uint local_224;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint local_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint local_1c0 [4];
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint local_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint local_18c;
  uint local_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint local_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x20)) {
  case 0:
    piVar10 = (int *)param_2[0x1c];
    uVar9 = param_2[0x1d];
    param_2[0x1f] = uVar9;
    if (*piVar10 != 2 || piVar10[1] != 0) {
      *(undefined1 *)(param_2 + 0x1b) = 0;
      param_2[0x18] = piVar10;
      param_2[0x19] = uVar9;
      param_2[0x1a] = param_2[0x1e];
LAB_008c93b8:
      *(undefined1 *)(param_2 + 0x16) = 0;
      param_2[0x14] = uVar9;
      param_2[0x15] = piVar10;
LAB_008c93cc:
      bVar11 = 1;
      *(undefined2 *)((int)param_2 + 0x15) = 0x100;
      param_2[3] = uVar9;
      param_2[4] = piVar10;
LAB_008c93e8:
      *param_2 = 0;
      param_2[1] = 4;
      param_2[2] = 0;
      *(undefined1 *)(param_2 + 5) = 1;
      FUN_007cbc08(&local_f8,param_2,uVar9,piVar10);
      if (local_f8 != 2) {
        local_228 = local_f8;
        puVar5 = (uint *)((uint)&local_f8 | 4);
        local_30 = *puVar5;
        uStack_2c = puVar5[1];
        uStack_28 = puVar5[2];
        local_224 = local_e8;
        local_230 = local_e4;
        local_50 = local_e0;
        uStack_4c = local_dc;
        uStack_48 = local_d8;
        local_44 = local_d4;
        uStack_40 = local_d0;
        uStack_3c = uStack_cc;
        uStack_38 = uStack_c8;
        local_244 = local_c0;
        local_240 = (undefined1 *)local_c4;
        goto LAB_008c94d0;
      }
      if ((bVar11 & 1) != 0) {
        *(undefined1 *)(param_2 + 5) = 0;
        local_148 = *param_2;
        uStack_144 = param_2[1];
        uStack_140 = param_2[2];
        FUN_009ec520(&local_f8);
        local_180 = local_f8;
        uStack_17c = local_f4;
        uStack_178 = local_f0;
        uStack_174 = local_ec;
        local_170 = local_e8;
        uStack_16c = local_e4;
        uStack_168 = local_e0;
        uStack_164 = local_dc;
        uStack_160 = local_d8;
        local_15c = local_d4;
        uStack_158 = local_d0;
        uStack_154 = uStack_cc;
        uStack_150 = uStack_c8;
        uStack_14c = local_c4;
        param_2[6] = local_f8;
        param_2[7] = local_f4;
        param_2[8] = local_f0;
        param_2[9] = local_ec;
        param_2[10] = local_e8;
        param_2[0xb] = local_e4;
        param_2[0xc] = local_e0;
        param_2[0xd] = local_dc;
        param_2[0xe] = local_d8;
        param_2[0xf] = local_d4;
        param_2[0x10] = local_d0;
        param_2[0x11] = uStack_cc;
        param_2[0x12] = uStack_c8;
        param_2[0x13] = local_c4;
        goto switchD_008c96a8_caseD_3;
      }
      uVar12 = param_2[2];
      if (0x2492492 < uVar12) {
        uVar9 = 0;
LAB_008c9680:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,unaff_r4);
      }
      unaff_r4 = uVar12 * 0x38;
      if (unaff_r4 == 0) {
        iVar6 = 8;
        uVar12 = 0;
      }
      else {
        uVar9 = 8;
        iVar6 = FUN_01298504(unaff_r4,8);
        if (iVar6 == 0) goto LAB_008c9680;
      }
      puVar8 = (undefined4 *)param_2[1];
      param_2[7] = iVar6;
      puVar7 = puVar8 + param_2[2] * 2;
      param_2[6] = uVar12;
      param_2[8] = 0;
      *(undefined1 *)(param_2 + 5) = 0;
      param_2[0xe] = puVar8;
      param_2[0xf] = puVar8;
      param_2[0x10] = *param_2;
      param_2[0x11] = puVar7;
      while (puVar8 != puVar7) {
        uVar9 = *puVar8;
        iVar6 = puVar8[1];
        param_2[0xf] = puVar8 + 2;
        param_2[0xc] = uVar9;
        param_2[9] = param_2 + 6;
        param_2[10] = uVar9;
        param_2[0xb] = iVar6;
        param_2[0xd] = iVar6;
LAB_008c9978:
        (**(code **)(iVar6 + 0xc))(&local_f8,uVar9,param_3);
        uVar3 = local_bc;
        local_240 = (undefined1 *)local_c0;
        local_230 = local_e0;
        uVar2 = local_e4;
        uVar12 = local_f8;
        if (local_f8 == 2) {
          uVar4 = 4;
          goto LAB_008c9b28;
        }
        local_228 = local_f4;
        local_98 = local_f0;
        uStack_94 = local_ec;
        uStack_90 = local_e8;
        local_224 = local_e4;
        local_b8 = local_dc;
        uStack_b4 = local_d8;
        uStack_b0 = local_d4;
        local_ac = local_d0;
        uStack_a8 = uStack_cc;
        uStack_a4 = uStack_c8;
        uStack_a0 = local_c4;
        FUN_01139b38(param_2[0xc],param_2[0xd]);
        if ((uVar12 & 1) != 0) {
          local_30 = local_98;
          uStack_2c = uStack_94;
          uStack_28 = uStack_90;
          local_50 = local_b8;
          uStack_4c = uStack_b4;
          uStack_48 = uStack_b0;
          local_44 = local_ac;
          uStack_40 = uStack_a8;
          uStack_3c = uStack_a4;
          uStack_38 = uStack_a0;
          FUN_009495dc(param_2 + 0xe);
          FUN_007bc140(param_2 + 6);
          local_244 = uVar3;
          goto LAB_008c94d0;
        }
        local_88 = local_98;
        uStack_84 = uStack_94;
        uStack_80 = uStack_90;
        local_7c = uVar2;
        local_78 = local_230;
        local_74 = local_b8;
        uStack_70 = uStack_b4;
        uStack_6c = uStack_b0;
        local_68 = local_ac;
        uStack_64 = uStack_a8;
        uStack_60 = uStack_a4;
        uStack_5c = uStack_a0;
        piVar10 = (int *)param_2[9];
        local_54 = uVar3;
        local_58 = (uint)local_240;
        iVar6 = piVar10[2];
        if (iVar6 == *piVar10) {
          FUN_006e4ec8(piVar10);
        }
        puVar5 = (uint *)(piVar10[1] + iVar6 * 0x38);
        *puVar5 = local_98;
        puVar5[1] = uStack_94;
        puVar5[2] = uStack_90;
        puVar5[3] = uVar2;
        puVar5[4] = local_230;
        puVar5[5] = local_b8;
        puVar5[6] = uStack_b4;
        puVar5[7] = uStack_b0;
        puVar5[8] = local_ac;
        puVar5[9] = uStack_a8;
        puVar5[10] = uStack_a4;
        puVar5[0xb] = uStack_a0;
        puVar5[0xc] = (uint)local_240;
        puVar5[0xd] = uVar3;
        piVar10[2] = iVar6 + 1;
        puVar7 = (undefined4 *)param_2[0x11];
        puVar8 = (undefined4 *)param_2[0xf];
      }
      param_2[10] = 0;
      FUN_009495dc(param_2 + 0xe);
      local_108 = param_2[6];
      uStack_104 = param_2[7];
      uStack_100 = param_2[8];
LAB_008c9ad4:
      local_240 = (undefined1 *)((int)param_2 + 0x15);
      FUN_006cac18(&local_f8,&local_108);
      bVar1 = false;
      local_30 = local_f8;
      uStack_2c = local_f4;
      uStack_28 = local_f0;
      local_230 = local_e8;
      local_50 = local_e4;
      uStack_4c = local_e0;
      uStack_48 = local_dc;
      local_44 = local_d8;
      uStack_40 = local_d4;
      uStack_3c = local_d0;
      uStack_38 = uStack_cc;
      *(undefined1 *)(param_2 + 5) = 0;
      param_3 = local_ec;
      goto LAB_008c94f8;
    }
    local_230 = 0x80000000;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21c3c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21c3c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1b)) {
    case 0:
      piVar10 = (int *)param_2[0x18];
      uVar9 = param_2[0x19];
      goto LAB_008c93b8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c10784);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c10784);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      uVar9 = param_2[0x14];
      piVar10 = (int *)param_2[0x15];
      goto LAB_008c93cc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x15)) {
    case 0:
      uVar9 = param_2[3];
      piVar10 = (int *)param_2[4];
      bVar11 = *(byte *)((int)param_2 + 0x16);
      goto LAB_008c93e8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar9 = param_2[0xc];
      iVar6 = param_2[0xd];
      goto LAB_008c9978;
    }
switchD_008c96a8_caseD_3:
    FUN_009ecbe0(&local_f8,param_2 + 6,param_3);
    local_224 = local_e8;
    uVar12 = local_f8;
    if (local_f8 == 3) {
      uVar4 = 3;
LAB_008c9b28:
      local_234 = param_2 + 0x1b;
      local_238 = param_2 + 0x16;
      local_240 = (undefined1 *)((int)param_2 + 0x15);
      *local_240 = uVar4;
      uVar4 = 3;
      *(undefined1 *)local_234 = 3;
      *(undefined1 *)local_238 = 3;
      *param_1 = 2;
      goto LAB_008c962c;
    }
    local_228 = local_f8;
    puVar5 = (uint *)((uint)&local_f8 | 4);
    local_118 = *puVar5;
    uStack_114 = puVar5[1];
    uStack_110 = puVar5[2];
    local_230 = local_e4;
    local_138 = local_e0;
    uStack_134 = local_dc;
    uStack_130 = local_d8;
    local_12c = local_d4;
    uStack_128 = local_d0;
    uStack_124 = uStack_cc;
    uStack_120 = uStack_c8;
    FUN_00ba64b4(param_2 + 6);
    if (uVar12 == 2) {
      local_108 = local_118;
      uStack_104 = uStack_114;
      uStack_100 = uStack_110;
      goto LAB_008c9ad4;
    }
    local_50 = local_138;
    uStack_4c = uStack_134;
    uStack_48 = uStack_130;
    local_44 = local_12c;
    uStack_40 = uStack_128;
    uStack_3c = uStack_124;
    uStack_38 = uStack_120;
    local_30 = local_118;
    uStack_2c = uStack_114;
    uStack_28 = uStack_110;
    local_244 = local_c0;
    local_240 = (undefined1 *)local_c4;
LAB_008c94d0:
    if (*(char *)(param_2 + 5) != '\0') {
      FUN_00b7d620(param_2);
    }
    bVar1 = true;
    *(undefined1 *)(param_2 + 5) = 0;
    param_3 = local_224;
LAB_008c94f8:
    uStack_1c8 = uStack_28;
    uStack_1cc = uStack_2c;
    local_1d0 = local_30;
    uStack_1d8 = uStack_38;
    uStack_1dc = uStack_3c;
    uStack_1e0 = uStack_40;
    local_1e4 = local_44;
    uStack_1e8 = uStack_48;
    uStack_1ec = uStack_4c;
    local_1f0 = local_50;
    local_234 = param_2 + 0x1b;
    local_238 = param_2 + 0x16;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    FUN_00ba638c(param_2);
    *(undefined1 *)local_234 = 1;
    *(undefined1 *)local_238 = 1;
    unaff_r4 = local_244;
    unaff_r10 = local_240;
    unaff_r11 = local_228;
    if (bVar1) {
      local_1c0[0] = local_228;
      puVar5 = (uint *)((uint)local_1c0 | 4);
      *puVar5 = local_1d0;
      puVar5[1] = uStack_1cc;
      puVar5[2] = uStack_1c8;
      local_1ac = local_230;
      local_1a8 = local_1f0;
      uStack_1a4 = uStack_1ec;
      uStack_1a0 = uStack_1e8;
      local_19c = local_1e4;
      uStack_198 = uStack_1e0;
      uStack_194 = uStack_1dc;
      uStack_190 = uStack_1d8;
      local_230 = 0x80000000;
      local_188 = local_244;
      local_18c = (uint)local_240;
      local_1b0 = param_3;
      FUN_00a20afc(*(undefined4 *)(param_2[0x1f] + 0x18));
    }
  }
  *param_1 = 0;
  param_1[1] = unaff_r11;
  param_1[2] = local_1d0;
  param_1[3] = uStack_1cc;
  param_1[4] = uStack_1c8;
  param_1[5] = param_3;
  param_1[6] = local_230;
  param_1[7] = local_1f0;
  param_1[8] = uStack_1ec;
  param_1[9] = uStack_1e8;
  param_1[10] = local_1e4;
  param_1[0xb] = uStack_1e0;
  param_1[0xc] = uStack_1dc;
  param_1[0xd] = uStack_1d8;
  uVar4 = 1;
  param_1[0xe] = unaff_r10;
  param_1[0xf] = unaff_r4;
LAB_008c962c:
  *(undefined1 *)(param_2 + 0x20) = uVar4;
  return;
}

