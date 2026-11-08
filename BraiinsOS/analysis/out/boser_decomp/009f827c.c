// FUN_009f827c @ 009f827c size=3892 calls_out=25 calls_in=1
// strings: assertion failed: prev | TryMaybeDone polled after value taken | You definitely encountered a bug! | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009f827c(uint *param_1,int *param_2,undefined4 *param_3)

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
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int iVar37;
  int *piVar38;
  undefined1 *puVar39;
  int iVar40;
  bool bVar41;
  undefined8 uVar42;
  undefined1 *local_3f4;
  undefined1 *local_3f0;
  undefined1 *local_3c0;
  undefined1 *local_390;
  undefined1 *local_38c;
  undefined1 *local_388;
  uint local_384;
  undefined1 *local_380;
  uint uStack_37c;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  uint local_36c;
  uint uStack_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  uint local_358;
  uint uStack_354;
  uint uStack_350;
  uint uStack_34c;
  uint uStack_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 *local_308;
  undefined1 *puStack_304;
  undefined1 *puStack_300;
  undefined1 *local_2fc;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f4;
  undefined1 *puStack_2f0;
  undefined1 local_2e8 [24];
  undefined1 *local_2d0;
  undefined1 *puStack_2cc;
  undefined1 *puStack_2c8;
  undefined1 *local_2c4;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2bc;
  undefined1 *puStack_2b8;
  uint local_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined1 *local_298;
  undefined1 *local_294;
  undefined1 *local_290;
  undefined1 *local_28c;
  undefined1 *puStack_288;
  undefined1 *puStack_284;
  undefined1 *local_280;
  undefined1 *local_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined1 *local_270;
  undefined1 *puStack_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined1 *local_260;
  undefined1 *puStack_25c;
  undefined1 *local_250;
  undefined1 *puStack_24c;
  undefined1 *puStack_248;
  undefined1 *local_244;
  undefined1 *puStack_240;
  undefined1 *puStack_23c;
  undefined1 *puStack_238;
  uint local_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined1 *local_218;
  undefined1 *puStack_214;
  undefined1 *puStack_210;
  undefined1 *local_20c;
  undefined1 *puStack_208;
  undefined1 *puStack_204;
  undefined1 *puStack_200;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined *local_1e0;
  int local_1dc;
  undefined **local_1d8;
  undefined **local_1d4;
  undefined4 local_1d0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined1 *local_198;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *local_18c;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *local_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined1 *local_16c;
  undefined1 *local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined1 *local_13c;
  uint local_138;
  uint local_134;
  
  puVar20 = (uint *)(param_2 + 10);
  if (*puVar20 != 0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_2b0 | 4);
    puVar3 = (undefined4 *)((uint)&local_1b0 | 4);
    piVar38 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_1c8 | 4);
    puVar8 = (uint *)((uint)&local_298 | 4);
    puVar9 = (uint *)((uint)&local_178 | 4);
    piVar14 = param_2 + 5;
    puVar5 = (undefined4 *)((uint)local_2e8 | 4);
    puVar21 = (uint *)(param_2 + 2);
LAB_009f877c:
    if (param_2[9] == 0) {
LAB_009f8810:
      iVar37 = *piVar14;
      DataMemoryBarrier(0xb);
      local_38c = (undefined1 *)0x0;
      if (iVar37 != 0) {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(iVar37 + 0x160) == *(int *)(*piVar38 + 8) + 8);
        local_38c = *(undefined1 **)(iVar37 + 0x168);
      }
      iVar37 = *piVar38;
      local_384 = 0;
      piVar16 = (int *)*param_3;
      FUN_01348e78(iVar37 + 0xc);
      local_388 = (undefined1 *)0x0;
      do {
        uVar42 = FUN_009d011c(iVar37 + 8);
        puVar17 = (uint *)((ulonglong)uVar42 >> 0x20);
        if ((int)uVar42 != 0) {
          if ((int)uVar42 == 1) {
            puVar30 = (undefined1 *)0x3;
            if (*piVar14 == 0) {
              puVar30 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
          }
          else {
LAB_009f8d58:
            (**(code **)(*piVar16 + 8))(piVar16[1]);
            puVar30 = (undefined1 *)0x3;
          }
          puVar39 = local_3c0;
          goto LAB_009f8d74;
        }
        if ((*puVar17 & 1) == 0) {
          puVar17 = puVar17 + -2;
          DataMemoryBarrier(0xb);
          do {
            uVar13 = *puVar17;
            bVar41 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar41);
          *puVar17 = uVar13 - 1;
          if (uVar13 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a95174();
          }
        }
        else {
          iVar37 = FUN_009cefa8(piVar38,puVar17);
          pcVar10 = (char *)(iVar37 + 0x17c);
          DataMemoryBarrier(0xb);
          do {
            cVar1 = *pcVar10;
            bVar41 = (bool)hasExclusiveAccess(pcVar10);
          } while (!bVar41);
          *pcVar10 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
          }
          *(undefined1 *)(iVar37 + 0x17d) = 0;
          iVar40 = iVar37 + 8;
          local_1d0 = 0;
          local_1e0 = &DAT_01c0ccf4;
          uVar13 = puVar17[3];
          local_1d8 = &local_1e0;
          uVar27 = puVar17[2];
          local_1dc = iVar40;
          local_1d4 = local_1d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar17[0x56]) {
          case '\0':
            puVar17[0x10] = 1;
            puVar22 = (uint *)0x0;
            if (puVar17[4] != 0) {
              puVar22 = puVar17 + 5;
            }
            *(char *)(puVar17 + 0x18) = (char)puVar17[0xc];
            puVar17[0x15] = puVar17[9];
            puVar17[0x12] = puVar17[0xf];
            puVar17[0x13] = (uint)puVar22;
            puVar17[0x14] = puVar17[8];
            puVar17[0x16] = puVar17[10];
            puVar17[0x17] = puVar17[0xb];
            puVar17[0x11] = 0;
            iVar28 = *(int *)puVar17[10];
            FUN_00b1bc48(puVar17 + 0x19);
            uVar18 = puVar17[0x1a];
            uVar11 = puVar17[0x1b];
            FUN_00abcf9c(puVar17 + 0x1c);
            uVar19 = puVar17[0xd];
            iVar31 = *(int *)(uVar19 + 0x3c);
            uVar23 = *(uint *)(uVar19 + 0x40);
            if (*(int *)(uVar19 + 0x4c) == 0) {
              uVar26 = 0;
              uVar24 = uVar23;
            }
            else {
              uVar26 = *(int *)(uVar19 + 0x4c) + 8;
              uVar24 = *(uint *)(uVar19 + 0x50);
            }
            puVar17[0x1f] = (uint)(puVar17 + 0xe);
            puVar17[0x51] = uVar19 + 8;
            puVar17[0x4b] = uVar18;
            puVar17[0x4c] = uVar11;
            puVar17[0x4d] = puVar17[0x1d];
            puVar17[0x4e] = puVar17[0x1e];
            puVar17[0x53] = uVar24;
            puVar17[0x4f] = iVar31 + 8;
            puVar17[0x4a] = (uint)(puVar17 + 0x11);
            puVar17[0x50] = uVar23;
            puVar17[0x20] = (uint)(puVar17 + 0x10);
            *(undefined1 *)(puVar17 + 0x55) = 0;
            puVar17[0x52] = uVar26;
            puVar17[0x49] = iVar28 + 8;
            *(undefined1 *)(puVar17 + 0x2f) = 0;
            puVar17[0x21] = uVar19;
            *(char *)(puVar17 + 0x54) = (char)puVar17[0x18];
            puVar17[0x30] = (uint)(puVar17 + 0x1f);
            puVar17[0x31] = (uint)(puVar17 + 0x30);
            puVar17[0x32] = (uint)&DAT_01c12410;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21a2c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21a2c);
          }
          FUN_009e8f3c(&local_298,puVar17 + 0x31,&local_1d8);
          puVar12 = local_260;
          puVar39 = local_280;
          puVar30 = local_298;
          if (local_298 != (undefined1 *)0x2) goto LAB_009f8b68;
          *(undefined1 *)(puVar17 + 0x56) = 3;
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar37 + 0x17d) != '\0') {
            local_384 = local_384 + 1;
          }
          local_388 = local_388 + 1;
          do {
            iVar31 = *piVar14;
            bVar41 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar41);
          *piVar14 = iVar40;
          DataMemoryBarrier(0xb);
          if (iVar31 == 0) {
            *(undefined4 *)(iVar37 + 0x170) = 1;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar37 + 0x168) = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(iVar31 + 0x160) == *(int *)(*piVar38 + 8) + 8);
            *(int *)(iVar37 + 0x170) = *(int *)(iVar31 + 0x168) + 1;
            DataMemoryBarrier(0xb);
            *(int *)(iVar37 + 0x168) = iVar31;
            *(int *)(iVar31 + 0x164) = iVar40;
          }
          if ((1 < local_384) || (local_388 == local_38c)) goto LAB_009f8d58;
        }
        iVar37 = *piVar38;
      } while( true );
    }
    uVar13 = *(uint *)(param_2[8] + 0x40);
    iVar37 = *(int *)(param_2[8] + 0x44);
    if (uVar13 != *puVar21 || iVar37 != param_2[3]) goto LAB_009f8810;
    *puVar21 = uVar13 + 1;
    param_2[3] = iVar37 + (uint)(0xfffffffe < uVar13);
    FUN_00b1c730(&local_298,param_2 + 7);
    local_2b0 = *puVar8;
    uStack_2ac = puVar8[1];
    uStack_2a8 = puVar8[2];
    uStack_2a4 = puVar8[3];
    uStack_2a0 = puVar8[4];
    local_2d0 = local_27c;
    puStack_2cc = puStack_278;
    puStack_2c8 = puStack_274;
    local_2c4 = local_270;
    puStack_2c0 = puStack_26c;
    puStack_2bc = puStack_268;
    puStack_2b8 = puStack_264;
    local_3f4 = puStack_25c;
    puVar30 = local_298;
    puVar39 = local_280;
    local_3f0 = local_260;
    goto LAB_009f8d74;
  }
  iVar37 = *param_2;
  puVar30 = (undefined1 *)param_2[1];
  local_380 = (undefined1 *)0x3;
  if (puVar30 == (undefined1 *)0x0) {
    puVar39 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_294 = (undefined1 *)0x8;
    local_298 = (undefined1 *)0x0;
LAB_009f8f48:
    param_1[1] = (uint)local_298;
    param_1[2] = (uint)local_294;
    param_1[3] = (uint)puVar39;
    *param_1 = 2;
    local_290 = puVar39;
    FUN_009f9494(iVar37,puVar30);
  }
  else {
    iVar40 = 0;
    puVar2 = (undefined4 *)((uint)&local_178 | 4);
    puVar3 = (undefined4 *)((uint)&local_2d0 | 4);
    puVar4 = (undefined4 *)((uint)&local_308 | 4);
    puVar5 = (undefined4 *)((uint)&local_218 | 4);
    puVar6 = (undefined4 *)((uint)&local_250 | 4);
    do {
      piVar14 = (int *)(iVar37 + iVar40);
      if (*piVar14 == 0) {
        iVar31 = iVar37 + iVar40;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar31 + 0x14c)) {
        case 0:
          iVar28 = 0;
          if (*(int *)(iVar31 + 4) != 0) {
            iVar28 = iVar31 + 8;
          }
          *(undefined1 *)(iVar31 + 0x54) = *(undefined1 *)(iVar31 + 0x24);
          *(int *)(iVar31 + 0x40) = iVar28;
          *(undefined4 *)(iVar31 + 0x44) = *(undefined4 *)(iVar31 + 0x14);
          *(undefined4 *)(iVar31 + 0x48) = *(undefined4 *)(iVar31 + 0x18);
          *(int **)(iVar31 + 0x4c) = *(int **)(iVar31 + 0x1c);
          *(undefined4 *)(iVar31 + 0x38) = 0;
          *(undefined4 *)(iVar31 + 0x3c) = *(undefined4 *)(iVar31 + 0x30);
          *(undefined4 *)(iVar31 + 0x50) = *(undefined4 *)(iVar31 + 0x20);
          *(undefined4 *)(iVar31 + 0x34) = 1;
          iVar33 = **(int **)(iVar31 + 0x1c);
          FUN_00b1bc48(iVar31 + 0x58);
          uVar32 = *(undefined4 *)(iVar31 + 0x5c);
          uVar36 = *(undefined4 *)(iVar31 + 0x60);
          FUN_00abcf9c(iVar31 + 100);
          iVar15 = *(int *)(iVar31 + 0x28);
          iVar28 = *(int *)(iVar15 + 0x3c);
          local_390 = *(undefined1 **)(iVar15 + 0x40);
          if (*(int *)(iVar15 + 0x4c) == 0) {
            iVar34 = 0;
            puVar39 = local_390;
          }
          else {
            iVar34 = *(int *)(iVar15 + 0x4c) + 8;
            puVar39 = *(undefined1 **)(iVar15 + 0x50);
          }
          *(int *)(iVar31 + 0x70) = iVar31 + 0x2c;
          *(undefined4 *)(iVar31 + 0x128) = *(undefined4 *)(iVar31 + 0x68);
          *(int *)(iVar31 + 0x138) = iVar15 + 8;
          *(undefined4 *)(iVar31 + 300) = *(undefined4 *)(iVar31 + 0x6c);
          *(undefined1 **)(iVar31 + 0x140) = puVar39;
          *(int *)(iVar31 + 0x130) = iVar28 + 8;
          *(undefined1 **)(iVar31 + 0x134) = local_390;
          *(undefined4 **)(iVar31 + 0x74) = (undefined4 *)(iVar31 + 0x34);
          *(undefined1 *)(iVar31 + 0x148) = 0;
          *(undefined1 *)(iVar31 + 0x144) = *(undefined1 *)(iVar31 + 0x54);
          *(int *)(iVar31 + 0x13c) = iVar34;
          *(int *)(iVar31 + 0x118) = iVar33 + 8;
          *(undefined4 **)(iVar31 + 0x11c) = (undefined4 *)(iVar31 + 0x38);
          *(undefined4 *)(iVar31 + 0x120) = uVar32;
          *(undefined4 *)(iVar31 + 0x124) = uVar36;
          *(undefined1 *)(iVar31 + 0xb0) = 0;
          *(int *)(iVar31 + 0x78) = iVar15;
          *(int **)(iVar31 + 0xb4) = (int *)(iVar31 + 0x70);
          *(int *)(iVar31 + 0xb8) = iVar31 + 0xb4;
          *(undefined **)(iVar31 + 0xbc) = &DAT_01c12410;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_178,iVar31 + 0xb8,param_3);
        puVar25 = local_13c;
        puVar12 = local_160;
        puVar39 = local_178;
        if (local_178 == (undefined1 *)0x2) {
          *(undefined1 *)(iVar31 + 0x14c) = 3;
LAB_009f84dc:
          if (local_380 < (undefined1 *)0x2) {
            FUN_006c9ae0(&local_380);
          }
          local_380 = (undefined1 *)0x2;
        }
        else {
          local_250 = (undefined1 *)*puVar2;
          puStack_24c = (undefined1 *)puVar2[1];
          puStack_248 = (undefined1 *)puVar2[2];
          local_244 = (undefined1 *)puVar2[3];
          puStack_240 = (undefined1 *)puVar2[4];
          local_298 = local_15c;
          local_294 = local_158;
          local_290 = local_154;
          local_28c = local_150;
          puStack_288 = puStack_14c;
          puStack_284 = puStack_148;
          local_280 = local_144;
          puVar29 = local_140;
          cVar1 = *(char *)(iVar31 + 0x148);
          bVar41 = cVar1 == '\x03';
          if (bVar41) {
            cVar1 = *(char *)(iVar31 + 0x10c);
          }
          if (bVar41 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar31 + 0x110),*(undefined4 *)(iVar31 + 0x114));
          }
          if (((uint)puVar39 & 1) == 0) {
            if (puVar12 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar36 = puVar6[1];
            uVar32 = puVar6[2];
            uVar35 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar36;
            puVar5[2] = uVar32;
            puVar5[3] = uVar35;
          }
          else {
            local_218 = local_250;
            puStack_214 = puStack_24c;
            puStack_210 = puStack_248;
            local_20c = local_244;
            puStack_208 = puStack_240;
            local_390 = puVar29;
          }
          FUN_019bb7e0(*(undefined4 *)(iVar31 + 100),*(undefined4 *)(iVar31 + 0x68));
          if (*(int *)(iVar31 + 0x58) != -0x80000000) {
            FUN_019bb7e0(*(int *)(iVar31 + 0x58),*(undefined4 *)(iVar31 + 0x5c));
          }
          local_308 = local_218;
          puStack_304 = puStack_214;
          puStack_300 = puStack_210;
          local_2fc = local_20c;
          puStack_2f8 = puStack_208;
          local_198 = local_298;
          puStack_194 = local_294;
          puStack_190 = local_290;
          local_18c = local_28c;
          puStack_188 = puStack_288;
          puStack_184 = puStack_284;
          puStack_180 = local_280;
          *(undefined1 *)(iVar31 + 0x14c) = 1;
          if (((uint)puVar39 & 1) == 0) {
            uVar36 = puVar4[1];
            uVar32 = puVar4[2];
            uVar35 = puVar4[3];
            *puVar3 = *puVar4;
            puVar3[1] = uVar36;
            puVar3[2] = uVar32;
            puVar3[3] = uVar35;
            FUN_009f9508(piVar14);
            puVar7 = (undefined4 *)(iVar37 + iVar40);
            *puVar7 = 1;
            puVar7[1] = local_2d0;
            puVar7[2] = puStack_2cc;
            puVar7[3] = puStack_2c8;
            puVar7[4] = local_2c4;
            puVar7[5] = puStack_2c0;
            puVar7[6] = puVar12;
            puVar7[7] = local_198;
            puVar7[8] = puStack_194;
            puVar7[9] = puStack_190;
            puVar7[10] = local_18c;
            puVar7[0xb] = puStack_188;
            puVar7[0xc] = puStack_184;
            puVar7[0xd] = puStack_180;
          }
          else {
            local_178 = local_218;
            puStack_174 = puStack_214;
            puStack_170 = puStack_210;
            local_16c = local_20c;
            local_168 = puStack_208;
            local_164 = puVar12;
            local_160 = local_298;
            local_15c = local_294;
            local_158 = local_290;
            local_154 = local_28c;
            local_150 = puStack_288;
            puStack_14c = puStack_284;
            puStack_148 = local_280;
            local_144 = local_390;
            local_140 = puVar25;
            FUN_009f9508(piVar14);
            puVar39 = local_178;
            *piVar14 = 2;
            local_340 = *puVar2;
            uStack_33c = puVar2[1];
            uStack_338 = puVar2[2];
            uStack_334 = puVar2[3];
            local_330 = puVar2[4];
            uStack_32c = puVar2[5];
            uStack_328 = puVar2[6];
            uStack_324 = puVar2[7];
            uStack_320 = puVar2[8];
            local_31c = puVar2[9];
            uStack_318 = puVar2[10];
            uStack_314 = puVar2[0xb];
            uStack_310 = puVar2[0xc];
            uStack_30c = puVar2[0xd];
            if (local_178 != (undefined1 *)0x2) {
              if (local_178 == (undefined1 *)0x3) goto LAB_009f84dc;
              if (local_380 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_380);
              }
              local_380 = puVar39;
              puVar2 = (undefined4 *)((uint)&local_380 | 4);
              *puVar2 = local_340;
              puVar2[1] = uStack_33c;
              puVar2[2] = uStack_338;
              puVar2[3] = uStack_334;
              puVar2[4] = local_330;
              puVar2[5] = uStack_32c;
              puVar2[6] = uStack_328;
              puVar2[7] = uStack_324;
              puVar2[8] = uStack_320;
              puVar2[9] = local_31c;
              puVar2[10] = uStack_318;
              puVar2[0xb] = uStack_314;
              puVar2[0xc] = uStack_310;
              puVar2[0xd] = uStack_30c;
              break;
            }
          }
        }
      }
      else if (*piVar14 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar40 = iVar40 + 0x150;
    } while ((int)puVar30 * 0x150 != iVar40);
    if ((undefined1 *)0x1 < local_380) {
      if (local_380 == (undefined1 *)0x2) {
LAB_009f8eb0:
        *param_1 = 3;
        return;
      }
      if (local_380 == (undefined1 *)0x3) {
        uVar36 = 0;
        uVar13 = 8;
        iVar40 = (int)puVar30 * 0x30;
        *param_2 = 8;
        param_2[1] = 0;
        if ((undefined1 *)0x2aaaaaa < puVar30) {
LAB_009f8ea0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar36,iVar40);
        }
        puVar12 = (undefined1 *)0x0;
        if (iVar40 != 0) {
          uVar36 = 8;
          uVar13 = FUN_01298504(iVar40,8);
          puVar12 = puVar30;
          if (uVar13 == 0) goto LAB_009f8ea0;
        }
        puVar39 = (undefined1 *)0x0;
        local_298 = puVar12;
        local_294 = (undefined1 *)uVar13;
        if (puVar30 != (undefined1 *)0x0) {
          puVar39 = (undefined1 *)0x0;
          puVar3 = (undefined4 *)(iVar37 + 0x1c);
          puVar2 = (undefined4 *)(uVar13 + 0x14);
          do {
            piVar14 = puVar3 + -7;
            if (*piVar14 != 1) {
LAB_009f91ec:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_178,piVar14,0x150);
            *piVar14 = 2;
            if (local_178 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar40 = puVar3[-1];
            if (iVar40 == -0x7ffffff9) goto LAB_009f91ec;
            local_178 = (undefined1 *)*puVar3;
            puStack_174 = (undefined1 *)puVar3[1];
            puStack_170 = (undefined1 *)puVar3[2];
            local_16c = (undefined1 *)puVar3[3];
            local_168 = (undefined1 *)puVar3[4];
            local_164 = (undefined1 *)puVar3[5];
            local_160 = (undefined1 *)puVar3[6];
            FUN_01bed864(puVar2 + -5,puVar3 + -5,0x10);
            puVar2[-1] = iVar40;
            puVar3 = puVar3 + 0x54;
            *puVar2 = local_178;
            puVar2[1] = puStack_174;
            puVar2[2] = puStack_170;
            puVar39 = puVar39 + 1;
            puVar2[3] = local_16c;
            puVar2[4] = local_168;
            puVar2[5] = local_164;
            puVar2[6] = local_160;
            puVar2 = puVar2 + 0xc;
          } while (puVar30 != puVar39);
          puVar39 = puVar30;
        }
        goto LAB_009f8f48;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_009f9494(iVar37,puVar30);
    *param_1 = (uint)local_380;
    param_1[1] = uStack_37c;
    param_1[2] = uStack_378;
    param_1[3] = uStack_374;
    param_1[4] = uStack_370;
    param_1[5] = local_36c;
    param_1[6] = uStack_368;
    param_1[7] = uStack_364;
    param_1[8] = uStack_360;
    param_1[9] = uStack_35c;
    param_1[10] = local_358;
    param_1[0xb] = uStack_354;
    param_1[0xc] = uStack_350;
    param_1[0xd] = uStack_34c;
    param_1[0xe] = uStack_348;
  }
  return;
LAB_009f8b68:
  local_1c8 = *puVar8;
  uStack_1c4 = puVar8[1];
  uStack_1c0 = puVar8[2];
  uStack_1bc = puVar8[3];
  uStack_1b8 = puVar8[4];
  local_198 = local_27c;
  puStack_194 = puStack_278;
  puStack_190 = puStack_274;
  local_18c = local_270;
  puStack_188 = puStack_26c;
  puStack_184 = puStack_268;
  puStack_180 = puStack_264;
  puVar25 = puStack_25c;
  cVar1 = (char)puVar17[0x55];
  bVar41 = cVar1 == '\x03';
  if (bVar41) {
    cVar1 = (char)puVar17[0x46];
  }
  if (bVar41 && cVar1 == '\x03') {
    FUN_01139b38(puVar17[0x47],puVar17[0x48]);
  }
  if (((uint)puVar30 & 1) == 0) {
    if (puVar39 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
    }
    puVar30 = (undefined1 *)0x0;
    uVar36 = puVar4[1];
    uVar32 = puVar4[2];
    uVar35 = puVar4[3];
    *puVar3 = *puVar4;
    puVar3[1] = uVar36;
    puVar3[2] = uVar32;
    puVar3[3] = uVar35;
  }
  else {
    puVar30 = (undefined1 *)0x1;
    local_1b0 = local_1c8;
    uStack_1ac = uStack_1c4;
    uStack_1a8 = uStack_1c0;
    uStack_1a4 = uStack_1bc;
    uStack_1a0 = uStack_1b8;
    local_38c = puVar25;
  }
  FUN_019bb7e0(puVar17[0x1c],puVar17[0x1d]);
  if (puVar17[0x19] != 0x80000000) {
    FUN_019bb7e0(puVar17[0x19],puVar17[0x1a]);
  }
  local_1f8 = local_1b0;
  uStack_1f4 = uStack_1ac;
  uStack_1f0 = uStack_1a8;
  uStack_1ec = uStack_1a4;
  uStack_1e8 = uStack_1a0;
  local_218 = local_198;
  puStack_214 = puStack_194;
  puStack_210 = puStack_190;
  local_20c = local_18c;
  puStack_208 = puStack_188;
  puStack_204 = puStack_184;
  puStack_200 = puStack_180;
  *(undefined1 *)(puVar17 + 0x56) = 1;
  local_230 = local_1b0;
  uStack_22c = uStack_1ac;
  uStack_228 = uStack_1a8;
  uStack_224 = uStack_1a4;
  uStack_220 = uStack_1a0;
  local_250 = local_198;
  puStack_24c = puStack_194;
  puStack_248 = puStack_190;
  local_244 = local_18c;
  puStack_240 = puStack_188;
  puStack_23c = puStack_184;
  puStack_238 = puStack_180;
  FUN_009cf018(iVar37);
  *puVar9 = local_230;
  puVar9[1] = uStack_22c;
  puVar9[2] = uStack_228;
  puVar9[3] = uStack_224;
  puVar9[4] = uStack_220;
  local_160 = puVar39;
  local_15c = local_250;
  local_158 = puStack_24c;
  local_154 = puStack_248;
  local_150 = local_244;
  puStack_14c = puStack_240;
  puStack_148 = puStack_23c;
  local_144 = puStack_238;
  local_140 = puVar12;
  local_13c = local_38c;
  local_138 = uVar27;
  local_134 = uVar13;
  if (uVar27 == *puVar21 && uVar13 == param_2[3]) goto LAB_009f8e0c;
  local_178 = puVar30;
  FUN_00b1c9a8(param_2 + 7,&local_178);
  goto LAB_009f8810;
LAB_009f8e0c:
  *puVar21 = uVar27 + 1;
  param_2[3] = uVar13 + (0xfffffffe < uVar27);
  local_2b0 = local_230;
  uStack_2ac = uStack_22c;
  uStack_2a8 = uStack_228;
  uStack_2a4 = uStack_224;
  uStack_2a0 = uStack_220;
  local_2d0 = local_250;
  puStack_2cc = puStack_24c;
  puStack_2c8 = puStack_248;
  local_2c4 = local_244;
  puStack_2c0 = puStack_240;
  puStack_2bc = puStack_23c;
  puStack_2b8 = puStack_238;
  local_3f4 = local_38c;
  local_3f0 = puVar12;
LAB_009f8d74:
  if (puVar30 != (undefined1 *)0x2) {
    if (puVar30 == (undefined1 *)0x3) goto LAB_009f8eb0;
    if (((uint)puVar30 & 1) != 0) {
      *param_1 = local_2b0;
      param_1[1] = uStack_2ac;
      param_1[2] = uStack_2a8;
      param_1[3] = uStack_2a4;
      param_1[4] = uStack_2a0;
      param_1[6] = (uint)local_2d0;
      param_1[7] = (uint)puStack_2cc;
      param_1[8] = (uint)puStack_2c8;
      param_1[9] = (uint)local_2c4;
      param_1[10] = (uint)puStack_2c0;
      param_1[0xb] = (uint)puStack_2bc;
      param_1[0xc] = (uint)puStack_2b8;
      param_1[5] = (uint)puVar39;
      param_1[0xd] = (uint)local_3f0;
      param_1[0xe] = (uint)local_3f4;
      return;
    }
    uVar36 = puVar2[1];
    uVar32 = puVar2[2];
    uVar35 = puVar2[3];
    *puVar5 = *puVar2;
    puVar5[1] = uVar36;
    puVar5[2] = uVar32;
    puVar5[3] = uVar35;
    local_308 = local_2d0;
    puStack_304 = puStack_2cc;
    puStack_300 = puStack_2c8;
    local_2fc = local_2c4;
    puStack_2f8 = puStack_2c0;
    puStack_2f4 = puStack_2bc;
    puStack_2f0 = puStack_2b8;
    if (puVar39 != (undefined1 *)0x80000007) {
      if (puVar39 == &DAT_80000008) goto LAB_009f8eb0;
      local_178 = (undefined1 *)*puVar5;
      puStack_174 = (undefined1 *)puVar5[1];
      puStack_170 = (undefined1 *)puVar5[2];
      local_16c = (undefined1 *)puVar5[3];
      local_160 = puStack_2cc;
      local_15c = puStack_2c8;
      local_158 = local_2c4;
      local_154 = puStack_2c0;
      local_150 = puStack_2bc;
      puStack_14c = puStack_2b8;
      FUN_00b22508(puVar20);
      local_3c0 = puVar39;
      goto LAB_009f877c;
    }
  }
  uVar13 = param_2[0xb];
  uVar27 = param_2[0xc];
  param_1[1] = *puVar20;
  param_1[2] = uVar13;
  param_1[3] = uVar27;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

