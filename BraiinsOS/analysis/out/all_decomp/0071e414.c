// FUN_0071e414 @ 0071e414 size=3796 calls_out=14 calls_in=1
// strings: assertion failed: min <= maxmnamernameserialretryexpire

void FUN_0071e414(undefined4 *param_1,int param_2,short *param_3,int *param_4)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  uint *puVar9;
  short *psVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined2 uVar16;
  undefined1 *puVar17;
  undefined2 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  short *psVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  uint uVar26;
  bool bVar27;
  undefined8 uVar28;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_298;
  int local_290;
  uint local_28c;
  uint local_288;
  undefined1 *local_284;
  short *local_280;
  short *local_27c;
  int local_278;
  short *local_274;
  uint local_230;
  uint local_22c;
  undefined1 *local_228;
  undefined4 uStack_224;
  undefined8 local_220;
  short local_218;
  undefined2 local_216;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  uint uStack_1f8;
  short local_1f4;
  undefined2 local_1f2;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8;
  undefined2 local_1d4;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined4 local_148;
  uint local_144;
  undefined1 *local_140;
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e8;
  undefined2 local_e6;
  uint local_e0;
  uint local_dc;
  undefined1 *local_d8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  short local_52;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  uint uStack_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2a;
  
  iVar19 = *param_4;
  if (iVar19 == -0x80000000) {
    psVar22 = (short *)param_4[1];
    FUN_015f3b0c(&local_148,1);
    local_280 = psVar22;
    if ((*psVar22 == 0x15) && (*(int *)(psVar22 + 2) != 0)) {
      iVar20 = *(int *)(param_2 + 0x1c);
      iVar19 = 0;
      local_284 = (undefined1 *)0x0;
      if (*(int *)(iVar20 + 0x14) != 0) {
        sVar2 = param_3[0x24];
        sVar3 = param_3[0x25];
        uVar26 = 0x71e4c4;
        uVar5 = FUN_0108fee4(*(undefined4 *)(iVar20 + 0x18),*(undefined4 *)(iVar20 + 0x1c),
                             *(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24),sVar2,
                             sVar3);
        uVar15 = uVar5 >> 0x19;
        iVar19 = *(int *)(iVar20 + 8);
        local_2a8 = 0;
        while( true ) {
          uVar5 = *(uint *)(iVar20 + 0xc) & uVar5;
          uVar6 = *(uint *)(iVar19 + uVar5);
          uVar7 = uVar6 ^ uVar15 * 0x1010101;
          uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
          while (uVar23 = uVar7, uVar23 != 0) {
            uVar26 = uVar5 + ((uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                            (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3) &
                     *(uint *)(iVar20 + 0xc);
            psVar8 = (short *)(iVar19 + -0x48 + uVar26 * -0x48);
            uVar7 = uVar23 - 1 & uVar23;
            if ((sVar2 == *psVar8) && ((sVar2 != 0x24 || (sVar3 == psVar8[1])))) goto LAB_0071eb50;
          }
          if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
          local_2a8 = local_2a8 + 4;
          uVar5 = uVar5 + local_2a8;
        }
LAB_0071eb50:
        iVar19 = iVar19 + uVar26 * -0x48 + -0x40;
        if (uVar23 == 0) {
          iVar19 = 0;
        }
      }
      if (iVar19 == 0) {
        iVar19 = iVar20 + 0x28;
      }
      if (*(undefined1 **)(iVar19 + 0x18) == &DAT_3b9aca00) {
        uVar5 = 0;
        uVar15 = 0;
      }
      else {
        uVar5 = *(uint *)(iVar19 + 0x10);
        uVar15 = *(uint *)(iVar19 + 0x14);
        local_284 = *(undefined1 **)(iVar19 + 0x18);
      }
      puVar24 = *(undefined1 **)(iVar19 + 0x38);
      if (puVar24 == &DAT_3b9aca00) {
        uVar7 = 0;
        uVar26 = 0x15180;
        puVar24 = (undefined1 *)0x0;
      }
      else {
        uVar26 = *(uint *)(iVar19 + 0x30);
        uVar7 = *(uint *)(iVar19 + 0x34);
      }
      bVar4 = uVar15 < uVar7 || uVar7 - uVar15 < (uint)(uVar5 <= uVar26);
      if (uVar5 == uVar26 && uVar15 == uVar7) {
        bVar4 = local_284 <= puVar24;
      }
      if (!bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_01883e60);
      }
      uVar6 = *(uint *)(psVar22 + 4);
      bVar4 = (uint)(uVar5 <= uVar6) <= -uVar15;
      if (uVar5 == uVar6 && uVar15 == 0) {
        bVar4 = local_284 != (undefined1 *)0x0;
      }
      uVar21 = uVar7;
      uVar23 = uVar26;
      if ((uint)(uVar26 <= uVar6) <= -uVar7) {
        uVar21 = 0;
        uVar23 = uVar6;
      }
      if (bVar4) {
        uVar23 = uVar5;
        uVar21 = uVar15;
      }
      uVar5 = local_148 + uVar23;
      uVar15 = local_144 + uVar21 + (uint)CARRY4(local_148,uVar23);
      if ((int)uVar21 < 0 != (int)((local_144 ^ uVar15) & ~(local_144 ^ uVar21)) < 0) {
LAB_0071ece8:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar17 = (undefined1 *)0x0;
      if (uVar7 == 0 && (uVar6 <= uVar26) <= uVar7) {
        puVar17 = puVar24;
      }
      if (bVar4) {
        puVar17 = local_284;
      }
      puVar17 = puVar17 + (int)local_140;
      if (puVar17 < &DAT_3b9aca00) {
        local_284 = (undefined1 *)uVar5;
      }
      else {
        uVar26 = uVar15 + (0xfffffffe < uVar5);
        if ((int)((uVar15 ^ uVar26) & ~uVar15) < 0) goto LAB_0071ece8;
        puVar17 = puVar17 + -1000000000;
        uVar15 = uVar26;
        local_284 = (undefined1 *)(uVar5 + 1);
      }
      iVar19 = thunk_FUN_016d4a50(0x44);
      if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      FUN_010538f4(&local_148,psVar22);
      FUN_016dd1aa(iVar19,&local_148,0x44);
      FUN_016dd1aa(&local_230,param_3,0x4c);
      local_e0 = (uint)local_284;
      local_140 = &DAT_3b9aca00;
      local_148 = iVar19;
      local_dc = uVar15;
      local_d8 = puVar17;
      FUN_0108c998(param_2,&local_230,&local_148);
      if (*psVar22 == 0x15) {
        if (uVar21 != 0) {
          uVar23 = 0x5180;
        }
        psVar22[2] = 1;
        psVar22[3] = 0;
        if (uVar21 != 0) {
          uVar23 = uVar23 & 0xffff | 0x10000;
        }
        *(uint *)(psVar22 + 4) = uVar23;
        param_1[2] = &DAT_3b9aca00;
        *param_1 = psVar22;
        return;
      }
    }
    else {
      iVar19 = 0;
      if (*param_3 != 0) {
        iVar19 = *(int *)(param_3 + 2);
      }
      if (*param_3 != 0 && iVar19 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 4));
      }
      iVar19 = 0;
      if (param_3[0x12] != 0) {
        iVar19 = *(int *)(param_3 + 0x14);
      }
      if (param_3[0x12] != 0 && iVar19 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_3 + 0x16));
        param_1[2] = &DAT_3b9aca00;
        *param_1 = psVar22;
        return;
      }
    }
    param_1[2] = &DAT_3b9aca00;
    *param_1 = psVar22;
    return;
  }
  FUN_015f3b0c(&local_148,1);
  iVar20 = *(int *)(param_2 + 0x1c);
  sVar2 = param_3[0x25];
  local_298 = param_4[2];
  sVar3 = param_3[0x24];
  uVar13 = *(undefined4 *)(param_3 + 0x24);
  puVar9 = (uint *)0x0;
  if (*(int *)(iVar20 + 0x14) != 0) {
    uVar5 = FUN_0108fee4(*(undefined4 *)(iVar20 + 0x18),*(undefined4 *)(iVar20 + 0x1c),
                         *(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24),sVar3,sVar2);
    iVar14 = *(int *)(iVar20 + 8);
    uVar15 = uVar5 >> 0x19;
    local_284 = (undefined1 *)0x0;
    while( true ) {
      uVar5 = *(uint *)(iVar20 + 0xc) & uVar5;
      uVar7 = *(uint *)(iVar14 + uVar5);
      uVar26 = uVar7 ^ uVar15 * 0x1010101;
      uVar26 = ~uVar26 & 0x80808080 & uVar26 + 0xfefefeff;
      while (uVar6 = uVar26, uVar6 != 0) {
        uVar26 = uVar6 - 1 & uVar6;
        uVar23 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                 *(uint *)(iVar20 + 0xc);
        psVar22 = (short *)(iVar14 + -0x48 + uVar23 * -0x48);
        if ((sVar3 == *psVar22) && ((sVar3 != 0x24 || (sVar2 == psVar22[1])))) goto LAB_0071e770;
      }
      uVar23 = uVar7 & 0x80808080;
      if ((uVar23 & uVar7 << 1) != 0) break;
      local_284 = (undefined1 *)((int)local_284 + 4);
      uVar5 = uVar5 + (int)local_284;
    }
LAB_0071e770:
    puVar9 = (uint *)(iVar14 + uVar23 * -0x48 + -0x40);
    if (uVar6 == 0) {
      puVar9 = (uint *)0x0;
    }
  }
  if (puVar9 == (uint *)0x0) {
    puVar9 = (uint *)(iVar20 + 0x28);
  }
  puVar24 = (undefined1 *)puVar9[2];
  if (puVar24 == &DAT_3b9aca00) {
    uVar15 = 0;
    uVar5 = 0;
    puVar24 = (undefined1 *)0x0;
  }
  else {
    uVar15 = *puVar9;
    uVar5 = puVar9[1];
  }
  puVar17 = (undefined1 *)puVar9[10];
  local_284 = (undefined1 *)0x0;
  if (puVar17 == &DAT_3b9aca00) {
    local_28c = 0x15180;
    local_288 = 0;
    puVar17 = (undefined1 *)0x0;
  }
  else {
    local_28c = puVar9[8];
    local_288 = puVar9[9];
  }
  psVar22 = (short *)param_4[1];
  psVar8 = psVar22 + local_298 * 0x76;
  local_280 = psVar22;
  local_27c = psVar22;
  local_278 = iVar19;
  local_274 = psVar8;
  if (local_298 == 0) {
    bVar4 = true;
    local_290 = 4;
  }
  else {
    local_290 = thunk_FUN_016d4a50(local_298 * 0xe8);
    if (local_290 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,local_298 * 0xe8);
    }
    iVar19 = 0;
    local_284 = (undefined1 *)0x0;
    do {
      FUN_016dd1aa(&local_230,psVar22,0xe8);
      uVar26 = *(uint *)(psVar22 + 0x74);
      local_50 = local_298;
      local_4c = local_290;
      local_48 = (int)local_284;
      FUN_016dd1aa(&local_148,psVar22,0xe8);
      if (local_284 == (undefined1 *)local_298) {
        FUN_0104e528(&local_50);
        local_298 = local_50;
        local_290 = local_4c;
      }
      FUN_016dd1aa(local_290 + iVar19,&local_230,0xe8);
      bVar4 = puVar17 != (undefined1 *)0x0;
      if (local_28c != uVar26 || local_288 != 0) {
        bVar4 = (uint)(local_28c <= uVar26) <= -local_288;
      }
      if (bVar4) {
        local_288 = 0;
        puVar17 = (undefined1 *)0x0;
        local_28c = uVar26;
      }
      iVar19 = iVar19 + 0xe8;
      local_284 = (undefined1 *)((int)local_284 + 1);
      psVar10 = psVar22 + 0x76;
      psVar22 = psVar22 + 0x76;
    } while (psVar10 != psVar8);
    bVar4 = local_298 == 0;
    local_27c = psVar8;
  }
  FUN_0108c8b4(&local_280);
  bVar27 = local_288 <= uVar5 && (uint)(uVar15 <= local_28c) <= local_288 - uVar5;
  if (local_28c == uVar15 && local_288 == uVar5) {
    bVar27 = puVar17 < puVar24;
  }
  if (bVar27) {
    local_28c = uVar15;
    local_288 = uVar5;
  }
  uVar5 = local_148 + local_28c;
  uVar15 = local_144 + local_288 + (uint)CARRY4(local_148,local_28c);
  if ((int)local_288 < 0 != (int)((local_144 ^ uVar15) & ~(local_144 ^ local_288)) < 0) {
LAB_0071ea68:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  if (bVar27) {
    puVar17 = puVar24;
  }
  puVar17 = puVar17 + (int)local_140;
  if (puVar17 < &DAT_3b9aca00) {
    uVar25 = (undefined1)param_3[0x20];
    if (*param_3 != 1) goto LAB_0071eae8;
LAB_0071ea98:
    iVar19 = *(int *)(param_3 + 6);
    uVar11 = 0;
    if (iVar19 < 0) {
LAB_0071eaa8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,iVar19);
    }
    uVar11 = *(undefined4 *)(param_3 + 4);
    if (iVar19 == 0) {
      local_288 = 0;
      local_2ac = 1;
    }
    else {
      local_2ac = thunk_FUN_016d4a50(iVar19);
      local_288 = iVar19;
      if (local_2ac == 0) {
        uVar11 = 1;
        goto LAB_0071eaa8;
      }
    }
    FUN_016dd1aa(local_2ac,uVar11,iVar19);
    uVar16 = 1;
  }
  else {
    bVar27 = 0xfffffffe < uVar5;
    uVar5 = uVar5 + 1;
    uVar26 = uVar15 + bVar27;
    if ((int)((uVar15 ^ uVar26) & ~uVar15) < 0) goto LAB_0071ea68;
    puVar17 = puVar17 + -1000000000;
    uVar25 = (undefined1)param_3[0x20];
    uVar15 = uVar26;
    if (*param_3 == 1) goto LAB_0071ea98;
LAB_0071eae8:
    local_288 = *(uint *)(param_3 + 2);
    local_2ac = *(int *)(param_3 + 4);
    local_280 = (short *)CONCAT22(local_280._2_2_,param_3[1]);
    iVar19 = *(int *)(param_3 + 6);
    local_230 = *(uint *)(param_3 + 8);
    local_22c = *(uint *)(param_3 + 10);
    local_228 = *(undefined1 **)(param_3 + 0xc);
    uStack_224 = *(undefined4 *)(param_3 + 0xe);
    local_220._0_4_ = *(undefined4 *)(param_3 + 0x10);
    uVar16 = 0;
  }
  if (param_3[0x12] == 1) {
    iVar14 = *(int *)(param_3 + 0x18);
    uVar11 = 0;
    if (iVar14 < 0) {
LAB_0071ed5c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,iVar14);
    }
    uVar11 = *(undefined4 *)(param_3 + 0x16);
    if (iVar14 == 0) {
      iVar20 = 0;
      local_2b0 = 1;
    }
    else {
      local_2b0 = thunk_FUN_016d4a50(iVar14);
      iVar20 = iVar14;
      if (local_2b0 == 0) {
        uVar11 = 1;
        goto LAB_0071ed5c;
      }
    }
    FUN_016dd1aa(local_2b0,uVar11,iVar14);
    uVar18 = 1;
  }
  else {
    local_2b0 = *(int *)(param_3 + 0x16);
    iVar20 = *(int *)(param_3 + 0x14);
    iVar14 = *(int *)(param_3 + 0x18);
    local_60 = *(undefined4 *)(param_3 + 0x1a);
    local_5c = *(undefined4 *)(param_3 + 0x1c);
    local_58 = *(undefined4 *)(param_3 + 0x1e);
    local_52 = param_3[0x13];
    uVar18 = 0;
  }
  local_144 = local_288;
  local_148 = CONCAT22(local_280._0_2_,uVar16);
  local_140 = (undefined1 *)local_2ac;
  local_138._0_4_ = local_230;
  local_138._4_4_ = local_22c;
  local_130 = local_228;
  local_12c = uStack_224;
  local_128 = (undefined4)local_220;
  local_11c = local_2b0;
  local_104 = *(int *)(param_3 + 0x22);
  local_108 = CONCAT31(local_108._1_3_,uVar25);
  local_124 = CONCAT22(local_52,uVar18);
  local_114 = local_60;
  local_110 = local_5c;
  local_10c = local_58;
  local_13c = iVar19;
  local_120 = iVar20;
  local_118 = iVar14;
  local_100 = uVar13;
  uVar28 = FUN_0105acec((int)local_284 * 0xe8);
  piVar12 = (int *)uVar28;
  FUN_016dd1aa(piVar12 + 2,local_290,(int)local_284 * 0xe8);
  if (!bVar4) {
    thunk_FUN_016d3fb4(local_290);
  }
  FUN_016dd1aa(&local_218,&local_148,0x4c);
  local_230 = uVar5;
  local_22c = uVar15;
  local_228 = puVar17;
  local_220 = uVar28;
  FUN_016dd1aa(&local_280,param_3,0x4c);
  if (local_218 == 0) {
    uVar16 = 0;
    local_284 = (undefined1 *)local_214;
    iVar19 = local_210;
    local_3a = local_216;
    local_148 = local_208;
    local_144 = iStack_204;
    local_140 = (undefined1 *)iStack_200;
    local_13c = iStack_1fc;
    local_138._0_4_ = uStack_1f8;
    local_2b0 = local_1f0;
  }
  else {
    uVar13 = 0;
    if (local_20c < 0) {
LAB_0071f00c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar13,local_20c);
    }
    uVar16 = 1;
    if (local_20c == 0) {
      local_284 = (undefined1 *)0x0;
      iVar19 = 1;
    }
    else {
      iVar19 = thunk_FUN_016d4a50(local_20c);
      local_284 = (undefined1 *)local_20c;
      if (iVar19 == 0) {
        uVar13 = 1;
        goto LAB_0071f00c;
      }
    }
    FUN_016dd1aa(iVar19,local_210,local_20c);
    local_2b0 = local_1f0;
  }
  if (local_1f4 == 1) {
    local_2b0 = 0;
    if (local_1e8 < 0) {
LAB_0071f080:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_2b0,local_1e8);
    }
    if (local_1e8 == 0) {
      local_2b4 = 1;
    }
    else {
      local_2b4 = thunk_FUN_016d4a50(local_1e8);
      local_2b0 = local_1e8;
      if (local_2b4 == 0) {
        local_2b0 = 1;
        goto LAB_0071f080;
      }
    }
    local_2ac._0_2_ = 1;
    FUN_016dd1aa(local_2b4,local_1ec,local_1e8);
  }
  else {
    local_2ac._0_2_ = 0;
    local_2b4 = local_1ec;
    local_38 = local_1e4;
    uStack_34 = uStack_1e0;
    uStack_30 = uStack_1dc;
    local_2a = local_1f2;
  }
  local_3c = local_3a;
  local_50 = local_148;
  local_4c = local_144;
  local_48 = (int)local_140;
  iStack_44 = local_13c;
  uStack_40 = (uint)local_138;
  do {
    iVar20 = *piVar12;
    bVar4 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar4);
  *piVar12 = iVar20 + 1;
  if (iVar20 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x71f304);
    (*pcVar1)();
  }
  local_124 = local_20c;
  local_130 = CONCAT22(local_3a,uVar16);
  local_120 = local_148;
  local_11c = local_144;
  local_118 = (int)local_140;
  local_114 = local_13c;
  local_110 = (uint)local_138;
  local_fc = local_38;
  local_104 = local_2b4;
  local_108 = local_2b0;
  local_10c = CONCAT22(local_2a,(undefined2)local_2ac);
  local_e6 = local_1ce;
  local_e8 = local_1d0;
  local_ea = local_1d2;
  local_ec = local_1d4;
  local_f0 = local_1d8;
  local_f8 = uStack_34;
  local_f4 = uStack_30;
  local_148 = uVar5;
  local_144 = uVar15;
  local_140 = puVar17;
  local_12c = (int)local_284;
  local_128 = iVar19;
  local_e0 = uVar5;
  local_dc = uVar15;
  local_d8 = puVar17;
  local_138 = uVar28;
  FUN_0108c998(param_2,&local_280,&local_148);
  FUN_016dd1aa(param_1,&local_230,0x68);
  return;
}

