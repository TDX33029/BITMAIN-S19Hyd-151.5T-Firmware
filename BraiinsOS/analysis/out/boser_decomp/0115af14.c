// FUN_0115af14 @ 0115af14 size=3892 calls_out=29 calls_in=2
// strings: TryMaybeDone polled after value taken | You definitely encountered a bug! | assertion failed: prev | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0115af14(uint *param_1,undefined4 *param_2,int *param_3)

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
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  int *piVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined4 *puVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  int iVar35;
  undefined1 *puVar36;
  uint uVar37;
  int iVar38;
  bool bVar39;
  undefined8 uVar40;
  uint local_440;
  undefined1 *local_420;
  undefined1 *local_41c;
  undefined1 *local_400;
  undefined1 *local_3f8;
  undefined1 *local_3ec;
  undefined1 *local_3d8;
  undefined1 *local_3d0;
  uint uStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint local_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 *local_358;
  undefined1 *puStack_354;
  undefined1 *puStack_350;
  undefined1 *local_34c;
  undefined1 *puStack_348;
  undefined1 *puStack_344;
  undefined1 *puStack_340;
  undefined1 local_338 [24];
  undefined1 *local_320;
  undefined1 *puStack_31c;
  undefined1 *puStack_318;
  undefined1 *local_314;
  undefined1 *puStack_310;
  undefined1 *puStack_30c;
  undefined1 *puStack_308;
  uint local_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e4;
  undefined1 *local_2e0;
  undefined1 *local_2dc;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d4;
  undefined1 *local_2d0;
  undefined1 *local_2cc;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c4;
  undefined1 *local_2c0;
  undefined1 *puStack_2bc;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b4;
  undefined1 *local_2b0;
  undefined1 *local_2ac;
  undefined1 *local_2a0;
  undefined1 *puStack_29c;
  undefined1 *puStack_298;
  undefined1 *local_294;
  undefined1 *puStack_290;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  undefined1 *local_268;
  undefined1 *puStack_264;
  undefined1 *puStack_260;
  undefined1 *local_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_254;
  undefined1 *puStack_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined *local_230;
  int local_22c;
  undefined **local_228;
  undefined **local_224;
  undefined4 local_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined1 *local_1e8;
  undefined1 *puStack_1e4;
  undefined1 *puStack_1e0;
  undefined1 *local_1dc;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d4;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c4;
  undefined1 *puStack_1c0;
  undefined1 *local_1bc;
  undefined1 *local_1b8;
  undefined1 *local_1b4;
  undefined1 *local_1b0;
  undefined1 *local_1ac;
  undefined1 *local_1a8;
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  undefined1 *puStack_19c;
  undefined1 *puStack_198;
  undefined1 *local_194;
  undefined1 *local_190;
  undefined1 *local_18c;
  uint local_188;
  uint uStack_184;
  
  puVar15 = param_2 + 10;
  if (*puVar15 != 0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_300 | 4);
    piVar24 = param_2 + 5;
    puVar3 = (undefined4 *)((uint)&local_200 | 4);
    piVar16 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_218 | 4);
    puVar8 = (uint *)((uint)&local_2e8 | 4);
    puVar9 = (uint *)((uint)&local_1c8 | 4);
    puVar10 = param_2 + 2;
    puVar5 = (undefined4 *)((uint)local_338 | 4);
    param_3 = (int *)*param_3;
LAB_0115b418:
    if (param_2[9] == 0) {
LAB_0115b4a8:
      do {
        iVar35 = *piVar24;
        local_3f8 = (undefined1 *)0x0;
        local_400 = (undefined1 *)0x0;
        DataMemoryBarrier(0xb);
        if (iVar35 != 0) {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(iVar35 + 0x1a8) == *(int *)(*piVar16 + 8) + 8);
          local_400 = *(undefined1 **)(iVar35 + 0x1b0);
        }
        FUN_01348e78(*piVar16 + 0xc,param_3);
        puVar26 = (undefined1 *)0x0;
LAB_0115b4f8:
        while( true ) {
          uVar40 = FUN_009d0640(*piVar16 + 8);
          puVar17 = (uint *)((ulonglong)uVar40 >> 0x20);
          if ((int)uVar40 != 0) {
            if ((int)uVar40 != 1) goto LAB_0115b9d8;
            puVar26 = (undefined1 *)0x3;
            if (param_2[5] == 0) {
              puVar26 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
            goto LAB_0115b9f0;
          }
          if ((*puVar17 & 1) != 0) break;
          puVar17 = puVar17 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar14 = *puVar17;
            bVar39 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar39);
          *puVar17 = uVar14 - 1;
          if (uVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0117f938();
          }
        }
        iVar35 = FUN_00e7bd20(piVar16,puVar17);
        pcVar11 = (char *)(iVar35 + 0x1c4);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar11;
          bVar39 = (bool)hasExclusiveAccess(pcVar11);
        } while (!bVar39);
        *pcVar11 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        iVar28 = iVar35 + 8;
        *(undefined1 *)(iVar35 + 0x1c5) = 0;
        local_220 = 0;
        local_230 = &DAT_01c17b18;
        uVar14 = puVar17[0x68];
        uVar23 = puVar17[0x69];
        local_228 = &local_230;
        local_22c = iVar28;
        local_224 = local_228;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar17[0x67]) {
        case '\0':
          puVar17[0x27] = 1;
          puVar21 = (uint *)0x0;
          if (puVar17[0x5e] != 0) {
            puVar21 = puVar17 + 0x5f;
          }
          *(char *)(puVar17 + 0x2f) = (char)puVar17[0x66];
          puVar17[0x29] = puVar17[0x26];
          puVar17[0x2a] = (uint)puVar21;
          puVar17[0x2b] = puVar17[0x62];
          puVar17[0x2c] = puVar17[99];
          puVar17[0x2d] = puVar17[100];
          puVar17[0x2e] = puVar17[0x65];
          puVar17[0x28] = 0;
          iVar38 = *(int *)puVar17[100];
          FUN_00ddbda8();
          uVar18 = puVar17[0x31];
          uVar12 = puVar17[0x32];
          FUN_006d18e0(puVar17 + 0x33);
          uVar37 = puVar17[0x5c];
          iVar31 = *(int *)(uVar37 + 0x3c);
          uVar13 = *(uint *)(uVar37 + 0x40);
          if (*(int *)(uVar37 + 0x4c) == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(int *)(uVar37 + 0x4c) + 8;
            local_440 = *(uint *)(uVar37 + 0x50);
          }
          puVar17[0x36] = (uint)(puVar17 + 2);
          puVar17[0x58] = uVar19;
          puVar17[0x59] = local_440;
          puVar17[0x4f] = iVar38 + 8;
          puVar17[0x51] = uVar18;
          puVar17[0x57] = uVar37 + 8;
          puVar17[0x52] = uVar12;
          puVar17[0x53] = puVar17[0x34];
          puVar17[0x54] = puVar17[0x35];
          puVar17[0x55] = iVar31 + 8;
          puVar17[0x56] = uVar13;
          *(undefined1 *)(puVar17 + 0x5b) = 0;
          puVar17[0x50] = (uint)(puVar17 + 0x28);
          *(undefined1 *)(puVar17 + 0x25) = 0;
          puVar17[0x22] = (uint)(puVar17 + 0x5d);
          puVar17[0x23] = (uint)(puVar17 + 0x27);
          puVar17[0x24] = uVar37;
          *(char *)(puVar17 + 0x5a) = (char)puVar17[0x2f];
          puVar17[0x37] = (uint)(puVar17 + 0x36);
          puVar17[0x38] = (uint)&DAT_01c21b0c;
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_00fe4a48(&local_2e8,puVar17 + 0x37,&local_228);
        puVar20 = local_2d0;
        puVar36 = local_2e8;
        if (local_2e8 == (undefined1 *)0x2) goto code_r0x0115b740;
        local_218 = *puVar8;
        uStack_214 = puVar8[1];
        uStack_210 = puVar8[2];
        uStack_20c = puVar8[3];
        uStack_208 = puVar8[4];
        local_1e8 = local_2cc;
        puStack_1e4 = puStack_2c8;
        puStack_1e0 = puStack_2c4;
        local_1dc = local_2c0;
        puStack_1d8 = puStack_2bc;
        puStack_1d4 = puStack_2b8;
        puStack_1d0 = puStack_2b4;
        puVar25 = local_2b0;
        puVar22 = local_2ac;
        cVar1 = (char)puVar17[0x5b];
        bVar39 = cVar1 == '\x03';
        if (bVar39) {
          cVar1 = (char)puVar17[0x4c];
        }
        if (bVar39 && cVar1 == '\x03') {
          FUN_00fe4378(puVar17[0x4d],puVar17[0x4e]);
        }
        if (((uint)puVar36 & 1) == 0) {
          if (puVar20 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
          }
          puVar26 = (undefined1 *)0x0;
          uVar34 = puVar4[1];
          uVar29 = puVar4[2];
          uVar33 = puVar4[3];
          *puVar3 = *puVar4;
          puVar3[1] = uVar34;
          puVar3[2] = uVar29;
          puVar3[3] = uVar33;
        }
        else {
          puVar26 = (undefined1 *)0x1;
          local_200 = local_218;
          uStack_1fc = uStack_214;
          uStack_1f8 = uStack_210;
          uStack_1f4 = uStack_20c;
          uStack_1f0 = uStack_208;
          local_400 = puVar22;
          local_3f8 = puVar25;
        }
        FUN_00fe4778(puVar17 + 2);
        FUN_019bb7e0(puVar17[0x33],puVar17[0x34]);
        if (puVar17[0x30] != 0x80000000) {
          FUN_019bb7e0(puVar17[0x30],puVar17[0x31]);
        }
        local_248 = local_200;
        uStack_244 = uStack_1fc;
        uStack_240 = uStack_1f8;
        uStack_23c = uStack_1f4;
        uStack_238 = uStack_1f0;
        local_268 = local_1e8;
        puStack_264 = puStack_1e4;
        puStack_260 = puStack_1e0;
        local_25c = local_1dc;
        puStack_258 = puStack_1d8;
        puStack_254 = puStack_1d4;
        puStack_250 = puStack_1d0;
        *(undefined1 *)(puVar17 + 0x67) = 1;
        local_280 = local_200;
        uStack_27c = uStack_1fc;
        uStack_278 = uStack_1f8;
        uStack_274 = uStack_1f4;
        uStack_270 = uStack_1f0;
        local_2a0 = local_1e8;
        puStack_29c = puStack_1e4;
        puStack_298 = puStack_1e0;
        local_294 = local_1dc;
        puStack_290 = puStack_1d8;
        puStack_28c = puStack_1d4;
        puStack_288 = puStack_1d0;
        FUN_00e7b9f8(iVar35);
        *puVar9 = local_280;
        puVar9[1] = uStack_27c;
        puVar9[2] = uStack_278;
        puVar9[3] = uStack_274;
        puVar9[4] = uStack_270;
        local_1b0 = puVar20;
        local_1ac = local_2a0;
        local_1a8 = puStack_29c;
        local_1a4 = puStack_298;
        local_1a0 = local_294;
        puStack_19c = puStack_290;
        puStack_198 = puStack_28c;
        local_194 = puStack_288;
        local_190 = local_3f8;
        local_18c = local_400;
        local_188 = uVar14;
        uStack_184 = uVar23;
        if (uVar14 == *puVar10 && uVar23 == param_2[3]) goto LAB_0115ba88;
        local_1c8 = puVar26;
        FUN_00b1c9a8(param_2 + 7,&local_1c8);
      } while( true );
    }
    uVar14 = *(uint *)(param_2[8] + 0x40);
    iVar35 = *(int *)(param_2[8] + 0x44);
    if (uVar14 != *puVar10 || iVar35 != param_2[3]) goto LAB_0115b4a8;
    *puVar10 = uVar14 + 1;
    param_2[3] = iVar35 + (uint)(0xfffffffe < uVar14);
    FUN_00b1c730(&local_2e8,param_2 + 7);
    local_300 = *puVar8;
    uStack_2fc = puVar8[1];
    uStack_2f8 = puVar8[2];
    uStack_2f4 = puVar8[3];
    uStack_2f0 = puVar8[4];
    local_320 = local_2cc;
    puStack_31c = puStack_2c8;
    puStack_318 = puStack_2c4;
    local_314 = local_2c0;
    puStack_310 = puStack_2bc;
    puStack_30c = puStack_2b8;
    puStack_308 = puStack_2b4;
    local_41c = local_2b0;
    local_420 = local_2ac;
    puVar26 = local_2e8;
    puVar20 = local_2d0;
    goto LAB_0115b9f4;
  }
  piVar24 = (int *)*param_2;
  puVar26 = (undefined1 *)param_2[1];
  local_3d0 = (undefined1 *)0x3;
  if (puVar26 == (undefined1 *)0x0) {
    puVar36 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_2e4 = (undefined1 *)0x8;
    local_2e8 = (undefined1 *)0x0;
LAB_0115bbd0:
    param_1[1] = (uint)local_2e8;
    param_1[2] = (uint)local_2e4;
    param_1[3] = (uint)puVar36;
    *param_1 = 2;
    local_2e0 = puVar36;
    FUN_01144d3c(piVar24,puVar26);
  }
  else {
    iVar35 = 0;
    puVar2 = (undefined4 *)((uint)&local_1c8 | 4);
    puVar3 = (undefined4 *)((uint)&local_320 | 4);
    puVar4 = (undefined4 *)((uint)&local_268 | 4);
    puVar5 = (undefined4 *)((uint)&local_2a0 | 4);
    do {
      piVar16 = (int *)((int)piVar24 + iVar35);
      if (*piVar16 == 0) {
        puVar6 = (undefined4 *)((int)piVar24 + iVar35 + 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)piVar24 + iVar35 + 0x19c)) {
        case 0:
          *(undefined1 *)((int)piVar24 + iVar35 + 0xbc) =
               *(undefined1 *)((int)piVar24 + iVar35 + 0x198);
          piVar30 = *(int **)((int)piVar24 + iVar35 + 400);
          iVar28 = 0;
          if (*(int *)((int)piVar24 + iVar35 + 0x178) != 0) {
            iVar28 = (int)piVar24 + iVar35 + 0x17c;
          }
          *(undefined4 *)((int)piVar24 + iVar35 + 0xa4) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0x98);
          *(int *)((int)piVar24 + iVar35 + 0xa8) = iVar28;
          *(undefined4 *)((int)piVar24 + iVar35 + 0xac) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0x188);
          *(undefined4 *)((int)piVar24 + iVar35 + 0xb0) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0x18c);
          *(undefined4 *)((int)piVar24 + iVar35 + 0xb8) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0x194);
          puVar7 = (undefined4 *)((int)piVar24 + iVar35 + 0xa0);
          *puVar7 = 0;
          *(int **)((int)piVar24 + iVar35 + 0xb4) = piVar30;
          puVar27 = (undefined4 *)((int)piVar24 + iVar35 + 0x9c);
          *puVar27 = 1;
          iVar31 = *piVar30;
          FUN_00ddbda8((int)piVar24 + iVar35 + 0xc0);
          uVar34 = *(undefined4 *)((int)piVar24 + iVar35 + 0xc4);
          uVar29 = *(undefined4 *)((int)piVar24 + iVar35 + 200);
          FUN_006d18e0((int)piVar24 + iVar35 + 0xcc);
          iVar38 = *(int *)((int)piVar24 + iVar35 + 0x170);
          iVar28 = *(int *)(iVar38 + 0x3c);
          local_3ec = *(undefined1 **)(iVar38 + 0x40);
          if (*(int *)(iVar38 + 0x4c) == 0) {
            iVar32 = 0;
          }
          else {
            iVar32 = *(int *)(iVar38 + 0x4c) + 8;
            local_3f8 = *(undefined1 **)(iVar38 + 0x50);
          }
          piVar30 = (int *)((int)piVar24 + iVar35 + 0xd8);
          *piVar30 = (int)puVar6;
          *(undefined1 *)((int)piVar24 + iVar35 + 0x16c) = 0;
          *(undefined4 *)((int)piVar24 + iVar35 + 0x150) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0xd4);
          *(int *)((int)piVar24 + iVar35 + 0x15c) = iVar38 + 8;
          *(int *)((int)piVar24 + iVar35 + 0x154) = iVar28 + 8;
          *(undefined1 **)((int)piVar24 + iVar35 + 0x164) = local_3f8;
          *(undefined1 **)((int)piVar24 + iVar35 + 0x158) = local_3ec;
          *(undefined4 **)((int)piVar24 + iVar35 + 0x140) = puVar7;
          *(undefined4 *)((int)piVar24 + iVar35 + 0x144) = uVar34;
          *(undefined4 *)((int)piVar24 + iVar35 + 0x148) = uVar29;
          *(undefined1 *)((int)piVar24 + iVar35 + 0x94) = 0;
          *(undefined1 *)((int)piVar24 + iVar35 + 0x168) =
               *(undefined1 *)((int)piVar24 + iVar35 + 0xbc);
          *(int *)((int)piVar24 + iVar35 + 0x160) = iVar32;
          *(int *)((int)piVar24 + iVar35 + 0x13c) = iVar31 + 8;
          *(undefined4 *)((int)piVar24 + iVar35 + 0x14c) =
               *(undefined4 *)((int)piVar24 + iVar35 + 0xd0);
          *(int *)((int)piVar24 + iVar35 + 0x88) = (int)piVar24 + iVar35 + 0x174;
          *(undefined4 **)((int)piVar24 + iVar35 + 0x8c) = puVar27;
          *(int *)((int)piVar24 + iVar35 + 0x90) = iVar38;
          *(int **)((int)piVar24 + iVar35 + 0xdc) = piVar30;
          *(undefined **)((int)piVar24 + iVar35 + 0xe0) = &DAT_01c21b0c;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_1c8,(int)piVar24 + iVar35 + 0xdc,param_3);
        puVar22 = local_18c;
        puVar20 = local_1b0;
        puVar36 = local_1c8;
        if (local_1c8 == (undefined1 *)0x2) {
          *(undefined1 *)((int)piVar24 + iVar35 + 0x19c) = 3;
LAB_0115b16c:
          if (local_3d0 < (undefined1 *)0x2) {
            FUN_006c9ae0(&local_3d0);
          }
          local_3d0 = (undefined1 *)0x2;
        }
        else {
          local_2a0 = (undefined1 *)*puVar2;
          puStack_29c = (undefined1 *)puVar2[1];
          puStack_298 = (undefined1 *)puVar2[2];
          local_294 = (undefined1 *)puVar2[3];
          puStack_290 = (undefined1 *)puVar2[4];
          local_2e8 = local_1ac;
          local_2e4 = local_1a8;
          local_2e0 = local_1a4;
          local_2dc = local_1a0;
          puStack_2d8 = puStack_19c;
          puStack_2d4 = puStack_198;
          local_2d0 = local_194;
          puVar25 = local_190;
          cVar1 = *(char *)((int)piVar24 + iVar35 + 0x16c);
          bVar39 = cVar1 == '\x03';
          if (bVar39) {
            cVar1 = *(char *)((int)piVar24 + iVar35 + 0x130);
          }
          if (bVar39 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)((int)piVar24 + iVar35 + 0x134),
                         *(undefined4 *)((int)piVar24 + iVar35 + 0x138));
          }
          if (((uint)puVar36 & 1) == 0) {
            if (puVar20 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar34 = puVar5[1];
            uVar29 = puVar5[2];
            uVar33 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar34;
            puVar4[2] = uVar29;
            puVar4[3] = uVar33;
          }
          else {
            local_268 = local_2a0;
            puStack_264 = puStack_29c;
            puStack_260 = puStack_298;
            local_25c = local_294;
            puStack_258 = puStack_290;
            local_3ec = puVar25;
          }
          FUN_00a30f28(puVar6);
          FUN_019bb7e0(*(undefined4 *)((int)piVar24 + iVar35 + 0xcc),
                       *(undefined4 *)((int)piVar24 + iVar35 + 0xd0));
          iVar28 = *(int *)((int)piVar24 + iVar35 + 0xc0);
          if (iVar28 != -0x80000000) {
            FUN_019bb7e0(iVar28,*(undefined4 *)((int)piVar24 + iVar35 + 0xc4));
          }
          local_320 = local_268;
          puStack_31c = puStack_264;
          puStack_318 = puStack_260;
          local_314 = local_25c;
          puStack_310 = puStack_258;
          local_1e8 = local_2e8;
          puStack_1e4 = local_2e4;
          puStack_1e0 = local_2e0;
          local_1dc = local_2dc;
          puStack_1d8 = puStack_2d8;
          puStack_1d4 = puStack_2d4;
          puStack_1d0 = local_2d0;
          *(undefined1 *)((int)piVar24 + iVar35 + 0x19c) = 1;
          if (((uint)puVar36 & 1) == 0) {
            FUN_01192c50(piVar16);
            puVar7 = (undefined4 *)((int)piVar24 + iVar35);
            *puVar7 = 1;
            puVar7[1] = 0;
            uVar34 = puVar3[1];
            uVar29 = puVar3[2];
            uVar33 = puVar3[3];
            *puVar6 = *puVar3;
            *(undefined4 *)((int)piVar24 + iVar35 + 0xc) = uVar34;
            *(undefined4 *)((int)piVar24 + iVar35 + 0x10) = uVar29;
            *(undefined4 *)((int)piVar24 + iVar35 + 0x14) = uVar33;
            puVar7[6] = puVar20;
            puVar7[7] = local_1e8;
            puVar7[8] = puStack_1e4;
            puVar7[9] = puStack_1e0;
            puVar7[10] = local_1dc;
            puVar7[0xb] = puStack_1d8;
            puVar7[0xc] = puStack_1d4;
            puVar7[0xd] = puStack_1d0;
          }
          else {
            local_1c8 = local_268;
            local_1c4 = puStack_264;
            puStack_1c0 = puStack_260;
            local_1bc = local_25c;
            local_1b8 = puStack_258;
            local_1b4 = puVar20;
            local_1b0 = local_2e8;
            local_1ac = local_2e4;
            local_1a8 = local_2e0;
            local_1a4 = local_2dc;
            local_1a0 = puStack_2d8;
            puStack_19c = puStack_2d4;
            puStack_198 = local_2d0;
            local_194 = local_3ec;
            local_190 = puVar22;
            FUN_01192c50(piVar16);
            puVar36 = local_1c8;
            *piVar16 = 2;
            piVar16[1] = 0;
            local_390 = *puVar2;
            uStack_38c = puVar2[1];
            uStack_388 = puVar2[2];
            uStack_384 = puVar2[3];
            local_380 = puVar2[4];
            uStack_37c = puVar2[5];
            uStack_378 = puVar2[6];
            uStack_374 = puVar2[7];
            uStack_370 = puVar2[8];
            local_36c = puVar2[9];
            uStack_368 = puVar2[10];
            uStack_364 = puVar2[0xb];
            uStack_360 = puVar2[0xc];
            uStack_35c = puVar2[0xd];
            if (local_1c8 != (undefined1 *)0x2) {
              if (local_1c8 == (undefined1 *)0x3) goto LAB_0115b16c;
              if (local_3d0 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_3d0);
              }
              local_3d0 = puVar36;
              puVar2 = (undefined4 *)((uint)&local_3d0 | 4);
              *puVar2 = local_390;
              puVar2[1] = uStack_38c;
              puVar2[2] = uStack_388;
              puVar2[3] = uStack_384;
              puVar2[4] = local_380;
              puVar2[5] = uStack_37c;
              puVar2[6] = uStack_378;
              puVar2[7] = uStack_374;
              puVar2[8] = uStack_370;
              puVar2[9] = local_36c;
              puVar2[10] = uStack_368;
              puVar2[0xb] = uStack_364;
              puVar2[0xc] = uStack_360;
              puVar2[0xd] = uStack_35c;
              break;
            }
          }
        }
      }
      else if (*piVar16 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar35 = iVar35 + 0x1a0;
    } while ((int)puVar26 * 0x1a0 != iVar35);
    if ((undefined1 *)0x1 < local_3d0) {
      if (local_3d0 == (undefined1 *)0x2) {
LAB_0115bb34:
        *param_1 = 3;
        return;
      }
      if (local_3d0 == (undefined1 *)0x3) {
        uVar34 = 0;
        uVar14 = 8;
        iVar35 = (int)puVar26 * 0x30;
        *param_2 = 8;
        param_2[1] = 0;
        if ((undefined1 *)0x2aaaaaa < puVar26) {
LAB_0115bb24:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar34,iVar35);
        }
        puVar20 = (undefined1 *)0x0;
        if (iVar35 != 0) {
          uVar34 = 8;
          uVar14 = FUN_01298504(iVar35,8);
          puVar20 = puVar26;
          if (uVar14 == 0) goto LAB_0115bb24;
        }
        local_2e0 = (undefined1 *)0x0;
        puVar36 = (undefined1 *)0x0;
        local_2e8 = puVar20;
        local_2e4 = (undefined1 *)uVar14;
        if (puVar26 != (undefined1 *)0x0) {
          puVar36 = (undefined1 *)0x0;
          piVar16 = piVar24;
          puVar2 = (undefined4 *)(uVar14 + 0x14);
          do {
            if (*piVar16 != 1 || piVar16[1] != 0) {
LAB_0115be84:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_1c8,piVar16,0x1a0);
            *piVar16 = 2;
            piVar16[1] = 0;
            if (local_1c8 != (undefined1 *)0x1 || local_1c4 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar35 = piVar16[6];
            if (iVar35 == -0x7ffffff9) goto LAB_0115be84;
            local_1c8 = (undefined1 *)piVar16[7];
            local_1c4 = (undefined1 *)piVar16[8];
            puStack_1c0 = (undefined1 *)piVar16[9];
            local_1bc = (undefined1 *)piVar16[10];
            local_1b8 = (undefined1 *)piVar16[0xb];
            local_1b4 = (undefined1 *)piVar16[0xc];
            local_1b0 = (undefined1 *)piVar16[0xd];
            FUN_01bed864(puVar2 + -5,piVar16 + 2,0x10);
            puVar2[-1] = iVar35;
            piVar16 = piVar16 + 0x68;
            puVar36 = puVar36 + 1;
            *puVar2 = local_1c8;
            puVar2[1] = local_1c4;
            puVar2[2] = puStack_1c0;
            puVar2[3] = local_1bc;
            puVar2[4] = local_1b8;
            puVar2[5] = local_1b4;
            puVar2[6] = local_1b0;
            puVar2 = puVar2 + 0xc;
          } while (puVar26 != puVar36);
          puVar36 = puVar26;
        }
        goto LAB_0115bbd0;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_01144d3c(piVar24,puVar26);
    *param_1 = (uint)local_3d0;
    param_1[1] = uStack_3cc;
    param_1[2] = uStack_3c8;
    param_1[3] = uStack_3c4;
    param_1[4] = uStack_3c0;
    param_1[5] = local_3bc;
    param_1[6] = uStack_3b8;
    param_1[7] = uStack_3b4;
    param_1[8] = uStack_3b0;
    param_1[9] = uStack_3ac;
    param_1[10] = local_3a8;
    param_1[0xb] = uStack_3a4;
    param_1[0xc] = uStack_3a0;
    param_1[0xd] = uStack_39c;
    param_1[0xe] = uStack_398;
  }
  return;
code_r0x0115b740:
  *(undefined1 *)(puVar17 + 0x67) = 3;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar35 + 0x1c5) != '\0') {
    local_3f8 = local_3f8 + 1;
  }
  puVar26 = puVar26 + 1;
  do {
    iVar31 = *piVar24;
    bVar39 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar39);
  *piVar24 = iVar28;
  DataMemoryBarrier(0xb);
  if (iVar31 == 0) {
    *(undefined4 *)(iVar35 + 0x1b8) = 1;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar35 + 0x1b0) = 0;
  }
  else {
    do {
      DataMemoryBarrier(0xb);
    } while (*(int *)(iVar31 + 0x1a8) == *(int *)(*piVar16 + 8) + 8);
    *(int *)(iVar35 + 0x1b8) = *(int *)(iVar31 + 0x1b0) + 1;
    DataMemoryBarrier(0xb);
    *(int *)(iVar35 + 0x1b0) = iVar31;
    *(int *)(iVar31 + 0x1ac) = iVar28;
  }
  if ((&DAT_00000001 < local_3f8) || (puVar26 == local_400)) {
LAB_0115b9d8:
    (**(code **)(*param_3 + 8))(param_3[1]);
    puVar26 = (undefined1 *)0x3;
LAB_0115b9f0:
    puVar20 = local_3d8;
    goto LAB_0115b9f4;
  }
  goto LAB_0115b4f8;
LAB_0115ba88:
  *puVar10 = uVar14 + 1;
  param_2[3] = uVar23 + (0xfffffffe < uVar14);
  local_300 = local_280;
  uStack_2fc = uStack_27c;
  uStack_2f8 = uStack_278;
  uStack_2f4 = uStack_274;
  uStack_2f0 = uStack_270;
  local_320 = local_2a0;
  puStack_31c = puStack_29c;
  puStack_318 = puStack_298;
  local_314 = local_294;
  puStack_310 = puStack_290;
  puStack_30c = puStack_28c;
  puStack_308 = puStack_288;
  local_41c = local_3f8;
  local_420 = local_400;
LAB_0115b9f4:
  if (puVar26 != (undefined1 *)0x2) {
    if (puVar26 == (undefined1 *)0x3) goto LAB_0115bb34;
    if (((uint)puVar26 & 1) != 0) {
      *param_1 = local_300;
      param_1[1] = uStack_2fc;
      param_1[2] = uStack_2f8;
      param_1[3] = uStack_2f4;
      param_1[4] = uStack_2f0;
      param_1[6] = (uint)local_320;
      param_1[7] = (uint)puStack_31c;
      param_1[8] = (uint)puStack_318;
      param_1[9] = (uint)local_314;
      param_1[10] = (uint)puStack_310;
      param_1[0xb] = (uint)puStack_30c;
      param_1[0xc] = (uint)puStack_308;
      param_1[5] = (uint)puVar20;
      param_1[0xd] = (uint)local_41c;
      param_1[0xe] = (uint)local_420;
      return;
    }
    uVar34 = puVar2[1];
    uVar29 = puVar2[2];
    uVar33 = puVar2[3];
    *puVar5 = *puVar2;
    puVar5[1] = uVar34;
    puVar5[2] = uVar29;
    puVar5[3] = uVar33;
    local_358 = local_320;
    puStack_354 = puStack_31c;
    puStack_350 = puStack_318;
    local_34c = local_314;
    puStack_348 = puStack_310;
    puStack_344 = puStack_30c;
    puStack_340 = puStack_308;
    if (puVar20 != (undefined1 *)0x80000007) {
      if (puVar20 == &DAT_80000008) goto LAB_0115bb34;
      local_1c8 = (undefined1 *)*puVar5;
      local_1c4 = (undefined1 *)puVar5[1];
      puStack_1c0 = (undefined1 *)puVar5[2];
      local_1bc = (undefined1 *)puVar5[3];
      local_1b0 = puStack_31c;
      local_1ac = puStack_318;
      local_1a8 = local_314;
      local_1a4 = puStack_310;
      local_1a0 = puStack_30c;
      puStack_19c = puStack_308;
      FUN_00b22508(puVar15,&local_1c8);
      local_3d8 = puVar20;
      goto LAB_0115b418;
    }
  }
  uVar14 = param_2[0xb];
  uVar23 = param_2[0xc];
  param_1[1] = *puVar15;
  param_1[2] = uVar14;
  param_1[3] = uVar23;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

