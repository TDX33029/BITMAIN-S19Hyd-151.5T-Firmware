// FUN_0100372c @ 0100372c size=1648 calls_out=12 calls_in=1
// strings: 

int FUN_0100372c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *unaff_r5;
  int unaff_r6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *extraout_r12;
  undefined8 uVar12;
  uint *local_390;
  int local_38c;
  int local_384;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368;
  uint *local_360;
  int local_35c;
  int local_354;
  undefined4 local_340;
  undefined4 local_33c;
  undefined1 local_338;
  uint local_330;
  uint *local_32c;
  undefined4 local_328;
  undefined1 local_324;
  uint *local_320;
  int iStack_31c;
  uint *puStack_318;
  uint *puStack_314;
  uint local_310;
  uint *puStack_30c;
  int local_308;
  int local_304;
  undefined1 *local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  uint *local_2f0;
  uint *local_2ec;
  uint *local_2e8;
  uint *local_2e4;
  uint local_2e0;
  uint *local_2dc;
  int local_2d8;
  int local_2d4;
  undefined1 *local_2d0;
  undefined4 *local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  uint local_2b8;
  int iStack_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  uint *local_2a8;
  uint *local_2a4;
  uint *local_2a0;
  uint *local_29c;
  uint local_298;
  uint *local_294;
  int local_290;
  int local_28c;
  undefined1 *local_288;
  uint *local_280;
  uint *puStack_27c;
  uint *puStack_278;
  uint *local_274;
  uint local_270;
  uint *local_26c;
  int local_268;
  int local_264;
  undefined1 auStack_260 [136];
  uint *local_1d8;
  uint local_1d4;
  undefined4 uStack_1d0;
  undefined *local_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint uStack_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 *local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  int iStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  uint local_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  int local_b4 [35];
  undefined1 uStack_25;
  
  FUN_00711858(&local_390,param_1);
  if (local_38c == 0) {
    local_2a8 = (uint *)0x0;
  }
  else {
    unaff_r5 = local_390 + local_38c * -0x24 + -0x24;
    unaff_r6 = local_38c * 0x91 + 0x95;
    local_2a8 = (uint *)0x4;
  }
  local_288 = &uStack_25;
  local_28c = local_384;
  local_294 = local_390 + 1;
  local_298 = ~*local_390 & 0x80808080;
  local_29c = local_390;
  local_2a4 = (uint *)unaff_r6;
  local_2a0 = unaff_r5;
  uVar12 = thunk_FUN_01bee35a(local_390,(int)local_390 + local_38c);
  iVar1 = (int)uVar12;
  puVar4 = (uint *)(iVar1 + 0x2c0);
  local_290 = (int)((ulonglong)uVar12 >> 0x20) + 1;
  if (*(char *)(iVar1 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_148);
    *puVar4 = (uint)local_148;
    *(undefined4 *)(iVar1 + 0x2c4) = local_144;
    *(undefined4 *)(iVar1 + 0x2c8) = uStack_140;
    *(undefined4 *)(iVar1 + 0x2cc) = uStack_13c;
    *(undefined1 *)(iVar1 + 0x2d0) = 1;
  }
  puVar5 = local_294;
  local_270 = *puVar4;
  local_26c = *(uint **)(iVar1 + 0x2c4);
  local_264 = *(undefined4 *)(iVar1 + 0x2cc);
  puVar8 = (undefined4 *)(iVar1 + 0x2c8);
  local_268 = *puVar8;
  *puVar4 = local_270 + 1;
  *(uint *)(iVar1 + 0x2c4) = (int)local_26c + (uint)(0xfffffffe < local_270);
  local_280 = &DAT_0056d238;
  puStack_27c = (uint *)0x0;
  puStack_278 = (uint *)0x0;
  local_274 = (uint *)0x0;
  local_320 = local_2a8;
  iStack_31c = (int)local_2a4;
  puStack_318 = local_2a0;
  puStack_314 = local_29c;
  local_310 = local_298;
  puStack_30c = local_294;
  local_308 = local_290;
  local_304 = local_28c;
  local_300 = local_288;
  if (local_28c != 0) {
    FUN_00708b7c(&local_280,local_28c,local_270,local_26c,local_268,local_264);
  }
  local_2f0 = local_2a8;
  local_2ec = local_2a4;
  local_2e8 = local_2a0;
  local_2e4 = local_29c;
  local_2e0 = local_298;
  local_2dc = local_294;
  local_2d8 = local_290;
  local_2d4 = local_28c;
  uVar2 = local_298;
  puVar6 = local_294;
  puVar10 = local_29c;
  iVar7 = local_28c;
  while (iVar11 = 0, iVar7 != 0) {
    uVar3 = uVar2;
    puVar5 = puVar6;
    if (uVar2 == 0) {
      do {
        puVar6 = puVar5 + 1;
        uVar2 = *puVar5;
        puVar10 = puVar10 + -0x90;
        puVar5 = puVar6;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_2e4 = puVar10;
      local_2dc = puVar6;
    }
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    puVar5 = (uint *)puVar10[uVar3 * -0x24 + -0x24];
    uVar9 = puVar10[uVar3 * -0x24 + -0x23];
    local_2e0 = uVar2;
    FUN_01bed4e2(auStack_260,puVar10 + uVar3 * -0x24 + -0x22,0x88);
    iVar11 = iVar7 + -1;
    if (uVar9 == 4) break;
    local_1d8 = puVar5;
    local_1d4 = uVar9;
    FUN_01bed4e2(&uStack_1d0,auStack_260,0x88);
    FUN_01003f2c(&local_144,(uint)&local_1d8 | 4);
    FUN_0070bb70(local_b4,&local_280,puVar5,&local_144);
    if (local_b4[0] != 4) {
      FUN_00fedc64(local_b4);
    }
    iVar7 = iVar11;
  }
  local_2d4 = iVar11;
  FUN_00943cd0(&local_2f0);
  local_320 = local_280;
  iStack_31c = (int)puStack_27c;
  puStack_318 = puStack_278;
  puStack_314 = local_274;
  local_310 = local_270;
  puStack_30c = local_26c;
  local_308 = local_268;
  local_304 = local_264;
  local_2f8 = CONCAT31(local_2f8._1_3_,local_368);
  local_2fc = local_36c;
  local_300 = (undefined1 *)local_370;
  if (local_35c == 0) {
    local_2f0 = (uint *)0x0;
    local_2e8 = extraout_r12;
  }
  else {
    local_2e8 = local_360 + local_35c * -0x24 + -0x24;
    puVar5 = (uint *)(local_35c * 0x91 + 0x95);
    local_2f0 = (uint *)0x4;
  }
  local_2d4 = local_354;
  local_2dc = local_360 + 1;
  local_2e4 = local_360;
  local_2d8 = (int)local_360 + local_35c + 1;
  local_2d0 = &uStack_25;
  local_2e0 = ~*local_360 & 0x80808080;
  local_2ec = puVar5;
  if (*(char *)(iVar1 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_148);
    *puVar4 = (uint)local_148;
    *(undefined4 *)(iVar1 + 0x2c4) = local_144;
    *puVar8 = uStack_140;
    *(undefined4 *)(iVar1 + 0x2cc) = uStack_13c;
    *(undefined1 *)(iVar1 + 0x2d0) = 1;
  }
  local_2b8 = *puVar4;
  iStack_2b4 = *(int *)(iVar1 + 0x2c4);
  local_2b0 = *puVar8;
  local_2ac = *(undefined4 *)(iVar1 + 0x2cc);
  *puVar4 = local_2b8 + 1;
  *(uint *)(iVar1 + 0x2c4) = iStack_2b4 + (uint)(0xfffffffe < local_2b8);
  local_2c8 = &DAT_0056d238;
  uStack_2c4 = 0;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  local_2a8 = local_2f0;
  local_2a4 = local_2ec;
  local_2a0 = local_2e8;
  local_29c = local_2e4;
  local_298 = local_2e0;
  local_294 = local_2dc;
  local_290 = local_2d8;
  local_28c = local_2d4;
  local_288 = local_2d0;
  if (local_2d4 != 0) {
    FUN_00708b7c(&local_2c8,local_2d4,local_2b8,iStack_2b4,local_2b0,local_2ac);
  }
  local_280 = local_2f0;
  puStack_27c = local_2ec;
  puStack_278 = local_2e8;
  local_274 = local_2e4;
  local_270 = local_2e0;
  local_26c = local_2dc;
  local_268 = local_2d8;
  local_264 = local_2d4;
  uVar2 = local_2e0;
  iVar1 = local_2d4;
  puVar4 = local_2dc;
  puVar5 = local_2e4;
  while (iVar7 = 0, iVar1 != 0) {
    uVar3 = uVar2;
    puVar6 = puVar4;
    if (uVar2 == 0) {
      do {
        puVar4 = puVar6 + 1;
        uVar2 = *puVar6;
        puVar5 = puVar5 + -0x90;
        puVar6 = puVar4;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_274 = puVar5;
      local_26c = puVar4;
    }
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    puVar6 = (uint *)puVar5[uVar3 * -0x24 + -0x24];
    uVar9 = puVar5[uVar3 * -0x24 + -0x23];
    local_270 = uVar2;
    FUN_01bed4e2(auStack_260,puVar5 + uVar3 * -0x24 + -0x22,0x88);
    iVar7 = iVar1 + -1;
    if (uVar9 == 4) break;
    local_1d8 = puVar6;
    local_1d4 = uVar9;
    FUN_01bed4e2(&uStack_1d0,auStack_260,0x88);
    FUN_01003f2c(&local_144,(uint)&local_1d8 | 4);
    FUN_0070bb70(local_b4,&local_2c8,puVar6,&local_144);
    if (local_b4[0] != 4) {
      FUN_00fedc64(local_b4);
    }
    iVar1 = iVar7;
  }
  local_264 = iVar7;
  FUN_00943cd0(&local_280);
  local_148 = local_2c8;
  local_144 = uStack_2c4;
  uStack_140 = uStack_2c0;
  uStack_13c = uStack_2bc;
  local_138 = local_2b8;
  iStack_134 = iStack_2b4;
  local_130 = local_2b0;
  uStack_12c = local_2ac;
  local_120 = CONCAT31(local_120._1_3_,local_338);
  local_124 = local_33c;
  local_128 = local_340;
  if (local_330 < 2) {
    local_dc = FUN_00facfc4();
  }
  else {
    local_1d8 = local_32c;
    local_1d4 = local_328;
    uStack_1d0 = 1;
    local_1cc = &DAT_01c21fb4;
    puVar8 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    local_dc = CONCAT44(&DAT_01c21f74,puVar8);
    *puVar8 = local_1d8;
    puVar8[1] = local_1d4;
    puVar8[2] = uStack_1d0;
    puVar8[3] = local_1cc;
  }
  local_1d8 = local_320;
  local_1d4 = iStack_31c;
  uStack_1d0 = puStack_318;
  local_1cc = (undefined *)puStack_314;
  uStack_1c8 = local_310;
  iStack_1c4 = (int)puStack_30c;
  local_1c0 = local_308;
  uStack_1bc = local_304;
  uStack_1b8 = local_300;
  uStack_1b4 = local_2fc;
  uStack_1b0 = local_2f8;
  uStack_1ac = uStack_2f4;
  puStack_1a8 = local_148;
  uStack_1a4 = local_144;
  uStack_1a0 = uStack_140;
  uStack_19c = uStack_13c;
  uStack_198 = local_138;
  iStack_194 = iStack_134;
  local_190 = local_130;
  uStack_18c = uStack_12c;
  uStack_188 = local_128;
  uStack_184 = local_124;
  uStack_180 = local_120;
  uStack_17c = uStack_11c;
  local_144 = 1;
  local_148 = (undefined4 *)0x1;
  FUN_01bed4e2(&uStack_140,&local_1d8,0x60);
  local_d4 = local_324;
  local_e0 = local_330;
  iVar1 = thunk_FUN_01be5118(0x78);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar1,&local_148,0x78);
  return iVar1;
}

