// FUN_00f88f94 @ 00f88f94 size=1296 calls_out=10 calls_in=1
// strings: 

void FUN_00f88f94(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined4 *extraout_r12_01;
  undefined4 *puVar13;
  uint local_1b0;
  uint local_1ac;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar5 = param_1 + 0xe;
  piVar11 = (int *)(param_2 + 0xc0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb8)) {
  case 0:
    *(undefined2 *)(param_2 + 0xb9) = 0x101;
    puVar13 = *(undefined4 **)(param_2 + 0xb0);
    *(int *)(param_2 + 0xc0) = param_2;
    *(undefined1 *)(param_2 + 200) = 0;
    *(undefined4 **)(param_2 + 0xc4) = puVar13;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d058);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d058);
  case 3:
    if (*(char *)(param_2 + 200) != '\0') {
      if (*(char *)(param_2 + 200) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar13 = *(undefined4 **)(param_2 + 0xc4);
    break;
  case 4:
    goto switchD_00f88fb8_caseD_4;
  case 5:
    if (*(char *)(param_2 + 200) != '\0') {
      if (*(char *)(param_2 + 200) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1ab00);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1ab00);
    }
    iVar10 = *(int *)(param_2 + 0xc0);
    goto LAB_00f89248;
  case 6:
    if (*(char *)(param_2 + 0x154) != '\0') {
      if (*(char *)(param_2 + 0x154) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c226b0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c226b0);
    }
    goto LAB_00f89334;
  }
  piVar4 = (int *)*puVar13;
  do {
    iVar10 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf894d0);
    (*pcVar1)();
  }
  *(int **)(param_2 + 0xb4) = piVar4;
  *(undefined1 *)(param_2 + 200) = 1;
  *(int *)(param_2 + 0xc0) = param_2;
  *(undefined1 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xb0);
switchD_00f88fb8_caseD_4:
  FUN_00f89748(&local_130,piVar11);
  if ((local_130 & 0xffff) == 3) {
    uVar3 = 4;
    *piVar5 = 4;
    param_1[0xf] = 0;
    goto LAB_00f89448;
  }
  local_110 = local_124;
  uStack_10c = uStack_120;
  uStack_108 = uStack_11c;
  uStack_104 = uStack_118;
  uStack_100 = uStack_114;
  if ((local_130 & 0xffff) == 2) {
    FUN_0070821c(&local_180);
    uVar7 = local_178;
    if (local_180 == 3 && local_17c == 0) goto LAB_00f891f4;
    local_1b0 = local_17c;
    local_1ac = local_180;
    local_194 = local_168;
    uStack_190 = uStack_164;
    uStack_18c = uStack_160;
    uStack_188 = uStack_15c;
    local_f8 = local_158;
    uStack_f4 = uStack_154;
    uStack_f0 = uStack_150;
    uStack_ec = uStack_14c;
    uStack_e8 = uStack_148;
    local_e4 = local_144;
    uStack_e0 = uStack_140;
    uStack_dc = uStack_13c;
    uStack_d8 = uStack_138;
    uStack_d4 = uStack_134;
    puVar13 = &local_194;
    local_68 = local_174;
    uStack_64 = local_170;
    uStack_60 = local_16c;
    local_5c = local_168;
    uStack_58 = uStack_164;
    uStack_54 = uStack_160;
    uStack_50 = uStack_15c;
    local_4c = local_158;
    uStack_48 = uStack_154;
    uStack_44 = uStack_150;
    uStack_40 = uStack_14c;
    uStack_3c = uStack_148;
    local_38 = local_144;
    uStack_34 = uStack_140;
    uStack_30 = uStack_13c;
    uStack_2c = uStack_138;
    uStack_28 = uStack_134;
    piVar11 = *(int **)(param_2 + 0xb4);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_2 + 0xb4));
      puVar13 = extraout_r12;
    }
    if (*(char *)(param_2 + 0xba) != '\0') {
      FUN_01839f10(param_2);
      puVar13 = extraout_r12_00;
    }
    iVar12 = 0;
    iVar10 = 3;
    if (*(char *)(param_2 + 0xb9) != '\0') {
      FUN_00b19860(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
      puVar13 = extraout_r12_01;
    }
  }
  else {
    local_170 = local_128;
    local_174 = local_12c;
    local_178 = local_130;
    local_16c = local_124;
    local_168 = uStack_120;
    uStack_164 = uStack_11c;
    uStack_160 = uStack_118;
    uStack_15c = uStack_114;
LAB_00f891f4:
    local_194 = local_168;
    uStack_190 = uStack_164;
    uStack_18c = uStack_160;
    uStack_188 = uStack_15c;
    *(uint *)(param_2 + 0x90) = local_178;
    *(uint *)(param_2 + 0x94) = local_174;
    *(uint *)(param_2 + 0x98) = local_170;
    *(undefined4 *)(param_2 + 0x9c) = local_16c;
    *(undefined4 *)(param_2 + 0xa0) = local_168;
    *(undefined4 *)(param_2 + 0xa4) = uStack_164;
    *(undefined4 *)(param_2 + 0xa8) = uStack_160;
    *(undefined4 *)(param_2 + 0xac) = uStack_15c;
    *(undefined1 *)(param_2 + 200) = 0;
    *(int *)(param_2 + 0xc0) = param_2;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0xb0);
    iVar10 = param_2;
LAB_00f89248:
    iVar10 = FUN_011de1f0(*(undefined4 *)(iVar10 + 0x80));
    if (iVar10 == 0) {
      uVar7 = 0;
      local_174 = local_174 & 0xffffff00;
      local_130 = 1;
      local_12c = 0;
      *(undefined1 *)(param_2 + 200) = 1;
    }
    else {
      FUN_006666fc(&local_180,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      local_174 = CONCAT31(local_174._1_3_,*(undefined1 *)(iVar10 + 0xc));
      local_130 = local_17c;
      local_12c = local_178;
      *(undefined1 *)(param_2 + 200) = 1;
      uVar7 = local_180;
      if (local_180 == 0x80000000) {
        *piVar5 = 4;
        param_1[0xf] = 0;
        uVar3 = 5;
        goto LAB_00f89448;
      }
    }
    local_180 = local_130;
    local_17c = local_12c;
    local_178 = local_174;
    *(uint *)(param_2 + 0x158) = uVar7;
    *(uint *)(param_2 + 0x15c) = local_130;
    *(uint *)(param_2 + 0x160) = local_12c;
    *(uint *)(param_2 + 0x164) = local_174;
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar8 = *(undefined4 *)(param_2 + 0x8c);
    uVar9 = *(undefined4 *)(param_2 + 0xb0);
    *(undefined2 *)(param_2 + 0xb9) = 0;
    local_128 = local_174;
    FUN_01bed4e2(piVar11,param_2,0x88);
    *(undefined1 *)(param_2 + 0x154) = 0;
    *(undefined4 *)(param_2 + 0x148) = uVar6;
    *(undefined4 *)(param_2 + 0x14c) = uVar8;
    *(undefined4 *)(param_2 + 0x150) = uVar9;
LAB_00f89334:
    iVar10 = *piVar11;
    iVar12 = *(int *)(param_2 + 0xc4);
    local_1ac = *(uint *)(param_2 + 200);
    local_1b0 = *(uint *)(param_2 + 0xcc);
    *(undefined1 *)(param_2 + 0x154) = 1;
    if (iVar10 == 3 && iVar12 == 0) {
      *piVar5 = 4;
      param_1[0xf] = 0;
      uVar3 = 6;
      goto LAB_00f89448;
    }
    uVar7 = *(uint *)(param_2 + 0xd0);
    FUN_01bed4e2(&local_68,param_2 + 0xd4,0x44);
    local_a0 = *(undefined4 *)(param_2 + 0x118);
    uStack_9c = *(undefined4 *)(param_2 + 0x11c);
    uStack_98 = *(undefined4 *)(param_2 + 0x120);
    uStack_94 = *(undefined4 *)(param_2 + 0x124);
    local_90 = *(undefined4 *)(param_2 + 0x128);
    uStack_8c = *(undefined4 *)(param_2 + 300);
    uStack_88 = *(undefined4 *)(param_2 + 0x130);
    uStack_84 = *(undefined4 *)(param_2 + 0x134);
    uStack_80 = *(undefined4 *)(param_2 + 0x138);
    local_7c = *(undefined4 *)(param_2 + 0x13c);
    uStack_78 = *(undefined4 *)(param_2 + 0x140);
    uStack_74 = *(undefined4 *)(param_2 + 0x144);
    uStack_70 = *(undefined4 *)(param_2 + 0x148);
    uStack_6c = *(undefined4 *)(param_2 + 0x14c);
    puVar13 = *(undefined4 **)(param_2 + 0xb4);
    local_c0 = *(undefined4 *)(param_2 + 0x90);
    uStack_bc = *(undefined4 *)(param_2 + 0x94);
    local_b8 = *(undefined4 *)(param_2 + 0x98);
    uStack_b4 = *(undefined4 *)(param_2 + 0x9c);
    local_b0 = *(undefined4 *)(param_2 + 0xa0);
    uStack_ac = *(undefined4 *)(param_2 + 0xa4);
    uStack_a8 = *(undefined4 *)(param_2 + 0xa8);
    uStack_a4 = *(undefined4 *)(param_2 + 0xac);
    local_d0 = *(undefined4 *)(param_2 + 0x158);
    uStack_cc = *(undefined4 *)(param_2 + 0x15c);
    uStack_c8 = *(undefined4 *)(param_2 + 0x160);
    uStack_c4 = *(undefined4 *)(param_2 + 0x164);
  }
  *param_1 = local_d0;
  param_1[1] = uStack_cc;
  param_1[2] = uStack_c8;
  param_1[3] = uStack_c4;
  param_1[4] = local_c0;
  param_1[5] = uStack_bc;
  param_1[6] = local_b8;
  param_1[7] = uStack_b4;
  param_1[8] = local_b0;
  param_1[9] = uStack_ac;
  param_1[10] = uStack_a8;
  param_1[0xb] = uStack_a4;
  *piVar5 = iVar10;
  param_1[0xf] = iVar12;
  param_1[0x10] = local_1ac;
  param_1[0x11] = local_1b0;
  param_1[0xc] = puVar13;
  param_1[0x12] = uVar7;
  FUN_01bed4e2(param_1 + 0x13,&local_68,0x44);
  param_1[0x24] = local_a0;
  param_1[0x25] = uStack_9c;
  param_1[0x26] = uStack_98;
  param_1[0x27] = uStack_94;
  param_1[0x28] = local_90;
  param_1[0x29] = uStack_8c;
  param_1[0x2a] = uStack_88;
  param_1[0x2b] = uStack_84;
  param_1[0x2c] = uStack_80;
  param_1[0x2d] = local_7c;
  param_1[0x2e] = uStack_78;
  param_1[0x2f] = uStack_74;
  param_1[0x30] = uStack_70;
  param_1[0x31] = uStack_6c;
  uVar3 = 1;
LAB_00f89448:
  *(undefined1 *)(param_2 + 0xb8) = uVar3;
  return;
}

