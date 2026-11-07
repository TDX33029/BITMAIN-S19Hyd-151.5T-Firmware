// FUN_0077d2c0 @ 0077d2c0 size=3192 calls_out=17 calls_in=1
// strings: overflow when adding duration to instant | overflow when adding duration to instant

void FUN_0077d2c0(undefined4 *param_1,int param_2,short *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  short *psVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  short *psVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint uVar28;
  short *psVar29;
  short *psVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  bool bVar33;
  undefined8 uVar34;
  uint local_2cc;
  short *local_2c8;
  undefined1 *local_2c4;
  undefined1 *local_2bc;
  uint local_2b8;
  short *local_2a8;
  short *local_2a4;
  int local_2a0;
  short *local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  short *local_258;
  uint local_254;
  short *local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 local_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint local_1f8;
  uint local_1f4;
  undefined1 *local_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  short *local_1d4;
  short *local_1d0;
  int local_1cc;
  short *local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 local_1a0;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined2 local_198;
  undefined2 local_196;
  undefined4 local_110;
  uint local_10c;
  undefined1 *local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  short *local_f8;
  uint uStack_f4;
  int iStack_f0;
  short *psStack_ec;
  short *local_e8;
  int local_e4;
  short *psStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  uint local_a8;
  uint local_a4;
  undefined1 *local_a0;
  
  iVar22 = *param_4;
  if (iVar22 == -0x80000000) {
    psVar29 = (short *)param_4[1];
    local_258 = psVar29;
    FUN_019ac130(&local_110,1);
    local_2a8 = psVar29;
    if ((*psVar29 == 0x15) && (*(int *)(psVar29 + 2) != 0)) {
      iVar23 = *(int *)(param_2 + 0x1c);
      iVar22 = 0;
      if (*(int *)(iVar23 + 0x14) != 0) {
        sVar3 = param_3[0x24];
        sVar4 = param_3[0x25];
        uVar6 = FUN_013fc040(*(undefined4 *)(iVar23 + 0x18),*(undefined4 *)(iVar23 + 0x1c),
                             *(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24),sVar3,
                             sVar4);
        uVar28 = uVar6 >> 0x19;
        iVar22 = *(int *)(iVar23 + 8);
        local_2cc = 0;
        while( true ) {
          uVar6 = *(uint *)(iVar23 + 0xc) & uVar6;
          uVar7 = *(uint *)(iVar22 + uVar6);
          uVar8 = uVar7 ^ uVar28 * 0x1010101;
          uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
          while (uVar15 = uVar8, uVar15 != 0) {
            uVar8 = uVar15 - 1 & uVar15;
            uVar9 = uVar6 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                    *(uint *)(iVar23 + 0xc);
            psVar19 = (short *)(iVar22 + -0x48 + uVar9 * -0x48);
            if ((sVar3 == *psVar19) && (sVar3 != 0x24 || sVar4 == psVar19[1])) goto LAB_0077dca4;
          }
          uVar9 = uVar7 & 0x80808080;
          if ((uVar9 & uVar7 << 1) != 0) break;
          local_2cc = local_2cc + 4;
          uVar6 = uVar6 + local_2cc;
        }
LAB_0077dca4:
        iVar22 = iVar22 + uVar9 * -0x48 + -0x40;
        if (uVar15 == 0) {
          iVar22 = 0;
        }
      }
      if (iVar22 == 0) {
        iVar22 = iVar23 + 0x28;
      }
      puVar26 = *(undefined1 **)(iVar22 + 0x38);
      uVar28 = *(uint *)(iVar22 + 0x34);
      uVar6 = *(uint *)(iVar22 + 0x30);
      puVar31 = *(undefined1 **)(iVar22 + 0x18);
      if (puVar26 == &DAT_3b9aca00) {
        uVar28 = 0;
        puVar32 = (undefined1 *)0x0;
      }
      else {
        puVar32 = puVar26;
      }
      if (puVar26 == &DAT_3b9aca00) {
        uVar6 = 0x5180;
      }
      uVar8 = *(uint *)(iVar22 + 0x10);
      uVar7 = *(uint *)(iVar22 + 0x14);
      if (puVar26 == &DAT_3b9aca00) {
        uVar6 = uVar6 & 0xffff | 0x10000;
      }
      if (puVar31 == &DAT_3b9aca00) {
        puVar31 = (undefined1 *)0x0;
        uVar8 = 0;
        uVar7 = 0;
      }
      bVar33 = puVar31 <= puVar32;
      if (uVar8 != uVar6 || uVar7 != uVar28) {
        bVar33 = uVar7 < uVar28 || uVar28 - uVar7 < (uint)(uVar8 <= uVar6);
      }
      if (!bVar33) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00475db0,0x1c,&DAT_01cf35c0);
      }
      uVar15 = *(uint *)(psVar29 + 4);
      bVar33 = (uint)(uVar8 <= uVar15) <= -uVar7;
      if (uVar8 == uVar15 && uVar7 == 0) {
        bVar33 = puVar31 != (undefined1 *)0x0;
      }
      bVar2 = (uVar15 <= uVar6) <= uVar28;
      uVar9 = uVar15;
      if (uVar28 == 0 && bVar2) {
        uVar9 = uVar6;
      }
      uVar27 = 0;
      if (uVar28 == 0 && bVar2) {
        uVar27 = uVar28;
      }
      if (bVar33) {
        uVar9 = uVar8;
        uVar27 = uVar7;
      }
      local_2b8 = (int)local_110 + uVar9;
      uVar8 = local_10c + uVar27 + (uint)CARRY4((uint)local_110,uVar9);
      if ((int)uVar27 < 0 != (int)((local_10c ^ uVar8) & ~(local_10c ^ uVar27)) < 0) {
LAB_0077de34:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      puVar26 = (undefined1 *)0x0;
      if (uVar28 == 0 && (uVar15 <= uVar6) <= uVar28) {
        puVar26 = puVar32;
      }
      if (bVar33) {
        puVar26 = puVar31;
      }
      puVar26 = puVar26 + (int)local_108;
      puVar31 = &DAT_3b9ac9ff;
      if (&DAT_3b9aca00 <= puVar26) {
        bVar33 = 0xfffffffe < local_2b8;
        local_2b8 = local_2b8 + 1;
        uVar7 = uVar8 + bVar33;
        if ((int)((uVar8 ^ uVar7) & ~uVar8) < 0) goto LAB_0077de34;
        puVar31 = (undefined1 *)0xc4653600;
        puVar26 = puVar26 + -1000000000;
        uVar8 = uVar7;
      }
      uVar13 = FUN_013d4d7c(puVar31,local_108,uVar28 - (uVar15 > uVar6));
      FUN_013e8704(&local_110,psVar29);
      FUN_01bed4e2(uVar13,&local_110,0x44);
      FUN_01bed4e2(&local_1f8,param_3,0x4c);
      local_a8 = local_2b8;
      local_108 = &DAT_3b9aca00;
      local_110 = (short *)uVar13;
      local_a4 = uVar8;
      local_a0 = puVar26;
      FUN_013f946c(param_2,&local_1f8,&local_110);
      if (*psVar29 == 0x15) {
        if (uVar27 != 0) {
          uVar9 = 0x15180;
        }
        psVar29[2] = 1;
        psVar29[3] = 0;
        *(uint *)(psVar29 + 4) = uVar9;
      }
    }
    else {
      FUN_0079217c(param_3);
    }
    param_1[2] = &DAT_3b9aca00;
    *param_1 = psVar29;
  }
  else {
    FUN_019ac130(&local_110,1);
    puVar31 = local_108;
    uVar6 = local_10c;
    uVar28 = (uint)local_110;
    iVar23 = *(int *)(param_2 + 0x1c);
    sVar3 = param_3[0x25];
    local_2c8 = (short *)param_4[2];
    sVar4 = param_3[0x24];
    uVar13 = *(undefined4 *)(param_3 + 0x24);
    if (*(int *)(iVar23 + 0x14) == 0) {
      puVar11 = (uint *)0x0;
    }
    else {
      uVar7 = FUN_013fc040(*(undefined4 *)(iVar23 + 0x18),*(undefined4 *)(iVar23 + 0x1c),
                           *(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24),sVar4,sVar3
                          );
      uVar8 = uVar7 >> 0x19;
      iVar16 = *(int *)(iVar23 + 8);
      local_2c4 = (undefined1 *)0x0;
      while( true ) {
        uVar7 = *(uint *)(iVar23 + 0xc) & uVar7;
        uVar9 = *(uint *)(iVar16 + uVar7);
        uVar15 = uVar9 ^ uVar8 * 0x1010101;
        uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
        while (uVar27 = uVar15, uVar27 != 0) {
          uVar15 = uVar27 - 1 & uVar27;
          uVar10 = uVar7 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                          (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3) &
                   *(uint *)(iVar23 + 0xc);
          psVar29 = (short *)(iVar16 + -0x48 + uVar10 * -0x48);
          if ((sVar4 == *psVar29) && (sVar4 != 0x24 || sVar3 == psVar29[1])) goto LAB_0077d5f8;
        }
        uVar10 = uVar9 & 0x80808080;
        if ((uVar10 & uVar9 << 1) != 0) break;
        local_2c4 = (undefined1 *)((int)local_2c4 + 4);
        uVar7 = uVar7 + (int)local_2c4;
      }
LAB_0077d5f8:
      puVar11 = (uint *)(iVar16 + uVar10 * -0x48 + -0x40);
      if (uVar27 == 0) {
        puVar11 = (uint *)0x0;
      }
    }
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)(iVar23 + 0x28);
    }
    uVar7 = *puVar11;
    uVar8 = puVar11[1];
    puVar26 = (undefined1 *)puVar11[2];
    uVar15 = puVar11[8];
    local_2c4 = (undefined1 *)puVar11[9];
    local_2bc = (undefined1 *)puVar11[10];
    if (local_2bc == &DAT_3b9aca00) {
      local_2bc = (undefined1 *)0x0;
      local_2c4 = (undefined1 *)0x0;
      uVar15 = 0x15180;
    }
    if (puVar26 == &DAT_3b9aca00) {
      puVar26 = (undefined1 *)0x0;
      uVar8 = 0;
      uVar7 = 0;
    }
    psVar29 = (short *)param_4[1];
    psVar19 = psVar29 + (int)local_2c8 * 0x76;
    local_2a8 = psVar29;
    local_2a4 = psVar29;
    local_2a0 = iVar22;
    local_29c = psVar19;
    if (local_2c8 == (short *)0x0) {
      local_2b8 = 4;
      local_2c8 = (short *)0x0;
      psVar30 = (short *)0x0;
    }
    else {
      local_2b8 = FUN_01298504((int)local_2c8 * 0xe8,4);
      if (local_2b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,(int)local_2c8 * 0xe8);
      }
      iVar22 = 0;
      psVar30 = (short *)0x0;
      do {
        psVar24 = psVar29 + 0x76;
        FUN_01bed4e2(&local_1f8,psVar29,0xe8);
        local_254 = local_2b8;
        uVar9 = *(uint *)(psVar29 + 0x74);
        local_258 = local_2c8;
        local_250 = psVar30;
        FUN_01bed4e2(&local_110,psVar29,0xe8);
        if (psVar30 == local_2c8) {
          FUN_013e6354(&local_258);
          local_2c8 = local_258;
          local_2b8 = local_254;
        }
        FUN_01bed4e2(local_2b8 + iVar22,&local_1f8,0xe8);
        bVar33 = local_2bc != (undefined1 *)0x0;
        if (uVar15 != uVar9 || local_2c4 != (undefined1 *)0x0) {
          bVar33 = (uint)(uVar15 <= uVar9) <= (uint)-(int)local_2c4;
        }
        iVar22 = iVar22 + 0xe8;
        psVar30 = (short *)((int)psVar30 + 1);
        if (bVar33) {
          local_2c4 = (undefined1 *)0x0;
          local_2bc = (undefined1 *)0x0;
          uVar15 = uVar9;
        }
        psVar29 = psVar24;
      } while (psVar24 != psVar19);
      local_2a4 = psVar19;
    }
    FUN_014030ac(&local_2a8);
    bVar33 = local_2c4 <= uVar8 && (uint)(uVar7 <= uVar15) <= (int)local_2c4 - uVar8;
    if (uVar15 == uVar7 && local_2c4 == (undefined1 *)uVar8) {
      bVar33 = local_2bc < puVar26;
    }
    if (bVar33) {
      local_2c4 = (undefined1 *)uVar8;
      uVar15 = uVar7;
    }
    uVar8 = uVar28 + uVar15;
    local_2cc = uVar6 + (int)local_2c4 + (uint)CARRY4(uVar28,uVar15);
    if ((int)local_2c4 < 0 != (int)((uVar6 ^ local_2cc) & ~(uVar6 ^ (uint)local_2c4)) < 0) {
LAB_0077d8d4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
    }
    if (bVar33) {
      local_2bc = puVar26;
    }
    local_2c4 = local_2bc + (int)puVar31;
    if (&DAT_3b9aca00 <= local_2c4) {
      bVar33 = 0xfffffffe < uVar8;
      uVar8 = uVar8 + 1;
      uVar28 = local_2cc + bVar33;
      if ((int)((local_2cc ^ uVar28) & ~local_2cc) < 0) goto LAB_0077d8d4;
      local_2c4 = local_2c4 + -1000000000;
      local_2cc = uVar28;
    }
    sVar3 = *param_3;
    sVar4 = param_3[0x20];
    if (sVar3 != 1) {
      puVar14 = (undefined4 *)((uint)&local_110 | 4);
      uVar17 = *(undefined4 *)(param_3 + 4);
      uVar18 = *(undefined4 *)(param_3 + 6);
      uVar20 = *(undefined4 *)(param_3 + 8);
      *puVar14 = *(undefined4 *)(param_3 + 2);
      puVar14[1] = uVar17;
      puVar14[2] = uVar18;
      puVar14[3] = uVar20;
      uVar17 = *(undefined4 *)(param_3 + 0xc);
      uVar18 = *(undefined4 *)(param_3 + 0xe);
      uVar20 = *(undefined4 *)(param_3 + 0x10);
      puVar14[4] = *(undefined4 *)(param_3 + 10);
      puVar14[5] = uVar17;
      puVar14[6] = uVar18;
      puVar14[7] = uVar20;
      local_110._2_2_ = param_3[1];
    }
    else {
      FUN_015e8ad4((uint)&local_110 | 4,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 6));
    }
    sVar5 = param_3[0x12];
    local_110 = (short *)CONCAT22(local_110._2_2_,(ushort)(sVar3 == 1));
    if (sVar5 != 1) {
      puVar14 = (undefined4 *)((uint)&local_2a8 | 4);
      uVar17 = *(undefined4 *)(param_3 + 0x16);
      uVar18 = *(undefined4 *)(param_3 + 0x18);
      uVar20 = *(undefined4 *)(param_3 + 0x1a);
      uVar21 = *(undefined4 *)(param_3 + 0x1c);
      uVar25 = *(undefined4 *)(param_3 + 0x1e);
      *puVar14 = *(undefined4 *)(param_3 + 0x14);
      puVar14[1] = uVar17;
      puVar14[2] = uVar18;
      puVar14[3] = uVar20;
      puVar14[4] = uVar21;
      puVar14[5] = uVar25;
      local_2a8 = (short *)((uint)(ushort)param_3[0x13] << 0x10);
    }
    else {
      FUN_015e8ad4((uint)&local_2a8 | 4,*(undefined4 *)(param_3 + 0x16),
                   *(undefined4 *)(param_3 + 0x18));
    }
    local_2a8 = (short *)CONCAT22(local_2a8._2_2_,(ushort)(sVar5 == 1));
    local_1f8 = (uint)local_110;
    local_1f4 = local_10c;
    local_1f0 = local_108;
    uStack_1ec = uStack_104;
    local_1e8._0_4_ = (undefined4)local_100;
    local_1e8._4_4_ = local_100._4_4_;
    local_1e0 = (uint)local_f8;
    local_1dc = uStack_f4;
    local_1d8 = iStack_f0;
    local_1d4 = local_2a8;
    local_1d0 = local_2a4;
    local_1cc = local_2a0;
    local_1c8 = local_29c;
    uStack_1c4 = uStack_298;
    uStack_1c0 = uStack_294;
    local_1bc = uStack_290;
    local_cc = *(undefined4 *)(param_3 + 0x22);
    psStack_ec = local_2a8;
    local_e8 = local_2a4;
    local_e4 = local_2a0;
    psStack_e0 = local_29c;
    uStack_dc = uStack_298;
    uStack_d8 = uStack_294;
    uStack_d4 = uStack_290;
    local_d0 = CONCAT31(local_d0._1_3_,(char)sVar4);
    local_c8 = uVar13;
    uVar34 = FUN_013cf100((int)psVar30 * 0xe8);
    piVar12 = (int *)uVar34;
    FUN_01bed4e2(piVar12 + 2,local_2b8,(int)psVar30 * 0xe8);
    FUN_013dd8c8(local_2b8,0);
    FUN_013e6414(local_2c8,local_2b8,4,0xe8);
    FUN_01bed4e2(&local_1e0,&local_110,0x4c);
    local_1f4 = local_2cc;
    local_1f0 = local_2c4;
    local_1f8 = uVar8;
    local_1e8 = uVar34;
    FUN_01bed4e2(&local_2a8,param_3,0x4c);
    bVar33 = (short)local_1e0 == 0;
    if (bVar33) {
      puVar14 = (undefined4 *)((uint)&local_110 | 4);
      *puVar14 = local_1dc;
      puVar14[1] = local_1d8;
      puVar14[2] = local_1d4;
      puVar14[3] = local_1d0;
      puVar14[4] = local_1cc;
      puVar14[5] = local_1c8;
      puVar14[6] = uStack_1c4;
      puVar14[7] = uStack_1c0;
      local_110 = (short *)(local_1e0 & 0xffff0000);
    }
    else {
      FUN_015e8ad4((uint)&local_110 | 4,local_1d8,local_1d4);
    }
    local_110 = (short *)CONCAT22(local_110._2_2_,(ushort)!bVar33);
    bVar33 = (short)local_1bc != 1;
    if (bVar33) {
      puVar14 = (undefined4 *)((uint)&local_218 | 4);
      *puVar14 = local_1b8;
      puVar14[1] = local_1b4;
      puVar14[2] = local_1b0;
      puVar14[3] = uStack_1ac;
      puVar14[4] = uStack_1a8;
      puVar14[5] = uStack_1a4;
      local_218._2_2_ = (undefined2)((uint)local_1bc >> 0x10);
    }
    else {
      FUN_015e8ad4((uint)&local_218 | 4,local_1b4,local_1b0);
    }
    iVar22 = iStack_f0;
    uVar28 = uStack_f4;
    psVar29 = local_f8;
    local_218 = CONCAT22(local_218._2_2_,(ushort)!bVar33);
    local_258 = local_110;
    local_254 = local_10c;
    local_250 = (short *)local_108;
    uStack_24c = uStack_104;
    local_248 = (undefined4)local_100;
    local_244 = local_100._4_4_;
    uStack_240 = (uint)local_f8;
    uStack_23c = uStack_f4;
    uStack_238 = iStack_f0;
    local_234 = local_218;
    local_230 = uStack_214;
    uStack_22c = uStack_210;
    local_228 = local_20c;
    uStack_224 = uStack_208;
    uStack_220 = uStack_204;
    uStack_21c = uStack_200;
    do {
      iVar23 = *piVar12;
      bVar33 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar33);
    *piVar12 = iVar23 + 1;
    if (iVar23 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x77df40);
      (*pcVar1)();
    }
    local_f8 = local_110;
    uStack_f4 = local_10c;
    iStack_f0 = (int)local_108;
    psStack_ec = (short *)uStack_104;
    local_e8 = (short *)(undefined4)local_100;
    local_e4 = local_100._4_4_;
    psStack_e0 = psVar29;
    uStack_dc = uVar28;
    uStack_d8 = iVar22;
    uStack_d4 = local_218;
    local_d0 = uStack_214;
    local_cc = uStack_210;
    local_c8 = local_20c;
    uStack_c4 = uStack_208;
    uStack_c0 = uStack_204;
    uStack_bc = uStack_200;
    local_a4 = local_2cc;
    local_10c = local_2cc;
    local_ae = local_196;
    local_b0 = local_198;
    local_b2 = local_19a;
    local_b4 = local_19c;
    local_b8 = local_1a0;
    local_a0 = local_2c4;
    local_108 = local_2c4;
    local_110 = (short *)uVar8;
    local_a8 = uVar8;
    local_100 = uVar34;
    FUN_013f946c(param_2,&local_2a8,&local_110);
    FUN_01bed4e2(param_1,&local_1f8,0x68);
  }
  return;
}

