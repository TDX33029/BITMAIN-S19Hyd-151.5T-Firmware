// FUN_0100252c @ 0100252c size=1972 calls_out=13 calls_in=3
// strings: 

int FUN_0100252c(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint **ppuVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint *local_390;
  int local_38c;
  int local_384;
  uint **local_370;
  undefined4 local_36c;
  byte local_368;
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
  uint uStack_31c;
  uint *puStack_318;
  uint *puStack_314;
  uint local_310;
  uint *puStack_30c;
  int local_308;
  int local_304;
  uint **local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  uint *local_2ec;
  undefined4 *local_2e8;
  uint local_2e4;
  uint *local_2e0;
  uint *local_2dc;
  uint local_2d8;
  uint *local_2d4;
  int local_2d0;
  int local_2cc;
  uint **local_2c8;
  uint *local_2c0;
  undefined4 uStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  uint local_2b0;
  int iStack_2ac;
  int iStack_2a8;
  undefined4 local_2a4;
  undefined4 *local_2a0;
  uint local_29c;
  uint *local_298;
  uint *local_294;
  uint local_290;
  uint *local_28c;
  int local_288;
  int local_284;
  uint **local_280;
  undefined4 *local_278;
  uint uStack_274;
  uint *puStack_270;
  uint *local_26c;
  uint local_268;
  uint *local_264;
  int iStack_260;
  int local_25c;
  undefined1 auStack_258 [136];
  undefined4 *local_1d0;
  uint local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint uStack_1c0;
  uint *puStack_1bc;
  int local_1b8;
  int iStack_1b4;
  uint **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  uint *puStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  int iStack_18c;
  int local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint *local_140;
  undefined4 local_13c;
  int iStack_138;
  undefined4 uStack_134;
  uint local_130;
  int iStack_12c;
  int local_128;
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
  puVar12 = &local_2b0;
  uVar10 = (uint)local_368;
  do {
    uVar6 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = uVar6 + 1;
  if (-1 < (int)uVar6) {
    if (local_38c == 0) {
      local_2a0 = (undefined4 *)0x0;
    }
    else {
      puVar12 = local_390 + local_38c * -0x24 + -0x24;
      uVar6 = local_38c * 0x91 + 0x95;
      local_2a0 = (undefined4 *)0x4;
    }
    local_28c = local_390 + 1;
    local_290 = ~*local_390 & 0x80808080;
    local_284 = local_384;
    local_294 = local_390;
    local_2c0 = param_2;
    local_29c = uVar6;
    local_298 = puVar12;
    local_280 = &local_2c0;
    uVar16 = thunk_FUN_01bee35a(local_390,(int)local_390 + local_38c);
    iVar14 = (int)uVar16;
    puVar12 = (uint *)(iVar14 + 0x2c0);
    local_288 = (int)((ulonglong)uVar16 >> 0x20) + 1;
    if (*(char *)(iVar14 + 0x2d0) == '\0') {
      FUN_019ae6ac(&local_140);
      *puVar12 = (uint)local_140;
      *(undefined4 *)(iVar14 + 0x2c4) = local_13c;
      *(int *)(iVar14 + 0x2c8) = iStack_138;
      *(undefined4 *)(iVar14 + 0x2cc) = uStack_134;
      *(undefined1 *)(iVar14 + 0x2d0) = 1;
    }
    local_268 = *puVar12;
    local_264 = *(uint **)(iVar14 + 0x2c4);
    local_25c = *(int *)(iVar14 + 0x2cc);
    piVar5 = (int *)(iVar14 + 0x2c8);
    iStack_260 = *piVar5;
    *puVar12 = local_268 + 1;
    *(uint *)(iVar14 + 0x2c4) = (int)local_264 + (uint)(0xfffffffe < local_268);
    local_278 = &DAT_0056d238;
    uStack_274 = 0;
    puStack_270 = (uint *)0x0;
    local_26c = (uint *)0x0;
    local_320 = local_2a0;
    uStack_31c = local_29c;
    puStack_318 = local_298;
    puStack_314 = local_294;
    local_310 = local_290;
    puStack_30c = local_28c;
    local_308 = local_288;
    local_304 = local_284;
    local_300 = local_280;
    if (local_284 != 0) {
      FUN_00708b7c(&local_278,local_284,local_268,local_264,iStack_260,local_25c);
    }
    ppuVar3 = local_300;
    local_2e8 = local_2a0;
    local_2e4 = local_29c;
    local_2e0 = local_298;
    local_2dc = local_294;
    local_2d8 = local_290;
    local_2d4 = local_28c;
    local_2d0 = local_288;
    local_2cc = local_284;
    uVar6 = local_290;
    puVar8 = local_294;
    puVar9 = local_28c;
    iVar15 = local_284;
    while (iVar15 != 0) {
      uVar4 = uVar6;
      puVar7 = puVar9;
      if (uVar6 == 0) {
        do {
          puVar9 = puVar7 + 1;
          uVar6 = *puVar7;
          puVar8 = puVar8 + -0x90;
          puVar7 = puVar9;
        } while ((uVar6 & 0x80808080) == 0x80808080);
        uVar4 = uVar6 & 0x80808080 ^ 0x80808080;
        local_2dc = puVar8;
        local_2d4 = puVar9;
      }
      uVar6 = uVar4 - 1 & uVar4;
      uVar4 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                            (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
      puVar11 = (undefined4 *)puVar8[uVar4 * -0x24 + -0x24];
      uVar13 = puVar8[uVar4 * -0x24 + -0x23];
      local_2d8 = uVar6;
      FUN_01bed4e2(auStack_258,puVar8 + uVar4 * -0x24 + -0x22,0x88);
      iVar15 = iVar15 + -1;
      if (uVar13 == 4) goto LAB_010027ec;
      local_1d0 = puVar11;
      local_1cc = uVar13;
      FUN_01bed4e2(&local_1c8,auStack_258,0x88);
      puVar7 = *ppuVar3;
      do {
        uVar4 = *puVar7;
        bVar2 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar2);
      *puVar7 = uVar4 + 1;
      if ((int)uVar4 < 0) goto LAB_01002ce4;
      FUN_01002f5c(&local_13c,(uint)&local_1d0 | 4);
      FUN_0070bb70(local_b0,&local_278,puVar11,&local_13c);
      if (local_b0[0] != 4) {
        FUN_00fedc64(local_b0);
      }
    }
    iVar15 = 0;
LAB_010027ec:
    local_2cc = iVar15;
    FUN_00943cd0(&local_2e8);
    local_320 = local_278;
    uStack_31c = uStack_274;
    puStack_318 = puStack_270;
    puStack_314 = local_26c;
    local_310 = local_268;
    puStack_30c = local_264;
    local_308 = iStack_260;
    local_304 = local_25c;
    local_300 = local_370;
    local_2f8 = CONCAT31(local_2f8._1_3_,local_368);
    local_2fc = local_36c;
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *local_2c0;
      bVar2 = (bool)hasExclusiveAccess(local_2c0);
    } while (!bVar2);
    *local_2c0 = uVar6 - 1;
    if (uVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(local_2c0);
    }
    do {
      puVar8 = (uint *)*param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = (int)puVar8 + 1;
    if (-1 < (int)puVar8) {
      if (local_35c == 0) {
        local_2e8 = (undefined4 *)0x0;
      }
      else {
        uVar10 = local_35c * 0x91 + 0x95;
        puVar8 = local_360 + local_35c * -0x24 + -0x24;
        local_2e8 = (undefined4 *)0x4;
      }
      local_2c8 = &local_2ec;
      local_2d8 = ~*local_360 & 0x80808080;
      local_2d4 = local_360 + 1;
      local_2dc = local_360;
      local_2d0 = (int)local_360 + local_35c + 1;
      local_2cc = local_354;
      local_2ec = param_2;
      local_2e4 = uVar10;
      local_2e0 = puVar8;
      if (*(char *)(iVar14 + 0x2d0) == '\0') {
        FUN_019ae6ac(&local_140);
        *puVar12 = (uint)local_140;
        *(undefined4 *)(iVar14 + 0x2c4) = local_13c;
        *piVar5 = iStack_138;
        *(undefined4 *)(iVar14 + 0x2cc) = uStack_134;
        *(undefined1 *)(iVar14 + 0x2d0) = 1;
      }
      local_2b0 = *puVar12;
      iStack_2ac = *(int *)(iVar14 + 0x2c4);
      iStack_2a8 = *piVar5;
      local_2a4 = *(undefined4 *)(iVar14 + 0x2cc);
      *puVar12 = local_2b0 + 1;
      *(uint *)(iVar14 + 0x2c4) = iStack_2ac + (uint)(0xfffffffe < local_2b0);
      local_2c0 = &DAT_0056d238;
      uStack_2bc = 0;
      iStack_2b8 = 0;
      uStack_2b4 = 0;
      local_2a0 = local_2e8;
      local_29c = local_2e4;
      local_298 = local_2e0;
      local_294 = local_2dc;
      local_290 = local_2d8;
      local_28c = local_2d4;
      local_288 = local_2d0;
      local_284 = local_2cc;
      local_280 = local_2c8;
      if (local_2cc != 0) {
        FUN_00708b7c(&local_2c0,local_2cc,local_2b0,iStack_2ac,iStack_2a8,local_2a4);
      }
      ppuVar3 = local_280;
      local_278 = local_2e8;
      uStack_274 = local_2e4;
      puStack_270 = local_2e0;
      local_26c = local_2dc;
      local_268 = local_2d8;
      local_264 = local_2d4;
      iStack_260 = local_2d0;
      local_25c = local_2cc;
      uVar10 = local_2d8;
      iVar14 = local_2cc;
      puVar12 = local_2d4;
      puVar8 = local_2dc;
      while (iVar14 != 0) {
        uVar6 = uVar10;
        puVar9 = puVar12;
        if (uVar10 == 0) {
          do {
            puVar12 = puVar9 + 1;
            uVar10 = *puVar9;
            puVar8 = puVar8 + -0x90;
            puVar9 = puVar12;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar6 = uVar10 & 0x80808080 ^ 0x80808080;
          local_26c = puVar8;
          local_264 = puVar12;
        }
        uVar10 = uVar6 - 1 & uVar6;
        uVar6 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
        puVar11 = (undefined4 *)puVar8[uVar6 * -0x24 + -0x24];
        uVar4 = puVar8[uVar6 * -0x24 + -0x23];
        local_268 = uVar10;
        FUN_01bed4e2(auStack_258,puVar8 + uVar6 * -0x24 + -0x22,0x88);
        iVar14 = iVar14 + -1;
        if (uVar4 == 4) goto LAB_01002aa8;
        local_1d0 = puVar11;
        local_1cc = uVar4;
        FUN_01bed4e2(&local_1c8,auStack_258,0x88);
        puVar9 = *ppuVar3;
        do {
          uVar6 = *puVar9;
          bVar2 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar2);
        *puVar9 = uVar6 + 1;
        if ((int)uVar6 < 0) goto LAB_01002ce4;
        FUN_01002f5c(&local_13c,(uint)&local_1d0 | 4);
        FUN_0070bb70(local_b0,&local_2c0,puVar11,&local_13c);
        if (local_b0[0] != 4) {
          FUN_00fedc64(local_b0);
        }
      }
      iVar14 = 0;
LAB_01002aa8:
      local_25c = iVar14;
      FUN_00943cd0(&local_278);
      local_140 = local_2c0;
      local_13c = uStack_2bc;
      iStack_138 = iStack_2b8;
      uStack_134 = uStack_2b4;
      local_130 = local_2b0;
      iStack_12c = iStack_2ac;
      local_128 = iStack_2a8;
      uStack_124 = local_2a4;
      local_118 = CONCAT31(local_118._1_3_,local_338);
      local_120 = local_340;
      local_11c = local_33c;
      DataMemoryBarrier(0xb);
      do {
        uVar10 = *local_2ec;
        bVar2 = (bool)hasExclusiveAccess(local_2ec);
      } while (!bVar2);
      *local_2ec = uVar10 - 1;
      if (uVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0117fe74(local_2ec);
      }
      if (local_330 < 2) {
        local_d4 = FUN_011d8634(local_32c,local_328,param_2);
      }
      else {
        local_1c8 = (uint *)thunk_FUN_01be5118(4);
        if (local_1c8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,4);
        }
        *local_1c8 = (uint)param_2;
        local_1cc = local_328;
        local_1d0 = local_32c;
        local_1c4 = (uint *)&DAT_01c2207c;
        puVar11 = (undefined4 *)thunk_FUN_01be5118(0x10);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        local_d4 = CONCAT44(&DAT_01c21f74,puVar11);
        *puVar11 = local_1d0;
        puVar11[1] = local_1cc;
        puVar11[2] = local_1c8;
        puVar11[3] = local_1c4;
      }
      local_1d0 = local_320;
      local_1cc = uStack_31c;
      local_1c8 = puStack_318;
      local_1c4 = puStack_314;
      uStack_1c0 = local_310;
      puStack_1bc = puStack_30c;
      local_1b8 = local_308;
      iStack_1b4 = local_304;
      ppuStack_1b0 = local_300;
      uStack_1ac = local_2fc;
      uStack_1a8 = local_2f8;
      uStack_1a4 = uStack_2f4;
      puStack_1a0 = local_140;
      uStack_19c = local_13c;
      iStack_198 = iStack_138;
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
      local_140 = (uint *)0x1;
      FUN_01bed4e2(&iStack_138,&local_1d0,0x60);
      local_d8 = local_330;
      local_cc = local_324;
      iVar14 = thunk_FUN_01be5118(0x78);
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x78);
      }
      FUN_01bed4e2(iVar14,&local_140,0x78);
      return iVar14;
    }
  }
LAB_01002ce4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1002ce4);
  (*pcVar1)();
}

