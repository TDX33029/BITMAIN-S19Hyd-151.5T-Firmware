// FUN_00ff8120 @ 00ff8120 size=2584 calls_out=20 calls_in=2
// strings: no path for ro | no path for ro

int FUN_00ff8120(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint extraout_r1;
  uint uVar13;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int iVar14;
  uint **extraout_r3;
  int iVar15;
  uint ***pppuVar16;
  uint **ppuVar17;
  uint **ppuVar18;
  uint **ppuVar19;
  uint *puVar20;
  uint *puVar21;
  undefined1 *unaff_r11;
  int extraout_r12;
  int extraout_r12_00;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int local_430;
  int local_42c;
  int *local_418;
  int *local_410;
  uint local_408;
  uint local_404;
  uint *local_3d0;
  int local_3cc;
  undefined4 uStack_3c8;
  int local_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  int *local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined1 auStack_3a0 [40];
  undefined1 local_378;
  undefined1 auStack_370 [40];
  undefined1 local_348;
  int local_32c;
  uint local_328;
  int *local_324;
  undefined4 local_2a0;
  int local_29c;
  uint **local_298;
  uint **local_294;
  uint local_290;
  uint **local_28c;
  int local_288;
  int local_284;
  uint **local_280;
  uint local_27c;
  int *local_278;
  int iStack_274;
  int *piStack_260;
  uint *local_250;
  int iStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  int *piStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [12];
  char local_214;
  undefined1 auStack_1f0 [140];
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  int local_148;
  uint local_144;
  int *local_140;
  uint **local_bc;
  uint local_b8;
  int *local_b4;
  uint ***local_b0;
  undefined1 *local_ac;
  int *local_a8;
  
  FUN_00711858(&local_280,param_4);
  uVar12 = local_27c;
  ppuVar19 = local_280;
  local_3d0 = local_250;
  local_3cc = iStack_24c;
  uStack_3c8 = uStack_248;
  local_3c4 = iStack_244;
  uStack_3c0 = uStack_240;
  uStack_3bc = uStack_23c;
  local_3b8 = local_238;
  uStack_3b4 = uStack_234;
  local_3b0 = piStack_230;
  uStack_3ac = uStack_22c;
  uStack_3a8 = uStack_228;
  uStack_3a4 = uStack_224;
  FUN_00feb76c(auStack_220);
  FUN_00711858(auStack_3a0,param_1);
  uVar22 = FUN_0070d368(local_378,param_2,param_3);
  uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
  local_418 = piStack_260 + 6;
  if (uVar12 == 0) {
    local_2a0 = 0;
    local_298 = extraout_r3;
    local_29c = extraout_r12;
  }
  else {
    local_2a0 = 4;
    local_298 = ppuVar19 + uVar12 * -0x24 + -0x24;
    local_29c = uVar12 * 0x91 + 0x95;
  }
  local_288 = (int)ppuVar19 + uVar12 + 1;
  ppuVar18 = ppuVar19 + 1;
  local_284 = iStack_274;
  uVar12 = ~(uint)*ppuVar19 & 0x80808080;
  local_404 = (uint)&local_280 | 4;
  local_294 = ppuVar19;
  iVar15 = iStack_274;
  local_408 = uVar12;
  local_290 = uVar12;
  local_28c = ppuVar18;
LAB_00ff824c:
  if (iVar15 == 0) {
    iVar15 = 0;
  }
  else {
    ppuVar17 = ppuVar18;
    if (local_408 == 0) {
      do {
        ppuVar18 = ppuVar17 + 1;
        puVar7 = *ppuVar17;
        ppuVar19 = ppuVar19 + -0x90;
        ppuVar17 = ppuVar18;
      } while (((uint)puVar7 & 0x80808080) == 0x80808080);
      local_408 = (uint)puVar7 & 0x80808080 ^ 0x80808080;
    }
    FUN_01bed4e2(&local_280,
                 ppuVar19 +
                 ((uint)LZCOUNT(local_408 << 0x18 | (local_408 >> 8 & 0xff) << 0x10 |
                                (local_408 >> 0x10 & 0xff) << 8 | local_408 >> 0x18) >> 3) * -0x24 +
                 -0x24,0x90);
    ppuVar17 = local_280;
    iVar15 = iVar15 + -1;
    local_408 = local_408 - 1 & local_408;
    uVar12 = extraout_r1;
    if (local_27c != 4) {
      FUN_01bed4e2(auStack_1f0,local_404,0x8c);
      if (piStack_260[5] == 0) {
LAB_00ff851c:
        local_294 = ppuVar19;
        local_290 = local_408;
        local_28c = ppuVar18;
        local_284 = iVar15;
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("no path for ro",0x41,&DAT_01c1d1cc);
      }
      uVar8 = FUN_01656218(*local_418,piStack_260[7],piStack_260[8],piStack_260[9],ppuVar17);
      uVar12 = uVar8 >> 0x19;
      iVar14 = piStack_260[2];
      local_42c = 0;
      do {
        uVar8 = piStack_260[3] & uVar8;
        uVar9 = *(uint *)(iVar14 + uVar8);
        uVar10 = uVar9 ^ uVar12 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar13 = uVar10 >> 8;
          uVar1 = uVar10 >> 0x10;
          uVar2 = uVar10 >> 0x18;
          uVar3 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar13 = uVar8 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                          uVar2) >> 3) & piStack_260[3];
          if (ppuVar17 == *(uint ***)(iVar14 + -0xc + uVar13 * -0xc)) {
            iVar14 = iVar14 + uVar13 * -0xc;
            FUN_0070d4b4(&local_164,(int)uVar22,uVar11,*(int *)(iVar14 + -8) + 8,
                         *(undefined4 *)(iVar14 + -4));
            uVar23 = FUN_016bc0ec((int)uVar22,uVar11);
            uVar24 = FUN_016bc0ec(param_2,param_3);
            unaff_r11 = (undefined1 *)0x0;
            local_158 = uVar23;
            local_150 = uVar24;
            FUN_00ff8f5c(&local_32c,local_404,&local_158);
            uVar6 = local_160;
            if (local_32c != 3) {
              FUN_00ab22e4(&local_b0,auStack_3a0,local_160,local_15c,&local_32c);
              uVar12 = extraout_r1_01;
              if (local_b0 == (uint ***)0x80000001) goto LAB_00ff84bc;
              local_418 = local_a8;
              pppuVar16 = local_b0;
              unaff_r11 = local_ac;
LAB_00ff8564:
              local_294 = ppuVar19;
              local_290 = local_408;
              local_28c = ppuVar18;
              local_284 = iVar15;
              if (local_164 != -0x80000000) {
                FUN_019bb7e0(local_164,uVar6);
              }
              FUN_00943cd0(&local_2a0);
              DataMemoryBarrier(0xb);
              do {
                iVar15 = *piStack_260;
                bVar4 = (bool)hasExclusiveAccess(piStack_260);
              } while (!bVar4);
              *piStack_260 = iVar15 + -1;
              if (iVar15 != 1) goto LAB_00ff8adc;
              goto LAB_00ff85b8;
            }
            local_ac = (undefined1 *)local_328;
            local_a8 = local_324;
            local_b0 = (uint ***)0x3;
            FUN_00ff5734(&local_bc,auStack_3a0,local_160,local_15c,&local_b0);
            uVar12 = extraout_r1_00;
            if (local_bc != (uint **)0x80000001) {
              local_418 = local_b4;
              pppuVar16 = (uint ***)local_bc;
              unaff_r11 = (undefined1 *)local_b8;
              goto LAB_00ff8564;
            }
LAB_00ff84bc:
            if (local_164 != -0x80000000) {
              FUN_019bb7e0();
              uVar12 = extraout_r1_02;
            }
            goto LAB_00ff824c;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_00ff851c;
        local_42c = local_42c + 4;
        uVar8 = uVar8 + local_42c;
      } while( true );
    }
  }
  local_294 = ppuVar19;
  local_290 = local_408;
  local_28c = ppuVar18;
  local_284 = iVar15;
  FUN_00943cd0(&local_2a0,uVar12);
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piStack_260;
    bVar4 = (bool)hasExclusiveAccess(piStack_260);
  } while (!bVar4);
  *piStack_260 = iVar15 + -1;
  if (iVar15 == 1) {
    pppuVar16 = (uint ***)0x80000001;
LAB_00ff85b8:
    DataMemoryBarrier(0xb);
    FUN_00711b94(piStack_260);
    if (pppuVar16 != (uint ***)0x80000001) {
LAB_00ff8adc:
      local_b0 = &local_280;
      local_278 = local_418;
      local_ac = &LAB_012b97d8;
      local_280 = (uint **)pppuVar16;
      local_27c = (uint)unaff_r11;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00590e5f,&local_b0,param_5);
    }
  }
  piVar5 = local_3b0;
  iVar14 = local_3c4;
  iVar15 = local_3cc;
  puVar7 = local_3d0;
  if (local_214 == '\0') {
    uVar22 = FUN_0070d368(local_348,param_2,param_3);
    uVar11 = (undefined4)((ulonglong)uVar22 >> 0x20);
    if (iVar15 == 0) {
      local_2a0 = 0;
      local_298 = (uint **)(piVar5 + 6);
      local_29c = extraout_r12_00;
    }
    else {
      local_29c = iVar15 * 0x91 + 0x95;
      local_2a0 = 4;
      local_298 = (uint **)(puVar7 + iVar15 * -0x24 + -0x24);
    }
    local_408 = ~*puVar7 & 0x80808080;
    local_288 = (int)puVar7 + iVar15 + 1;
    local_284 = iVar14;
    puVar21 = puVar7 + 1;
    local_294 = (uint **)puVar7;
    iVar15 = iVar14;
    local_290 = local_408;
    local_28c = (uint **)puVar21;
LAB_00ff86e0:
    if (iVar15 == 0) {
      iVar15 = 0;
    }
    else {
      puVar20 = puVar21;
      if (local_408 == 0) {
        do {
          puVar21 = puVar20 + 1;
          uVar12 = *puVar20;
          puVar7 = puVar7 + -0x90;
          puVar20 = puVar21;
        } while ((uVar12 & 0x80808080) == 0x80808080);
        local_408 = uVar12 & 0x80808080 ^ 0x80808080;
      }
      FUN_01bed4e2(&local_280,
                   puVar7 + ((uint)LZCOUNT(local_408 << 0x18 | (local_408 >> 8 & 0xff) << 0x10 |
                                           (local_408 >> 0x10 & 0xff) << 8 | local_408 >> 0x18) >> 3
                            ) * -0x24 + -0x24,0x90);
      ppuVar19 = local_280;
      iVar15 = iVar15 + -1;
      local_408 = local_408 - 1 & local_408;
      iVar14 = extraout_r1_03;
      if (local_27c != 4) {
        FUN_01bed4e2(auStack_1f0,local_404,0x8c);
        if (piVar5[5] == 0) {
LAB_00ff89b0:
          local_294 = (uint **)puVar7;
          local_290 = local_408;
          local_28c = (uint **)puVar21;
          local_284 = iVar15;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("no path for ro",0x41,&DAT_01c1d1cc);
        }
        uVar8 = FUN_01656218(piVar5[6],piVar5[7],piVar5[8],piVar5[9],ppuVar19);
        uVar12 = uVar8 >> 0x19;
        iVar14 = piVar5[2];
        local_430 = 0;
        do {
          uVar8 = piVar5[3] & uVar8;
          uVar9 = *(uint *)(iVar14 + uVar8);
          uVar10 = uVar9 ^ uVar12 * 0x1010101;
          uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
          while (uVar10 != 0) {
            uVar13 = uVar10 >> 8;
            uVar1 = uVar10 >> 0x10;
            uVar2 = uVar10 >> 0x18;
            uVar3 = uVar10 << 0x18;
            uVar10 = uVar10 - 1 & uVar10;
            uVar13 = uVar8 + ((uint)LZCOUNT(uVar3 | (uVar13 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                            uVar2) >> 3) & piVar5[3];
            if (ppuVar19 == *(uint ***)(iVar14 + -0xc + uVar13 * -0xc)) {
              iVar14 = iVar14 + uVar13 * -0xc;
              FUN_0070d4b4(&local_164,(int)uVar22,uVar11,*(int *)(iVar14 + -8) + 8,
                           *(undefined4 *)(iVar14 + -4));
              uVar23 = FUN_016bc0ec((int)uVar22,uVar11);
              uVar24 = FUN_016bc0ec(param_2,param_3);
              local_158 = uVar23;
              local_150 = uVar24;
              FUN_00ff8f5c(&local_148,local_404,&local_158);
              uVar6 = local_160;
              if (local_148 != 3) {
                FUN_00ff9750(&local_b0,auStack_370,local_160,local_15c,&local_148);
                iVar14 = extraout_r1_05;
                if (local_b0 == (uint ***)0x80000001) goto LAB_00ff8948;
                local_404 = (uint)local_ac;
                local_410 = local_a8;
                pppuVar16 = local_b0;
LAB_00ff8a00:
                local_294 = (uint **)puVar7;
                local_290 = local_408;
                local_28c = (uint **)puVar21;
                local_284 = iVar15;
                if (local_164 != -0x80000000) {
                  FUN_019bb7e0(local_164,uVar6);
                }
                FUN_00943cd0(&local_2a0);
                DataMemoryBarrier(0xb);
                do {
                  iVar15 = *piVar5;
                  bVar4 = (bool)hasExclusiveAccess(piVar5);
                } while (!bVar4);
                *piVar5 = iVar15 + -1;
                if (iVar15 != 1) goto LAB_00ff8b14;
                goto LAB_00ff8a54;
              }
              local_ac = (undefined1 *)local_144;
              local_a8 = local_140;
              local_b0 = (uint ***)0x3;
              FUN_01a65c90(&local_bc,auStack_370,local_160,local_15c,&local_b0);
              iVar14 = extraout_r1_04;
              if (local_bc != (uint **)0x80000001) {
                local_404 = local_b8;
                local_410 = local_b4;
                pppuVar16 = (uint ***)local_bc;
                goto LAB_00ff8a00;
              }
LAB_00ff8948:
              if (local_164 != -0x80000000) {
                FUN_019bb7e0();
                iVar14 = extraout_r1_06;
              }
              goto LAB_00ff86e0;
            }
          }
          if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_00ff89b0;
          local_430 = local_430 + 4;
          uVar8 = uVar8 + local_430;
        } while( true );
      }
    }
    local_294 = (uint **)puVar7;
    local_290 = local_408;
    local_28c = (uint **)puVar21;
    local_284 = iVar15;
    FUN_00943cd0(&local_2a0,iVar14);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar5;
      bVar4 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar4);
    *piVar5 = iVar15 + -1;
    if (iVar15 == 1) {
      pppuVar16 = (uint ***)0x80000001;
      local_410 = param_3;
LAB_00ff8a54:
      DataMemoryBarrier(0xb);
      FUN_00711b94(piVar5);
      if (pppuVar16 != (uint ***)0x80000001) {
LAB_00ff8b14:
        local_b0 = &local_280;
        local_27c = local_404;
        local_278 = local_410;
        local_ac = &LAB_012b97d8;
        local_280 = (uint **)pppuVar16;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_00590e5f,&local_b0,param_5);
      }
    }
    local_27c = 1;
    local_280 = (uint **)0x1;
    FUN_01bed4e2(&local_278,auStack_3a0,0x70);
    iVar15 = thunk_FUN_01be5118(0x78);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x78);
    }
    FUN_01bed4e2(iVar15,&local_280,0x78);
  }
  else {
    local_27c = 1;
    local_280 = (uint **)0x1;
    FUN_01bed4e2(&local_278,auStack_3a0,0x70);
    iVar15 = thunk_FUN_01be5118(0x78);
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x78);
    }
    FUN_01bed4e2(iVar15,&local_280,0x78);
    FUN_00a93878(&local_3d0);
  }
  return iVar15;
}

