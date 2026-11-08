// FUN_00fff9d4 @ 00fff9d4 size=1740 calls_out=12 calls_in=3
// strings: 

int FUN_00fff9d4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r5;
  int iVar11;
  int iVar12;
  int unaff_r6;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint *local_390;
  int local_38c;
  int local_384;
  uint *local_370;
  undefined4 local_36c;
  undefined1 local_368;
  uint *local_360;
  int local_35c;
  int local_354;
  undefined4 local_340;
  undefined4 local_33c;
  undefined1 local_338;
  uint local_330;
  undefined4 *local_32c;
  undefined4 local_328;
  undefined1 local_324;
  undefined4 *local_320;
  int iStack_31c;
  uint *puStack_318;
  uint *puStack_314;
  uint local_310;
  uint *puStack_30c;
  int local_308;
  int local_304;
  undefined4 **local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0 [2];
  undefined4 *local_2e8;
  int local_2e4;
  uint *local_2e0;
  uint *local_2dc;
  uint local_2d8;
  uint *local_2d4;
  int local_2d0;
  int local_2cc;
  undefined4 *local_2c8;
  undefined4 *local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint local_2b0;
  int iStack_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 *local_2a0;
  int local_29c;
  uint *local_298;
  uint *local_294;
  uint local_290;
  uint *local_28c;
  int local_288;
  int local_284;
  undefined4 **local_280;
  undefined4 *local_278;
  int iStack_274;
  uint *puStack_270;
  uint *local_26c;
  uint local_268;
  uint *local_264;
  int local_260;
  int local_25c;
  undefined1 auStack_258 [136];
  undefined4 *local_1d0;
  uint local_1cc;
  undefined4 *local_1c8;
  undefined *local_1c4;
  uint uStack_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  uint *puStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  int iStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 *local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130;
  int iStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  int local_b0 [35];
  
  FUN_00711858(&local_390,param_1);
  local_2a0 = (undefined4 *)0x0;
  local_2c0 = (undefined4 *)0x0;
  local_280 = &local_2c0;
  if (local_38c != 0) {
    unaff_r5 = local_390 + local_38c * -0x24 + -0x24;
    unaff_r6 = local_38c * 0x91 + 0x95;
    local_2a0 = (undefined4 *)0x4;
  }
  local_284 = local_384;
  local_28c = local_390 + 1;
  local_290 = ~*local_390 & 0x80808080;
  local_294 = local_390;
  local_29c = unaff_r6;
  local_298 = unaff_r5;
  uVar17 = thunk_FUN_01bee35a(local_390,(int)local_390 + local_38c);
  iVar3 = (int)uVar17;
  puVar8 = (uint *)(iVar3 + 0x2c0);
  local_288 = (int)((ulonglong)uVar17 >> 0x20) + 1;
  if (*(char *)(iVar3 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_140);
    *puVar8 = (uint)local_140;
    *(undefined4 *)(iVar3 + 0x2c4) = local_13c;
    *(undefined4 *)(iVar3 + 0x2c8) = uStack_138;
    *(undefined4 *)(iVar3 + 0x2cc) = uStack_134;
    *(undefined1 *)(iVar3 + 0x2d0) = 1;
  }
  local_268 = *puVar8;
  local_264 = *(uint **)(iVar3 + 0x2c4);
  local_25c = *(undefined4 *)(iVar3 + 0x2cc);
  puVar14 = (undefined4 *)(iVar3 + 0x2c8);
  local_260 = *puVar14;
  *puVar8 = local_268 + 1;
  *(uint *)(iVar3 + 0x2c4) = (int)local_264 + (uint)(0xfffffffe < local_268);
  local_278 = &DAT_0056d238;
  iStack_274 = 0;
  puStack_270 = (undefined4 *)0x0;
  local_26c = (uint *)0x0;
  local_320 = local_2a0;
  iStack_31c = local_29c;
  puStack_318 = local_298;
  puStack_314 = local_294;
  local_310 = local_290;
  puStack_30c = local_28c;
  local_308 = local_288;
  local_304 = local_284;
  local_300 = local_280;
  if (local_284 != 0) {
    FUN_00708b7c(&local_278,local_284,local_268,local_264,local_260,local_25c);
  }
  local_2e8 = local_2a0;
  local_2e4 = local_29c;
  local_2e0 = local_298;
  local_2dc = local_294;
  local_2d8 = local_290;
  local_2d4 = local_28c;
  local_2d0 = local_288;
  local_2cc = local_284;
  puVar1 = *local_300;
  puVar6 = local_300[1];
  uVar4 = local_290;
  puVar10 = local_28c;
  iVar12 = local_284;
  puVar16 = local_294;
  while( true ) {
    iVar11 = 0;
    if (iVar12 == 0) break;
    uVar7 = uVar4;
    puVar9 = puVar10;
    if (uVar4 == 0) {
      do {
        puVar10 = puVar9 + 1;
        uVar4 = *puVar9;
        puVar16 = puVar16 + -0x90;
        puVar9 = puVar10;
      } while ((uVar4 & 0x80808080) == 0x80808080);
      uVar7 = uVar4 & 0x80808080 ^ 0x80808080;
      local_2dc = puVar16;
      local_2d4 = puVar10;
    }
    uVar4 = uVar7 - 1 & uVar7;
    uVar7 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                          | uVar7 >> 0x18) >> 3;
    puVar13 = (undefined4 *)puVar16[uVar7 * -0x24 + -0x24];
    uVar15 = puVar16[uVar7 * -0x24 + -0x23];
    local_2d8 = uVar4;
    FUN_01bed4e2(auStack_258,puVar16 + uVar7 * -0x24 + -0x22,0x88);
    iVar11 = iVar12 + -1;
    iVar12 = iVar11;
    if (uVar15 == 4) break;
    local_1d0 = puVar13;
    local_1cc = uVar15;
    FUN_01bed4e2(&local_1c8,auStack_258,0x88);
    FUN_01000248(&local_13c,(uint)&local_1d0 | 4,puVar1,puVar6);
    FUN_0070bb70(local_b0,&local_278,puVar13,&local_13c);
    if (local_b0[0] != 4) {
      FUN_00fedc64(local_b0);
    }
  }
  local_2cc = iVar11;
  FUN_00943cd0(&local_2e8);
  local_320 = local_278;
  iStack_31c = iStack_274;
  puStack_318 = puStack_270;
  puStack_314 = local_26c;
  local_310 = local_268;
  puStack_30c = local_264;
  local_308 = local_260;
  local_304 = local_25c;
  local_2e8 = (undefined4 *)0x0;
  local_2f0[0] = 0;
  local_2f8 = CONCAT31(local_2f8._1_3_,local_368);
  local_2fc = local_36c;
  local_300 = (undefined4 **)local_370;
  if (local_35c != 0) {
    iVar12 = local_35c * 0x91 + 0x95;
    local_370 = local_360 + local_35c * -0x24 + -0x24;
    local_2e8 = (undefined4 *)0x4;
  }
  local_2c8 = local_2f0;
  local_2d4 = local_360 + 1;
  local_2dc = local_360;
  local_2d0 = (int)local_360 + local_35c + 1;
  local_2d8 = ~*local_360 & 0x80808080;
  local_2cc = local_354;
  local_2e4 = iVar12;
  local_2e0 = local_370;
  if (*(char *)(iVar3 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_140);
    *puVar8 = (uint)local_140;
    *(undefined4 *)(iVar3 + 0x2c4) = local_13c;
    *puVar14 = uStack_138;
    *(undefined4 *)(iVar3 + 0x2cc) = uStack_134;
    *(undefined1 *)(iVar3 + 0x2d0) = 1;
  }
  local_2b0 = *puVar8;
  iStack_2ac = *(int *)(iVar3 + 0x2c4);
  local_2a8 = *puVar14;
  local_2a4 = *(undefined4 *)(iVar3 + 0x2cc);
  *puVar8 = local_2b0 + 1;
  *(uint *)(iVar3 + 0x2c4) = iStack_2ac + (uint)(0xfffffffe < local_2b0);
  local_2c0 = &DAT_0056d238;
  uStack_2bc = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  local_2a0 = local_2e8;
  local_29c = local_2e4;
  local_298 = local_2e0;
  local_294 = local_2dc;
  local_290 = local_2d8;
  local_28c = local_2d4;
  local_288 = local_2d0;
  local_284 = local_2cc;
  local_280 = (undefined4 **)local_2c8;
  if (local_2cc != 0) {
    FUN_00708b7c(&local_2c0,local_2cc,local_2b0,iStack_2ac,local_2a8,local_2a4);
  }
  local_278 = local_2e8;
  iStack_274 = local_2e4;
  puStack_270 = local_2e0;
  local_26c = local_2dc;
  local_268 = local_2d8;
  local_264 = local_2d4;
  local_260 = local_2d0;
  local_25c = local_2cc;
  uVar2 = *local_280;
  uVar5 = local_280[1];
  uVar4 = local_2d8;
  iVar3 = local_2cc;
  puVar8 = local_2dc;
  puVar10 = local_2d4;
  while (iVar12 = 0, iVar3 != 0) {
    uVar7 = uVar4;
    puVar16 = puVar10;
    if (uVar4 == 0) {
      do {
        puVar10 = puVar16 + 1;
        uVar4 = *puVar16;
        puVar8 = puVar8 + -0x90;
        puVar16 = puVar10;
      } while ((uVar4 & 0x80808080) == 0x80808080);
      uVar7 = uVar4 & 0x80808080 ^ 0x80808080;
      local_26c = puVar8;
      local_264 = puVar10;
    }
    uVar4 = uVar7 - 1 & uVar7;
    uVar7 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                          | uVar7 >> 0x18) >> 3;
    puVar14 = (undefined4 *)puVar8[uVar7 * -0x24 + -0x24];
    uVar15 = puVar8[uVar7 * -0x24 + -0x23];
    local_268 = uVar4;
    FUN_01bed4e2(auStack_258,puVar8 + uVar7 * -0x24 + -0x22,0x88);
    iVar12 = iVar3 + -1;
    if (uVar15 == 4) break;
    local_1d0 = puVar14;
    local_1cc = uVar15;
    FUN_01bed4e2(&local_1c8,auStack_258,0x88);
    FUN_01000248(&local_13c,(uint)&local_1d0 | 4,uVar2,uVar5);
    FUN_0070bb70(local_b0,&local_2c0,puVar14,&local_13c);
    if (local_b0[0] != 4) {
      FUN_00fedc64(local_b0);
    }
    iVar3 = iVar12;
  }
  local_25c = iVar12;
  FUN_00943cd0(&local_278);
  local_140 = local_2c0;
  local_13c = uStack_2bc;
  uStack_138 = uStack_2b8;
  uStack_134 = uStack_2b4;
  local_130 = local_2b0;
  iStack_12c = iStack_2ac;
  local_128 = local_2a8;
  uStack_124 = local_2a4;
  local_118 = CONCAT31(local_118._1_3_,local_338);
  local_11c = local_33c;
  local_120 = local_340;
  if (local_330 < 2) {
    local_1c4 = (undefined *)local_328;
    local_1c8 = local_32c;
    local_1d0 = (undefined4 *)0x0;
    local_d4 = FUN_00fad280(&local_1d0);
  }
  else {
    local_1c8 = (undefined4 *)thunk_FUN_01be5118(8);
    if (local_1c8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *local_1c8 = 0;
    local_1cc = local_328;
    local_1d0 = local_32c;
    local_1c4 = &DAT_01c21ff0;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    local_d4 = CONCAT44(&DAT_01c21f74,puVar14);
    *puVar14 = local_1d0;
    puVar14[1] = local_1cc;
    puVar14[2] = local_1c8;
    puVar14[3] = local_1c4;
  }
  local_1d0 = local_320;
  local_1cc = iStack_31c;
  local_1c8 = puStack_318;
  local_1c4 = (undefined *)puStack_314;
  uStack_1c0 = local_310;
  iStack_1bc = (int)puStack_30c;
  local_1b8 = local_308;
  uStack_1b4 = local_304;
  puStack_1b0 = (uint *)local_300;
  uStack_1ac = local_2fc;
  uStack_1a8 = local_2f8;
  uStack_1a4 = uStack_2f4;
  puStack_1a0 = local_140;
  uStack_19c = local_13c;
  uStack_198 = uStack_138;
  uStack_194 = uStack_134;
  uStack_190 = local_130;
  iStack_18c = iStack_12c;
  local_188 = local_128;
  uStack_184 = uStack_124;
  uStack_180 = local_120;
  uStack_17c = local_11c;
  uStack_178 = local_118;
  uStack_174 = uStack_114;
  local_13c = 1;
  local_140 = (undefined4 *)0x1;
  FUN_01bed4e2(&uStack_138,&local_1d0,0x60);
  local_cc = local_324;
  local_d8 = local_330;
  iVar3 = thunk_FUN_01be5118(0x78);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar3,&local_140,0x78);
  return iVar3;
}

