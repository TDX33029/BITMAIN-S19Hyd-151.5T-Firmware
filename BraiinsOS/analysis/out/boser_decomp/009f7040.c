// FUN_009f7040 @ 009f7040 size=3896 calls_out=27 calls_in=4
// strings: assertion failed: prev | TryMaybeDone polled after value taken | You definitely encountered a bug! | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009f7040(uint *param_1,int *param_2,undefined4 *param_3)

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
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined1 *puVar31;
  int *piVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  int *piVar36;
  int iVar37;
  undefined1 *puVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  bool bVar43;
  undefined8 uVar44;
  undefined1 *local_444;
  undefined1 *local_440;
  undefined1 *local_40c;
  undefined1 *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  uint local_3d4;
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
  
  puVar14 = (uint *)(param_2 + 10);
  if (*puVar14 != 0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_300 | 4);
    puVar3 = (undefined4 *)((uint)&local_200 | 4);
    piVar32 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_218 | 4);
    puVar8 = (uint *)((uint)&local_2e8 | 4);
    puVar9 = (uint *)((uint)&local_1c8 | 4);
    puVar10 = (uint *)(param_2 + 2);
    piVar36 = param_2 + 5;
    puVar5 = (undefined4 *)((uint)local_338 | 4);
LAB_009f7528:
    if (param_2[9] == 0) {
LAB_009f75b4:
      iVar39 = *piVar36;
      DataMemoryBarrier(0xb);
      local_3e0 = (undefined1 *)0x0;
      if (iVar39 != 0) {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(iVar39 + 0x1a8) == *(int *)(*piVar32 + 8) + 8);
        local_3e0 = *(undefined1 **)(iVar39 + 0x1b0);
      }
      iVar39 = *piVar32;
      local_3d4 = 0;
      piVar15 = (int *)*param_3;
      FUN_01348e78(iVar39 + 0xc);
      local_3d8 = (undefined1 *)0x0;
      do {
        uVar44 = FUN_009d0640(iVar39 + 8);
        puVar16 = (uint *)((ulonglong)uVar44 >> 0x20);
        if ((int)uVar44 != 0) {
          if ((int)uVar44 == 1) {
            puVar28 = (undefined1 *)0x3;
            if (*piVar36 == 0) {
              puVar28 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
          }
          else {
LAB_009f7afc:
            (**(code **)(*piVar15 + 8))(piVar15[1]);
            puVar28 = (undefined1 *)0x3;
          }
          puVar38 = local_40c;
          goto LAB_009f7b18;
        }
        if ((*puVar16 & 1) == 0) {
          puVar16 = puVar16 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar13 = *puVar16;
            bVar43 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar43);
          *puVar16 = uVar13 - 1;
          if (uVar13 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a90780();
          }
        }
        else {
          iVar39 = FUN_00e7bd20(piVar32,puVar16);
          pcVar11 = (char *)(iVar39 + 0x1c4);
          DataMemoryBarrier(0xb);
          do {
            cVar1 = *pcVar11;
            bVar43 = (bool)hasExclusiveAccess(pcVar11);
          } while (!bVar43);
          *pcVar11 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
          }
          *(undefined1 *)(iVar39 + 0x1c5) = 0;
          iVar27 = iVar39 + 8;
          local_220 = 0;
          local_230 = &DAT_01c0cc74;
          uVar13 = puVar16[0x68];
          uVar26 = puVar16[0x69];
          local_228 = &local_230;
          local_22c = iVar27;
          local_224 = local_228;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar16[0x67]) {
          case '\0':
            puVar16[0x27] = 1;
            puVar22 = (uint *)0x0;
            if (puVar16[0x5e] != 0) {
              puVar22 = puVar16 + 0x5f;
            }
            *(char *)(puVar16 + 0x2f) = (char)puVar16[0x66];
            puVar16[0x2e] = puVar16[0x65];
            puVar16[0x29] = puVar16[0x26];
            puVar16[0x2a] = (uint)puVar22;
            puVar16[0x2b] = puVar16[0x62];
            puVar16[0x2c] = puVar16[99];
            puVar16[0x2d] = puVar16[100];
            puVar16[0x28] = 0;
            iVar40 = *(int *)puVar16[100];
            FUN_00b1bfac(puVar16 + 0x30);
            uVar17 = puVar16[0x31];
            uVar12 = puVar16[0x32];
            FUN_00b51760(puVar16 + 0x33);
            uVar41 = puVar16[0x5c];
            uVar18 = *(int *)(uVar41 + 0x3c) + 8;
            uVar23 = *(uint *)(uVar41 + 0x40);
            if (*(int *)(uVar41 + 0x4c) == 0) {
              uVar30 = 0;
              uVar19 = uVar18;
            }
            else {
              uVar30 = *(int *)(uVar41 + 0x4c) + 8;
              uVar19 = *(uint *)(uVar41 + 0x50);
            }
            puVar16[0x36] = (uint)(puVar16 + 2);
            puVar16[0x59] = uVar19;
            puVar16[0x51] = uVar17;
            puVar16[0x52] = uVar12;
            puVar16[0x54] = puVar16[0x35];
            puVar16[0x55] = uVar18;
            *(undefined1 *)(puVar16 + 0x5b) = 0;
            puVar16[0x4f] = iVar40 + 8;
            puVar16[0x53] = puVar16[0x34];
            puVar16[0x56] = uVar23;
            puVar16[0x22] = (uint)(puVar16 + 0x5d);
            puVar16[0x23] = (uint)(puVar16 + 0x27);
            puVar16[0x24] = uVar41;
            puVar16[0x57] = uVar41 + 8;
            puVar16[0x58] = uVar30;
            puVar16[0x50] = (uint)(puVar16 + 0x28);
            *(undefined1 *)(puVar16 + 0x25) = 0;
            *(char *)(puVar16 + 0x5a) = (char)puVar16[0x2f];
            puVar16[0x37] = (uint)(puVar16 + 0x36);
            puVar16[0x38] = (uint)&DAT_01c12480;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21a2c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21a2c);
          }
          FUN_009e8f3c(&local_2e8,puVar16 + 0x37,&local_228);
          puVar38 = local_2d0;
          puVar28 = local_2e8;
          if (local_2e8 != (undefined1 *)0x2) goto LAB_009f7908;
          *(undefined1 *)(puVar16 + 0x67) = 3;
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar39 + 0x1c5) != '\0') {
            local_3d4 = local_3d4 + 1;
          }
          local_3d8 = local_3d8 + 1;
          do {
            iVar40 = *piVar36;
            bVar43 = (bool)hasExclusiveAccess(piVar36);
          } while (!bVar43);
          *piVar36 = iVar27;
          DataMemoryBarrier(0xb);
          if (iVar40 == 0) {
            *(undefined4 *)(iVar39 + 0x1b8) = 1;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar39 + 0x1b0) = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(iVar40 + 0x1a8) == *(int *)(*piVar32 + 8) + 8);
            *(int *)(iVar39 + 0x1b8) = *(int *)(iVar40 + 0x1b0) + 1;
            DataMemoryBarrier(0xb);
            *(int *)(iVar39 + 0x1b0) = iVar40;
            *(int *)(iVar40 + 0x1ac) = iVar27;
          }
          if ((1 < local_3d4) || (local_3d8 == local_3e0)) goto LAB_009f7afc;
        }
        iVar39 = *piVar32;
      } while( true );
    }
    uVar13 = *(uint *)(param_2[8] + 0x40);
    iVar39 = *(int *)(param_2[8] + 0x44);
    if (uVar13 != *puVar10 || iVar39 != param_2[3]) goto LAB_009f75b4;
    *puVar10 = uVar13 + 1;
    param_2[3] = iVar39 + (uint)(0xfffffffe < uVar13);
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
    local_440 = local_2b0;
    local_444 = local_2ac;
    puVar28 = local_2e8;
    puVar38 = local_2d0;
    goto LAB_009f7b18;
  }
  puVar28 = (undefined1 *)param_2[1];
  iVar39 = *param_2;
  local_3d0 = (undefined1 *)0x3;
  if (puVar28 == (undefined1 *)0x0) {
    puVar38 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_2e4 = (undefined1 *)0x8;
LAB_009f7cf4:
    param_1[1] = (uint)local_2e8;
    param_1[2] = (uint)local_2e4;
    param_1[3] = (uint)puVar38;
    *param_1 = 2;
    local_2e0 = puVar38;
    FUN_009f6e50(iVar39,puVar28);
  }
  else {
    iVar27 = 0;
    puVar2 = (undefined4 *)((uint)&local_1c8 | 4);
    puVar3 = (undefined4 *)((uint)&local_320 | 4);
    puVar4 = (undefined4 *)((uint)&local_268 | 4);
    puVar5 = (undefined4 *)((uint)&local_2a0 | 4);
    do {
      piVar32 = (int *)(iVar39 + iVar27);
      if (*piVar32 == 0) {
        iVar40 = iVar39 + iVar27;
        puVar6 = (undefined4 *)(iVar40 + 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar40 + 0x19c)) {
        case 0:
          iVar20 = 0;
          if (*(int *)(iVar40 + 0x178) != 0) {
            iVar20 = iVar40 + 0x17c;
          }
          *(undefined1 *)(iVar40 + 0xbc) = *(undefined1 *)(iVar40 + 0x198);
          *(undefined4 *)(iVar40 + 0xb8) = *(undefined4 *)(iVar40 + 0x194);
          *(undefined4 *)(iVar40 + 0xa4) = *(undefined4 *)(iVar40 + 0x98);
          *(int *)(iVar40 + 0xa8) = iVar20;
          *(undefined4 *)(iVar40 + 0xac) = *(undefined4 *)(iVar40 + 0x188);
          *(undefined4 *)(iVar40 + 0xb0) = *(undefined4 *)(iVar40 + 0x18c);
          *(undefined4 *)(iVar40 + 0xa0) = 0;
          *(int **)(iVar40 + 0xb4) = *(int **)(iVar40 + 400);
          *(undefined4 *)(iVar40 + 0x9c) = 1;
          iVar37 = **(int **)(iVar40 + 400);
          FUN_00b1bfac(iVar40 + 0xc0);
          uVar35 = *(undefined4 *)(iVar40 + 0xc4);
          uVar33 = *(undefined4 *)(iVar40 + 200);
          FUN_00b51760(iVar40 + 0xcc);
          iVar42 = *(int *)(iVar40 + 0x170);
          local_3e8 = *(undefined1 **)(iVar42 + 0x40);
          iVar20 = *(int *)(iVar42 + 0x3c) + 8;
          if (*(int *)(iVar42 + 0x4c) == 0) {
            iVar25 = 0;
            iVar21 = iVar20;
          }
          else {
            iVar25 = *(int *)(iVar42 + 0x4c) + 8;
            iVar21 = *(int *)(iVar42 + 0x50);
          }
          *(int *)(iVar40 + 0xd8) = (int)puVar6;
          *(undefined4 *)(iVar40 + 0x150) = *(undefined4 *)(iVar40 + 0xd4);
          *(int *)(iVar40 + 0x164) = iVar21;
          *(int *)(iVar40 + 0x154) = iVar20;
          *(int *)(iVar40 + 0x160) = iVar25;
          *(undefined1 **)(iVar40 + 0x158) = local_3e8;
          *(int *)(iVar40 + 0x13c) = iVar37 + 8;
          *(undefined4 **)(iVar40 + 0x140) = (undefined4 *)(iVar40 + 0xa0);
          *(undefined4 *)(iVar40 + 0x144) = uVar35;
          *(undefined4 *)(iVar40 + 0x148) = uVar33;
          *(undefined4 *)(iVar40 + 0x14c) = *(undefined4 *)(iVar40 + 0xd0);
          *(undefined1 *)(iVar40 + 0x94) = 0;
          *(undefined1 *)(iVar40 + 0x16c) = 0;
          *(undefined1 *)(iVar40 + 0x168) = *(undefined1 *)(iVar40 + 0xbc);
          *(int *)(iVar40 + 0x15c) = iVar42 + 8;
          *(int *)(iVar40 + 0x88) = iVar40 + 0x174;
          *(undefined4 **)(iVar40 + 0x8c) = (undefined4 *)(iVar40 + 0x9c);
          *(int *)(iVar40 + 0x90) = iVar42;
          *(int **)(iVar40 + 0xdc) = (int *)(iVar40 + 0xd8);
          *(undefined **)(iVar40 + 0xe0) = &DAT_01c12480;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_1c8,iVar40 + 0xdc,param_3);
        puVar31 = local_18c;
        puVar24 = local_1b0;
        puVar38 = local_1c8;
        if (local_1c8 == (undefined1 *)0x2) {
          *(undefined1 *)(iVar40 + 0x19c) = 3;
LAB_009f7288:
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
          puVar29 = local_190;
          cVar1 = *(char *)(iVar40 + 0x16c);
          bVar43 = cVar1 == '\x03';
          if (bVar43) {
            cVar1 = *(char *)(iVar40 + 0x130);
          }
          if (bVar43 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar40 + 0x134),*(undefined4 *)(iVar40 + 0x138));
          }
          if (((uint)puVar38 & 1) == 0) {
            if (puVar24 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar35 = puVar5[1];
            uVar33 = puVar5[2];
            uVar34 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar35;
            puVar4[2] = uVar33;
            puVar4[3] = uVar34;
          }
          else {
            local_268 = local_2a0;
            puStack_264 = puStack_29c;
            puStack_260 = puStack_298;
            local_25c = local_294;
            puStack_258 = puStack_290;
            local_3e8 = puVar29;
          }
          FUN_009f6f84(puVar6);
          FUN_019bb7e0(*(undefined4 *)(iVar40 + 0xcc),*(undefined4 *)(iVar40 + 0xd0));
          if (*(int *)(iVar40 + 0xc0) != -0x80000000) {
            FUN_019bb7e0(*(int *)(iVar40 + 0xc0),*(undefined4 *)(iVar40 + 0xc4));
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
          *(undefined1 *)(iVar40 + 0x19c) = 1;
          if (((uint)puVar38 & 1) == 0) {
            FUN_009f6ec4(piVar32);
            puVar7 = (undefined4 *)(iVar39 + iVar27);
            *puVar7 = 1;
            puVar7[1] = 0;
            uVar35 = puVar3[1];
            uVar33 = puVar3[2];
            uVar34 = puVar3[3];
            *puVar6 = *puVar3;
            *(undefined4 *)(iVar40 + 0xc) = uVar35;
            *(undefined4 *)(iVar40 + 0x10) = uVar33;
            *(undefined4 *)(iVar40 + 0x14) = uVar34;
            puVar7[6] = puVar24;
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
            local_1b4 = puVar24;
            local_1b0 = local_2e8;
            local_1ac = local_2e4;
            local_1a8 = local_2e0;
            local_1a4 = local_2dc;
            local_1a0 = puStack_2d8;
            puStack_19c = puStack_2d4;
            puStack_198 = local_2d0;
            local_194 = local_3e8;
            local_190 = puVar31;
            FUN_009f6ec4(piVar32);
            puVar38 = local_1c8;
            *piVar32 = 2;
            piVar32[1] = 0;
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
              if (local_1c8 == (undefined1 *)0x3) goto LAB_009f7288;
              if (local_3d0 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_3d0);
              }
              local_3d0 = puVar38;
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
      else if (*piVar32 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar27 = iVar27 + 0x1a0;
    } while ((int)puVar28 * 0x1a0 != iVar27);
    if ((undefined1 *)0x1 < local_3d0) {
      if (local_3d0 == (undefined1 *)0x2) {
LAB_009f7c58:
        *param_1 = 3;
        return;
      }
      if (local_3d0 == (undefined1 *)0x3) {
        uVar35 = 0;
        uVar13 = 8;
        iVar27 = (int)puVar28 * 0x30;
        *param_2 = 8;
        param_2[1] = 0;
        if ((undefined1 *)0x2aaaaaa < puVar28) {
LAB_009f7c48:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar35,iVar27);
        }
        puVar24 = (undefined1 *)0x0;
        if (iVar27 != 0) {
          uVar35 = 8;
          uVar13 = FUN_01298504(iVar27,8);
          puVar24 = puVar28;
          if (uVar13 == 0) goto LAB_009f7c48;
        }
        puVar38 = (undefined1 *)0x0;
        local_2e8 = puVar24;
        local_2e4 = (undefined1 *)uVar13;
        if (puVar28 != (undefined1 *)0x0) {
          puVar3 = (undefined4 *)(iVar39 + 0x1c);
          puVar38 = (undefined1 *)0x0;
          puVar2 = (undefined4 *)(uVar13 + 0x14);
          do {
            piVar32 = puVar3 + -7;
            if (*piVar32 != 1 || puVar3[-6] != 0) {
LAB_009f7fb4:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_1c8,piVar32,0x1a0);
            *piVar32 = 2;
            puVar3[-6] = 0;
            if (local_1c8 != (undefined1 *)0x1 || local_1c4 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar27 = puVar3[-1];
            if (iVar27 == -0x7ffffff9) goto LAB_009f7fb4;
            local_1c8 = (undefined1 *)*puVar3;
            local_1c4 = (undefined1 *)puVar3[1];
            puStack_1c0 = (undefined1 *)puVar3[2];
            local_1bc = (undefined1 *)puVar3[3];
            local_1b8 = (undefined1 *)puVar3[4];
            local_1b4 = (undefined1 *)puVar3[5];
            local_1b0 = (undefined1 *)puVar3[6];
            FUN_01bed864(puVar2 + -5,puVar3 + -5,0x10);
            puVar2[-1] = iVar27;
            puVar3 = puVar3 + 0x68;
            puVar38 = puVar38 + 1;
            *puVar2 = local_1c8;
            puVar2[1] = local_1c4;
            puVar2[2] = puStack_1c0;
            puVar2[3] = local_1bc;
            puVar2[4] = local_1b8;
            puVar2[5] = local_1b4;
            puVar2[6] = local_1b0;
            puVar2 = puVar2 + 0xc;
          } while (puVar28 != puVar38);
          puVar38 = puVar28;
        }
        goto LAB_009f7cf4;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_009f6e50(iVar39,puVar28);
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
LAB_009f7908:
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
  puVar31 = local_2b0;
  puVar24 = local_2ac;
  cVar1 = (char)puVar16[0x5b];
  bVar43 = cVar1 == '\x03';
  if (bVar43) {
    cVar1 = (char)puVar16[0x4c];
  }
  if (bVar43 && cVar1 == '\x03') {
    FUN_01139b38(puVar16[0x4d],puVar16[0x4e]);
  }
  if (((uint)puVar28 & 1) == 0) {
    if (puVar38 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
    }
    puVar28 = (undefined1 *)0x0;
    uVar35 = puVar4[1];
    uVar33 = puVar4[2];
    uVar34 = puVar4[3];
    *puVar3 = *puVar4;
    puVar3[1] = uVar35;
    puVar3[2] = uVar33;
    puVar3[3] = uVar34;
  }
  else {
    local_200 = local_218;
    uStack_1fc = uStack_214;
    uStack_1f8 = uStack_210;
    uStack_1f4 = uStack_20c;
    uStack_1f0 = uStack_208;
    puVar28 = (undefined1 *)0x1;
    local_3e0 = puVar24;
    local_3d8 = puVar31;
  }
  FUN_00b23894(puVar16 + 2);
  FUN_019bb7e0(puVar16[0x33],puVar16[0x34]);
  if (puVar16[0x30] != 0x80000000) {
    FUN_019bb7e0(puVar16[0x30],puVar16[0x31]);
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
  *(undefined1 *)(puVar16 + 0x67) = 1;
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
  FUN_009cf9c8(iVar39);
  *puVar9 = local_280;
  puVar9[1] = uStack_27c;
  puVar9[2] = uStack_278;
  puVar9[3] = uStack_274;
  puVar9[4] = uStack_270;
  local_1b0 = puVar38;
  local_1ac = local_2a0;
  local_1a8 = puStack_29c;
  local_1a4 = puStack_298;
  local_1a0 = local_294;
  puStack_19c = puStack_290;
  puStack_198 = puStack_28c;
  local_194 = puStack_288;
  local_190 = local_3d8;
  local_18c = local_3e0;
  local_188 = uVar13;
  uStack_184 = uVar26;
  if (uVar13 == *puVar10 && uVar26 == param_2[3]) goto LAB_009f7bb4;
  local_1c8 = puVar28;
  FUN_00b1c9a8(param_2 + 7,&local_1c8);
  goto LAB_009f75b4;
LAB_009f7bb4:
  *puVar10 = uVar13 + 1;
  param_2[3] = uVar26 + (0xfffffffe < uVar13);
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
  local_444 = local_3e0;
  local_440 = local_3d8;
LAB_009f7b18:
  if (puVar28 != (undefined1 *)0x2) {
    if (puVar28 == (undefined1 *)0x3) goto LAB_009f7c58;
    if (((uint)puVar28 & 1) != 0) {
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
      param_1[5] = (uint)puVar38;
      param_1[0xd] = (uint)local_440;
      param_1[0xe] = (uint)local_444;
      return;
    }
    uVar35 = puVar2[1];
    uVar33 = puVar2[2];
    uVar34 = puVar2[3];
    *puVar5 = *puVar2;
    puVar5[1] = uVar35;
    puVar5[2] = uVar33;
    puVar5[3] = uVar34;
    local_358 = local_320;
    puStack_354 = puStack_31c;
    puStack_350 = puStack_318;
    local_34c = local_314;
    puStack_348 = puStack_310;
    puStack_344 = puStack_30c;
    puStack_340 = puStack_308;
    if (puVar38 != (undefined1 *)0x80000007) {
      if (puVar38 == &DAT_80000008) goto LAB_009f7c58;
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
      FUN_00b22508(puVar14);
      local_40c = puVar38;
      goto LAB_009f7528;
    }
  }
  uVar13 = param_2[0xb];
  uVar26 = param_2[0xc];
  param_1[1] = *puVar14;
  param_1[2] = uVar13;
  param_1[3] = uVar26;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

