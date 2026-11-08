// FUN_00ff3ca4 @ 00ff3ca4 size=2108 calls_out=12 calls_in=1
// strings: 

int FUN_00ff3ca4(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  int **ppiVar17;
  int **extraout_r12;
  int **extraout_r12_00;
  undefined4 **ppuVar18;
  undefined8 uVar19;
  int local_37c;
  uint *local_378;
  int local_374;
  int local_36c;
  int **local_358;
  undefined4 local_354;
  undefined1 local_350;
  uint *local_348;
  int local_344;
  int local_33c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320;
  uint local_318;
  undefined4 local_314;
  int local_310;
  undefined1 local_30c;
  undefined4 *local_308;
  undefined4 **ppuStack_304;
  int **ppiStack_300;
  uint *puStack_2fc;
  uint local_2f8;
  uint *puStack_2f4;
  undefined4 **local_2f0;
  int local_2ec;
  int **local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int *local_2d4;
  undefined4 *local_2d0;
  undefined4 **local_2cc;
  int **local_2c8;
  uint *local_2c4;
  uint local_2c0;
  uint *local_2bc;
  undefined4 **local_2b8;
  int local_2b4;
  int **local_2b0;
  int *local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  uint local_298;
  int iStack_294;
  uint uStack_290;
  undefined4 local_28c;
  undefined4 *local_288;
  undefined4 **local_284;
  int **local_280;
  uint *local_27c;
  uint local_278;
  uint *local_274;
  undefined4 **local_270;
  int local_26c;
  int **local_268;
  undefined4 *local_260;
  undefined4 **ppuStack_25c;
  int **ppiStack_258;
  uint *local_254;
  uint local_250;
  uint *local_24c;
  undefined4 **ppuStack_248;
  int local_244;
  undefined1 auStack_240 [128];
  undefined1 auStack_1c0 [128];
  undefined4 *local_140;
  undefined4 **local_13c;
  int **local_138;
  uint *puStack_134;
  uint uStack_130;
  uint *puStack_12c;
  undefined4 **local_128;
  int iStack_124;
  int **ppiStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int *piStack_110;
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
  int *local_b0;
  uint local_ac;
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
  uint local_48;
  undefined8 local_44;
  undefined1 local_3c;
  
  FUN_00fef934(&local_378,param_1);
  ppuVar18 = &local_260;
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (-1 < iVar3) {
    if (local_374 == 0) {
      local_288 = (undefined4 *)0x0;
      local_280 = local_358;
    }
    else {
      ppuVar18 = (undefined4 **)(local_374 * 0x91 + 0x95);
      local_288 = (undefined4 *)0x4;
      local_280 = (int **)(local_378 + local_374 * -0x24 + -0x24);
    }
    local_274 = local_378 + 1;
    local_26c = local_36c;
    local_278 = ~*local_378 & 0x80808080;
    local_27c = local_378;
    local_2a8 = param_2;
    local_284 = ppuVar18;
    local_268 = &local_2a8;
    uVar19 = thunk_FUN_01bee35a(local_378,(int)local_378 + local_374);
    iVar3 = (int)uVar19;
    puVar13 = (uint *)(iVar3 + 0x2c0);
    local_270 = (undefined4 **)((int)((ulonglong)uVar19 >> 0x20) + 1);
    if (*(char *)(iVar3 + 0x2d0) == '\0') {
      FUN_019ae6ac(&local_b0);
      *puVar13 = (uint)local_b0;
      *(uint *)(iVar3 + 0x2c4) = local_ac;
      *(uint *)(iVar3 + 0x2c8) = local_a8;
      *(undefined4 *)(iVar3 + 0x2cc) = uStack_a4;
      *(undefined1 *)(iVar3 + 0x2d0) = 1;
    }
    local_250 = *puVar13;
    local_24c = *(uint **)(iVar3 + 0x2c4);
    local_244 = *(int *)(iVar3 + 0x2cc);
    puVar8 = (uint *)(iVar3 + 0x2c8);
    ppuStack_248 = (undefined4 **)*puVar8;
    *puVar13 = local_250 + 1;
    *(uint *)(iVar3 + 0x2c4) = (int)local_24c + (uint)(0xfffffffe < local_250);
    local_260 = &DAT_0056d238;
    ppuStack_25c = (undefined4 **)0x0;
    ppiStack_258 = (int **)0x0;
    local_254 = (uint *)0x0;
    local_308 = local_288;
    ppuStack_304 = local_284;
    ppiStack_300 = local_280;
    puStack_2fc = local_27c;
    local_2f8 = local_278;
    puStack_2f4 = local_274;
    local_2f0 = local_270;
    local_2ec = local_26c;
    local_2e8 = local_268;
    if (local_26c != 0) {
      FUN_00708b7c(&local_260,local_26c,local_250,local_24c,ppuStack_248,local_244);
    }
    local_2d0 = local_288;
    local_2cc = local_284;
    local_2c8 = local_280;
    local_2c4 = local_27c;
    local_2c0 = local_278;
    local_2bc = local_274;
    local_2b8 = local_270;
    local_2b4 = local_26c;
    piVar16 = *local_2e8;
    uVar4 = local_278;
    iVar7 = local_26c;
    puVar12 = local_274;
    puVar15 = local_27c;
    while (iVar10 = 0, iVar7 != 0) {
      uVar5 = uVar4;
      puVar11 = puVar12;
      if (uVar4 == 0) {
        do {
          puVar12 = puVar11 + 1;
          uVar4 = *puVar11;
          puVar15 = puVar15 + -0x90;
          puVar11 = puVar12;
        } while ((uVar4 & 0x80808080) == 0x80808080);
        uVar5 = uVar4 & 0x80808080 ^ 0x80808080;
        local_2c4 = puVar15;
        local_2bc = puVar12;
      }
      uVar4 = uVar5 - 1 & uVar5;
      uVar5 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
      uVar9 = puVar15[uVar5 * -0x24 + -0x24];
      piVar14 = (int *)puVar15[uVar5 * -0x24 + -0x23];
      ppuVar18 = (undefined4 **)puVar15[uVar5 * -0x24 + -0x22];
      ppiVar17 = (int **)puVar15[uVar5 * -0x24 + -0x21];
      local_2c0 = uVar4;
      FUN_01bed4e2(auStack_240,puVar15 + uVar5 * -0x24 + -0x20,0x80);
      iVar10 = iVar7 + -1;
      if (piVar14 == (int *)0x4) break;
      puVar6 = (undefined4 *)0x3;
      if (piVar14 != (int *)0x3) {
        FUN_01bed4e2(&uStack_a4,auStack_240,0x80);
        do {
          iVar7 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar7 + 1;
        local_b0 = piVar14;
        local_ac = (uint)ppuVar18;
        local_a8 = (uint)ppiVar17;
        if (iVar7 < 0) goto LAB_00ff4468;
        FUN_00ff46f8(&local_140,&local_b0,piVar16);
        ppiVar17 = local_138;
        ppuVar18 = local_13c;
        puVar6 = local_140;
        FUN_01bed4e2(auStack_1c0,&puStack_134,0x80);
      }
      local_140 = puVar6;
      local_13c = ppuVar18;
      local_138 = ppiVar17;
      FUN_01bed4e2(&puStack_134,auStack_1c0,0x80);
      FUN_0070bb70(&local_b0,&local_260,uVar9,&local_140);
      if (local_b0 != (int *)0x4) {
        FUN_00fedc64(&local_b0);
      }
      iVar7 = iVar10;
    }
    local_2b4 = iVar10;
    FUN_0118c8b8(&local_2d0);
    ppuVar18 = ppuStack_248;
    local_308 = local_260;
    ppuStack_304 = ppuStack_25c;
    ppiStack_300 = ppiStack_258;
    puStack_2fc = local_254;
    local_2f8 = local_250;
    puStack_2f4 = local_24c;
    local_2f0 = ppuStack_248;
    local_2ec = local_244;
    local_2e0 = CONCAT31(local_2e0._1_3_,local_350);
    local_2e4 = local_354;
    local_2e8 = local_358;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *local_2a8;
      bVar2 = (bool)hasExclusiveAccess(local_2a8);
    } while (!bVar2);
    *local_2a8 = iVar7 + -1;
    ppiVar17 = extraout_r12;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011814ec(local_2a8);
      ppiVar17 = extraout_r12_00;
    }
    do {
      iVar7 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar7 + 1;
    if (-1 < iVar7) {
      if (local_344 == 0) {
        local_2d0 = (undefined4 *)0x0;
      }
      else {
        ppiVar17 = (int **)(local_348 + local_344 * -0x24 + -0x24);
        ppuVar18 = (undefined4 **)(local_344 * 0x91 + 0x95);
        local_2d0 = (undefined4 *)0x4;
      }
      local_2b0 = &local_2d4;
      local_2c0 = ~*local_348 & 0x80808080;
      local_2b4 = local_33c;
      local_2bc = local_348 + 1;
      local_2c4 = local_348;
      local_2b8 = (undefined4 **)((int)local_348 + local_344 + 1);
      local_2d4 = param_2;
      local_2cc = ppuVar18;
      local_2c8 = ppiVar17;
      if (*(char *)(iVar3 + 0x2d0) == '\0') {
        FUN_019ae6ac(&local_b0);
        *puVar13 = (uint)local_b0;
        *(uint *)(iVar3 + 0x2c4) = local_ac;
        *puVar8 = local_a8;
        *(undefined4 *)(iVar3 + 0x2cc) = uStack_a4;
        *(undefined1 *)(iVar3 + 0x2d0) = 1;
      }
      local_298 = *puVar13;
      iStack_294 = *(int *)(iVar3 + 0x2c4);
      uStack_290 = *puVar8;
      local_28c = *(undefined4 *)(iVar3 + 0x2cc);
      *puVar13 = local_298 + 1;
      *(uint *)(iVar3 + 0x2c4) = iStack_294 + (uint)(0xfffffffe < local_298);
      local_2a8 = &DAT_0056d238;
      uStack_2a4 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      local_288 = local_2d0;
      local_284 = local_2cc;
      local_280 = local_2c8;
      local_27c = local_2c4;
      local_278 = local_2c0;
      local_274 = local_2bc;
      local_270 = local_2b8;
      local_26c = local_2b4;
      local_268 = local_2b0;
      if (local_2b4 != 0) {
        FUN_00708b7c(&local_2a8,local_2b4,local_298,iStack_294,uStack_290,local_28c);
      }
      local_260 = local_2d0;
      ppuStack_25c = local_2cc;
      ppiStack_258 = local_2c8;
      local_254 = local_2c4;
      local_250 = local_2c0;
      local_24c = local_2bc;
      ppuStack_248 = local_2b8;
      local_244 = local_2b4;
      piVar16 = *local_268;
      local_37c = local_2b4;
      uVar4 = local_2c0;
      puVar13 = local_2bc;
      puVar8 = local_2c4;
      while (iVar3 = 0, local_37c != 0) {
        uVar5 = uVar4;
        puVar12 = puVar13;
        if (uVar4 == 0) {
          do {
            puVar13 = puVar12 + 1;
            uVar4 = *puVar12;
            puVar8 = puVar8 + -0x90;
            puVar12 = puVar13;
          } while ((uVar4 & 0x80808080) == 0x80808080);
          uVar5 = uVar4 & 0x80808080 ^ 0x80808080;
          local_254 = puVar8;
          local_24c = puVar13;
        }
        uVar4 = uVar5 - 1 & uVar5;
        uVar5 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                              (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        uVar9 = puVar8[uVar5 * -0x24 + -0x24];
        piVar14 = (int *)puVar8[uVar5 * -0x24 + -0x23];
        ppuVar18 = (undefined4 **)puVar8[uVar5 * -0x24 + -0x22];
        ppiVar17 = (int **)puVar8[uVar5 * -0x24 + -0x21];
        local_250 = uVar4;
        FUN_01bed4e2(auStack_240,puVar8 + uVar5 * -0x24 + -0x20,0x80);
        iVar3 = local_37c + -1;
        if (piVar14 == (int *)0x4) break;
        puVar6 = (undefined4 *)0x3;
        if (piVar14 != (int *)0x3) {
          FUN_01bed4e2(&uStack_a4,auStack_240,0x80);
          do {
            iVar7 = *piVar16;
            bVar2 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar2);
          *piVar16 = iVar7 + 1;
          local_b0 = piVar14;
          local_ac = (uint)ppuVar18;
          local_a8 = (uint)ppiVar17;
          if (iVar7 < 0) goto LAB_00ff4468;
          FUN_00ff46f8(&local_140,&local_b0,piVar16);
          ppiVar17 = local_138;
          ppuVar18 = local_13c;
          puVar6 = local_140;
          FUN_01bed4e2(auStack_1c0,&puStack_134,0x80);
        }
        local_140 = puVar6;
        local_13c = ppuVar18;
        local_138 = ppiVar17;
        FUN_01bed4e2(&puStack_134,auStack_1c0,0x80);
        FUN_0070bb70(&local_b0,&local_2a8,uVar9,&local_140);
        if (local_b0 != (int *)0x4) {
          FUN_00fedc64(&local_b0);
        }
        local_37c = iVar3;
      }
      local_244 = iVar3;
      FUN_0118c8b8(&local_260);
      local_b0 = local_2a8;
      local_ac = uStack_2a4;
      local_a8 = uStack_2a0;
      uStack_a4 = uStack_29c;
      local_a0 = local_298;
      iStack_9c = iStack_294;
      local_98 = uStack_290;
      uStack_94 = local_28c;
      local_88 = CONCAT31(local_88._1_3_,local_320);
      local_8c = local_324;
      local_90 = local_328;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_2d4;
        bVar2 = (bool)hasExclusiveAccess(local_2d4);
      } while (!bVar2);
      *local_2d4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011814ec(local_2d4);
      }
      if (local_318 < 2) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *param_2;
          bVar2 = (bool)hasExclusiveAccess(param_2);
        } while (!bVar2);
        *param_2 = iVar3 + -1;
        uVar4 = local_318;
        uVar19 = CONCAT44(local_310,local_314);
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_011814ec(param_2);
          uVar19 = CONCAT44(local_310,local_314);
        }
      }
      else {
        uVar19 = (**(code **)(local_310 + 0x10))(local_314,param_2);
        uVar4 = 1;
      }
      local_140 = local_308;
      local_13c = ppuStack_304;
      local_138 = ppiStack_300;
      puStack_134 = puStack_2fc;
      uStack_130 = local_2f8;
      puStack_12c = puStack_2f4;
      local_128 = local_2f0;
      iStack_124 = local_2ec;
      ppiStack_120 = local_2e8;
      uStack_11c = local_2e4;
      uStack_118 = local_2e0;
      uStack_114 = uStack_2dc;
      piStack_110 = local_b0;
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
      local_ac = 1;
      local_b0 = (int *)0x1;
      FUN_01bed4e2(&local_a8,&local_140,0x60);
      local_3c = local_30c;
      local_48 = uVar4;
      local_44 = uVar19;
      iVar3 = thunk_FUN_01be5118(0x78);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x78);
      }
      FUN_01bed4e2(iVar3,&local_b0,0x78);
      return iVar3;
    }
  }
LAB_00ff4468:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xff4468);
  (*pcVar1)();
}

