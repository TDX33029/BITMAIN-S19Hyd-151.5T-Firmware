// FUN_009ecbe0 @ 009ecbe0 size=2916 calls_out=16 calls_in=115
// strings: assertion failed: prev | TryMaybeDone polled after value taken | internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009ecbe0(uint *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 **ppuVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  int *piVar24;
  uint uVar25;
  undefined4 uVar26;
  int *piVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined1 *local_25c;
  uint local_254;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint uStack_240;
  uint local_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  undefined1 *local_1d8;
  undefined1 *puStack_1d4;
  undefined1 *puStack_1d0;
  undefined1 *local_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c4;
  undefined1 *puStack_1c0;
  undefined1 local_1b8 [32];
  undefined1 *local_198;
  undefined1 *puStack_194;
  undefined1 *puStack_190;
  undefined1 *local_18c;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *local_178;
  uint uStack_174;
  uint uStack_170;
  uint local_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined1 *local_158;
  uint uStack_154;
  uint uStack_150;
  uint local_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined1 *local_118;
  uint local_114;
  undefined1 *local_110;
  undefined1 *local_f8;
  uint local_d8;
  int local_d4;
  undefined1 *local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined1 *local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  undefined1 *local_70;
  uint local_6c;
  uint uStack_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined *local_3c;
  int local_38;
  undefined **local_34;
  undefined **local_30;
  undefined4 local_2c;
  
  puVar19 = (uint *)(param_2 + 10);
  if (*puVar19 != 0x80000000) {
    puVar28 = (uint *)((uint)&local_178 | 4);
    piVar27 = param_2 + 4;
    puVar3 = (uint *)((uint)&local_118 | 4);
    puVar14 = (uint *)((uint)&local_88 | 4);
    puVar4 = (uint *)((uint)&local_d0 | 4);
    puVar5 = (uint *)(param_2 + 2);
    piVar24 = param_2 + 5;
    puVar6 = (uint *)((uint)local_1b8 | 4);
LAB_009ece10:
    uVar25 = param_2[9];
    if (uVar25 == 0) {
LAB_009ecf6c:
      iVar29 = *piVar24;
      uVar25 = 0;
      DataMemoryBarrier(0xb);
      local_254 = 0;
      if (iVar29 != 0) {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(iVar29 + 0x10) == *(int *)(*piVar27 + 8) + 8);
        local_254 = *(int *)(iVar29 + 0x18);
      }
      iVar29 = *piVar27;
      piVar11 = (int *)*param_3;
      FUN_01348e78(iVar29 + 0xc);
      iVar20 = 0;
      do {
        uVar32 = FUN_009d04c8(iVar29 + 8);
        piVar12 = (int *)((ulonglong)uVar32 >> 0x20);
        if ((int)uVar32 != 0) {
          if ((int)uVar32 == 1) {
            puVar16 = (undefined1 *)0x3;
            if (*piVar24 == 0) {
              puVar16 = (undefined1 *)0x2;
              *(undefined1 *)(param_2 + 6) = 1;
            }
          }
          else {
LAB_009ed25c:
            (**(code **)(*piVar11 + 8))(piVar11[1]);
            puVar16 = (undefined1 *)0x3;
          }
          goto LAB_009ed314;
        }
        if (*piVar12 == 0) {
          piVar12 = piVar12 + -2;
          DataMemoryBarrier(0xb);
          do {
            iVar29 = *piVar12;
            bVar31 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar31);
          *piVar12 = iVar29 + -1;
          if (iVar29 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a9050c();
          }
        }
        else {
          iVar29 = FUN_00e7bb10(piVar27,piVar12);
          pcVar8 = (char *)(iVar29 + 0x2c);
          DataMemoryBarrier(0xb);
          do {
            cVar1 = *pcVar8;
            bVar31 = (bool)hasExclusiveAccess(pcVar8);
          } while (!bVar31);
          *pcVar8 = '\0';
          DataMemoryBarrier(0xb);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: prev",0x16,&DAT_01c23978);
          }
          *(undefined1 *)(iVar29 + 0x2d) = 0;
          iVar30 = iVar29 + 8;
          local_2c = 0;
          local_3c = &DAT_01c0ccc4;
          local_34 = &local_3c;
          uVar7 = piVar12[2];
          iVar2 = piVar12[3];
          local_38 = iVar30;
          local_30 = local_34;
          (**(code **)(piVar12[1] + 0xc))(&local_88,*piVar12,&local_34);
          puVar16 = local_88;
          if (local_88 != (undefined1 *)0x2) goto LAB_009ed13c;
          iVar20 = iVar20 + 1;
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar29 + 0x2d) != '\0') {
            uVar25 = uVar25 + 1;
          }
          do {
            iVar2 = *piVar24;
            bVar31 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar31);
          *piVar24 = iVar30;
          DataMemoryBarrier(0xb);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar29 + 0x20) = 1;
            DataMemoryBarrier(0xb);
            *(undefined4 *)(iVar29 + 0x18) = 0;
          }
          else {
            do {
              DataMemoryBarrier(0xb);
            } while (*(int *)(iVar2 + 0x10) == *(int *)(*piVar27 + 8) + 8);
            *(int *)(iVar29 + 0x20) = *(int *)(iVar2 + 0x18) + 1;
            DataMemoryBarrier(0xb);
            *(int *)(iVar29 + 0x18) = iVar2;
            *(int *)(iVar2 + 0x14) = iVar30;
          }
          if ((1 < uVar25) || (iVar20 == local_254)) goto LAB_009ed25c;
        }
        iVar29 = *piVar27;
      } while( true );
    }
    iVar20 = param_2[8];
    uVar7 = *(uint *)(iVar20 + 0x40);
    iVar29 = *(int *)(iVar20 + 0x44);
    if (uVar7 != *puVar5 || iVar29 != param_2[3]) goto LAB_009ecf6c;
    *puVar5 = uVar7 + 1;
    param_2[3] = iVar29 + (uint)(0xfffffffe < uVar7);
    uVar7 = uVar25 - 1;
    puVar10 = (uint *)(iVar20 + uVar7 * 0x48);
    puVar16 = (undefined1 *)*puVar10;
    param_2[9] = uVar7;
    FUN_01bed4e2(puVar4,puVar10 + 1,0x44);
    local_d0 = puVar16;
    if (uVar7 != 0) {
      iVar29 = 0;
      do {
        puVar16 = (&local_d0)[iVar29];
        (&local_d0)[iVar29] = *(undefined1 **)(iVar20 + iVar29 * 4);
        *(undefined1 **)(iVar20 + iVar29 * 4) = puVar16;
        iVar29 = iVar29 + 1;
      } while (iVar29 != 0x12);
      FUN_01bed4e2(&local_88,iVar20,0x48);
      uVar15 = uVar25 - 3;
      uVar21 = 0;
      uVar17 = 1;
      if (uVar7 < 2) {
        uVar15 = 0;
      }
      iVar29 = 0;
      if (3 < uVar25) {
        uVar13 = 0;
        do {
          iVar29 = iVar20 + iVar29 * 0x48;
          iVar30 = iVar20 + uVar17 * 0x48;
          iVar2 = *(int *)(iVar29 + 0xd4);
          iVar22 = *(int *)(iVar30 + 0x44);
          bVar31 = *(uint *)(iVar30 + 0x40) < *(uint *)(iVar29 + 0xd0);
          uVar21 = uVar17;
          if ((int)(iVar22 - (iVar2 + (uint)bVar31)) < 0 ==
              (SBORROW4(iVar22,iVar2) != SBORROW4(iVar22 - iVar2,(uint)bVar31))) {
            uVar21 = uVar17 + 1;
          }
          FUN_01bed4e2(iVar20 + uVar13 * 0x48,iVar20 + uVar21 * 0x48,0x48);
          uVar17 = uVar21 << 1 | 1;
          iVar29 = uVar21 << 1;
          uVar13 = uVar21;
        } while (uVar21 * 2 < uVar15);
      }
      if (iVar29 == uVar25 - 3) {
        FUN_01bed4e2(iVar20 + uVar21 * 0x48,iVar20 + uVar17 * 0x48,0x48);
        uVar21 = uVar17;
      }
      FUN_01bed4e2(iVar20 + uVar21 * 0x48,&local_88,0x48);
      FUN_00b1c8e0(iVar20,uVar7,uVar21);
    }
    local_178 = (undefined1 *)*puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    local_88 = local_178;
    local_84 = uStack_174;
    local_80 = uStack_170;
    local_16c = puVar4[3];
    uStack_168 = puVar4[4];
    uStack_164 = puVar4[5];
    uStack_160 = puVar4[6];
    local_7c = local_16c;
    local_78 = uStack_168;
    uStack_74 = uStack_164;
    local_70 = (undefined1 *)uStack_160;
    local_25c = local_b0;
    local_158 = local_ac;
    uStack_154 = local_a8;
    uStack_150 = uStack_a4;
    local_14c = local_a0;
    uStack_148 = uStack_9c;
    local_144 = uStack_98;
    uStack_140 = uStack_94;
    ppuVar9 = &local_158;
    puVar16 = local_d0;
    goto LAB_009ed304;
  }
  puVar16 = (undefined1 *)param_2[1];
  iVar29 = *param_2;
  local_250 = 3;
  if (puVar16 == (undefined1 *)0x0) {
    puVar23 = (undefined1 *)0x0;
    *param_2 = 8;
    param_2[1] = 0;
    local_114 = 8;
    local_118 = (undefined1 *)0x0;
LAB_009ed510:
    param_1[1] = (uint)local_118;
    param_1[2] = local_114;
    param_1[3] = (uint)puVar23;
    *param_1 = 2;
    local_110 = puVar23;
    FUN_009e8e9c(iVar29,puVar16);
  }
  else {
    uVar25 = 3;
    iVar20 = (int)puVar16 * 0x38;
    iVar30 = 0;
    local_254 = 3;
    do {
      puVar19 = (uint *)(iVar29 + iVar30);
      iVar2 = 1;
      if (0x80000006 < puVar19[6]) {
        iVar2 = puVar19[6] + 0x7ffffff9;
      }
      if (iVar2 == 0) {
        (**(code **)(((undefined4 *)(iVar29 + iVar30))[1] + 0xc))
                  (&local_88,*(undefined4 *)(iVar29 + iVar30),param_3);
        if (local_88 == (undefined1 *)0x2) {
LAB_009ecc9c:
          uVar25 = 2;
          local_254 = 2;
        }
        else if (((uint)local_88 & 1) == 0) {
          FUN_009e8f10(puVar19);
          *puVar19 = local_80;
          puVar19[1] = local_7c;
          puVar19[2] = local_78;
          puVar19[3] = uStack_74;
          puVar19[4] = (uint)local_70;
          puVar19[5] = local_6c;
          puVar19[6] = uStack_68;
          puVar19[7] = local_64;
          puVar19[8] = local_60;
          puVar19[9] = local_5c;
          puVar19[10] = uStack_58;
          puVar19[0xb] = uStack_54;
          puVar19[0xc] = uStack_50;
          puVar19[0xd] = uStack_4c;
        }
        else {
          FUN_009e8f10(puVar19);
          puVar19[6] = (uint)&DAT_80000009;
          if (local_84 == 3) goto LAB_009ecc9c;
          if (local_84 != 2) {
            local_250 = local_84;
            puVar19 = (uint *)((uint)&local_250 | 4);
            *puVar19 = local_80;
            puVar19[1] = local_7c;
            puVar19[2] = local_78;
            puVar19[3] = uStack_74;
            puVar19[4] = (uint)local_70;
            puVar19[5] = local_6c;
            puVar19[6] = uStack_68;
            puVar19[7] = local_64;
            puVar19[8] = local_60;
            puVar19[9] = local_5c;
            puVar19[10] = uStack_58;
            puVar19[0xb] = uStack_54;
            puVar19[0xc] = uStack_50;
            puVar19[0xd] = uStack_4c;
            local_254 = local_84;
            goto LAB_009ecd38;
          }
        }
      }
      else if (iVar2 != 1) {
        local_250 = uVar25;
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("TryMaybeDone polled after value taken",0x25,&DAT_01c20c60);
      }
      iVar30 = iVar30 + 0x38;
    } while (iVar20 != iVar30);
    local_250 = uVar25;
LAB_009ecd38:
    if (1 < local_254) {
      if (local_254 == 2) {
LAB_009ed470:
        *param_1 = 3;
        return;
      }
      if (local_254 == 3) {
        uVar26 = 0;
        local_114 = 8;
        *param_2 = 8;
        param_2[1] = 0;
        if ((undefined1 *)0x2492492 < puVar16) {
LAB_009ecd74:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar26,iVar20);
        }
        puVar23 = (undefined1 *)0x0;
        local_118 = (undefined1 *)0x0;
        if (iVar20 != 0) {
          uVar26 = 8;
          local_114 = FUN_01298504(iVar20,8);
          local_118 = puVar16;
          if (local_114 == 0) goto LAB_009ecd74;
        }
        local_110 = (undefined1 *)0x0;
        if (puVar16 != (undefined1 *)0x0) {
          puVar28 = (uint *)(iVar29 + 0x18);
          puVar23 = (undefined1 *)0x0;
          puVar19 = (uint *)(local_114 + 0x1c);
          do {
            if (0x80000006 < *puVar28) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c1d078);
            }
            local_88 = (undefined1 *)puVar28[-6];
            local_84 = puVar28[-5];
            local_80 = puVar28[-4];
            local_7c = puVar28[-3];
            local_78 = puVar28[-2];
            uStack_74 = puVar28[-1];
            puVar18 = (undefined1 *)*puVar28;
            local_6c = puVar28[1];
            uStack_68 = puVar28[2];
            local_64 = puVar28[3];
            local_60 = puVar28[4];
            local_5c = puVar28[5];
            uStack_58 = puVar28[6];
            uStack_54 = puVar28[7];
            *puVar28 = (uint)&DAT_80000009;
            local_70 = puVar18;
            if ((undefined1 *)0x80000006 < puVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1d0a8);
            }
            local_d0 = (undefined1 *)puVar28[1];
            uStack_cc = puVar28[2];
            uStack_c8 = puVar28[3];
            local_c4 = puVar28[4];
            uStack_c0 = puVar28[5];
            local_bc = puVar28[6];
            uStack_b8 = puVar28[7];
            FUN_01bed864(puVar19 + -7,puVar28 + -6,0x18);
            puVar19[-1] = (uint)puVar18;
            puVar28 = puVar28 + 0xe;
            puVar23 = puVar23 + 1;
            *puVar19 = (uint)local_d0;
            puVar19[1] = uStack_cc;
            puVar19[2] = uStack_c8;
            puVar19[3] = local_c4;
            puVar19[4] = uStack_c0;
            puVar19[5] = local_bc;
            puVar19[6] = uStack_b8;
            puVar19 = puVar19 + 0xe;
          } while (puVar16 != puVar23);
          puVar23 = puVar16;
        }
        goto LAB_009ed510;
      }
    }
    *param_2 = 8;
    param_2[1] = 0;
    FUN_009e8e9c(iVar29,puVar16);
    *param_1 = local_250;
    param_1[1] = uStack_24c;
    param_1[2] = uStack_248;
    param_1[3] = uStack_244;
    param_1[4] = uStack_240;
    param_1[5] = local_23c;
    param_1[6] = uStack_238;
    param_1[7] = uStack_234;
    param_1[8] = uStack_230;
    param_1[9] = uStack_22c;
    param_1[10] = local_228;
    param_1[0xb] = uStack_224;
    param_1[0xc] = uStack_220;
    param_1[0xd] = uStack_21c;
    param_1[0xe] = uStack_218;
  }
  return;
LAB_009ed13c:
  local_158 = (undefined1 *)*puVar14;
  uStack_154 = puVar14[1];
  uStack_150 = puVar14[2];
  local_14c = puVar14[3];
  uStack_148 = puVar14[4];
  local_144 = puVar14[5];
  uStack_140 = puVar14[6];
  uStack_13c = puVar14[7];
  puStack_138 = (undefined1 *)puVar14[8];
  puStack_134 = (undefined1 *)puVar14[9];
  local_130 = puVar14[10];
  uStack_12c = puVar14[0xb];
  uStack_128 = puVar14[0xc];
  uStack_124 = puVar14[0xd];
  uStack_120 = puVar14[0xe];
  local_d0 = local_158;
  uStack_cc = uStack_154;
  uStack_c8 = uStack_150;
  local_c4 = local_14c;
  uStack_c0 = uStack_148;
  local_bc = local_144;
  uStack_b8 = uStack_140;
  uStack_b4 = uStack_13c;
  local_b0 = puStack_138;
  local_ac = puStack_134;
  local_a8 = local_130;
  uStack_a4 = uStack_12c;
  local_a0 = uStack_128;
  uStack_9c = uStack_124;
  uStack_98 = uStack_120;
  FUN_01209598(iVar29);
  local_118 = puVar16;
  *puVar3 = (uint)local_158;
  puVar3[1] = uStack_154;
  puVar3[2] = uStack_150;
  puVar3[3] = local_14c;
  puVar3[4] = uStack_148;
  puVar3[5] = local_144;
  puVar3[6] = uStack_140;
  puVar3[7] = uStack_13c;
  puVar3[8] = (uint)puStack_138;
  puVar3[9] = (uint)puStack_134;
  puVar3[10] = local_130;
  puVar3[0xb] = uStack_12c;
  puVar3[0xc] = uStack_128;
  puVar3[0xd] = uStack_124;
  puVar3[0xe] = uStack_120;
  local_d8 = uVar7;
  local_d4 = iVar2;
  if (uVar7 == *puVar5 && iVar2 == param_2[3]) goto LAB_009ed408;
  iVar29 = param_2[9];
  if (iVar29 == param_2[7]) {
    FUN_0124a134(param_2 + 7);
  }
  iVar20 = param_2[8];
  FUN_01bed4e2(iVar20 + iVar29 * 0x48,&local_118,0x48);
  param_2[9] = iVar29 + 1;
  FUN_00b1c8e0(iVar20,iVar29 + 1,iVar29);
  goto LAB_009ecf6c;
LAB_009ed408:
  *puVar5 = uVar7 + 1;
  param_2[3] = iVar2 + (uint)(0xfffffffe < uVar7);
  local_178 = local_158;
  uStack_174 = uStack_154;
  uStack_170 = uStack_150;
  local_16c = local_14c;
  uStack_168 = uStack_148;
  uStack_164 = local_144;
  uStack_160 = uStack_140;
  local_25c = local_f8;
  ppuVar9 = &puStack_138;
LAB_009ed304:
  local_198 = *ppuVar9;
  puStack_194 = ppuVar9[1];
  puStack_190 = ppuVar9[2];
  local_18c = ppuVar9[3];
  puStack_188 = ppuVar9[4];
  puStack_184 = ppuVar9[5];
  puStack_180 = ppuVar9[6];
LAB_009ed314:
  if (puVar16 != (undefined1 *)0x2) {
    if (puVar16 == (undefined1 *)0x3) goto LAB_009ed470;
    if (((uint)puVar16 & 1) != 0) {
      *param_1 = (uint)local_178;
      param_1[1] = uStack_174;
      param_1[2] = uStack_170;
      param_1[3] = local_16c;
      param_1[4] = uStack_168;
      param_1[5] = uStack_164;
      param_1[6] = uStack_160;
      param_1[8] = (uint)local_198;
      param_1[9] = (uint)puStack_194;
      param_1[10] = (uint)puStack_190;
      param_1[0xb] = (uint)local_18c;
      param_1[0xc] = (uint)puStack_188;
      param_1[0xd] = (uint)puStack_184;
      param_1[0xe] = (uint)puStack_180;
      param_1[7] = (uint)local_25c;
      return;
    }
    uVar25 = puVar28[1];
    uVar7 = puVar28[2];
    uVar21 = puVar28[3];
    uVar15 = puVar28[4];
    uVar17 = puVar28[5];
    *puVar6 = *puVar28;
    puVar6[1] = uVar25;
    puVar6[2] = uVar7;
    puVar6[3] = uVar21;
    puVar6[4] = uVar15;
    puVar6[5] = uVar17;
    local_1d8 = local_198;
    puStack_1d4 = puStack_194;
    puStack_1d0 = puStack_190;
    local_1cc = local_18c;
    puStack_1c8 = puStack_188;
    puStack_1c4 = puStack_184;
    puStack_1c0 = puStack_180;
    if (local_25c != (undefined1 *)0x80000007) {
      if (local_25c == &DAT_80000008) goto LAB_009ed470;
      local_88 = (undefined1 *)*puVar6;
      local_84 = puVar6[1];
      local_80 = puVar6[2];
      local_7c = puVar6[3];
      local_78 = puVar6[4];
      uStack_74 = puVar6[5];
      local_70 = local_25c;
      iVar29 = param_2[0xc];
      if ((uint)(param_2[10] - iVar29) < (uint)(local_25c != (undefined1 *)0x80000007)) {
        FUN_0132b898(puVar19,iVar29,(uint)(local_25c != (undefined1 *)0x80000007),8,0x38);
        iVar29 = param_2[0xc];
      }
      puVar10 = (uint *)(param_2[0xb] + iVar29 * 0x38);
      uVar25 = puVar6[1];
      uVar7 = puVar6[2];
      uVar21 = puVar6[3];
      uVar15 = puVar6[4];
      uVar17 = puVar6[5];
      *puVar10 = *puVar6;
      puVar10[1] = uVar25;
      puVar10[2] = uVar7;
      puVar10[3] = uVar21;
      puVar10[4] = uVar15;
      puVar10[5] = uVar17;
      puVar10[6] = (uint)local_25c;
      puVar10[7] = (uint)local_1d8;
      puVar10[8] = (uint)puStack_1d4;
      puVar10[9] = (uint)puStack_1d0;
      puVar10[10] = (uint)local_1cc;
      puVar10[0xb] = (uint)puStack_1c8;
      puVar10[0xc] = (uint)puStack_1c4;
      puVar10[0xd] = (uint)puStack_1c0;
      param_2[0xc] = iVar29 + 1;
      goto LAB_009ece10;
    }
  }
  uVar25 = param_2[0xb];
  uVar7 = param_2[0xc];
  param_1[1] = *puVar19;
  param_1[2] = uVar25;
  param_1[3] = uVar7;
  param_2[10] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 8;
  *param_1 = 2;
  return;
}

