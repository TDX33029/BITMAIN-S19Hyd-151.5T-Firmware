// FUN_00fbc200 @ 00fbc200 size=1560 calls_out=16 calls_in=0
// strings: background task failed

void FUN_00fbc200(uint *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_2d8;
  int local_2d0;
  undefined1 *local_2cc;
  undefined1 *local_2c8;
  undefined1 *local_2c4;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  undefined1 auStack_208 [216];
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x164)) {
  case 0:
    iVar10 = *(int *)(param_2 + 0x150);
    *(int *)(param_2 + 0x154) = iVar10;
    FUN_01bed93e(param_2,0,0x80);
    *(undefined4 *)(param_2 + 0x80) = 0x6a09e667;
    *(undefined4 *)(param_2 + 0x84) = 0xbb67ae85;
    *(undefined4 *)(param_2 + 0x88) = 0x3c6ef372;
    *(undefined4 *)(param_2 + 0x8c) = 0xa54ff53a;
    *(undefined4 *)(param_2 + 0x90) = 0x510e527f;
    *(undefined4 *)(param_2 + 0x94) = 0x9b05688c;
    *(undefined4 *)(param_2 + 0x98) = 0x1f83d9ab;
    *(undefined4 *)(param_2 + 0x9c) = 0x5be0cd19;
    *(undefined4 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(param_2 + 0xa4) = 0;
    *(undefined4 *)(param_2 + 0xa8) = 0;
    *(undefined4 *)(param_2 + 0xac) = 0;
    *(undefined4 *)(param_2 + 0xb0) = 0;
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
    *(undefined4 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xc0) = 0;
    *(undefined4 *)(param_2 + 0xc4) = 0;
    *(undefined4 *)(param_2 + 0xd0) = 0;
    *(undefined4 **)(param_2 + 200) = &DAT_01d274b0;
    FUN_019afae4(param_2 + 0x158,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
    FUN_015e8ad4(&local_e8,*(undefined4 *)(param_2 + 0x15c),*(undefined4 *)(param_2 + 0x160));
    local_2b8 = local_e8;
    uStack_2b4 = local_e4;
    uStack_2b0 = local_e0;
    FUN_01bed4e2(param_2 + 0xd8,&local_2b8,0x74);
    *(undefined1 *)(param_2 + 0x14c) = 0;
switchD_00fbc2fc_caseD_0:
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined2 *)(param_2 + 0xf0) = 0;
    *(undefined4 *)(param_2 + 0xe8) = 0x1b6;
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined1 *)(param_2 + 0xed) = 1;
    *(undefined1 *)(param_2 + 0xef) = 1;
    *(undefined1 *)(param_2 + 0xf0) = 1;
    puVar6 = (uint *)(param_2 + 0xe4);
    *puVar6 = 0;
    *(undefined1 *)(param_2 + 0x148) = 0;
    *(undefined1 *)(param_2 + 0x14d) = 0;
    *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0xe0);
    *(uint **)(param_2 + 0x100) = puVar6;
LAB_00fbc374:
    *(undefined4 *)(param_2 + 0x104) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_2 + 0x10c) = *(undefined4 *)(param_2 + 0xfc);
    *(undefined1 *)(param_2 + 0x144) = 0;
    *(uint **)(param_2 + 0x110) = puVar6;
LAB_00fbc398:
    *(undefined1 *)(param_2 + 0x145) = 0;
    *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_2 + 0x10c);
    FUN_019afae4(&local_f8,*(undefined4 *)(param_2 + 0x118),*(undefined4 *)(param_2 + 0x11c));
    *(undefined1 *)(param_2 + 0x145) = 1;
    local_dc = *puVar6;
    local_d8 = puVar6[1];
    uStack_d4 = puVar6[2];
    local_d0 = puVar6[3];
    *(undefined1 *)(param_2 + 0x145) = 0;
    local_e8 = local_f8;
    local_e4 = uStack_f4;
    local_e0 = uStack_f0;
    *(uint *)(param_2 + 0x120) = local_f8;
    *(uint *)(param_2 + 0x124) = uStack_f4;
    *(uint *)(param_2 + 0x128) = uStack_f0;
    *(uint *)(param_2 + 300) = local_dc;
    *(uint *)(param_2 + 0x130) = local_d8;
    *(uint *)(param_2 + 0x134) = uStack_d4;
    *(uint *)(param_2 + 0x138) = local_d0;
    *(uint *)(param_2 + 0x13c) = uStack_cc;
    *(undefined1 *)(param_2 + 0x140) = 0;
switchD_00fbc7ac_caseD_0:
    local_70 = *(undefined4 *)(param_2 + 0x120);
    uStack_6c = *(undefined4 *)(param_2 + 0x124);
    uStack_68 = *(undefined4 *)(param_2 + 0x128);
    local_64 = *(undefined4 *)(param_2 + 300);
    uStack_60 = *(undefined4 *)(param_2 + 0x130);
    uStack_5c = *(undefined4 *)(param_2 + 0x134);
    uStack_58 = *(undefined4 *)(param_2 + 0x138);
    uVar3 = FUN_0063115c(&local_70,&DAT_01c230d0);
    *(undefined4 *)(param_2 + 0x13c) = uVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f95c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f95c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x14c)) {
    case 0:
      goto switchD_00fbc2fc_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2046c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2046c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x148)) {
    case 0:
      puVar6 = *(uint **)(param_2 + 0x100);
      goto LAB_00fbc374;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2041c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2041c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x144)) {
    case 0:
      puVar6 = *(uint **)(param_2 + 0x110);
      goto LAB_00fbc398;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2042c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2042c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x140)) {
    case 0:
      goto switchD_00fbc7ac_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c230e0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c230e0);
    case 3:
      uVar3 = *(undefined4 *)(param_2 + 0x13c);
    }
  }
  local_2c4 = (undefined1 *)(param_2 + 0x140);
  local_2c8 = (undefined1 *)(param_2 + 0x148);
  local_2cc = (undefined1 *)(param_2 + 0x14c);
  local_2d0 = param_2 + 0x104;
  local_2d8 = param_2 + 0xd8;
  FUN_00748cc4(&local_40,uVar3,param_3);
  if ((local_40 & 1) == 0) {
    local_50 = local_38;
    local_4c = iStack_34;
    local_48 = uStack_30;
    local_44 = uStack_2c;
    piVar4 = *(int **)(param_2 + 0x13c);
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar1) goto LAB_00fbc508;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00fbc508:
      (**(code **)(piVar4[2] + 0x10))();
    }
    if (local_50 == 0 && local_4c == 0) {
      uVar7 = local_48 >> 8 | local_44 << 0x18;
      local_40 = local_48;
      local_3c = local_44;
    }
    else {
      FUN_019a18a8(&local_40,0x28,"background task failed",0x16);
      FUN_00fb1280(&local_50);
      uVar7 = local_40 >> 8 | local_3c << 0x18;
    }
    uVar8 = local_40 & 0xff;
    *local_2c4 = 1;
    if (uVar8 != 5) {
      FUN_005f53e0(param_2 + 0x120);
      uVar9 = uVar7 >> 0x18 | local_3c & 0xffffff00;
      if (uVar8 == 4) {
        FUN_019e69d4(&local_e8,uVar9);
        local_a8 = local_e0;
        uStack_a4 = local_dc;
        uStack_a0 = local_d8;
        uStack_9c = uStack_d4;
        local_98 = local_d0;
        uStack_94 = uStack_cc;
        uStack_90 = uStack_c8;
        uStack_8c = uStack_c4;
        local_88 = local_c0;
        uStack_84 = uStack_bc;
        uStack_80 = uStack_b8;
        uStack_7c = uStack_b4;
        uStack_78 = uStack_b0;
        uVar7 = local_ac;
        uVar9 = local_e4;
        uVar8 = local_e8;
      }
      else {
        uVar8 = uVar8 | uVar7 << 8;
        uVar7 = 0;
      }
      *(undefined1 *)(param_2 + 0x145) = 0;
      FUN_019bb7e0(*(undefined4 *)(param_2 + 0x114),*(undefined4 *)(param_2 + 0x118));
      *(undefined1 *)(param_2 + 0x144) = 1;
      FUN_005f2078(local_2d0);
      *local_2c8 = 1;
      FUN_005f1364(param_2 + 0xf4);
      *(undefined2 *)(param_2 + 0x14c) = 1;
      local_240 = local_a8;
      uStack_23c = uStack_a4;
      uStack_238 = uStack_a0;
      uStack_234 = uStack_9c;
      local_230 = local_98;
      uStack_22c = uStack_94;
      uStack_228 = uStack_90;
      uStack_224 = uStack_8c;
      local_220 = local_88;
      uStack_21c = uStack_84;
      uStack_218 = uStack_80;
      uStack_214 = uStack_7c;
      uStack_210 = uStack_78;
      FUN_005f0608(local_2d8);
      if (uVar7 == 0) {
        FUN_019bb7e0(*(undefined4 *)(param_2 + 0x158),*(undefined4 *)(param_2 + 0x15c));
        uVar5 = 0x80000000;
      }
      else {
        local_130 = local_240;
        uStack_12c = uStack_23c;
        uStack_128 = uStack_238;
        uStack_124 = uStack_234;
        local_120 = local_230;
        uStack_11c = uStack_22c;
        uStack_118 = uStack_228;
        uStack_114 = uStack_224;
        local_110 = local_220;
        uStack_10c = uStack_21c;
        uStack_108 = uStack_218;
        uStack_104 = uStack_214;
        uStack_100 = uStack_210;
        local_2c4 = *(undefined1 **)(param_2 + 0x15c);
        local_2c8 = *(undefined1 **)(param_2 + 0x160);
        uVar5 = *(uint *)(param_2 + 0x158);
        FUN_01bed4e2(auStack_208,param_2,0xd8);
      }
      *param_1 = uVar8;
      param_1[1] = uVar9;
      param_1[2] = local_130;
      param_1[3] = uStack_12c;
      param_1[4] = uStack_128;
      param_1[5] = uStack_124;
      param_1[6] = local_120;
      param_1[7] = uStack_11c;
      param_1[8] = uStack_118;
      param_1[9] = uStack_114;
      param_1[10] = local_110;
      param_1[0xb] = uStack_10c;
      param_1[0xc] = uStack_108;
      param_1[0xd] = uStack_104;
      param_1[0xe] = uStack_100;
      param_1[0xf] = uVar7;
      FUN_01bed4e2(param_1 + 0x10,auStack_208,0xd8);
      param_1[0x46] = uVar5;
      *(undefined1 *)(param_1 + 0x49) = 0;
      param_1[0x47] = (uint)local_2c4;
      param_1[0x48] = (uint)local_2c8;
      uVar2 = 1;
      goto LAB_00fbc780;
    }
  }
  else {
    *local_2c4 = 3;
  }
  uVar2 = 3;
  *(undefined1 *)(param_2 + 0x144) = 3;
  *local_2c8 = 3;
  *local_2cc = 3;
  param_1[0x46] = 0x80000001;
LAB_00fbc780:
  *(undefined1 *)(param_2 + 0x164) = uVar2;
  return;
}

