// FUN_0103b254 @ 0103b254 size=1444 calls_out=19 calls_in=2
// strings: 

undefined8 FUN_0103b254(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint **unaff_r5;
  undefined4 **ppuVar6;
  uint uVar7;
  undefined4 **ppuVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *local_214;
  undefined4 *local_210;
  uint *local_204;
  uint *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  uint **ppuStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  uint **ppuStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_144;
  uint *local_140;
  uint *local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  uint **ppuStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 **local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_bc;
  
  puVar5 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x15f)) {
  case 0:
    param_1[2] = *param_1;
    *(undefined1 *)((int)param_1 + 0x55) = 0;
    uVar2 = param_1[0x15e];
    param_1[3] = param_1[1];
    param_1[0x14] = uVar2;
LAB_0103b2d8:
    param_1[0x16] = 0;
    param_1[0x17] = 0x1b6;
    param_1[0x18] = 0;
    *(undefined2 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    param_1[0x1a] = param_1 + 0x16;
    param_1[0x1b] = uVar2;
switchD_0103b2bc_caseD_3:
    FUN_0103b9cc(&local_100,param_1 + 0x1a,param_2);
    ppuVar8 = (undefined4 **)local_f8;
    if (((uint)local_100 & 1) != 0) {
      uVar1 = 3;
      unaff_r5 = (uint **)&local_100;
LAB_0103b780:
      *(undefined1 *)((int)param_1 + 0x55) = uVar1;
      *(undefined1 *)(param_1 + 0x15f) = 3;
      uVar2 = 1;
      goto LAB_0103b8ac;
    }
    local_1f8 = local_f0;
    uStack_1f4 = uStack_ec;
    uStack_1f0 = uStack_e8;
    uStack_1ec = uStack_e4;
    local_1e8 = local_e0;
    uStack_1e4 = uStack_dc;
    uStack_1e0 = uStack_d8;
    uStack_1dc = uStack_d4;
    local_1d8 = local_d0;
    uStack_1d4 = uStack_cc;
    uStack_1d0 = uStack_c8;
    uStack_1cc = uStack_c4;
    uStack_1c8 = uStack_c0;
    FUN_0103b98c(param_1 + 0x1a);
    if (local_bc != 0) {
      *puVar5 = (uint)ppuVar8;
      param_1[5] = local_f4;
      param_1[6] = local_1f8;
      param_1[7] = uStack_1f4;
      param_1[8] = uStack_1f0;
      param_1[9] = uStack_1ec;
      param_1[10] = local_1e8;
      param_1[0xb] = uStack_1e4;
      param_1[0xc] = uStack_1e0;
      param_1[0xd] = uStack_1dc;
      param_1[0xe] = local_1d8;
      param_1[0xf] = uStack_1d4;
      param_1[0x10] = uStack_1d0;
      param_1[0x11] = uStack_1cc;
      param_1[0x12] = uStack_1c8;
      param_1[0x13] = local_bc;
      FUN_013184d8(&local_100,0x2000);
      uVar10 = FUN_0189bc00(&local_100);
      *(undefined8 *)(param_1 + 0x1a) = uVar10;
      param_1[0x1c] = puVar5;
      *(undefined1 *)(param_1 + 0x15d) = 0;
      puVar4 = param_1 + 0x16;
      *puVar4 = 3;
      param_1[0x17] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x15c] = puVar4;
LAB_0103b434:
      *(undefined1 *)(param_1 + 0x15b) = 0;
      param_1[0x156] = puVar4;
      goto LAB_0103b448;
    }
    ppuVar6 = (undefined4 **)0x80000000;
    puVar9 = local_f4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1ddac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1ddac);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x55)) {
    case 0:
      uVar2 = param_1[0x14];
      goto LAB_0103b2d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e118);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e118);
    case 3:
      goto switchD_0103b2bc_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x15d)) {
    case 0:
      puVar4 = (undefined4 *)param_1[0x15c];
      goto LAB_0103b434;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1e108);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1e108);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x15b)) {
      case 0:
        puVar4 = (undefined4 *)param_1[0x156];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1e0e8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1e0e8);
      case 3:
        goto switchD_0103b4d4_caseD_3;
      }
    }
LAB_0103b448:
    param_1[0x157] = puVar4;
    FUN_01bed93e(param_1 + 0x20,0,0x80);
    param_1[0x40] = 0x6a09e667;
    param_1[0x41] = 0xbb67ae85;
    param_1[0x42] = 0x3c6ef372;
    param_1[0x43] = 0xa54ff53a;
    param_1[0x44] = 0x510e527f;
    param_1[0x45] = 0x9b05688c;
    param_1[0x46] = 0x1f83d9ab;
    param_1[0x47] = 0x5be0cd19;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    unaff_r5 = (uint **)0x0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x54] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = &DAT_01d274b0;
    FUN_01bed93e(param_1 + 0x56,0,0x400);
    while( true ) {
      param_1[0x158] = param_1[0x157];
      param_1[0x159] = param_1 + 0x56;
      param_1[0x15a] = 0x400;
switchD_0103b4d4_caseD_3:
      local_214 = param_1 + 0x15b;
      local_210 = param_1 + 0x15d;
      FUN_00eb8c6c(&local_100,param_1 + 0x158,param_2);
      if ((char)local_100 == '\x05') {
        *(undefined1 *)local_214 = 3;
        *(undefined1 *)local_210 = 3;
        uVar1 = 4;
        goto LAB_0103b780;
      }
      if (((uint)local_100 & 0xff) != 4) break;
      if (local_fc == (uint *)0x0) {
        FUN_01bed4e2(&local_100,param_1 + 0x20,0xd8);
        FUN_0189039c(&local_144,&local_100);
        local_180 = local_138;
        uStack_17c = uStack_134;
        uStack_178 = uStack_130;
        uStack_174 = uStack_12c;
        local_170 = local_128;
        uStack_16c = uStack_124;
        uStack_168 = uStack_120;
        uStack_164 = uStack_11c;
        uStack_160 = uStack_118;
        local_15c = local_114;
        uStack_158 = uStack_110;
        ppuStack_154 = ppuStack_10c;
        uStack_150 = uStack_108;
        uStack_14c = uStack_104;
        *(undefined1 *)local_214 = 1;
        ppuVar8 = (undefined4 **)local_140;
        puVar9 = local_13c;
        if (local_144 == 0) goto LAB_0103b798;
        local_1b8 = local_138;
        uStack_1b4 = uStack_134;
        uStack_1b0 = uStack_130;
        uStack_1ac = uStack_12c;
        local_1a8 = local_128;
        uStack_1a4 = uStack_124;
        uStack_1a0 = uStack_120;
        uStack_19c = uStack_11c;
        uStack_198 = uStack_118;
        local_194 = local_114;
        uStack_190 = uStack_110;
        ppuStack_18c = ppuStack_10c;
        uStack_188 = uStack_108;
        uStack_184 = uStack_104;
        uVar3 = *(uint *)(local_144 + 0x48);
        local_1bc = local_13c;
        local_1c0 = local_140;
        local_1c4 = local_144;
        if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,0x40,&DAT_01d2571c);
        }
        FUN_01321fc0(&local_100,&DAT_004a5d58,0x202,&local_1c0,uVar3);
        *(undefined1 *)local_210 = 1;
        uVar1 = 4;
        unaff_r5 = ppuStack_10c;
        ppuVar6 = local_100;
        ppuVar8 = (undefined4 **)local_fc;
        puVar9 = local_f8;
        if (local_100 != (undefined4 **)0x80000001) goto LAB_0103b7a4;
        goto LAB_0103b780;
      }
      if ((uint *)0x400 < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_fc,0x400,&DAT_01c1e0f8);
      }
      FUN_018900dc(param_1 + 0x20,param_1 + 0x56,local_fc);
    }
    *(undefined1 *)local_214 = 1;
    ppuVar8 = local_100;
    puVar9 = local_fc;
LAB_0103b798:
    ppuVar6 = (undefined4 **)0x80000000;
    *(undefined1 *)local_210 = 1;
LAB_0103b7a4:
    if (param_1[0x1b] != 0) {
      thunk_FUN_01be4678(param_1[0x1a]);
    }
    FUN_0103be5c(puVar5);
  }
  *(undefined2 *)(param_1 + 0x15) = 0x100;
  FUN_0103b1f4(puVar5);
  if (ppuVar6 == (undefined4 **)0x80000000) {
    unaff_r5 = (uint **)FUN_007afd78(&local_100);
  }
  else {
    local_f8 = param_1 + 2;
    local_204 = (uint *)ppuVar6;
    if ((uint *)param_1[3] == puVar9) {
      puVar5 = (uint *)0x0;
      do {
        if (puVar9 == puVar5) {
          FUN_019bb7e0(ppuVar6,ppuVar8);
          unaff_r5 = (uint **)0x0;
          goto LAB_0103b8a0;
        }
        uVar3 = (uint)*(byte *)(*local_f8 + (int)puVar5);
        uVar7 = (uint)*(byte *)((int)ppuVar8 + (int)puVar5);
        puVar5 = (uint *)((int)puVar5 + 1);
        if (uVar3 - 0x41 < 0x1a) {
          uVar3 = uVar3 | 0x20;
        }
        if (uVar7 - 0x41 < 0x1a) {
          uVar7 = uVar7 | 0x20;
        }
      } while (uVar7 == uVar3);
    }
    local_100 = &local_204;
    local_f4 = (uint *)&DAT_0132b6a0;
    local_fc = (uint *)&LAB_00632348;
    local_200 = (uint *)ppuVar8;
    unaff_r5 = (uint **)FUN_00a57a98(&DAT_005a3e47,&local_100);
    FUN_019bb7e0(local_204,local_200);
  }
LAB_0103b8a0:
  *(undefined1 *)(param_1 + 0x15f) = 1;
  uVar2 = 0;
LAB_0103b8ac:
  return CONCAT44(unaff_r5,uVar2);
}

