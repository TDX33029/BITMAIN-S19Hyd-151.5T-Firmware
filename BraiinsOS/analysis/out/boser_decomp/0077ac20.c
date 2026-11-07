// FUN_0077ac20 @ 0077ac20 size=3104 calls_out=20 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0077ac20(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 short *param_5,int param_6,int *param_7,char param_8)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  undefined4 *puVar9;
  short *psVar10;
  uint *puVar11;
  undefined4 uVar12;
  short sVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  ushort *puVar24;
  short sVar25;
  short local_718;
  uint local_714;
  short *local_710;
  short local_708 [116];
  undefined4 local_620;
  short *local_61c;
  uint local_618;
  uint local_614;
  uint uStack_610;
  uint uStack_60c;
  uint local_608;
  uint local_604;
  uint uStack_600;
  uint uStack_5fc;
  uint uStack_5f8;
  uint local_5f4;
  uint local_5f0;
  uint uStack_5ec;
  uint uStack_5e8;
  uint *puStack_5e4;
  undefined4 local_5e0;
  uint local_5dc;
  uint local_5d8;
  uint uStack_5d4;
  uint uStack_5d0;
  uint local_5cc;
  uint local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined2 local_594;
  short local_590;
  short local_58e;
  byte local_569;
  short local_568;
  undefined2 local_566;
  short *local_564;
  uint local_560;
  uint uStack_55c;
  uint uStack_558;
  uint uStack_554;
  uint uStack_550;
  uint local_54c;
  uint uStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  uint local_538;
  uint uStack_534;
  uint uStack_530;
  uint *puStack_52c;
  undefined4 uStack_528;
  undefined4 local_520;
  short *local_51c;
  uint local_518;
  uint local_514;
  uint local_510;
  uint local_50c;
  uint local_508;
  uint uStack_504;
  uint uStack_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint uStack_4f0;
  uint *puStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined1 local_4e0;
  undefined2 local_4df;
  undefined1 local_4dd;
  undefined4 local_4dc;
  short local_4d8;
  short local_4d6;
  int local_390;
  int iStack_38c;
  int iStack_388;
  undefined1 auStack_384 [76];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 local_254;
  char local_253;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint *local_184;
  short *local_180;
  undefined4 *local_17c;
  byte *local_178;
  int local_174;
  undefined4 local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint local_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint *apuStack_12c [5];
  uint local_118;
  uint local_114;
  uint local_110;
  uint uStack_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  uVar17 = *(uint *)(param_6 + 0x1c);
  iVar19 = *(int *)(param_6 + 0x20);
  FUN_013ce848(&local_520,uVar17,iVar19);
  if ((short)local_520 == 7) {
    local_708[0] = 2;
  }
  else {
    FUN_013cb378(local_708,&local_520);
  }
  iVar19 = iVar19 * 0xe8;
  puVar24 = (ushort *)(uVar17 + 0x48);
  do {
    if (iVar19 == 0) break;
    uVar1 = *puVar24;
    iVar19 = iVar19 + -0xe8;
    puVar24 = puVar24 + 0x74;
  } while (1 < uVar1);
  sVar25 = 2;
  uVar23 = 0x15180;
  sVar2 = param_5[0x24];
  sVar3 = param_5[0x25];
  if ((sVar2 == 3 || sVar2 == 9) || (iVar19 = *(int *)(param_6 + 0x14), iVar19 == 0)) {
    bVar7 = true;
    local_714 = uVar17;
    local_61c = param_5;
    local_718 = sVar3;
  }
  else {
    puVar24 = (ushort *)(*(int *)(param_6 + 0x10) + 0x72);
    puVar15 = (undefined4 *)((uint)&local_620 | 4);
    sVar25 = 2;
    puVar9 = (undefined4 *)((uint)&local_160 | 4);
    bVar8 = 0;
    local_710 = param_5;
    do {
      local_520 = CONCAT22(local_718,sVar25);
      local_51c = local_710;
      local_4dd = local_16c._2_1_;
      local_4df = (undefined2)local_16c;
      local_4e0 = (char)local_714;
      sVar13 = 0x10;
      if (1 < puVar24[-0x15]) {
        sVar13 = puVar24[-0x15] - 2;
      }
      if (sVar13 == 5) {
        psVar10 = (short *)&local_520;
        if (sVar25 == 2) {
          psVar10 = local_710;
        }
        uVar17 = *(uint *)(puVar24 + 0x39);
        if (uVar23 <= *(uint *)(puVar24 + 0x39)) {
          uVar17 = uVar23;
        }
        iVar20 = FUN_013cad2c(psVar10,puVar24 + -0x39);
        if (iVar20 != 0) {
          uVar1 = puVar24[-0x13];
          bVar8 = (byte)puVar24[0xd];
          if (uVar1 != 1) {
            uVar12 = *(undefined4 *)(puVar24 + -0xf);
            uVar16 = *(undefined4 *)(puVar24 + -0xd);
            uVar18 = *(undefined4 *)(puVar24 + -0xb);
            *puVar9 = *(undefined4 *)(puVar24 + -0x11);
            puVar9[1] = uVar12;
            puVar9[2] = uVar16;
            puVar9[3] = uVar18;
            uVar12 = *(undefined4 *)(puVar24 + -7);
            uVar16 = *(undefined4 *)(puVar24 + -5);
            uVar18 = *(undefined4 *)(puVar24 + -3);
            puVar9[4] = *(undefined4 *)(puVar24 + -9);
            puVar9[5] = uVar12;
            puVar9[6] = uVar16;
            puVar9[7] = uVar18;
            local_160 = (uint)puVar24[-0x12] << 0x10;
          }
          else {
            FUN_015e8ad4(puVar9,*(undefined4 *)(puVar24 + -0xf),*(undefined4 *)(puVar24 + -0xd));
          }
          uVar4 = puVar24[-1];
          local_160 = CONCAT22(local_160._2_2_,(ushort)(uVar1 == 1));
          if (uVar4 != 1) {
            uVar12 = *(undefined4 *)(puVar24 + 3);
            uVar16 = *(undefined4 *)(puVar24 + 5);
            uVar18 = *(undefined4 *)(puVar24 + 7);
            uVar21 = *(undefined4 *)(puVar24 + 9);
            uVar22 = *(undefined4 *)(puVar24 + 0xb);
            *puVar15 = *(undefined4 *)(puVar24 + 1);
            puVar15[1] = uVar12;
            puVar15[2] = uVar16;
            puVar15[3] = uVar18;
            puVar15[4] = uVar21;
            puVar15[5] = uVar22;
            local_620 = (uint)*puVar24 << 0x10;
          }
          else {
            FUN_015e8ad4(puVar15,*(undefined4 *)(puVar24 + 3),*(undefined4 *)(puVar24 + 5));
          }
          local_620 = CONCAT22(local_620._2_2_,(ushort)(uVar4 == 1));
          puVar14 = &local_5d8;
          local_5d8 = local_160;
          uStack_5d4 = uStack_15c;
          uStack_5d0 = uStack_158;
          local_5cc = uStack_154;
          local_5c8 = local_150;
          local_5c4 = uStack_14c;
          local_5c0 = uStack_148;
          local_5bc = uStack_144;
          local_5b8 = uStack_140;
          local_5b4 = local_620;
          local_5b0 = (int)local_61c;
          local_5ac = local_618;
          local_5a8 = local_614;
          uStack_5a4 = uStack_610;
          uStack_5a0 = uStack_60c;
          uStack_59c = local_608;
          puVar11 = &uStack_5d0;
          goto LAB_0077b5ac;
        }
LAB_0077b3b0:
        local_160 = local_1b8;
        uStack_15c = local_1b4;
        uStack_158 = local_1b0;
        uStack_154 = local_1ac;
        local_150 = local_1a8;
        uStack_14c = local_1a4;
        uStack_148 = local_1a0;
        uStack_144 = local_19c;
        uStack_140 = local_198;
        local_13c = local_194;
        uStack_138 = local_190;
        uStack_134 = local_18c;
        uStack_130 = local_188;
        apuStack_12c[0] = local_184;
        local_620._0_3_ = (undefined3)local_16c;
      }
      else {
        if (sVar13 != 0x11) goto LAB_0077b3b0;
        bVar8 = (byte)puVar24[0xd];
        uVar1 = puVar24[-0x13];
        uVar17 = uVar23;
        if (*(uint *)(puVar24 + 0x39) < uVar23) {
          uVar17 = *(uint *)(puVar24 + 0x39);
        }
        if (uVar1 != 1) {
          uVar12 = *(undefined4 *)(puVar24 + -0xf);
          uVar16 = *(undefined4 *)(puVar24 + -0xd);
          uVar18 = *(undefined4 *)(puVar24 + -0xb);
          *puVar9 = *(undefined4 *)(puVar24 + -0x11);
          puVar9[1] = uVar12;
          puVar9[2] = uVar16;
          puVar9[3] = uVar18;
          uVar12 = *(undefined4 *)(puVar24 + -7);
          uVar16 = *(undefined4 *)(puVar24 + -5);
          uVar18 = *(undefined4 *)(puVar24 + -3);
          puVar9[4] = *(undefined4 *)(puVar24 + -9);
          puVar9[5] = uVar12;
          puVar9[6] = uVar16;
          puVar9[7] = uVar18;
          local_160 = (uint)puVar24[-0x12] << 0x10;
        }
        else {
          FUN_015e8ad4(puVar9,*(undefined4 *)(puVar24 + -0xf),*(undefined4 *)(puVar24 + -0xd));
        }
        uVar4 = puVar24[-1];
        local_160 = CONCAT22(local_160._2_2_,(ushort)(uVar1 == 1));
        if (uVar4 != 1) {
          uVar12 = *(undefined4 *)(puVar24 + 3);
          uVar16 = *(undefined4 *)(puVar24 + 5);
          uVar18 = *(undefined4 *)(puVar24 + 7);
          uVar21 = *(undefined4 *)(puVar24 + 9);
          uVar22 = *(undefined4 *)(puVar24 + 0xb);
          *puVar15 = *(undefined4 *)(puVar24 + 1);
          puVar15[1] = uVar12;
          puVar15[2] = uVar16;
          puVar15[3] = uVar18;
          puVar15[4] = uVar21;
          puVar15[5] = uVar22;
          local_620 = (uint)*puVar24 << 0x10;
        }
        else {
          FUN_015e8ad4(puVar15,*(undefined4 *)(puVar24 + 3),*(undefined4 *)(puVar24 + 5));
        }
        local_620 = CONCAT22(local_620._2_2_,(ushort)(uVar4 == 1));
        puVar14 = &local_118;
        local_118 = local_160;
        local_114 = uStack_15c;
        local_110 = uStack_158;
        uStack_10c = uStack_154;
        local_108 = local_150;
        local_104 = uStack_14c;
        local_100 = uStack_148;
        uStack_fc = uStack_144;
        uStack_f8 = uStack_140;
        puVar11 = &local_110;
LAB_0077b5ac:
        local_714 = (uint)bVar8;
        local_710 = (short *)puVar14[1];
        local_718 = *(short *)((int)puVar14 + 2);
        uVar6 = *puVar14;
        local_160 = *puVar11;
        uStack_15c = puVar11[1];
        uStack_158 = puVar11[2];
        uStack_154 = puVar11[3];
        local_150 = puVar11[4];
        uStack_14c = puVar11[5];
        uStack_148 = puVar11[6];
        uStack_144 = puVar11[7];
        uStack_140 = puVar11[8];
        local_13c = puVar11[9];
        uStack_138 = puVar11[10];
        uStack_134 = puVar11[0xb];
        uStack_130 = puVar11[0xc];
        apuStack_12c[0] = (uint *)puVar11[0xd];
        bVar8 = 1;
        if (sVar25 != 2) {
          FUN_0079217c(&local_520);
        }
        uVar23 = uVar17;
        sVar25 = (short)uVar6;
      }
      puVar24 = puVar24 + 0x74;
      local_1b8 = local_160;
      local_1b4 = uStack_15c;
      local_1b0 = uStack_158;
      local_1ac = uStack_154;
      local_1a8 = local_150;
      local_1a4 = uStack_14c;
      local_1a0 = uStack_148;
      local_19c = uStack_144;
      local_198 = uStack_140;
      local_194 = local_13c;
      local_190 = uStack_138;
      local_18c = uStack_134;
      local_188 = uStack_130;
      local_184 = apuStack_12c[0];
      iVar19 = iVar19 + -1;
      local_16c = CONCAT22(CONCAT11(local_16c._3_1_,local_620._2_1_),(short)local_620);
    } while (iVar19 != 0);
    local_520 = local_160;
    local_51c = (short *)uStack_15c;
    local_518 = uStack_158;
    local_514 = uStack_154;
    local_510 = local_150;
    local_50c = uStack_14c;
    local_508 = uStack_148;
    uStack_504 = uStack_144;
    uStack_500 = uStack_140;
    local_4fc = local_13c;
    local_4f8 = uStack_138;
    local_4f4 = uStack_134;
    uStack_4f0 = uStack_130;
    puStack_4ec = apuStack_12c[0];
    local_118._0_3_ = (undefined3)local_620;
    bVar7 = (bool)(bVar8 ^ 1);
    local_61c = local_710;
  }
  local_620 = CONCAT22(local_718,sVar25);
  local_618 = local_520;
  local_614 = (uint)local_51c;
  uStack_610 = local_518;
  uStack_60c = local_514;
  local_608 = local_510;
  local_604 = local_50c;
  uStack_600 = local_508;
  uStack_5fc = uStack_504;
  uStack_5f8 = uStack_500;
  local_5f4 = local_4fc;
  local_5f0 = local_4f8;
  uStack_5ec = local_4f4;
  uStack_5e8 = uStack_4f0;
  puStack_5e4 = puStack_4ec;
  local_5e0 = CONCAT31((int3)local_118,(char)local_714);
  local_5dc = uVar23;
  FUN_01bed4e2(&local_5d8,param_6,0x68);
  FUN_019bb7e0(*(undefined4 *)(param_6 + 0x68),*(undefined4 *)(param_6 + 0x6c));
  iVar19 = local_5ac;
  local_1a0 = local_5b0;
  local_19c = local_5b4;
  uVar23 = local_5b8;
  local_190 = local_5bc;
  local_18c = local_5c0;
  uVar17 = local_5c4;
  local_1b0 = local_5c8;
  local_1ac = local_5cc;
  local_5c8 = 4;
  local_5b0 = 4;
  local_5bc = 4;
  local_5c4 = 0;
  local_5cc = 0;
  local_5b4 = 0;
  local_5ac = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_569 = 0;
  local_174 = param_2 + 0xc0;
  local_178 = &local_569;
  local_184 = &local_5dc;
  local_198 = iVar19 * 0xe8 + local_1a0;
  local_1b4 = local_1b0;
  local_188 = uVar23 * 0xe8 + local_190;
  local_1a8 = uVar17 * 0xe8 + local_1b0;
  local_194 = local_190;
  local_1a4 = local_1a0;
  local_1b8 = 1;
  local_180 = param_5;
  local_17c = &local_620;
  FUN_00772e10(&local_520,&local_1b8,&local_184);
  sVar25 = (short)local_520;
  if ((short)local_520 == 2) {
    FUN_0078238c(&local_1b8);
    iVar19 = 4;
    uVar17 = 0;
    local_518 = 0;
  }
  else {
    FUN_01bed4e2((uint)&local_118 | 2,(uint)&local_520 | 2,0xea);
    local_118 = CONCAT22(local_118._2_2_,sVar25);
    iVar19 = thunk_FUN_01be5118(0x3b0);
    if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x3b0);
    }
    FUN_01bed4e2(iVar19,&local_118,0xec);
    uVar17 = 1;
    local_16c = 4;
    local_164 = 1;
    local_168 = iVar19;
    FUN_01bed4e2(&local_160,&local_1b8,0x48);
    iVar20 = 0xec;
    while( true ) {
      FUN_00772e10(&local_520,&local_160,apuStack_12c);
      sVar25 = (short)local_520;
      if ((short)local_520 == 2) break;
      FUN_01bed4e2((uint)&local_118 | 2,(uint)&local_520 | 2,0xea);
      local_118 = CONCAT22(local_118._2_2_,sVar25);
      if (uVar17 == local_16c) {
        FUN_0132b898(&local_16c,uVar17,1,4,0xec);
        iVar19 = local_168;
      }
      FUN_01bed4e2(iVar19 + iVar20,&local_118,0xec);
      uVar17 = uVar17 + 1;
      iVar20 = iVar20 + 0xec;
      local_164 = uVar17;
    }
    FUN_0078238c(&local_160);
    local_518 = local_16c;
  }
  local_514 = uVar17 * 0xec + iVar19;
  iVar20 = param_7[2];
  local_520 = iVar19;
  local_51c = (short *)iVar19;
  if ((uint)(*param_7 - iVar20) < uVar17) {
    FUN_0132b898(param_7,iVar20,uVar17,4,0xec);
    iVar20 = param_7[2];
  }
  FUN_01bed4e2(iVar20 * 0xec + param_7[1],iVar19,uVar17 * 0xec);
  iVar20 = iVar20 + uVar17;
  param_7[2] = iVar20;
  local_514 = iVar19;
  bVar8 = FUN_014030ac(&local_520);
  if (iVar20 != 0) {
    bVar8 = local_569;
  }
  if (iVar20 != 0 && (bVar8 & 1) != 0) {
    iVar19 = param_7[1];
    iVar20 = param_7[2];
    param_1[1] = *param_7;
    param_1[2] = iVar19;
    param_1[3] = iVar20;
    *param_1 = 0;
    FUN_013ce3a4(&local_5d8);
    if ((local_620 & 0xffff) != 2) {
      FUN_0079217c(&local_620);
    }
  }
  else {
    if ((short)local_620 == 2) {
      FUN_013cac08(&local_568);
    }
    else {
      local_568 = (short)local_620;
      local_564 = local_61c;
      local_566 = local_620._2_2_;
      local_560 = local_618;
      uStack_55c = local_614;
      uStack_558 = uStack_610;
      uStack_554 = uStack_60c;
      uStack_550 = local_608;
      local_54c = local_604;
      uStack_548 = uStack_600;
      uStack_544 = uStack_5fc;
      uStack_540 = uStack_5f8;
      uStack_53c = local_5f4;
      local_538 = local_5f0;
      uStack_534 = uStack_5ec;
      uStack_530 = uStack_5e8;
      puStack_52c = puStack_5e4;
      uStack_528 = local_5e0;
    }
    FUN_013ce3a4(&local_5d8);
    if ((byte)(param_8 - 7U) < 0xf8 || bVar7) {
      sVar25 = *param_5;
      sVar13 = param_5[0x20];
      if (sVar25 != 1) {
        puVar15 = (undefined4 *)((uint)&local_520 | 4);
        uVar12 = *(undefined4 *)(param_5 + 4);
        uVar16 = *(undefined4 *)(param_5 + 6);
        uVar18 = *(undefined4 *)(param_5 + 8);
        *puVar15 = *(undefined4 *)(param_5 + 2);
        puVar15[1] = uVar12;
        puVar15[2] = uVar16;
        puVar15[3] = uVar18;
        uVar12 = *(undefined4 *)(param_5 + 0xc);
        uVar16 = *(undefined4 *)(param_5 + 0xe);
        uVar18 = *(undefined4 *)(param_5 + 0x10);
        puVar15[4] = *(undefined4 *)(param_5 + 10);
        puVar15[5] = uVar12;
        puVar15[6] = uVar16;
        puVar15[7] = uVar18;
        local_520 = (uint)(ushort)param_5[1] << 0x10;
      }
      else {
        FUN_015e8ad4((uint)&local_520 | 4,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 6))
        ;
      }
      sVar5 = param_5[0x12];
      local_520 = CONCAT22(local_520._2_2_,(ushort)(sVar25 == 1));
      if (sVar5 != 1) {
        puVar15 = (undefined4 *)((uint)&local_5d8 | 4);
        uVar12 = *(undefined4 *)(param_5 + 0x16);
        uVar16 = *(undefined4 *)(param_5 + 0x18);
        uVar18 = *(undefined4 *)(param_5 + 0x1a);
        uVar21 = *(undefined4 *)(param_5 + 0x1c);
        uVar22 = *(undefined4 *)(param_5 + 0x1e);
        *puVar15 = *(undefined4 *)(param_5 + 0x14);
        puVar15[1] = uVar12;
        puVar15[2] = uVar16;
        puVar15[3] = uVar18;
        puVar15[4] = uVar21;
        puVar15[5] = uVar22;
        local_5d8 = (uint)(ushort)param_5[0x13] << 0x10;
      }
      else {
        FUN_015e8ad4((uint)&local_5d8 | 4,*(undefined4 *)(param_5 + 0x16),
                     *(undefined4 *)(param_5 + 0x18));
      }
      local_5d8 = CONCAT22(local_5d8._2_2_,(ushort)(sVar5 == 1));
      local_118 = local_520;
      local_114 = (uint)local_51c;
      local_110 = local_518;
      uStack_10c = local_514;
      local_108 = local_510;
      local_104 = local_50c;
      local_100 = local_508;
      uStack_fc = uStack_504;
      uStack_f8 = uStack_500;
      local_f4 = local_5d8;
      local_f0 = uStack_5d4;
      local_ec = uStack_5d0;
      local_e8 = local_5cc;
      uStack_e4 = local_5c8;
      uStack_e0 = local_5c4;
      uStack_dc = local_5c0;
      local_4dc = *(undefined4 *)(param_5 + 0x22);
      local_4fc = local_5d8;
      local_4f8 = uStack_5d4;
      local_4f4 = uStack_5d0;
      uStack_4f0 = local_5cc;
      puStack_4ec = (uint *)local_5c8;
      uStack_4e8 = local_5c4;
      uStack_4e4 = local_5c0;
      local_4e0 = (char)sVar13;
      local_4d8 = sVar2;
      local_4d6 = sVar3;
      uVar12 = FUN_0077c024(param_4,1,&local_520,local_708,0);
      *param_1 = 2;
      param_1[1] = uVar12;
      FUN_00769be4(param_7);
      FUN_0079217c(&local_568);
      return;
    }
    FUN_01bed4e2(&local_5d8,&local_568,0x44);
    local_594 = 0;
    local_590 = sVar2;
    local_58e = sVar3;
    FUN_0077ba44(&local_118,param_2);
    local_390 = *param_7;
    iStack_38c = param_7[1];
    iStack_388 = param_7[2];
    FUN_01bed4e2(auStack_384,&local_5d8,0x4c);
    local_338 = *param_3;
    uStack_334 = param_3[1];
    uStack_330 = param_3[2];
    FUN_01bed4e2(&local_520,&local_118,200);
    local_253 = param_8 + '\x01';
    local_254 = 0;
    iVar19 = thunk_FUN_01be5118(0x368);
    if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x368);
    }
    FUN_01bed4e2(iVar19,&local_520,0x368);
    *param_1 = 1;
    param_1[1] = local_5dc;
    param_1[2] = iVar19;
    param_1[3] = &DAT_01c08aa4;
  }
  if (local_708[0] != 2) {
    FUN_0077a7e8(local_708);
  }
  return;
}

