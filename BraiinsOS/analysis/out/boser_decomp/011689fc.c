// FUN_011689fc @ 011689fc size=3924 calls_out=27 calls_in=0
// strings: TryMaybeDone polled after value taken | You definitely encountered a bug! | assertion failed: prev | You definitely encountered a bug! | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011689fc(uint *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined4 uVar29;
  int *piVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  undefined1 *puVar34;
  int iVar35;
  uint uVar36;
  int *piVar37;
  int iVar38;
  bool bVar39;
  undefined8 uVar40;
  uint local_3dc;
  undefined1 *local_3bc;
  undefined1 *local_3b8;
  undefined1 *local_398;
  undefined1 *local_390;
  undefined1 *local_388;
  undefined1 *local_37c;
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
  undefined1 *local_24c;
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
  
  puVar26 = param_2 + 10;
  if (*puVar26 != 0x80000000) {
    puVar3 = (undefined4 *)((uint)&local_2a0 | 4);
    piVar15 = param_2 + 5;
    puVar4 = (undefined4 *)((uint)&local_1a0 | 4);
    piVar37 = param_2 + 4;
    puVar5 = (undefined4 *)((uint)&local_1b8 | 4);
    puVar9 = (uint *)((uint)&local_288 | 4);
    puVar10 = (uint *)((uint)&local_168 | 4);
    puVar11 = param_2 + 2;
    puVar6 = (undefined4 *)((uint)local_2d8 | 4);
    param_3 = (int *)*param_3;
LAB_01168f1c:
    if (param_2[9] == 0) {
LAB_01168fb0:
      do {
        iVar35 = *piVar15;
        local_398 = (undefined1 *)0x0;
        local_390 = (undefined1 *)0x0;
        DataMemoryBarrier(0xb);
        if (iVar35 != 0) {
          do {
            DataMemoryBarrier(0xb);
          } while (*(int *)(iVar35 + 0x148) == *(int *)(*piVar37 + 8) + 8);
          local_390 = *(undefined1 **)(iVar35 + 0x150);
        }
        FUN_01348e78(*piVar37 + 0xc,param_3);
        puVar2 = (undefined1 *)0x0;
LAB_01169004:
        while( true ) {
          uVar40 = FUN_00e7c5b8(*piVar37 + 8);
          puVar17 = (uint *)((ulonglong)uVar40 >> 0x20);
          if ((int)uVar40 != 0) {
            if ((int)uVar40 != 1) goto LAB_011694e4;
            puVar2 = (undefined1 *)0x3;
            if (param_2[5] == 0) {
              puVar2 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
            goto LAB_011694fc;
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
            FUN_0118016c();
          }
        }
        iVar35 = FUN_00e7b4e0(piVar37,puVar17);
        pcVar12 = (char *)(iVar35 + 0x164);
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar12;
          bVar39 = (bool)hasExclusiveAccess(pcVar12);
        } while (!bVar39);
        *pcVar12 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
        }
        *(undefined1 *)(iVar35 + 0x165) = 0;
        iVar28 = iVar35 + 8;
        local_1c0 = 0;
        local_1c8 = &local_1d0;
        local_1d0 = &DAT_01c17a98;
        uVar14 = puVar17[0x50];
        uVar25 = puVar17[0x51];
        local_1cc = iVar28;
        local_1c4 = local_1c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar17[0x4f]) {
        case '\0':
          puVar17[0xe] = 1;
          puVar24 = (uint *)0x0;
          if (puVar17[2] != 0) {
            puVar24 = puVar17 + 3;
          }
          *(char *)(puVar17 + 0x16) = (char)puVar17[10];
          puVar17[0x10] = puVar17[0xd];
          puVar17[0x11] = (uint)puVar24;
          puVar17[0x12] = puVar17[6];
          puVar17[0x13] = puVar17[7];
          puVar17[0x14] = puVar17[8];
          puVar17[0x15] = puVar17[9];
          puVar17[0xf] = 0;
          iVar38 = *(int *)puVar17[8];
          FUN_00ddc014();
          uVar18 = puVar17[0x18];
          uVar13 = puVar17[0x19];
          FUN_005d41ac(puVar17 + 0x1a);
          uVar19 = puVar17[0xb];
          iVar16 = *(int *)(uVar19 + 0x3c);
          uVar21 = *(uint *)(uVar19 + 0x40);
          if (*(int *)(uVar19 + 0x4c) == 0) {
            uVar36 = 0;
          }
          else {
            uVar36 = *(int *)(uVar19 + 0x4c) + 8;
            local_3dc = *(uint *)(uVar19 + 0x50);
          }
          puVar17[0x1d] = (uint)(puVar17 + 0xc);
          puVar17[0x4a] = uVar19 + 8;
          puVar17[0x4c] = local_3dc;
          puVar17[0x42] = iVar38 + 8;
          puVar17[0x44] = uVar18;
          puVar17[0x46] = puVar17[0x1b];
          puVar17[0x45] = uVar13;
          puVar17[0x48] = iVar16 + 8;
          puVar17[0x49] = uVar21;
          puVar17[0x1e] = (uint)(puVar17 + 0xe);
          *(undefined1 *)(puVar17 + 0x4e) = 0;
          puVar17[0x4b] = uVar36;
          puVar17[0x43] = (uint)(puVar17 + 0xf);
          puVar17[0x47] = puVar17[0x1c];
          *(undefined1 *)(puVar17 + 0x28) = 0;
          puVar17[0x1f] = uVar19;
          *(char *)(puVar17 + 0x4d) = (char)puVar17[0x16];
          puVar17[0x29] = (uint)(puVar17 + 0x1d);
          puVar17[0x2a] = (uint)(puVar17 + 0x29);
          puVar17[0x2b] = (uint)&DAT_01c21a1c;
          break;
        case '\x01':
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case '\x02':
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_00fe4a48(&local_288,puVar17 + 0x2a,&local_1c8);
        puVar20 = local_270;
        puVar34 = local_288;
        if (local_288 == (undefined1 *)0x2) goto code_r0x01169258;
        local_1b8 = *puVar9;
        uStack_1b4 = puVar9[1];
        uStack_1b0 = puVar9[2];
        uStack_1ac = puVar9[3];
        uStack_1a8 = puVar9[4];
        local_188 = local_26c;
        puStack_184 = puStack_268;
        puStack_180 = puStack_264;
        local_17c = local_260;
        puStack_178 = puStack_25c;
        puStack_174 = puStack_258;
        puStack_170 = puStack_254;
        puVar27 = local_250;
        puVar22 = local_24c;
        cVar1 = (char)puVar17[0x4e];
        bVar39 = cVar1 == '\x03';
        if (bVar39) {
          cVar1 = (char)puVar17[0x3f];
        }
        if (bVar39 && cVar1 == '\x03') {
          FUN_00fe4378(puVar17[0x40],puVar17[0x41]);
        }
        if (((uint)puVar34 & 1) == 0) {
          if (puVar20 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
          }
          uVar32 = puVar5[1];
          uVar29 = puVar5[2];
          uVar31 = puVar5[3];
          *puVar4 = *puVar5;
          puVar4[1] = uVar32;
          puVar4[2] = uVar29;
          puVar4[3] = uVar31;
          puVar2 = (undefined1 *)0x0;
        }
        else {
          local_1a0 = local_1b8;
          uStack_19c = uStack_1b4;
          uStack_198 = uStack_1b0;
          uStack_194 = uStack_1ac;
          uStack_190 = uStack_1a8;
          puVar2 = (undefined1 *)0x1;
          local_398 = puVar22;
          local_390 = puVar27;
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
        FUN_00e7b884(iVar35);
        *puVar10 = local_220;
        puVar10[1] = uStack_21c;
        puVar10[2] = uStack_218;
        puVar10[3] = uStack_214;
        puVar10[4] = uStack_210;
        local_150 = puVar20;
        local_14c = local_240;
        local_148 = puStack_23c;
        local_144 = puStack_238;
        local_140 = local_234;
        puStack_13c = puStack_230;
        puStack_138 = puStack_22c;
        local_134 = puStack_228;
        local_130 = local_390;
        local_12c = local_398;
        local_128 = uVar14;
        uStack_124 = uVar25;
        if (uVar14 == *puVar11 && uVar25 == param_2[3]) goto LAB_01169594;
        local_168 = puVar2;
        FUN_00b1c9a8(param_2 + 7,&local_168);
      } while( true );
    }
    uVar14 = *(uint *)(param_2[8] + 0x40);
    iVar35 = *(int *)(param_2[8] + 0x44);
    if (uVar14 != *puVar11 || iVar35 != param_2[3]) goto LAB_01168fb0;
    *puVar11 = uVar14 + 1;
    param_2[3] = iVar35 + (uint)(0xfffffffe < uVar14);
    FUN_00b1c730(&local_288,param_2 + 7);
    local_2a0 = *puVar9;
    uStack_29c = puVar9[1];
    uStack_298 = puVar9[2];
    uStack_294 = puVar9[3];
    uStack_290 = puVar9[4];
    local_2c0 = local_26c;
    puStack_2bc = puStack_268;
    puStack_2b8 = puStack_264;
    local_2b4 = local_260;
    puStack_2b0 = puStack_25c;
    puStack_2ac = puStack_258;
    puStack_2a8 = puStack_254;
    local_3b8 = local_250;
    local_3bc = local_24c;
    puVar2 = local_288;
    puVar20 = local_270;
    goto LAB_01169500;
  }
  puVar2 = (undefined1 *)param_2[1];
  piVar37 = (int *)*param_2;
  local_370 = (undefined1 *)0x3;
  if (puVar2 == (undefined1 *)0x0) {
    puVar34 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_284 = (undefined1 *)0x8;
    local_288 = (undefined1 *)0x0;
LAB_011696e0:
    param_1[1] = (uint)local_288;
    param_1[2] = (uint)local_284;
    param_1[3] = (uint)puVar34;
    *param_1 = 2;
    local_280 = puVar34;
    FUN_0114aba0(piVar37,puVar2);
  }
  else {
    iVar35 = 0;
    puVar3 = (undefined4 *)((uint)&local_168 | 4);
    puVar4 = (undefined4 *)((uint)&local_2c0 | 4);
    puVar5 = (undefined4 *)((uint)&local_2f8 | 4);
    puVar6 = (undefined4 *)((uint)&local_208 | 4);
    puVar7 = (undefined4 *)((uint)&local_240 | 4);
    do {
      piVar15 = (int *)((int)piVar37 + iVar35);
      if (*piVar15 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)piVar37 + iVar35 + 0x138)) {
        case 0:
          piVar30 = *(int **)((int)piVar37 + iVar35 + 0x1c);
          *(undefined1 *)((int)piVar37 + iVar35 + 0x54) =
               *(undefined1 *)((int)piVar37 + iVar35 + 0x24);
          *(undefined4 *)((int)piVar37 + iVar35 + 0x44) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x14);
          *(undefined4 *)((int)piVar37 + iVar35 + 0x48) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x18);
          *(int **)((int)piVar37 + iVar35 + 0x4c) = piVar30;
          *(undefined4 *)((int)piVar37 + iVar35 + 0x50) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x20);
          iVar28 = 0;
          if (*(int *)((int)piVar37 + iVar35 + 4) != 0) {
            iVar28 = (int)piVar37 + iVar35 + 8;
          }
          puVar8 = (undefined4 *)((int)piVar37 + iVar35 + 0x38);
          *puVar8 = 0;
          *(undefined4 *)((int)piVar37 + iVar35 + 0x3c) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x30);
          *(int *)((int)piVar37 + iVar35 + 0x40) = iVar28;
          puVar33 = (undefined4 *)((int)piVar37 + iVar35 + 0x34);
          *puVar33 = 1;
          iVar38 = *piVar30;
          FUN_00ddc014((int)piVar37 + iVar35 + 0x58);
          uVar32 = *(undefined4 *)((int)piVar37 + iVar35 + 0x5c);
          uVar29 = *(undefined4 *)((int)piVar37 + iVar35 + 0x60);
          FUN_005d41ac((int)piVar37 + iVar35 + 100);
          iVar16 = *(int *)((int)piVar37 + iVar35 + 0x28);
          iVar28 = *(int *)(iVar16 + 0x3c);
          local_388 = *(undefined1 **)(iVar16 + 0x40);
          if (*(int *)(iVar16 + 0x4c) == 0) {
            iVar23 = 0;
            puVar34 = local_388;
          }
          else {
            iVar23 = *(int *)(iVar16 + 0x4c) + 8;
            puVar34 = *(undefined1 **)(iVar16 + 0x50);
          }
          piVar30 = (int *)((int)piVar37 + iVar35 + 0x70);
          *piVar30 = (int)piVar37 + iVar35 + 0x2c;
          *(int *)((int)piVar37 + iVar35 + 0x124) = iVar16 + 8;
          *(int *)((int)piVar37 + iVar35 + 0x104) = iVar38 + 8;
          *(undefined4 *)((int)piVar37 + iVar35 + 0x114) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x68);
          *(undefined4 *)((int)piVar37 + iVar35 + 0x118) =
               *(undefined4 *)((int)piVar37 + iVar35 + 0x6c);
          *(int *)((int)piVar37 + iVar35 + 0x11c) = iVar28 + 8;
          *(undefined1 **)((int)piVar37 + iVar35 + 0x120) = local_388;
          *(undefined4 **)((int)piVar37 + iVar35 + 0x74) = puVar33;
          *(undefined1 *)((int)piVar37 + iVar35 + 0x134) = 0;
          *(undefined1 *)((int)piVar37 + iVar35 + 0x130) =
               *(undefined1 *)((int)piVar37 + iVar35 + 0x54);
          *(int *)((int)piVar37 + iVar35 + 0x128) = iVar23;
          *(undefined1 **)((int)piVar37 + iVar35 + 300) = puVar34;
          *(undefined4 **)((int)piVar37 + iVar35 + 0x108) = puVar8;
          *(undefined4 *)((int)piVar37 + iVar35 + 0x10c) = uVar32;
          *(undefined4 *)((int)piVar37 + iVar35 + 0x110) = uVar29;
          *(undefined1 *)((int)piVar37 + iVar35 + 0x9c) = 0;
          *(int *)((int)piVar37 + iVar35 + 0x78) = iVar16;
          *(int **)((int)piVar37 + iVar35 + 0xa0) = piVar30;
          *(int *)((int)piVar37 + iVar35 + 0xa4) = (int)piVar37 + iVar35 + 0xa0;
          *(undefined **)((int)piVar37 + iVar35 + 0xa8) = &DAT_01c21a1c;
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21a2c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21a2c);
        }
        FUN_009e8f3c(&local_168,(int)piVar37 + iVar35 + 0xa4,param_3);
        puVar22 = local_12c;
        puVar20 = local_150;
        puVar34 = local_168;
        if (local_168 == (undefined1 *)0x2) {
          *(undefined1 *)((int)piVar37 + iVar35 + 0x138) = 3;
LAB_01168c70:
          if (local_370 < (undefined1 *)0x2) {
            FUN_006c9ae0(&local_370);
          }
          local_370 = (undefined1 *)0x2;
        }
        else {
          local_240 = (undefined1 *)*puVar3;
          puStack_23c = (undefined1 *)puVar3[1];
          puStack_238 = (undefined1 *)puVar3[2];
          local_234 = (undefined1 *)puVar3[3];
          puStack_230 = (undefined1 *)puVar3[4];
          local_288 = local_14c;
          local_284 = local_148;
          local_280 = local_144;
          local_27c = local_140;
          puStack_278 = puStack_13c;
          puStack_274 = puStack_138;
          local_270 = local_134;
          puVar27 = local_130;
          cVar1 = *(char *)((int)piVar37 + iVar35 + 0x134);
          bVar39 = cVar1 == '\x03';
          if (bVar39) {
            cVar1 = *(char *)((int)piVar37 + iVar35 + 0xf8);
          }
          if (bVar39 && cVar1 == '\x03') {
            FUN_01139b38(*(undefined4 *)((int)piVar37 + iVar35 + 0xfc),
                         *(undefined4 *)((int)piVar37 + iVar35 + 0x100));
          }
          if (((uint)puVar34 & 1) == 0) {
            if (puVar20 == (undefined1 *)0x80000007) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("You definitely encountered a bug!",0x21,&DAT_01c21b2c);
            }
            uVar32 = puVar7[1];
            uVar29 = puVar7[2];
            uVar31 = puVar7[3];
            *puVar6 = *puVar7;
            puVar6[1] = uVar32;
            puVar6[2] = uVar29;
            puVar6[3] = uVar31;
          }
          else {
            local_208 = local_240;
            puStack_204 = puStack_23c;
            puStack_200 = puStack_238;
            local_1fc = local_234;
            puStack_1f8 = puStack_230;
            local_388 = puVar27;
          }
          FUN_019bb7e0(*(undefined4 *)((int)piVar37 + iVar35 + 100),
                       *(undefined4 *)((int)piVar37 + iVar35 + 0x68));
          iVar28 = *(int *)((int)piVar37 + iVar35 + 0x58);
          if (iVar28 != -0x80000000) {
            FUN_019bb7e0(iVar28,*(undefined4 *)((int)piVar37 + iVar35 + 0x5c));
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
          *(undefined1 *)((int)piVar37 + iVar35 + 0x138) = 1;
          if (((uint)puVar34 & 1) == 0) {
            uVar32 = puVar5[1];
            uVar29 = puVar5[2];
            uVar31 = puVar5[3];
            *puVar4 = *puVar5;
            puVar4[1] = uVar32;
            puVar4[2] = uVar29;
            puVar4[3] = uVar31;
            FUN_01192ec4(piVar15);
            puVar8 = (undefined4 *)((int)piVar37 + iVar35);
            *puVar8 = 1;
            puVar8[1] = local_2c0;
            puVar8[2] = puStack_2bc;
            puVar8[3] = puStack_2b8;
            puVar8[4] = local_2b4;
            puVar8[5] = puStack_2b0;
            puVar8[6] = puVar20;
            puVar8[7] = local_188;
            puVar8[8] = puStack_184;
            puVar8[9] = puStack_180;
            puVar8[10] = local_17c;
            puVar8[0xb] = puStack_178;
            puVar8[0xc] = puStack_174;
            puVar8[0xd] = puStack_170;
          }
          else {
            local_168 = local_208;
            puStack_164 = puStack_204;
            puStack_160 = puStack_200;
            local_15c = local_1fc;
            local_158 = puStack_1f8;
            local_154 = puVar20;
            local_150 = local_288;
            local_14c = local_284;
            local_148 = local_280;
            local_144 = local_27c;
            local_140 = puStack_278;
            puStack_13c = puStack_274;
            puStack_138 = local_270;
            local_134 = local_388;
            local_130 = puVar22;
            FUN_01192ec4(piVar15);
            puVar34 = local_168;
            *piVar15 = 2;
            local_330 = *puVar3;
            uStack_32c = puVar3[1];
            uStack_328 = puVar3[2];
            uStack_324 = puVar3[3];
            local_320 = puVar3[4];
            uStack_31c = puVar3[5];
            uStack_318 = puVar3[6];
            uStack_314 = puVar3[7];
            uStack_310 = puVar3[8];
            local_30c = puVar3[9];
            uStack_308 = puVar3[10];
            uStack_304 = puVar3[0xb];
            uStack_300 = puVar3[0xc];
            uStack_2fc = puVar3[0xd];
            if (local_168 != (undefined1 *)0x2) {
              if (local_168 == (undefined1 *)0x3) goto LAB_01168c70;
              if (local_370 < (undefined1 *)0x2) {
                FUN_006c9ae0(&local_370);
              }
              local_370 = puVar34;
              puVar3 = (undefined4 *)((uint)&local_370 | 4);
              *puVar3 = local_330;
              puVar3[1] = uStack_32c;
              puVar3[2] = uStack_328;
              puVar3[3] = uStack_324;
              puVar3[4] = local_320;
              puVar3[5] = uStack_31c;
              puVar3[6] = uStack_318;
              puVar3[7] = uStack_314;
              puVar3[8] = uStack_310;
              puVar3[9] = local_30c;
              puVar3[10] = uStack_308;
              puVar3[0xb] = uStack_304;
              puVar3[0xc] = uStack_300;
              puVar3[0xd] = uStack_2fc;
              break;
            }
          }
        }
      }
      else if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar35 = iVar35 + 0x140;
    } while ((int)puVar2 * 0x140 != iVar35);
    if ((undefined1 *)0x1 < local_370) {
      if (local_370 == (undefined1 *)0x2) {
        *param_1 = 3;
        return;
      }
      if (local_370 == (undefined1 *)0x3) {
        uVar14 = 8;
        uVar32 = 0;
        *param_2 = 8;
        param_2[1] = 0;
        iVar35 = (int)puVar2 * 0x30;
        if ((undefined1 *)0x2aaaaaa < puVar2) {
LAB_0116963c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar32,iVar35);
        }
        puVar20 = (undefined1 *)0x0;
        if (iVar35 != 0) {
          uVar32 = 8;
          uVar14 = FUN_01298504(iVar35,8);
          puVar20 = puVar2;
          if (uVar14 == 0) goto LAB_0116963c;
        }
        local_280 = (undefined1 *)0x0;
        puVar34 = (undefined1 *)0x0;
        local_288 = puVar20;
        local_284 = (undefined1 *)uVar14;
        if (puVar2 != (undefined1 *)0x0) {
          puVar34 = (undefined1 *)0x0;
          piVar15 = piVar37;
          puVar3 = (undefined4 *)(uVar14 + 0x14);
          do {
            if (*piVar15 != 1) {
LAB_0116998c:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            FUN_01bed4e2(&local_168,piVar15,0x140);
            *piVar15 = 2;
            if (local_168 != (undefined1 *)0x1) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            iVar35 = piVar15[6];
            if (iVar35 == -0x7ffffff9) goto LAB_0116998c;
            local_168 = (undefined1 *)piVar15[7];
            puStack_164 = (undefined1 *)piVar15[8];
            puStack_160 = (undefined1 *)piVar15[9];
            local_15c = (undefined1 *)piVar15[10];
            local_158 = (undefined1 *)piVar15[0xb];
            local_154 = (undefined1 *)piVar15[0xc];
            local_150 = (undefined1 *)piVar15[0xd];
            FUN_01bed864(puVar3 + -5,piVar15 + 2,0x10);
            puVar3[-1] = iVar35;
            piVar15 = piVar15 + 0x50;
            *puVar3 = local_168;
            puVar3[1] = puStack_164;
            puVar3[2] = puStack_160;
            puVar34 = puVar34 + 1;
            puVar3[3] = local_15c;
            puVar3[4] = local_158;
            puVar3[5] = local_154;
            puVar3[6] = local_150;
            puVar3 = puVar3 + 0xc;
          } while (puVar2 != puVar34);
          puVar34 = puVar2;
        }
        goto LAB_011696e0;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_0114aba0(piVar37,puVar2);
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
code_r0x01169258:
  *(undefined1 *)(puVar17 + 0x4f) = 3;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar35 + 0x165) != '\0') {
    local_398 = local_398 + 1;
  }
  puVar2 = puVar2 + 1;
  do {
    iVar16 = *piVar15;
    bVar39 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar39);
  *piVar15 = iVar28;
  DataMemoryBarrier(0xb);
  if (iVar16 == 0) {
    *(undefined4 *)(iVar35 + 0x158) = 1;
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar35 + 0x150) = 0;
  }
  else {
    do {
      DataMemoryBarrier(0xb);
    } while (*(int *)(iVar16 + 0x148) == *(int *)(*piVar37 + 8) + 8);
    *(int *)(iVar35 + 0x158) = *(int *)(iVar16 + 0x150) + 1;
    DataMemoryBarrier(0xb);
    *(int *)(iVar35 + 0x150) = iVar16;
    *(int *)(iVar16 + 0x14c) = iVar28;
  }
  if ((&DAT_00000001 < local_398) || (puVar2 == local_390)) {
LAB_011694e4:
    (**(code **)(*param_3 + 8))(param_3[1]);
    puVar2 = (undefined1 *)0x3;
LAB_011694fc:
    puVar20 = local_37c;
    goto LAB_01169500;
  }
  goto LAB_01169004;
LAB_01169594:
  *puVar11 = uVar14 + 1;
  param_2[3] = uVar25 + (0xfffffffe < uVar14);
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
  local_3bc = local_398;
  local_3b8 = local_390;
LAB_01169500:
  if (puVar2 != (undefined1 *)0x2) {
    if (puVar2 == (undefined1 *)0x3) {
LAB_011696b8:
      *param_1 = 3;
      return;
    }
    if (((uint)puVar2 & 1) != 0) {
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
      param_1[5] = (uint)puVar20;
      param_1[0xd] = (uint)local_3b8;
      param_1[0xe] = (uint)local_3bc;
      return;
    }
    uVar32 = puVar3[1];
    uVar29 = puVar3[2];
    uVar31 = puVar3[3];
    *puVar6 = *puVar3;
    puVar6[1] = uVar32;
    puVar6[2] = uVar29;
    puVar6[3] = uVar31;
    local_2f8 = local_2c0;
    puStack_2f4 = puStack_2bc;
    puStack_2f0 = puStack_2b8;
    local_2ec = local_2b4;
    puStack_2e8 = puStack_2b0;
    puStack_2e4 = puStack_2ac;
    puStack_2e0 = puStack_2a8;
    if (puVar20 != (undefined1 *)0x80000007) {
      if (puVar20 == &DAT_80000008) goto LAB_011696b8;
      local_168 = (undefined1 *)*puVar6;
      puStack_164 = (undefined1 *)puVar6[1];
      puStack_160 = (undefined1 *)puVar6[2];
      local_15c = (undefined1 *)puVar6[3];
      local_150 = puStack_2bc;
      local_14c = puStack_2b8;
      local_148 = local_2b4;
      local_144 = puStack_2b0;
      local_140 = puStack_2ac;
      puStack_13c = puStack_2a8;
      FUN_00b22508(puVar26,&local_168);
      local_37c = puVar20;
      goto LAB_01168f1c;
    }
  }
  uVar14 = param_2[0xb];
  uVar25 = param_2[0xc];
  param_1[1] = *puVar26;
  param_1[2] = uVar14;
  param_1[3] = uVar25;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

