// FUN_017e704c @ 017e704c size=2640 calls_out=5 calls_in=0
// strings: 

void FUN_017e704c(int param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  char *extraout_r1;
  char *extraout_r1_00;
  undefined4 *puVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  char *pcVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  uint *puVar30;
  int iVar31;
  undefined8 uVar32;
  int local_60;
  int local_50;
  char *local_44;
  uint local_40;
  uint local_3c;
  char *pcStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar6 = (uint *)((int)param_4 + param_5);
  iVar29 = *(int *)(param_1 + 4);
  puVar24 = puVar6 + -2;
  pcVar7 = *(char **)(param_1 + 0xc);
  puVar9 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  local_50 = *param_3;
  local_60 = param_3[1];
  iVar27 = puVar9[1];
  iVar14 = puVar9[3];
  puVar10 = (uint *)*puVar9;
  puVar15 = (uint *)(pcVar7 + iVar29);
  puVar30 = param_4;
  if ((iVar27 + iVar14) - (int)puVar10 == (int)param_4 - (int)puVar15) {
    puVar30 = (uint *)((int)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar16 = *(uint *)(param_1 + 200);
  pcVar11 = pcVar7;
  if (puVar30 < puVar24) {
    do {
      pcVar11 = (char *)((int)puVar30 + ((1 - local_50) - iVar29));
      if (pcVar11 < pcVar7) {
        piVar17 = (int *)((int)puVar10 + (int)(pcVar11 + iVar27 + (-(int)pcVar7 - iVar27)));
      }
      else {
        piVar17 = (int *)(pcVar11 + iVar29);
      }
      if ((pcVar7 + (-1 - (int)pcVar11) < (char *)0x3) || (*piVar17 != *(int *)((int)puVar30 + 1)))
      {
        local_40 = 999999999;
        if (uVar16 == 5) {
          uVar32 = FUN_017c8078(param_1,puVar30,puVar6,&local_40);
        }
        else if (uVar16 < 6) {
          uVar32 = FUN_017c8884();
        }
        else {
          uVar32 = FUN_017c7868();
        }
        pcVar11 = (char *)((ulonglong)uVar32 >> 0x20);
        local_44 = (char *)uVar32;
        if ((local_44 != (char *)0x0) && ((char *)0x3 < local_44)) {
          uVar22 = local_40;
          puVar26 = puVar30;
          if (3 < local_40) {
            pcVar11 = (char *)((int)puVar30 + ((3 - local_40) - iVar29));
            if (pcVar11 < pcVar7) {
              puVar18 = (uint *)((int)puVar10 + (int)(pcVar11 + -(int)pcVar7));
              puVar21 = (uint *)(iVar27 + iVar14);
            }
            else {
              puVar18 = (uint *)(pcVar11 + iVar29);
              puVar21 = puVar15;
            }
            if (puVar21 < puVar18 && param_4 < puVar30) {
              do {
                puVar18 = (uint *)((int)puVar18 + -1);
                puVar26 = (uint *)((int)puVar30 + -1);
                if (*(char *)puVar26 != *(char *)puVar18) {
                  puVar26 = puVar30;
                  break;
                }
                local_44 = local_44 + 1;
                puVar30 = puVar26;
              } while (param_4 < puVar26 && puVar21 < puVar18);
            }
            local_60 = local_50;
            local_50 = local_40 - 3;
          }
          goto LAB_017e7290;
        }
        uVar22 = ((uint)((int)puVar30 - (int)param_4) >> 8) + 1;
        puVar30 = (uint *)((int)puVar30 + uVar22);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar22);
      }
      else {
        puVar26 = (uint *)((int)puVar30 + 1);
        if (pcVar11 < pcVar7) {
          puVar21 = puVar10;
        }
        else {
          puVar21 = puVar6;
        }
        puVar18 = (uint *)((int)puVar30 + 5);
        puVar28 = (uint *)(piVar17 + 1);
        puVar12 = (uint *)((int)puVar18 + ((int)puVar21 - (int)puVar28));
        if (puVar6 < puVar12) {
          puVar12 = puVar6;
        }
        if (puVar18 < (uint *)((int)puVar12 + -3)) {
          if (piVar17[1] == *(uint *)((int)puVar30 + 5)) {
            puVar20 = (uint *)(piVar17 + 2);
            puVar30 = (uint *)((int)puVar30 + 9);
            while( true ) {
              if ((uint *)((int)puVar12 + -3) <= puVar30) break;
              if (*puVar20 != *puVar30) {
                uVar22 = *puVar20 ^ *puVar30;
                bVar3 = (byte)uVar22;
                bVar4 = (byte)(uVar22 >> 8);
                bVar5 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                local_44 = (char *)((int)puVar30 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                     bVar3 >> 1 & 1) << 1 |
                                                                    bVar3 >> 2 & 1) << 1 |
                                                                   bVar3 >> 3 & 1) << 1 |
                                                                  bVar3 >> 4 & 1) << 1 |
                                                                 bVar3 >> 5 & 1) << 1 |
                                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                               bVar4 >> 1 & 1) << 1
                                                                              | bVar4 >> 2 & 1) << 1
                                                                             | bVar4 >> 3 & 1) << 1
                                                                            | bVar4 >> 4 & 1) << 1 |
                                                                           bVar4 >> 5 & 1) << 1 |
                                                                          bVar4 >> 6 & 1) << 1 |
                                                                         bVar4 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                     bVar5 >> 1 & 1) << 1 |
                                                                    bVar5 >> 2 & 1) << 1 |
                                                                   bVar5 >> 3 & 1) << 1 |
                                                                  bVar5 >> 4 & 1) << 1 |
                                                                 bVar5 >> 5 & 1) << 1 |
                                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                   (int)puVar18));
                goto joined_r0x017e74e8;
              }
              puVar20 = puVar20 + 1;
              puVar30 = puVar30 + 1;
            }
            goto LAB_017e77b8;
          }
          uVar22 = piVar17[1] ^ *(uint *)((int)puVar30 + 5);
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          local_44 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                              1 | bVar3 >> 2 & 1) << 1 |
                                                            bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                           << 1 | bVar3 >> 5 & 1) << 1 |
                                                         bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar20 = puVar28;
          puVar30 = puVar18;
LAB_017e77b8:
          if (puVar30 < (uint *)((int)puVar12 + -1)) {
            if ((short)*puVar20 == (short)*puVar30) {
              puVar20 = (uint *)((int)puVar20 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < puVar12) && ((char)*puVar20 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          local_44 = (char *)((int)puVar30 - (int)puVar18);
        }
joined_r0x017e74e8:
        if (puVar21 == (uint *)((int)puVar28 + (int)local_44)) {
          puVar12 = (uint *)((int)puVar18 + (int)local_44);
          puVar21 = puVar15;
          puVar30 = puVar12;
          if (puVar12 < (uint *)((int)puVar6 + -3)) {
            if (*puVar15 == *(uint *)((int)puVar18 + (int)local_44)) {
              do {
                puVar30 = puVar30 + 1;
                puVar21 = puVar21 + 1;
                if ((uint *)((int)puVar6 + -3) <= puVar30) goto LAB_017e7508;
              } while (*puVar21 == *puVar30);
              uVar22 = *puVar21 ^ *puVar30;
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar11 = (char *)((int)puVar30 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar12));
            }
            else {
              uVar22 = *puVar15 ^ *(uint *)((int)puVar18 + (int)local_44);
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                 << 1 | bVar3 >> 2 & 1) << 1 |
                                                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1
                                                              ) << 1 | bVar3 >> 5 & 1) << 1 |
                                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
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
LAB_017e7508:
            if (puVar30 < (uint *)((int)puVar6 + -1)) {
              if ((short)*puVar21 == (short)*puVar30) {
                puVar21 = (uint *)((int)puVar21 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar30 < puVar6) && ((char)*puVar21 == (char)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pcVar11 = (char *)((int)puVar30 - (int)puVar12);
          }
          local_44 = local_44 + (int)pcVar11;
        }
        local_44 = local_44 + 4;
        uVar22 = 1;
LAB_017e7290:
        uVar25 = (int)puVar26 - (int)param_4;
        puVar30 = (uint *)param_2[3];
        if (puVar6 + -8 < puVar26) {
          FUN_017bfa44(puVar30,param_4,puVar26);
          pcVar11 = extraout_r1;
LAB_017e7620:
          param_2[3] = param_2[3] + uVar25;
          puVar30 = (uint *)param_2[1];
          if (0xffff < uVar25) {
            param_2[10] = (int)puVar30 - *param_2 >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          pcVar11 = (char *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar30[3] = uStack_30;
          *puVar30 = local_3c;
          puVar30[1] = (uint)pcVar11;
          puVar30[2] = uStack_34;
          iVar31 = param_2[3];
          if (0x10 < uVar25) {
            local_3c = param_4[4];
            pcVar11 = (char *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(iVar31 + 0x10) = local_3c;
            *(char **)(iVar31 + 0x14) = pcVar11;
            *(uint *)(iVar31 + 0x18) = uStack_34;
            *(uint *)(iVar31 + 0x1c) = uStack_30;
            pcStack_38 = pcVar11;
            if (0x10 < (int)(uVar25 - 0x10)) {
              puVar30 = param_4 + 0x10;
              puVar21 = (uint *)(iVar31 + 0x20);
              do {
                uVar8 = puVar30[-7];
                uVar13 = puVar30[-6];
                puVar18 = puVar21 + 8;
                uVar19 = puVar30[-5];
                *puVar21 = puVar30[-8];
                puVar21[1] = uVar8;
                puVar21[2] = uVar13;
                puVar21[3] = uVar19;
                local_3c = puVar30[-4];
                pcVar11 = (char *)puVar30[-3];
                uStack_34 = puVar30[-2];
                uStack_30 = puVar30[-1];
                puVar21[4] = local_3c;
                puVar21[5] = (uint)pcVar11;
                puVar21[6] = uStack_34;
                puVar21[7] = uStack_30;
                puVar30 = puVar30 + 8;
                puVar21 = puVar18;
              } while (puVar18 < (uint *)(iVar31 + uVar25));
              pcStack_38 = pcVar11;
            }
            goto LAB_017e7620;
          }
          param_2[3] = (int)(iVar31 + uVar25);
          puVar30 = (uint *)param_2[1];
          pcStack_38 = pcVar11;
        }
        *(short *)(puVar30 + 1) = (short)uVar25;
        *puVar30 = uVar22;
        if ((char *)0xffff < local_44 + -3) {
          param_2[10] = (int)puVar30 - *param_2 >> 3;
          pcVar11 = (char *)0x2;
          param_2[9] = 2;
        }
        *(short *)((int)puVar30 + 6) = (short)(local_44 + -3);
        param_2[1] = (int)(puVar30 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        param_4 = (uint *)((int)puVar26 + (int)local_44);
        if (puVar24 < param_4) break;
        while( true ) {
          iVar31 = local_60;
          pcVar11 = (char *)(((int)param_4 - iVar29) - iVar31);
          if (pcVar11 < pcVar7) {
            puVar30 = (uint *)((int)puVar10 + (int)(pcVar11 + iVar27 + (-(int)pcVar7 - iVar27)));
          }
          else {
            puVar30 = (uint *)(pcVar11 + iVar29);
          }
          if ((pcVar7 + ((iVar31 + -1) - ((int)param_4 - iVar29)) < (char *)0x3) ||
             (*puVar30 != *param_4)) break;
          if (pcVar11 < pcVar7) {
            puVar26 = puVar10;
          }
          else {
            puVar26 = puVar6;
          }
          puVar21 = puVar30 + 1;
          puVar12 = param_4 + 1;
          puVar18 = (uint *)((int)puVar12 + ((int)puVar26 - (int)puVar21));
          if (puVar6 < puVar18) {
            puVar18 = puVar6;
          }
          if (puVar12 < (uint *)((int)puVar18 + -3)) {
            if (puVar30[1] == param_4[1]) {
              puVar30 = puVar30 + 2;
              for (puVar28 = param_4 + 2; puVar28 < (uint *)((int)puVar18 + -3);
                  puVar28 = puVar28 + 1) {
                if (*puVar30 != *puVar28) {
                  uVar22 = *puVar30 ^ *puVar28;
                  bVar3 = (byte)uVar22;
                  bVar4 = (byte)(uVar22 >> 8);
                  bVar5 = (byte)(uVar22 >> 0x10);
                  bVar1 = (byte)(uVar22 >> 0x18);
                  pcVar23 = (char *)((int)puVar28 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                      bVar3 >> 1 & 1) << 1 |
                                                                     bVar3 >> 2 & 1) << 1 |
                                                                    bVar3 >> 3 & 1) << 1 |
                                                                   bVar3 >> 4 & 1) << 1 |
                                                                  bVar3 >> 5 & 1) << 1 |
                                                                 bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar12));
                  goto joined_r0x017e7848;
                }
                puVar30 = puVar30 + 1;
              }
              goto LAB_017e76ac;
            }
            uVar22 = puVar30[1] ^ param_4[1];
            bVar3 = (byte)uVar22;
            bVar4 = (byte)(uVar22 >> 8);
            bVar5 = (byte)(uVar22 >> 0x10);
            bVar1 = (byte)(uVar22 >> 0x18);
            pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar30 = puVar21;
            puVar28 = puVar12;
LAB_017e76ac:
            if (puVar28 < (uint *)((int)puVar18 + -1)) {
              if ((short)*puVar30 == (short)*puVar28) {
                puVar30 = (uint *)((int)puVar30 + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < puVar18) && ((char)*puVar30 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar23 = (char *)((int)puVar28 - (int)puVar12);
          }
joined_r0x017e7848:
          if (puVar26 == (uint *)((int)puVar21 + (int)pcVar23)) {
            puVar21 = (uint *)((int)puVar12 + (int)pcVar23);
            puVar26 = puVar15;
            puVar30 = puVar21;
            if (puVar21 < (uint *)((int)puVar6 + -3)) {
              if (*puVar15 == *(uint *)((int)puVar12 + (int)pcVar23)) {
                do {
                  puVar30 = puVar30 + 1;
                  puVar26 = puVar26 + 1;
                  if ((uint *)((int)puVar6 + -3) <= puVar30) goto LAB_017e7868;
                } while (*puVar26 == *puVar30);
                uVar22 = *puVar26 ^ *puVar30;
                bVar3 = (byte)uVar22;
                bVar4 = (byte)(uVar22 >> 8);
                bVar5 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                pcVar11 = (char *)((int)puVar30 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                    bVar3 >> 1 & 1) << 1 |
                                                                   bVar3 >> 2 & 1) << 1 |
                                                                  bVar3 >> 3 & 1) << 1 |
                                                                 bVar3 >> 4 & 1) << 1 |
                                                                bVar3 >> 5 & 1) << 1 |
                                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                           bVar4 >> 1 & 1) << 1 |
                                                                          bVar4 >> 2 & 1) << 1 |
                                                                         bVar4 >> 3 & 1) << 1 |
                                                                        bVar4 >> 4 & 1) << 1 |
                                                                       bVar4 >> 5 & 1) << 1 |
                                                                      bVar4 >> 6 & 1) << 1 |
                                                                     bVar4 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
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
                uVar22 = *puVar15 ^ *(uint *)((int)puVar12 + (int)pcVar23);
                bVar3 = (byte)uVar22;
                bVar4 = (byte)(uVar22 >> 8);
                bVar5 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
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
LAB_017e7868:
              if (puVar30 < (uint *)((int)puVar6 + -1)) {
                if ((short)*puVar26 == (short)*puVar30) {
                  puVar26 = (uint *)((int)puVar26 + 2);
                  puVar30 = (uint *)((int)puVar30 + 2);
                }
              }
              if ((puVar30 < puVar6) && ((char)*puVar26 == (char)*puVar30)) {
                puVar30 = (uint *)((int)puVar30 + 1);
              }
              pcVar11 = (char *)((int)puVar30 - (int)puVar21);
            }
            pcVar23 = pcVar23 + (int)pcVar11;
          }
          puVar30 = (uint *)param_2[3];
          if (puVar6 + -8 < param_4) {
            FUN_017bfa44(puVar30,param_4,param_4);
            pcVar11 = extraout_r1_00;
          }
          else {
            local_3c = *param_4;
            pcVar11 = (char *)param_4[1];
            uStack_34 = param_4[2];
            uStack_30 = param_4[3];
            *puVar30 = local_3c;
            puVar30[1] = (uint)pcVar11;
            puVar30[2] = uStack_34;
            puVar30[3] = uStack_30;
            pcStack_38 = pcVar11;
          }
          puVar9 = (undefined4 *)param_2[1];
          param_4 = (uint *)((int)param_4 + (int)(pcVar23 + 4));
          *(undefined2 *)(puVar9 + 1) = 0;
          *puVar9 = 1;
          uVar2 = SUB42(pcVar23 + 1,0);
          if (pcVar23 + 1 < (char *)0x10000) {
            *(undefined2 *)((int)puVar9 + 6) = uVar2;
            param_2[1] = (int)(puVar9 + 2);
          }
          else {
            param_2[10] = (int)puVar9 - *param_2 >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar9 + 6) = uVar2;
            param_2[1] = (int)(puVar9 + 2);
          }
          if (puVar24 < param_4) {
            local_60 = local_50;
            local_50 = iVar31;
            goto LAB_017e73c4;
          }
          local_60 = local_50;
          local_50 = iVar31;
        }
        puVar30 = param_4;
        local_60 = iVar31;
      }
    } while (puVar30 < puVar24);
  }
LAB_017e73c4:
  *param_3 = local_50;
  param_3[1] = local_60;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar6 - (int)param_4,pcVar11,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

