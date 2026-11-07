// FUN_00fecd58 @ 00fecd58 size=2180 calls_out=14 calls_in=3
// strings: 

int FUN_00fecd58(undefined4 param_1,int param_2)

{
  undefined4 **ppuVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  uint *local_3a8;
  int local_3a4;
  int local_39c;
  undefined4 local_388;
  undefined4 local_384;
  undefined1 local_380;
  uint *local_378;
  int local_374;
  int local_36c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350;
  undefined1 auStack_348 [12];
  undefined1 local_33c;
  undefined4 *local_338;
  undefined4 *puStack_334;
  uint *puStack_330;
  uint *puStack_32c;
  uint local_328;
  uint *puStack_324;
  uint local_320;
  int local_31c;
  undefined4 **local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 *local_308;
  uint *local_304;
  uint uStack_300;
  undefined4 *local_2fc;
  uint *local_2f8;
  uint uStack_2f4;
  undefined4 *local_2f0;
  undefined4 *puStack_2ec;
  uint *puStack_2e8;
  uint *local_2e4;
  uint local_2e0;
  uint *local_2dc;
  int local_2d8;
  int local_2d4;
  undefined4 **local_2d0;
  undefined4 *local_2c8;
  uint *local_2c4;
  uint uStack_2c0;
  undefined4 *local_2bc;
  uint *local_2b8;
  uint uStack_2b4;
  uint local_2b0;
  undefined4 local_2ac;
  undefined4 *local_2a8;
  undefined4 *puStack_2a4;
  uint *puStack_2a0;
  uint *puStack_29c;
  uint local_298;
  uint *local_294;
  int local_290;
  int local_28c;
  undefined4 **local_288;
  undefined4 *local_280;
  undefined4 *puStack_27c;
  uint *puStack_278;
  uint *local_274;
  uint local_270;
  uint *local_26c;
  uint local_268;
  int local_264;
  undefined1 auStack_260 [128];
  undefined4 *local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 *local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 *local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 *local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 *local_140;
  uint *local_13c;
  uint local_138;
  undefined4 uStack_134;
  uint uStack_130;
  int iStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  int iStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *local_b0;
  uint *local_ac;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  int iStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_3c;
  
  FUN_00fef934(&local_3a8,param_1);
  uVar17 = *(undefined4 *)(param_2 + 4);
  uVar14 = *(undefined4 *)(param_2 + 8);
  FUN_015e8ad4(&local_140,uVar17,uVar14);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar10 = *(undefined4 *)(param_2 + 0x14);
  FUN_015e8ad4(&local_b0,uVar5,uVar10);
  local_288 = &local_2c8;
  local_2c8 = local_140;
  local_2c4 = local_13c;
  uStack_2c0 = local_138;
  local_2bc = local_b0;
  local_2b8 = local_ac;
  uStack_2b4 = local_a8;
  if (local_3a4 == 0) {
    local_2a8 = (undefined4 *)0x0;
    puStack_2a4 = local_b0;
    puStack_2a0 = local_ac;
  }
  else {
    local_2a8 = (undefined4 *)0x4;
    puStack_2a4 = (undefined4 *)(local_3a4 * 0x91 + 0x95);
    puStack_2a0 = local_3a8 + local_3a4 * -0x24 + -0x24;
  }
  local_28c = local_39c;
  local_294 = local_3a8 + 1;
  local_298 = ~*local_3a8 & 0x80808080;
  puStack_29c = local_3a8;
  uVar20 = thunk_FUN_01bee35a(&local_2a8,(int)local_3a8 + local_3a4);
  iVar4 = (int)uVar20;
  puVar7 = (uint *)(iVar4 + 0x2c0);
  local_290 = (int)((ulonglong)uVar20 >> 0x20) + 1;
  if (*(char *)(iVar4 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_b0);
    *puVar7 = (uint)local_b0;
    *(uint **)(iVar4 + 0x2c4) = local_ac;
    *(uint *)(iVar4 + 0x2c8) = local_a8;
    *(undefined4 *)(iVar4 + 0x2cc) = uStack_a4;
    *(undefined1 *)(iVar4 + 0x2d0) = 1;
  }
  local_270 = *puVar7;
  local_26c = *(uint **)(iVar4 + 0x2c4);
  local_264 = *(undefined4 *)(iVar4 + 0x2cc);
  puVar12 = (uint *)(iVar4 + 0x2c8);
  local_268 = *puVar12;
  *puVar7 = local_270 + 1;
  *(uint *)(iVar4 + 0x2c4) = (int)local_26c + (uint)(0xfffffffe < local_270);
  local_280 = &DAT_0056d238;
  puStack_27c = (undefined4 *)0x0;
  puStack_278 = (uint *)0x0;
  local_274 = (uint *)0x0;
  local_338 = local_2a8;
  puStack_334 = puStack_2a4;
  puStack_330 = puStack_2a0;
  puStack_32c = puStack_29c;
  local_328 = local_298;
  puStack_324 = local_294;
  local_320 = local_290;
  local_31c = local_28c;
  local_318 = local_288;
  if (local_28c != 0) {
    FUN_00708b7c(&local_280,local_28c,local_270,local_26c,local_268,local_264);
  }
  ppuVar1 = local_318;
  local_2f0 = local_2a8;
  puStack_2ec = puStack_2a4;
  puStack_2e8 = puStack_2a0;
  local_2e4 = puStack_29c;
  local_2e0 = local_298;
  local_2dc = local_294;
  local_2d8 = local_290;
  local_2d4 = local_28c;
  uVar2 = local_298;
  puVar19 = puStack_29c;
  iVar13 = local_28c;
  puVar18 = local_294;
  while (iVar15 = 0, iVar13 != 0) {
    uVar3 = uVar2;
    puVar9 = puVar18;
    if (uVar2 == 0) {
      do {
        puVar18 = puVar9 + 1;
        uVar2 = *puVar9;
        puVar19 = puVar19 + -0x90;
        puVar9 = puVar18;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_2e4 = puVar19;
      local_2dc = puVar18;
    }
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    uVar6 = puVar19[uVar3 * -0x24 + -0x24];
    puVar8 = (undefined4 *)puVar19[uVar3 * -0x24 + -0x23];
    puVar9 = (uint *)puVar19[uVar3 * -0x24 + -0x22];
    uVar16 = puVar19[uVar3 * -0x24 + -0x21];
    local_2e0 = uVar2;
    FUN_01bed4e2(auStack_260,puVar19 + uVar3 * -0x24 + -0x20,0x80);
    iVar15 = iVar13 + -1;
    if (puVar8 == (undefined4 *)0x4) break;
    puVar11 = (undefined4 *)0x3;
    if (puVar8 != (undefined4 *)0x3) {
      FUN_01bed4e2(&uStack_a4,auStack_260,0x80);
      local_b0 = puVar8;
      local_ac = puVar9;
      local_a8 = uVar16;
      FUN_015e8ad4(&local_150,ppuVar1[1],ppuVar1[2]);
      FUN_015e8ad4(&local_308,ppuVar1[4],ppuVar1[5]);
      local_1e0 = local_150;
      uStack_1dc = uStack_14c;
      uStack_1d8 = uStack_148;
      local_1d4 = local_308;
      uStack_1d0 = local_304;
      uStack_1cc = uStack_300;
      FUN_00fed838(&local_140,&local_b0,&local_1e0);
      uVar16 = local_138;
      puVar9 = local_13c;
      puVar11 = local_140;
      FUN_01bed4e2(&local_1e0,&uStack_134,0x80);
    }
    local_140 = puVar11;
    local_13c = puVar9;
    local_138 = uVar16;
    FUN_01bed4e2(&uStack_134,&local_1e0,0x80);
    FUN_0070bb70(&local_b0,&local_280,uVar6,&local_140);
    if (local_b0 != (undefined4 *)0x4) {
      FUN_00fedc64(&local_b0);
    }
    iVar13 = iVar15;
  }
  local_2d4 = iVar15;
  FUN_0118c8b8(&local_2f0);
  local_338 = local_280;
  puStack_334 = puStack_27c;
  puStack_330 = puStack_278;
  puStack_32c = local_274;
  local_328 = local_270;
  puStack_324 = local_26c;
  local_320 = local_268;
  local_31c = local_264;
  local_310 = CONCAT31(local_310._1_3_,local_380);
  local_314 = local_384;
  local_318 = (undefined4 **)local_388;
  FUN_019bb7e0(local_2c8,local_2c4);
  FUN_019bb7e0(local_2bc,local_2b8);
  FUN_015e8ad4(&local_140,uVar17,uVar14);
  FUN_015e8ad4(&local_b0,uVar5,uVar10);
  local_308 = local_140;
  local_304 = local_13c;
  uStack_300 = local_138;
  local_2fc = local_b0;
  local_2f8 = local_ac;
  uStack_2f4 = local_a8;
  if (local_374 == 0) {
    local_2f0 = (undefined4 *)0x0;
    puStack_2ec = local_b0;
    puStack_2e8 = local_ac;
  }
  else {
    local_2f0 = (undefined4 *)0x4;
    puStack_2ec = (undefined4 *)(local_374 * 0x91 + 0x95);
    puStack_2e8 = local_378 + local_374 * -0x24 + -0x24;
  }
  local_2dc = local_378 + 1;
  local_2e0 = ~*local_378 & 0x80808080;
  local_2e4 = local_378;
  local_2d8 = (int)local_378 + local_374 + 1;
  local_2d4 = local_36c;
  local_2d0 = &local_308;
  if (*(char *)(iVar4 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_b0);
    *puVar7 = (uint)local_b0;
    *(uint **)(iVar4 + 0x2c4) = local_ac;
    *puVar12 = local_a8;
    *(undefined4 *)(iVar4 + 0x2cc) = uStack_a4;
    *(undefined1 *)(iVar4 + 0x2d0) = 1;
  }
  local_2b8 = (uint *)*puVar7;
  uStack_2b4 = *(int *)(iVar4 + 0x2c4);
  local_2b0 = *puVar12;
  local_2ac = *(undefined4 *)(iVar4 + 0x2cc);
  *puVar7 = (int)local_2b8 + 1;
  *(uint *)(iVar4 + 0x2c4) = uStack_2b4 + (0xfffffffe < local_2b8);
  local_2c8 = &DAT_0056d238;
  local_2c4 = (uint *)0x0;
  uStack_2c0 = 0;
  local_2bc = (undefined4 *)0x0;
  local_2a8 = local_2f0;
  puStack_2a4 = puStack_2ec;
  puStack_2a0 = puStack_2e8;
  puStack_29c = local_2e4;
  local_298 = local_2e0;
  local_294 = local_2dc;
  local_290 = local_2d8;
  local_28c = local_2d4;
  local_288 = local_2d0;
  if (local_2d4 != 0) {
    FUN_00708b7c(&local_2c8,local_2d4,local_2b8,uStack_2b4,local_2b0,local_2ac);
  }
  ppuVar1 = local_288;
  local_280 = local_2f0;
  puStack_27c = puStack_2ec;
  puStack_278 = puStack_2e8;
  local_274 = local_2e4;
  local_270 = local_2e0;
  local_26c = local_2dc;
  local_268 = local_2d8;
  local_264 = local_2d4;
  uVar2 = local_2e0;
  puVar7 = local_2e4;
  puVar12 = local_2dc;
  iVar4 = local_2d4;
  while (iVar13 = 0, iVar4 != 0) {
    uVar3 = uVar2;
    puVar19 = puVar12;
    if (uVar2 == 0) {
      do {
        puVar12 = puVar19 + 1;
        uVar2 = *puVar19;
        puVar7 = puVar7 + -0x90;
        puVar19 = puVar12;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_274 = puVar7;
      local_26c = puVar12;
    }
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    uVar16 = puVar7[uVar3 * -0x24 + -0x21];
    uVar6 = puVar7[uVar3 * -0x24 + -0x24];
    puVar8 = (undefined4 *)puVar7[uVar3 * -0x24 + -0x23];
    puVar19 = (uint *)puVar7[uVar3 * -0x24 + -0x22];
    local_270 = uVar2;
    FUN_01bed4e2(auStack_260,puVar7 + uVar3 * -0x24 + -0x20,0x80);
    iVar13 = iVar4 + -1;
    if (puVar8 == (undefined4 *)0x4) break;
    puVar11 = (undefined4 *)0x3;
    if (puVar8 != (undefined4 *)0x3) {
      FUN_01bed4e2(&uStack_a4,auStack_260,0x80);
      local_b0 = puVar8;
      local_ac = puVar19;
      local_a8 = uVar16;
      FUN_015e8ad4(&local_160,ppuVar1[1],ppuVar1[2]);
      FUN_015e8ad4(&local_150,ppuVar1[4],ppuVar1[5]);
      local_1e0 = local_160;
      uStack_1dc = uStack_15c;
      uStack_1d8 = uStack_158;
      local_1d4 = local_150;
      uStack_1d0 = uStack_14c;
      uStack_1cc = uStack_148;
      FUN_00fed838(&local_140,&local_b0,&local_1e0);
      uVar16 = local_138;
      puVar19 = local_13c;
      puVar11 = local_140;
      FUN_01bed4e2(&local_1e0,&uStack_134,0x80);
    }
    local_140 = puVar11;
    local_13c = puVar19;
    local_138 = uVar16;
    FUN_01bed4e2(&uStack_134,&local_1e0,0x80);
    FUN_0070bb70(&local_b0,&local_2c8,uVar6,&local_140);
    if (local_b0 != (undefined4 *)0x4) {
      FUN_00fedc64(&local_b0);
    }
    iVar4 = iVar13;
  }
  local_264 = iVar13;
  FUN_0118c8b8(&local_280);
  local_b0 = local_2c8;
  local_ac = local_2c4;
  local_a8 = uStack_2c0;
  uStack_a4 = local_2bc;
  local_a0 = (uint)local_2b8;
  iStack_9c = uStack_2b4;
  local_98 = local_2b0;
  uStack_94 = local_2ac;
  local_88 = CONCAT31(local_88._1_3_,local_350);
  local_8c = local_354;
  local_90 = local_358;
  FUN_019bb7e0(local_308,local_304);
  FUN_019bb7e0(local_2fc,local_2f8);
  FUN_00fedc7c(&local_1e0,auStack_348,param_2);
  local_140 = local_338;
  local_13c = puStack_334;
  local_138 = (uint)puStack_330;
  uStack_134 = puStack_32c;
  uStack_130 = local_328;
  iStack_12c = (int)puStack_324;
  local_128 = local_320;
  uStack_124 = local_31c;
  uStack_120 = local_318;
  uStack_11c = local_314;
  uStack_118 = local_310;
  uStack_114 = uStack_30c;
  puStack_110 = local_b0;
  uStack_10c = local_ac;
  uStack_108 = local_a8;
  uStack_104 = uStack_a4;
  uStack_100 = local_a0;
  iStack_fc = iStack_9c;
  local_f8 = local_98;
  uStack_f4 = uStack_94;
  uStack_f0 = local_90;
  uStack_ec = local_8c;
  uStack_e8 = local_88;
  uStack_e4 = uStack_84;
  local_e0 = local_1e0;
  uStack_dc = uStack_1dc;
  uStack_d8 = uStack_1d8;
  local_ac = (uint *)0x1;
  local_b0 = (undefined4 *)0x1;
  FUN_01bed4e2(&local_a8,&local_140,0x6c);
  local_3c = local_33c;
  iVar4 = thunk_FUN_01be5118(0x78);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar4,&local_b0,0x78);
  return iVar4;
}

