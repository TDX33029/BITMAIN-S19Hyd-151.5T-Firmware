// FUN_00ff4dbc @ 00ff4dbc size=1524 calls_out=14 calls_in=3
// strings: Adding a route_layer before any routes is a no-op. Add the routes you want the layer to apply to first.

int FUN_00ff4dbc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_r5;
  uint uVar7;
  int unaff_r6;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_45c;
  undefined4 local_458;
  uint *local_448;
  int local_444;
  uint local_43c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined1 local_3dc;
  undefined4 local_3d8;
  int local_3d4;
  uint *local_3d0;
  uint *local_3cc;
  uint local_3c8;
  uint *local_3c4;
  int local_3c0;
  uint local_3bc;
  undefined4 *local_3b8;
  undefined4 *local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  uint local_3a0;
  int iStack_39c;
  undefined4 uStack_398;
  undefined4 local_394;
  undefined4 local_390;
  int iStack_38c;
  uint *puStack_388;
  uint *puStack_384;
  uint local_380;
  uint *puStack_37c;
  int iStack_378;
  uint local_374;
  undefined4 *puStack_370;
  undefined4 local_368;
  int iStack_364;
  uint *puStack_360;
  uint *local_35c;
  uint local_358;
  uint *local_354;
  int iStack_350;
  uint local_34c;
  undefined1 auStack_348 [108];
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined4 *local_2c0;
  uint local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  uint local_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined1 local_254;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined *puStack_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined *local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined1 auStack_134 [96];
  uint local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar13 = CONCAT44(local_45c,local_458);
  FUN_00711858(&local_448,param_1);
  if (local_43c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Adding a route_layer before any routes is a no-op. Add the routes you want the layer to apply to first."
                 ,0xcf,param_2);
  }
  if (local_444 == 0) {
    local_3d8 = 0;
  }
  else {
    unaff_r5 = local_448 + local_444 * -0x24 + -0x24;
    unaff_r6 = local_444 * 0x91 + 0x95;
    local_3d8 = 4;
  }
  local_3b8 = &local_238;
  local_3bc = local_43c;
  local_3c4 = local_448 + 1;
  local_3c8 = ~*local_448 & 0x80808080;
  local_3cc = local_448;
  local_3d4 = unaff_r6;
  local_3d0 = unaff_r5;
  uVar12 = thunk_FUN_01bee35a(local_448,(int)local_448 + local_444);
  iVar2 = (int)uVar12;
  puVar4 = (uint *)(iVar2 + 0x2c0);
  local_3c0 = (int)((ulonglong)uVar12 >> 0x20) + 1;
  if (*(char *)(iVar2 + 0x2d0) == '\0') {
    FUN_019ae6ac(&local_2c8);
    *puVar4 = local_2c8;
    *(uint *)(iVar2 + 0x2c4) = local_2c4;
    *(undefined4 **)(iVar2 + 0x2c8) = local_2c0;
    *(uint *)(iVar2 + 0x2cc) = local_2bc;
    *(undefined1 *)(iVar2 + 0x2d0) = 1;
  }
  local_3a0 = *puVar4;
  iStack_39c = *(int *)(iVar2 + 0x2c4);
  uStack_398 = *(undefined4 *)(iVar2 + 0x2c8);
  local_394 = *(undefined4 *)(iVar2 + 0x2cc);
  *puVar4 = local_3a0 + 1;
  *(uint *)(iVar2 + 0x2c4) = iStack_39c + (uint)(0xfffffffe < local_3a0);
  local_3b0 = &DAT_0056d238;
  uStack_3ac = 0;
  uStack_3a8 = 0;
  uStack_3a4 = 0;
  local_390 = local_3d8;
  iStack_38c = local_3d4;
  puStack_388 = local_3d0;
  puStack_384 = local_3cc;
  local_380 = local_3c8;
  puStack_37c = local_3c4;
  iStack_378 = local_3c0;
  local_374 = local_3bc;
  puStack_370 = local_3b8;
  if (local_3bc != 0) {
    FUN_00708b7c(&local_3b0);
  }
  local_368 = local_3d8;
  iStack_364 = local_3d4;
  puStack_360 = local_3d0;
  local_35c = local_3cc;
  local_358 = local_3c8;
  local_354 = local_3c4;
  iStack_350 = local_3c0;
  local_34c = local_3bc;
  uVar1 = local_3c8;
  uVar6 = local_3bc;
  puVar4 = local_3c4;
  puVar11 = local_3cc;
  while( true ) {
    uVar3 = 0;
    if (uVar6 == 0) break;
    uVar3 = uVar1;
    puVar10 = puVar4;
    if (uVar1 == 0) {
      do {
        puVar4 = puVar10 + 1;
        uVar1 = *puVar10;
        puVar11 = puVar11 + -0x90;
        puVar10 = puVar4;
      } while ((uVar1 & 0x80808080) == 0x80808080);
      uVar3 = uVar1 & 0x80808080 ^ 0x80808080;
      local_35c = puVar11;
      local_354 = puVar4;
    }
    uVar1 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    uVar8 = puVar11[uVar3 * -0x24 + -0x24];
    uVar7 = puVar11[uVar3 * -0x24 + -0x23];
    uVar5 = puVar11[uVar3 * -0x24 + -0x22];
    uVar9 = puVar11[uVar3 * -0x24 + -0x21];
    local_358 = uVar1;
    FUN_01bed4e2(auStack_348,puVar11 + uVar3 * -0x24 + -0x20,0x80);
    uVar3 = uVar6 - 1;
    if (uVar7 == 4) break;
    local_2c8 = uVar8;
    local_2c4 = uVar7;
    local_2c0 = (undefined4 *)uVar5;
    local_2bc = uVar9;
    FUN_01bed4e2(&uStack_2b8,auStack_348,0x80);
    if (uVar7 == 3) {
      local_13c = FUN_00fad0dc(uVar5,uVar9);
      local_138 = &DAT_01c1c210;
      uVar6 = uVar3;
      local_140 = 3;
    }
    else {
      local_b0 = uVar7;
      local_ac = uVar5;
      local_a8 = uVar9;
      FUN_01bed4e2(auStack_a4,auStack_348,0x80);
      FUN_00ff56f8(&local_1bc,(uint)&local_2c8 | 4);
      FUN_00ff56f8(&local_1b0,auStack_a4);
      FUN_00ff56f8(&local_1a0,auStack_98);
      FUN_00ff56f8(&local_190,auStack_8c);
      FUN_00ff56f8(&local_180,auStack_80);
      FUN_00ff56f8(&local_170,auStack_74);
      FUN_00ff56f8(&local_160,auStack_68);
      FUN_00ff56f8(&local_150,auStack_5c);
      FUN_00ff56f8(&local_140,auStack_50);
      uVar6 = local_44;
      if (local_44 < 2) {
        uVar13 = FUN_00fad0dc();
      }
      else {
        uVar13 = FUN_011d888c(local_40,local_3c);
      }
      local_238 = local_2dc;
      uStack_234 = uStack_2d8;
      uStack_230 = uStack_2d4;
      uStack_22c = uStack_2d0;
      uStack_228 = uStack_2cc;
      local_220 = local_1b0;
      uStack_21c = uStack_1ac;
      uStack_218 = uStack_1a8;
      local_214 = local_1a0;
      uStack_210 = uStack_19c;
      uStack_20c = uStack_198;
      local_208 = local_190;
      uStack_204 = uStack_18c;
      uStack_200 = uStack_188;
      local_1fc = local_180;
      uStack_1f8 = uStack_17c;
      uStack_1f4 = uStack_178;
      local_1f0 = local_170;
      uStack_1ec = uStack_16c;
      uStack_1e8 = uStack_168;
      local_1e4 = local_160;
      uStack_1e0 = uStack_15c;
      uStack_1dc = uStack_158;
      local_1d8 = local_150;
      uStack_1d4 = uStack_14c;
      uStack_1d0 = uStack_148;
      local_1cc = local_140;
      uStack_1c8 = local_13c;
      puStack_1c4 = local_138;
      local_13c = local_1b8;
      local_138 = local_1b4;
      local_140 = local_1bc;
    }
    FUN_01bed4e2(auStack_134,&local_220,0x60);
    local_c8 = local_238;
    uStack_c4 = uStack_234;
    uStack_c0 = uStack_230;
    uStack_bc = uStack_22c;
    uStack_b8 = uStack_228;
    local_d4 = uVar6;
    local_d0 = uVar13;
    FUN_0070bb70(&local_b0,&local_3b0,uVar8,&local_140);
    if (local_b0 != 4) {
      FUN_00fedc64(&local_b0);
    }
    uVar6 = uVar3;
  }
  local_34c = uVar3;
  FUN_00943cd0(&local_368);
  local_2c0 = local_3b0;
  local_2bc = uStack_3ac;
  uStack_2b8 = uStack_3a8;
  uStack_2b4 = uStack_3a4;
  local_2b0 = local_3a0;
  iStack_2ac = iStack_39c;
  uStack_2a8 = uStack_398;
  uStack_2a4 = local_394;
  local_290 = local_418;
  uStack_28c = uStack_414;
  uStack_288 = uStack_410;
  uStack_284 = uStack_40c;
  uStack_280 = uStack_408;
  uStack_27c = uStack_404;
  local_278 = local_400;
  uStack_274 = uStack_3fc;
  uStack_270 = uStack_3f8;
  uStack_26c = uStack_3f4;
  uStack_268 = uStack_3f0;
  uStack_264 = uStack_3ec;
  local_260 = local_3e8;
  uStack_25c = uStack_3e4;
  uStack_258 = uStack_3e0;
  local_29c = local_424;
  local_2a0 = local_428;
  local_2c4 = 1;
  local_2c8 = 1;
  local_254 = local_3dc;
  iVar2 = thunk_FUN_01be5118(0x78);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar2,&local_2c8,0x78);
  return iVar2;
}

