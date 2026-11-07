// FUN_01004b24 @ 01004b24 size=1712 calls_out=17 calls_in=6
// strings: no path for ro | Failed to merge fallbacks. This is a bug in axum. Please file an issue | Failed to merge fallbacks. This is a bug in axum. Please file an issue | Failed to merge fallbacks. This is a bug in axum. Please file an issue | Cannot merge two `Router`s that both have a fallback | Cannot merge two `Router`s that both have a fallback

int FUN_01004b24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint ***pppuVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint **extraout_r3;
  int iVar14;
  undefined *puVar15;
  uint **ppuVar16;
  undefined4 uVar17;
  int iVar18;
  uint **ppuVar19;
  uint ***pppuVar20;
  uint **ppuVar21;
  uint uVar22;
  int local_320;
  byte local_2d8;
  uint **local_2d0;
  uint **ppuStack_2cc;
  undefined *puStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  int *piStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined1 auStack_290 [40];
  byte local_268;
  uint **local_260;
  uint **ppuStack_25c;
  undefined *puStack_258;
  int iStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  int *piStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint **local_230;
  uint **ppuStack_22c;
  undefined *puStack_228;
  char local_224;
  uint **local_220;
  uint **ppuStack_21c;
  undefined *puStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int *piStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  uint **ppuStack_1e8;
  uint **local_1e4;
  uint local_1e0;
  uint **local_1dc;
  undefined1 *local_1d8;
  int local_1d4;
  undefined1 auStack_1d0 [136];
  uint ***local_148;
  uint **local_144;
  undefined *local_140;
  uint **local_bc;
  uint ***local_b8;
  undefined *local_b4;
  uint **local_b0;
  uint ***local_ac;
  undefined *local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint **local_80;
  uint **ppuStack_7c;
  undefined *puStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  char local_44;
  
  pppuVar20 = &local_b0;
  FUN_00711858(pppuVar20);
  uVar17 = uStack_88;
  piVar6 = piStack_90;
  iVar14 = iStack_a4;
  pppuVar5 = local_ac;
  ppuVar19 = local_b0;
  local_2d0 = local_80;
  ppuStack_2cc = ppuStack_7c;
  puStack_2c8 = puStack_78;
  iStack_2c4 = iStack_74;
  uStack_2c0 = uStack_70;
  uStack_2bc = uStack_6c;
  local_2b8 = local_68;
  uStack_2b4 = uStack_64;
  piStack_2b0 = piStack_60;
  uStack_2ac = uStack_5c;
  uStack_2a8 = uStack_58;
  uStack_2a4 = uStack_54;
  local_2a0 = local_50;
  uStack_29c = uStack_4c;
  uStack_298 = uStack_48;
  FUN_00711858(auStack_290,param_1);
  local_2d8 = (byte)uVar17;
  local_1ec = (uint)local_268;
  local_268 = local_268 | local_2d8;
  if (pppuVar5 == (uint ***)0x0) {
    local_1f0 = 0;
    ppuStack_1e8 = extraout_r3;
  }
  else {
    local_1f0 = 4;
    ppuStack_1e8 = ppuVar19 + (int)pppuVar5 * -0x24 + -0x24;
    local_1ec = (int)pppuVar5 * 0x91 + 0x95;
  }
  local_1d8 = (undefined1 *)((int)ppuVar19 + (int)pppuVar5 + 1);
  ppuVar21 = ppuVar19 + 1;
  puVar15 = (undefined *)0x80808080;
  uVar7 = ~(uint)*ppuVar19 & 0x80808080;
  local_1d4 = iVar14;
  local_1e4 = ppuVar19;
  local_1e0 = uVar7;
  local_1dc = ppuVar21;
LAB_01004c44:
  if (iVar14 == 0) {
    iVar14 = 0;
  }
  else {
    uVar9 = uVar7;
    ppuVar16 = ppuVar21;
    if (uVar7 == 0) {
      do {
        ppuVar21 = ppuVar16 + 1;
        puVar8 = *ppuVar16;
        ppuVar19 = ppuVar19 + -0x90;
        ppuVar16 = ppuVar21;
      } while (((uint)puVar8 & 0x80808080) == 0x80808080);
      uVar9 = (uint)puVar8 & 0x80808080 ^ 0x80808080;
      local_1e4 = ppuVar19;
      local_1dc = ppuVar21;
    }
    uVar7 = uVar9 - 1 & uVar9;
    uVar9 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                          | uVar9 >> 0x18) >> 3;
    puVar8 = ppuVar19[uVar9 * -0x24 + -0x24];
    ppuVar16 = (uint **)ppuVar19[uVar9 * -0x24 + -0x23];
    local_1e0 = uVar7;
    FUN_01bed4e2(auStack_1d0,ppuVar19 + uVar9 * -0x24 + -0x22,0x88);
    iVar14 = iVar14 + -1;
    if (ppuVar16 != (uint **)&SUB_00000004) {
      local_148 = (uint ***)ppuVar16;
      FUN_01bed4e2(&local_144,auStack_1d0,0x88);
      if (piVar6[5] != 0) {
        uVar10 = FUN_01656218(piVar6[6],piVar6[7],piVar6[8],piVar6[9],puVar8);
        uVar9 = uVar10 >> 0x19;
        iVar13 = piVar6[2];
        local_320 = 0;
        while( true ) {
          uVar10 = piVar6[3] & uVar10;
          uVar22 = *(uint *)(iVar13 + uVar10);
          uVar11 = uVar22 ^ uVar9 * 0x1010101;
          uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
          while (uVar11 != 0) {
            uVar12 = uVar11 >> 8;
            uVar1 = uVar11 >> 0x10;
            uVar2 = uVar11 >> 0x18;
            uVar3 = uVar11 << 0x18;
            uVar11 = uVar11 - 1 & uVar11;
            uVar12 = uVar10 + ((uint)LZCOUNT(uVar3 | (uVar12 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                             uVar2) >> 3) & piVar6[3];
            pppuVar20 = (uint ***)(uVar12 * -3);
            if (puVar8 == *(uint **)(iVar13 + -0xc + uVar12 * -0xc)) {
              iVar13 = iVar13 + uVar12 * -0xc;
              if (ppuVar16 == (uint **)&DAT_00000003) {
                iVar18 = *(int *)(iVar13 + -8);
                uVar17 = *(undefined4 *)(iVar13 + -4);
                local_ac = (uint ***)FUN_00fad390(local_144,local_140);
                local_b0 = (uint **)&DAT_00000003;
                local_a8 = &DAT_01c1c4f8;
                FUN_00ff5734(&local_bc,auStack_290,iVar18 + 8,uVar17,&local_b0);
                ppuVar16 = local_bc;
                if (local_bc == (uint **)0x80000001) goto LAB_01004c44;
              }
              else {
                local_b0 = ppuVar16;
                FUN_01bed4e2(&local_ac,auStack_1d0,0x88);
                FUN_00ab22e4(&local_bc,auStack_290,*(int *)(iVar13 + -8) + 8,
                             *(undefined4 *)(iVar13 + -4),&local_b0);
                ppuVar16 = local_bc;
                if (local_bc == (uint **)0x80000001) {
                  goto LAB_01004c44;
                }
              }
              local_1d4 = iVar14;
              FUN_00943cd0(&local_1f0);
              DataMemoryBarrier(0xb);
              do {
                iVar14 = *piVar6;
                bVar4 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar4);
              *piVar6 = iVar14 + -1;
              puVar15 = local_b4;
              pppuVar20 = local_b8;
              if (iVar14 != 1) goto LAB_0100519c;
              goto LAB_01004f04;
            }
          }
          if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) break;
          local_320 = local_320 + 4;
          uVar10 = uVar10 + local_320;
        }
      }
      local_1d4 = iVar14;
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("no path for ro",0x41,&DAT_01c1d1dc);
    }
  }
  local_1d4 = iVar14;
  FUN_00943cd0(&local_1f0);
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar6;
    bVar4 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar4);
  *piVar6 = iVar14 + -1;
  if (iVar14 == 1) {
    ppuVar16 = (uint **)0x80000001;
LAB_01004f04:
    DataMemoryBarrier(0xb);
    FUN_00711b94(piVar6);
    if (ppuVar16 != (uint **)0x80000001) {
LAB_0100519c:
      local_144 = (uint **)&LAB_012b97d8;
      local_148 = &local_b0;
      local_b0 = ppuVar16;
      local_ac = pppuVar20;
      local_a8 = puVar15;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00590e5f,&local_148,param_3);
    }
  }
  if (local_224 == '\0') {
    if (local_44 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("Cannot merge two `Router`s that both have a fallback",0x69,param_3);
    }
    FUN_01a658c0(&local_b0);
    local_220 = local_260;
    ppuStack_21c = ppuStack_25c;
    puStack_218 = puStack_258;
    iStack_214 = iStack_254;
    uStack_210 = uStack_250;
    uStack_20c = uStack_24c;
    local_208 = local_248;
    uStack_204 = uStack_244;
    piStack_200 = piStack_240;
    uStack_1fc = uStack_23c;
    uStack_1f8 = uStack_238;
    uStack_1f4 = uStack_234;
    local_260 = local_b0;
    ppuStack_25c = (uint **)local_ac;
    puStack_258 = local_a8;
    iStack_254 = iStack_a4;
    uStack_250 = uStack_a0;
    uStack_24c = uStack_9c;
    local_248 = local_98;
    uStack_244 = uStack_94;
    piStack_240 = piStack_90;
    uStack_23c = uStack_8c;
    uStack_238 = uStack_88;
    uStack_234 = uStack_84;
    FUN_010053dc(&local_148,&local_2d0);
    if (local_148 != (uint ***)&DAT_80000001) {
      local_b0 = (uint **)local_148;
      local_ac = (uint ***)local_144;
      local_a8 = local_140;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("Failed to merge fallbacks. This is a bug in axum. Please file an issue",0x46,
                   &local_b0,&DAT_01c1d26c,param_3);
    }
    local_b0 = local_2d0;
    local_ac = (uint ***)ppuStack_2cc;
    local_a8 = puStack_2c8;
    iStack_a4 = iStack_2c4;
    uStack_a0 = uStack_2c0;
    uStack_9c = uStack_2bc;
    local_98 = local_2b8;
    uStack_94 = uStack_2b4;
    piStack_90 = piStack_2b0;
    uStack_8c = uStack_2ac;
    uStack_88 = uStack_2a8;
    uStack_84 = uStack_2a4;
    FUN_00a93878(&local_260);
    local_260 = local_b0;
    ppuStack_25c = (uint **)local_ac;
    puStack_258 = local_a8;
    iStack_254 = iStack_a4;
    uStack_250 = uStack_a0;
    uStack_24c = uStack_9c;
    local_248 = local_98;
    uStack_244 = uStack_94;
    piStack_240 = piStack_90;
    uStack_23c = uStack_8c;
    uStack_238 = uStack_88;
    uStack_234 = uStack_84;
  }
  else if (local_44 == '\0') {
    FUN_010053dc(&local_148,&local_260,&local_2d0);
    if (local_148 != (uint ***)&DAT_80000001) {
      local_b0 = (uint **)local_148;
      local_ac = (uint ***)local_144;
      local_a8 = local_140;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("Failed to merge fallbacks. This is a bug in axum. Please file an issue",0x46,
                   &local_b0,&DAT_01c1d26c,param_3);
    }
    local_224 = '\0';
  }
  else {
    FUN_010053dc(&local_148,&local_260,&local_2d0);
    if (local_148 != (uint ***)&DAT_80000001) {
      local_b0 = (uint **)local_148;
      local_ac = (uint ***)local_144;
      local_a8 = local_140;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("Failed to merge fallbacks. This is a bug in axum. Please file an issue",0x46,
                   &local_b0,&DAT_01c1d26c,param_3);
    }
  }
  local_b0 = local_230;
  local_ac = (uint ***)ppuStack_22c;
  local_a8 = puStack_228;
  FUN_00a94e68(&local_148,&local_b0,&local_2a0);
  if (local_148 == (uint ***)&DAT_00000003) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Cannot merge two `Router`s that both have a fallback",0x69,&DAT_01c1d25c);
  }
  local_230 = (uint **)local_148;
  ppuStack_22c = local_144;
  puStack_228 = local_140;
  FUN_01bed4e2(&local_a8,auStack_290,0x70);
  local_ac = (uint ***)0x1;
  local_b0 = (uint **)0x1;
  iVar14 = thunk_FUN_01be5118(0x78);
  if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar14,&local_b0,0x78);
  return iVar14;
}

