// FUN_017ab244 @ 017ab244 size=16888 calls_out=2 calls_in=1
// strings: 

void FUN_017ab244(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  uint *extraout_r1;
  uint *puVar14;
  int iVar15;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  char *pcVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  char *pcVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint *puVar38;
  uint *puVar39;
  uint *puVar40;
  int iVar41;
  uint *unaff_r7;
  uint *puVar42;
  int iVar43;
  uint *puVar44;
  char *pcVar45;
  uint uVar46;
  bool bVar47;
  bool bVar48;
  uint *local_b4;
  uint *local_b0;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  char *local_48;
  
  uVar19 = DAT_018ddaf8;
  iVar36 = *(int *)(param_1 + 200);
  if (iVar36 == 6) {
    iVar22 = *(int *)(param_1 + 0x5c);
    iVar43 = *(int *)(param_1 + 4);
    puVar38 = *(uint **)(param_1 + 0xc);
    puVar8 = (uint *)param_3[1];
    puVar12 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    bVar47 = puVar12 < (uint *)((int)param_4 + ((param_5 - iVar43) - (int)puVar38));
    iVar36 = *(int *)(param_1 + 0xc0);
    if (bVar47) {
      local_4c = (uint *)((int)param_4 + ((param_5 - iVar43) - (int)puVar12));
    }
    if (!bVar47) {
      local_4c = puVar38;
    }
    iVar34 = *(int *)(param_1 + 100);
    iVar35 = *(int *)(param_1 + 0xbc);
    puVar32 = (uint *)((int)param_4 + param_5);
    puVar16 = (uint *)*param_3;
    puVar10 = puVar32 + -2;
    puVar44 = param_4;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_b4 = (uint *)(iVar43 + (int)local_4c);
      if (param_4 == local_b4) {
        puVar44 = (uint *)((int)param_4 + 1);
      }
      puVar39 = (uint *)((int)puVar44 + (-(int)puVar38 - iVar43));
      if (puVar12 <= puVar39) {
        puVar39 = puVar12;
      }
    }
    else {
      local_b4 = (uint *)(iVar43 + (int)puVar38);
      if (param_4 == local_b4) {
        puVar44 = (uint *)((int)param_4 + 1);
      }
      puVar39 = (uint *)((int)puVar44 + (-(int)puVar38 - iVar43));
      local_4c = puVar38;
    }
    if (puVar39 < puVar8) {
      local_a0 = (uint *)0x0;
      puVar12 = puVar8;
    }
    else {
      puVar12 = (uint *)0x0;
      local_a0 = puVar8;
    }
    if (puVar16 <= puVar39) {
      puVar8 = (uint *)0x0;
      local_90 = puVar16;
    }
    else {
      local_90 = (uint *)0x0;
      puVar8 = puVar16;
    }
    local_88 = param_4;
LAB_017ab734:
    if ((uint *)((int)puVar44 + 1) <= puVar10) {
      uVar21 = 0x40 - iVar36;
      uVar18 = iVar36 - 0x20;
      uVar20 = 0x20 - iVar36;
      local_58 = puVar44 + 0x40;
      uVar24 = *puVar44;
      uVar9 = 0x40 - iVar35;
      local_54 = (uint *)0x1;
      uVar17 = iVar35 - 0x20;
      uVar46 = 0x20 - iVar35;
      uVar23 = puVar44[1] * -0x485a9b9d + uVar24 * -0x30e44324 +
               (int)((ulonglong)uVar24 * 0xb7a56463 >> 0x20);
      uVar27 = (uint)((ulonglong)uVar24 * 0xb7a56463) >> (uVar21 & 0xff) | uVar23 << (uVar18 & 0xff)
               | uVar23 >> (uVar20 & 0xff);
      puVar25 = *(uint **)(iVar22 + uVar27 * 4);
      puVar38 = (uint *)((int)puVar44 + 1);
      uVar23 = puVar44[1];
      local_50 = (uint *)(iVar43 + (int)puVar25);
      while( true ) {
        puVar29 = puVar38;
        iVar41 = (int)puVar44 - iVar43;
        uVar31 = uVar23 * -0x40650000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)uVar24 * 0xbf9b0000 >> 0x20);
        uVar31 = (uint)((ulonglong)uVar24 * 0xbf9b0000) >> (uVar9 & 0xff) |
                 uVar31 << (uVar17 & 0xff) | uVar31 >> (uVar46 & 0xff);
        puVar38 = *(uint **)(iVar34 + uVar31 * 4);
        *(int *)(iVar34 + uVar31 * 4) = iVar41;
        *(int *)(iVar22 + uVar27 * 4) = iVar41;
        if (*(int *)((int)puVar44 + (1 - (int)local_90)) == *(int *)((int)puVar44 + 1) &&
            local_90 != (uint *)0x0) break;
        uVar37 = puVar29[1];
        uVar31 = *puVar29;
        uVar27 = uVar37 * -0x485a9b9d + uVar31 * -0x30e44324 +
                 (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
        uVar27 = (uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar21 & 0xff) |
                 uVar27 << (uVar18 & 0xff) | uVar27 >> (uVar20 & 0xff);
        if ((local_4c < puVar25) && (local_50[1] == uVar23 && *local_50 == uVar24)) {
          puVar38 = puVar44 + 2;
          if ((uint *)((int)puVar32 + -3) <= puVar38) {
            puVar40 = local_50 + 2;
            puVar25 = puVar38;
            goto LAB_017aca7c;
          }
          if (local_50[2] != puVar44[2]) {
            uVar23 = local_50[2] ^ puVar44[2];
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017acabc;
          }
          puVar25 = puVar44 + 3;
          puVar40 = local_50 + 3;
          goto joined_r0x017ac2c8;
        }
        puVar25 = *(uint **)(iVar22 + uVar27 * 4);
        puVar40 = (uint *)(iVar43 + (int)puVar25);
        if ((local_4c < puVar38) && (*(uint *)(iVar43 + (int)puVar38) == *puVar44)) {
          puVar38 = (uint *)(iVar43 + (int)puVar38);
          puVar14 = (uint *)((int)puVar32 + -3);
          if ((local_4c < puVar25) &&
             (!(uVar37 != puVar40[1] || uVar31 != *(uint *)(iVar43 + (int)puVar25)))) {
            puVar38 = puVar29 + 2;
            if (puVar14 <= puVar38) {
              puVar25 = puVar40 + 2;
              puVar44 = puVar38;
              goto LAB_017adb88;
            }
            if (puVar40[2] != puVar29[2]) {
              uVar23 = puVar40[2] ^ puVar29[2];
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              goto LAB_017ad9cc;
            }
            puVar44 = puVar29 + 3;
            puVar25 = puVar40 + 3;
            goto joined_r0x017ae08c;
          }
          puVar25 = puVar44 + 1;
          if (puVar14 <= puVar25) {
            puVar42 = puVar38 + 1;
            puVar40 = puVar25;
            goto LAB_017ac3b0;
          }
          if (puVar38[1] != puVar44[1]) {
            uVar23 = puVar38[1] ^ puVar44[1];
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017ac400;
          }
          puVar40 = puVar44 + 2;
          puVar42 = puVar38 + 2;
          goto joined_r0x017ad464;
        }
        if (puVar29 < local_58) {
          puVar38 = (uint *)((int)puVar29 + (int)local_54);
          if (puVar10 < puVar38) goto LAB_017ab938;
        }
        else {
          local_54 = (uint *)((int)local_54 + 1);
          puVar38 = (uint *)((int)puVar29 + (int)local_54);
          HintPreloadData(puVar29 + 0x10);
          HintPreloadData(puVar29 + 0x20);
          if (puVar10 < puVar38) goto LAB_017ab938;
          local_58 = local_58 + 0x40;
        }
        uVar23 = uVar37;
        puVar44 = puVar29;
        uVar24 = uVar31;
        local_50 = puVar40;
      }
      puVar25 = (uint *)((int)puVar44 + 5);
      puVar38 = (uint *)((int)puVar44 + (5 - (int)local_90));
      if (puVar25 < (uint *)((int)puVar32 + -3)) {
        uVar23 = *(uint *)((int)puVar44 + (5 - (int)local_90));
        if (uVar23 == *(uint *)((int)puVar44 + 5)) {
          puVar29 = (uint *)((int)puVar44 + 9);
          while( true ) {
            puVar38 = puVar38 + 1;
            if ((uint *)((int)puVar32 + -3) <= puVar29) break;
            if (*puVar38 != *puVar29) {
              uVar23 = *puVar38 ^ *puVar29;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar45 = (char *)((int)puVar29 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar25));
              goto LAB_017ac024;
            }
            puVar29 = puVar29 + 1;
          }
          goto LAB_017ac104;
        }
        uVar23 = uVar23 ^ *(uint *)((int)puVar44 + 5);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar29 = puVar25;
LAB_017ac104:
        if (puVar29 < (uint *)((int)puVar32 + -1)) {
          if ((short)*puVar38 == (short)*puVar29) {
            puVar38 = (uint *)((int)puVar38 + 2);
            puVar29 = (uint *)((int)puVar29 + 2);
          }
        }
        if ((puVar29 < puVar32) && ((char)*puVar38 == (char)*puVar29)) {
          puVar29 = (uint *)((int)puVar29 + 1);
        }
        pcVar45 = (char *)((int)puVar29 - (int)puVar25);
      }
LAB_017ac024:
      puVar44 = (uint *)((int)puVar44 + 1);
      pcVar13 = pcVar45 + 4;
      puVar38 = (uint *)param_2[3];
      uVar23 = (int)puVar44 - (int)local_88;
      if (puVar32 + -8 < puVar44) {
        FUN_017a4c40(puVar38,local_88,puVar44,puVar32 + -8);
LAB_017ac940:
        param_2[3] = param_2[3] + uVar23;
        puVar26 = (undefined4 *)param_2[1];
        if (0xffff < uVar23) {
          param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
          param_2[9] = 1;
        }
      }
      else {
        uVar24 = *local_88;
        uVar27 = local_88[1];
        uVar31 = local_88[2];
        puVar38[3] = local_88[3];
        puVar38[2] = uVar31;
        *puVar38 = uVar24;
        puVar38[1] = uVar27;
        uVar24 = param_2[3];
        if (0x10 < uVar23) {
          uVar27 = local_88[5];
          uVar31 = local_88[6];
          uVar37 = local_88[7];
          *(uint *)(uVar24 + 0x10) = local_88[4];
          *(uint *)(uVar24 + 0x14) = uVar27;
          *(uint *)(uVar24 + 0x18) = uVar31;
          *(uint *)(uVar24 + 0x1c) = uVar37;
          if (0x10 < (int)(uVar23 - 0x10)) {
            puVar38 = (uint *)(uVar24 + 0x20);
            puVar25 = local_88 + 0x10;
            do {
              uVar27 = puVar25[-7];
              uVar31 = puVar25[-6];
              puVar29 = puVar38 + 8;
              uVar37 = puVar25[-5];
              *puVar38 = puVar25[-8];
              puVar38[1] = uVar27;
              puVar38[2] = uVar31;
              puVar38[3] = uVar37;
              uVar27 = puVar25[-3];
              uVar31 = puVar25[-2];
              uVar37 = puVar25[-1];
              puVar38[4] = puVar25[-4];
              puVar38[5] = uVar27;
              puVar38[6] = uVar31;
              puVar38[7] = uVar37;
              puVar38 = puVar29;
              puVar25 = puVar25 + 8;
            } while (puVar29 < (uint *)(uVar24 + uVar23));
          }
          goto LAB_017ac940;
        }
        param_2[3] = uVar24 + uVar23;
        puVar26 = (undefined4 *)param_2[1];
      }
      puVar38 = (uint *)&DAT_00000001;
      *(short *)(puVar26 + 1) = (short)uVar23;
      *puVar26 = 1;
      if ((char *)0xffff < pcVar45 + 1) {
        param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
        puVar38 = (uint *)&SUB_00000002;
        param_2[9] = 2;
      }
      *(short *)((int)puVar26 + 6) = (short)(pcVar45 + 1);
      goto LAB_017ac0e0;
    }
LAB_017ab938:
    if (puVar16 <= puVar39 || local_90 == (uint *)0x0) {
      if (local_90 == (uint *)0x0) {
        local_90 = puVar8;
      }
      puVar8 = puVar12;
    }
    local_9c = local_a0;
LAB_017ab968:
    if (local_9c != (uint *)0x0) {
      puVar8 = local_9c;
    }
    pcVar45 = (char *)((int)param_4 + (param_5 - (int)local_88));
    *param_3 = local_90;
    param_3[1] = puVar8;
  }
  else {
    if (iVar36 == 7) {
      iVar22 = *(int *)(param_1 + 4);
      puVar44 = *(uint **)(param_1 + 0x5c);
      puVar38 = *(uint **)(param_1 + 0xc);
      iVar36 = *(int *)(param_1 + 100);
      puVar12 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      if (puVar12 < (uint *)((int)param_4 + ((param_5 - iVar22) - (int)puVar38))) {
        local_4c = (uint *)((int)param_4 + ((param_5 - iVar22) - (int)puVar12));
      }
      else {
        local_4c = puVar38;
      }
      iVar43 = *(int *)(param_1 + 0xc0);
      puVar32 = (uint *)((int)param_4 + param_5);
      iVar34 = *(int *)(param_1 + 0xbc);
      puVar8 = (uint *)*param_3;
      puVar10 = puVar32 + -2;
      puVar39 = (uint *)param_3[1];
      puVar16 = param_4;
      if (*(int *)(param_1 + 0x18) == 0) {
        local_b0 = (uint *)(iVar22 + (int)local_4c);
        if (param_4 == local_b0) {
          puVar16 = (uint *)((int)param_4 + 1);
        }
        puVar25 = (uint *)((int)puVar16 + (-(int)puVar38 - iVar22));
        if (puVar25 < puVar12) {
          puVar12 = puVar25;
        }
      }
      else {
        local_b0 = (uint *)(iVar22 + (int)puVar38);
        if (param_4 == local_b0) {
          puVar16 = (uint *)((int)param_4 + 1);
        }
        puVar12 = (uint *)((int)puVar16 + (-(int)puVar38 - iVar22));
        local_4c = puVar38;
      }
      if (puVar12 < puVar39) {
        puVar38 = (uint *)0x0;
        local_9c = (uint *)0x0;
        puVar25 = puVar39;
      }
      else {
        puVar25 = (uint *)0x0;
        local_9c = puVar39;
      }
      if (puVar8 <= puVar12) {
        unaff_r7 = (uint *)0x0;
      }
      uVar23 = -iVar43 + 0x40;
      if (puVar8 <= puVar12) {
        local_90 = puVar8;
        puVar8 = unaff_r7;
      }
      else {
        unaff_r7 = (uint *)0x1;
        local_90 = (uint *)0x0;
      }
      local_88 = param_4;
LAB_017ab3f4:
      uVar24 = 0x20 - uVar23;
LAB_017ab408:
      if ((uint *)((int)puVar16 + 1) <= puVar10) {
        uVar46 = 0x40 - iVar34;
        puVar39 = puVar16 + 0x40;
        uVar17 = *puVar16;
        local_54 = (uint *)0x1;
        uVar18 = iVar34 - 0x20;
        uVar20 = 0x20 - iVar34;
        uVar27 = -iVar43 + 0x20;
        uVar9 = puVar16[1] * -0x485a9b9d + uVar17 * -0x30e44324 +
                (int)((ulonglong)uVar17 * 0xb7a56463 >> 0x20);
        uVar21 = (uint)((ulonglong)uVar17 * 0xb7a56463) >> (uVar23 & 0xff) |
                 uVar9 << (uVar24 & 0xff) | uVar9 >> (uVar27 & 0xff);
        puVar38 = (uint *)puVar44[uVar21];
        local_50 = (uint *)(iVar22 + (int)puVar38);
        puVar12 = (uint *)((int)puVar16 + 1);
        uVar9 = puVar16[1];
        while( true ) {
          puVar29 = puVar12;
          uVar37 = (int)puVar16 - iVar22;
          uVar31 = uVar9 * -0x405a9d00 + uVar17 * -0x30e44324 +
                   (int)((ulonglong)uVar17 * 0xbfa56300 >> 0x20);
          uVar31 = (uint)((ulonglong)uVar17 * 0xbfa56300) >> (uVar46 & 0xff) |
                   uVar31 << (uVar18 & 0xff) | uVar31 >> (uVar20 & 0xff);
          puVar12 = *(uint **)(iVar36 + uVar31 * 4);
          *(uint *)(iVar36 + uVar31 * 4) = uVar37;
          puVar44[uVar21] = uVar37;
          if (*(int *)((int)puVar16 + (1 - (int)local_90)) == *(int *)((int)puVar16 + 1)) {
            uVar21 = (uint)(local_90 != (uint *)0x0);
          }
          else {
            uVar21 = 0;
          }
          if (uVar21 != 0) {
            puVar38 = (uint *)((int)puVar16 + 5);
            puVar12 = (uint *)((int)puVar16 + (5 - (int)local_90));
            if ((uint *)((int)puVar32 + -3) <= puVar38) {
              puVar39 = puVar38;
              goto LAB_017ac1b4;
            }
            uVar9 = *(uint *)((int)puVar16 + (5 - (int)local_90));
            if (uVar9 == *(uint *)((int)puVar16 + 5)) {
              puVar39 = (uint *)((int)puVar16 + 9);
              goto joined_r0x017aca0c;
            }
            uVar9 = uVar9 ^ *(uint *)((int)puVar16 + 5);
            bVar5 = (byte)uVar9;
            bVar6 = (byte)(uVar9 >> 8);
            bVar7 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017abdd4;
          }
          uVar31 = *puVar29;
          uVar30 = puVar29[1];
          uVar21 = uVar30 * -0x485a9b9d + uVar31 * -0x30e44324 +
                   (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
          uVar21 = (uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar23 & 0xff) |
                   uVar21 << (uVar24 & 0xff) | uVar21 >> (uVar27 & 0xff);
          if ((local_4c < puVar38) && (local_50[1] == uVar9 && *local_50 == uVar17)) {
            puVar12 = puVar16 + 2;
            if ((uint *)((int)puVar32 + -3) <= puVar12) {
              puVar39 = local_50 + 2;
              puVar38 = puVar12;
              goto LAB_017acfc8;
            }
            if (local_50[2] != puVar16[2]) {
              uVar9 = local_50[2] ^ puVar16[2];
              bVar5 = (byte)uVar9;
              bVar6 = (byte)(uVar9 >> 8);
              bVar7 = (byte)(uVar9 >> 0x10);
              bVar1 = (byte)(uVar9 >> 0x18);
              pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              goto LAB_017ad008;
            }
            puVar38 = puVar16 + 3;
            puVar39 = local_50 + 3;
            goto joined_r0x017ac25c;
          }
          puVar38 = (uint *)puVar44[uVar21];
          local_50 = (uint *)(iVar22 + (int)puVar38);
          if ((local_4c < puVar12) && (*(uint *)(iVar22 + (int)puVar12) == *puVar16)) break;
          if (puVar29 < puVar39) {
            puVar12 = (uint *)((int)puVar29 + (int)local_54);
            if (puVar10 < puVar12) goto LAB_017ab604;
          }
          else {
            local_54 = (uint *)((int)local_54 + 1);
            puVar12 = (uint *)((int)puVar29 + (int)local_54);
            HintPreloadData(puVar29 + 0x10);
            HintPreloadData(puVar29 + 0x20);
            if (puVar10 < puVar12) goto LAB_017ab604;
            puVar39 = puVar39 + 0x40;
          }
          uVar9 = uVar30;
          puVar16 = puVar29;
          uVar17 = uVar31;
        }
        puVar12 = (uint *)(iVar22 + (int)puVar12);
        puVar39 = (uint *)((int)puVar32 + -3);
        if ((local_4c < puVar38) &&
           (uVar30 == local_50[1] && uVar31 == *(uint *)(iVar22 + (int)puVar38))) {
          puVar12 = puVar29 + 2;
          if (puVar12 < puVar39) {
            if (local_50[2] == puVar29[2]) {
              puVar16 = local_50 + 3;
              for (puVar38 = puVar29 + 3; puVar38 < puVar39; puVar38 = puVar38 + 1) {
                if (*puVar16 != *puVar38) {
                  uVar9 = *puVar16 ^ *puVar38;
                  bVar5 = (byte)uVar9;
                  bVar6 = (byte)(uVar9 >> 8);
                  bVar7 = (byte)(uVar9 >> 0x10);
                  bVar1 = (byte)(uVar9 >> 0x18);
                  pcVar13 = (char *)((int)puVar38 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                      bVar7 >> 1 & 1) << 1 |
                                                                     bVar7 >> 2 & 1) << 1 |
                                                                    bVar7 >> 3 & 1) << 1 |
                                                                   bVar7 >> 4 & 1) << 1 |
                                                                  bVar7 >> 5 & 1) << 1 |
                                                                 bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar12));
                  goto LAB_017ad56c;
                }
                puVar16 = puVar16 + 1;
              }
              goto LAB_017adad0;
            }
            uVar9 = local_50[2] ^ puVar29[2];
            bVar5 = (byte)uVar9;
            bVar6 = (byte)(uVar9 >> 8);
            bVar7 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar16 = local_50 + 2;
            puVar38 = puVar12;
LAB_017adad0:
            if (puVar38 < (uint *)((int)puVar32 + -1)) {
              if ((short)*puVar16 == (short)*puVar38) {
                puVar38 = (uint *)((int)puVar38 + 2);
                puVar16 = (uint *)((int)puVar16 + 2);
              }
            }
            if ((puVar38 < puVar32) && ((char)*puVar16 == (char)*puVar38)) {
              puVar38 = (uint *)((int)puVar38 + 1);
            }
            pcVar13 = (char *)((int)puVar38 - (int)puVar12);
          }
LAB_017ad56c:
          pcVar13 = pcVar13 + 8;
          local_78 = (uint *)((int)puVar29 - (int)local_50);
          if (local_b0 < local_50 && local_88 < puVar29) {
            puVar16 = puVar29;
            do {
              local_50 = (uint *)((int)local_50 + -1);
              puVar12 = (uint *)((int)puVar16 + -1);
              if (*(char *)((int)puVar16 + -1) != *(char *)local_50) {
                break;
              }
              pcVar13 = pcVar13 + 1;
              puVar16 = puVar12;
            } while (local_88 < puVar12 && local_b0 < local_50);
          }
          else {
            puVar16 = puVar29;
          }
        }
        else {
          puVar38 = puVar16 + 1;
          if (puVar38 < puVar39) {
            if (puVar12[1] == puVar16[1]) {
              puVar14 = puVar12 + 2;
              for (puVar40 = puVar16 + 2; puVar40 < puVar39; puVar40 = puVar40 + 1) {
                if (*puVar14 != *puVar40) {
                  uVar9 = *puVar14 ^ *puVar40;
                  bVar5 = (byte)uVar9;
                  bVar6 = (byte)(uVar9 >> 8);
                  bVar7 = (byte)(uVar9 >> 0x10);
                  bVar1 = (byte)(uVar9 >> 0x18);
                  pcVar13 = (char *)((int)puVar40 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                      bVar7 >> 1 & 1) << 1 |
                                                                     bVar7 >> 2 & 1) << 1 |
                                                                    bVar7 >> 3 & 1) << 1 |
                                                                   bVar7 >> 4 & 1) << 1 |
                                                                  bVar7 >> 5 & 1) << 1 |
                                                                 bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar38));
                  goto LAB_017ac4f4;
                }
                puVar14 = puVar14 + 1;
              }
              goto LAB_017ac4a0;
            }
            uVar9 = puVar12[1] ^ puVar16[1];
            bVar5 = (byte)uVar9;
            bVar6 = (byte)(uVar9 >> 8);
            bVar7 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar14 = puVar12 + 1;
            puVar40 = puVar38;
LAB_017ac4a0:
            if (puVar40 < (uint *)((int)puVar32 + -1)) {
              if ((short)*puVar14 == (short)*puVar40) {
                puVar40 = (uint *)((int)puVar40 + 2);
                puVar14 = (uint *)((int)puVar14 + 2);
              }
            }
            if ((puVar40 < puVar32) && ((char)*puVar14 == (char)*puVar40)) {
              puVar40 = (uint *)((int)puVar40 + 1);
            }
            pcVar13 = (char *)((int)puVar40 - (int)puVar38);
          }
LAB_017ac4f4:
          pcVar13 = pcVar13 + 4;
          local_78 = (uint *)((int)puVar16 - (int)puVar12);
          if (local_88 < puVar16 && local_b0 < puVar12) {
            do {
              puVar12 = (uint *)((int)puVar12 + -1);
              puVar38 = (uint *)((int)puVar16 + -1);
              if (*(char *)puVar38 != *(char *)puVar12) {
                break;
              }
              pcVar13 = pcVar13 + 1;
              puVar16 = puVar38;
            } while (local_88 < puVar38 && local_b0 < puVar12);
          }
        }
        goto LAB_017ad068;
      }
LAB_017ab604:
      if (((uint)unaff_r7 & (uint)(local_90 != (uint *)0x0)) == 0) {
        if (local_90 == (uint *)0x0) {
          local_90 = puVar8;
        }
        puVar8 = puVar25;
      }
      goto LAB_017ab968;
    }
    if (iVar36 != 5) {
      iVar36 = *(int *)(param_1 + 0x5c);
      iVar43 = *(int *)(param_1 + 4);
      pcVar45 = *(char **)(param_1 + 0xc);
      puVar38 = (uint *)param_3[1];
      puVar12 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      iVar22 = *(int *)(param_1 + 0xc0);
      if (puVar12 < (uint *)((int)param_4 + ((param_5 - iVar43) - (int)pcVar45))) {
        local_48 = (char *)((int)param_4 + ((param_5 - iVar43) - (int)puVar12));
      }
      else {
        local_48 = pcVar45;
      }
      iVar34 = *(int *)(param_1 + 100);
      puVar16 = (uint *)((int)param_4 + param_5);
      iVar35 = *(int *)(param_1 + 0xbc);
      puVar8 = (uint *)*param_3;
      puVar32 = puVar16 + -2;
      puVar44 = param_4;
      if (*(int *)(param_1 + 0x18) == 0) {
        local_b0 = (uint *)(local_48 + iVar43);
        if (param_4 == local_b0) {
          puVar44 = (uint *)((int)param_4 + 1);
        }
        puVar10 = (uint *)((int)puVar44 + (-(int)pcVar45 - iVar43));
        if (puVar12 <= puVar10) {
          puVar10 = puVar12;
        }
      }
      else {
        puVar12 = (uint *)(pcVar45 + iVar43);
        if (param_4 == puVar12) {
          puVar44 = (uint *)((int)param_4 + 1);
        }
        puVar10 = (uint *)((int)puVar44 + (-(int)pcVar45 - iVar43));
        local_b0 = puVar12;
        local_48 = pcVar45;
      }
      if (puVar10 < puVar38) {
        puVar12 = (uint *)0x0;
        local_98 = (uint *)0x0;
        puVar39 = puVar38;
      }
      else {
        puVar39 = (uint *)0x0;
        local_98 = puVar38;
      }
      if (puVar8 <= puVar10) {
        unaff_r7 = (uint *)0x0;
      }
      uVar23 = -iVar22 + 0x40;
      if (puVar8 <= puVar10) {
        local_80 = puVar8;
        puVar8 = unaff_r7;
      }
      else {
        unaff_r7 = (uint *)0x1;
        local_80 = (uint *)0x0;
      }
      local_84 = param_4;
LAB_017a4f98:
      uVar24 = 0x20 - uVar23;
LAB_017a4fa8:
      if (puVar32 < (uint *)((int)puVar44 + 1)) {
LAB_017a5174:
        if (((uint)unaff_r7 & (uint)(local_80 != (uint *)0x0)) == 0) {
          if (local_80 == (uint *)0x0) {
            local_80 = puVar8;
          }
          puVar8 = puVar39;
        }
        if (local_98 != (uint *)0x0) {
          puVar8 = local_98;
        }
        *param_3 = local_80;
        param_3[1] = puVar8;
        uVar19 = uVar19 ^ DAT_018ddaf8;
        if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78((int)puVar16 - (int)local_84,puVar12,uVar19,0);
        }
        return;
      }
      uVar17 = 0x20 - iVar35;
      local_50 = puVar44 + 0x40;
      uVar46 = -iVar22 + 0x20;
      local_4c = (uint *)0x1;
      lVar3 = (ulonglong)*puVar44 * 0xb7a56463;
      uVar9 = puVar44[1] * -0x485a9b9d + *puVar44 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
      uVar9 = (uint)lVar3 >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff) | uVar9 >> (uVar46 & 0xff);
      pcVar45 = *(char **)(iVar36 + uVar9 * 4);
      puVar10 = (uint *)(pcVar45 + iVar43);
      puVar38 = (uint *)((int)puVar44 + 1);
      while( true ) {
        puVar25 = puVar38;
        iVar41 = (int)puVar44 - iVar43;
        uVar18 = *puVar44 * -0x61c8864f >> (uVar17 & 0xff);
        pcVar13 = *(char **)(iVar34 + uVar18 * 4);
        *(int *)(iVar34 + uVar18 * 4) = iVar41;
        *(int *)(iVar36 + uVar9 * 4) = iVar41;
        if (*(int *)((int)puVar44 + (1 - (int)local_80)) == *(int *)((int)puVar44 + 1)) {
          uVar9 = (uint)(local_80 != (uint *)0x0);
        }
        else {
          uVar9 = 0;
        }
        if (uVar9 != 0) {
          puVar10 = (uint *)((int)puVar44 + 5);
          puVar38 = (uint *)((int)puVar16 + -3);
          puVar12 = (uint *)((int)puVar44 + (5 - (int)local_80));
          if (puVar38 <= puVar10) {
            puVar25 = puVar10;
            goto LAB_017a522c;
          }
          uVar9 = *(uint *)((int)puVar44 + (5 - (int)local_80));
          if (uVar9 == *(uint *)((int)puVar44 + 5)) {
            puVar25 = (uint *)((int)puVar44 + 9);
            puVar12 = puVar12 + 1;
            if (puVar38 <= puVar25) goto LAB_017a522c;
            goto LAB_017a5738;
          }
          uVar9 = uVar9 ^ *(uint *)((int)puVar44 + 5);
          bVar5 = (byte)uVar9;
          bVar6 = (byte)(uVar9 >> 8);
          bVar7 = (byte)(uVar9 >> 0x10);
          bVar1 = (byte)(uVar9 >> 0x18);
          pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
          goto LAB_017a527c;
        }
        uVar18 = *puVar25;
        uVar9 = puVar25[1] * -0x485a9b9d + uVar18 * -0x30e44324 +
                (int)((ulonglong)uVar18 * 0xb7a56463 >> 0x20);
        uVar9 = (uint)((ulonglong)uVar18 * 0xb7a56463) >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff)
                | uVar9 >> (uVar46 & 0xff);
        if ((local_48 < pcVar45) && (puVar10[1] == puVar44[1] && *puVar10 == *puVar44)) {
          puVar38 = puVar44 + 2;
          puVar12 = (uint *)((int)puVar16 + -3);
          if (puVar12 <= puVar38) {
            puVar29 = puVar10 + 2;
            puVar40 = puVar38;
            goto LAB_017a576c;
          }
          if (puVar10[2] != puVar44[2]) {
            uVar18 = puVar10[2] ^ puVar44[2];
            bVar5 = (byte)uVar18;
            bVar6 = (byte)(uVar18 >> 8);
            bVar7 = (byte)(uVar18 >> 0x10);
            bVar1 = (byte)(uVar18 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017a57ac;
          }
          puVar40 = puVar44 + 3;
          puVar29 = puVar10 + 3;
          if (puVar12 <= puVar40) goto LAB_017a576c;
          goto LAB_017a53f0;
        }
        pcVar45 = *(char **)(iVar36 + uVar9 * 4);
        puVar10 = (uint *)(pcVar45 + iVar43);
        if ((local_48 < pcVar13) &&
           (puVar29 = (uint *)(pcVar13 + iVar43), *(uint *)(pcVar13 + iVar43) == *puVar44)) break;
        if (puVar25 < local_50) {
          puVar38 = (uint *)((int)puVar25 + (int)local_4c);
          puVar12 = puVar32;
          if (puVar32 < puVar38) goto LAB_017a5174;
        }
        else {
          local_4c = (uint *)((int)local_4c + 1);
          puVar38 = (uint *)((int)puVar25 + (int)local_4c);
          HintPreloadData(puVar25 + 0x10);
          HintPreloadData(puVar25 + 0x20);
          puVar12 = local_50;
          if (puVar32 < puVar38) goto LAB_017a5174;
          local_50 = local_50 + 0x40;
        }
        puVar44 = puVar25;
      }
      puVar12 = (uint *)((int)puVar16 + -3);
      if ((local_48 < pcVar45) &&
         (!(puVar25[1] != puVar10[1] || uVar18 != *(uint *)(pcVar45 + iVar43)))) {
        puVar38 = puVar25 + 2;
        if (puVar38 < puVar12) {
          if (puVar10[2] == puVar25[2]) {
            puVar44 = puVar25 + 3;
            puVar29 = puVar10 + 3;
            if (puVar44 < puVar12) {
              do {
                if (*puVar29 != *puVar44) {
                  uVar18 = *puVar29 ^ *puVar44;
                  bVar5 = (byte)uVar18;
                  bVar6 = (byte)(uVar18 >> 8);
                  bVar7 = (byte)(uVar18 >> 0x10);
                  bVar1 = (byte)(uVar18 >> 0x18);
                  pcVar13 = (char *)((int)puVar44 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                      bVar7 >> 1 & 1) << 1 |
                                                                     bVar7 >> 2 & 1) << 1 |
                                                                    bVar7 >> 3 & 1) << 1 |
                                                                   bVar7 >> 4 & 1) << 1 |
                                                                  bVar7 >> 5 & 1) << 1 |
                                                                 bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar38));
                  goto LAB_017a5a44;
                }
                puVar44 = puVar44 + 1;
                puVar29 = puVar29 + 1;
              } while (puVar44 < puVar12);
            }
            goto LAB_017a59f4;
          }
          uVar18 = puVar10[2] ^ puVar25[2];
          bVar5 = (byte)uVar18;
          bVar6 = (byte)(uVar18 >> 8);
          bVar7 = (byte)(uVar18 >> 0x10);
          bVar1 = (byte)(uVar18 >> 0x18);
          pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar29 = puVar10 + 2;
          puVar44 = puVar38;
LAB_017a59f4:
          if (puVar44 < (uint *)((int)puVar16 + -1)) {
            if ((short)*puVar29 == (short)*puVar44) {
              puVar44 = (uint *)((int)puVar44 + 2);
              puVar29 = (uint *)((int)puVar29 + 2);
            }
          }
          if ((puVar44 < puVar16) && ((char)*puVar29 == (char)*puVar44)) {
            puVar44 = (uint *)((int)puVar44 + 1);
          }
          pcVar13 = (char *)((int)puVar44 - (int)puVar38);
        }
LAB_017a5a44:
        pcVar13 = pcVar13 + 8;
        puVar38 = (uint *)((int)puVar25 - (int)puVar10);
        if (!(local_84 < puVar25 && local_b0 < puVar10)) {
          puVar44 = puVar25;
          goto LAB_017a5520;
        }
        puVar44 = puVar25;
        do {
          puVar10 = (uint *)((int)puVar10 + -1);
          puVar12 = (uint *)((int)puVar44 + -1);
          if (*(char *)((int)puVar44 + -1) != *(char *)puVar10) {
            goto LAB_017a5520;
          }
          pcVar13 = pcVar13 + 1;
          puVar44 = puVar12;
        } while (local_84 < puVar12 && local_b0 < puVar10);
        goto LAB_017a5800;
      }
      puVar38 = puVar44 + 1;
      if (puVar38 < puVar12) {
        if (puVar29[1] == puVar44[1]) {
          puVar10 = puVar44 + 2;
          puVar40 = puVar29 + 2;
          if (puVar10 < puVar12) {
            do {
              if (*puVar40 != *puVar10) {
                uVar18 = *puVar40 ^ *puVar10;
                bVar5 = (byte)uVar18;
                bVar6 = (byte)(uVar18 >> 8);
                bVar7 = (byte)(uVar18 >> 0x10);
                bVar1 = (byte)(uVar18 >> 0x18);
                pcVar13 = (char *)((int)puVar10 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                           bVar6 >> 1 & 1) << 1 |
                                                                          bVar6 >> 2 & 1) << 1 |
                                                                         bVar6 >> 3 & 1) << 1 |
                                                                        bVar6 >> 4 & 1) << 1 |
                                                                       bVar6 >> 5 & 1) << 1 |
                                                                      bVar6 >> 6 & 1) << 1 |
                                                                     bVar6 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                    bVar7 >> 1 & 1) << 1 |
                                                                   bVar7 >> 2 & 1) << 1 |
                                                                  bVar7 >> 3 & 1) << 1 |
                                                                 bVar7 >> 4 & 1) << 1 |
                                                                bVar7 >> 5 & 1) << 1 |
                                                               bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar38));
                goto LAB_017a54c8;
              }
              puVar10 = puVar10 + 1;
              puVar40 = puVar40 + 1;
            } while (puVar10 < puVar12);
          }
          goto LAB_017a5478;
        }
        uVar18 = puVar29[1] ^ puVar44[1];
        bVar5 = (byte)uVar18;
        bVar6 = (byte)(uVar18 >> 8);
        bVar7 = (byte)(uVar18 >> 0x10);
        bVar1 = (byte)(uVar18 >> 0x18);
        pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar40 = puVar29 + 1;
        puVar10 = puVar38;
LAB_017a5478:
        if (puVar10 < (uint *)((int)puVar16 + -1)) {
          if ((short)*puVar40 == (short)*puVar10) {
            puVar10 = (uint *)((int)puVar10 + 2);
            puVar40 = (uint *)((int)puVar40 + 2);
          }
        }
        if ((puVar10 < puVar16) && ((char)*puVar40 == (char)*puVar10)) {
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        pcVar13 = (char *)((int)puVar10 - (int)puVar38);
      }
LAB_017a54c8:
      pcVar13 = pcVar13 + 4;
      puVar38 = (uint *)((int)puVar44 - (int)puVar29);
      bVar48 = local_b0 <= puVar29;
      bVar47 = puVar29 == local_b0;
      if (bVar48 && !bVar47) {
        bVar48 = local_84 <= puVar44;
        bVar47 = puVar44 == local_84;
      }
      if (!(!bVar48 || bVar47)) {
        do {
          puVar29 = (uint *)((int)puVar29 + -1);
          puVar12 = (uint *)((int)puVar44 + -1);
          if (*(char *)puVar12 != *(char *)puVar29) goto LAB_017a5514;
          pcVar13 = pcVar13 + 1;
          puVar44 = puVar12;
        } while (local_84 < puVar12 && local_b0 < puVar29);
        goto LAB_017a5800;
      }
      goto LAB_017a5520;
    }
    iVar22 = *(int *)(param_1 + 0x5c);
    iVar43 = *(int *)(param_1 + 4);
    puVar38 = *(uint **)(param_1 + 0xc);
    pcVar13 = (char *)param_3[1];
    pcVar45 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    bVar47 = pcVar45 < (char *)((int)param_4 + ((param_5 - iVar43) - (int)puVar38));
    iVar36 = *(int *)(param_1 + 0xc0);
    if (bVar47) {
      local_4c = (uint *)((int)param_4 + ((param_5 - iVar43) - (int)pcVar45));
    }
    if (!bVar47) {
      local_4c = puVar38;
    }
    iVar34 = *(int *)(param_1 + 100);
    iVar35 = *(int *)(param_1 + 0xbc);
    puVar8 = (uint *)((int)param_4 + param_5);
    pcVar11 = (char *)*param_3;
    puVar44 = puVar8 + -2;
    puVar12 = param_4;
    if (*(int *)(param_1 + 0x18) == 0) {
      local_b0 = (uint *)(iVar43 + (int)local_4c);
      if (param_4 == local_b0) {
        puVar12 = (uint *)((int)param_4 + 1);
      }
      pcVar28 = (char *)((int)puVar12 + (-(int)puVar38 - iVar43));
      if (pcVar45 <= pcVar28) {
        pcVar28 = pcVar45;
      }
    }
    else {
      local_b0 = (uint *)(iVar43 + (int)puVar38);
      if (param_4 == local_b0) {
        puVar12 = (uint *)((int)param_4 + 1);
      }
      pcVar28 = (char *)((int)puVar12 + (-(int)puVar38 - iVar43));
      local_4c = puVar38;
    }
    if (pcVar28 < pcVar13) {
      local_9c = (uint *)0x0;
      pcVar45 = pcVar13;
    }
    else {
      pcVar45 = (char *)0x0;
      local_9c = (uint *)pcVar13;
    }
    if (pcVar11 <= pcVar28) {
      puVar16 = (uint *)(char *)0x0;
      local_84 = (uint *)pcVar11;
    }
    else {
      local_84 = (uint *)0x0;
      puVar16 = (uint *)pcVar11;
    }
LAB_017abacc:
    if ((uint *)((int)puVar12 + 1) <= puVar44) {
      uVar20 = 0x40 - iVar36;
      uVar21 = iVar36 - 0x20;
      uVar27 = 0x20 - iVar36;
      puVar10 = puVar12 + 0x40;
      uVar24 = *puVar12;
      uVar9 = 0x40 - iVar35;
      local_54 = (uint *)0x1;
      uVar17 = iVar35 - 0x20;
      uVar46 = 0x20 - iVar35;
      uVar23 = puVar12[1] * -0x485a9b9d + uVar24 * -0x30e44324 +
               (int)((ulonglong)uVar24 * 0xb7a56463 >> 0x20);
      uVar18 = (uint)((ulonglong)uVar24 * 0xb7a56463) >> (uVar20 & 0xff) | uVar23 << (uVar21 & 0xff)
               | uVar23 >> (uVar27 & 0xff);
      puVar38 = *(uint **)(iVar22 + uVar18 * 4);
      local_50 = (uint *)(iVar43 + (int)puVar38);
      puVar32 = (uint *)((int)puVar12 + 1);
      uVar23 = puVar12[1];
      while( true ) {
        puVar39 = puVar32;
        iVar41 = (int)puVar12 - iVar43;
        uVar31 = uVar23 * -0x45000000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)uVar24 * 0xbb000000 >> 0x20);
        uVar31 = (uint)((ulonglong)uVar24 * 0xbb000000) >> (uVar9 & 0xff) |
                 uVar31 << (uVar17 & 0xff) | uVar31 >> (uVar46 & 0xff);
        puVar32 = *(uint **)(iVar34 + uVar31 * 4);
        *(int *)(iVar34 + uVar31 * 4) = iVar41;
        *(int *)(iVar22 + uVar18 * 4) = iVar41;
        if (*(int *)((int)puVar12 + (1 - (int)local_84)) == *(int *)((int)puVar12 + 1) &&
            local_84 != (uint *)0x0) break;
        uVar31 = *puVar39;
        uVar37 = puVar39[1];
        uVar18 = uVar37 * -0x485a9b9d + uVar31 * -0x30e44324 +
                 (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
        uVar18 = (uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar20 & 0xff) |
                 uVar18 << (uVar21 & 0xff) | uVar18 >> (uVar27 & 0xff);
        if ((local_4c < puVar38) && (local_50[1] == uVar23 && *local_50 == uVar24)) {
          puVar38 = puVar12 + 2;
          if ((uint *)((int)puVar8 + -3) <= puVar38) {
            puVar10 = local_50 + 2;
            puVar32 = puVar38;
            goto LAB_017acd24;
          }
          if (local_50[2] != puVar12[2]) {
            uVar23 = local_50[2] ^ puVar12[2];
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017acd64;
          }
          puVar32 = puVar12 + 3;
          puVar10 = local_50 + 3;
          goto joined_r0x017ac338;
        }
        puVar38 = *(uint **)(iVar22 + uVar18 * 4);
        local_50 = (uint *)(iVar43 + (int)puVar38);
        if ((local_4c < puVar32) && (*(uint *)(iVar43 + (int)puVar32) == *puVar12)) {
          puVar32 = (uint *)(iVar43 + (int)puVar32);
          puVar10 = (uint *)((int)puVar8 + -3);
          if ((local_4c < puVar38) &&
             (!(uVar37 != local_50[1] || uVar31 != *(uint *)(iVar43 + (int)puVar38)))) {
            puVar12 = puVar39 + 2;
            if (puVar10 <= puVar12) {
              puVar32 = local_50 + 2;
              puVar38 = puVar12;
              goto LAB_017adb2c;
            }
            if (local_50[2] != puVar39[2]) {
              uVar23 = local_50[2] ^ puVar39[2];
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              goto LAB_017ad4c4;
            }
            puVar38 = puVar39 + 3;
            puVar32 = local_50 + 3;
            goto joined_r0x017ae00c;
          }
          puVar38 = puVar12 + 1;
          if (puVar10 <= puVar38) {
            puVar29 = puVar32 + 1;
            puVar25 = puVar38;
            goto LAB_017ac5a0;
          }
          if (puVar32[1] != puVar12[1]) {
            uVar23 = puVar32[1] ^ puVar12[1];
            bVar5 = (byte)uVar23;
            bVar6 = (byte)(uVar23 >> 8);
            bVar7 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
            goto LAB_017ac5f4;
          }
          puVar25 = puVar12 + 2;
          puVar29 = puVar32 + 2;
          goto joined_r0x017ad3ec;
        }
        if (puVar39 < puVar10) {
          puVar32 = (uint *)((int)puVar39 + (int)local_54);
          if (puVar44 < puVar32) goto LAB_017abcd4;
        }
        else {
          local_54 = (uint *)((int)local_54 + 1);
          puVar32 = (uint *)((int)puVar39 + (int)local_54);
          HintPreloadData(puVar39 + 0x10);
          HintPreloadData(puVar39 + 0x20);
          if (puVar44 < puVar32) goto LAB_017abcd4;
          puVar10 = puVar10 + 0x40;
        }
        uVar23 = uVar37;
        puVar12 = puVar39;
        uVar24 = uVar31;
      }
      puVar32 = (uint *)((int)puVar12 + 5);
      puVar38 = (uint *)((int)puVar12 + (5 - (int)local_84));
      if (puVar32 < (uint *)((int)puVar8 + -3)) {
        uVar23 = *(uint *)((int)puVar12 + (5 - (int)local_84));
        if (uVar23 == *(uint *)((int)puVar12 + 5)) {
          puVar10 = (uint *)((int)puVar12 + 9);
          while( true ) {
            puVar38 = puVar38 + 1;
            if ((uint *)((int)puVar8 + -3) <= puVar10) break;
            if (*puVar38 != *puVar10) {
              uVar23 = *puVar38 ^ *puVar10;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar13 = (char *)((int)puVar10 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar32));
              goto LAB_017abf00;
            }
            puVar10 = puVar10 + 1;
          }
          goto LAB_017ac15c;
        }
        uVar23 = uVar23 ^ *(uint *)((int)puVar12 + 5);
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar10 = puVar32;
LAB_017ac15c:
        if (puVar10 < (uint *)((int)puVar8 + -1)) {
          if ((short)*puVar38 == (short)*puVar10) {
            puVar38 = (uint *)((int)puVar38 + 2);
            puVar10 = (uint *)((int)puVar10 + 2);
          }
        }
        if ((puVar10 < puVar8) && ((char)*puVar38 == (char)*puVar10)) {
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        pcVar13 = (char *)((int)puVar10 - (int)puVar32);
      }
LAB_017abf00:
      puVar12 = (uint *)((int)puVar12 + 1);
      local_5c = (uint *)(pcVar13 + 4);
      uVar23 = (int)puVar12 - (int)param_4;
      puVar38 = (uint *)param_2[3];
      if (puVar8 + -8 < puVar12) {
        FUN_017a4c40(puVar38,param_4,puVar12,puVar8 + -8);
LAB_017ac718:
        param_2[3] = param_2[3] + uVar23;
        puVar26 = (undefined4 *)param_2[1];
        if (0xffff < uVar23) {
          param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
          param_2[9] = 1;
        }
      }
      else {
        uVar24 = *param_4;
        uVar18 = param_4[1];
        uVar31 = param_4[2];
        puVar38[3] = param_4[3];
        puVar38[2] = uVar31;
        *puVar38 = uVar24;
        puVar38[1] = uVar18;
        uVar24 = param_2[3];
        if (0x10 < uVar23) {
          uVar18 = param_4[5];
          uVar31 = param_4[6];
          uVar37 = param_4[7];
          *(uint *)(uVar24 + 0x10) = param_4[4];
          *(uint *)(uVar24 + 0x14) = uVar18;
          *(uint *)(uVar24 + 0x18) = uVar31;
          *(uint *)(uVar24 + 0x1c) = uVar37;
          if (0x10 < (int)(uVar23 - 0x10)) {
            puVar38 = param_4 + 0x10;
            puVar32 = (uint *)(uVar24 + 0x20);
            do {
              uVar18 = puVar38[-7];
              uVar31 = puVar38[-6];
              puVar10 = puVar32 + 8;
              uVar37 = puVar38[-5];
              *puVar32 = puVar38[-8];
              puVar32[1] = uVar18;
              puVar32[2] = uVar31;
              puVar32[3] = uVar37;
              uVar18 = puVar38[-3];
              uVar31 = puVar38[-2];
              uVar37 = puVar38[-1];
              puVar32[4] = puVar38[-4];
              puVar32[5] = uVar18;
              puVar32[6] = uVar31;
              puVar32[7] = uVar37;
              puVar38 = puVar38 + 8;
              puVar32 = puVar10;
            } while (puVar10 < (uint *)(uVar24 + uVar23));
          }
          goto LAB_017ac718;
        }
        param_2[3] = uVar24 + uVar23;
        puVar26 = (undefined4 *)param_2[1];
      }
      puVar38 = (uint *)&DAT_00000001;
      *(short *)(puVar26 + 1) = (short)uVar23;
      *puVar26 = 1;
      if ((char *)0xffff < pcVar13 + 1) {
        param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
        puVar38 = (uint *)&SUB_00000002;
        param_2[9] = 2;
      }
      *(short *)((int)puVar26 + 6) = (short)(pcVar13 + 1);
      goto LAB_017abfbc;
    }
LAB_017abcd4:
    if (pcVar11 <= pcVar28 || local_84 == (uint *)0x0) {
      if (local_84 == (uint *)0x0) {
        local_84 = puVar16;
      }
      puVar16 = (uint *)pcVar45;
    }
    if (local_9c != (uint *)0x0) {
      puVar16 = local_9c;
    }
    pcVar45 = (char *)((int)puVar8 - (int)param_4);
    *param_3 = local_84;
    param_3[1] = puVar16;
  }
  uVar19 = uVar19 ^ DAT_018ddaf8;
  if (uVar19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar45,puVar38,uVar19,0);
  }
  return;
joined_r0x017ac2c8:
  if ((uint *)((int)puVar32 + -3) <= puVar25) goto LAB_017aca7c;
  if (*puVar40 != *puVar25) {
    uVar23 = *puVar40 ^ *puVar25;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar25 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017acabc;
  }
  puVar25 = puVar25 + 1;
  puVar40 = puVar40 + 1;
  goto joined_r0x017ac2c8;
LAB_017aca7c:
  if (puVar25 < (uint *)((int)puVar32 + -1)) {
    if ((short)*puVar40 == (short)*puVar25) {
      puVar25 = (uint *)((int)puVar25 + 2);
      puVar40 = (uint *)((int)puVar40 + 2);
    }
  }
  if ((puVar25 < puVar32) && ((char)*puVar40 == (char)*puVar25)) {
    puVar25 = (uint *)((int)puVar25 + 1);
  }
  pcVar13 = (char *)((int)puVar25 - (int)puVar38);
LAB_017acabc:
  pcVar13 = pcVar13 + 8;
  puVar25 = (uint *)((int)puVar44 - (int)local_50);
  bVar48 = local_b4 <= local_50;
  bVar47 = local_50 == local_b4;
  if (bVar48 && !bVar47) {
    bVar48 = local_88 <= puVar44;
    bVar47 = puVar44 == local_88;
  }
  puVar38 = puVar44;
  if (bVar48 && !bVar47) {
    do {
      local_50 = (uint *)((int)local_50 + -1);
      puVar44 = (uint *)((int)puVar38 + -1);
      if (*(char *)puVar44 != *(char *)local_50) {
        puVar44 = puVar38;
        break;
      }
      pcVar13 = pcVar13 + 1;
      puVar38 = puVar44;
    } while (local_88 < puVar44 && local_b4 < local_50);
  }
  goto LAB_017acb0c;
joined_r0x017ad464:
  if (puVar14 <= puVar40) goto LAB_017ac3b0;
  if (*puVar42 != *puVar40) {
    uVar23 = *puVar42 ^ *puVar40;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar40 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar25));
    goto LAB_017ac400;
  }
  puVar40 = puVar40 + 1;
  puVar42 = puVar42 + 1;
  goto joined_r0x017ad464;
LAB_017ac3b0:
  if (puVar40 < (uint *)((int)puVar32 + -1)) {
    if ((short)*puVar42 == (short)*puVar40) {
      puVar40 = (uint *)((int)puVar40 + 2);
      puVar42 = (uint *)((int)puVar42 + 2);
    }
  }
  if ((puVar40 < puVar32) && ((char)*puVar42 == (char)*puVar40)) {
    puVar40 = (uint *)((int)puVar40 + 1);
  }
  pcVar13 = (char *)((int)puVar40 - (int)puVar25);
LAB_017ac400:
  local_50 = (uint *)((int)puVar44 - (int)puVar38);
  pcVar13 = pcVar13 + 4;
  bVar48 = local_b4 <= puVar38;
  bVar47 = puVar38 == local_b4;
  if (bVar48 && !bVar47) {
    bVar48 = local_88 <= puVar44;
    bVar47 = puVar44 == local_88;
  }
  puVar14 = puVar44;
  puVar25 = local_50;
  if (bVar48 && !bVar47) {
    do {
      puVar38 = (uint *)((int)puVar38 + -1);
      puVar44 = (uint *)((int)puVar14 + -1);
      if (*(char *)puVar44 != *(char *)puVar38) goto LAB_017ac448;
      pcVar13 = pcVar13 + 1;
      puVar14 = puVar44;
    } while (local_88 < puVar44 && local_b4 < puVar38);
  }
  goto LAB_017acb0c;
joined_r0x017ae08c:
  if (puVar14 <= puVar44) goto LAB_017adb88;
  if (*puVar25 != *puVar44) {
    uVar23 = *puVar25 ^ *puVar44;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar44 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017ad9cc;
  }
  puVar44 = puVar44 + 1;
  puVar25 = puVar25 + 1;
  goto joined_r0x017ae08c;
LAB_017adb88:
  if (puVar44 < (uint *)((int)puVar32 + -1)) {
    if ((short)*puVar25 == (short)*puVar44) {
      puVar44 = (uint *)((int)puVar44 + 2);
      puVar25 = (uint *)((int)puVar25 + 2);
    }
  }
  if ((puVar44 < puVar32) && ((char)*puVar25 == (char)*puVar44)) {
    puVar44 = (uint *)((int)puVar44 + 1);
  }
  pcVar13 = (char *)((int)puVar44 - (int)puVar38);
LAB_017ad9cc:
  pcVar13 = pcVar13 + 8;
  local_50 = (uint *)((int)puVar29 - (int)puVar40);
  puVar25 = local_50;
  if (local_88 < puVar29 && local_b4 < puVar40) {
    puVar14 = puVar29;
    do {
      puVar40 = (uint *)((int)puVar40 + -1);
      puVar44 = (uint *)((int)puVar14 + -1);
      if (*(char *)((int)puVar14 + -1) != *(char *)puVar40) goto LAB_017ac448;
      pcVar13 = pcVar13 + 1;
      puVar14 = puVar44;
    } while (local_88 < puVar44 && local_b4 < puVar40);
  }
  else {
    puVar44 = puVar29;
  }
LAB_017acb0c:
  local_50 = puVar25;
  if (local_54 < 4) {
    *(int *)(iVar22 + uVar27 * 4) = (int)puVar29 - iVar43;
  }
  puVar25 = (uint *)param_2[3];
  uVar23 = (int)puVar44 - (int)local_88;
  if (puVar32 + -8 < puVar44) {
    FUN_017a4c40(puVar25,local_88,puVar44,puVar32 + -8);
  }
  else {
    uVar24 = *local_88;
    puVar38 = (uint *)local_88[1];
    uVar27 = local_88[2];
    puVar25[3] = local_88[3];
    puVar25[2] = uVar27;
    *puVar25 = uVar24;
    puVar25[1] = (uint)puVar38;
    uVar24 = param_2[3];
    if (uVar23 < 0x11) {
      param_2[3] = uVar24 + uVar23;
      puVar26 = (undefined4 *)param_2[1];
      goto LAB_017acba0;
    }
    uVar27 = local_88[5];
    uVar31 = local_88[6];
    uVar37 = local_88[7];
    *(uint *)(uVar24 + 0x10) = local_88[4];
    *(uint *)(uVar24 + 0x14) = uVar27;
    *(uint *)(uVar24 + 0x18) = uVar31;
    *(uint *)(uVar24 + 0x1c) = uVar37;
    if (0x10 < (int)(uVar23 - 0x10)) {
      puVar38 = (uint *)(uVar24 + 0x20);
      puVar25 = local_88 + 0x10;
      do {
        uVar27 = puVar25[-7];
        uVar31 = puVar25[-6];
        puVar29 = puVar38 + 8;
        uVar37 = puVar25[-5];
        *puVar38 = puVar25[-8];
        puVar38[1] = uVar27;
        puVar38[2] = uVar31;
        puVar38[3] = uVar37;
        uVar27 = puVar25[-3];
        uVar31 = puVar25[-2];
        uVar37 = puVar25[-1];
        puVar38[4] = puVar25[-4];
        puVar38[5] = uVar27;
        puVar38[6] = uVar31;
        puVar38[7] = uVar37;
        puVar38 = puVar29;
        puVar25 = puVar25 + 8;
      } while (puVar29 < (uint *)(uVar24 + uVar23));
    }
  }
  param_2[3] = param_2[3] + uVar23;
  puVar26 = (undefined4 *)param_2[1];
  puVar38 = param_2;
  if (0xffff < uVar23) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017acba0:
  *(short *)(puVar26 + 1) = (short)uVar23;
  *puVar26 = (char *)((int)local_50 + 3);
  if ((char *)0xffff < pcVar13 + -3) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar38 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(pcVar13 + -3);
  local_a0 = local_90;
  local_90 = local_50;
LAB_017ac0e0:
  local_54 = puVar32 + -8;
  local_58 = (uint *)((int)puVar32 + -3);
  puVar44 = (uint *)((int)puVar44 + (int)pcVar13);
  param_2[1] = (uint)(puVar26 + 2);
  if (puVar44 <= puVar10) {
    iVar41 = iVar41 + 2;
    uVar31 = *(uint *)(iVar43 + iVar41);
    iVar15 = *(int *)(iVar43 + iVar41 + 4);
    puVar38 = (uint *)((int)puVar44 + (-2 - iVar43));
    lVar3 = (ulonglong)*(uint *)((int)puVar44 + -2) * 0xb7a56463;
    uVar24 = *(int *)((int)puVar44 + 2) * -0x485a9b9d + *(uint *)((int)puVar44 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar3 >> 0x20);
    lVar4 = (ulonglong)*(uint *)((int)puVar44 + -1) * 0xbf9b0000;
    uVar27 = *(int *)((int)puVar44 + 3) * -0x40650000 + *(uint *)((int)puVar44 + -1) * -0x30e44324 +
             (int)((ulonglong)lVar4 >> 0x20);
    uVar23 = iVar15 * -0x485a9b9d + uVar31 * -0x30e44324 +
             (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
    uVar37 = iVar15 * -0x40650000 + uVar31 * -0x30e44324 +
             (int)((ulonglong)uVar31 * 0xbf9b0000 >> 0x20);
    *(int *)(iVar22 + ((uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar21 & 0xff) |
                       uVar23 << (uVar18 & 0xff) | uVar23 >> (uVar20 & 0xff)) * 4) = iVar41;
    *(uint **)(iVar22 + ((uint)lVar3 >> (uVar21 & 0xff) | uVar24 << (uVar18 & 0xff) |
                        uVar24 >> (uVar20 & 0xff)) * 4) = puVar38;
    *(int *)(iVar34 + ((uint)((ulonglong)uVar31 * 0xbf9b0000) >> (uVar9 & 0xff) |
                       uVar37 << (uVar17 & 0xff) | uVar37 >> (uVar46 & 0xff)) * 4) = iVar41;
    *(char **)(iVar34 + ((uint)lVar4 >> (uVar9 & 0xff) | uVar27 << (uVar17 & 0xff) |
                        uVar27 >> (uVar46 & 0xff)) * 4) = (char *)((int)puVar44 + (-1 - iVar43));
    while (puVar25 = local_a0,
          puVar25 != (uint *)0x0 && *(uint *)((int)puVar44 - (int)puVar25) == *puVar44) {
      puVar29 = puVar44 + 1;
      puVar38 = (uint *)((int)puVar44 + (4 - (int)puVar25));
      if (puVar29 < local_58) {
        uVar23 = *(uint *)((int)puVar44 + (4 - (int)puVar25));
        if (uVar23 == puVar44[1]) {
          puVar40 = puVar44 + 2;
          while( true ) {
            puVar38 = puVar38 + 1;
            if (local_58 <= puVar40) break;
            if (*puVar38 != *puVar40) {
              uVar23 = *puVar38 ^ *puVar40;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar45 = (char *)((int)puVar40 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar29));
              goto LAB_017aded0;
            }
            puVar40 = puVar40 + 1;
          }
          goto LAB_017ae1e4;
        }
        uVar23 = uVar23 ^ puVar44[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar40 = puVar29;
LAB_017ae1e4:
        if (puVar40 < (uint *)((int)puVar32 + -1)) {
          if ((short)*puVar38 == (short)*puVar40) {
            puVar38 = (uint *)((int)puVar38 + 2);
            puVar40 = (uint *)((int)puVar40 + 2);
          }
        }
        if ((puVar40 < puVar32) && ((char)*puVar38 == (char)*puVar40)) {
          puVar40 = (uint *)((int)puVar40 + 1);
        }
        pcVar45 = (char *)((int)puVar40 - (int)puVar29);
      }
LAB_017aded0:
      uVar24 = *puVar44;
      puVar29 = (uint *)param_2[3];
      uVar27 = puVar44[1] * -0x40650000 + uVar24 * -0x30e44324 +
               (int)((ulonglong)uVar24 * 0xbf9b0000 >> 0x20);
      uVar23 = puVar44[1] * -0x485a9b9d + uVar24 * -0x30e44324 +
               (int)((ulonglong)uVar24 * 0xb7a56463 >> 0x20);
      *(int *)(iVar34 + ((uint)((ulonglong)uVar24 * 0xbf9b0000) >> (uVar9 & 0xff) |
                         uVar27 << (uVar17 & 0xff) | uVar27 >> (uVar46 & 0xff)) * 4) =
           (int)puVar44 - iVar43;
      *(int *)(iVar22 + ((uint)((ulonglong)uVar24 * 0xb7a56463) >> (uVar21 & 0xff) |
                         uVar23 << (uVar18 & 0xff) | uVar23 >> (uVar20 & 0xff)) * 4) =
           (int)puVar44 - iVar43;
      if (local_54 < puVar44) {
        FUN_017a4c40(puVar29,puVar44,puVar44,local_54);
        puVar38 = extraout_r1_00;
      }
      else {
        puVar38 = (uint *)puVar44[1];
        uVar23 = puVar44[2];
        uVar24 = puVar44[3];
        *puVar29 = *puVar44;
        puVar29[1] = (uint)puVar38;
        puVar29[2] = uVar23;
        puVar29[3] = uVar24;
      }
      puVar26 = (undefined4 *)param_2[1];
      puVar44 = (uint *)((int)puVar44 + (int)(pcVar45 + 4));
      *(undefined2 *)(puVar26 + 1) = 0;
      *puVar26 = 1;
      uVar2 = SUB42(pcVar45 + 1,0);
      if (pcVar45 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar26 + 6) = uVar2;
        param_2[1] = (uint)(puVar26 + 2);
      }
      else {
        param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar26 + 6) = uVar2;
        param_2[1] = (uint)(puVar26 + 2);
      }
      if (puVar10 < puVar44) {
        local_a0 = local_90;
        local_90 = puVar25;
        goto LAB_017ac0f8;
      }
      local_a0 = local_90;
      local_90 = puVar25;
    }
    local_a0 = puVar25;
  }
LAB_017ac0f8:
  local_88 = puVar44;
  goto LAB_017ab734;
LAB_017ac448:
  puVar44 = puVar14;
  puVar25 = local_50;
  goto LAB_017acb0c;
joined_r0x017aca0c:
  puVar12 = puVar12 + 1;
  if ((uint *)((int)puVar32 + -3) <= puVar39) goto LAB_017ac1b4;
  if (*puVar12 != *puVar39) {
    uVar9 = *puVar12 ^ *puVar39;
    bVar5 = (byte)uVar9;
    bVar6 = (byte)(uVar9 >> 8);
    bVar7 = (byte)(uVar9 >> 0x10);
    bVar1 = (byte)(uVar9 >> 0x18);
    pcVar45 = (char *)((int)puVar39 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017abdd4;
  }
  puVar39 = puVar39 + 1;
  goto joined_r0x017aca0c;
LAB_017ac1b4:
  if (puVar39 < (uint *)((int)puVar32 + -1)) {
    if ((short)*puVar12 == (short)*puVar39) {
      puVar12 = (uint *)((int)puVar12 + 2);
      puVar39 = (uint *)((int)puVar39 + 2);
    }
  }
  if ((puVar39 < puVar32) && ((char)*puVar12 == (char)*puVar39)) {
    puVar39 = (uint *)((int)puVar39 + 1);
  }
  pcVar45 = (char *)((int)puVar39 - (int)puVar38);
LAB_017abdd4:
  puVar16 = (uint *)((int)puVar16 + 1);
  uVar9 = (int)puVar16 - (int)local_88;
  pcVar13 = pcVar45 + 4;
  puVar12 = (uint *)param_2[3];
  if (puVar32 + -8 < puVar16) {
    FUN_017a4c40(puVar12,local_88,puVar16,puVar32 + -8);
LAB_017ac824:
    param_2[3] = param_2[3] + uVar9;
    puVar26 = (undefined4 *)param_2[1];
    if (0xffff < uVar9) {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar17 = *local_88;
    uVar21 = local_88[1];
    uVar31 = local_88[2];
    puVar12[3] = local_88[3];
    puVar12[2] = uVar31;
    *puVar12 = uVar17;
    puVar12[1] = uVar21;
    uVar17 = param_2[3];
    if (0x10 < uVar9) {
      uVar21 = local_88[5];
      uVar31 = local_88[6];
      uVar30 = local_88[7];
      *(uint *)(uVar17 + 0x10) = local_88[4];
      *(uint *)(uVar17 + 0x14) = uVar21;
      *(uint *)(uVar17 + 0x18) = uVar31;
      *(uint *)(uVar17 + 0x1c) = uVar30;
      if (0x10 < (int)(uVar9 - 0x10)) {
        puVar12 = local_88 + 0x10;
        puVar38 = (uint *)(uVar17 + 0x20);
        do {
          uVar21 = puVar12[-7];
          uVar31 = puVar12[-6];
          puVar39 = puVar38 + 8;
          uVar30 = puVar12[-5];
          *puVar38 = puVar12[-8];
          puVar38[1] = uVar21;
          puVar38[2] = uVar31;
          puVar38[3] = uVar30;
          uVar21 = puVar12[-3];
          uVar31 = puVar12[-2];
          uVar30 = puVar12[-1];
          puVar38[4] = puVar12[-4];
          puVar38[5] = uVar21;
          puVar38[6] = uVar31;
          puVar38[7] = uVar30;
          puVar12 = puVar12 + 8;
          puVar38 = puVar39;
        } while (puVar39 < (uint *)(uVar17 + uVar9));
      }
      goto LAB_017ac824;
    }
    param_2[3] = uVar17 + uVar9;
    puVar26 = (undefined4 *)param_2[1];
  }
  puVar38 = (uint *)&DAT_00000001;
  *(short *)(puVar26 + 1) = (short)uVar9;
  *puVar26 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar38 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(pcVar45 + 1);
  goto LAB_017abe98;
joined_r0x017ac25c:
  if ((uint *)((int)puVar32 + -3) <= puVar38) goto LAB_017acfc8;
  if (*puVar39 != *puVar38) {
    uVar9 = *puVar39 ^ *puVar38;
    bVar5 = (byte)uVar9;
    bVar6 = (byte)(uVar9 >> 8);
    bVar7 = (byte)(uVar9 >> 0x10);
    bVar1 = (byte)(uVar9 >> 0x18);
    pcVar13 = (char *)((int)puVar38 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar12));
    goto LAB_017ad008;
  }
  puVar38 = puVar38 + 1;
  puVar39 = puVar39 + 1;
  goto joined_r0x017ac25c;
LAB_017acfc8:
  if (puVar38 < (uint *)((int)puVar32 + -1)) {
    if ((short)*puVar39 == (short)*puVar38) {
      puVar38 = (uint *)((int)puVar38 + 2);
      puVar39 = (uint *)((int)puVar39 + 2);
    }
  }
  if ((puVar38 < puVar32) && ((char)*puVar39 == (char)*puVar38)) {
    puVar38 = (uint *)((int)puVar38 + 1);
  }
  pcVar13 = (char *)((int)puVar38 - (int)puVar12);
LAB_017ad008:
  pcVar13 = pcVar13 + 8;
  local_78 = (uint *)((int)puVar16 - (int)local_50);
  puVar12 = puVar16;
  if (local_88 < puVar16 && local_b0 < local_50) {
    do {
      local_50 = (uint *)((int)local_50 + -1);
      puVar16 = (uint *)((int)puVar12 + -1);
      if (*(char *)puVar16 != *(char *)local_50) {
        puVar16 = puVar12;
        break;
      }
      pcVar13 = pcVar13 + 1;
      puVar12 = puVar16;
    } while (local_88 < puVar16 && local_b0 < local_50);
  }
LAB_017ad068:
  if (local_54 < 4) {
    puVar44[uVar21] = (int)puVar29 - iVar22;
  }
  puVar12 = (uint *)param_2[3];
  uVar9 = (int)puVar16 - (int)local_88;
  if (puVar32 + -8 < puVar16) {
    FUN_017a4c40(puVar12,local_88,puVar16,puVar32 + -8);
LAB_017ad224:
    param_2[3] = param_2[3] + uVar9;
    puVar26 = (undefined4 *)param_2[1];
    puVar38 = param_2;
    if (0xffff < uVar9) {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar17 = *local_88;
    puVar38 = (uint *)local_88[1];
    uVar21 = local_88[3];
    puVar12[2] = local_88[2];
    puVar12[3] = uVar21;
    *puVar12 = uVar17;
    puVar12[1] = (uint)puVar38;
    uVar17 = param_2[3];
    if (0x10 < uVar9) {
      uVar21 = local_88[5];
      uVar31 = local_88[6];
      uVar30 = local_88[7];
      *(uint *)(uVar17 + 0x10) = local_88[4];
      *(uint *)(uVar17 + 0x14) = uVar21;
      *(uint *)(uVar17 + 0x18) = uVar31;
      *(uint *)(uVar17 + 0x1c) = uVar30;
      if (0x10 < (int)(uVar9 - 0x10)) {
        puVar12 = local_88 + 0x10;
        puVar38 = (uint *)(uVar17 + 0x20);
        do {
          uVar21 = puVar12[-7];
          uVar31 = puVar12[-6];
          puVar39 = puVar38 + 8;
          uVar30 = puVar12[-5];
          *puVar38 = puVar12[-8];
          puVar38[1] = uVar21;
          puVar38[2] = uVar31;
          puVar38[3] = uVar30;
          uVar21 = puVar12[-3];
          uVar31 = puVar12[-2];
          uVar30 = puVar12[-1];
          puVar38[4] = puVar12[-4];
          puVar38[5] = uVar21;
          puVar38[6] = uVar31;
          puVar38[7] = uVar30;
          puVar12 = puVar12 + 8;
          puVar38 = puVar39;
        } while (puVar39 < (uint *)(uVar17 + uVar9));
      }
      goto LAB_017ad224;
    }
    param_2[3] = uVar17 + uVar9;
    puVar26 = (undefined4 *)param_2[1];
  }
  *(short *)(puVar26 + 1) = (short)uVar9;
  *puVar26 = (char *)((int)local_78 + 3);
  if ((char *)0xffff < pcVar13 + -3) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar38 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(pcVar13 + -3);
  local_9c = local_90;
  local_90 = local_78;
LAB_017abe98:
  local_54 = puVar32 + -8;
  local_60 = (uint *)((int)puVar32 + -3);
  local_88 = (uint *)((int)puVar16 + (int)pcVar13);
  param_2[1] = (uint)(puVar26 + 2);
  if (local_88 <= puVar10) goto LAB_017ad708;
  puVar16 = local_88;
  goto LAB_017ab408;
LAB_017ad708:
  uVar37 = uVar37 + 2;
  uVar31 = *(uint *)(iVar22 + uVar37);
  iVar35 = *(int *)(iVar22 + uVar37 + 4);
  lVar3 = (ulonglong)*(uint *)((int)local_88 + -2) * 0xb7a56463;
  uVar17 = *(int *)((int)local_88 + 2) * -0x485a9b9d + *(uint *)((int)local_88 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  lVar4 = (ulonglong)*(uint *)((int)local_88 + -1) * 0xbfa56300;
  uVar21 = *(int *)((int)local_88 + 3) * -0x405a9d00 + *(uint *)((int)local_88 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar4 >> 0x20);
  uVar9 = iVar35 * -0x485a9b9d + uVar31 * -0x30e44324 +
          (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
  uVar30 = iVar35 * -0x405a9d00 + uVar31 * -0x30e44324 +
           (int)((ulonglong)uVar31 * 0xbfa56300 >> 0x20);
  puVar44[(uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff) |
          uVar9 >> (uVar27 & 0xff)] = uVar37;
  puVar44[(uint)lVar3 >> (uVar23 & 0xff) | uVar17 << (uVar24 & 0xff) | uVar17 >> (uVar27 & 0xff)] =
       (uint)((int)local_88 + (-2 - iVar22));
  *(uint *)(iVar36 + ((uint)((ulonglong)uVar31 * 0xbfa56300) >> (uVar46 & 0xff) |
                      uVar30 << (uVar18 & 0xff) | uVar30 >> (uVar20 & 0xff)) * 4) = uVar37;
  *(char **)(iVar36 + ((uint)lVar4 >> (uVar46 & 0xff) | uVar21 << (uVar18 & 0xff) |
                      uVar21 >> (uVar20 & 0xff)) * 4) = (char *)((int)local_88 + (-1 - iVar22));
  puVar38 = puVar44;
  while (puVar12 = local_9c,
        puVar12 != (uint *)0x0 && *(uint *)((int)local_88 - (int)puVar12) == *local_88) {
    puVar16 = local_88 + 1;
    puVar38 = (uint *)((int)local_88 + (4 - (int)puVar12));
    if (puVar16 < local_60) {
      uVar9 = *(uint *)((int)local_88 + (4 - (int)puVar12));
      if (uVar9 == local_88[1]) {
        puVar39 = local_88 + 2;
        while( true ) {
          puVar38 = puVar38 + 1;
          if (local_60 <= puVar39) break;
          if (*puVar38 != *puVar39) {
            uVar9 = *puVar38 ^ *puVar39;
            bVar5 = (byte)uVar9;
            bVar6 = (byte)(uVar9 >> 8);
            bVar7 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar45 = (char *)((int)puVar39 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar16));
            goto LAB_017add70;
          }
          puVar39 = puVar39 + 1;
        }
        goto LAB_017ae164;
      }
      uVar9 = uVar9 ^ local_88[1];
      bVar5 = (byte)uVar9;
      bVar6 = (byte)(uVar9 >> 8);
      bVar7 = (byte)(uVar9 >> 0x10);
      bVar1 = (byte)(uVar9 >> 0x18);
      pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                        bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1
                                                      | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                    | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar39 = puVar16;
LAB_017ae164:
      if (puVar39 < (uint *)((int)puVar32 + -1)) {
        if ((short)*puVar38 == (short)*puVar39) {
          puVar38 = (uint *)((int)puVar38 + 2);
          puVar39 = (uint *)((int)puVar39 + 2);
        }
      }
      if ((puVar39 < puVar32) && ((char)*puVar38 == (char)*puVar39)) {
        puVar39 = (uint *)((int)puVar39 + 1);
      }
      pcVar45 = (char *)((int)puVar39 - (int)puVar16);
    }
LAB_017add70:
    uVar17 = *local_88;
    puVar16 = (uint *)param_2[3];
    uVar21 = local_88[1] * -0x405a9d00 + uVar17 * -0x30e44324 +
             (int)((ulonglong)uVar17 * 0xbfa56300 >> 0x20);
    uVar9 = local_88[1] * -0x485a9b9d + uVar17 * -0x30e44324 +
            (int)((ulonglong)uVar17 * 0xb7a56463 >> 0x20);
    *(int *)(iVar36 + ((uint)((ulonglong)uVar17 * 0xbfa56300) >> (uVar46 & 0xff) |
                       uVar21 << (uVar18 & 0xff) | uVar21 >> (uVar20 & 0xff)) * 4) =
         (int)local_88 - iVar22;
    puVar44[(uint)((ulonglong)uVar17 * 0xb7a56463) >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff) |
            uVar9 >> (uVar27 & 0xff)] = (int)local_88 - iVar22;
    if (local_54 < local_88) {
      FUN_017a4c40(puVar16,local_88,local_88,local_54);
      puVar38 = extraout_r1_01;
    }
    else {
      puVar38 = (uint *)local_88[1];
      uVar9 = local_88[2];
      uVar17 = local_88[3];
      *puVar16 = *local_88;
      puVar16[1] = (uint)puVar38;
      puVar16[2] = uVar9;
      puVar16[3] = uVar17;
    }
    puVar26 = (undefined4 *)param_2[1];
    local_88 = (uint *)((int)local_88 + (int)(pcVar45 + 4));
    *(undefined2 *)(puVar26 + 1) = 0;
    *puVar26 = 1;
    uVar2 = SUB42(pcVar45 + 1,0);
    if (pcVar45 + 1 < (char *)0x10000) {
      *(undefined2 *)((int)puVar26 + 6) = uVar2;
      param_2[1] = (uint)(puVar26 + 2);
    }
    else {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 2;
      *(undefined2 *)((int)puVar26 + 6) = uVar2;
      param_2[1] = (uint)(puVar26 + 2);
    }
    if (puVar10 < local_88) {
      local_9c = local_90;
      local_90 = puVar12;
      goto LAB_017ad84c;
    }
    local_9c = local_90;
    local_90 = puVar12;
  }
  local_9c = puVar12;
LAB_017ad84c:
  puVar16 = local_88;
  goto LAB_017ab3f4;
  while( true ) {
    puVar25 = puVar25 + 1;
    puVar12 = puVar12 + 1;
    if (puVar38 <= puVar25) break;
LAB_017a5738:
    if (*puVar12 != *puVar25) {
      uVar9 = *puVar12 ^ *puVar25;
      bVar5 = (byte)uVar9;
      bVar6 = (byte)(uVar9 >> 8);
      bVar7 = (byte)(uVar9 >> 0x10);
      bVar1 = (byte)(uVar9 >> 0x18);
      pcVar45 = (char *)((int)puVar25 +
                        (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                         bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                       | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                     | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                         bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                       | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                     | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                         bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1
                                                       | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                     | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                        (int)puVar10));
      goto LAB_017a527c;
    }
  }
LAB_017a522c:
  if (puVar25 < (uint *)((int)puVar16 + -1)) {
    if ((short)*puVar12 == (short)*puVar25) {
      puVar12 = (uint *)((int)puVar12 + 2);
      puVar25 = (uint *)((int)puVar25 + 2);
    }
  }
  if ((puVar25 < puVar16) && ((char)*puVar12 == (char)*puVar25)) {
    puVar25 = (uint *)((int)puVar25 + 1);
  }
  pcVar45 = (char *)((int)puVar25 - (int)puVar10);
LAB_017a527c:
  puVar44 = (uint *)((int)puVar44 + 1);
  pcVar13 = pcVar45 + 4;
  puVar12 = (uint *)param_2[3];
  uVar9 = (int)puVar44 - (int)local_84;
  if (puVar16 + -8 < puVar44) {
    FUN_017a4c40(puVar12,local_84,puVar44,puVar16 + -8);
LAB_017a56d4:
    param_2[3] = param_2[3] + uVar9;
    puVar26 = (undefined4 *)param_2[1];
    if (0xffff < uVar9) {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar18 = *local_84;
    uVar20 = local_84[1];
    uVar21 = local_84[2];
    puVar12[3] = local_84[3];
    *puVar12 = uVar18;
    puVar12[1] = uVar20;
    puVar12[2] = uVar21;
    uVar18 = param_2[3];
    if (0x10 < uVar9) {
      uVar20 = local_84[5];
      uVar21 = local_84[6];
      uVar27 = local_84[7];
      *(uint *)(uVar18 + 0x10) = local_84[4];
      *(uint *)(uVar18 + 0x14) = uVar20;
      *(uint *)(uVar18 + 0x18) = uVar21;
      *(uint *)(uVar18 + 0x1c) = uVar27;
      if (0x10 < (int)(uVar9 - 0x10)) {
        puVar12 = (uint *)(uVar18 + 0x20);
        puVar38 = local_84 + 0x10;
        do {
          uVar20 = puVar38[-7];
          uVar21 = puVar38[-6];
          puVar10 = puVar12 + 8;
          uVar27 = puVar38[-5];
          *puVar12 = puVar38[-8];
          puVar12[1] = uVar20;
          puVar12[2] = uVar21;
          puVar12[3] = uVar27;
          uVar20 = puVar38[-3];
          uVar21 = puVar38[-2];
          uVar27 = puVar38[-1];
          puVar12[4] = puVar38[-4];
          puVar12[5] = uVar20;
          puVar12[6] = uVar21;
          puVar12[7] = uVar27;
          puVar12 = puVar10;
          puVar38 = puVar38 + 8;
        } while (puVar10 < (uint *)(uVar18 + uVar9));
      }
      goto LAB_017a56d4;
    }
    param_2[3] = uVar18 + uVar9;
    puVar26 = (undefined4 *)param_2[1];
  }
  puVar12 = (uint *)&DAT_00000001;
  *(short *)(puVar26 + 1) = (short)uVar9;
  *puVar26 = 1;
  if ((char *)0xffff < pcVar45 + 1) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar12 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(pcVar45 + 1);
  goto LAB_017a5334;
  while( true ) {
    puVar40 = puVar40 + 1;
    puVar29 = puVar29 + 1;
    if (puVar12 <= puVar40) break;
LAB_017a53f0:
    if (*puVar29 != *puVar40) {
      uVar18 = *puVar29 ^ *puVar40;
      bVar5 = (byte)uVar18;
      bVar6 = (byte)(uVar18 >> 8);
      bVar7 = (byte)(uVar18 >> 0x10);
      bVar1 = (byte)(uVar18 >> 0x18);
      pcVar13 = (char *)((int)puVar40 +
                        (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                         bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                       | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                     | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                         bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                       | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                     | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                         bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1
                                                       | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                     | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                        (int)puVar38));
      goto LAB_017a57ac;
    }
  }
LAB_017a576c:
  if (puVar40 < (uint *)((int)puVar16 + -1)) {
    if ((short)*puVar29 == (short)*puVar40) {
      puVar29 = (uint *)((int)puVar29 + 2);
      puVar40 = (uint *)((int)puVar40 + 2);
    }
  }
  if ((puVar40 < puVar16) && ((char)*puVar29 == (char)*puVar40)) {
    puVar40 = (uint *)((int)puVar40 + 1);
  }
  pcVar13 = (char *)((int)puVar40 - (int)puVar38);
LAB_017a57ac:
  pcVar13 = pcVar13 + 8;
  puVar38 = (uint *)((int)puVar44 - (int)puVar10);
  bVar48 = local_b0 <= puVar10;
  bVar47 = puVar10 == local_b0;
  if (bVar48 && !bVar47) {
    bVar48 = local_84 <= puVar44;
    bVar47 = puVar44 == local_84;
  }
  if (bVar48 && !bVar47) {
    do {
      puVar10 = (uint *)((int)puVar10 + -1);
      puVar12 = (uint *)((int)puVar44 + -1);
      if (*(char *)puVar12 != *(char *)puVar10) goto LAB_017a5514;
      pcVar13 = pcVar13 + 1;
      puVar44 = puVar12;
    } while (local_84 < puVar12 && local_b0 < puVar10);
LAB_017a5800:
    puVar44 = puVar12;
  }
LAB_017a5520:
  if (local_4c < 4) {
    *(int *)(iVar36 + uVar9 * 4) = (int)puVar25 - iVar43;
  }
  puVar10 = (uint *)param_2[3];
  uVar9 = (int)puVar44 - (int)local_84;
  if (puVar16 + -8 < puVar44) {
    FUN_017a4c40(puVar10,local_84,puVar44,puVar16 + -8);
LAB_017a58e0:
    param_2[3] = param_2[3] + uVar9;
    puVar26 = (undefined4 *)param_2[1];
    puVar12 = param_2;
    if (0xffff < uVar9) {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 1;
    }
  }
  else {
    uVar18 = *local_84;
    puVar12 = (uint *)local_84[1];
    uVar20 = local_84[2];
    puVar10[3] = local_84[3];
    *puVar10 = uVar18;
    puVar10[1] = (uint)puVar12;
    puVar10[2] = uVar20;
    uVar18 = param_2[3];
    if (0x10 < uVar9) {
      uVar20 = local_84[5];
      uVar21 = local_84[6];
      uVar27 = local_84[7];
      *(uint *)(uVar18 + 0x10) = local_84[4];
      *(uint *)(uVar18 + 0x14) = uVar20;
      *(uint *)(uVar18 + 0x18) = uVar21;
      *(uint *)(uVar18 + 0x1c) = uVar27;
      if (0x10 < (int)(uVar9 - 0x10)) {
        puVar12 = (uint *)(uVar18 + 0x20);
        puVar10 = local_84 + 0x10;
        do {
          uVar20 = puVar10[-7];
          uVar21 = puVar10[-6];
          puVar25 = puVar12 + 8;
          uVar27 = puVar10[-5];
          *puVar12 = puVar10[-8];
          puVar12[1] = uVar20;
          puVar12[2] = uVar21;
          puVar12[3] = uVar27;
          uVar20 = puVar10[-3];
          uVar21 = puVar10[-2];
          uVar27 = puVar10[-1];
          puVar12[4] = puVar10[-4];
          puVar12[5] = uVar20;
          puVar12[6] = uVar21;
          puVar12[7] = uVar27;
          puVar12 = puVar25;
          puVar10 = puVar10 + 8;
        } while (puVar25 < (uint *)(uVar18 + uVar9));
      }
      goto LAB_017a58e0;
    }
    param_2[3] = uVar18 + uVar9;
    puVar26 = (undefined4 *)param_2[1];
  }
  *puVar26 = (char *)((int)puVar38 + 3);
  *(short *)(puVar26 + 1) = (short)uVar9;
  if ((char *)0xffff < pcVar13 + -3) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar12 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(pcVar13 + -3);
  local_98 = local_80;
  local_80 = puVar38;
LAB_017a5334:
  local_4c = (uint *)((int)puVar16 + -3);
  local_5c = puVar16 + -8;
  puVar44 = (uint *)((int)puVar44 + (int)pcVar13);
  param_2[1] = (uint)(puVar26 + 2);
  if (puVar44 <= puVar32) goto LAB_017a5ab4;
  local_84 = puVar44;
  goto LAB_017a4fa8;
LAB_017a5514:
  goto LAB_017a5520;
LAB_017a5ab4:
  iVar41 = iVar41 + 2;
  lVar3 = (ulonglong)*(uint *)(iVar43 + iVar41) * 0xb7a56463;
  uVar9 = *(int *)(iVar43 + iVar41 + 4) * -0x485a9b9d + *(uint *)(iVar43 + iVar41) * -0x30e44324 +
          (int)((ulonglong)lVar3 >> 0x20);
  lVar4 = (ulonglong)*(uint *)((int)puVar44 + -2) * 0xb7a56463;
  uVar18 = *(int *)((int)puVar44 + 2) * -0x485a9b9d + *(uint *)((int)puVar44 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar4 >> 0x20);
  *(int *)(iVar36 + ((uint)lVar3 >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff) |
                    uVar9 >> (uVar46 & 0xff)) * 4) = iVar41;
  *(char **)(iVar36 + ((uint)lVar4 >> (uVar23 & 0xff) | uVar18 << (uVar24 & 0xff) |
                      uVar18 >> (uVar46 & 0xff)) * 4) = (char *)((int)puVar44 + (-2 - iVar43));
  *(int *)(iVar34 + ((uint)(*(int *)(iVar43 + iVar41) * -0x61c8864f) >> (uVar17 & 0xff)) * 4) =
       iVar41;
  *(int *)(iVar34 + ((uint)(*(int *)((int)puVar44 + -1) * -0x61c8864f) >> (uVar17 & 0xff)) * 4) =
       ((int)puVar44 + -1) - iVar43;
  while( true ) {
    puVar38 = local_98;
    puVar12 = (uint *)*puVar44;
    if (!(puVar38 != (uint *)0x0 && *(uint **)((int)puVar44 - (int)puVar38) == puVar12)) break;
    puVar25 = puVar44 + 1;
    puVar10 = (uint *)((int)puVar44 + (4 - (int)puVar38));
    if (puVar25 < local_4c) {
      uVar9 = *(uint *)((int)puVar44 + (4 - (int)puVar38));
      if (uVar9 == puVar44[1]) {
        puVar29 = puVar44 + 2;
        while( true ) {
          puVar10 = puVar10 + 1;
          if (local_4c <= puVar29) break;
          if (*puVar10 != *puVar29) {
            uVar9 = *puVar10 ^ *puVar29;
            bVar5 = (byte)uVar9;
            bVar6 = (byte)(uVar9 >> 8);
            bVar7 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar45 = (char *)((int)puVar29 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar25));
            goto LAB_017a5c44;
          }
          puVar29 = puVar29 + 1;
        }
        goto LAB_017a5dc4;
      }
      uVar9 = uVar9 ^ puVar44[1];
      bVar5 = (byte)uVar9;
      bVar6 = (byte)(uVar9 >> 8);
      bVar7 = (byte)(uVar9 >> 0x10);
      bVar1 = (byte)(uVar9 >> 0x18);
      pcVar45 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                        bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1
                                                      | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1
                                                    | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar29 = puVar25;
LAB_017a5dc4:
      if (puVar29 < (uint *)((int)puVar16 + -1)) {
        if ((short)*puVar10 == (short)*puVar29) {
          puVar10 = (uint *)((int)puVar10 + 2);
          puVar29 = (uint *)((int)puVar29 + 2);
        }
      }
      if ((puVar29 < puVar16) && ((char)*puVar10 == (char)*puVar29)) {
        puVar29 = (uint *)((int)puVar29 + 1);
      }
      pcVar45 = (char *)((int)puVar29 - (int)puVar25);
    }
LAB_017a5c44:
    puVar10 = (uint *)param_2[3];
    lVar3 = (ulonglong)*puVar44 * 0xb7a56463;
    uVar9 = puVar44[1] * -0x485a9b9d + *puVar44 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
    *(int *)(iVar34 + ((uint)((int)puVar12 * -0x61c8864f) >> (uVar17 & 0xff)) * 4) =
         (int)puVar44 - iVar43;
    *(int *)(iVar36 + ((uint)lVar3 >> (uVar23 & 0xff) | uVar9 << (uVar24 & 0xff) |
                      uVar9 >> (uVar46 & 0xff)) * 4) = (int)puVar44 - iVar43;
    if (local_5c < puVar44) {
      FUN_017a4c40(puVar10,puVar44,puVar44,local_5c);
      puVar12 = extraout_r1;
    }
    else {
      puVar12 = (uint *)puVar44[1];
      uVar9 = puVar44[2];
      uVar18 = puVar44[3];
      *puVar10 = *puVar44;
      puVar10[1] = (uint)puVar12;
      puVar10[2] = uVar9;
      puVar10[3] = uVar18;
    }
    puVar26 = (undefined4 *)param_2[1];
    puVar44 = (uint *)((int)puVar44 + (int)(pcVar45 + 4));
    *(undefined2 *)(puVar26 + 1) = 0;
    *puVar26 = 1;
    uVar2 = SUB42(pcVar45 + 1,0);
    if (pcVar45 + 1 < (char *)0x10000) {
      *(undefined2 *)((int)puVar26 + 6) = uVar2;
      param_2[1] = (uint)(puVar26 + 2);
    }
    else {
      param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
      param_2[9] = 2;
      *(undefined2 *)((int)puVar26 + 6) = uVar2;
      param_2[1] = (uint)(puVar26 + 2);
    }
    if (puVar32 < puVar44) {
      local_98 = local_80;
      local_80 = puVar38;
      goto LAB_017a5ba8;
    }
    local_98 = local_80;
    local_80 = puVar38;
  }
  local_98 = puVar38;
LAB_017a5ba8:
  local_84 = puVar44;
  goto LAB_017a4f98;
joined_r0x017ac338:
  if ((uint *)((int)puVar8 + -3) <= puVar32) goto LAB_017acd24;
  if (*puVar10 != *puVar32) {
    uVar23 = *puVar10 ^ *puVar32;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar32 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017acd64;
  }
  puVar32 = puVar32 + 1;
  puVar10 = puVar10 + 1;
  goto joined_r0x017ac338;
LAB_017acd24:
  if (puVar32 < (uint *)((int)puVar8 + -1)) {
    if ((short)*puVar10 == (short)*puVar32) {
      puVar32 = (uint *)((int)puVar32 + 2);
      puVar10 = (uint *)((int)puVar10 + 2);
    }
  }
  if ((puVar32 < puVar8) && ((char)*puVar10 == (char)*puVar32)) {
    puVar32 = (uint *)((int)puVar32 + 1);
  }
  pcVar13 = (char *)((int)puVar32 - (int)puVar38);
LAB_017acd64:
  local_5c = (uint *)(pcVar13 + 8);
  puVar38 = (uint *)((int)puVar12 - (int)local_50);
  bVar48 = param_4 <= puVar12;
  bVar47 = puVar12 == param_4;
  if (bVar48 && !bVar47) {
    bVar48 = local_b0 <= local_50;
    bVar47 = local_50 == local_b0;
  }
  if (bVar48 && !bVar47) {
    do {
      local_50 = (uint *)((int)local_50 + -1);
      puVar32 = (uint *)((int)puVar12 + -1);
      if (*(char *)puVar32 != *(char *)local_50) {
        goto LAB_017acdb8;
      }
      local_5c = (uint *)((int)local_5c + 1);
      puVar12 = puVar32;
    } while (param_4 < puVar32 && local_b0 < local_50);
    goto LAB_017acfb8;
  }
  goto LAB_017acdb8;
joined_r0x017ad3ec:
  if (puVar10 <= puVar25) goto LAB_017ac5a0;
  if (*puVar29 != *puVar25) {
    uVar23 = *puVar29 ^ *puVar25;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar25 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar38));
    goto LAB_017ac5f4;
  }
  puVar25 = puVar25 + 1;
  puVar29 = puVar29 + 1;
  goto joined_r0x017ad3ec;
LAB_017ac5a0:
  if (puVar25 < (uint *)((int)puVar8 + -1)) {
    if ((short)*puVar29 == (short)*puVar25) {
      puVar25 = (uint *)((int)puVar25 + 2);
      puVar29 = (uint *)((int)puVar29 + 2);
    }
  }
  if ((puVar25 < puVar8) && ((char)*puVar29 == (char)*puVar25)) {
    puVar25 = (uint *)((int)puVar25 + 1);
  }
  pcVar13 = (char *)((int)puVar25 - (int)puVar38);
LAB_017ac5f4:
  local_5c = (uint *)(pcVar13 + 4);
  puVar38 = (uint *)((int)puVar12 - (int)puVar32);
  bVar48 = param_4 <= puVar12;
  bVar47 = puVar12 == param_4;
  if (bVar48 && !bVar47) {
    bVar48 = local_b0 <= puVar32;
    bVar47 = puVar32 == local_b0;
  }
  if (bVar48 && !bVar47) {
    do {
      puVar32 = (uint *)((int)puVar32 + -1);
      puVar10 = (uint *)((int)puVar12 + -1);
      if (*(char *)puVar10 != *(char *)puVar32) {
        goto LAB_017acdb8;
      }
      local_5c = (uint *)((int)local_5c + 1);
      puVar12 = puVar10;
    } while (param_4 < puVar10 && local_b0 < puVar32);
  }
  goto LAB_017acdb8;
joined_r0x017ae00c:
  if (puVar10 <= puVar38) goto LAB_017adb2c;
  if (*puVar32 != *puVar38) {
    uVar23 = *puVar32 ^ *puVar38;
    bVar5 = (byte)uVar23;
    bVar6 = (byte)(uVar23 >> 8);
    bVar7 = (byte)(uVar23 >> 0x10);
    bVar1 = (byte)(uVar23 >> 0x18);
    pcVar13 = (char *)((int)puVar38 +
                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                       bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                     bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18 |
                                      (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                       bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                     bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                                      (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 |
                                                       bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1) << 1 |
                                                     bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                      (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                       bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                     bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                      (int)puVar12));
    goto LAB_017ad4c4;
  }
  puVar38 = puVar38 + 1;
  puVar32 = puVar32 + 1;
  goto joined_r0x017ae00c;
LAB_017adb2c:
  if (puVar38 < (uint *)((int)puVar8 + -1)) {
    if ((short)*puVar32 == (short)*puVar38) {
      puVar38 = (uint *)((int)puVar38 + 2);
      puVar32 = (uint *)((int)puVar32 + 2);
    }
  }
  if ((puVar38 < puVar8) && ((char)*puVar32 == (char)*puVar38)) {
    puVar38 = (uint *)((int)puVar38 + 1);
  }
  pcVar13 = (char *)((int)puVar38 - (int)puVar12);
LAB_017ad4c4:
  local_5c = (uint *)(pcVar13 + 8);
  puVar38 = (uint *)((int)puVar39 - (int)local_50);
  if (local_b0 < local_50 && param_4 < puVar39) {
    puVar12 = puVar39;
    do {
      local_50 = (uint *)((int)local_50 + -1);
      puVar32 = (uint *)((int)puVar12 + -1);
      if (*(char *)((int)puVar12 + -1) != *(char *)local_50) {
        goto LAB_017acdb8;
      }
      local_5c = (uint *)((int)local_5c + 1);
      puVar12 = puVar32;
    } while (param_4 < puVar32 && local_b0 < local_50);
LAB_017acfb8:
    local_50 = puVar38;
    puVar12 = puVar32;
    puVar38 = local_50;
  }
  else {
    puVar12 = puVar39;
  }
LAB_017acdb8:
  local_50 = puVar38;
  uVar23 = (int)puVar12 - (int)param_4;
  if (local_54 < 4) {
    *(int *)(iVar22 + uVar18 * 4) = (int)puVar39 - iVar43;
  }
  puVar32 = (uint *)param_2[3];
  if (puVar8 + -8 < puVar12) {
    FUN_017a4c40(puVar32,param_4,puVar12,puVar8 + -8);
  }
  else {
    uVar24 = *param_4;
    puVar38 = (uint *)param_4[1];
    uVar18 = param_4[2];
    puVar32[3] = param_4[3];
    puVar32[2] = uVar18;
    *puVar32 = uVar24;
    puVar32[1] = (uint)puVar38;
    uVar24 = param_2[3];
    if (uVar23 < 0x11) {
      param_2[3] = uVar24 + uVar23;
      puVar26 = (undefined4 *)param_2[1];
      goto LAB_017ace48;
    }
    uVar18 = param_4[5];
    uVar31 = param_4[6];
    uVar37 = param_4[7];
    *(uint *)(uVar24 + 0x10) = param_4[4];
    *(uint *)(uVar24 + 0x14) = uVar18;
    *(uint *)(uVar24 + 0x18) = uVar31;
    *(uint *)(uVar24 + 0x1c) = uVar37;
    if (0x10 < (int)(uVar23 - 0x10)) {
      puVar38 = param_4 + 0x10;
      puVar32 = (uint *)(uVar24 + 0x20);
      do {
        uVar18 = puVar38[-7];
        uVar31 = puVar38[-6];
        puVar10 = puVar32 + 8;
        uVar37 = puVar38[-5];
        *puVar32 = puVar38[-8];
        puVar32[1] = uVar18;
        puVar32[2] = uVar31;
        puVar32[3] = uVar37;
        uVar18 = puVar38[-3];
        uVar31 = puVar38[-2];
        uVar37 = puVar38[-1];
        puVar32[4] = puVar38[-4];
        puVar32[5] = uVar18;
        puVar32[6] = uVar31;
        puVar32[7] = uVar37;
        puVar38 = puVar38 + 8;
        puVar32 = puVar10;
      } while (puVar10 < (uint *)(uVar24 + uVar23));
    }
  }
  param_2[3] = param_2[3] + uVar23;
  puVar26 = (undefined4 *)param_2[1];
  puVar38 = param_2;
  if (0xffff < uVar23) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017ace48:
  *(short *)(puVar26 + 1) = (short)uVar23;
  *puVar26 = (char *)((int)local_50 + 3);
  if ((char *)0xffff < (char *)((int)local_5c + -3)) {
    param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
    puVar38 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar26 + 6) = (short)(char *)((int)local_5c + -3);
  local_9c = local_84;
  local_84 = local_50;
LAB_017abfbc:
  local_54 = puVar8 + -8;
  local_70 = (uint *)((int)puVar8 + -3);
  puVar12 = (uint *)((int)puVar12 + (int)local_5c);
  param_2[1] = (uint)(puVar26 + 2);
  if (puVar12 <= puVar44) {
    iVar41 = iVar41 + 2;
    uVar31 = *(uint *)(iVar43 + iVar41);
    iVar15 = *(int *)(iVar43 + iVar41 + 4);
    lVar3 = (ulonglong)*(uint *)((int)puVar12 + -2) * 0xb7a56463;
    uVar24 = *(int *)((int)puVar12 + 2) * -0x485a9b9d + *(uint *)((int)puVar12 + -2) * -0x30e44324 +
             (int)((ulonglong)lVar3 >> 0x20);
    lVar4 = (ulonglong)*(uint *)((int)puVar12 + -1) * 0xbb000000;
    uVar18 = *(int *)((int)puVar12 + 3) * -0x45000000 + *(uint *)((int)puVar12 + -1) * -0x30e44324 +
             (int)((ulonglong)lVar4 >> 0x20);
    uVar23 = iVar15 * -0x485a9b9d + uVar31 * -0x30e44324 +
             (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
    uVar37 = iVar15 * -0x45000000 + uVar31 * -0x30e44324 +
             (int)((ulonglong)uVar31 * 0xbb000000 >> 0x20);
    puVar38 = (uint *)((uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar20 & 0xff) |
                       uVar23 << (uVar21 & 0xff) | uVar23 >> (uVar27 & 0xff));
    *(int *)(iVar22 + (int)puVar38 * 4) = iVar41;
    *(char **)(iVar22 + ((uint)lVar3 >> (uVar20 & 0xff) | uVar24 << (uVar21 & 0xff) |
                        uVar24 >> (uVar27 & 0xff)) * 4) = (char *)((int)puVar12 + (-2 - iVar43));
    *(int *)(iVar34 + ((uint)((ulonglong)uVar31 * 0xbb000000) >> (uVar9 & 0xff) |
                       uVar37 << (uVar17 & 0xff) | uVar37 >> (uVar46 & 0xff)) * 4) = iVar41;
    *(char **)(iVar34 + ((uint)lVar4 >> (uVar9 & 0xff) | uVar18 << (uVar17 & 0xff) |
                        uVar18 >> (uVar46 & 0xff)) * 4) = (char *)((int)puVar12 + (-1 - iVar43));
    while (pcVar13 = (char *)local_9c,
          pcVar13 != (char *)0x0 && *(uint *)((int)puVar12 - (int)pcVar13) == *puVar12) {
      puVar32 = puVar12 + 1;
      puVar38 = (uint *)((int)puVar12 + (4 - (int)pcVar13));
      if (puVar32 < local_70) {
        uVar23 = *(uint *)((int)puVar12 + (4 - (int)pcVar13));
        if (uVar23 == puVar12[1]) {
          puVar10 = puVar12 + 2;
          while( true ) {
            puVar38 = puVar38 + 1;
            if (local_70 <= puVar10) break;
            if (*puVar38 != *puVar10) {
              uVar23 = *puVar38 ^ *puVar10;
              bVar5 = (byte)uVar23;
              bVar6 = (byte)(uVar23 >> 8);
              bVar7 = (byte)(uVar23 >> 0x10);
              bVar1 = (byte)(uVar23 >> 0x18);
              pcVar33 = (char *)((int)puVar10 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar32));
              goto LAB_017adc14;
            }
            puVar10 = puVar10 + 1;
          }
          goto LAB_017ae0e4;
        }
        uVar23 = uVar23 ^ puVar12[1];
        bVar5 = (byte)uVar23;
        bVar6 = (byte)(uVar23 >> 8);
        bVar7 = (byte)(uVar23 >> 0x10);
        bVar1 = (byte)(uVar23 >> 0x18);
        pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar10 = puVar32;
LAB_017ae0e4:
        if (puVar10 < (uint *)((int)puVar8 + -1)) {
          if ((short)*puVar38 == (short)*puVar10) {
            puVar38 = (uint *)((int)puVar38 + 2);
            puVar10 = (uint *)((int)puVar10 + 2);
          }
        }
        if ((puVar10 < puVar8) && ((char)*puVar38 == (char)*puVar10)) {
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        pcVar33 = (char *)((int)puVar10 - (int)puVar32);
      }
LAB_017adc14:
      uVar23 = *puVar12;
      puVar32 = (uint *)param_2[3];
      uVar18 = puVar12[1] * -0x45000000 + uVar23 * -0x30e44324 +
               (int)((ulonglong)uVar23 * 0xbb000000 >> 0x20);
      uVar24 = puVar12[1] * -0x485a9b9d + uVar23 * -0x30e44324 +
               (int)((ulonglong)uVar23 * 0xb7a56463 >> 0x20);
      *(int *)(iVar34 + ((uint)((ulonglong)uVar23 * 0xbb000000) >> (uVar9 & 0xff) |
                         uVar18 << (uVar17 & 0xff) | uVar18 >> (uVar46 & 0xff)) * 4) =
           (int)puVar12 - iVar43;
      *(int *)(iVar22 + ((uint)((ulonglong)uVar23 * 0xb7a56463) >> (uVar20 & 0xff) |
                         uVar24 << (uVar21 & 0xff) | uVar24 >> (uVar27 & 0xff)) * 4) =
           (int)puVar12 - iVar43;
      if (local_54 < puVar12) {
        FUN_017a4c40(puVar32,puVar12,puVar12,local_54);
        puVar38 = extraout_r1_02;
      }
      else {
        puVar38 = (uint *)puVar12[1];
        uVar23 = puVar12[2];
        uVar24 = puVar12[3];
        *puVar32 = *puVar12;
        puVar32[1] = (uint)puVar38;
        puVar32[2] = uVar23;
        puVar32[3] = uVar24;
      }
      puVar26 = (undefined4 *)param_2[1];
      puVar12 = (uint *)((int)puVar12 + (int)(pcVar33 + 4));
      *(undefined2 *)(puVar26 + 1) = 0;
      *puVar26 = 1;
      uVar2 = SUB42(pcVar33 + 1,0);
      if (pcVar33 + 1 < (char *)0x10000) {
        *(undefined2 *)((int)puVar26 + 6) = uVar2;
        param_2[1] = (uint)(puVar26 + 2);
      }
      else {
        param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
        param_2[9] = 2;
        *(undefined2 *)((int)puVar26 + 6) = uVar2;
        param_2[1] = (uint)(puVar26 + 2);
      }
      if (puVar44 < puVar12) {
        local_9c = local_84;
        local_84 = (uint *)pcVar13;
        goto LAB_017abfd8;
      }
      local_9c = local_84;
      local_84 = (uint *)pcVar13;
    }
    local_9c = (uint *)pcVar13;
  }
LAB_017abfd8:
  param_4 = puVar12;
  goto LAB_017abacc;
}

