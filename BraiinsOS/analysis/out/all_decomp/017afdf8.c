// FUN_017afdf8 @ 017afdf8 size=20564 calls_out=3 calls_in=0
// strings: 

void FUN_017afdf8(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  uint *puVar31;
  char *pcVar32;
  uint *puVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  int *piVar37;
  int iVar38;
  uint *puVar39;
  char *pcVar40;
  int iVar41;
  uint *puVar42;
  uint uVar43;
  uint *unaff_r8;
  uint *puVar44;
  int iVar45;
  uint *puVar46;
  uint *puVar47;
  uint *puVar48;
  uint *puVar49;
  bool bVar50;
  uint *local_78;
  uint *local_74;
  uint *local_6c;
  uint *local_5c;
  uint *local_58;
  char *local_54;
  
  uVar22 = DAT_018ddaf8;
  iVar38 = *(int *)(param_1 + 200);
  puVar11 = param_4;
  if (iVar38 == 6) {
    puVar10 = *(uint **)(param_1 + 4);
    puVar24 = (uint *)((int)param_4 + param_5);
    puVar23 = *(uint **)(param_1 + 0xc);
    puVar33 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    puVar44 = (uint *)((int)param_4 + ((param_5 - (int)puVar10) - (int)puVar23));
    bVar50 = puVar44 <= puVar33;
    if (!bVar50) {
      puVar33 = (uint *)((int)param_4 + ((param_5 - (int)puVar10) - (int)puVar33));
    }
    puVar17 = *(undefined4 **)(param_1 + 0xb4);
    if (!bVar50) {
      puVar44 = puVar33;
    }
    if (bVar50) {
      puVar44 = puVar23;
    }
    puVar34 = (uint *)*puVar17;
    puVar33 = (uint *)puVar17[1];
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar23 = puVar44;
    }
    puVar44 = (uint *)((int)puVar33 + puVar17[3]);
    puVar16 = (uint *)((int)puVar10 + (int)puVar23);
    local_5c = (uint *)*param_3;
    puVar31 = puVar24 + -2;
    local_78 = (uint *)param_3[1];
    iVar41 = puVar17[0x17];
    iVar38 = puVar17[0x19];
    uVar18 = puVar17[0x2f];
    uVar25 = puVar17[0x30];
    if (*(int *)(param_1 + 0xd8) != 0) {
      uVar8 = 4 << (uVar18 & 0xff);
      uVar13 = 4 << (uVar25 & 0xff);
      if (uVar13 != 0) {
        uVar12 = 0;
        do {
          HintPreloadData(iVar41 + uVar12);
          uVar12 = uVar12 + 0x40;
        } while (uVar12 < uVar13);
      }
      if (uVar8 != 0) {
        uVar13 = 0;
        do {
          HintPreloadData(iVar38 + uVar13);
          uVar13 = uVar13 + 0x40;
        } while (uVar13 < uVar8);
      }
    }
    puVar30 = param_4;
    if ((char *)((int)param_4 + (int)((int)puVar34 + (-(int)puVar44 - (int)puVar16))) == (char *)0x0
       ) {
      puVar30 = (uint *)((int)param_4 + 1);
    }
    puVar7 = puVar31;
    if (puVar30 < puVar31) {
      iVar14 = *(int *)(param_1 + 0xc0);
      iVar35 = *(int *)(param_1 + 0xbc);
      puVar48 = (uint *)((int)puVar34 - (int)puVar33);
      iVar45 = *(int *)(param_1 + 0x5c);
      puVar9 = *(uint **)(param_1 + 100);
      uVar27 = 0x40 - iVar14;
      puVar42 = (uint *)(0x40 - iVar35);
      uVar8 = iVar14 - 0x20;
      uVar13 = 0x20 - iVar14;
      uVar12 = iVar35 - 0x20;
      uVar26 = 0x20 - iVar35;
LAB_017b0760:
      puVar7 = local_5c;
      puVar49 = (uint *)*puVar30;
      uVar43 = (int)puVar30 - (int)puVar10;
      puVar47 = (uint *)((1 - (int)local_5c) + uVar43);
      puVar46 = (uint *)puVar30[1];
      if (puVar47 < puVar23) {
        unaff_r8 = puVar48;
      }
      uVar28 = (uint)(ZEXT48(puVar49) * 0xb7a56463);
      uVar19 = (int)puVar46 * -0x485a9b9d + (int)puVar49 * -0x30e44324 +
               (int)(ZEXT48(puVar49) * 0xb7a56463 >> 0x20);
      uVar15 = uVar28 >> (0x38 - uVar25 & 0xff) | uVar19 << (uVar25 - 0x18 & 0xff) |
               uVar19 >> (0x18 - uVar25 & 0xff);
      uVar29 = uVar28 >> (uVar27 & 0xff) | uVar19 << (uVar8 & 0xff) | uVar19 >> (uVar13 & 0xff);
      puVar20 = *(uint **)(iVar41 + (uVar15 >> 8) * 4);
      puVar21 = *(uint **)(iVar45 + uVar29 * 4);
      uVar28 = (uint)(ZEXT48(puVar49) * 0xbf9b0000);
      uVar36 = (int)puVar46 * -0x40650000 + (int)puVar49 * -0x30e44324 +
               (int)(ZEXT48(puVar49) * 0xbf9b0000 >> 0x20);
      uVar19 = uVar28 >> (0x38 - uVar18 & 0xff) | uVar36 << (uVar18 - 0x18 & 0xff) |
               uVar36 >> (0x18 - uVar18 & 0xff);
      uVar28 = uVar28 >> ((uint)puVar42 & 0xff) | uVar36 << (uVar12 & 0xff) |
               uVar36 >> (uVar26 & 0xff);
      uVar36 = *(uint *)(iVar38 + (uVar19 >> 8) * 4);
      puVar39 = (uint *)puVar9[uVar28];
      if (puVar47 < puVar23) {
        piVar37 = (int *)((int)puVar33 + (int)(((int)unaff_r8 - (int)puVar23) + (int)puVar47));
      }
      else {
        piVar37 = (int *)((int)puVar10 + (int)puVar47);
      }
      puVar9[uVar28] = uVar43;
      *(uint *)(iVar45 + uVar29 * 4) = uVar43;
      if ((2 < (uint)(((int)puVar23 + -1) - (int)puVar47)) &&
         (*piVar37 == *(int *)((int)puVar30 + 1))) {
        puVar46 = (uint *)((int)puVar30 + 5);
        if (puVar47 < puVar23) {
          puVar49 = puVar34;
        }
        else {
          puVar49 = puVar24;
        }
        puVar47 = (uint *)(piVar37 + 1);
        puVar20 = (uint *)((int)puVar46 + ((int)puVar49 - (int)puVar47));
        if (puVar24 < puVar20) {
          puVar20 = puVar24;
        }
        if (puVar46 < (uint *)((int)puVar20 + -3)) {
          if (piVar37[1] == *(uint *)((int)puVar30 + 5)) {
            puVar39 = (uint *)(piVar37 + 2);
            puVar21 = (uint *)((int)puVar30 + 9);
            while( true ) {
              if ((uint *)((int)puVar20 + -3) <= puVar21) break;
              if (*puVar39 != *puVar21) {
                uVar19 = *puVar39 ^ *puVar21;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar21 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar46));
                goto LAB_017b0ef0;
              }
              puVar39 = puVar39 + 1;
              puVar21 = puVar21 + 1;
            }
            goto LAB_017b1560;
          }
          uVar19 = piVar37[1] ^ *(uint *)((int)puVar30 + 5);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar21 = puVar46;
          puVar39 = puVar47;
LAB_017b1560:
          if (puVar21 < (uint *)((int)puVar20 + -1)) {
            if ((ushort)*puVar39 == (ushort)*puVar21) {
              puVar21 = (uint *)((int)puVar21 + 2);
              puVar39 = (uint *)((int)puVar39 + 2);
            }
          }
          if ((puVar21 < puVar20) && ((char)*puVar39 == (char)*puVar21)) {
            puVar21 = (uint *)((int)puVar21 + 1);
          }
          pcVar40 = (char *)((int)puVar21 - (int)puVar46);
        }
LAB_017b0ef0:
        if (puVar49 == (uint *)((int)puVar47 + (int)pcVar40)) {
          puVar20 = (uint *)((int)puVar46 + (int)pcVar40);
          puVar47 = puVar16;
          puVar49 = puVar20;
          if (puVar20 < (uint *)((int)puVar24 + -3)) {
            if (*puVar16 == *(uint *)((int)puVar46 + (int)pcVar40)) {
              do {
                puVar49 = puVar49 + 1;
                puVar47 = puVar47 + 1;
                if ((uint *)((int)puVar24 + -3) <= puVar49) goto LAB_017b1a74;
              } while (*puVar47 == *puVar49);
              uVar19 = *puVar47 ^ *puVar49;
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((int)puVar49 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar20));
            }
            else {
              uVar19 = *puVar16 ^ *(uint *)((int)puVar46 + (int)pcVar40);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
          }
          else {
LAB_017b1a74:
            if (puVar49 < (uint *)((int)puVar24 + -1)) {
              if ((ushort)*puVar47 == (ushort)*puVar49) {
                puVar47 = (uint *)((int)puVar47 + 2);
                puVar49 = (uint *)((int)puVar49 + 2);
              }
            }
            if ((puVar49 < puVar24) && ((char)*puVar47 == (char)*puVar49)) {
              puVar49 = (uint *)((int)puVar49 + 1);
            }
            pcVar32 = (char *)((int)puVar49 - (int)puVar20);
          }
          pcVar40 = pcVar40 + (int)pcVar32;
        }
        puVar30 = (uint *)((int)puVar30 + 1);
        uVar19 = (int)puVar30 - (int)puVar11;
        local_58 = (uint *)(pcVar40 + 4);
        puVar46 = (uint *)param_2[3];
        if (puVar24 + -8 < puVar30) {
          FUN_017a4c40(puVar46,puVar11,puVar30,puVar24 + -8);
LAB_017b1e04:
          param_2[3] = param_2[3] + uVar19;
          puVar17 = (undefined4 *)param_2[1];
          if (0xffff < uVar19) {
            param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar15 = *puVar11;
          uVar28 = puVar11[1];
          uVar29 = puVar11[2];
          puVar46[3] = puVar11[3];
          *puVar46 = uVar15;
          puVar46[1] = uVar28;
          puVar46[2] = uVar29;
          uVar15 = param_2[3];
          if (0x10 < uVar19) {
            uVar28 = puVar11[5];
            uVar29 = puVar11[6];
            uVar36 = puVar11[7];
            *(uint *)(uVar15 + 0x10) = puVar11[4];
            *(uint *)(uVar15 + 0x14) = uVar28;
            *(uint *)(uVar15 + 0x18) = uVar29;
            *(uint *)(uVar15 + 0x1c) = uVar36;
            if (0x10 < (int)(uVar19 - 0x10)) {
              puVar11 = puVar11 + 0x10;
              puVar46 = (uint *)(uVar15 + 0x20);
              do {
                uVar28 = puVar11[-7];
                uVar29 = puVar11[-6];
                puVar49 = puVar46 + 8;
                uVar36 = puVar11[-5];
                *puVar46 = puVar11[-8];
                puVar46[1] = uVar28;
                puVar46[2] = uVar29;
                puVar46[3] = uVar36;
                uVar28 = puVar11[-3];
                uVar29 = puVar11[-2];
                uVar36 = puVar11[-1];
                puVar46[4] = puVar11[-4];
                puVar46[5] = uVar28;
                puVar46[6] = uVar29;
                puVar46[7] = uVar36;
                puVar11 = puVar11 + 8;
                puVar46 = puVar49;
              } while (puVar49 < (uint *)(uVar15 + uVar19));
            }
            goto LAB_017b1e04;
          }
          param_2[3] = uVar15 + uVar19;
          puVar17 = (undefined4 *)param_2[1];
        }
        *(short *)(puVar17 + 1) = (short)uVar19;
        *puVar17 = 1;
        if ((char *)0xffff < pcVar40 + 1) {
          param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
        local_5c = local_78;
        local_78 = puVar7;
        goto LAB_017b0fc4;
      }
      if (puVar23 < puVar21) {
        puVar47 = (uint *)((int)puVar10 + (int)puVar21);
        puVar7 = *(uint **)((int)puVar10 + (int)puVar21);
        if (puVar46 != (uint *)puVar47[1] || puVar49 != puVar7) goto LAB_017b0724;
        puVar7 = puVar30 + 2;
        if (puVar7 < (uint *)((int)puVar24 + -3)) {
          if (puVar47[2] == puVar30[2]) {
            puVar49 = puVar47 + 3;
            for (puVar46 = puVar30 + 3; puVar46 < (uint *)((int)puVar24 + -3); puVar46 = puVar46 + 1
                ) {
              if (*puVar49 != *puVar46) {
                uVar19 = *puVar49 ^ *puVar46;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar46 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar7));
                goto LAB_017b1c20;
              }
              puVar49 = puVar49 + 1;
            }
            goto LAB_017b1bd0;
          }
          uVar19 = puVar47[2] ^ puVar30[2];
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar49 = puVar47 + 2;
          puVar46 = puVar7;
LAB_017b1bd0:
          if (puVar46 < (uint *)((int)puVar24 + -1)) {
            if ((ushort)*puVar49 == (ushort)*puVar46) {
              puVar49 = (uint *)((int)puVar49 + 2);
              puVar46 = (uint *)((int)puVar46 + 2);
            }
          }
          if ((puVar46 < puVar24) && ((char)*puVar49 == (char)*puVar46)) {
            puVar46 = (uint *)((int)puVar46 + 1);
          }
          pcVar40 = (char *)((int)puVar46 - (int)puVar7);
        }
LAB_017b1c20:
        local_58 = (uint *)(pcVar40 + 8);
        local_78 = (uint *)((int)puVar30 - (int)puVar47);
        if (puVar11 < puVar30 && puVar16 < puVar47) {
          do {
            puVar47 = (uint *)((int)puVar47 + -1);
            puVar7 = (uint *)((int)puVar30 + -1);
            if (*(char *)puVar7 != *(char *)puVar47) goto LAB_017b09a0;
            local_58 = (uint *)((int)local_58 + 1);
            puVar30 = puVar7;
          } while (puVar11 < puVar7 && puVar16 < puVar47);
LAB_017b1644:
          puVar30 = puVar7;
        }
        goto LAB_017b09a8;
      }
      puVar7 = (uint *)((uVar15 ^ (uint)puVar20) & 0xff);
      if (puVar7 == (uint *)0x0) {
        puVar47 = (uint *)((int)puVar33 + ((uint)puVar20 >> 8));
        puVar7 = puVar20;
        if ((puVar44 < puVar47) &&
           (puVar7 = (uint *)puVar47[1],
           puVar46 == puVar7 && puVar49 == *(uint **)((int)puVar33 + ((uint)puVar20 >> 8)))) {
          puVar46 = puVar47 + 2;
          puVar49 = puVar30 + 2;
          puVar7 = (uint *)((int)puVar49 + ((int)puVar34 - (int)puVar46));
          if (puVar24 < puVar7) {
            puVar7 = puVar24;
          }
          if (puVar49 < (uint *)((int)puVar7 + -3)) {
            if (puVar47[2] == puVar30[2]) {
              puVar39 = puVar47 + 3;
              puVar21 = puVar30 + 3;
              while( true ) {
                if ((uint *)((int)puVar7 + -3) <= puVar21) break;
                if (*puVar39 != *puVar21) {
                  uVar19 = *puVar39 ^ *puVar21;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar40 = (char *)((int)puVar21 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar49));
                  goto LAB_017b093c;
                }
                puVar39 = puVar39 + 1;
                puVar21 = puVar21 + 1;
              }
              goto LAB_017b2b44;
            }
            uVar19 = puVar47[2] ^ puVar30[2];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar21 = puVar49;
            puVar39 = puVar46;
LAB_017b2b44:
            if (puVar21 < (uint *)((int)puVar7 + -1)) {
              if ((ushort)*puVar39 == (ushort)*puVar21) {
                puVar21 = (uint *)((int)puVar21 + 2);
                puVar39 = (uint *)((int)puVar39 + 2);
              }
            }
            if ((puVar21 < puVar7) && ((char)*puVar39 == (char)*puVar21)) {
              puVar21 = (uint *)((int)puVar21 + 1);
            }
            pcVar40 = (char *)((int)puVar21 - (int)puVar49);
          }
LAB_017b093c:
          if (puVar34 == (uint *)((int)puVar46 + (int)pcVar40)) {
            puVar21 = (uint *)((int)puVar49 + (int)pcVar40);
            puVar7 = puVar21;
            puVar46 = puVar16;
            if (puVar21 < (uint *)((int)puVar24 + -3)) {
              if (*puVar16 == *(uint *)((int)puVar49 + (int)pcVar40)) {
                do {
                  puVar7 = puVar7 + 1;
                  puVar46 = puVar46 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar7) goto LAB_017b2edc;
                } while (*puVar46 == *puVar7);
                uVar19 = *puVar46 ^ *puVar7;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((int)puVar7 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar21));
              }
              else {
                uVar19 = *puVar16 ^ *(uint *)((int)puVar49 + (int)pcVar40);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017b2edc:
              if (puVar7 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar46 == (ushort)*puVar7) {
                  puVar7 = (uint *)((int)puVar7 + 2);
                  puVar46 = (uint *)((int)puVar46 + 2);
                }
              }
              if ((puVar7 < puVar24) && ((char)*puVar46 == (char)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pcVar32 = (char *)((int)puVar7 - (int)puVar21);
            }
            pcVar40 = pcVar40 + (int)pcVar32;
          }
          local_58 = (uint *)(pcVar40 + 8);
          local_78 = (uint *)((int)puVar48 + ((uVar43 - (int)puVar23) - ((uint)puVar20 >> 8)));
          if (puVar11 < puVar30) {
            do {
              puVar47 = (uint *)((int)puVar47 + -1);
              puVar7 = (uint *)((int)puVar30 + -1);
              if (*(char *)puVar7 != *(char *)puVar47) goto LAB_017b09a0;
              local_58 = (uint *)((int)local_58 + 1);
              puVar30 = puVar7;
            } while (puVar11 < puVar7 && puVar44 < puVar47);
            goto LAB_017b1644;
          }
          goto LAB_017b09a8;
        }
      }
LAB_017b0724:
      if (puVar23 < puVar39) {
        puVar46 = (uint *)((int)puVar10 + (int)puVar39);
        puVar7 = puVar10;
        if (*(uint *)((int)puVar10 + (int)puVar39) == *puVar30) {
LAB_017b0aa4:
          uVar19 = *(uint *)((int)puVar30 + 1);
          uVar29 = *(uint *)((int)puVar30 + 5);
          uVar15 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar36 = uVar29 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar28 = uVar15 >> (uVar27 & 0xff) | uVar36 << (uVar8 & 0xff) | uVar36 >> (uVar13 & 0xff);
          uVar15 = uVar15 >> (0x38 - uVar25 & 0xff) | uVar36 << (uVar25 - 0x18 & 0xff) |
                   uVar36 >> (0x18 - uVar25 & 0xff);
          uVar36 = *(uint *)(iVar41 + (uVar15 >> 8) * 4);
          puVar7 = *(uint **)(iVar45 + uVar28 * 4);
          *(uint *)(iVar45 + uVar28 * 4) = uVar43 + 1;
          if (puVar23 < puVar7) {
            puVar49 = (uint *)((int)puVar10 + (int)puVar7);
            if (uVar29 != puVar49[1] || uVar19 != *(uint *)((int)puVar10 + (int)puVar7))
            goto LAB_017b0b38;
            puVar7 = (uint *)((int)puVar30 + 9);
            if (puVar7 < (uint *)((int)puVar24 + -3)) {
              if (puVar49[2] == *(uint *)((int)puVar30 + 9)) {
                puVar47 = puVar49 + 3;
                for (puVar46 = (uint *)((int)puVar30 + 0xd); puVar46 < (uint *)((int)puVar24 + -3);
                    puVar46 = puVar46 + 1) {
                  if (*puVar47 != *puVar46) {
                    uVar19 = *puVar47 ^ *puVar46;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((int)puVar46 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar7));
                    goto LAB_017b2264;
                  }
                  puVar47 = puVar47 + 1;
                }
                goto LAB_017b2bfc;
              }
              uVar19 = puVar49[2] ^ *(uint *)((int)puVar30 + 9);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar47 = puVar49 + 2;
              puVar46 = puVar7;
LAB_017b2bfc:
              if (puVar46 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar47 == (ushort)*puVar46) {
                  puVar47 = (uint *)((int)puVar47 + 2);
                  puVar46 = (uint *)((int)puVar46 + 2);
                }
              }
              if ((puVar46 < puVar24) && ((char)*puVar47 == (char)*puVar46)) {
                puVar46 = (uint *)((int)puVar46 + 1);
              }
              pcVar40 = (char *)((int)puVar46 - (int)puVar7);
            }
LAB_017b2264:
            puVar46 = (uint *)((int)puVar30 + 1);
            local_58 = (uint *)(pcVar40 + 8);
            local_78 = (uint *)((int)puVar46 - (int)puVar49);
            if (puVar11 < puVar46 && puVar16 < puVar49) {
              do {
                puVar49 = (uint *)((int)puVar49 + -1);
                puVar7 = (uint *)((int)puVar46 + -1);
                if (*(char *)((int)puVar46 + -1) != *(char *)puVar49) {
                  puVar30 = puVar46;
                  goto LAB_017b09a8;
                }
                local_58 = (uint *)((int)local_58 + 1);
                puVar46 = puVar7;
              } while (puVar11 < puVar7 && puVar16 < puVar49);
              goto LAB_017b1644;
            }
LAB_017b3174:
            puVar30 = (uint *)((int)puVar30 + 1);
            goto LAB_017b09a8;
          }
          if (((uVar15 ^ uVar36) & 0xff) == 0) {
            puVar7 = (uint *)((int)puVar33 + (uVar36 >> 8));
            if ((puVar44 < puVar7) &&
               (uVar29 == puVar7[1] && uVar19 == *(uint *)((int)puVar33 + (uVar36 >> 8)))) {
              puVar49 = puVar7 + 2;
              puVar47 = (uint *)((int)puVar30 + 9);
              puVar46 = (uint *)((int)puVar47 + ((int)puVar34 - (int)puVar49));
              if (puVar24 < puVar46) {
                puVar46 = puVar24;
              }
              if (puVar47 < (uint *)((int)puVar46 + -3)) {
                if (puVar7[2] == *(uint *)((int)puVar30 + 9)) {
                  puVar21 = puVar7 + 3;
                  puVar20 = (uint *)((int)puVar30 + 0xd);
                  while( true ) {
                    if ((uint *)((int)puVar46 + -3) <= puVar20) break;
                    if (*puVar21 != *puVar20) {
                      uVar19 = *puVar21 ^ *puVar20;
                      bVar4 = (byte)uVar19;
                      bVar5 = (byte)(uVar19 >> 8);
                      bVar6 = (byte)(uVar19 >> 0x10);
                      bVar1 = (byte)(uVar19 >> 0x18);
                      pcVar40 = (char *)((int)puVar20 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                          bVar4 >> 1 & 1) << 1 |
                                                                         bVar4 >> 2 & 1) << 1 |
                                                                        bVar4 >> 3 & 1) << 1 |
                                                                       bVar4 >> 4 & 1) << 1 |
                                                                      bVar4 >> 5 & 1) << 1 |
                                                                     bVar4 >> 6 & 1) << 1 |
                                                                    bVar4 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                          bVar1 >> 1 & 1) << 1 |
                                                                         bVar1 >> 2 & 1) << 1 |
                                                                        bVar1 >> 3 & 1) << 1 |
                                                                       bVar1 >> 4 & 1) << 1 |
                                                                      bVar1 >> 5 & 1) << 1 |
                                                                     bVar1 >> 6 & 1) << 1 |
                                                                    bVar1 >> 7)) >> 3) -
                                        (int)puVar47));
                      goto LAB_017b0cf0;
                    }
                    puVar21 = puVar21 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  goto LAB_017b2f6c;
                }
                uVar19 = puVar7[2] ^ *(uint *)((int)puVar30 + 9);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
              else {
                puVar20 = puVar47;
                puVar21 = puVar49;
LAB_017b2f6c:
                if (puVar20 < (uint *)((int)puVar46 + -1)) {
                  if ((ushort)*puVar21 == (ushort)*puVar20) {
                    puVar20 = (uint *)((int)puVar20 + 2);
                    puVar21 = (uint *)((int)puVar21 + 2);
                  }
                }
                if ((puVar20 < puVar46) && ((char)*puVar21 == (char)*puVar20)) {
                  puVar20 = (uint *)((int)puVar20 + 1);
                }
                pcVar40 = (char *)((int)puVar20 - (int)puVar47);
              }
LAB_017b0cf0:
              if (puVar34 == (uint *)((int)puVar49 + (int)pcVar40)) {
                puVar20 = (uint *)((int)puVar47 + (int)pcVar40);
                puVar46 = puVar16;
                puVar49 = puVar20;
                if (puVar20 < (uint *)((int)puVar24 + -3)) {
                  if (*puVar16 == *(uint *)((int)puVar47 + (int)pcVar40)) {
                    do {
                      puVar49 = puVar49 + 1;
                      puVar46 = puVar46 + 1;
                      if ((uint *)((int)puVar24 + -3) <= puVar49) goto LAB_017b3274;
                    } while (*puVar46 == *puVar49);
                    uVar19 = *puVar46 ^ *puVar49;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar32 = (char *)((int)puVar49 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar20));
                  }
                  else {
                    uVar19 = *puVar16 ^ *(uint *)((int)puVar47 + (int)pcVar40);
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3);
                  }
                }
                else {
LAB_017b3274:
                  if ((puVar49 < (uint *)((int)puVar24 + -1)) &&
                     ((ushort)*puVar46 == (ushort)*puVar49)) {
                    puVar49 = (uint *)((int)puVar49 + 2);
                    puVar46 = (uint *)((int)puVar46 + 2);
                  }
                  if ((puVar49 < puVar24) && ((char)*puVar46 == (char)*puVar49)) {
                    puVar49 = (uint *)((int)puVar49 + 1);
                  }
                  pcVar32 = (char *)((int)puVar49 - (int)puVar20);
                }
                pcVar40 = pcVar40 + (int)pcVar32;
              }
              puVar46 = (uint *)((int)puVar30 + 1);
              local_58 = (uint *)(pcVar40 + 8);
              local_78 = (uint *)((int)puVar48 + ((uVar43 + (1 - (int)puVar23)) - (uVar36 >> 8)));
              if (puVar11 < puVar46) {
                do {
                  puVar7 = (uint *)((int)puVar7 + -1);
                  puVar30 = (uint *)((int)puVar46 + -1);
                  if (*(char *)((int)puVar46 + -1) != *(char *)puVar7) {
                    puVar30 = puVar46;
                    break;
                  }
                  local_58 = (uint *)((int)local_58 + 1);
                  puVar46 = puVar30;
                } while (puVar11 < puVar30 && puVar44 < puVar7);
                goto LAB_017b09a8;
              }
              goto LAB_017b3174;
            }
          }
LAB_017b0b38:
          puVar49 = puVar30 + 1;
          puVar7 = puVar46 + 1;
          if (puVar23 <= puVar39) {
            if (puVar49 < (uint *)((int)puVar24 + -3)) {
              if (puVar46[1] == puVar30[1]) {
                puVar7 = puVar46 + 2;
                for (puVar47 = puVar30 + 2; puVar47 < (uint *)((int)puVar24 + -3);
                    puVar47 = puVar47 + 1) {
                  if (*puVar7 != *puVar47) {
                    uVar19 = *puVar7 ^ *puVar47;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((int)puVar47 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar49));
                    goto LAB_017b1448;
                  }
                  puVar7 = puVar7 + 1;
                }
                goto LAB_017b13f8;
              }
              uVar19 = puVar46[1] ^ puVar30[1];
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar47 = puVar49;
LAB_017b13f8:
              if (puVar47 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar7 == (ushort)*puVar47) {
                  puVar47 = (uint *)((int)puVar47 + 2);
                  puVar7 = (uint *)((int)puVar7 + 2);
                }
              }
              if ((puVar47 < puVar24) && ((char)*puVar7 == (char)*puVar47)) {
                puVar47 = (uint *)((int)puVar47 + 1);
              }
              pcVar40 = (char *)((int)puVar47 - (int)puVar49);
            }
LAB_017b1448:
            local_58 = (uint *)(pcVar40 + 4);
            local_78 = (uint *)((int)puVar30 - (int)puVar46);
            if (puVar11 < puVar30 && puVar16 < puVar46) {
              do {
                puVar46 = (uint *)((int)puVar46 + -1);
                puVar7 = (uint *)((int)puVar30 + -1);
                if (*(char *)puVar7 != *(char *)puVar46) goto LAB_017b09a0;
                local_58 = (uint *)((int)local_58 + 1);
                puVar30 = puVar7;
              } while (puVar11 < puVar7 && puVar16 < puVar46);
              goto LAB_017b1644;
            }
            goto LAB_017b09a8;
          }
          puVar47 = (uint *)((int)puVar49 + ((int)puVar34 - (int)puVar7));
          if (puVar24 < puVar47) {
            puVar47 = puVar24;
          }
          if (puVar49 < (uint *)((int)puVar47 + -3)) {
            if (puVar46[1] == puVar30[1]) {
              puVar21 = puVar46 + 2;
              for (puVar20 = puVar30 + 2; puVar20 < (uint *)((int)puVar47 + -3);
                  puVar20 = puVar20 + 1) {
                if (*puVar21 != *puVar20) {
                  uVar19 = *puVar21 ^ *puVar20;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar40 = (char *)((int)puVar20 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar49));
                  goto LAB_017b0bc4;
                }
                puVar21 = puVar21 + 1;
              }
              goto LAB_017b0b78;
            }
            uVar19 = puVar46[1] ^ puVar30[1];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar20 = puVar49;
            puVar21 = puVar7;
LAB_017b0b78:
            if (puVar20 < (uint *)((int)puVar47 + -1)) {
              if ((ushort)*puVar21 == (ushort)*puVar20) {
                puVar20 = (uint *)((int)puVar20 + 2);
                puVar21 = (uint *)((int)puVar21 + 2);
              }
            }
            if ((puVar20 < puVar47) && ((char)*puVar21 == (char)*puVar20)) {
              puVar20 = (uint *)((int)puVar20 + 1);
            }
            pcVar40 = (char *)((int)puVar20 - (int)puVar49);
          }
LAB_017b0bc4:
          if (puVar34 == (uint *)((int)puVar7 + (int)pcVar40)) {
            puVar20 = (uint *)((int)puVar49 + (int)pcVar40);
            puVar7 = puVar20;
            puVar47 = puVar16;
            if (puVar20 < (uint *)((int)puVar24 + -3)) {
              if (*puVar16 == *(uint *)((int)puVar49 + (int)pcVar40)) {
                do {
                  puVar7 = puVar7 + 1;
                  puVar47 = puVar47 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar7) goto LAB_017b1ae8;
                } while (*puVar47 == *puVar7);
                uVar19 = *puVar47 ^ *puVar7;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((int)puVar7 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar20));
              }
              else {
                uVar19 = *puVar16 ^ *(uint *)((int)puVar49 + (int)pcVar40);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017b1ae8:
              if (puVar7 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar47 == (ushort)*puVar7) {
                  puVar7 = (uint *)((int)puVar7 + 2);
                  puVar47 = (uint *)((int)puVar47 + 2);
                }
              }
              if ((puVar7 < puVar24) && ((char)*puVar47 == (char)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pcVar32 = (char *)((int)puVar7 - (int)puVar20);
            }
            pcVar40 = pcVar40 + (int)pcVar32;
          }
          local_78 = (uint *)(uVar43 - (int)puVar39);
          local_58 = (uint *)(pcVar40 + 4);
          if (puVar11 < puVar30 && puVar44 < puVar46) {
            do {
              puVar46 = (uint *)((int)puVar46 + -1);
              puVar7 = (uint *)((int)puVar30 + -1);
              if (*(char *)puVar7 != *(char *)puVar46) goto LAB_017b09a0;
              local_58 = (uint *)((int)local_58 + 1);
              puVar30 = puVar7;
            } while (puVar11 < puVar7 && puVar44 < puVar46);
            goto LAB_017b1644;
          }
          goto LAB_017b09a8;
        }
      }
      else if (((uVar19 ^ uVar36) & 0xff) == 0) {
        puVar46 = (uint *)((int)puVar33 + (uVar36 >> 8));
        puVar7 = puVar33;
        if ((puVar44 < puVar46) &&
           (puVar7 = *(uint **)((int)puVar33 + (uVar36 >> 8)), puVar7 == (uint *)*puVar30)) {
          puVar39 = (uint *)((int)puVar23 + ((uVar36 >> 8) - (int)puVar48));
          goto LAB_017b0aa4;
        }
      }
      puVar30 = (uint *)((int)puVar30 + ((int)puVar30 - (int)puVar11 >> 8) + 1);
      unaff_r8 = puVar9;
      goto LAB_017b0754;
    }
  }
  else {
    if (iVar38 != 7) {
      if (iVar38 != 5) {
        FUN_017a5eb8();
        return;
      }
      puVar33 = *(uint **)(param_1 + 4);
      puVar11 = *(uint **)(param_1 + 0xc);
      puVar44 = (uint *)((int)param_4 + param_5);
      pcVar40 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
      bVar50 = pcVar40 < (char *)((int)param_4 + ((param_5 - (int)puVar33) - (int)puVar11));
      if (bVar50) {
        unaff_r8 = (uint *)((int)param_4 + ((param_5 - (int)puVar33) - (int)pcVar40));
      }
      puVar17 = *(undefined4 **)(param_1 + 0xb4);
      if (!bVar50) {
        unaff_r8 = puVar11;
      }
      puVar23 = (uint *)puVar17[1];
      if (*(int *)(param_1 + 0x18) != 0) {
        unaff_r8 = puVar11;
      }
      puVar34 = (uint *)*puVar17;
      puVar11 = (uint *)((int)puVar23 + puVar17[3]);
      iVar41 = puVar17[0x17];
      puVar24 = (uint *)((int)puVar33 + (int)unaff_r8);
      local_58 = (uint *)*param_3;
      puVar10 = puVar44 + -2;
      local_74 = (uint *)param_3[1];
      iVar38 = puVar17[0x19];
      uVar18 = puVar17[0x2f];
      uVar25 = puVar17[0x30];
      if (*(int *)(param_1 + 0xd8) != 0) {
        uVar8 = 4 << (uVar18 & 0xff);
        uVar13 = 4 << (uVar25 & 0xff);
        if (uVar13 != 0) {
          uVar12 = 0;
          do {
            HintPreloadData(iVar41 + uVar12);
            uVar12 = uVar12 + 0x40;
          } while (uVar12 < uVar13);
        }
        if (uVar8 != 0) {
          uVar13 = 0;
          do {
            HintPreloadData(iVar38 + uVar13);
            uVar13 = uVar13 + 0x40;
          } while (uVar13 < uVar8);
        }
      }
      puVar31 = param_4;
      if ((char *)((int)param_4 + (int)((int)puVar34 + (-(int)puVar11 - (int)puVar24))) ==
          (char *)0x0) {
        puVar31 = (uint *)((int)param_4 + 1);
      }
      puVar16 = puVar10;
      if (puVar10 <= puVar31) {
LAB_017a8bec:
        puVar7 = puVar16;
        puVar11 = local_74;
        local_74 = local_58;
        local_58 = puVar11;
LAB_017a82e4:
        *param_3 = local_74;
        param_3[1] = local_58;
        uVar22 = uVar22 ^ DAT_018ddaf8;
        if (uVar22 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78((int)puVar44 - (int)param_4,puVar7,uVar22,0);
        }
        return;
      }
      iVar45 = *(int *)(param_1 + 0xc0);
      iVar14 = *(int *)(param_1 + 0xbc);
      puVar48 = (uint *)((int)puVar34 - (int)puVar23);
      iVar35 = *(int *)(param_1 + 0x5c);
      puVar7 = *(uint **)(param_1 + 100);
      uVar8 = 0x40 - iVar45;
      puVar9 = (uint *)(0x40 - iVar14);
      uVar13 = iVar45 - 0x20;
      uVar12 = 0x20 - iVar45;
      uVar26 = iVar14 - 0x20;
      uVar27 = 0x20 - iVar14;
      puVar30 = unaff_r8;
LAB_017a7b80:
      puVar16 = local_58;
      puVar46 = (uint *)*puVar31;
      uVar43 = (int)puVar31 - (int)puVar33;
      puVar49 = (uint *)((1 - (int)local_58) + uVar43);
      puVar42 = (uint *)puVar31[1];
      if (puVar49 < unaff_r8) {
        puVar30 = puVar48;
      }
      uVar28 = (uint)(ZEXT48(puVar46) * 0xb7a56463);
      uVar19 = (int)puVar42 * -0x485a9b9d + (int)puVar46 * -0x30e44324 +
               (int)(ZEXT48(puVar46) * 0xb7a56463 >> 0x20);
      uVar15 = uVar28 >> (0x38 - uVar25 & 0xff) | uVar19 << (uVar25 - 0x18 & 0xff) |
               uVar19 >> (0x18 - uVar25 & 0xff);
      uVar29 = uVar28 >> (uVar8 & 0xff) | uVar19 << (uVar13 & 0xff) | uVar19 >> (uVar12 & 0xff);
      puVar20 = *(uint **)(iVar41 + (uVar15 >> 8) * 4);
      puVar21 = *(uint **)(iVar35 + uVar29 * 4);
      uVar28 = (uint)(ZEXT48(puVar46) * 0xbb000000);
      uVar36 = (int)puVar42 * -0x45000000 + (int)puVar46 * -0x30e44324 +
               (int)(ZEXT48(puVar46) * 0xbb000000 >> 0x20);
      uVar19 = uVar28 >> (0x38 - uVar18 & 0xff) | uVar36 << (uVar18 - 0x18 & 0xff) |
               uVar36 >> (0x18 - uVar18 & 0xff);
      uVar28 = uVar28 >> ((uint)puVar9 & 0xff) | uVar36 << (uVar26 & 0xff) |
               uVar36 >> (uVar27 & 0xff);
      puVar47 = (uint *)(uVar19 >> 8);
      uVar36 = *(uint *)(iVar38 + (int)puVar47 * 4);
      if (puVar49 < unaff_r8) {
        puVar47 = unaff_r8;
      }
      puVar39 = (uint *)puVar7[uVar28];
      if (puVar49 < unaff_r8) {
        piVar37 = (int *)((int)puVar23 + (int)(((int)puVar30 - (int)puVar47) + (int)puVar49));
      }
      else {
        piVar37 = (int *)((int)puVar33 + (int)puVar49);
      }
      puVar7[uVar28] = uVar43;
      *(uint *)(iVar35 + uVar29 * 4) = uVar43;
      if ((2 < (uint)(((int)unaff_r8 + -1) - (int)puVar49)) &&
         (*piVar37 == *(int *)((int)puVar31 + 1))) {
        puVar30 = (uint *)((int)puVar31 + 5);
        if (puVar49 < unaff_r8) {
          puVar42 = puVar34;
        }
        else {
          puVar42 = puVar44;
        }
        puVar46 = (uint *)(piVar37 + 1);
        puVar49 = (uint *)((int)puVar30 + ((int)puVar42 - (int)puVar46));
        if (puVar44 < puVar49) {
          puVar49 = puVar44;
        }
        if (puVar30 < (uint *)((int)puVar49 + -3)) {
          if (piVar37[1] == *(uint *)((int)puVar31 + 5)) {
            puVar20 = (uint *)(piVar37 + 2);
            for (puVar47 = (uint *)((int)puVar31 + 9); puVar47 < (uint *)((int)puVar49 + -3);
                puVar47 = puVar47 + 1) {
              if (*puVar20 != *puVar47) {
                uVar19 = *puVar20 ^ *puVar47;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar47 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar30));
                goto joined_r0x017a8420;
              }
              puVar20 = puVar20 + 1;
            }
            goto LAB_017a81a8;
          }
          uVar19 = piVar37[1] ^ *(uint *)((int)puVar31 + 5);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar47 = puVar30;
          puVar20 = puVar46;
LAB_017a81a8:
          if (puVar47 < (uint *)((int)puVar49 + -1)) {
            if ((ushort)*puVar20 == (ushort)*puVar47) {
              puVar47 = (uint *)((int)puVar47 + 2);
              puVar20 = (uint *)((int)puVar20 + 2);
            }
          }
          if ((puVar47 < puVar49) && ((char)*puVar20 == (char)*puVar47)) {
            puVar47 = (uint *)((int)puVar47 + 1);
          }
          pcVar40 = (char *)((int)puVar47 - (int)puVar30);
        }
joined_r0x017a8420:
        if (puVar42 == (uint *)((int)puVar46 + (int)pcVar40)) {
          puVar49 = (uint *)((int)puVar30 + (int)pcVar40);
          puVar46 = puVar24;
          puVar42 = puVar49;
          if (puVar49 < (uint *)((int)puVar44 + -3)) {
            if (*puVar24 == *(uint *)((int)puVar30 + (int)pcVar40)) {
              do {
                puVar42 = puVar42 + 1;
                puVar46 = puVar46 + 1;
                if ((uint *)((int)puVar44 + -3) <= puVar42) goto LAB_017a8440;
              } while (*puVar46 == *puVar42);
              uVar19 = *puVar46 ^ *puVar42;
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((int)puVar42 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar49));
            }
            else {
              uVar19 = *puVar24 ^ *(uint *)((int)puVar30 + (int)pcVar40);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
          }
          else {
LAB_017a8440:
            if (puVar42 < (uint *)((int)puVar44 + -1)) {
              if ((ushort)*puVar46 == (ushort)*puVar42) {
                puVar46 = (uint *)((int)puVar46 + 2);
                puVar42 = (uint *)((int)puVar42 + 2);
              }
            }
            if ((puVar42 < puVar44) && ((char)*puVar46 == (char)*puVar42)) {
              puVar42 = (uint *)((int)puVar42 + 1);
            }
            pcVar32 = (char *)((int)puVar42 - (int)puVar49);
          }
          pcVar40 = pcVar40 + (int)pcVar32;
        }
        puVar31 = (uint *)((int)puVar31 + 1);
        uVar19 = (int)puVar31 - (int)param_4;
        local_54 = pcVar40 + 4;
        puVar30 = (uint *)param_2[3];
        if (puVar44 + -8 < puVar31) {
          FUN_017a4c40(puVar30,param_4,puVar31,puVar44 + -8);
LAB_017a89b8:
          param_2[3] = param_2[3] + uVar19;
          puVar17 = (undefined4 *)param_2[1];
          if (0xffff < uVar19) {
            param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar15 = *param_4;
          uVar28 = param_4[1];
          uVar29 = param_4[2];
          puVar30[3] = param_4[3];
          *puVar30 = uVar15;
          puVar30[1] = uVar28;
          puVar30[2] = uVar29;
          uVar15 = param_2[3];
          if (0x10 < uVar19) {
            uVar28 = param_4[5];
            uVar29 = param_4[6];
            uVar36 = param_4[7];
            *(uint *)(uVar15 + 0x10) = param_4[4];
            *(uint *)(uVar15 + 0x14) = uVar28;
            *(uint *)(uVar15 + 0x18) = uVar29;
            *(uint *)(uVar15 + 0x1c) = uVar36;
            if (0x10 < (int)(uVar19 - 0x10)) {
              puVar30 = param_4 + 0x10;
              puVar42 = (uint *)(uVar15 + 0x20);
              do {
                uVar28 = puVar30[-7];
                uVar29 = puVar30[-6];
                puVar46 = puVar42 + 8;
                uVar36 = puVar30[-5];
                *puVar42 = puVar30[-8];
                puVar42[1] = uVar28;
                puVar42[2] = uVar29;
                puVar42[3] = uVar36;
                uVar28 = puVar30[-3];
                uVar29 = puVar30[-2];
                uVar36 = puVar30[-1];
                puVar42[4] = puVar30[-4];
                puVar42[5] = uVar28;
                puVar42[6] = uVar29;
                puVar42[7] = uVar36;
                puVar30 = puVar30 + 8;
                puVar42 = puVar46;
              } while (puVar46 < (uint *)(uVar15 + uVar19));
            }
            goto LAB_017a89b8;
          }
          param_2[3] = uVar15 + uVar19;
          puVar17 = (undefined4 *)param_2[1];
        }
        *(short *)(puVar17 + 1) = (short)uVar19;
        *puVar17 = 1;
        if ((char *)0xffff < pcVar40 + 1) {
          param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
        local_58 = local_74;
        local_74 = puVar16;
        goto LAB_017a82c4;
      }
      if (unaff_r8 < puVar21) {
        puVar30 = (uint *)((int)puVar33 + (int)puVar21);
        puVar16 = *(uint **)((int)puVar33 + (int)puVar21);
        if (puVar42 != (uint *)puVar30[1] || puVar46 != puVar16) goto LAB_017a7b44;
        puVar16 = puVar31 + 2;
        if (puVar16 < (uint *)((int)puVar44 + -3)) {
          if (puVar30[2] == puVar31[2]) {
            puVar46 = puVar30 + 3;
            for (puVar42 = puVar31 + 3; puVar42 < (uint *)((int)puVar44 + -3); puVar42 = puVar42 + 1
                ) {
              if (*puVar46 != *puVar42) {
                uVar19 = *puVar46 ^ *puVar42;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                local_54 = (char *)((int)puVar42 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                     bVar4 >> 1 & 1) << 1 |
                                                                    bVar4 >> 2 & 1) << 1 |
                                                                   bVar4 >> 3 & 1) << 1 |
                                                                  bVar4 >> 4 & 1) << 1 |
                                                                 bVar4 >> 5 & 1) << 1 |
                                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                               bVar5 >> 1 & 1) << 1
                                                                              | bVar5 >> 2 & 1) << 1
                                                                             | bVar5 >> 3 & 1) << 1
                                                                            | bVar5 >> 4 & 1) << 1 |
                                                                           bVar5 >> 5 & 1) << 1 |
                                                                          bVar5 >> 6 & 1) << 1 |
                                                                         bVar5 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                     bVar6 >> 1 & 1) << 1 |
                                                                    bVar6 >> 2 & 1) << 1 |
                                                                   bVar6 >> 3 & 1) << 1 |
                                                                  bVar6 >> 4 & 1) << 1 |
                                                                 bVar6 >> 5 & 1) << 1 |
                                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                   (int)puVar16));
                goto LAB_017a8890;
              }
              puVar46 = puVar46 + 1;
            }
            goto LAB_017a8840;
          }
          uVar19 = puVar30[2] ^ puVar31[2];
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar46 = puVar30 + 2;
          puVar42 = puVar16;
LAB_017a8840:
          if (puVar42 < (uint *)((int)puVar44 + -1)) {
            if ((ushort)*puVar46 == (ushort)*puVar42) {
              puVar46 = (uint *)((int)puVar46 + 2);
              puVar42 = (uint *)((int)puVar42 + 2);
            }
          }
          if ((puVar42 < puVar44) && ((char)*puVar46 == (char)*puVar42)) {
            puVar42 = (uint *)((int)puVar42 + 1);
          }
          local_54 = (char *)((int)puVar42 - (int)puVar16);
        }
LAB_017a8890:
        local_54 = local_54 + 8;
        local_74 = (uint *)((int)puVar31 - (int)puVar30);
        if (param_4 < puVar31 && puVar24 < puVar30) {
          do {
            puVar30 = (uint *)((int)puVar30 + -1);
            puVar16 = (uint *)((int)puVar31 + -1);
            if (*(char *)puVar16 != *(char *)puVar30) goto LAB_017a7df8;
            local_54 = local_54 + 1;
            puVar31 = puVar16;
          } while (param_4 < puVar16 && puVar24 < puVar30);
LAB_017a8590:
          puVar31 = puVar16;
        }
        goto LAB_017a7e00;
      }
      puVar16 = (uint *)((uVar15 ^ (uint)puVar20) & 0xff);
      if (puVar16 == (uint *)0x0) {
        puVar30 = (uint *)((int)puVar23 + ((uint)puVar20 >> 8));
        puVar16 = puVar20;
        if ((puVar11 < puVar30) &&
           (puVar16 = (uint *)puVar30[1],
           puVar42 == puVar16 && puVar46 == *(uint **)((int)puVar23 + ((uint)puVar20 >> 8)))) {
          puVar42 = puVar30 + 2;
          puVar46 = puVar31 + 2;
          puVar16 = (uint *)((int)puVar46 + ((int)puVar34 - (int)puVar42));
          if (puVar44 < puVar16) {
            puVar16 = puVar44;
          }
          if (puVar46 < (uint *)((int)puVar16 + -3)) {
            if (puVar30[2] == puVar31[2]) {
              puVar47 = puVar30 + 3;
              for (puVar49 = puVar31 + 3; puVar49 < (uint *)((int)puVar16 + -3);
                  puVar49 = puVar49 + 1) {
                if (*puVar47 != *puVar49) {
                  uVar19 = *puVar47 ^ *puVar49;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  local_54 = (char *)((int)puVar49 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3) -
                                     (int)puVar46));
                  goto LAB_017a7d94;
                }
                puVar47 = puVar47 + 1;
              }
              goto LAB_017a7d44;
            }
            uVar19 = puVar30[2] ^ puVar31[2];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
            ;
          }
          else {
            puVar49 = puVar46;
            puVar47 = puVar42;
LAB_017a7d44:
            if (puVar49 < (uint *)((int)puVar16 + -1)) {
              if ((ushort)*puVar47 == (ushort)*puVar49) {
                puVar49 = (uint *)((int)puVar49 + 2);
                puVar47 = (uint *)((int)puVar47 + 2);
              }
            }
            if ((puVar49 < puVar16) && ((char)*puVar47 == (char)*puVar49)) {
              puVar49 = (uint *)((int)puVar49 + 1);
            }
            local_54 = (char *)((int)puVar49 - (int)puVar46);
          }
LAB_017a7d94:
          if (puVar34 == (uint *)((int)puVar42 + (int)local_54)) {
            puVar49 = (uint *)((int)puVar46 + (int)local_54);
            puVar16 = puVar49;
            puVar42 = puVar24;
            if (puVar49 < (uint *)((int)puVar44 + -3)) {
              if (*puVar24 == *(uint *)((int)puVar46 + (int)local_54)) {
                do {
                  puVar16 = puVar16 + 1;
                  puVar42 = puVar42 + 1;
                  if ((uint *)((int)puVar44 + -3) <= puVar16) goto LAB_017a9174;
                } while (*puVar42 == *puVar16);
                uVar19 = *puVar42 ^ *puVar16;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar16 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar49));
              }
              else {
                uVar19 = *puVar24 ^ *(uint *)((int)puVar46 + (int)local_54);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017a9174:
              if (puVar16 < (uint *)((int)puVar44 + -1)) {
                if ((ushort)*puVar42 == (ushort)*puVar16) {
                  puVar16 = (uint *)((int)puVar16 + 2);
                  puVar42 = (uint *)((int)puVar42 + 2);
                }
              }
              if ((puVar16 < puVar44) && ((char)*puVar42 == (char)*puVar16)) {
                puVar16 = (uint *)((int)puVar16 + 1);
              }
              pcVar40 = (char *)((int)puVar16 - (int)puVar49);
            }
            local_54 = local_54 + (int)pcVar40;
          }
          local_54 = local_54 + 8;
          local_74 = (uint *)((int)puVar48 + ((uVar43 - (int)unaff_r8) - ((uint)puVar20 >> 8)));
          if (param_4 < puVar31) {
            do {
              puVar30 = (uint *)((int)puVar30 + -1);
              puVar16 = (uint *)((int)puVar31 + -1);
              if (*(char *)puVar16 != *(char *)puVar30) goto LAB_017a7df8;
              local_54 = local_54 + 1;
              puVar31 = puVar16;
            } while (param_4 < puVar16 && puVar11 < puVar30);
            goto LAB_017a8590;
          }
          goto LAB_017a7e00;
        }
      }
LAB_017a7b44:
      if (unaff_r8 < puVar39) {
        puVar30 = (uint *)((int)puVar33 + (int)puVar39);
        puVar16 = puVar33;
        if (*(uint *)((int)puVar33 + (int)puVar39) == *puVar31) {
LAB_017a7efc:
          uVar19 = *(uint *)((int)puVar31 + 1);
          uVar29 = *(uint *)((int)puVar31 + 5);
          uVar15 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar36 = uVar29 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar28 = uVar15 >> (uVar8 & 0xff) | uVar36 << (uVar13 & 0xff) | uVar36 >> (uVar12 & 0xff);
          uVar15 = uVar15 >> (0x38 - uVar25 & 0xff) | uVar36 << (uVar25 - 0x18 & 0xff) |
                   uVar36 >> (0x18 - uVar25 & 0xff);
          uVar36 = *(uint *)(iVar41 + (uVar15 >> 8) * 4);
          puVar16 = *(uint **)(iVar35 + uVar28 * 4);
          *(uint *)(iVar35 + uVar28 * 4) = uVar43 + 1;
          if (unaff_r8 < puVar16) {
            puVar42 = (uint *)((int)puVar33 + (int)puVar16);
            if (uVar29 != puVar42[1] || uVar19 != *(uint *)((int)puVar33 + (int)puVar16))
            goto LAB_017a7f90;
            puVar16 = (uint *)((int)puVar31 + 9);
            if (puVar16 < (uint *)((int)puVar44 + -3)) {
              if (puVar42[2] == *(uint *)((int)puVar31 + 9)) {
                puVar46 = puVar42 + 3;
                for (puVar30 = (uint *)((int)puVar31 + 0xd); puVar30 < (uint *)((int)puVar44 + -3);
                    puVar30 = puVar30 + 1) {
                  if (*puVar46 != *puVar30) {
                    uVar19 = *puVar46 ^ *puVar30;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    local_54 = (char *)((int)puVar30 +
                                       (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                         bVar4 >> 1 & 1) << 1 |
                                                                        bVar4 >> 2 & 1) << 1 |
                                                                       bVar4 >> 3 & 1) << 1 |
                                                                      bVar4 >> 4 & 1) << 1 |
                                                                     bVar4 >> 5 & 1) << 1 |
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                         bVar5 >> 1 & 1) << 1 |
                                                                        bVar5 >> 2 & 1) << 1 |
                                                                       bVar5 >> 3 & 1) << 1 |
                                                                      bVar5 >> 4 & 1) << 1 |
                                                                     bVar5 >> 5 & 1) << 1 |
                                                                    bVar5 >> 6 & 1) << 1 |
                                                                   bVar5 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                         bVar1 >> 1 & 1) << 1 |
                                                                        bVar1 >> 2 & 1) << 1 |
                                                                       bVar1 >> 3 & 1) << 1 |
                                                                      bVar1 >> 4 & 1) << 1 |
                                                                     bVar1 >> 5 & 1) << 1 |
                                                                    bVar1 >> 6 & 1) << 1 |
                                                                   bVar1 >> 7)) >> 3) - (int)puVar16
                                       ));
                    goto LAB_017a8f10;
                  }
                  puVar46 = puVar46 + 1;
                }
                goto LAB_017a8ec0;
              }
              uVar19 = puVar42[2] ^ *(uint *)((int)puVar31 + 9);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3);
            }
            else {
              puVar46 = puVar42 + 2;
              puVar30 = puVar16;
LAB_017a8ec0:
              if (puVar30 < (uint *)((int)puVar44 + -1)) {
                if ((ushort)*puVar46 == (ushort)*puVar30) {
                  puVar46 = (uint *)((int)puVar46 + 2);
                  puVar30 = (uint *)((int)puVar30 + 2);
                }
              }
              if ((puVar30 < puVar44) && ((char)*puVar46 == (char)*puVar30)) {
                puVar30 = (uint *)((int)puVar30 + 1);
              }
              local_54 = (char *)((int)puVar30 - (int)puVar16);
            }
LAB_017a8f10:
            puVar31 = (uint *)((int)puVar31 + 1);
            local_54 = local_54 + 8;
            local_74 = (uint *)((int)puVar31 - (int)puVar42);
            if (puVar24 < puVar42 && param_4 < puVar31) {
              do {
                puVar42 = (uint *)((int)puVar42 + -1);
                puVar16 = (uint *)((int)puVar31 + -1);
                if (*(char *)((int)puVar31 + -1) != *(char *)puVar42) {
                  goto LAB_017a7e00;
                }
                local_54 = local_54 + 1;
                puVar31 = puVar16;
              } while (param_4 < puVar16 && puVar24 < puVar42);
              goto LAB_017a8590;
            }
            goto LAB_017a7e00;
          }
          if (((uVar15 ^ uVar36) & 0xff) == 0) {
            puVar16 = (uint *)((int)puVar23 + (uVar36 >> 8));
            if ((puVar11 < puVar16) &&
               (uVar29 == puVar16[1] && uVar19 == *(uint *)((int)puVar23 + (uVar36 >> 8)))) {
              puVar46 = puVar16 + 2;
              puVar42 = (uint *)((int)puVar31 + 9);
              puVar30 = (uint *)((int)puVar42 + ((int)puVar34 - (int)puVar46));
              if (puVar44 < puVar30) {
                puVar30 = puVar44;
              }
              if (puVar42 < (uint *)((int)puVar30 + -3)) {
                if (puVar16[2] == *(uint *)((int)puVar31 + 9)) {
                  puVar47 = puVar16 + 3;
                  puVar49 = (uint *)((int)puVar31 + 0xd);
                  while( true ) {
                    if ((uint *)((int)puVar30 + -3) <= puVar49) break;
                    if (*puVar47 != *puVar49) {
                      uVar19 = *puVar47 ^ *puVar49;
                      bVar4 = (byte)uVar19;
                      bVar5 = (byte)(uVar19 >> 8);
                      bVar6 = (byte)(uVar19 >> 0x10);
                      bVar1 = (byte)(uVar19 >> 0x18);
                      local_54 = (char *)((int)puVar49 +
                                         (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                           bVar4 >> 1 & 1) << 1 |
                                                                          bVar4 >> 2 & 1) << 1 |
                                                                         bVar4 >> 3 & 1) << 1 |
                                                                        bVar4 >> 4 & 1) << 1 |
                                                                       bVar4 >> 5 & 1) << 1 |
                                                                      bVar4 >> 6 & 1) << 1 |
                                                                     bVar4 >> 7) << 0x18 |
                                                         (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                         (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                           bVar6 >> 1 & 1) << 1 |
                                                                          bVar6 >> 2 & 1) << 1 |
                                                                         bVar6 >> 3 & 1) << 1 |
                                                                        bVar6 >> 4 & 1) << 1 |
                                                                       bVar6 >> 5 & 1) << 1 |
                                                                      bVar6 >> 6 & 1) << 1 |
                                                                     bVar6 >> 7) << 8 |
                                                         (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                           bVar1 >> 1 & 1) << 1 |
                                                                          bVar1 >> 2 & 1) << 1 |
                                                                         bVar1 >> 3 & 1) << 1 |
                                                                        bVar1 >> 4 & 1) << 1 |
                                                                       bVar1 >> 5 & 1) << 1 |
                                                                      bVar1 >> 6 & 1) << 1 |
                                                                     bVar1 >> 7)) >> 3) -
                                         (int)puVar42));
                      goto LAB_017a80e0;
                    }
                    puVar47 = puVar47 + 1;
                    puVar49 = puVar49 + 1;
                  }
                  goto LAB_017a91d0;
                }
                uVar19 = puVar16[2] ^ *(uint *)((int)puVar31 + 9);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3);
              }
              else {
                puVar49 = puVar42;
                puVar47 = puVar46;
LAB_017a91d0:
                if (puVar49 < (uint *)((int)puVar30 + -1)) {
                  if ((ushort)*puVar47 == (ushort)*puVar49) {
                    puVar49 = (uint *)((int)puVar49 + 2);
                    puVar47 = (uint *)((int)puVar47 + 2);
                  }
                }
                if ((puVar49 < puVar30) && ((char)*puVar47 == (char)*puVar49)) {
                  puVar49 = (uint *)((int)puVar49 + 1);
                }
                local_54 = (char *)((int)puVar49 - (int)puVar42);
              }
LAB_017a80e0:
              if (puVar34 == (uint *)((int)puVar46 + (int)local_54)) {
                puVar49 = (uint *)((int)puVar42 + (int)local_54);
                puVar30 = puVar49;
                puVar46 = puVar24;
                if (puVar49 < (uint *)((int)puVar44 + -3)) {
                  if (*puVar24 == *(uint *)((int)puVar42 + (int)local_54)) {
                    do {
                      puVar30 = puVar30 + 1;
                      puVar46 = puVar46 + 1;
                      if ((uint *)((int)puVar44 + -3) <= puVar30) goto LAB_017a9330;
                    } while (*puVar46 == *puVar30);
                    uVar19 = *puVar46 ^ *puVar30;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((int)puVar30 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar49));
                  }
                  else {
                    uVar19 = *puVar24 ^ *(uint *)((int)puVar42 + (int)local_54);
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3);
                  }
                }
                else {
LAB_017a9330:
                  if (puVar30 < (uint *)((int)puVar44 + -1)) {
                    if ((ushort)*puVar46 == (ushort)*puVar30) {
                      puVar30 = (uint *)((int)puVar30 + 2);
                      puVar46 = (uint *)((int)puVar46 + 2);
                    }
                  }
                  if ((puVar30 < puVar44) && ((char)*puVar46 == (char)*puVar30)) {
                    puVar30 = (uint *)((int)puVar30 + 1);
                  }
                  pcVar40 = (char *)((int)puVar30 - (int)puVar49);
                }
                local_54 = local_54 + (int)pcVar40;
              }
              puVar31 = (uint *)((int)puVar31 + 1);
              local_54 = local_54 + 8;
              local_74 = (uint *)((int)puVar48 + ((uVar43 + (1 - (int)unaff_r8)) - (uVar36 >> 8)));
              if (param_4 < puVar31) {
                puVar30 = puVar31;
                do {
                  puVar16 = (uint *)((int)puVar16 + -1);
                  puVar31 = (uint *)((int)puVar30 + -1);
                  if (*(char *)((int)puVar30 + -1) != *(char *)puVar16) {
                    puVar31 = puVar30;
                    break;
                  }
                  local_54 = local_54 + 1;
                  puVar30 = puVar31;
                } while (param_4 < puVar31 && puVar11 < puVar16);
              }
              goto LAB_017a7e00;
            }
          }
LAB_017a7f90:
          puVar42 = puVar31 + 1;
          puVar16 = puVar30 + 1;
          if (unaff_r8 <= puVar39) {
            if (puVar42 < (uint *)((int)puVar44 + -3)) {
              if (puVar30[1] == puVar31[1]) {
                puVar16 = puVar30 + 2;
                for (puVar46 = puVar31 + 2; puVar46 < (uint *)((int)puVar44 + -3);
                    puVar46 = puVar46 + 1) {
                  if (*puVar16 != *puVar46) {
                    uVar19 = *puVar16 ^ *puVar46;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    local_54 = (char *)((int)puVar46 +
                                       (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                         bVar4 >> 1 & 1) << 1 |
                                                                        bVar4 >> 2 & 1) << 1 |
                                                                       bVar4 >> 3 & 1) << 1 |
                                                                      bVar4 >> 4 & 1) << 1 |
                                                                     bVar4 >> 5 & 1) << 1 |
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                         bVar5 >> 1 & 1) << 1 |
                                                                        bVar5 >> 2 & 1) << 1 |
                                                                       bVar5 >> 3 & 1) << 1 |
                                                                      bVar5 >> 4 & 1) << 1 |
                                                                     bVar5 >> 5 & 1) << 1 |
                                                                    bVar5 >> 6 & 1) << 1 |
                                                                   bVar5 >> 7) << 0x10 |
                                                       (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                         bVar6 >> 1 & 1) << 1 |
                                                                        bVar6 >> 2 & 1) << 1 |
                                                                       bVar6 >> 3 & 1) << 1 |
                                                                      bVar6 >> 4 & 1) << 1 |
                                                                     bVar6 >> 5 & 1) << 1 |
                                                                    bVar6 >> 6 & 1) << 1 |
                                                                   bVar6 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                         bVar1 >> 1 & 1) << 1 |
                                                                        bVar1 >> 2 & 1) << 1 |
                                                                       bVar1 >> 3 & 1) << 1 |
                                                                      bVar1 >> 4 & 1) << 1 |
                                                                     bVar1 >> 5 & 1) << 1 |
                                                                    bVar1 >> 6 & 1) << 1 |
                                                                   bVar1 >> 7)) >> 3) - (int)puVar42
                                       ));
                    goto LAB_017a839c;
                  }
                  puVar16 = puVar16 + 1;
                }
                goto LAB_017a834c;
              }
              uVar19 = puVar30[1] ^ puVar31[1];
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3);
            }
            else {
              puVar46 = puVar42;
LAB_017a834c:
              if (puVar46 < (uint *)((int)puVar44 + -1)) {
                if ((ushort)*puVar16 == (ushort)*puVar46) {
                  puVar46 = (uint *)((int)puVar46 + 2);
                  puVar16 = (uint *)((int)puVar16 + 2);
                }
              }
              if ((puVar46 < puVar44) && ((char)*puVar16 == (char)*puVar46)) {
                puVar46 = (uint *)((int)puVar46 + 1);
              }
              local_54 = (char *)((int)puVar46 - (int)puVar42);
            }
LAB_017a839c:
            local_54 = local_54 + 4;
            local_74 = (uint *)((int)puVar31 - (int)puVar30);
            if (puVar24 < puVar30 && param_4 < puVar31) {
              do {
                puVar30 = (uint *)((int)puVar30 + -1);
                puVar16 = (uint *)((int)puVar31 + -1);
                if (*(char *)puVar16 != *(char *)puVar30) goto LAB_017a7df8;
                local_54 = local_54 + 1;
                puVar31 = puVar16;
              } while (param_4 < puVar16 && puVar24 < puVar30);
              goto LAB_017a8590;
            }
            goto LAB_017a7e00;
          }
          puVar46 = (uint *)((int)puVar42 + ((int)puVar34 - (int)puVar16));
          if (puVar44 < puVar46) {
            puVar46 = puVar44;
          }
          if (puVar42 < (uint *)((int)puVar46 + -3)) {
            if (puVar30[1] == puVar31[1]) {
              puVar47 = puVar30 + 2;
              puVar49 = puVar31 + 2;
              while( true ) {
                if ((uint *)((int)puVar46 + -3) <= puVar49) break;
                if (*puVar47 != *puVar49) {
                  uVar19 = *puVar47 ^ *puVar49;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  local_54 = (char *)((int)puVar49 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3) -
                                     (int)puVar42));
                  goto joined_r0x017a84f8;
                }
                puVar47 = puVar47 + 1;
                puVar49 = puVar49 + 1;
              }
              goto LAB_017a84a0;
            }
            uVar19 = puVar30[1] ^ puVar31[1];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            local_54 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
            ;
          }
          else {
            puVar49 = puVar42;
            puVar47 = puVar16;
LAB_017a84a0:
            if (puVar49 < (uint *)((int)puVar46 + -1)) {
              if ((ushort)*puVar47 == (ushort)*puVar49) {
                puVar49 = (uint *)((int)puVar49 + 2);
                puVar47 = (uint *)((int)puVar47 + 2);
              }
            }
            if ((puVar49 < puVar46) && ((char)*puVar47 == (char)*puVar49)) {
              puVar49 = (uint *)((int)puVar49 + 1);
            }
            local_54 = (char *)((int)puVar49 - (int)puVar42);
          }
joined_r0x017a84f8:
          if (puVar34 == (uint *)((int)puVar16 + (int)local_54)) {
            puVar49 = (uint *)((int)puVar42 + (int)local_54);
            puVar16 = puVar49;
            puVar46 = puVar24;
            if (puVar49 < (uint *)((int)puVar44 + -3)) {
              if (*puVar24 == *(uint *)((int)puVar42 + (int)local_54)) {
                do {
                  puVar16 = puVar16 + 1;
                  puVar46 = puVar46 + 1;
                  if ((uint *)((int)puVar44 + -3) <= puVar16) goto LAB_017a8518;
                } while (*puVar46 == *puVar16);
                uVar19 = *puVar46 ^ *puVar16;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar16 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar49));
              }
              else {
                uVar19 = *puVar24 ^ *(uint *)((int)puVar42 + (int)local_54);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017a8518:
              if (puVar16 < (uint *)((int)puVar44 + -1)) {
                if ((ushort)*puVar46 == (ushort)*puVar16) {
                  puVar16 = (uint *)((int)puVar16 + 2);
                  puVar46 = (uint *)((int)puVar46 + 2);
                }
              }
              if ((puVar16 < puVar44) && ((char)*puVar46 == (char)*puVar16)) {
                puVar16 = (uint *)((int)puVar16 + 1);
              }
              pcVar40 = (char *)((int)puVar16 - (int)puVar49);
            }
            local_54 = local_54 + (int)pcVar40;
          }
          local_74 = (uint *)(uVar43 - (int)puVar39);
          local_54 = local_54 + 4;
          if (puVar11 < puVar30 && param_4 < puVar31) {
            do {
              puVar30 = (uint *)((int)puVar30 + -1);
              puVar16 = (uint *)((int)puVar31 + -1);
              if (*(char *)puVar16 != *(char *)puVar30) goto LAB_017a7df8;
              local_54 = local_54 + 1;
              puVar31 = puVar16;
            } while (param_4 < puVar16 && puVar11 < puVar30);
            goto LAB_017a8590;
          }
          goto LAB_017a7e00;
        }
      }
      else if (((uVar19 ^ uVar36) & 0xff) == 0) {
        puVar30 = (uint *)((int)puVar23 + (uVar36 >> 8));
        puVar16 = puVar23;
        if ((puVar11 < puVar30) &&
           (puVar16 = *(uint **)((int)puVar23 + (uVar36 >> 8)), puVar16 == (uint *)*puVar31)) {
          puVar39 = (uint *)((int)unaff_r8 + ((uVar36 >> 8) - (int)puVar48));
          goto LAB_017a7efc;
        }
      }
      puVar31 = (uint *)((int)puVar31 + ((int)puVar31 - (int)param_4 >> 8) + 1);
      puVar30 = puVar7;
      goto LAB_017a7b74;
    }
    puVar10 = *(uint **)(param_1 + 4);
    puVar24 = (uint *)((int)param_4 + param_5);
    puVar23 = *(uint **)(param_1 + 0xc);
    puVar33 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
    puVar44 = (uint *)((int)param_4 + ((param_5 - (int)puVar10) - (int)puVar23));
    bVar50 = puVar44 <= puVar33;
    if (!bVar50) {
      puVar33 = (uint *)((int)param_4 + ((param_5 - (int)puVar10) - (int)puVar33));
    }
    puVar17 = *(undefined4 **)(param_1 + 0xb4);
    if (!bVar50) {
      puVar44 = puVar33;
    }
    if (bVar50) {
      puVar44 = puVar23;
    }
    puVar34 = (uint *)*puVar17;
    puVar33 = (uint *)puVar17[1];
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar23 = puVar44;
    }
    puVar44 = (uint *)((int)puVar33 + puVar17[3]);
    puVar16 = (uint *)((int)puVar10 + (int)puVar23);
    local_5c = (uint *)*param_3;
    puVar31 = puVar24 + -2;
    local_78 = (uint *)param_3[1];
    iVar41 = puVar17[0x17];
    iVar38 = puVar17[0x19];
    uVar18 = puVar17[0x2f];
    uVar25 = puVar17[0x30];
    if (*(int *)(param_1 + 0xd8) != 0) {
      uVar8 = 4 << (uVar18 & 0xff);
      uVar13 = 4 << (uVar25 & 0xff);
      if (uVar13 != 0) {
        uVar12 = 0;
        do {
          HintPreloadData(iVar41 + uVar12);
          uVar12 = uVar12 + 0x40;
        } while (uVar12 < uVar13);
      }
      if (uVar8 != 0) {
        uVar13 = 0;
        do {
          HintPreloadData(iVar38 + uVar13);
          uVar13 = uVar13 + 0x40;
        } while (uVar13 < uVar8);
      }
    }
    puVar30 = param_4;
    if ((char *)((int)param_4 + (int)((int)puVar34 + (-(int)puVar44 - (int)puVar16))) == (char *)0x0
       ) {
      puVar30 = (uint *)((int)param_4 + 1);
    }
    puVar7 = puVar31;
    if (puVar30 < puVar31) {
      iVar14 = *(int *)(param_1 + 0xc0);
      iVar35 = *(int *)(param_1 + 0xbc);
      puVar48 = (uint *)((int)puVar34 - (int)puVar33);
      iVar45 = *(int *)(param_1 + 0x5c);
      puVar9 = *(uint **)(param_1 + 100);
      uVar27 = 0x40 - iVar14;
      puVar42 = (uint *)(0x40 - iVar35);
      uVar8 = iVar14 - 0x20;
      uVar13 = 0x20 - iVar14;
      uVar12 = iVar35 - 0x20;
      uVar26 = 0x20 - iVar35;
LAB_017b0090:
      puVar7 = local_5c;
      puVar49 = (uint *)*puVar30;
      uVar43 = (int)puVar30 - (int)puVar10;
      puVar47 = (uint *)((1 - (int)local_5c) + uVar43);
      puVar46 = (uint *)puVar30[1];
      if (puVar47 < puVar23) {
        unaff_r8 = puVar48;
      }
      uVar28 = (uint)(ZEXT48(puVar49) * 0xb7a56463);
      uVar19 = (int)puVar46 * -0x485a9b9d + (int)puVar49 * -0x30e44324 +
               (int)(ZEXT48(puVar49) * 0xb7a56463 >> 0x20);
      uVar15 = uVar28 >> (0x38 - uVar25 & 0xff) | uVar19 << (uVar25 - 0x18 & 0xff) |
               uVar19 >> (0x18 - uVar25 & 0xff);
      uVar29 = uVar28 >> (uVar27 & 0xff) | uVar19 << (uVar8 & 0xff) | uVar19 >> (uVar13 & 0xff);
      puVar20 = *(uint **)(iVar41 + (uVar15 >> 8) * 4);
      puVar21 = *(uint **)(iVar45 + uVar29 * 4);
      uVar28 = (uint)(ZEXT48(puVar49) * 0xbfa56300);
      uVar36 = (int)puVar46 * -0x405a9d00 + (int)puVar49 * -0x30e44324 +
               (int)(ZEXT48(puVar49) * 0xbfa56300 >> 0x20);
      uVar19 = uVar28 >> (0x38 - uVar18 & 0xff) | uVar36 << (uVar18 - 0x18 & 0xff) |
               uVar36 >> (0x18 - uVar18 & 0xff);
      uVar28 = uVar28 >> ((uint)puVar42 & 0xff) | uVar36 << (uVar12 & 0xff) |
               uVar36 >> (uVar26 & 0xff);
      uVar36 = *(uint *)(iVar38 + (uVar19 >> 8) * 4);
      puVar39 = (uint *)puVar9[uVar28];
      if (puVar47 < puVar23) {
        piVar37 = (int *)((int)puVar33 + (int)(((int)unaff_r8 - (int)puVar23) + (int)puVar47));
      }
      else {
        piVar37 = (int *)((int)puVar10 + (int)puVar47);
      }
      puVar9[uVar28] = uVar43;
      *(uint *)(iVar45 + uVar29 * 4) = uVar43;
      if ((2 < (uint)(((int)puVar23 + -1) - (int)puVar47)) &&
         (*piVar37 == *(int *)((int)puVar30 + 1))) {
        puVar46 = (uint *)((int)puVar30 + 5);
        if (puVar47 < puVar23) {
          puVar49 = puVar34;
        }
        else {
          puVar49 = puVar24;
        }
        puVar47 = (uint *)(piVar37 + 1);
        puVar20 = (uint *)((int)puVar46 + ((int)puVar49 - (int)puVar47));
        if (puVar24 < puVar20) {
          puVar20 = puVar24;
        }
        if (puVar46 < (uint *)((int)puVar20 + -3)) {
          if (piVar37[1] == *(uint *)((int)puVar30 + 5)) {
            puVar39 = (uint *)(piVar37 + 2);
            for (puVar21 = (uint *)((int)puVar30 + 9); puVar21 < (uint *)((int)puVar20 + -3);
                puVar21 = puVar21 + 1) {
              if (*puVar39 != *puVar21) {
                uVar19 = *puVar39 ^ *puVar21;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar21 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar46));
                goto LAB_017b10c4;
              }
              puVar39 = puVar39 + 1;
            }
            goto LAB_017b107c;
          }
          uVar19 = piVar37[1] ^ *(uint *)((int)puVar30 + 5);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar21 = puVar46;
          puVar39 = puVar47;
LAB_017b107c:
          if (puVar21 < (uint *)((int)puVar20 + -1)) {
            if ((ushort)*puVar39 == (ushort)*puVar21) {
              puVar21 = (uint *)((int)puVar21 + 2);
              puVar39 = (uint *)((int)puVar39 + 2);
            }
          }
          if ((puVar21 < puVar20) && ((char)*puVar39 == (char)*puVar21)) {
            puVar21 = (uint *)((int)puVar21 + 1);
          }
          pcVar40 = (char *)((int)puVar21 - (int)puVar46);
        }
LAB_017b10c4:
        if (puVar49 == (uint *)((int)puVar47 + (int)pcVar40)) {
          puVar20 = (uint *)((int)puVar46 + (int)pcVar40);
          puVar47 = puVar16;
          puVar49 = puVar20;
          if (puVar20 < (uint *)((int)puVar24 + -3)) {
            if (*puVar16 == *(uint *)((int)puVar46 + (int)pcVar40)) {
              do {
                puVar49 = puVar49 + 1;
                puVar47 = puVar47 + 1;
                if ((uint *)((int)puVar24 + -3) <= puVar49) goto LAB_017b1a00;
              } while (*puVar47 == *puVar49);
              uVar19 = *puVar47 ^ *puVar49;
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((int)puVar49 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar20));
            }
            else {
              uVar19 = *puVar16 ^ *(uint *)((int)puVar46 + (int)pcVar40);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
          }
          else {
LAB_017b1a00:
            if (puVar49 < (uint *)((int)puVar24 + -1)) {
              if ((ushort)*puVar47 == (ushort)*puVar49) {
                puVar47 = (uint *)((int)puVar47 + 2);
                puVar49 = (uint *)((int)puVar49 + 2);
              }
            }
            if ((puVar49 < puVar24) && ((char)*puVar47 == (char)*puVar49)) {
              puVar49 = (uint *)((int)puVar49 + 1);
            }
            pcVar32 = (char *)((int)puVar49 - (int)puVar20);
          }
          pcVar40 = pcVar40 + (int)pcVar32;
        }
        puVar30 = (uint *)((int)puVar30 + 1);
        uVar19 = (int)puVar30 - (int)puVar11;
        local_58 = (uint *)(pcVar40 + 4);
        puVar46 = (uint *)param_2[3];
        if (puVar24 + -8 < puVar30) {
          FUN_017a4c40(puVar46,puVar11,puVar30,puVar24 + -8);
LAB_017b1efc:
          param_2[3] = param_2[3] + uVar19;
          puVar17 = (undefined4 *)param_2[1];
          if (0xffff < uVar19) {
            param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          uVar15 = *puVar11;
          uVar28 = puVar11[1];
          uVar29 = puVar11[2];
          puVar46[3] = puVar11[3];
          *puVar46 = uVar15;
          puVar46[1] = uVar28;
          puVar46[2] = uVar29;
          uVar15 = param_2[3];
          if (0x10 < uVar19) {
            uVar28 = puVar11[5];
            uVar29 = puVar11[6];
            uVar36 = puVar11[7];
            *(uint *)(uVar15 + 0x10) = puVar11[4];
            *(uint *)(uVar15 + 0x14) = uVar28;
            *(uint *)(uVar15 + 0x18) = uVar29;
            *(uint *)(uVar15 + 0x1c) = uVar36;
            if (0x10 < (int)(uVar19 - 0x10)) {
              puVar11 = puVar11 + 0x10;
              puVar46 = (uint *)(uVar15 + 0x20);
              do {
                uVar28 = puVar11[-7];
                uVar29 = puVar11[-6];
                puVar49 = puVar46 + 8;
                uVar36 = puVar11[-5];
                *puVar46 = puVar11[-8];
                puVar46[1] = uVar28;
                puVar46[2] = uVar29;
                puVar46[3] = uVar36;
                uVar28 = puVar11[-3];
                uVar29 = puVar11[-2];
                uVar36 = puVar11[-1];
                puVar46[4] = puVar11[-4];
                puVar46[5] = uVar28;
                puVar46[6] = uVar29;
                puVar46[7] = uVar36;
                puVar11 = puVar11 + 8;
                puVar46 = puVar49;
              } while (puVar49 < (uint *)(uVar15 + uVar19));
            }
            goto LAB_017b1efc;
          }
          param_2[3] = uVar15 + uVar19;
          puVar17 = (undefined4 *)param_2[1];
        }
        *(short *)(puVar17 + 1) = (short)uVar19;
        *puVar17 = 1;
        if ((char *)0xffff < pcVar40 + 1) {
          param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
        local_5c = local_78;
        local_78 = puVar7;
        goto LAB_017b1198;
      }
      if (puVar23 < puVar21) {
        puVar47 = (uint *)((int)puVar10 + (int)puVar21);
        puVar7 = *(uint **)((int)puVar10 + (int)puVar21);
        if (puVar46 != (uint *)puVar47[1] || puVar49 != puVar7) goto LAB_017b0054;
        puVar7 = puVar30 + 2;
        if (puVar7 < (uint *)((int)puVar24 + -3)) {
          if (puVar47[2] == puVar30[2]) {
            puVar49 = puVar47 + 3;
            for (puVar46 = puVar30 + 3; puVar46 < (uint *)((int)puVar24 + -3); puVar46 = puVar46 + 1
                ) {
              if (*puVar49 != *puVar46) {
                uVar19 = *puVar49 ^ *puVar46;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((int)puVar46 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar7));
                goto LAB_017b1ce8;
              }
              puVar49 = puVar49 + 1;
            }
            goto LAB_017b1c98;
          }
          uVar19 = puVar47[2] ^ puVar30[2];
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar49 = puVar47 + 2;
          puVar46 = puVar7;
LAB_017b1c98:
          if (puVar46 < (uint *)((int)puVar24 + -1)) {
            if ((ushort)*puVar49 == (ushort)*puVar46) {
              puVar49 = (uint *)((int)puVar49 + 2);
              puVar46 = (uint *)((int)puVar46 + 2);
            }
          }
          if ((puVar46 < puVar24) && ((char)*puVar49 == (char)*puVar46)) {
            puVar46 = (uint *)((int)puVar46 + 1);
          }
          pcVar40 = (char *)((int)puVar46 - (int)puVar7);
        }
LAB_017b1ce8:
        local_58 = (uint *)(pcVar40 + 8);
        local_78 = (uint *)((int)puVar30 - (int)puVar47);
        if (puVar16 < puVar47 && puVar11 < puVar30) {
          do {
            puVar47 = (uint *)((int)puVar47 + -1);
            puVar7 = (uint *)((int)puVar30 + -1);
            if (*(char *)puVar7 != *(char *)puVar47) goto LAB_017b02d0;
            local_58 = (uint *)((int)local_58 + 1);
            puVar30 = puVar7;
          } while (puVar11 < puVar7 && puVar16 < puVar47);
LAB_017b163c:
          puVar30 = puVar7;
        }
        goto LAB_017b02d8;
      }
      puVar7 = (uint *)((uVar15 ^ (uint)puVar20) & 0xff);
      if (puVar7 == (uint *)0x0) {
        puVar47 = (uint *)((int)puVar33 + ((uint)puVar20 >> 8));
        puVar7 = puVar20;
        if ((puVar44 < puVar47) &&
           (puVar7 = (uint *)puVar47[1],
           puVar46 == puVar7 && puVar49 == *(uint **)((int)puVar33 + ((uint)puVar20 >> 8)))) {
          puVar46 = puVar47 + 2;
          puVar49 = puVar30 + 2;
          puVar7 = (uint *)((int)puVar49 + ((int)puVar34 - (int)puVar46));
          if (puVar24 < puVar7) {
            puVar7 = puVar24;
          }
          if (puVar49 < (uint *)((int)puVar7 + -3)) {
            if (puVar47[2] == puVar30[2]) {
              puVar39 = puVar47 + 3;
              puVar21 = puVar30 + 3;
              while( true ) {
                if ((uint *)((int)puVar7 + -3) <= puVar21) break;
                if (*puVar39 != *puVar21) {
                  uVar19 = *puVar39 ^ *puVar21;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar40 = (char *)((int)puVar21 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar49));
                  goto LAB_017b026c;
                }
                puVar39 = puVar39 + 1;
                puVar21 = puVar21 + 1;
              }
              goto LAB_017b2ae8;
            }
            uVar19 = puVar47[2] ^ puVar30[2];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar21 = puVar49;
            puVar39 = puVar46;
LAB_017b2ae8:
            if (puVar21 < (uint *)((int)puVar7 + -1)) {
              if ((ushort)*puVar39 == (ushort)*puVar21) {
                puVar21 = (uint *)((int)puVar21 + 2);
                puVar39 = (uint *)((int)puVar39 + 2);
              }
            }
            if ((puVar21 < puVar7) && ((char)*puVar39 == (char)*puVar21)) {
              puVar21 = (uint *)((int)puVar21 + 1);
            }
            pcVar40 = (char *)((int)puVar21 - (int)puVar49);
          }
LAB_017b026c:
          if (puVar34 == (uint *)((int)puVar46 + (int)pcVar40)) {
            puVar21 = (uint *)((int)puVar49 + (int)pcVar40);
            puVar7 = puVar21;
            puVar46 = puVar16;
            if (puVar21 < (uint *)((int)puVar24 + -3)) {
              if (*puVar16 == *(uint *)((int)puVar49 + (int)pcVar40)) {
                do {
                  puVar7 = puVar7 + 1;
                  puVar46 = puVar46 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar7) goto LAB_017b2e80;
                } while (*puVar46 == *puVar7);
                uVar19 = *puVar46 ^ *puVar7;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((int)puVar7 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar21));
              }
              else {
                uVar19 = *puVar16 ^ *(uint *)((int)puVar49 + (int)pcVar40);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017b2e80:
              if (puVar7 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar46 == (ushort)*puVar7) {
                  puVar7 = (uint *)((int)puVar7 + 2);
                  puVar46 = (uint *)((int)puVar46 + 2);
                }
              }
              if ((puVar7 < puVar24) && ((char)*puVar46 == (char)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pcVar32 = (char *)((int)puVar7 - (int)puVar21);
            }
            pcVar40 = pcVar40 + (int)pcVar32;
          }
          local_58 = (uint *)(pcVar40 + 8);
          local_78 = (uint *)((int)puVar48 + ((uVar43 - (int)puVar23) - ((uint)puVar20 >> 8)));
          if (puVar11 < puVar30) {
            do {
              puVar47 = (uint *)((int)puVar47 + -1);
              puVar7 = (uint *)((int)puVar30 + -1);
              if (*(char *)puVar7 != *(char *)puVar47) goto LAB_017b02d0;
              local_58 = (uint *)((int)local_58 + 1);
              puVar30 = puVar7;
            } while (puVar11 < puVar7 && puVar44 < puVar47);
            goto LAB_017b163c;
          }
          goto LAB_017b02d8;
        }
      }
LAB_017b0054:
      if (puVar23 < puVar39) {
        puVar46 = (uint *)((int)puVar10 + (int)puVar39);
        puVar7 = puVar10;
        if (*(uint *)((int)puVar10 + (int)puVar39) == *puVar30) {
LAB_017b03d4:
          uVar19 = *(uint *)((int)puVar30 + 1);
          uVar29 = *(uint *)((int)puVar30 + 5);
          uVar15 = (uint)((ulonglong)uVar19 * 0xb7a56463);
          uVar36 = uVar29 * -0x485a9b9d + uVar19 * -0x30e44324 +
                   (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
          uVar28 = uVar15 >> (uVar27 & 0xff) | uVar36 << (uVar8 & 0xff) | uVar36 >> (uVar13 & 0xff);
          uVar15 = uVar15 >> (0x38 - uVar25 & 0xff) | uVar36 << (uVar25 - 0x18 & 0xff) |
                   uVar36 >> (0x18 - uVar25 & 0xff);
          uVar36 = *(uint *)(iVar41 + (uVar15 >> 8) * 4);
          puVar7 = *(uint **)(iVar45 + uVar28 * 4);
          *(uint *)(iVar45 + uVar28 * 4) = uVar43 + 1;
          if (puVar23 < puVar7) {
            puVar49 = (uint *)((int)puVar10 + (int)puVar7);
            if (uVar29 != puVar49[1] || uVar19 != *(uint *)((int)puVar10 + (int)puVar7))
            goto LAB_017b0468;
            puVar7 = (uint *)((int)puVar30 + 9);
            if (puVar7 < (uint *)((int)puVar24 + -3)) {
              if (puVar49[2] == *(uint *)((int)puVar30 + 9)) {
                puVar47 = puVar49 + 3;
                for (puVar46 = (uint *)((int)puVar30 + 0xd); puVar46 < (uint *)((int)puVar24 + -3);
                    puVar46 = puVar46 + 1) {
                  if (*puVar47 != *puVar46) {
                    uVar19 = *puVar47 ^ *puVar46;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((int)puVar46 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar7));
                    goto LAB_017b2308;
                  }
                  puVar47 = puVar47 + 1;
                }
                goto LAB_017b2ba0;
              }
              uVar19 = puVar49[2] ^ *(uint *)((int)puVar30 + 9);
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar47 = puVar49 + 2;
              puVar46 = puVar7;
LAB_017b2ba0:
              if (puVar46 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar47 == (ushort)*puVar46) {
                  puVar47 = (uint *)((int)puVar47 + 2);
                  puVar46 = (uint *)((int)puVar46 + 2);
                }
              }
              if ((puVar46 < puVar24) && ((char)*puVar47 == (char)*puVar46)) {
                puVar46 = (uint *)((int)puVar46 + 1);
              }
              pcVar40 = (char *)((int)puVar46 - (int)puVar7);
            }
LAB_017b2308:
            puVar30 = (uint *)((int)puVar30 + 1);
            local_58 = (uint *)(pcVar40 + 8);
            local_78 = (uint *)((int)puVar30 - (int)puVar49);
            if (puVar16 < puVar49 && puVar11 < puVar30) {
              do {
                puVar49 = (uint *)((int)puVar49 + -1);
                puVar7 = (uint *)((int)puVar30 + -1);
                if (*(char *)((int)puVar30 + -1) != *(char *)puVar49) {
                  goto LAB_017b02d8;
                }
                local_58 = (uint *)((int)local_58 + 1);
                puVar30 = puVar7;
              } while (puVar11 < puVar7 && puVar16 < puVar49);
              goto LAB_017b163c;
            }
            goto LAB_017b02d8;
          }
          if (((uVar15 ^ uVar36) & 0xff) == 0) {
            puVar7 = (uint *)((int)puVar33 + (uVar36 >> 8));
            if ((puVar44 < puVar7) &&
               (uVar29 == puVar7[1] && uVar19 == *(uint *)((int)puVar33 + (uVar36 >> 8)))) {
              puVar49 = puVar7 + 2;
              puVar47 = (uint *)((int)puVar30 + 9);
              puVar46 = (uint *)((int)puVar47 + ((int)puVar34 - (int)puVar49));
              if (puVar24 < puVar46) {
                puVar46 = puVar24;
              }
              if (puVar47 < (uint *)((int)puVar46 + -3)) {
                if (puVar7[2] == *(uint *)((int)puVar30 + 9)) {
                  puVar21 = puVar7 + 3;
                  puVar20 = (uint *)((int)puVar30 + 0xd);
                  while( true ) {
                    if ((uint *)((int)puVar46 + -3) <= puVar20) break;
                    if (*puVar21 != *puVar20) {
                      uVar19 = *puVar21 ^ *puVar20;
                      bVar4 = (byte)uVar19;
                      bVar5 = (byte)(uVar19 >> 8);
                      bVar6 = (byte)(uVar19 >> 0x10);
                      bVar1 = (byte)(uVar19 >> 0x18);
                      pcVar40 = (char *)((int)puVar20 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                          bVar4 >> 1 & 1) << 1 |
                                                                         bVar4 >> 2 & 1) << 1 |
                                                                        bVar4 >> 3 & 1) << 1 |
                                                                       bVar4 >> 4 & 1) << 1 |
                                                                      bVar4 >> 5 & 1) << 1 |
                                                                     bVar4 >> 6 & 1) << 1 |
                                                                    bVar4 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                          bVar1 >> 1 & 1) << 1 |
                                                                         bVar1 >> 2 & 1) << 1 |
                                                                        bVar1 >> 3 & 1) << 1 |
                                                                       bVar1 >> 4 & 1) << 1 |
                                                                      bVar1 >> 5 & 1) << 1 |
                                                                     bVar1 >> 6 & 1) << 1 |
                                                                    bVar1 >> 7)) >> 3) -
                                        (int)puVar47));
                      goto LAB_017b0e10;
                    }
                    puVar21 = puVar21 + 1;
                    puVar20 = puVar20 + 1;
                  }
                  goto LAB_017b2fc8;
                }
                uVar19 = puVar7[2] ^ *(uint *)((int)puVar30 + 9);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
              else {
                puVar20 = puVar47;
                puVar21 = puVar49;
LAB_017b2fc8:
                if (puVar20 < (uint *)((int)puVar46 + -1)) {
                  if ((ushort)*puVar21 == (ushort)*puVar20) {
                    puVar20 = (uint *)((int)puVar20 + 2);
                    puVar21 = (uint *)((int)puVar21 + 2);
                  }
                }
                if ((puVar20 < puVar46) && ((char)*puVar21 == (char)*puVar20)) {
                  puVar20 = (uint *)((int)puVar20 + 1);
                }
                pcVar40 = (char *)((int)puVar20 - (int)puVar47);
              }
LAB_017b0e10:
              if (puVar34 == (uint *)((int)puVar49 + (int)pcVar40)) {
                puVar20 = (uint *)((int)puVar47 + (int)pcVar40);
                puVar46 = puVar16;
                puVar49 = puVar20;
                if (puVar20 < (uint *)((int)puVar24 + -3)) {
                  if (*puVar16 == *(uint *)((int)puVar47 + (int)pcVar40)) {
                    do {
                      puVar49 = puVar49 + 1;
                      puVar46 = puVar46 + 1;
                      if ((uint *)((int)puVar24 + -3) <= puVar49) goto LAB_017b3224;
                    } while (*puVar46 == *puVar49);
                    uVar19 = *puVar46 ^ *puVar49;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar32 = (char *)((int)puVar49 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar20));
                  }
                  else {
                    uVar19 = *puVar16 ^ *(uint *)((int)puVar47 + (int)pcVar40);
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3);
                  }
                }
                else {
LAB_017b3224:
                  if ((puVar49 < (uint *)((int)puVar24 + -1)) &&
                     ((ushort)*puVar46 == (ushort)*puVar49)) {
                    puVar49 = (uint *)((int)puVar49 + 2);
                    puVar46 = (uint *)((int)puVar46 + 2);
                  }
                  if ((puVar49 < puVar24) && ((char)*puVar46 == (char)*puVar49)) {
                    puVar49 = (uint *)((int)puVar49 + 1);
                  }
                  pcVar32 = (char *)((int)puVar49 - (int)puVar20);
                }
                pcVar40 = pcVar40 + (int)pcVar32;
              }
              puVar30 = (uint *)((int)puVar30 + 1);
              local_58 = (uint *)(pcVar40 + 8);
              local_78 = (uint *)((int)puVar48 + ((uVar43 + (1 - (int)puVar23)) - (uVar36 >> 8)));
              if (puVar11 < puVar30) {
                puVar46 = puVar30;
                do {
                  puVar7 = (uint *)((int)puVar7 + -1);
                  puVar30 = (uint *)((int)puVar46 + -1);
                  if (*(char *)((int)puVar46 + -1) != *(char *)puVar7) {
                    puVar30 = puVar46;
                    break;
                  }
                  local_58 = (uint *)((int)local_58 + 1);
                  puVar46 = puVar30;
                } while (puVar11 < puVar30 && puVar44 < puVar7);
              }
              goto LAB_017b02d8;
            }
          }
LAB_017b0468:
          puVar49 = puVar30 + 1;
          puVar7 = puVar46 + 1;
          if (puVar23 <= puVar39) {
            if (puVar49 < (uint *)((int)puVar24 + -3)) {
              if (puVar46[1] == puVar30[1]) {
                puVar7 = puVar46 + 2;
                for (puVar47 = puVar30 + 2; puVar47 < (uint *)((int)puVar24 + -3);
                    puVar47 = puVar47 + 1) {
                  if (*puVar7 != *puVar47) {
                    uVar19 = *puVar7 ^ *puVar47;
                    bVar4 = (byte)uVar19;
                    bVar5 = (byte)(uVar19 >> 8);
                    bVar6 = (byte)(uVar19 >> 0x10);
                    bVar1 = (byte)(uVar19 >> 0x18);
                    pcVar40 = (char *)((int)puVar47 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar49));
                    goto LAB_017b1388;
                  }
                  puVar7 = puVar7 + 1;
                }
                goto LAB_017b1338;
              }
              uVar19 = puVar46[1] ^ puVar30[1];
              bVar4 = (byte)uVar19;
              bVar5 = (byte)(uVar19 >> 8);
              bVar6 = (byte)(uVar19 >> 0x10);
              bVar1 = (byte)(uVar19 >> 0x18);
              pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar47 = puVar49;
LAB_017b1338:
              if (puVar47 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar7 == (ushort)*puVar47) {
                  puVar47 = (uint *)((int)puVar47 + 2);
                  puVar7 = (uint *)((int)puVar7 + 2);
                }
              }
              if ((puVar47 < puVar24) && ((char)*puVar7 == (char)*puVar47)) {
                puVar47 = (uint *)((int)puVar47 + 1);
              }
              pcVar40 = (char *)((int)puVar47 - (int)puVar49);
            }
LAB_017b1388:
            local_58 = (uint *)(pcVar40 + 4);
            local_78 = (uint *)((int)puVar30 - (int)puVar46);
            if (puVar16 < puVar46 && puVar11 < puVar30) {
              do {
                puVar46 = (uint *)((int)puVar46 + -1);
                puVar7 = (uint *)((int)puVar30 + -1);
                if (*(char *)puVar7 != *(char *)puVar46) goto LAB_017b02d0;
                local_58 = (uint *)((int)local_58 + 1);
                puVar30 = puVar7;
              } while (puVar11 < puVar7 && puVar16 < puVar46);
              goto LAB_017b163c;
            }
            goto LAB_017b02d8;
          }
          puVar47 = (uint *)((int)puVar49 + ((int)puVar34 - (int)puVar7));
          if (puVar24 < puVar47) {
            puVar47 = puVar24;
          }
          if (puVar49 < (uint *)((int)puVar47 + -3)) {
            if (puVar46[1] == puVar30[1]) {
              puVar21 = puVar46 + 2;
              for (puVar20 = puVar30 + 2; puVar20 < (uint *)((int)puVar47 + -3);
                  puVar20 = puVar20 + 1) {
                if (*puVar21 != *puVar20) {
                  uVar19 = *puVar21 ^ *puVar20;
                  bVar4 = (byte)uVar19;
                  bVar5 = (byte)(uVar19 >> 8);
                  bVar6 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar40 = (char *)((int)puVar20 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar49));
                  goto LAB_017b04f4;
                }
                puVar21 = puVar21 + 1;
              }
              goto LAB_017b04a8;
            }
            uVar19 = puVar46[1] ^ puVar30[1];
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar20 = puVar49;
            puVar21 = puVar7;
LAB_017b04a8:
            if (puVar20 < (uint *)((int)puVar47 + -1)) {
              if ((ushort)*puVar21 == (ushort)*puVar20) {
                puVar20 = (uint *)((int)puVar20 + 2);
                puVar21 = (uint *)((int)puVar21 + 2);
              }
            }
            if ((puVar20 < puVar47) && ((char)*puVar21 == (char)*puVar20)) {
              puVar20 = (uint *)((int)puVar20 + 1);
            }
            pcVar40 = (char *)((int)puVar20 - (int)puVar49);
          }
LAB_017b04f4:
          if (puVar34 == (uint *)((int)puVar7 + (int)pcVar40)) {
            puVar20 = (uint *)((int)puVar49 + (int)pcVar40);
            puVar7 = puVar20;
            puVar47 = puVar16;
            if (puVar20 < (uint *)((int)puVar24 + -3)) {
              if (*puVar16 == *(uint *)((int)puVar49 + (int)pcVar40)) {
                do {
                  puVar7 = puVar7 + 1;
                  puVar47 = puVar47 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar7) goto LAB_017b1b5c;
                } while (*puVar47 == *puVar7);
                uVar19 = *puVar47 ^ *puVar7;
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((int)puVar7 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar20));
              }
              else {
                uVar19 = *puVar16 ^ *(uint *)((int)puVar49 + (int)pcVar40);
                bVar4 = (byte)uVar19;
                bVar5 = (byte)(uVar19 >> 8);
                bVar6 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
            }
            else {
LAB_017b1b5c:
              if (puVar7 < (uint *)((int)puVar24 + -1)) {
                if ((ushort)*puVar47 == (ushort)*puVar7) {
                  puVar7 = (uint *)((int)puVar7 + 2);
                  puVar47 = (uint *)((int)puVar47 + 2);
                }
              }
              if ((puVar7 < puVar24) && ((char)*puVar47 == (char)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pcVar32 = (char *)((int)puVar7 - (int)puVar20);
            }
            pcVar40 = pcVar40 + (int)pcVar32;
          }
          local_78 = (uint *)(uVar43 - (int)puVar39);
          local_58 = (uint *)(pcVar40 + 4);
          if (puVar44 < puVar46 && puVar11 < puVar30) {
            do {
              puVar46 = (uint *)((int)puVar46 + -1);
              puVar7 = (uint *)((int)puVar30 + -1);
              if (*(char *)puVar7 != *(char *)puVar46) goto LAB_017b02d0;
              local_58 = (uint *)((int)local_58 + 1);
              puVar30 = puVar7;
            } while (puVar11 < puVar7 && puVar44 < puVar46);
            goto LAB_017b163c;
          }
          goto LAB_017b02d8;
        }
      }
      else if (((uVar19 ^ uVar36) & 0xff) == 0) {
        puVar46 = (uint *)((int)puVar33 + (uVar36 >> 8));
        puVar7 = puVar33;
        if ((puVar44 < puVar46) &&
           (puVar7 = *(uint **)((int)puVar33 + (uVar36 >> 8)), puVar7 == (uint *)*puVar30)) {
          puVar39 = (uint *)((int)puVar23 + ((uVar36 >> 8) - (int)puVar48));
          goto LAB_017b03d4;
        }
      }
      puVar30 = (uint *)((int)puVar30 + ((int)puVar30 - (int)puVar11 >> 8) + 1);
      unaff_r8 = puVar9;
      goto LAB_017b0084;
    }
  }
LAB_017b1f68:
  puVar33 = local_78;
  local_78 = local_5c;
  local_5c = puVar33;
LAB_017b0fe4:
  *param_3 = local_78;
  param_3[1] = local_5c;
  uVar22 = uVar22 ^ DAT_018ddaf8;
  if (uVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((char *)((int)param_4 + (param_5 - (int)puVar11)),puVar7,uVar22,0);
  }
  return;
LAB_017b09a0:
LAB_017b09a8:
  uVar19 = (int)puVar30 - (int)puVar11;
  puVar46 = (uint *)param_2[3];
  if (puVar24 + -8 < puVar30) {
    FUN_017a4c40(puVar46,puVar11,puVar30,puVar24 + -8);
  }
  else {
    uVar15 = *puVar11;
    puVar7 = (uint *)puVar11[1];
    uVar28 = puVar11[2];
    puVar46[3] = puVar11[3];
    *puVar46 = uVar15;
    puVar46[1] = (uint)puVar7;
    puVar46[2] = uVar28;
    uVar15 = param_2[3];
    if (uVar19 < 0x11) {
      param_2[3] = uVar15 + uVar19;
      puVar17 = (undefined4 *)param_2[1];
      goto LAB_017b0a20;
    }
    uVar28 = puVar11[5];
    uVar29 = puVar11[6];
    uVar36 = puVar11[7];
    *(uint *)(uVar15 + 0x10) = puVar11[4];
    *(uint *)(uVar15 + 0x14) = uVar28;
    *(uint *)(uVar15 + 0x18) = uVar29;
    *(uint *)(uVar15 + 0x1c) = uVar36;
    if (0x10 < (int)(uVar19 - 0x10)) {
      puVar11 = puVar11 + 0x10;
      puVar7 = (uint *)(uVar15 + 0x20);
      do {
        uVar28 = puVar11[-7];
        uVar29 = puVar11[-6];
        puVar46 = puVar7 + 8;
        uVar36 = puVar11[-5];
        *puVar7 = puVar11[-8];
        puVar7[1] = uVar28;
        puVar7[2] = uVar29;
        puVar7[3] = uVar36;
        uVar28 = puVar11[-3];
        uVar29 = puVar11[-2];
        uVar36 = puVar11[-1];
        puVar7[4] = puVar11[-4];
        puVar7[5] = uVar28;
        puVar7[6] = uVar29;
        puVar7[7] = uVar36;
        puVar11 = puVar11 + 8;
        puVar7 = puVar46;
      } while (puVar46 < (uint *)(uVar15 + uVar19));
    }
  }
  param_2[3] = param_2[3] + uVar19;
  puVar17 = (undefined4 *)param_2[1];
  puVar7 = param_2;
  if (0xffff < uVar19) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017b0a20:
  *(short *)(puVar17 + 1) = (short)uVar19;
  *puVar17 = (char *)((int)local_78 + 3);
  if ((char *)0xffff < (char *)((int)local_58 + -3)) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    puVar7 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar17 + 6) = (short)(char *)((int)local_58 + -3);
LAB_017b0fc4:
  puVar46 = local_5c;
  local_6c = puVar24 + -8;
  puVar11 = (uint *)((int)puVar30 + (int)local_58);
  param_2[1] = (uint)(puVar17 + 2);
  if (puVar31 < puVar11) goto LAB_017b0fe4;
  uVar15 = uVar43 + 2;
  local_5c = local_78;
  uVar19 = *(uint *)((int)puVar10 + uVar15);
  iVar14 = *(int *)((int)puVar10 + uVar43 + 6);
  lVar2 = (ulonglong)*(uint *)((int)puVar11 + -2) * 0xb7a56463;
  uVar36 = *(int *)((int)puVar11 + 2) * -0x485a9b9d + *(uint *)((int)puVar11 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)*(uint *)((int)puVar11 + -1) * 0xbf9b0000;
  uVar28 = *(int *)((int)puVar11 + 3) * -0x40650000 + *(uint *)((int)puVar11 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  uVar29 = iVar14 * -0x485a9b9d + uVar19 * -0x30e44324 +
           (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
  uVar43 = iVar14 * -0x40650000 + uVar19 * -0x30e44324 +
           (int)((ulonglong)uVar19 * 0xbf9b0000 >> 0x20);
  *(uint *)(iVar45 + ((uint)((ulonglong)uVar19 * 0xb7a56463) >> (uVar27 & 0xff) |
                      uVar29 << (uVar8 & 0xff) | uVar29 >> (uVar13 & 0xff)) * 4) = uVar15;
  *(char **)(iVar45 + ((uint)lVar2 >> (uVar27 & 0xff) | uVar36 << (uVar8 & 0xff) |
                      uVar36 >> (uVar13 & 0xff)) * 4) = (char *)((int)puVar11 + (-2 - (int)puVar10))
  ;
  puVar9[(uint)((ulonglong)uVar19 * 0xbf9b0000) >> ((uint)puVar42 & 0xff) |
         uVar43 << (uVar12 & 0xff) | uVar43 >> (uVar26 & 0xff)] = uVar15;
  puVar9[(uint)lVar3 >> ((uint)puVar42 & 0xff) | uVar28 << (uVar12 & 0xff) |
         uVar28 >> (uVar26 & 0xff)] = (uint)((int)puVar11 + (-1 - (int)puVar10));
  unaff_r8 = puVar42;
  while( true ) {
    local_78 = puVar46;
    uVar43 = (int)puVar11 - (int)puVar10;
    puVar7 = (uint *)(uVar43 - (int)local_78);
    if (puVar7 < puVar23) {
      puVar30 = (uint *)((int)puVar33 + (int)(((int)puVar48 - (int)puVar23) + (int)puVar7));
    }
    else {
      puVar30 = (uint *)((int)puVar10 + (int)puVar7);
    }
    if (((int)((int)local_78 + (int)((int)puVar23 + -1)) - uVar43 < 3) || (*puVar30 != *puVar11))
    break;
    if (puVar7 < puVar23) {
      puVar7 = puVar34;
    }
    else {
      puVar7 = puVar24;
    }
    puVar46 = puVar30 + 1;
    puVar47 = puVar11 + 1;
    puVar49 = (uint *)((int)puVar47 + ((int)puVar7 - (int)puVar46));
    if (puVar24 < puVar49) {
      puVar49 = puVar24;
    }
    if (puVar47 < (uint *)((int)puVar49 + -3)) {
      if (puVar30[1] == puVar11[1]) {
        puVar30 = puVar30 + 2;
        puVar20 = puVar11 + 2;
        while( true ) {
          if ((uint *)((int)puVar49 + -3) <= puVar20) break;
          unaff_r8 = (uint *)*puVar20;
          if ((uint *)*puVar30 != unaff_r8) {
            uVar19 = *puVar30 ^ (uint)unaff_r8;
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((int)puVar20 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar47));
            goto LAB_017b2570;
          }
          puVar30 = puVar30 + 1;
          puVar20 = puVar20 + 1;
        }
        goto LAB_017b2730;
      }
      uVar19 = puVar30[1] ^ puVar11[1];
      bVar4 = (byte)uVar19;
      bVar5 = (byte)(uVar19 >> 8);
      bVar6 = (byte)(uVar19 >> 0x10);
      bVar1 = (byte)(uVar19 >> 0x18);
      pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar30 = puVar46;
      puVar20 = puVar47;
LAB_017b2730:
      if (puVar20 < (uint *)((int)puVar49 + -1)) {
        unaff_r8 = (uint *)(uint)(ushort)*puVar20;
        if ((uint *)(uint)(ushort)*puVar30 == unaff_r8) {
          puVar30 = (uint *)((int)puVar30 + 2);
          puVar20 = (uint *)((int)puVar20 + 2);
        }
      }
      if ((puVar20 < puVar49) && ((char)*puVar30 == (char)*puVar20)) {
        puVar20 = (uint *)((int)puVar20 + 1);
      }
      pcVar40 = (char *)((int)puVar20 - (int)puVar47);
    }
LAB_017b2570:
    if (puVar7 == (uint *)((int)puVar46 + (int)pcVar40)) {
      puVar46 = (uint *)((int)puVar47 + (int)pcVar40);
      puVar30 = puVar46;
      puVar7 = puVar16;
      if (puVar46 < (uint *)((int)puVar24 + -3)) {
        if (*puVar16 == *(uint *)((int)puVar47 + (int)pcVar40)) {
          do {
            puVar30 = puVar30 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)puVar24 + -3) <= puVar30) goto LAB_017b2a08;
          } while (*puVar7 == *puVar30);
          uVar19 = *puVar7 ^ *puVar30;
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((int)puVar30 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar46));
        }
        else {
          uVar19 = *puVar16 ^ *(uint *)((int)puVar47 + (int)pcVar40);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017b2a08:
        if (puVar30 < (uint *)((int)puVar24 + -1)) {
          if ((ushort)*puVar7 == (ushort)*puVar30) {
            puVar30 = (uint *)((int)puVar30 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
          }
        }
        if ((puVar30 < puVar24) && ((char)*puVar7 == (char)*puVar30)) {
          puVar30 = (uint *)((int)puVar30 + 1);
        }
        pcVar32 = (char *)((int)puVar30 - (int)puVar46);
      }
      pcVar40 = pcVar40 + (int)pcVar32;
    }
    puVar30 = (uint *)param_2[3];
    if (local_6c < puVar11) {
      FUN_017a4c40(puVar30,puVar11,puVar11,local_6c);
    }
    else {
      uVar19 = puVar11[1];
      uVar15 = puVar11[2];
      uVar28 = puVar11[3];
      *puVar30 = *puVar11;
      puVar30[1] = uVar19;
      puVar30[2] = uVar15;
      puVar30[3] = uVar28;
    }
    puVar17 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar17 + 1) = 0;
    *puVar17 = 1;
    if ((char *)0xffff < pcVar40 + 1) {
      param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
    uVar19 = puVar11[1];
    param_2[1] = (uint)(puVar17 + 2);
    uVar15 = *puVar11;
    puVar11 = (uint *)((int)puVar11 + (int)(pcVar40 + 4));
    uVar28 = uVar19 * -0x40650000 + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xbf9b0000 >> 0x20);
    uVar19 = uVar19 * -0x485a9b9d + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
    puVar9[(uint)((ulonglong)uVar15 * 0xbf9b0000) >> ((uint)puVar42 & 0xff) |
           uVar28 << (uVar12 & 0xff) | uVar28 >> (uVar26 & 0xff)] = uVar43;
    *(uint *)(iVar45 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar27 & 0xff) |
                        uVar19 << (uVar8 & 0xff) | uVar19 >> (uVar13 & 0xff)) * 4) = uVar43;
    if (puVar31 < puVar11) goto LAB_017b2f30;
    puVar46 = local_5c;
    local_5c = local_78;
  }
  puVar30 = puVar11;
LAB_017b0754:
  if (puVar31 <= puVar30) goto LAB_017b1f68;
  goto LAB_017b0760;
LAB_017a7df8:
LAB_017a7e00:
  uVar19 = (int)puVar31 - (int)param_4;
  puVar30 = (uint *)param_2[3];
  if (puVar44 + -8 < puVar31) {
    FUN_017a4c40(puVar30,param_4,puVar31,puVar44 + -8);
  }
  else {
    uVar15 = *param_4;
    puVar16 = (uint *)param_4[1];
    uVar28 = param_4[2];
    puVar30[3] = param_4[3];
    *puVar30 = uVar15;
    puVar30[1] = (uint)puVar16;
    puVar30[2] = uVar28;
    uVar15 = param_2[3];
    if (uVar19 < 0x11) {
      param_2[3] = uVar15 + uVar19;
      puVar17 = (undefined4 *)param_2[1];
      goto LAB_017a7e78;
    }
    uVar28 = param_4[5];
    uVar29 = param_4[6];
    uVar36 = param_4[7];
    *(uint *)(uVar15 + 0x10) = param_4[4];
    *(uint *)(uVar15 + 0x14) = uVar28;
    *(uint *)(uVar15 + 0x18) = uVar29;
    *(uint *)(uVar15 + 0x1c) = uVar36;
    if (0x10 < (int)(uVar19 - 0x10)) {
      puVar16 = param_4 + 0x10;
      puVar30 = (uint *)(uVar15 + 0x20);
      do {
        uVar28 = puVar16[-7];
        uVar29 = puVar16[-6];
        puVar42 = puVar30 + 8;
        uVar36 = puVar16[-5];
        *puVar30 = puVar16[-8];
        puVar30[1] = uVar28;
        puVar30[2] = uVar29;
        puVar30[3] = uVar36;
        uVar28 = puVar16[-3];
        uVar29 = puVar16[-2];
        uVar36 = puVar16[-1];
        puVar30[4] = puVar16[-4];
        puVar30[5] = uVar28;
        puVar30[6] = uVar29;
        puVar30[7] = uVar36;
        puVar16 = puVar16 + 8;
        puVar30 = puVar42;
      } while (puVar42 < (uint *)(uVar15 + uVar19));
    }
  }
  param_2[3] = param_2[3] + uVar19;
  puVar17 = (undefined4 *)param_2[1];
  puVar16 = param_2;
  if (0xffff < uVar19) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017a7e78:
  *(short *)(puVar17 + 1) = (short)uVar19;
  *puVar17 = (char *)((int)local_74 + 3);
  if ((char *)0xffff < local_54 + -3) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    puVar16 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar17 + 6) = (short)(local_54 + -3);
LAB_017a82c4:
  puVar42 = local_58;
  local_6c = puVar44 + -8;
  param_4 = (uint *)((int)puVar31 + (int)local_54);
  param_2[1] = (uint)(puVar17 + 2);
  if (puVar10 < param_4) {
    puVar7 = puVar16;
    goto LAB_017a82e4;
  }
  uVar19 = uVar43 + 2;
  local_58 = local_74;
  iVar14 = *(int *)((int)puVar33 + uVar43 + 6);
  uVar43 = *(uint *)((int)puVar33 + uVar19);
  lVar2 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar29 = *(int *)((int)param_4 + 2) * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbb000000;
  uVar15 = *(int *)((int)param_4 + 3) * -0x45000000 + *(uint *)((int)param_4 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  uVar28 = iVar14 * -0x485a9b9d + uVar43 * -0x30e44324 +
           (int)((ulonglong)uVar43 * 0xb7a56463 >> 0x20);
  uVar36 = iVar14 * -0x45000000 + uVar43 * -0x30e44324 +
           (int)((ulonglong)uVar43 * 0xbb000000 >> 0x20);
  *(uint *)(iVar35 + ((uint)((ulonglong)uVar43 * 0xb7a56463) >> (uVar8 & 0xff) |
                      uVar28 << (uVar13 & 0xff) | uVar28 >> (uVar12 & 0xff)) * 4) = uVar19;
  *(char **)(iVar35 + ((uint)lVar2 >> (uVar8 & 0xff) | uVar29 << (uVar13 & 0xff) |
                      uVar29 >> (uVar12 & 0xff)) * 4) = (char *)((int)param_4 + (-2 - (int)puVar33))
  ;
  puVar7[(uint)((ulonglong)uVar43 * 0xbb000000) >> ((uint)puVar9 & 0xff) | uVar36 << (uVar26 & 0xff)
         | uVar36 >> (uVar27 & 0xff)] = uVar19;
  puVar7[(uint)lVar3 >> ((uint)puVar9 & 0xff) | uVar15 << (uVar26 & 0xff) |
         uVar15 >> (uVar27 & 0xff)] = (uint)((int)param_4 + (-1 - (int)puVar33));
  puVar30 = puVar9;
  while( true ) {
    local_74 = puVar42;
    uVar43 = (int)param_4 - (int)puVar33;
    puVar16 = (uint *)(uVar43 - (int)local_74);
    if (puVar16 < unaff_r8) {
      puVar31 = (uint *)((int)puVar23 + (int)(((int)puVar48 - (int)unaff_r8) + (int)puVar16));
    }
    else {
      puVar31 = (uint *)((int)puVar33 + (int)puVar16);
    }
    if (((int)((int)local_74 + (int)((int)unaff_r8 + -1)) - uVar43 < 3) || (*puVar31 != *param_4))
    break;
    if (puVar16 < unaff_r8) {
      puVar16 = puVar34;
    }
    else {
      puVar16 = puVar44;
    }
    puVar42 = puVar31 + 1;
    puVar49 = param_4 + 1;
    puVar46 = (uint *)((int)puVar49 + ((int)puVar16 - (int)puVar42));
    if (puVar44 < puVar46) {
      puVar46 = puVar44;
    }
    if (puVar49 < (uint *)((int)puVar46 + -3)) {
      if (puVar31[1] == param_4[1]) {
        puVar31 = puVar31 + 2;
        puVar47 = param_4 + 2;
        while( true ) {
          if ((uint *)((int)puVar46 + -3) <= puVar47) break;
          puVar30 = (uint *)*puVar47;
          if ((uint *)*puVar31 != puVar30) {
            uVar19 = *puVar31 ^ (uint)puVar30;
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((int)puVar47 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar49));
            goto LAB_017a8c80;
          }
          puVar31 = puVar31 + 1;
          puVar47 = puVar47 + 1;
        }
        goto LAB_017a8c48;
      }
      uVar19 = puVar31[1] ^ param_4[1];
      bVar4 = (byte)uVar19;
      bVar5 = (byte)(uVar19 >> 8);
      bVar6 = (byte)(uVar19 >> 0x10);
      bVar1 = (byte)(uVar19 >> 0x18);
      pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar31 = puVar42;
      puVar47 = puVar49;
LAB_017a8c48:
      if (puVar47 < (uint *)((int)puVar46 + -1)) {
        puVar30 = (uint *)(uint)(ushort)*puVar47;
        if ((uint *)(uint)(ushort)*puVar31 == puVar30) {
          puVar31 = (uint *)((int)puVar31 + 2);
          puVar47 = (uint *)((int)puVar47 + 2);
        }
      }
      if ((puVar47 < puVar46) && ((char)*puVar31 == (char)*puVar47)) {
        puVar47 = (uint *)((int)puVar47 + 1);
      }
      pcVar40 = (char *)((int)puVar47 - (int)puVar49);
    }
LAB_017a8c80:
    if (puVar16 == (uint *)((int)puVar42 + (int)pcVar40)) {
      puVar42 = (uint *)((int)puVar49 + (int)pcVar40);
      puVar31 = puVar42;
      puVar16 = puVar24;
      if (puVar42 < (uint *)((int)puVar44 + -3)) {
        if (*puVar24 == *(uint *)((int)puVar49 + (int)pcVar40)) {
          do {
            puVar31 = puVar31 + 1;
            puVar16 = puVar16 + 1;
            if ((uint *)((int)puVar44 + -3) <= puVar31) goto LAB_017a8e14;
          } while (*puVar16 == *puVar31);
          uVar19 = *puVar16 ^ *puVar31;
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((int)puVar31 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar42));
        }
        else {
          uVar19 = *puVar24 ^ *(uint *)((int)puVar49 + (int)pcVar40);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017a8e14:
        if (puVar31 < (uint *)((int)puVar44 + -1)) {
          if ((ushort)*puVar16 == (ushort)*puVar31) {
            puVar31 = (uint *)((int)puVar31 + 2);
            puVar16 = (uint *)((int)puVar16 + 2);
          }
        }
        if ((puVar31 < puVar44) && ((char)*puVar16 == (char)*puVar31)) {
          puVar31 = (uint *)((int)puVar31 + 1);
        }
        pcVar32 = (char *)((int)puVar31 - (int)puVar42);
      }
      pcVar40 = pcVar40 + (int)pcVar32;
    }
    puVar31 = (uint *)param_2[3];
    if (local_6c < param_4) {
      FUN_017a4c40(puVar31,param_4,param_4,local_6c);
    }
    else {
      uVar19 = param_4[1];
      uVar15 = param_4[2];
      uVar28 = param_4[3];
      *puVar31 = *param_4;
      puVar31[1] = uVar19;
      puVar31[2] = uVar15;
      puVar31[3] = uVar28;
    }
    puVar17 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar17 + 1) = 0;
    *puVar17 = 1;
    if ((char *)0xffff < pcVar40 + 1) {
      param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
    uVar19 = param_4[1];
    param_2[1] = (uint)(puVar17 + 2);
    uVar15 = *param_4;
    param_4 = (uint *)((int)param_4 + (int)(pcVar40 + 4));
    uVar28 = uVar19 * -0x45000000 + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xbb000000 >> 0x20);
    uVar19 = uVar19 * -0x485a9b9d + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
    puVar7[(uint)((ulonglong)uVar15 * 0xbb000000) >> ((uint)puVar9 & 0xff) |
           uVar28 << (uVar26 & 0xff) | uVar28 >> (uVar27 & 0xff)] = uVar43;
    *(uint *)(iVar35 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar8 & 0xff) |
                        uVar19 << (uVar13 & 0xff) | uVar19 >> (uVar12 & 0xff)) * 4) = uVar43;
    if (puVar10 < param_4) goto LAB_017a82e4;
    puVar42 = local_58;
    local_58 = local_74;
  }
  puVar31 = param_4;
LAB_017a7b74:
  if (puVar10 <= puVar31) goto LAB_017a8bec;
  goto LAB_017a7b80;
LAB_017b02d0:
LAB_017b02d8:
  uVar19 = (int)puVar30 - (int)puVar11;
  puVar46 = (uint *)param_2[3];
  if (puVar24 + -8 < puVar30) {
    FUN_017a4c40(puVar46,puVar11,puVar30,puVar24 + -8);
  }
  else {
    uVar15 = *puVar11;
    puVar7 = (uint *)puVar11[1];
    uVar28 = puVar11[2];
    puVar46[3] = puVar11[3];
    *puVar46 = uVar15;
    puVar46[1] = (uint)puVar7;
    puVar46[2] = uVar28;
    uVar15 = param_2[3];
    if (uVar19 < 0x11) {
      param_2[3] = uVar15 + uVar19;
      puVar17 = (undefined4 *)param_2[1];
      goto LAB_017b0350;
    }
    uVar28 = puVar11[5];
    uVar29 = puVar11[6];
    uVar36 = puVar11[7];
    *(uint *)(uVar15 + 0x10) = puVar11[4];
    *(uint *)(uVar15 + 0x14) = uVar28;
    *(uint *)(uVar15 + 0x18) = uVar29;
    *(uint *)(uVar15 + 0x1c) = uVar36;
    if (0x10 < (int)(uVar19 - 0x10)) {
      puVar11 = puVar11 + 0x10;
      puVar7 = (uint *)(uVar15 + 0x20);
      do {
        uVar28 = puVar11[-7];
        uVar29 = puVar11[-6];
        puVar46 = puVar7 + 8;
        uVar36 = puVar11[-5];
        *puVar7 = puVar11[-8];
        puVar7[1] = uVar28;
        puVar7[2] = uVar29;
        puVar7[3] = uVar36;
        uVar28 = puVar11[-3];
        uVar29 = puVar11[-2];
        uVar36 = puVar11[-1];
        puVar7[4] = puVar11[-4];
        puVar7[5] = uVar28;
        puVar7[6] = uVar29;
        puVar7[7] = uVar36;
        puVar11 = puVar11 + 8;
        puVar7 = puVar46;
      } while (puVar46 < (uint *)(uVar15 + uVar19));
    }
  }
  param_2[3] = param_2[3] + uVar19;
  puVar17 = (undefined4 *)param_2[1];
  puVar7 = param_2;
  if (0xffff < uVar19) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017b0350:
  *(short *)(puVar17 + 1) = (short)uVar19;
  *puVar17 = (char *)((int)local_78 + 3);
  if ((char *)0xffff < (char *)((int)local_58 + -3)) {
    param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
    puVar7 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar17 + 6) = (short)(char *)((int)local_58 + -3);
LAB_017b1198:
  puVar46 = local_5c;
  local_6c = puVar24 + -8;
  puVar11 = (uint *)((int)puVar30 + (int)local_58);
  param_2[1] = (uint)(puVar17 + 2);
  if (puVar31 < puVar11) goto LAB_017b0fe4;
  uVar15 = uVar43 + 2;
  local_5c = local_78;
  uVar19 = *(uint *)((int)puVar10 + uVar15);
  iVar14 = *(int *)((int)puVar10 + uVar43 + 6);
  lVar2 = (ulonglong)*(uint *)((int)puVar11 + -2) * 0xb7a56463;
  uVar36 = *(int *)((int)puVar11 + 2) * -0x485a9b9d + *(uint *)((int)puVar11 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar2 >> 0x20);
  lVar3 = (ulonglong)*(uint *)((int)puVar11 + -1) * 0xbfa56300;
  uVar28 = *(int *)((int)puVar11 + 3) * -0x405a9d00 + *(uint *)((int)puVar11 + -1) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  uVar29 = iVar14 * -0x485a9b9d + uVar19 * -0x30e44324 +
           (int)((ulonglong)uVar19 * 0xb7a56463 >> 0x20);
  uVar43 = iVar14 * -0x405a9d00 + uVar19 * -0x30e44324 +
           (int)((ulonglong)uVar19 * 0xbfa56300 >> 0x20);
  *(uint *)(iVar45 + ((uint)((ulonglong)uVar19 * 0xb7a56463) >> (uVar27 & 0xff) |
                      uVar29 << (uVar8 & 0xff) | uVar29 >> (uVar13 & 0xff)) * 4) = uVar15;
  *(char **)(iVar45 + ((uint)lVar2 >> (uVar27 & 0xff) | uVar36 << (uVar8 & 0xff) |
                      uVar36 >> (uVar13 & 0xff)) * 4) = (char *)((int)puVar11 + (-2 - (int)puVar10))
  ;
  puVar9[(uint)((ulonglong)uVar19 * 0xbfa56300) >> ((uint)puVar42 & 0xff) |
         uVar43 << (uVar12 & 0xff) | uVar43 >> (uVar26 & 0xff)] = uVar15;
  puVar9[(uint)lVar3 >> ((uint)puVar42 & 0xff) | uVar28 << (uVar12 & 0xff) |
         uVar28 >> (uVar26 & 0xff)] = (uint)((int)puVar11 + (-1 - (int)puVar10));
  unaff_r8 = puVar42;
  while( true ) {
    local_78 = puVar46;
    uVar43 = (int)puVar11 - (int)puVar10;
    puVar7 = (uint *)(uVar43 - (int)local_78);
    if (puVar7 < puVar23) {
      puVar30 = (uint *)((int)puVar33 + (int)(((int)puVar48 - (int)puVar23) + (int)puVar7));
    }
    else {
      puVar30 = (uint *)((int)puVar10 + (int)puVar7);
    }
    if (((int)((int)local_78 + (int)((int)puVar23 + -1)) - uVar43 < 3) || (*puVar30 != *puVar11))
    break;
    if (puVar7 < puVar23) {
      puVar7 = puVar34;
    }
    else {
      puVar7 = puVar24;
    }
    puVar46 = puVar30 + 1;
    puVar47 = puVar11 + 1;
    puVar49 = (uint *)((int)puVar47 + ((int)puVar7 - (int)puVar46));
    if (puVar24 < puVar49) {
      puVar49 = puVar24;
    }
    if (puVar47 < (uint *)((int)puVar49 + -3)) {
      if (puVar30[1] == puVar11[1]) {
        puVar30 = puVar30 + 2;
        puVar20 = puVar11 + 2;
        while( true ) {
          if ((uint *)((int)puVar49 + -3) <= puVar20) break;
          unaff_r8 = (uint *)*puVar20;
          if ((uint *)*puVar30 != unaff_r8) {
            uVar19 = *puVar30 ^ (uint)unaff_r8;
            bVar4 = (byte)uVar19;
            bVar5 = (byte)(uVar19 >> 8);
            bVar6 = (byte)(uVar19 >> 0x10);
            bVar1 = (byte)(uVar19 >> 0x18);
            pcVar40 = (char *)((int)puVar20 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar47));
            goto LAB_017b23d4;
          }
          puVar30 = puVar30 + 1;
          puVar20 = puVar20 + 1;
        }
        goto LAB_017b2784;
      }
      uVar19 = puVar30[1] ^ puVar11[1];
      bVar4 = (byte)uVar19;
      bVar5 = (byte)(uVar19 >> 8);
      bVar6 = (byte)(uVar19 >> 0x10);
      bVar1 = (byte)(uVar19 >> 0x18);
      pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar30 = puVar46;
      puVar20 = puVar47;
LAB_017b2784:
      if (puVar20 < (uint *)((int)puVar49 + -1)) {
        unaff_r8 = (uint *)(uint)(ushort)*puVar20;
        if ((uint *)(uint)(ushort)*puVar30 == unaff_r8) {
          puVar30 = (uint *)((int)puVar30 + 2);
          puVar20 = (uint *)((int)puVar20 + 2);
        }
      }
      if ((puVar20 < puVar49) && ((char)*puVar30 == (char)*puVar20)) {
        puVar20 = (uint *)((int)puVar20 + 1);
      }
      pcVar40 = (char *)((int)puVar20 - (int)puVar47);
    }
LAB_017b23d4:
    if (puVar7 == (uint *)((int)puVar46 + (int)pcVar40)) {
      puVar46 = (uint *)((int)puVar47 + (int)pcVar40);
      puVar30 = puVar46;
      puVar7 = puVar16;
      if (puVar46 < (uint *)((int)puVar24 + -3)) {
        if (*puVar16 == *(uint *)((int)puVar47 + (int)pcVar40)) {
          do {
            puVar30 = puVar30 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)puVar24 + -3) <= puVar30) goto LAB_017b2a64;
          } while (*puVar7 == *puVar30);
          uVar19 = *puVar7 ^ *puVar30;
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((int)puVar30 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar46));
        }
        else {
          uVar19 = *puVar16 ^ *(uint *)((int)puVar47 + (int)pcVar40);
          bVar4 = (byte)uVar19;
          bVar5 = (byte)(uVar19 >> 8);
          bVar6 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017b2a64:
        if (puVar30 < (uint *)((int)puVar24 + -1)) {
          if ((ushort)*puVar7 == (ushort)*puVar30) {
            puVar30 = (uint *)((int)puVar30 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
          }
        }
        if ((puVar30 < puVar24) && ((char)*puVar7 == (char)*puVar30)) {
          puVar30 = (uint *)((int)puVar30 + 1);
        }
        pcVar32 = (char *)((int)puVar30 - (int)puVar46);
      }
      pcVar40 = pcVar40 + (int)pcVar32;
    }
    puVar30 = (uint *)param_2[3];
    if (local_6c < puVar11) {
      FUN_017a4c40(puVar30,puVar11,puVar11,local_6c);
    }
    else {
      uVar19 = puVar11[1];
      uVar15 = puVar11[2];
      uVar28 = puVar11[3];
      *puVar30 = *puVar11;
      puVar30[1] = uVar19;
      puVar30[2] = uVar15;
      puVar30[3] = uVar28;
    }
    puVar17 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar17 + 1) = 0;
    *puVar17 = 1;
    if ((char *)0xffff < pcVar40 + 1) {
      param_2[10] = (int)((int)puVar17 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar17 + 6) = (short)(pcVar40 + 1);
    uVar19 = puVar11[1];
    param_2[1] = (uint)(puVar17 + 2);
    uVar15 = *puVar11;
    puVar11 = (uint *)((int)puVar11 + (int)(pcVar40 + 4));
    uVar28 = uVar19 * -0x405a9d00 + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xbfa56300 >> 0x20);
    uVar19 = uVar19 * -0x485a9b9d + uVar15 * -0x30e44324 +
             (int)((ulonglong)uVar15 * 0xb7a56463 >> 0x20);
    puVar9[(uint)((ulonglong)uVar15 * 0xbfa56300) >> ((uint)puVar42 & 0xff) |
           uVar28 << (uVar12 & 0xff) | uVar28 >> (uVar26 & 0xff)] = uVar43;
    *(uint *)(iVar45 + ((uint)((ulonglong)uVar15 * 0xb7a56463) >> (uVar27 & 0xff) |
                        uVar19 << (uVar8 & 0xff) | uVar19 >> (uVar13 & 0xff)) * 4) = uVar43;
    if (puVar31 < puVar11) goto LAB_017b2f30;
    puVar46 = local_5c;
    local_5c = local_78;
  }
  puVar30 = puVar11;
LAB_017b0084:
  if (puVar31 <= puVar30) goto LAB_017b1f68;
  goto LAB_017b0090;
LAB_017b2f30:
  puVar7 = puVar9;
  goto LAB_017b0fe4;
}

