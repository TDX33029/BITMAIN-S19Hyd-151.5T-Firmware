// FUN_0115e01c @ 0115e01c size=3916 calls_out=29 calls_in=2
// strings: TryMaybeDone polled after value taken | You definitely encountered a bug! | assertion failed: prev | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0115e01c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  int *piVar32;
  int *piVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int *piVar37;
  bool bVar38;
  undefined8 uVar39;
  int *local_420;
  int *local_41c;
  int *local_3f8;
  int *local_3f4;
  int *local_3ec;
  int *local_3e0;
  int *local_3dc;
  int *local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 local_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
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
  int *local_358;
  int *piStack_354;
  int *piStack_350;
  int *local_34c;
  int *piStack_348;
  int *piStack_344;
  int *piStack_340;
  undefined1 local_338 [24];
  int *local_320;
  int *piStack_31c;
  int *piStack_318;
  int *local_314;
  int *piStack_310;
  int *piStack_30c;
  int *piStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int *local_2e8;
  int *local_2e4;
  int *local_2e0;
  int *local_2dc;
  int *piStack_2d8;
  int *piStack_2d4;
  int *local_2d0;
  int *local_2cc;
  int *piStack_2c8;
  int *piStack_2c4;
  int *local_2c0;
  int *piStack_2bc;
  int *piStack_2b8;
  int *piStack_2b4;
  int *local_2b0;
  int *local_2ac;
  int *local_2a0;
  int *piStack_29c;
  int *piStack_298;
  int *local_294;
  int *piStack_290;
  int *piStack_28c;
  int *piStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int *local_268;
  int *piStack_264;
  int *piStack_260;
  int *local_25c;
  int *piStack_258;
  int *piStack_254;
  int *piStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined *local_230;
  int local_22c;
  undefined **local_228;
  undefined **local_224;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  int *local_1e8;
  int *piStack_1e4;
  int *piStack_1e0;
  int *local_1dc;
  int *piStack_1d8;
  int *piStack_1d4;
  int *piStack_1d0;
  int *local_1c8;
  int *local_1c4;
  int *piStack_1c0;
  int *local_1bc;
  int *local_1b8;
  int *local_1b4;
  int *local_1b0;
  int *local_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int *piStack_19c;
  int *piStack_198;
  int *local_194;
  int *local_190;
  int *local_18c;
  uint local_188;
  uint uStack_184;
  
  piVar16 = param_2 + 10;
  if (*piVar16 != -0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_300 | 4);
    piVar32 = param_2 + 5;
    puVar3 = (undefined4 *)((uint)&local_200 | 4);
    piVar17 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_218 | 4);
    puVar5 = (undefined4 *)((uint)&local_2e8 | 4);
    puVar6 = (undefined4 *)((uint)&local_1c8 | 4);
    puVar7 = param_2 + 2;
    puVar8 = (undefined4 *)((uint)local_338 | 4);
LAB_0115e510:
    if (param_2[9] == 0) {
LAB_0115e59c:
      do {
        iVar31 = *piVar32;
        uVar9 = 0;
        local_3f4 = (int *)0x0;
        DataMemoryBarrier(0xb);
        if (iVar31 != 0) {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(iVar31 + 0x1a8) == *(int *)(*piVar17 + 8) + 8);
          local_3f4 = *(int **)(iVar31 + 0x1b0);
        }
        local_3f8 = (int *)*param_3;
        FUN_01348e78(*piVar17 + 0xc,local_3f8);
        local_3dc = (int *)0x0;
LAB_0115e5f4:
        while( true ) {
          uVar39 = FUN_009d0640(*piVar17 + 8);
          puVar18 = (uint *)((ulonglong)uVar39 >> 0x20);
          if ((int)uVar39 != 0) {
            if ((int)uVar39 == 1) {
              piVar33 = (int *)&DAT_00000003;
              if (param_2[5] == 0) {
                piVar33 = (int *)0x2;
                *(undefined1 *)(param_2 + 6) = 1;
              }
            }
            else {
              (**(code **)(*local_3f8 + 8))(local_3f8[1]);
              piVar33 = (int *)&DAT_00000003;
            }
            goto LAB_0115eb00;
          }
          if ((*puVar18 & 1) != 0) break;
          puVar18 = puVar18 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar19 = *puVar18;
            bVar38 = (bool)hasExclusiveAccess(puVar18);
          } while (!bVar38);
          *puVar18 = uVar19 - 1;
          if (uVar19 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0117f938();
          }
        }
        iVar31 = FUN_00e7bd20(piVar17,puVar18);
        pcVar10 = (char *)(iVar31 + 0x1c4);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar10;
          bVar38 = (bool)hasExclusiveAccess(pcVar10);
        } while (!bVar38);
        *pcVar10 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        iVar15 = iVar31 + 8;
        *(undefined1 *)(iVar31 + 0x1c5) = 0;
        local_220 = 0;
        local_230 = &DAT_01c17ac8;
        uVar19 = puVar18[0x68];
        uVar11 = puVar18[0x69];
        local_228 = &local_230;
        local_22c = iVar15;
        local_224 = local_228;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar18[0x67]) {
        case '\0':
          puVar18[0x27] = 1;
          puVar21 = (uint *)0x0;
          if (puVar18[0x5e] != 0) {
            puVar21 = puVar18 + 0x5f;
          }
          *(char *)(puVar18 + 0x2f) = (char)puVar18[0x66];
          puVar18[0x29] = puVar18[0x26];
          puVar18[0x2a] = (uint)puVar21;
          puVar18[0x2b] = puVar18[0x62];
          puVar18[0x2c] = puVar18[99];
          puVar18[0x2d] = puVar18[100];
          puVar18[0x2e] = puVar18[0x65];
          puVar18[0x28] = 0;
          iVar25 = *(int *)puVar18[100];
          FUN_00ddc188();
          uVar20 = puVar18[0x31];
          uVar12 = puVar18[0x32];
          FUN_006d1a18(puVar18 + 0x33);
          uVar36 = puVar18[0x5c];
          uVar22 = *(uint *)(uVar36 + 0x3c);
          uVar13 = *(uint *)(uVar36 + 0x40);
          uVar14 = uVar22 + 8;
          if (*(int *)(uVar36 + 0x4c) == 0) {
            uVar34 = 0;
          }
          else {
            uVar22 = *(uint *)(uVar36 + 0x50);
            uVar34 = *(int *)(uVar36 + 0x4c) + 8;
          }
          puVar18[0x36] = (uint)(puVar18 + 2);
          puVar18[0x54] = puVar18[0x35];
          puVar18[0x59] = uVar22;
          puVar18[0x55] = uVar14;
          puVar18[0x4f] = iVar25 + 8;
          puVar18[0x56] = uVar13;
          puVar18[0x51] = uVar20;
          *(undefined1 *)(puVar18 + 0x25) = 0;
          *(undefined1 *)(puVar18 + 0x5b) = 0;
          puVar18[0x52] = uVar12;
          puVar18[0x53] = puVar18[0x34];
          puVar18[0x57] = uVar36 + 8;
          puVar18[0x58] = uVar34;
          puVar18[0x50] = (uint)(puVar18 + 0x28);
          puVar18[0x22] = (uint)(puVar18 + 0x5d);
          puVar18[0x23] = (uint)(puVar18 + 0x27);
          puVar18[0x24] = uVar36;
          *(char *)(puVar18 + 0x5a) = (char)puVar18[0x2f];
          puVar18[0x37] = (uint)(puVar18 + 0x36);
          puVar18[0x38] = (uint)&DAT_01c21afc;
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_00fe4a48(&local_2e8,puVar18 + 0x37,&local_228);
        piVar37 = local_2d0;
        piVar33 = local_2e8;
        if (local_2e8 == (int *)0x2) goto code_r0x0115e850;
        local_218 = *puVar5;
        uStack_214 = puVar5[1];
        uStack_210 = puVar5[2];
        uStack_20c = puVar5[3];
        uStack_208 = puVar5[4];
        local_1e8 = local_2cc;
        piStack_1e4 = piStack_2c8;
        piStack_1e0 = piStack_2c4;
        local_1dc = local_2c0;
        piStack_1d8 = piStack_2bc;
        piStack_1d4 = piStack_2b8;
        piStack_1d0 = piStack_2b4;
        piVar24 = local_2b0;
        piVar23 = local_2ac;
        cVar1 = (char)puVar18[0x5b];
        bVar38 = cVar1 == '\x03';
        if (bVar38) {
          cVar1 = (char)puVar18[0x4c];
        }
        if (bVar38 && cVar1 == '\x03') {
          FUN_00fe4378(puVar18[0x4d],puVar18[0x4e]);
        }
        if (((uint)piVar33 & 1) == 0) {
          if (piVar37 == (int *)0x80000007) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
          }
          piVar33 = (int *)0x0;
          uVar30 = puVar4[1];
          uVar27 = puVar4[2];
          uVar29 = puVar4[3];
          *puVar3 = *puVar4;
          puVar3[1] = uVar30;
          puVar3[2] = uVar27;
          puVar3[3] = uVar29;
        }
        else {
          piVar33 = (int *)&DAT_00000001;
          local_200 = local_218;
          uStack_1fc = uStack_214;
          uStack_1f8 = uStack_210;
          uStack_1f4 = uStack_20c;
          uStack_1f0 = uStack_208;
          local_3f8 = piVar23;
          local_3f4 = piVar24;
        }
        FUN_00fe4778(puVar18 + 2);
        FUN_019bb7e0(puVar18[0x33],puVar18[0x34]);
        if (puVar18[0x30] != 0x80000000) {
          FUN_019bb7e0(puVar18[0x30],puVar18[0x31]);
        }
        local_248 = local_200;
        uStack_244 = uStack_1fc;
        uStack_240 = uStack_1f8;
        uStack_23c = uStack_1f4;
        uStack_238 = uStack_1f0;
        local_268 = local_1e8;
        piStack_264 = piStack_1e4;
        piStack_260 = piStack_1e0;
        local_25c = local_1dc;
        piStack_258 = piStack_1d8;
        piStack_254 = piStack_1d4;
        piStack_250 = piStack_1d0;
        *(undefined1 *)(puVar18 + 0x67) = 1;
        local_280 = local_200;
        uStack_27c = uStack_1fc;
        uStack_278 = uStack_1f8;
        uStack_274 = uStack_1f4;
        uStack_270 = uStack_1f0;
        local_2a0 = local_1e8;
        piStack_29c = piStack_1e4;
        piStack_298 = piStack_1e0;
        local_294 = local_1dc;
        piStack_290 = piStack_1d8;
        piStack_28c = piStack_1d4;
        piStack_288 = piStack_1d0;
        FUN_00e7b9f8(iVar31);
        *puVar6 = local_280;
        puVar6[1] = uStack_27c;
        puVar6[2] = uStack_278;
        puVar6[3] = uStack_274;
        puVar6[4] = uStack_270;
        local_1b0 = piVar37;
        local_1ac = local_2a0;
        local_1a8 = piStack_29c;
        local_1a4 = piStack_298;
        local_1a0 = local_294;
        piStack_19c = piStack_290;
        piStack_198 = piStack_28c;
        local_194 = piStack_288;
        local_190 = local_3f4;
        local_18c = local_3f8;
        local_188 = uVar19;
        uStack_184 = uVar11;
        if (uVar19 == *puVar7 && uVar11 == param_2[3]) goto LAB_0115ebb0;
        local_1c8 = piVar33;
        FUN_00b1c9a8(param_2 + 7,&local_1c8);
      } while( true );
    }
    uVar9 = *(uint *)(param_2[8] + 0x40);
    iVar31 = *(int *)(param_2[8] + 0x44);
    if (uVar9 != *puVar7 || iVar31 != param_2[3]) goto LAB_0115e59c;
    *puVar7 = uVar9 + 1;
    param_2[3] = iVar31 + (uint)(0xfffffffe < uVar9);
    FUN_00b1c730(&local_2e8,param_2 + 7);
    local_300 = *puVar5;
    uStack_2fc = puVar5[1];
    uStack_2f8 = puVar5[2];
    uStack_2f4 = puVar5[3];
    uStack_2f0 = puVar5[4];
    local_320 = local_2cc;
    piStack_31c = piStack_2c8;
    piStack_318 = piStack_2c4;
    local_314 = local_2c0;
    piStack_310 = piStack_2bc;
    piStack_30c = piStack_2b8;
    piStack_308 = piStack_2b4;
    local_41c = local_2b0;
    local_420 = local_2ac;
    piVar33 = local_2e8;
    piVar37 = local_2d0;
    goto LAB_0115eb04;
  }
  piVar16 = (int *)param_2[1];
  piVar32 = (int *)*param_2;
  local_3d0 = (int *)&DAT_00000003;
  if (piVar16 == (int *)0x0) {
    piVar17 = (int *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_2e4 = (int *)0x8;
    local_2e8 = (int *)0x0;
LAB_0115ecf0:
    param_1[1] = local_2e8;
    param_1[2] = local_2e4;
    param_1[3] = piVar17;
    *param_1 = 2;
    local_2e0 = piVar17;
    FUN_01144d3c(piVar32,piVar16);
  }
  else {
    iVar31 = 0;
    puVar2 = (undefined4 *)((uint)&local_1c8 | 4);
    puVar3 = (undefined4 *)((uint)&local_320 | 4);
    puVar4 = (undefined4 *)((uint)&local_268 | 4);
    puVar5 = (undefined4 *)((uint)&local_2a0 | 4);
    do {
      piVar17 = (int *)((int)piVar32 + iVar31);
      if (*piVar17 == 0) {
        puVar6 = (undefined4 *)((int)piVar32 + iVar31 + 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)piVar32 + iVar31 + 0x19c)) {
        case 0:
          *(undefined1 *)((int)piVar32 + iVar31 + 0xbc) =
               *(undefined1 *)((int)piVar32 + iVar31 + 0x198);
          piVar33 = *(int **)((int)piVar32 + iVar31 + 400);
          iVar15 = 0;
          if (*(int *)((int)piVar32 + iVar31 + 0x178) != 0) {
            iVar15 = (int)piVar32 + iVar31 + 0x17c;
          }
          *(undefined4 *)((int)piVar32 + iVar31 + 0xa4) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0x98);
          *(int *)((int)piVar32 + iVar31 + 0xa8) = iVar15;
          *(undefined4 *)((int)piVar32 + iVar31 + 0xac) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0x188);
          *(undefined4 *)((int)piVar32 + iVar31 + 0xb0) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0x18c);
          *(undefined4 *)((int)piVar32 + iVar31 + 0xb8) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0x194);
          puVar8 = (undefined4 *)((int)piVar32 + iVar31 + 0xa0);
          *puVar8 = 0;
          *(int **)((int)piVar32 + iVar31 + 0xb4) = piVar33;
          puVar28 = (undefined4 *)((int)piVar32 + iVar31 + 0x9c);
          *puVar28 = 1;
          iVar25 = *piVar33;
          FUN_00ddc188((int)piVar32 + iVar31 + 0xc0);
          uVar27 = *(undefined4 *)((int)piVar32 + iVar31 + 0xc4);
          uVar30 = *(undefined4 *)((int)piVar32 + iVar31 + 200);
          FUN_006d1a18((int)piVar32 + iVar31 + 0xcc);
          iVar35 = *(int *)((int)piVar32 + iVar31 + 0x170);
          iVar15 = *(int *)(iVar35 + 0x3c);
          local_3ec = *(int **)(iVar35 + 0x40);
          if (*(int *)(iVar35 + 0x4c) == 0) {
            iVar26 = 0;
          }
          else {
            iVar26 = *(int *)(iVar35 + 0x4c) + 8;
            local_3f8 = *(int **)(iVar35 + 0x50);
          }
          piVar33 = (int *)((int)piVar32 + iVar31 + 0xd8);
          *piVar33 = (int)puVar6;
          *(undefined1 *)((int)piVar32 + iVar31 + 0x16c) = 0;
          *(undefined4 *)((int)piVar32 + iVar31 + 0x150) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0xd4);
          *(int *)((int)piVar32 + iVar31 + 0x15c) = iVar35 + 8;
          *(int *)((int)piVar32 + iVar31 + 0x154) = iVar15 + 8;
          *(int **)((int)piVar32 + iVar31 + 0x164) = local_3f8;
          *(int **)((int)piVar32 + iVar31 + 0x158) = local_3ec;
          *(int *)((int)piVar32 + iVar31 + 0x13c) = iVar25 + 8;
          *(undefined4 **)((int)piVar32 + iVar31 + 0x140) = puVar8;
          *(undefined4 *)((int)piVar32 + iVar31 + 0x144) = uVar27;
          *(undefined1 *)((int)piVar32 + iVar31 + 0x94) = 0;
          *(undefined1 *)((int)piVar32 + iVar31 + 0x168) =
               *(undefined1 *)((int)piVar32 + iVar31 + 0xbc);
          *(int *)((int)piVar32 + iVar31 + 0x160) = iVar26;
          *(undefined4 *)((int)piVar32 + iVar31 + 0x148) = uVar30;
          *(undefined4 *)((int)piVar32 + iVar31 + 0x14c) =
               *(undefined4 *)((int)piVar32 + iVar31 + 0xd0);
          *(int *)((int)piVar32 + iVar31 + 0x88) = (int)piVar32 + iVar31 + 0x174;
          *(undefined4 **)((int)piVar32 + iVar31 + 0x8c) = puVar28;
          *(int *)((int)piVar32 + iVar31 + 0x90) = iVar35;
          *(int **)((int)piVar32 + iVar31 + 0xdc) = piVar33;
          *(undefined **)((int)piVar32 + iVar31 + 0xe0) = &DAT_01c21afc;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_1c8,(int)piVar32 + iVar31 + 0xdc,param_3);
        piVar23 = local_18c;
        piVar37 = local_1b0;
        piVar33 = local_1c8;
        if (local_1c8 == (int *)0x2) {
          *(undefined1 *)((int)piVar32 + iVar31 + 0x19c) = 3;
LAB_0115e270:
          if (local_3d0 < (int *)0x2) {
            FUN_006c9ae0(&local_3d0);
          }
          local_3d0 = (int *)0x2;
        }
        else {
          local_2a0 = (int *)*puVar2;
          piStack_29c = (int *)puVar2[1];
          piStack_298 = (int *)puVar2[2];
          local_294 = (int *)puVar2[3];
          piStack_290 = (int *)puVar2[4];
          local_2e8 = local_1ac;
          local_2e4 = local_1a8;
          local_2e0 = local_1a4;
          local_2dc = local_1a0;
          piStack_2d8 = piStack_19c;
          piStack_2d4 = piStack_198;
          local_2d0 = local_194;
          piVar24 = local_190;
          cVar1 = *(char *)((int)piVar32 + iVar31 + 0x16c);
          bVar38 = cVar1 == '\x03';
          if (bVar38) {
            cVar1 = *(char *)((int)piVar32 + iVar31 + 0x130);
          }
          if (bVar38 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)((int)piVar32 + iVar31 + 0x134),
                         *(undefined4 *)((int)piVar32 + iVar31 + 0x138));
          }
          if (((uint)piVar33 & 1) == 0) {
            if (piVar37 == (int *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar30 = puVar5[1];
            uVar27 = puVar5[2];
            uVar29 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar30;
            puVar4[2] = uVar27;
            puVar4[3] = uVar29;
          }
          else {
            local_268 = local_2a0;
            piStack_264 = piStack_29c;
            piStack_260 = piStack_298;
            local_25c = local_294;
            piStack_258 = piStack_290;
            local_3ec = piVar24;
          }
          FUN_00a30f28(puVar6);
          FUN_019bb7e0(*(undefined4 *)((int)piVar32 + iVar31 + 0xcc),
                       *(undefined4 *)((int)piVar32 + iVar31 + 0xd0));
          iVar15 = *(int *)((int)piVar32 + iVar31 + 0xc0);
          if (iVar15 != -0x80000000) {
            FUN_019bb7e0(iVar15,*(undefined4 *)((int)piVar32 + iVar31 + 0xc4));
          }
          local_320 = local_268;
          piStack_31c = piStack_264;
          piStack_318 = piStack_260;
          local_314 = local_25c;
          piStack_310 = piStack_258;
          local_1e8 = local_2e8;
          piStack_1e4 = local_2e4;
          piStack_1e0 = local_2e0;
          local_1dc = local_2dc;
          piStack_1d8 = piStack_2d8;
          piStack_1d4 = piStack_2d4;
          piStack_1d0 = local_2d0;
          *(undefined1 *)((int)piVar32 + iVar31 + 0x19c) = 1;
          if (((uint)piVar33 & 1) == 0) {
            FUN_01192c50(piVar17);
            puVar8 = (undefined4 *)((int)piVar32 + iVar31);
            *puVar8 = 1;
            puVar8[1] = 0;
            uVar30 = puVar3[1];
            uVar27 = puVar3[2];
            uVar29 = puVar3[3];
            *puVar6 = *puVar3;
            *(undefined4 *)((int)piVar32 + iVar31 + 0xc) = uVar30;
            *(undefined4 *)((int)piVar32 + iVar31 + 0x10) = uVar27;
            *(undefined4 *)((int)piVar32 + iVar31 + 0x14) = uVar29;
            puVar8[6] = piVar37;
            puVar8[7] = local_1e8;
            puVar8[8] = piStack_1e4;
            puVar8[9] = piStack_1e0;
            puVar8[10] = local_1dc;
            puVar8[0xb] = piStack_1d8;
            puVar8[0xc] = piStack_1d4;
            puVar8[0xd] = piStack_1d0;
          }
          else {
            local_1c8 = local_268;
            local_1c4 = piStack_264;
            piStack_1c0 = piStack_260;
            local_1bc = local_25c;
            local_1b8 = piStack_258;
            local_1b4 = piVar37;
            local_1b0 = local_2e8;
            local_1ac = local_2e4;
            local_1a8 = local_2e0;
            local_1a4 = local_2dc;
            local_1a0 = piStack_2d8;
            piStack_19c = piStack_2d4;
            piStack_198 = local_2d0;
            local_194 = local_3ec;
            local_190 = piVar23;
            FUN_01192c50(piVar17);
            piVar33 = local_1c8;
            *piVar17 = 2;
            piVar17[1] = 0;
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
            if (local_1c8 != (int *)0x2) {
              if (local_1c8 == (int *)&DAT_00000003) goto LAB_0115e270;
              if (local_3d0 < (int *)0x2) {
                FUN_006c9ae0(&local_3d0);
              }
              local_3d0 = piVar33;
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
      else if (*piVar17 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar31 = iVar31 + 0x1a0;
    } while ((int)piVar16 * 0x1a0 != iVar31);
    if (&DAT_00000001 < local_3d0) {
      if (local_3d0 == (int *)0x2) {
LAB_0115ec5c:
        *param_1 = 3;
        return;
      }
      if (local_3d0 == (int *)&DAT_00000003) {
        uVar30 = 0;
        iVar15 = 8;
        iVar31 = (int)piVar16 * 0x30;
        *param_2 = 8;
        param_2[1] = 0;
        if ((int *)0x2aaaaaa < piVar16) {
LAB_0115ec4c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar30,iVar31);
        }
        piVar33 = (int *)0x0;
        if (iVar31 != 0) {
          uVar30 = 8;
          iVar15 = FUN_01298504(iVar31,8);
          piVar33 = piVar16;
          if (iVar15 == 0) goto LAB_0115ec4c;
        }
        local_2e0 = (int *)0x0;
        piVar17 = (int *)0x0;
        local_2e8 = piVar33;
        local_2e4 = (int *)iVar15;
        if (piVar16 != (int *)0x0) {
          piVar33 = (int *)0x0;
          piVar17 = piVar32;
          puVar2 = (undefined4 *)(iVar15 + 0x14);
          do {
            if (*piVar17 != 1 || piVar17[1] != 0) {
LAB_0115efa4:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_1c8,piVar17,0x1a0);
            *piVar17 = 2;
            piVar17[1] = 0;
            if (local_1c8 != (int *)&DAT_00000001 || local_1c4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar31 = piVar17[6];
            if (iVar31 == -0x7ffffff9) goto LAB_0115efa4;
            local_1c8 = (int *)piVar17[7];
            local_1c4 = (int *)piVar17[8];
            piStack_1c0 = (int *)piVar17[9];
            local_1bc = (int *)piVar17[10];
            local_1b8 = (int *)piVar17[0xb];
            local_1b4 = (int *)piVar17[0xc];
            local_1b0 = (int *)piVar17[0xd];
            FUN_01bed864(puVar2 + -5,piVar17 + 2,0x10);
            puVar2[-1] = iVar31;
            piVar17 = piVar17 + 0x68;
            piVar33 = (int *)((int)piVar33 + 1);
            *puVar2 = local_1c8;
            puVar2[1] = local_1c4;
            puVar2[2] = piStack_1c0;
            puVar2[3] = local_1bc;
            puVar2[4] = local_1b8;
            puVar2[5] = local_1b4;
            puVar2[6] = local_1b0;
            puVar2 = puVar2 + 0xc;
          } while (piVar16 != piVar33);
          piVar17 = piVar16;
        }
        goto LAB_0115ecf0;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_01144d3c(piVar32,piVar16);
    *param_1 = local_3d0;
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
code_r0x0115e850:
  *(undefined1 *)(puVar18 + 0x67) = 3;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar31 + 0x1c5) != '\0') {
    uVar9 = uVar9 + 1;
  }
  local_3dc = (int *)((int)local_3dc + 1);
  do {
    iVar25 = *piVar32;
    bVar38 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar38);
  *piVar32 = iVar15;
  DataMemoryBarrier(0xb);
  if (iVar25 == 0) {
    *(undefined4 *)(iVar31 + 0x1b8) = 1;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar31 + 0x1b0) = 0;
  }
  else {
    do {
      DataMemoryBarrier(0xb);
    } while (*(int *)(iVar25 + 0x1a8) == *(int *)(*piVar17 + 8) + 8);
    *(int *)(iVar31 + 0x1b8) = *(int *)(iVar25 + 0x1b0) + 1;
    DataMemoryBarrier(0xb);
    *(int *)(iVar31 + 0x1b0) = iVar25;
    *(int *)(iVar25 + 0x1ac) = iVar15;
  }
  if ((1 < uVar9) || (local_3dc == local_3f4)) {
    (**(code **)(*local_3f8 + 8))(local_3f8[1]);
    piVar33 = (int *)&DAT_00000003;
LAB_0115eb00:
    piVar37 = local_3e0;
    goto LAB_0115eb04;
  }
  goto LAB_0115e5f4;
LAB_0115ebb0:
  *puVar7 = uVar19 + 1;
  param_2[3] = uVar11 + (0xfffffffe < uVar19);
  local_300 = local_280;
  uStack_2fc = uStack_27c;
  uStack_2f8 = uStack_278;
  uStack_2f4 = uStack_274;
  uStack_2f0 = uStack_270;
  local_320 = local_2a0;
  piStack_31c = piStack_29c;
  piStack_318 = piStack_298;
  local_314 = local_294;
  piStack_310 = piStack_290;
  piStack_30c = piStack_28c;
  piStack_308 = piStack_288;
  local_420 = local_3f8;
  local_41c = local_3f4;
LAB_0115eb04:
  if (piVar33 != (int *)0x2) {
    if (piVar33 == (int *)&DAT_00000003) goto LAB_0115ec5c;
    if (((uint)piVar33 & 1) != 0) {
      *param_1 = local_300;
      param_1[1] = uStack_2fc;
      param_1[2] = uStack_2f8;
      param_1[3] = uStack_2f4;
      param_1[4] = uStack_2f0;
      param_1[6] = local_320;
      param_1[7] = piStack_31c;
      param_1[8] = piStack_318;
      param_1[9] = local_314;
      param_1[10] = piStack_310;
      param_1[0xb] = piStack_30c;
      param_1[0xc] = piStack_308;
      param_1[5] = piVar37;
      param_1[0xd] = local_41c;
      param_1[0xe] = local_420;
      return;
    }
    uVar30 = puVar2[1];
    uVar27 = puVar2[2];
    uVar29 = puVar2[3];
    *puVar8 = *puVar2;
    puVar8[1] = uVar30;
    puVar8[2] = uVar27;
    puVar8[3] = uVar29;
    local_358 = local_320;
    piStack_354 = piStack_31c;
    piStack_350 = piStack_318;
    local_34c = local_314;
    piStack_348 = piStack_310;
    piStack_344 = piStack_30c;
    piStack_340 = piStack_308;
    if (piVar37 != (int *)0x80000007) {
      if (piVar37 == (int *)&DAT_80000008) goto LAB_0115ec5c;
      local_1c8 = (int *)*puVar8;
      local_1c4 = (int *)puVar8[1];
      piStack_1c0 = (int *)puVar8[2];
      local_1bc = (int *)puVar8[3];
      local_1b0 = piStack_31c;
      local_1ac = piStack_318;
      local_1a8 = local_314;
      local_1a4 = piStack_310;
      local_1a0 = piStack_30c;
      piStack_19c = piStack_308;
      FUN_00b22508(piVar16);
      local_3e0 = piVar37;
      goto LAB_0115e510;
    }
  }
  uVar30 = param_2[0xb];
  uVar27 = param_2[0xc];
  param_1[1] = *piVar16;
  param_1[2] = uVar30;
  param_1[3] = uVar27;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

