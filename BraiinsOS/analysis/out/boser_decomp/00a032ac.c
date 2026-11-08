// FUN_00a032ac @ 00a032ac size=3936 calls_out=27 calls_in=3
// strings: assertion failed: prev | TryMaybeDone polled after value taken | You definitely encountered a bug! | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a032ac(uint *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  int *piVar28;
  int iVar29;
  undefined1 *puVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int iVar35;
  int *piVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  bool bVar42;
  undefined8 uVar43;
  undefined1 *local_464;
  undefined1 *local_460;
  undefined1 *local_430;
  undefined4 local_410;
  undefined1 *local_408;
  undefined1 *local_404;
  undefined1 *local_400;
  undefined1 *local_3f4;
  undefined1 *local_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint local_3dc;
  uint uStack_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  uint uStack_3cc;
  uint local_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  uint uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 local_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 *local_378;
  undefined1 *puStack_374;
  undefined1 *puStack_370;
  undefined1 *local_36c;
  undefined1 *puStack_368;
  undefined1 *puStack_364;
  undefined1 *puStack_360;
  undefined1 local_358 [24];
  undefined1 *local_340;
  undefined1 *puStack_33c;
  undefined1 *puStack_338;
  undefined1 *local_334;
  undefined1 *puStack_330;
  undefined1 *puStack_32c;
  undefined1 *puStack_328;
  uint local_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint uStack_310;
  undefined1 *local_308;
  undefined1 *local_304;
  undefined1 *local_300;
  undefined1 *local_2fc;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f4;
  undefined1 *local_2f0;
  undefined1 *local_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 *local_2e0;
  undefined1 *puStack_2dc;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d4;
  undefined1 *local_2d0;
  undefined1 *puStack_2cc;
  undefined1 *local_2c0;
  undefined1 *puStack_2bc;
  undefined1 *puStack_2b8;
  undefined1 *local_2b4;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2ac;
  undefined1 *puStack_2a8;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  undefined1 *local_288;
  undefined1 *puStack_284;
  undefined1 *puStack_280;
  undefined1 *local_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  uint local_268;
  uint uStack_264;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  undefined *local_250;
  int local_24c;
  undefined **local_248;
  undefined **local_244;
  undefined4 local_240;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  undefined1 *local_208;
  undefined1 *puStack_204;
  undefined1 *puStack_200;
  undefined1 *local_1fc;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f4;
  undefined1 *puStack_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e4;
  undefined1 *puStack_1e0;
  undefined1 *local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d4;
  undefined1 *local_1d0;
  undefined1 *local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c4;
  undefined1 *local_1c0;
  undefined1 *puStack_1bc;
  undefined1 *puStack_1b8;
  undefined1 *local_1b4;
  undefined1 *local_1b0;
  undefined1 *puStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  
  puVar15 = (uint *)(param_2 + 10);
  if (*puVar15 != 0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_320 | 4);
    puVar3 = (undefined4 *)((uint)&local_220 | 4);
    piVar36 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_238 | 4);
    puVar8 = (uint *)((uint)&local_308 | 4);
    puVar9 = (uint *)((uint)&local_1e8 | 4);
    puVar10 = (uint *)(param_2 + 2);
    piVar28 = param_2 + 5;
    puVar5 = (undefined4 *)((uint)local_358 | 4);
LAB_00a037b8:
    if (param_2[9] == 0) {
LAB_00a03848:
      iVar25 = *piVar28;
      uVar14 = 0;
      DataMemoryBarrier(0xb);
      local_400 = (undefined1 *)0x0;
      if (iVar25 != 0) {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(iVar25 + 0x1c8) == *(int *)(*piVar36 + 8) + 8);
        local_400 = *(undefined1 **)(iVar25 + 0x1d0);
      }
      iVar25 = *piVar36;
      piVar16 = (int *)*param_3;
      FUN_01348e78(iVar25 + 0xc);
      local_3f4 = (undefined1 *)0x0;
      do {
        uVar43 = FUN_009d0584(iVar25 + 8);
        puVar17 = (uint *)((ulonglong)uVar43 >> 0x20);
        if ((int)uVar43 != 0) {
          if ((int)uVar43 == 1) {
            puVar27 = (undefined1 *)0x3;
            if (*piVar28 == 0) {
              puVar27 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
          }
          else {
LAB_00a03d94:
            (**(code **)(*piVar16 + 8))(piVar16[1]);
            puVar27 = (undefined1 *)0x3;
          }
          puVar38 = local_430;
          goto LAB_00a03db0;
        }
        if ((*puVar17 & 1) == 0) {
          puVar17 = puVar17 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar24 = *puVar17;
            bVar42 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar42);
          *puVar17 = uVar24 - 1;
          if (uVar24 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a978b8();
          }
        }
        else {
          iVar25 = FUN_009cfc1c(piVar36,puVar17);
          pcVar11 = (char *)(iVar25 + 0x1e4);
          DataMemoryBarrier(0xb);
          do {
            cVar1 = *pcVar11;
            bVar42 = (bool)hasExclusiveAccess(pcVar11);
          } while (!bVar42);
          *pcVar11 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
          }
          *(undefined1 *)(iVar25 + 0x1e5) = 0;
          iVar39 = iVar25 + 8;
          local_240 = 0;
          local_250 = &DAT_01c0ccb4;
          uVar24 = puVar17[0x70];
          uVar12 = puVar17[0x71];
          local_248 = &local_250;
          local_24c = iVar39;
          local_244 = local_248;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar17[0x6f]) {
          case '\0':
            puVar17[0x2f] = 1;
            puVar22 = (uint *)0x0;
            if (puVar17[0x66] != 0) {
              puVar22 = puVar17 + 0x67;
            }
            *(char *)(puVar17 + 0x37) = (char)puVar17[0x6e];
            puVar17[0x31] = puVar17[0x2e];
            puVar17[0x32] = (uint)puVar22;
            puVar17[0x33] = puVar17[0x6a];
            puVar17[0x34] = puVar17[0x6b];
            puVar17[0x35] = puVar17[0x6c];
            puVar17[0x36] = puVar17[0x6d];
            puVar17[0x30] = 0;
            iVar35 = *(int *)puVar17[0x6c];
            FUN_00b1c19c(puVar17 + 0x38);
            uVar18 = puVar17[0x39];
            uVar13 = puVar17[0x3a];
            FUN_00a04730(puVar17 + 0x3b);
            uVar40 = puVar17[100];
            uVar19 = *(int *)(uVar40 + 0x3c) + 8;
            uVar23 = *(uint *)(uVar40 + 0x40);
            if (*(int *)(uVar40 + 0x4c) == 0) {
              uVar31 = 0;
              uVar20 = uVar19;
            }
            else {
              uVar31 = *(int *)(uVar40 + 0x4c) + 8;
              uVar20 = *(uint *)(uVar40 + 0x50);
            }
            puVar17[0x3e] = (uint)(puVar17 + 2);
            puVar17[0x61] = uVar20;
            puVar17[0x59] = uVar18;
            puVar17[0x5a] = uVar13;
            puVar17[0x5c] = puVar17[0x3d];
            puVar17[0x5d] = uVar19;
            *(undefined1 *)(puVar17 + 99) = 0;
            puVar17[0x57] = iVar35 + 8;
            puVar17[0x5b] = puVar17[0x3c];
            puVar17[0x5e] = uVar23;
            puVar17[0x2a] = (uint)(puVar17 + 0x65);
            puVar17[0x2b] = (uint)(puVar17 + 0x2f);
            puVar17[0x2c] = uVar40;
            puVar17[0x5f] = uVar40 + 8;
            puVar17[0x60] = uVar31;
            puVar17[0x58] = (uint)(puVar17 + 0x30);
            *(undefined1 *)(puVar17 + 0x2d) = 0;
            *(char *)(puVar17 + 0x62) = (char)puVar17[0x37];
            puVar17[0x3f] = (uint)(puVar17 + 0x3e);
            puVar17[0x40] = (uint)&DAT_01c12450;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21a2c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21a2c);
          }
          FUN_009e8f3c(&local_308,puVar17 + 0x3f,&local_248);
          puVar37 = puStack_2cc;
          puVar38 = local_2f0;
          puVar27 = local_308;
          if (local_308 != (undefined1 *)0x2) goto LAB_00a03b98;
          *(undefined1 *)(puVar17 + 0x6f) = 3;
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar25 + 0x1e5) != '\0') {
            uVar14 = uVar14 + 1;
          }
          local_3f4 = local_3f4 + 1;
          do {
            iVar35 = *piVar28;
            bVar42 = (bool)hasExclusiveAccess(piVar28);
          } while (!bVar42);
          *piVar28 = iVar39;
          DataMemoryBarrier(0xb);
          if (iVar35 == 0) {
            *(undefined4 *)(iVar25 + 0x1d8) = 1;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar25 + 0x1d0) = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(iVar35 + 0x1c8) == *(int *)(*piVar36 + 8) + 8);
            *(int *)(iVar25 + 0x1d8) = *(int *)(iVar35 + 0x1d0) + 1;
            DataMemoryBarrier(0xb);
            *(int *)(iVar25 + 0x1d0) = iVar35;
            *(int *)(iVar35 + 0x1cc) = iVar39;
          }
          if ((1 < uVar14) || (local_3f4 == local_400)) goto LAB_00a03d94;
        }
        iVar25 = *piVar36;
      } while( true );
    }
    uVar14 = *(uint *)(param_2[8] + 0x40);
    iVar25 = *(int *)(param_2[8] + 0x44);
    if (uVar14 != *puVar10 || iVar25 != param_2[3]) goto LAB_00a03848;
    *puVar10 = uVar14 + 1;
    param_2[3] = iVar25 + (uint)(0xfffffffe < uVar14);
    FUN_00b1c730(&local_308,param_2 + 7);
    local_320 = *puVar8;
    uStack_31c = puVar8[1];
    uStack_318 = puVar8[2];
    uStack_314 = puVar8[3];
    uStack_310 = puVar8[4];
    local_340 = local_2ec;
    puStack_33c = puStack_2e8;
    puStack_338 = puStack_2e4;
    local_334 = local_2e0;
    puStack_330 = puStack_2dc;
    puStack_32c = puStack_2d8;
    puStack_328 = puStack_2d4;
    local_460 = local_2d0;
    puVar27 = local_308;
    puVar38 = local_2f0;
    local_464 = puStack_2cc;
    goto LAB_00a03db0;
  }
  iVar25 = *param_2;
  puVar27 = (undefined1 *)param_2[1];
  local_3f0 = (undefined1 *)0x3;
  if (puVar27 == (undefined1 *)0x0) {
    puVar38 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_304 = (undefined1 *)0x8;
    local_308 = (undefined1 *)0x0;
LAB_00a03f8c:
    param_1[1] = (uint)local_308;
    param_1[2] = (uint)local_304;
    param_1[3] = (uint)puVar38;
    *param_1 = 2;
    local_300 = puVar38;
    FUN_00a04540(iVar25,puVar27);
  }
  else {
    iVar39 = 0;
    puVar2 = (undefined4 *)((uint)&local_1e8 | 4);
    puVar3 = (undefined4 *)((uint)&local_340 | 4);
    puVar4 = (undefined4 *)((uint)&local_288 | 4);
    puVar5 = (undefined4 *)((uint)&local_2c0 | 4);
    do {
      piVar28 = (int *)(iVar25 + iVar39);
      if (*piVar28 == 0) {
        iVar35 = iVar25 + iVar39;
        puVar6 = (undefined4 *)(iVar35 + 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar35 + 0x1bc)) {
        case 0:
          *(undefined1 *)(iVar35 + 0xdc) = *(undefined1 *)(iVar35 + 0x1b8);
          iVar21 = 0;
          if (*(int *)(iVar35 + 0x198) != 0) {
            iVar21 = iVar35 + 0x19c;
          }
          *(undefined4 *)(iVar35 + 0xc4) = *(undefined4 *)(iVar35 + 0xb8);
          *(int *)(iVar35 + 200) = iVar21;
          *(undefined4 *)(iVar35 + 0xcc) = *(undefined4 *)(iVar35 + 0x1a8);
          *(undefined4 *)(iVar35 + 0xd0) = *(undefined4 *)(iVar35 + 0x1ac);
          *(undefined4 *)(iVar35 + 0xc0) = 0;
          *(int **)(iVar35 + 0xd4) = *(int **)(iVar35 + 0x1b0);
          *(undefined4 *)(iVar35 + 0xd8) = *(undefined4 *)(iVar35 + 0x1b4);
          *(undefined4 *)(iVar35 + 0xbc) = 1;
          iVar21 = **(int **)(iVar35 + 0x1b0);
          FUN_00b1c19c(iVar35 + 0xe0);
          uVar32 = *(undefined4 *)(iVar35 + 0xe4);
          uVar34 = *(undefined4 *)(iVar35 + 0xe8);
          FUN_00a04730(iVar35 + 0xec);
          iVar41 = *(int *)(iVar35 + 400);
          local_408 = (undefined1 *)(*(int *)(iVar41 + 0x3c) + 8);
          local_404 = *(undefined1 **)(iVar41 + 0x40);
          if (*(int *)(iVar41 + 0x4c) == 0) {
            iVar29 = 0;
          }
          else {
            iVar29 = *(int *)(iVar41 + 0x4c) + 8;
            local_410 = *(undefined4 *)(iVar41 + 0x50);
          }
          *(int *)(iVar35 + 0xf8) = (int)puVar6;
          *(undefined1 *)(iVar35 + 0x18c) = 0;
          *(undefined4 *)(iVar35 + 0x170) = *(undefined4 *)(iVar35 + 0xf4);
          *(int *)(iVar35 + 0x17c) = iVar41 + 8;
          *(undefined1 **)(iVar35 + 0x174) = local_408;
          *(undefined4 *)(iVar35 + 0x184) = local_410;
          *(undefined1 **)(iVar35 + 0x178) = local_404;
          *(int *)(iVar35 + 0x15c) = iVar21 + 8;
          *(undefined4 **)(iVar35 + 0x160) = (undefined4 *)(iVar35 + 0xc0);
          *(undefined4 *)(iVar35 + 0x164) = uVar32;
          *(undefined1 *)(iVar35 + 0xb4) = 0;
          *(undefined1 *)(iVar35 + 0x188) = *(undefined1 *)(iVar35 + 0xdc);
          *(int *)(iVar35 + 0x180) = iVar29;
          *(undefined4 *)(iVar35 + 0x168) = uVar34;
          *(undefined4 *)(iVar35 + 0x16c) = *(undefined4 *)(iVar35 + 0xf0);
          *(int *)(iVar35 + 0xa8) = iVar35 + 0x194;
          *(undefined4 **)(iVar35 + 0xac) = (undefined4 *)(iVar35 + 0xbc);
          *(int *)(iVar35 + 0xb0) = iVar41;
          *(int **)(iVar35 + 0xfc) = (int *)(iVar35 + 0xf8);
          *(undefined **)(iVar35 + 0x100) = &DAT_01c12450;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_1e8,iVar35 + 0xfc,param_3);
        puVar37 = local_1d0;
        puVar38 = local_1e8;
        if (local_1e8 == (undefined1 *)0x2) {
          *(undefined1 *)(iVar35 + 0x1bc) = 3;
LAB_00a03500:
          if (local_3f0 < (undefined1 *)0x2) {
            FUN_006c9ae0(&local_3f0);
          }
          local_3f0 = (undefined1 *)0x2;
        }
        else {
          local_2c0 = (undefined1 *)*puVar2;
          puStack_2bc = (undefined1 *)puVar2[1];
          puStack_2b8 = (undefined1 *)puVar2[2];
          local_2b4 = (undefined1 *)puVar2[3];
          puStack_2b0 = (undefined1 *)puVar2[4];
          local_308 = local_1cc;
          local_304 = local_1c8;
          local_300 = local_1c4;
          local_2fc = local_1c0;
          puStack_2f8 = puStack_1bc;
          puStack_2f4 = puStack_1b8;
          local_2f0 = local_1b4;
          puVar26 = local_1b0;
          puVar30 = puStack_1ac;
          cVar1 = *(char *)(iVar35 + 0x18c);
          bVar42 = cVar1 == '\x03';
          if (bVar42) {
            cVar1 = *(char *)(iVar35 + 0x150);
          }
          if (bVar42 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar35 + 0x154),*(undefined4 *)(iVar35 + 0x158));
          }
          if (((uint)puVar38 & 1) == 0) {
            if (puVar37 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar34 = puVar5[1];
            uVar32 = puVar5[2];
            uVar33 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar34;
            puVar4[2] = uVar32;
            puVar4[3] = uVar33;
          }
          else {
            local_288 = local_2c0;
            puStack_284 = puStack_2bc;
            puStack_280 = puStack_2b8;
            local_27c = local_2b4;
            puStack_278 = puStack_2b0;
            local_408 = puVar30;
            local_404 = puVar26;
          }
          cVar1 = *(char *)(iVar35 + 0xb4);
          bVar42 = cVar1 == '\x03';
          if (bVar42) {
            cVar1 = *(char *)(iVar35 + 0xa4);
          }
          if (bVar42 && cVar1 == '\x03') {
            FUN_00a046a4(puVar6);
          }
          FUN_019bb7e0(*(undefined4 *)(iVar35 + 0xec),*(undefined4 *)(iVar35 + 0xf0));
          if (*(int *)(iVar35 + 0xe0) != -0x80000000) {
            FUN_019bb7e0(*(int *)(iVar35 + 0xe0),*(undefined4 *)(iVar35 + 0xe4));
          }
          local_340 = local_288;
          puStack_33c = puStack_284;
          puStack_338 = puStack_280;
          local_334 = local_27c;
          puStack_330 = puStack_278;
          local_208 = local_308;
          puStack_204 = local_304;
          puStack_200 = local_300;
          local_1fc = local_2fc;
          puStack_1f8 = puStack_2f8;
          puStack_1f4 = puStack_2f4;
          puStack_1f0 = local_2f0;
          *(undefined1 *)(iVar35 + 0x1bc) = 1;
          if (((uint)puVar38 & 1) == 0) {
            FUN_00a045b4(piVar28);
            puVar7 = (undefined4 *)(iVar25 + iVar39);
            *puVar7 = 1;
            puVar7[1] = 0;
            uVar34 = puVar3[1];
            uVar32 = puVar3[2];
            uVar33 = puVar3[3];
            *puVar6 = *puVar3;
            *(undefined4 *)(iVar35 + 0xc) = uVar34;
            *(undefined4 *)(iVar35 + 0x10) = uVar32;
            *(undefined4 *)(iVar35 + 0x14) = uVar33;
            puVar7[6] = puVar37;
            puVar7[7] = local_208;
            puVar7[8] = puStack_204;
            puVar7[9] = puStack_200;
            puVar7[10] = local_1fc;
            puVar7[0xb] = puStack_1f8;
            puVar7[0xc] = puStack_1f4;
            puVar7[0xd] = puStack_1f0;
          }
          else {
            local_1e8 = local_288;
            local_1e4 = puStack_284;
            puStack_1e0 = puStack_280;
            local_1dc = local_27c;
            local_1d8 = puStack_278;
            local_1d4 = puVar37;
            local_1d0 = local_308;
            local_1cc = local_304;
            local_1c8 = local_300;
            local_1c4 = local_2fc;
            local_1c0 = puStack_2f8;
            puStack_1bc = puStack_2f4;
            puStack_1b8 = local_2f0;
            local_1b4 = local_404;
            local_1b0 = local_408;
            FUN_00a045b4(piVar28);
            puVar38 = local_1e8;
            *piVar28 = 2;
            piVar28[1] = 0;
            local_3b0 = *puVar2;
            uStack_3ac = puVar2[1];
            uStack_3a8 = puVar2[2];
            uStack_3a4 = puVar2[3];
            local_3a0 = puVar2[4];
            uStack_39c = puVar2[5];
            uStack_398 = puVar2[6];
            uStack_394 = puVar2[7];
            uStack_390 = puVar2[8];
            local_38c = puVar2[9];
            uStack_388 = puVar2[10];
            uStack_384 = puVar2[0xb];
            uStack_380 = puVar2[0xc];
            uStack_37c = puVar2[0xd];
            if (local_1e8 != (undefined1 *)0x2) {
              if (local_1e8 == (undefined1 *)0x3) goto LAB_00a03500;
              if (local_3f0 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_3f0);
              }
              local_3f0 = puVar38;
              puVar2 = (undefined4 *)((uint)&local_3f0 | 4);
              *puVar2 = local_3b0;
              puVar2[1] = uStack_3ac;
              puVar2[2] = uStack_3a8;
              puVar2[3] = uStack_3a4;
              puVar2[4] = local_3a0;
              puVar2[5] = uStack_39c;
              puVar2[6] = uStack_398;
              puVar2[7] = uStack_394;
              puVar2[8] = uStack_390;
              puVar2[9] = local_38c;
              puVar2[10] = uStack_388;
              puVar2[0xb] = uStack_384;
              puVar2[0xc] = uStack_380;
              puVar2[0xd] = uStack_37c;
              break;
            }
          }
        }
      }
      else if (*piVar28 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar39 = iVar39 + 0x1c0;
    } while ((int)puVar27 * 0x1c0 != iVar39);
    if ((undefined1 *)0x1 < local_3f0) {
      if (local_3f0 == (undefined1 *)0x2) {
LAB_00a03ef0:
        *param_1 = 3;
        return;
      }
      if (local_3f0 == (undefined1 *)0x3) {
        uVar14 = 8;
        uVar34 = 0;
        *param_2 = 8;
        param_2[1] = 0;
        iVar39 = (int)puVar27 * 0x30;
        if ((undefined1 *)0x2aaaaaa < puVar27) {
LAB_00a03ee0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar34,iVar39);
        }
        puVar37 = (undefined1 *)0x0;
        if (iVar39 != 0) {
          uVar34 = 8;
          uVar14 = FUN_01298504(iVar39,8);
          puVar37 = puVar27;
          if (uVar14 == 0) goto LAB_00a03ee0;
        }
        puVar38 = (undefined1 *)0x0;
        local_308 = puVar37;
        local_304 = (undefined1 *)uVar14;
        if (puVar27 != (undefined1 *)0x0) {
          puVar3 = (undefined4 *)(iVar25 + 0x1c);
          puVar38 = (undefined1 *)0x0;
          puVar2 = (undefined4 *)(uVar14 + 0x14);
          do {
            piVar28 = puVar3 + -7;
            if (*piVar28 != 1 || puVar3[-6] != 0) {
LAB_00a04248:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_1e8,piVar28,0x1c0);
            *piVar28 = 2;
            puVar3[-6] = 0;
            if (local_1e8 != (undefined1 *)0x1 || local_1e4 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar39 = puVar3[-1];
            if (iVar39 == -0x7ffffff9) goto LAB_00a04248;
            local_1e8 = (undefined1 *)*puVar3;
            local_1e4 = (undefined1 *)puVar3[1];
            puStack_1e0 = (undefined1 *)puVar3[2];
            local_1dc = (undefined1 *)puVar3[3];
            local_1d8 = (undefined1 *)puVar3[4];
            local_1d4 = (undefined1 *)puVar3[5];
            local_1d0 = (undefined1 *)puVar3[6];
            FUN_01bed864(puVar2 + -5,puVar3 + -5,0x10);
            puVar2[-1] = iVar39;
            puVar3 = puVar3 + 0x70;
            puVar38 = puVar38 + 1;
            *puVar2 = local_1e8;
            puVar2[1] = local_1e4;
            puVar2[2] = puStack_1e0;
            puVar2[3] = local_1dc;
            puVar2[4] = local_1d8;
            puVar2[5] = local_1d4;
            puVar2[6] = local_1d0;
            puVar2 = puVar2 + 0xc;
          } while (puVar27 != puVar38);
          puVar38 = puVar27;
        }
        goto LAB_00a03f8c;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_00a04540(iVar25,puVar27);
    *param_1 = (uint)local_3f0;
    param_1[1] = uStack_3ec;
    param_1[2] = uStack_3e8;
    param_1[3] = uStack_3e4;
    param_1[4] = uStack_3e0;
    param_1[5] = local_3dc;
    param_1[6] = uStack_3d8;
    param_1[7] = uStack_3d4;
    param_1[8] = uStack_3d0;
    param_1[9] = uStack_3cc;
    param_1[10] = local_3c8;
    param_1[0xb] = uStack_3c4;
    param_1[0xc] = uStack_3c0;
    param_1[0xd] = uStack_3bc;
    param_1[0xe] = uStack_3b8;
  }
  return;
LAB_00a03b98:
  local_238 = *puVar8;
  uStack_234 = puVar8[1];
  uStack_230 = puVar8[2];
  uStack_22c = puVar8[3];
  uStack_228 = puVar8[4];
  local_208 = local_2ec;
  puStack_204 = puStack_2e8;
  puStack_200 = puStack_2e4;
  local_1fc = local_2e0;
  puStack_1f8 = puStack_2dc;
  puStack_1f4 = puStack_2d8;
  puStack_1f0 = puStack_2d4;
  puVar26 = local_2d0;
  cVar1 = (char)puVar17[99];
  bVar42 = cVar1 == '\x03';
  if (bVar42) {
    cVar1 = (char)puVar17[0x54];
  }
  if (bVar42 && cVar1 == '\x03') {
    FUN_01139b38(puVar17[0x55],puVar17[0x56]);
  }
  if (((uint)puVar27 & 1) == 0) {
    if (puVar38 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
    }
    uVar34 = puVar4[1];
    uVar32 = puVar4[2];
    uVar33 = puVar4[3];
    *puVar3 = *puVar4;
    puVar3[1] = uVar34;
    puVar3[2] = uVar32;
    puVar3[3] = uVar33;
    puVar27 = (undefined1 *)0x0;
  }
  else {
    local_220 = local_238;
    uStack_21c = uStack_234;
    uStack_218 = uStack_230;
    uStack_214 = uStack_22c;
    uStack_210 = uStack_228;
    puVar27 = (undefined1 *)0x1;
    local_400 = puVar26;
  }
  cVar1 = (char)puVar17[0x2d];
  bVar42 = cVar1 == '\x03';
  if (bVar42) {
    cVar1 = (char)puVar17[0x29];
  }
  if (bVar42 && cVar1 == '\x03') {
    FUN_00b231a0(puVar17 + 2);
  }
  FUN_019bb7e0(puVar17[0x3b],puVar17[0x3c]);
  if (puVar17[0x38] != 0x80000000) {
    FUN_019bb7e0(puVar17[0x38],puVar17[0x39]);
  }
  local_268 = local_220;
  uStack_264 = uStack_21c;
  uStack_260 = uStack_218;
  uStack_25c = uStack_214;
  uStack_258 = uStack_210;
  local_288 = local_208;
  puStack_284 = puStack_204;
  puStack_280 = puStack_200;
  local_27c = local_1fc;
  puStack_278 = puStack_1f8;
  puStack_274 = puStack_1f4;
  puStack_270 = puStack_1f0;
  *(undefined1 *)(puVar17 + 0x6f) = 1;
  local_2a0 = local_220;
  uStack_29c = uStack_21c;
  uStack_298 = uStack_218;
  uStack_294 = uStack_214;
  uStack_290 = uStack_210;
  local_2c0 = local_208;
  puStack_2bc = puStack_204;
  puStack_2b8 = puStack_200;
  local_2b4 = local_1fc;
  puStack_2b0 = puStack_1f8;
  puStack_2ac = puStack_1f4;
  puStack_2a8 = puStack_1f0;
  FUN_009cfc8c(iVar25);
  *puVar9 = local_2a0;
  puVar9[1] = uStack_29c;
  puVar9[2] = uStack_298;
  puVar9[3] = uStack_294;
  puVar9[4] = uStack_290;
  local_1d0 = puVar38;
  local_1cc = local_2c0;
  local_1c8 = puStack_2bc;
  local_1c4 = puStack_2b8;
  local_1c0 = local_2b4;
  puStack_1bc = puStack_2b0;
  puStack_1b8 = puStack_2ac;
  local_1b4 = puStack_2a8;
  local_1b0 = local_400;
  puStack_1ac = puVar37;
  local_1a8 = uVar24;
  uStack_1a4 = uVar12;
  if (uVar24 == *puVar10 && uVar12 == param_2[3]) goto LAB_00a03e48;
  local_1e8 = puVar27;
  FUN_00b1c9a8(param_2 + 7,&local_1e8);
  goto LAB_00a03848;
LAB_00a03e48:
  *puVar10 = uVar24 + 1;
  param_2[3] = uVar12 + (0xfffffffe < uVar24);
  local_320 = local_2a0;
  uStack_31c = uStack_29c;
  uStack_318 = uStack_298;
  uStack_314 = uStack_294;
  uStack_310 = uStack_290;
  local_340 = local_2c0;
  puStack_33c = puStack_2bc;
  puStack_338 = puStack_2b8;
  local_334 = local_2b4;
  puStack_330 = puStack_2b0;
  puStack_32c = puStack_2ac;
  puStack_328 = puStack_2a8;
  local_460 = local_400;
  local_464 = puVar37;
LAB_00a03db0:
  if (puVar27 != (undefined1 *)0x2) {
    if (puVar27 == (undefined1 *)0x3) goto LAB_00a03ef0;
    if (((uint)puVar27 & 1) != 0) {
      *param_1 = local_320;
      param_1[1] = uStack_31c;
      param_1[2] = uStack_318;
      param_1[3] = uStack_314;
      param_1[4] = uStack_310;
      param_1[6] = (uint)local_340;
      param_1[7] = (uint)puStack_33c;
      param_1[8] = (uint)puStack_338;
      param_1[9] = (uint)local_334;
      param_1[10] = (uint)puStack_330;
      param_1[0xb] = (uint)puStack_32c;
      param_1[0xc] = (uint)puStack_328;
      param_1[5] = (uint)puVar38;
      param_1[0xd] = (uint)local_460;
      param_1[0xe] = (uint)local_464;
      return;
    }
    uVar34 = puVar2[1];
    uVar32 = puVar2[2];
    uVar33 = puVar2[3];
    *puVar5 = *puVar2;
    puVar5[1] = uVar34;
    puVar5[2] = uVar32;
    puVar5[3] = uVar33;
    local_378 = local_340;
    puStack_374 = puStack_33c;
    puStack_370 = puStack_338;
    local_36c = local_334;
    puStack_368 = puStack_330;
    puStack_364 = puStack_32c;
    puStack_360 = puStack_328;
    if (puVar38 != (undefined1 *)0x80000007) {
      if (puVar38 == &DAT_80000008) goto LAB_00a03ef0;
      local_1e8 = (undefined1 *)*puVar5;
      local_1e4 = (undefined1 *)puVar5[1];
      puStack_1e0 = (undefined1 *)puVar5[2];
      local_1dc = (undefined1 *)puVar5[3];
      local_1d0 = puStack_33c;
      local_1cc = puStack_338;
      local_1c8 = local_334;
      local_1c4 = puStack_330;
      local_1c0 = puStack_32c;
      puStack_1bc = puStack_328;
      FUN_00b22508(puVar15);
      local_430 = puVar38;
      goto LAB_00a037b8;
    }
  }
  uVar14 = param_2[0xb];
  uVar24 = param_2[0xc];
  param_1[1] = *puVar15;
  param_1[2] = uVar14;
  param_1[3] = uVar24;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

