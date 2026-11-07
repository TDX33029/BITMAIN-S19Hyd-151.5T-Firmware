// FUN_009ed994 @ 009ed994 size=3884 calls_out=25 calls_in=5
// strings: assertion failed: prev | TryMaybeDone polled after value taken | You definitely encountered a bug! | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009ed994(uint *param_1,int *param_2,undefined4 *param_3)

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
  undefined1 *local_3e4;
  undefined1 *local_3e0;
  undefined1 *local_3b0;
  undefined1 *local_380;
  undefined1 *local_37c;
  undefined1 *local_378;
  uint local_374;
  undefined1 *local_370;
  uint uStack_36c;
  uint uStack_368;
  uint uStack_364;
  uint uStack_360;
  uint local_35c;
  uint uStack_358;
  uint uStack_354;
  uint uStack_350;
  uint uStack_34c;
  uint local_348;
  uint uStack_344;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 *local_2f8;
  undefined1 *puStack_2f4;
  undefined1 *puStack_2f0;
  undefined1 *local_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e4;
  undefined1 *puStack_2e0;
  undefined1 local_2d8 [24];
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
  undefined1 *local_284;
  undefined1 *local_280;
  undefined1 *local_27c;
  undefined1 *puStack_278;
  undefined1 *puStack_274;
  undefined1 *local_270;
  undefined1 *local_26c;
  undefined1 *puStack_268;
  undefined1 *puStack_264;
  undefined1 *local_260;
  undefined1 *puStack_25c;
  undefined1 *puStack_258;
  undefined1 *puStack_254;
  undefined1 *local_250;
  undefined1 *puStack_24c;
  undefined1 *local_240;
  undefined1 *puStack_23c;
  undefined1 *puStack_238;
  undefined1 *local_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
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
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined *local_1d0;
  int local_1cc;
  undefined **local_1c8;
  undefined **local_1c4;
  undefined4 local_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  undefined1 *local_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *local_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  undefined1 *local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  undefined1 *local_134;
  undefined1 *local_130;
  undefined1 *local_12c;
  uint local_128;
  uint uStack_124;
  
  puVar20 = (uint *)(param_2 + 10);
  if (*puVar20 != 0x80000000) {
    puVar2 = (undefined4 *)((uint)&local_2a0 | 4);
    puVar3 = (undefined4 *)((uint)&local_1a0 | 4);
    piVar38 = param_2 + 4;
    puVar4 = (undefined4 *)((uint)&local_1b8 | 4);
    puVar8 = (uint *)((uint)&local_288 | 4);
    puVar9 = (uint *)((uint)&local_168 | 4);
    piVar14 = param_2 + 5;
    puVar5 = (undefined4 *)((uint)local_2d8 | 4);
    puVar21 = (uint *)(param_2 + 2);
LAB_009ede90:
    if (param_2[9] == 0) {
LAB_009edf24:
      iVar37 = *piVar14;
      DataMemoryBarrier(0xb);
      local_37c = (undefined1 *)0x0;
      if (iVar37 != 0) {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(iVar37 + 0x148) == *(int *)(*piVar38 + 8) + 8);
        local_37c = *(undefined1 **)(iVar37 + 0x150);
      }
      iVar37 = *piVar38;
      local_374 = 0;
      piVar16 = (int *)*param_3;
      FUN_01348e78(iVar37 + 0xc);
      local_378 = (undefined1 *)0x0;
      do {
        uVar42 = FUN_00e7c5b8(iVar37 + 8);
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
LAB_009ee468:
            (**(code **)(*piVar16 + 8))(piVar16[1]);
            puVar30 = (undefined1 *)0x3;
          }
          puVar39 = local_3b0;
          goto LAB_009ee484;
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
            FUN_00a9614c();
          }
        }
        else {
          iVar37 = FUN_00e7b4e0(piVar38,puVar17);
          pcVar10 = (char *)(iVar37 + 0x164);
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
          *(undefined1 *)(iVar37 + 0x165) = 0;
          iVar40 = iVar37 + 8;
          uVar27 = puVar17[0x50];
          local_1d0 = &DAT_01c0ccd4;
          uVar13 = puVar17[0x51];
          local_1c8 = &local_1d0;
          local_1c0 = 0;
          local_1cc = iVar40;
          local_1c4 = local_1c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar17[0x4f]) {
          case '\0':
            puVar17[0xe] = 1;
            puVar22 = (uint *)0x0;
            if (puVar17[2] != 0) {
              puVar22 = puVar17 + 3;
            }
            *(char *)(puVar17 + 0x16) = (char)puVar17[10];
            puVar17[0x13] = puVar17[7];
            puVar17[0x10] = puVar17[0xd];
            puVar17[0x11] = (uint)puVar22;
            puVar17[0x12] = puVar17[6];
            puVar17[0x14] = puVar17[8];
            puVar17[0x15] = puVar17[9];
            puVar17[0xf] = 0;
            iVar28 = *(int *)puVar17[8];
            FUN_00b1bc48(puVar17 + 0x17);
            uVar18 = puVar17[0x18];
            uVar11 = puVar17[0x19];
            FUN_00abcf9c(puVar17 + 0x1a);
            uVar19 = puVar17[0xb];
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
            puVar17[0x1d] = (uint)(puVar17 + 0xc);
            puVar17[0x4a] = uVar19 + 8;
            puVar17[0x44] = uVar18;
            puVar17[0x45] = uVar11;
            puVar17[0x46] = puVar17[0x1b];
            puVar17[0x47] = puVar17[0x1c];
            puVar17[0x4c] = uVar24;
            puVar17[0x48] = iVar31 + 8;
            puVar17[0x43] = (uint)(puVar17 + 0xf);
            puVar17[0x49] = uVar23;
            puVar17[0x1e] = (uint)(puVar17 + 0xe);
            *(undefined1 *)(puVar17 + 0x4e) = 0;
            puVar17[0x4b] = uVar26;
            puVar17[0x42] = iVar28 + 8;
            *(undefined1 *)(puVar17 + 0x28) = 0;
            puVar17[0x1f] = uVar19;
            *(char *)(puVar17 + 0x4d) = (char)puVar17[0x16];
            puVar17[0x29] = (uint)(puVar17 + 0x1d);
            puVar17[0x2a] = (uint)(puVar17 + 0x29);
            puVar17[0x2b] = (uint)&DAT_01c123e0;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21a2c);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21a2c);
          }
          FUN_009e8f3c(&local_288,puVar17 + 0x2a,&local_1c8);
          puVar12 = local_250;
          puVar39 = local_270;
          puVar30 = local_288;
          if (local_288 != (undefined1 *)0x2) goto LAB_009ee27c;
          *(undefined1 *)(puVar17 + 0x4f) = 3;
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar37 + 0x165) != '\0') {
            local_374 = local_374 + 1;
          }
          local_378 = local_378 + 1;
          do {
            iVar31 = *piVar14;
            bVar41 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar41);
          *piVar14 = iVar40;
          DataMemoryBarrier(0xb);
          if (iVar31 == 0) {
            *(undefined4 *)(iVar37 + 0x158) = 1;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar37 + 0x150) = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(iVar31 + 0x148) == *(int *)(*piVar38 + 8) + 8);
            *(int *)(iVar37 + 0x158) = *(int *)(iVar31 + 0x150) + 1;
            DataMemoryBarrier(0xb);
            *(int *)(iVar37 + 0x150) = iVar31;
            *(int *)(iVar31 + 0x14c) = iVar40;
          }
          if ((1 < local_374) || (local_378 == local_37c)) goto LAB_009ee468;
        }
        iVar37 = *piVar38;
      } while( true );
    }
    uVar13 = *(uint *)(param_2[8] + 0x40);
    iVar37 = *(int *)(param_2[8] + 0x44);
    if (uVar13 != *puVar21 || iVar37 != param_2[3]) goto LAB_009edf24;
    *puVar21 = uVar13 + 1;
    param_2[3] = iVar37 + (uint)(0xfffffffe < uVar13);
    FUN_00b1c730(&local_288,param_2 + 7);
    local_2a0 = *puVar8;
    uStack_29c = puVar8[1];
    uStack_298 = puVar8[2];
    uStack_294 = puVar8[3];
    uStack_290 = puVar8[4];
    local_2c0 = local_26c;
    puStack_2bc = puStack_268;
    puStack_2b8 = puStack_264;
    local_2b4 = local_260;
    puStack_2b0 = puStack_25c;
    puStack_2ac = puStack_258;
    puStack_2a8 = puStack_254;
    local_3e4 = puStack_24c;
    puVar30 = local_288;
    puVar39 = local_270;
    local_3e0 = local_250;
    goto LAB_009ee484;
  }
  iVar37 = *param_2;
  puVar30 = (undefined1 *)param_2[1];
  local_370 = (undefined1 *)0x3;
  if (puVar30 == (undefined1 *)0x0) {
    puVar39 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_284 = (undefined1 *)0x8;
    local_288 = (undefined1 *)0x0;
LAB_009ee658:
    param_1[1] = (uint)local_288;
    param_1[2] = (uint)local_284;
    param_1[3] = (uint)puVar39;
    *param_1 = 2;
    local_280 = puVar39;
    FUN_009eeba0(iVar37,puVar30);
  }
  else {
    iVar40 = 0;
    puVar2 = (undefined4 *)((uint)&local_168 | 4);
    puVar3 = (undefined4 *)((uint)&local_2c0 | 4);
    puVar4 = (undefined4 *)((uint)&local_2f8 | 4);
    puVar5 = (undefined4 *)((uint)&local_208 | 4);
    puVar6 = (undefined4 *)((uint)&local_240 | 4);
    do {
      piVar14 = (int *)(iVar37 + iVar40);
      if (*piVar14 == 0) {
        iVar31 = iVar37 + iVar40;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(iVar31 + 0x138)) {
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
          local_380 = *(undefined1 **)(iVar15 + 0x40);
          if (*(int *)(iVar15 + 0x4c) == 0) {
            iVar34 = 0;
            puVar39 = local_380;
          }
          else {
            iVar34 = *(int *)(iVar15 + 0x4c) + 8;
            puVar39 = *(undefined1 **)(iVar15 + 0x50);
          }
          *(int *)(iVar31 + 0x70) = iVar31 + 0x2c;
          *(undefined4 *)(iVar31 + 0x114) = *(undefined4 *)(iVar31 + 0x68);
          *(int *)(iVar31 + 0x124) = iVar15 + 8;
          *(undefined4 *)(iVar31 + 0x118) = *(undefined4 *)(iVar31 + 0x6c);
          *(undefined1 **)(iVar31 + 300) = puVar39;
          *(int *)(iVar31 + 0x11c) = iVar28 + 8;
          *(undefined1 **)(iVar31 + 0x120) = local_380;
          *(undefined4 **)(iVar31 + 0x74) = (undefined4 *)(iVar31 + 0x34);
          *(undefined1 *)(iVar31 + 0x134) = 0;
          *(undefined1 *)(iVar31 + 0x130) = *(undefined1 *)(iVar31 + 0x54);
          *(int *)(iVar31 + 0x128) = iVar34;
          *(int *)(iVar31 + 0x104) = iVar33 + 8;
          *(undefined4 **)(iVar31 + 0x108) = (undefined4 *)(iVar31 + 0x38);
          *(undefined4 *)(iVar31 + 0x10c) = uVar32;
          *(undefined4 *)(iVar31 + 0x110) = uVar36;
          *(undefined1 *)(iVar31 + 0x9c) = 0;
          *(int *)(iVar31 + 0x78) = iVar15;
          *(int **)(iVar31 + 0xa0) = (int *)(iVar31 + 0x70);
          *(int *)(iVar31 + 0xa4) = iVar31 + 0xa0;
          *(undefined **)(iVar31 + 0xa8) = &DAT_01c123e0;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_168,iVar31 + 0xa4,param_3);
        puVar25 = local_12c;
        puVar12 = local_150;
        puVar39 = local_168;
        if (local_168 == (undefined1 *)0x2) {
          *(undefined1 *)(iVar31 + 0x138) = 3;
LAB_009edbf4:
          if (local_370 < (undefined1 *)0x2) {
            FUN_006c9ae0(&local_370);
          }
          local_370 = (undefined1 *)0x2;
        }
        else {
          local_240 = (undefined1 *)*puVar2;
          puStack_23c = (undefined1 *)puVar2[1];
          puStack_238 = (undefined1 *)puVar2[2];
          local_234 = (undefined1 *)puVar2[3];
          puStack_230 = (undefined1 *)puVar2[4];
          local_288 = local_14c;
          local_284 = local_148;
          local_280 = local_144;
          local_27c = local_140;
          puStack_278 = puStack_13c;
          puStack_274 = puStack_138;
          local_270 = local_134;
          puVar29 = local_130;
          cVar1 = *(char *)(iVar31 + 0x134);
          bVar41 = cVar1 == '\x03';
          if (bVar41) {
            cVar1 = *(char *)(iVar31 + 0xf8);
          }
          if (bVar41 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)(iVar31 + 0xfc),*(undefined4 *)(iVar31 + 0x100));
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
            local_208 = local_240;
            puStack_204 = puStack_23c;
            puStack_200 = puStack_238;
            local_1fc = local_234;
            puStack_1f8 = puStack_230;
            local_380 = puVar29;
          }
          FUN_019bb7e0(*(undefined4 *)(iVar31 + 100),*(undefined4 *)(iVar31 + 0x68));
          if (*(int *)(iVar31 + 0x58) != -0x80000000) {
            FUN_019bb7e0(*(int *)(iVar31 + 0x58),*(undefined4 *)(iVar31 + 0x5c));
          }
          local_2f8 = local_208;
          puStack_2f4 = puStack_204;
          puStack_2f0 = puStack_200;
          local_2ec = local_1fc;
          puStack_2e8 = puStack_1f8;
          local_188 = local_288;
          puStack_184 = local_284;
          puStack_180 = local_280;
          local_17c = local_27c;
          puStack_178 = puStack_278;
          puStack_174 = puStack_274;
          puStack_170 = local_270;
          *(undefined1 *)(iVar31 + 0x138) = 1;
          if (((uint)puVar39 & 1) == 0) {
            uVar36 = puVar4[1];
            uVar32 = puVar4[2];
            uVar35 = puVar4[3];
            *puVar3 = *puVar4;
            puVar3[1] = uVar36;
            puVar3[2] = uVar32;
            puVar3[3] = uVar35;
            FUN_009eec14(piVar14);
            puVar7 = (undefined4 *)(iVar37 + iVar40);
            *puVar7 = 1;
            puVar7[1] = local_2c0;
            puVar7[2] = puStack_2bc;
            puVar7[3] = puStack_2b8;
            puVar7[4] = local_2b4;
            puVar7[5] = puStack_2b0;
            puVar7[6] = puVar12;
            puVar7[7] = local_188;
            puVar7[8] = puStack_184;
            puVar7[9] = puStack_180;
            puVar7[10] = local_17c;
            puVar7[0xb] = puStack_178;
            puVar7[0xc] = puStack_174;
            puVar7[0xd] = puStack_170;
          }
          else {
            local_168 = local_208;
            puStack_164 = puStack_204;
            puStack_160 = puStack_200;
            local_15c = local_1fc;
            local_158 = puStack_1f8;
            local_154 = puVar12;
            local_150 = local_288;
            local_14c = local_284;
            local_148 = local_280;
            local_144 = local_27c;
            local_140 = puStack_278;
            puStack_13c = puStack_274;
            puStack_138 = local_270;
            local_134 = local_380;
            local_130 = puVar25;
            FUN_009eec14(piVar14);
            puVar39 = local_168;
            *piVar14 = 2;
            local_330 = *puVar2;
            uStack_32c = puVar2[1];
            uStack_328 = puVar2[2];
            uStack_324 = puVar2[3];
            local_320 = puVar2[4];
            uStack_31c = puVar2[5];
            uStack_318 = puVar2[6];
            uStack_314 = puVar2[7];
            uStack_310 = puVar2[8];
            local_30c = puVar2[9];
            uStack_308 = puVar2[10];
            uStack_304 = puVar2[0xb];
            uStack_300 = puVar2[0xc];
            uStack_2fc = puVar2[0xd];
            if (local_168 != (undefined1 *)0x2) {
              if (local_168 == (undefined1 *)0x3) goto LAB_009edbf4;
              if (local_370 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_370);
              }
              local_370 = puVar39;
              puVar2 = (undefined4 *)((uint)&local_370 | 4);
              *puVar2 = local_330;
              puVar2[1] = uStack_32c;
              puVar2[2] = uStack_328;
              puVar2[3] = uStack_324;
              puVar2[4] = local_320;
              puVar2[5] = uStack_31c;
              puVar2[6] = uStack_318;
              puVar2[7] = uStack_314;
              puVar2[8] = uStack_310;
              puVar2[9] = local_30c;
              puVar2[10] = uStack_308;
              puVar2[0xb] = uStack_304;
              puVar2[0xc] = uStack_300;
              puVar2[0xd] = uStack_2fc;
              break;
            }
          }
        }
      }
      else if (*piVar14 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar40 = iVar40 + 0x140;
    } while ((int)puVar30 * 0x140 != iVar40);
    if ((undefined1 *)0x1 < local_370) {
      if (local_370 == (undefined1 *)0x2) {
LAB_009ee5c0:
        *param_1 = 3;
        return;
      }
      if (local_370 == (undefined1 *)0x3) {
        uVar36 = 0;
        uVar13 = 8;
        iVar40 = (int)puVar30 * 0x30;
        *param_2 = 8;
        param_2[1] = 0;
        if ((undefined1 *)0x2aaaaaa < puVar30) {
LAB_009ee5b0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar36,iVar40);
        }
        puVar12 = (undefined1 *)0x0;
        if (iVar40 != 0) {
          uVar36 = 8;
          uVar13 = FUN_01298504(iVar40,8);
          puVar12 = puVar30;
          if (uVar13 == 0) goto LAB_009ee5b0;
        }
        puVar39 = (undefined1 *)0x0;
        local_288 = puVar12;
        local_284 = (undefined1 *)uVar13;
        if (puVar30 != (undefined1 *)0x0) {
          puVar39 = (undefined1 *)0x0;
          puVar3 = (undefined4 *)(iVar37 + 0x1c);
          puVar2 = (undefined4 *)(uVar13 + 0x14);
          do {
            piVar14 = puVar3 + -7;
            if (*piVar14 != 1) {
LAB_009ee8fc:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_168,piVar14,0x140);
            *piVar14 = 2;
            if (local_168 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar40 = puVar3[-1];
            if (iVar40 == -0x7ffffff9) goto LAB_009ee8fc;
            local_168 = (undefined1 *)*puVar3;
            puStack_164 = (undefined1 *)puVar3[1];
            puStack_160 = (undefined1 *)puVar3[2];
            local_15c = (undefined1 *)puVar3[3];
            local_158 = (undefined1 *)puVar3[4];
            local_154 = (undefined1 *)puVar3[5];
            local_150 = (undefined1 *)puVar3[6];
            FUN_01bed864(puVar2 + -5,puVar3 + -5,0x10);
            puVar2[-1] = iVar40;
            puVar3 = puVar3 + 0x50;
            *puVar2 = local_168;
            puVar2[1] = puStack_164;
            puVar2[2] = puStack_160;
            puVar39 = puVar39 + 1;
            puVar2[3] = local_15c;
            puVar2[4] = local_158;
            puVar2[5] = local_154;
            puVar2[6] = local_150;
            puVar2 = puVar2 + 0xc;
          } while (puVar30 != puVar39);
          puVar39 = puVar30;
        }
        goto LAB_009ee658;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_009eeba0(iVar37,puVar30);
    *param_1 = (uint)local_370;
    param_1[1] = uStack_36c;
    param_1[2] = uStack_368;
    param_1[3] = uStack_364;
    param_1[4] = uStack_360;
    param_1[5] = local_35c;
    param_1[6] = uStack_358;
    param_1[7] = uStack_354;
    param_1[8] = uStack_350;
    param_1[9] = uStack_34c;
    param_1[10] = local_348;
    param_1[0xb] = uStack_344;
    param_1[0xc] = uStack_340;
    param_1[0xd] = uStack_33c;
    param_1[0xe] = uStack_338;
  }
  return;
LAB_009ee27c:
  local_1b8 = *puVar8;
  uStack_1b4 = puVar8[1];
  uStack_1b0 = puVar8[2];
  uStack_1ac = puVar8[3];
  uStack_1a8 = puVar8[4];
  local_188 = local_26c;
  puStack_184 = puStack_268;
  puStack_180 = puStack_264;
  local_17c = local_260;
  puStack_178 = puStack_25c;
  puStack_174 = puStack_258;
  puStack_170 = puStack_254;
  puVar25 = puStack_24c;
  cVar1 = (char)puVar17[0x4e];
  bVar41 = cVar1 == '\x03';
  if (bVar41) {
    cVar1 = (char)puVar17[0x3f];
  }
  if (bVar41 && cVar1 == '\x03') {
    FUN_01139b38(puVar17[0x40],puVar17[0x41]);
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
    local_1a0 = local_1b8;
    uStack_19c = uStack_1b4;
    uStack_198 = uStack_1b0;
    uStack_194 = uStack_1ac;
    uStack_190 = uStack_1a8;
    local_37c = puVar25;
  }
  FUN_019bb7e0(puVar17[0x1a],puVar17[0x1b]);
  if (puVar17[0x17] != 0x80000000) {
    FUN_019bb7e0(puVar17[0x17],puVar17[0x18]);
  }
  local_1e8 = local_1a0;
  uStack_1e4 = uStack_19c;
  uStack_1e0 = uStack_198;
  uStack_1dc = uStack_194;
  uStack_1d8 = uStack_190;
  local_208 = local_188;
  puStack_204 = puStack_184;
  puStack_200 = puStack_180;
  local_1fc = local_17c;
  puStack_1f8 = puStack_178;
  puStack_1f4 = puStack_174;
  puStack_1f0 = puStack_170;
  *(undefined1 *)(puVar17 + 0x4f) = 1;
  local_220 = local_1a0;
  uStack_21c = uStack_19c;
  uStack_218 = uStack_198;
  uStack_214 = uStack_194;
  uStack_210 = uStack_190;
  local_240 = local_188;
  puStack_23c = puStack_184;
  puStack_238 = puStack_180;
  local_234 = local_17c;
  puStack_230 = puStack_178;
  puStack_22c = puStack_174;
  puStack_228 = puStack_170;
  FUN_009cff38(iVar37);
  *puVar9 = local_220;
  puVar9[1] = uStack_21c;
  puVar9[2] = uStack_218;
  puVar9[3] = uStack_214;
  puVar9[4] = uStack_210;
  local_150 = puVar39;
  local_14c = local_240;
  local_148 = puStack_23c;
  local_144 = puStack_238;
  local_140 = local_234;
  puStack_13c = puStack_230;
  puStack_138 = puStack_22c;
  local_134 = puStack_228;
  local_130 = puVar12;
  local_12c = local_37c;
  local_128 = uVar27;
  uStack_124 = uVar13;
  if (uVar27 == *puVar21 && uVar13 == param_2[3]) goto LAB_009ee51c;
  local_168 = puVar30;
  FUN_00b1c9a8(param_2 + 7,&local_168);
  goto LAB_009edf24;
LAB_009ee51c:
  *puVar21 = uVar27 + 1;
  param_2[3] = uVar13 + (0xfffffffe < uVar27);
  local_2a0 = local_220;
  uStack_29c = uStack_21c;
  uStack_298 = uStack_218;
  uStack_294 = uStack_214;
  uStack_290 = uStack_210;
  local_2c0 = local_240;
  puStack_2bc = puStack_23c;
  puStack_2b8 = puStack_238;
  local_2b4 = local_234;
  puStack_2b0 = puStack_230;
  puStack_2ac = puStack_22c;
  puStack_2a8 = puStack_228;
  local_3e4 = local_37c;
  local_3e0 = puVar12;
LAB_009ee484:
  if (puVar30 != (undefined1 *)0x2) {
    if (puVar30 == (undefined1 *)0x3) goto LAB_009ee5c0;
    if (((uint)puVar30 & 1) != 0) {
      *param_1 = local_2a0;
      param_1[1] = uStack_29c;
      param_1[2] = uStack_298;
      param_1[3] = uStack_294;
      param_1[4] = uStack_290;
      param_1[6] = (uint)local_2c0;
      param_1[7] = (uint)puStack_2bc;
      param_1[8] = (uint)puStack_2b8;
      param_1[9] = (uint)local_2b4;
      param_1[10] = (uint)puStack_2b0;
      param_1[0xb] = (uint)puStack_2ac;
      param_1[0xc] = (uint)puStack_2a8;
      param_1[5] = (uint)puVar39;
      param_1[0xd] = (uint)local_3e0;
      param_1[0xe] = (uint)local_3e4;
      return;
    }
    uVar36 = puVar2[1];
    uVar32 = puVar2[2];
    uVar35 = puVar2[3];
    *puVar5 = *puVar2;
    puVar5[1] = uVar36;
    puVar5[2] = uVar32;
    puVar5[3] = uVar35;
    local_2f8 = local_2c0;
    puStack_2f4 = puStack_2bc;
    puStack_2f0 = puStack_2b8;
    local_2ec = local_2b4;
    puStack_2e8 = puStack_2b0;
    puStack_2e4 = puStack_2ac;
    puStack_2e0 = puStack_2a8;
    if (puVar39 != (undefined1 *)0x80000007) {
      if (puVar39 == &DAT_80000008) goto LAB_009ee5c0;
      local_168 = (undefined1 *)*puVar5;
      puStack_164 = (undefined1 *)puVar5[1];
      puStack_160 = (undefined1 *)puVar5[2];
      local_15c = (undefined1 *)puVar5[3];
      local_150 = puStack_2bc;
      local_14c = puStack_2b8;
      local_148 = local_2b4;
      local_144 = puStack_2b0;
      local_140 = puStack_2ac;
      puStack_13c = puStack_2a8;
      FUN_00b22508(puVar20);
      local_3b0 = puVar39;
      goto LAB_009ede90;
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

