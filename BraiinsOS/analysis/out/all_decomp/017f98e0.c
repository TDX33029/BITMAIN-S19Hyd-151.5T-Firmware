// FUN_017f98e0 @ 017f98e0 size=4460 calls_out=5 calls_in=0
// strings: 

void FUN_017f98e0(int param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  int *extraout_r1;
  uint *puVar10;
  int *extraout_r1_00;
  undefined4 *puVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  char *pcVar24;
  int iVar25;
  char *pcVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  int *piVar33;
  uint *puVar34;
  int iVar35;
  uint *puVar36;
  undefined8 uVar37;
  uint *local_94;
  int local_7c;
  int local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  int *piStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar7 = (uint *)((int)param_4 + param_5);
  pcVar26 = *(char **)(param_1 + 4);
  puVar30 = puVar7 + -2;
  puVar11 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  local_4c = *param_3;
  local_7c = param_3[1];
  iVar35 = puVar11[1];
  piVar33 = *(int **)(param_1 + 0xc);
  iVar15 = puVar11[3];
  puVar12 = (uint *)*puVar11;
  puVar16 = (uint *)(pcVar26 + (int)piVar33);
  puVar36 = param_4;
  if ((iVar35 + iVar15) - (int)puVar12 == (int)param_4 - (int)puVar16) {
    puVar36 = (uint *)((int)param_4 + 1);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar17 = *(uint *)(param_1 + 200);
  piVar13 = param_2;
  if (puVar36 < puVar30) {
    iVar6 = -(int)piVar33 - iVar35;
    do {
      piVar13 = (int *)((int)puVar36 + ((1 - local_4c) - (int)pcVar26));
      pcVar24 = pcVar26;
      if (piVar13 < piVar33) {
        pcVar24 = (char *)((int)puVar12 + iVar35 + iVar6);
      }
      piVar18 = (int *)((int)piVar13 + (int)pcVar24);
      if (((char *)((int)piVar33 + (-1 - (int)piVar13)) < (char *)0x3) ||
         (*piVar18 != *(int *)((int)puVar36 + 1))) {
        pcVar24 = (char *)0x0;
      }
      else {
        if (piVar13 < piVar33) {
          puVar31 = puVar12;
        }
        else {
          puVar31 = puVar7;
        }
        puVar27 = (uint *)((int)puVar36 + 5);
        puVar22 = (uint *)(piVar18 + 1);
        puVar20 = (uint *)((int)puVar27 + ((int)puVar31 - (int)puVar22));
        if (puVar7 < puVar20) {
          puVar20 = puVar7;
        }
        if (puVar27 < (uint *)((int)puVar20 + -3)) {
          if (piVar18[1] == *(uint *)((int)puVar36 + 5)) {
            puVar29 = (uint *)(piVar18 + 2);
            puVar32 = (uint *)((int)puVar36 + 9);
            while( true ) {
              if ((uint *)((int)puVar20 + -3) <= puVar32) break;
              if (*puVar29 != *puVar32) {
                uVar28 = *puVar29 ^ *puVar32;
                bVar3 = (byte)uVar28;
                bVar4 = (byte)(uVar28 >> 8);
                bVar5 = (byte)(uVar28 >> 0x10);
                bVar1 = (byte)(uVar28 >> 0x18);
                pcVar24 = (char *)((int)puVar32 +
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
                                                                  )) >> 3) - (int)puVar27));
                goto joined_r0x017fa1ac;
              }
              puVar29 = puVar29 + 1;
              puVar32 = puVar32 + 1;
            }
            goto LAB_017fa4d4;
          }
          uVar28 = *(uint *)((int)puVar36 + 5) ^ piVar18[1];
          bVar3 = (byte)uVar28;
          bVar4 = (byte)(uVar28 >> 8);
          bVar5 = (byte)(uVar28 >> 0x10);
          bVar1 = (byte)(uVar28 >> 0x18);
          pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar29 = puVar22;
          puVar32 = puVar27;
LAB_017fa4d4:
          if (puVar32 < (uint *)((int)puVar20 + -1)) {
            if ((short)*puVar29 == (short)*puVar32) {
              puVar29 = (uint *)((int)puVar29 + 2);
              puVar32 = (uint *)((int)puVar32 + 2);
            }
          }
          if ((puVar32 < puVar20) && ((char)*puVar29 == (char)*puVar32)) {
            puVar32 = (uint *)((int)puVar32 + 1);
          }
          pcVar24 = (char *)((int)puVar32 - (int)puVar27);
        }
joined_r0x017fa1ac:
        if (puVar31 == (uint *)((int)puVar22 + (int)pcVar24)) {
          puVar22 = (uint *)((int)puVar27 + (int)pcVar24);
          puVar20 = puVar16;
          puVar31 = puVar22;
          if (puVar22 < (uint *)((int)puVar7 + -3)) {
            if (*puVar16 == *(uint *)((int)puVar27 + (int)pcVar24)) {
              do {
                puVar31 = puVar31 + 1;
                puVar20 = puVar20 + 1;
                if ((uint *)((int)puVar7 + -3) <= puVar31) goto LAB_017fa1cc;
              } while (*puVar20 == *puVar31);
              uVar28 = *puVar20 ^ *puVar31;
              bVar3 = (byte)uVar28;
              bVar4 = (byte)(uVar28 >> 8);
              bVar5 = (byte)(uVar28 >> 0x10);
              bVar1 = (byte)(uVar28 >> 0x18);
              pcVar23 = (char *)((int)puVar31 +
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
                                                            bVar1 >> 7)) >> 3) - (int)puVar22));
            }
            else {
              uVar28 = *puVar16 ^ *(uint *)((int)puVar27 + (int)pcVar24);
              bVar3 = (byte)uVar28;
              bVar4 = (byte)(uVar28 >> 8);
              bVar5 = (byte)(uVar28 >> 0x10);
              bVar1 = (byte)(uVar28 >> 0x18);
              pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
LAB_017fa1cc:
            if (puVar31 < (uint *)((int)puVar7 + -1)) {
              if ((short)*puVar20 == (short)*puVar31) {
                puVar20 = (uint *)((int)puVar20 + 2);
                puVar31 = (uint *)((int)puVar31 + 2);
              }
            }
            if ((puVar31 < puVar7) && ((char)*puVar20 == (char)*puVar31)) {
              puVar31 = (uint *)((int)puVar31 + 1);
            }
            pcVar23 = (char *)((int)puVar31 - (int)puVar22);
          }
          pcVar24 = pcVar24 + (int)pcVar23;
        }
        pcVar24 = pcVar24 + 4;
      }
      local_40 = 999999999;
      if (uVar17 == 5) {
        uVar37 = FUN_017c2248(param_1,puVar36,puVar7,&local_40);
      }
      else if (uVar17 < 6) {
        uVar37 = FUN_017c2144();
      }
      else {
        uVar37 = FUN_017c23a8();
      }
      piVar13 = (int *)((ulonglong)uVar37 >> 0x20);
      pcVar23 = (char *)uVar37;
      if (pcVar24 < pcVar23) {
        local_48 = local_40;
        if (pcVar23 < &DAT_00000004) goto LAB_017f9ed8;
        puVar31 = puVar36;
        pcVar24 = pcVar23;
        if (puVar36 < puVar30) goto LAB_017f9a9c;
LAB_017f9c38:
        if (3 < local_48) {
          piVar13 = (int *)((int)puVar31 + ((3 - local_48) - (int)pcVar26));
          if (piVar13 < piVar33) {
            pcVar23 = (char *)((int)puVar12 + iVar35 + iVar6);
            puVar36 = (uint *)(iVar35 + iVar15);
          }
          else {
            puVar36 = puVar16;
            pcVar23 = pcVar26;
          }
          puVar20 = (uint *)(pcVar23 + (int)piVar13);
          puVar27 = puVar31;
          if (param_4 < puVar31 && puVar36 < puVar20) {
            do {
              puVar20 = (uint *)((int)puVar20 + -1);
              puVar31 = (uint *)((int)puVar27 + -1);
              if (*(char *)puVar31 != *(char *)puVar20) {
                puVar31 = puVar27;
                break;
              }
              pcVar24 = pcVar24 + 1;
              puVar27 = puVar31;
            } while (param_4 < puVar31 && puVar36 < puVar20);
          }
          local_7c = local_4c;
          local_4c = local_48 - 3;
        }
LAB_017f9cd8:
        uVar28 = (int)puVar31 - (int)param_4;
        puVar36 = (uint *)param_2[3];
        if (puVar7 + -8 < puVar31) {
          FUN_017bfa44(puVar36,param_4,puVar31);
          piVar13 = extraout_r1;
LAB_017fa0dc:
          param_2[3] = param_2[3] + uVar28;
          puVar27 = (uint *)param_2[1];
          if (0xffff < uVar28) {
            param_2[10] = (int)puVar27 - *param_2 >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          piVar13 = (int *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar36[3] = uStack_30;
          *puVar36 = local_3c;
          puVar36[1] = (uint)piVar13;
          puVar36[2] = uStack_34;
          iVar25 = param_2[3];
          if (0x10 < uVar28) {
            local_3c = param_4[4];
            piVar13 = (int *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(iVar25 + 0x10) = local_3c;
            *(int **)(iVar25 + 0x14) = piVar13;
            *(uint *)(iVar25 + 0x18) = uStack_34;
            *(uint *)(iVar25 + 0x1c) = uStack_30;
            piStack_38 = piVar13;
            if (0x10 < (int)(uVar28 - 0x10)) {
              puVar36 = param_4 + 0x10;
              puVar27 = (uint *)(iVar25 + 0x20);
              do {
                uVar9 = puVar36[-7];
                uVar14 = puVar36[-6];
                puVar20 = puVar27 + 8;
                uVar21 = puVar36[-5];
                *puVar27 = puVar36[-8];
                puVar27[1] = uVar9;
                puVar27[2] = uVar14;
                puVar27[3] = uVar21;
                local_3c = puVar36[-4];
                piVar13 = (int *)puVar36[-3];
                uStack_34 = puVar36[-2];
                uStack_30 = puVar36[-1];
                puVar27[4] = local_3c;
                puVar27[5] = (uint)piVar13;
                puVar27[6] = uStack_34;
                puVar27[7] = uStack_30;
                puVar36 = puVar36 + 8;
                puVar27 = puVar20;
              } while (puVar20 < (uint *)(iVar25 + uVar28));
              piStack_38 = piVar13;
            }
            goto LAB_017fa0dc;
          }
          param_2[3] = (int)(iVar25 + uVar28);
          puVar27 = (uint *)param_2[1];
          piStack_38 = piVar13;
        }
        *puVar27 = local_48;
        *(short *)(puVar27 + 1) = (short)uVar28;
        if ((char *)0xffff < pcVar24 + -3) {
          param_2[10] = (int)puVar27 - *param_2 >> 3;
          piVar13 = (int *)&SUB_00000002;
          param_2[9] = 2;
        }
        *(short *)((int)puVar27 + 6) = (short)(pcVar24 + -3);
        puVar36 = (uint *)((int)puVar31 + (int)pcVar24);
        param_2[1] = (int)(puVar27 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar30 < puVar36) {
LAB_017fa9c8:
          param_4 = puVar36;
          goto LAB_017f9e10;
        }
        while( true ) {
          iVar25 = local_7c;
          piVar13 = (int *)(((int)puVar36 - (int)pcVar26) - iVar25);
          pcVar24 = pcVar26;
          if (piVar13 < piVar33) {
            pcVar24 = (char *)((int)puVar12 + iVar35 + iVar6);
          }
          puVar31 = (uint *)(pcVar24 + (int)piVar13);
          if (((char *)((int)piVar33 + ((iVar25 + -1) - ((int)puVar36 - (int)pcVar26))) <
               (char *)0x3) || (*puVar31 != *puVar36)) break;
          if (piVar13 < piVar33) {
            puVar27 = puVar12;
          }
          else {
            puVar27 = puVar7;
          }
          puVar20 = puVar31 + 1;
          puVar32 = puVar36 + 1;
          puVar22 = (uint *)((int)puVar32 + ((int)puVar27 - (int)puVar20));
          if (puVar7 < puVar22) {
            puVar22 = puVar7;
          }
          if (puVar32 < (uint *)((int)puVar22 + -3)) {
            if (puVar31[1] == puVar36[1]) {
              puVar31 = puVar31 + 2;
              puVar29 = puVar36 + 2;
              while( true ) {
                if ((uint *)((int)puVar22 + -3) <= puVar29) break;
                if (*puVar31 != *puVar29) {
                  uVar28 = *puVar31 ^ *puVar29;
                  bVar3 = (byte)uVar28;
                  bVar4 = (byte)(uVar28 >> 8);
                  bVar5 = (byte)(uVar28 >> 0x10);
                  bVar1 = (byte)(uVar28 >> 0x18);
                  pcVar24 = (char *)((int)puVar29 +
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
                                    (int)puVar32));
                  goto joined_r0x017fa29c;
                }
                puVar31 = puVar31 + 1;
                puVar29 = puVar29 + 1;
              }
              goto LAB_017fa528;
            }
            uVar28 = puVar31[1] ^ puVar36[1];
            bVar3 = (byte)uVar28;
            bVar4 = (byte)(uVar28 >> 8);
            bVar5 = (byte)(uVar28 >> 0x10);
            bVar1 = (byte)(uVar28 >> 0x18);
            pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar31 = puVar20;
            puVar29 = puVar32;
LAB_017fa528:
            if (puVar29 < (uint *)((int)puVar22 + -1)) {
              if ((short)*puVar31 == (short)*puVar29) {
                puVar31 = (uint *)((int)puVar31 + 2);
                puVar29 = (uint *)((int)puVar29 + 2);
              }
            }
            if ((puVar29 < puVar22) && ((char)*puVar31 == (char)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pcVar24 = (char *)((int)puVar29 - (int)puVar32);
          }
joined_r0x017fa29c:
          if (puVar27 == (uint *)((int)puVar20 + (int)pcVar24)) {
            puVar20 = (uint *)((int)puVar32 + (int)pcVar24);
            puVar31 = puVar20;
            puVar27 = puVar16;
            if (puVar20 < (uint *)((int)puVar7 + -3)) {
              if (*puVar16 == *(uint *)((int)puVar32 + (int)pcVar24)) {
                do {
                  puVar31 = puVar31 + 1;
                  puVar27 = puVar27 + 1;
                  if ((uint *)((int)puVar7 + -3) <= puVar31) goto LAB_017fa2bc;
                } while (*puVar27 == *puVar31);
                uVar28 = *puVar27 ^ *puVar31;
                bVar3 = (byte)uVar28;
                bVar4 = (byte)(uVar28 >> 8);
                bVar5 = (byte)(uVar28 >> 0x10);
                bVar1 = (byte)(uVar28 >> 0x18);
                pcVar23 = (char *)((int)puVar31 +
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
                                                                  )) >> 3) - (int)puVar20));
              }
              else {
                uVar28 = *puVar16 ^ *(uint *)((int)puVar32 + (int)pcVar24);
                bVar3 = (byte)uVar28;
                bVar4 = (byte)(uVar28 >> 8);
                bVar5 = (byte)(uVar28 >> 0x10);
                bVar1 = (byte)(uVar28 >> 0x18);
                pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
LAB_017fa2bc:
              if (puVar31 < (uint *)((int)puVar7 + -1)) {
                if ((short)*puVar27 == (short)*puVar31) {
                  puVar31 = (uint *)((int)puVar31 + 2);
                  puVar27 = (uint *)((int)puVar27 + 2);
                }
              }
              if ((puVar31 < puVar7) && ((char)*puVar27 == (char)*puVar31)) {
                puVar31 = (uint *)((int)puVar31 + 1);
              }
              pcVar23 = (char *)((int)puVar31 - (int)puVar20);
            }
            pcVar24 = pcVar24 + (int)pcVar23;
          }
          puVar31 = (uint *)param_2[3];
          if (puVar7 + -8 < puVar36) {
            FUN_017bfa44(puVar31,puVar36,puVar36);
            piVar13 = extraout_r1_00;
          }
          else {
            local_3c = *puVar36;
            piVar13 = (int *)puVar36[1];
            uStack_34 = puVar36[2];
            uStack_30 = puVar36[3];
            *puVar31 = local_3c;
            puVar31[1] = (uint)piVar13;
            puVar31[2] = uStack_34;
            puVar31[3] = uStack_30;
            piStack_38 = piVar13;
          }
          puVar11 = (undefined4 *)param_2[1];
          puVar36 = (uint *)((int)puVar36 + (int)(pcVar24 + 4));
          *(undefined2 *)(puVar11 + 1) = 0;
          *puVar11 = 1;
          uVar2 = SUB42(pcVar24 + 1,0);
          if (pcVar24 + 1 < (char *)0x10000) {
            *(undefined2 *)((int)puVar11 + 6) = uVar2;
            param_2[1] = (int)(puVar11 + 2);
          }
          else {
            param_2[10] = (int)puVar11 - *param_2 >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar11 + 6) = uVar2;
            param_2[1] = (int)(puVar11 + 2);
          }
          if (puVar30 < puVar36) {
            local_7c = local_4c;
            local_4c = iVar25;
            goto LAB_017fa9c8;
          }
          local_7c = local_4c;
          local_4c = iVar25;
        }
        param_4 = puVar36;
        local_7c = iVar25;
      }
      else {
        if (&DAT_00000004 <= pcVar24) {
          puVar31 = (uint *)((int)puVar36 + 1);
          local_48 = 1;
          pcVar23 = pcVar24;
          if (puVar36 < puVar30) {
LAB_017f9a9c:
            do {
              puVar27 = (uint *)((int)puVar36 + 1);
              piVar13 = (int *)(((int)puVar27 - (int)pcVar26) - local_4c);
              pcVar24 = pcVar26;
              if (piVar13 < piVar33) {
                pcVar24 = (char *)((int)puVar12 + iVar35 + iVar6);
              }
              piVar18 = (int *)(pcVar24 + (int)piVar13);
              if (((char *)((int)piVar33 + ((local_4c + -1) - ((int)puVar27 - (int)pcVar26))) <
                   (char *)0x3) || (*piVar18 != *(int *)((int)puVar36 + 1))) {
                iVar25 = LZCOUNT(local_48);
              }
              else {
                puVar22 = (uint *)(piVar18 + 1);
                puVar20 = puVar12;
                if (piVar33 <= piVar13) {
                  puVar20 = puVar7;
                }
                puVar29 = (uint *)((int)puVar36 + 5);
                puVar32 = (uint *)((int)puVar29 + ((int)puVar20 - (int)puVar22));
                if (puVar7 < puVar32) {
                  puVar32 = puVar7;
                }
                puVar10 = (uint *)((int)puVar32 + -3);
                if (puVar29 < puVar10) {
                  if (piVar18[1] == *(uint *)((int)puVar36 + 5)) {
                    puVar34 = (uint *)((int)puVar36 + 9);
                    local_94 = (uint *)(piVar18 + 2);
                    if (puVar34 < puVar10) {
                      do {
                        if (*local_94 != *puVar34) {
                          uVar28 = *puVar34 ^ *local_94;
                          bVar3 = (byte)uVar28;
                          bVar4 = (byte)(uVar28 >> 8);
                          bVar5 = (byte)(uVar28 >> 0x10);
                          bVar1 = (byte)(uVar28 >> 0x18);
                          pcVar24 = (char *)((int)puVar34 +
                                            (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                              bVar3 >> 1 & 1) << 1 |
                                                                             bVar3 >> 2 & 1) << 1 |
                                                                            bVar3 >> 3 & 1) << 1 |
                                                                           bVar3 >> 4 & 1) << 1 |
                                                                          bVar3 >> 5 & 1) << 1 |
                                                                         bVar3 >> 6 & 1) << 1 |
                                                                        bVar3 >> 7) << 0x18 |
                                                            (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                         bVar5 >> 6 & 1) << 1 |
                                                                        bVar5 >> 7) << 8 |
                                                            (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3) -
                                            (int)puVar29));
                          goto joined_r0x017f9fa0;
                        }
                        puVar34 = puVar34 + 1;
                        local_94 = local_94 + 1;
                      } while (puVar34 < puVar10);
                    }
                    goto LAB_017fa428;
                  }
                  uVar28 = piVar18[1] ^ *(uint *)((int)puVar36 + 5);
                  bVar3 = (byte)uVar28;
                  bVar4 = (byte)(uVar28 >> 8);
                  bVar5 = (byte)(uVar28 >> 0x10);
                  bVar1 = (byte)(uVar28 >> 0x18);
                  pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                      bVar1 >> 7)) >> 3);
                }
                else {
                  puVar34 = puVar29;
                  local_94 = puVar22;
LAB_017fa428:
                  if (puVar34 < (uint *)((int)puVar32 + -1)) {
                    if ((short)*local_94 == (short)*puVar34) {
                      local_94 = (uint *)((int)local_94 + 2);
                      puVar34 = (uint *)((int)puVar34 + 2);
                    }
                  }
                  if ((puVar34 < puVar32) && ((char)*local_94 == (char)*puVar34)) {
                    puVar34 = (uint *)((int)puVar34 + 1);
                  }
                  pcVar24 = (char *)((int)puVar34 - (int)puVar29);
                }
joined_r0x017f9fa0:
                if (puVar20 == (uint *)((int)puVar22 + (int)pcVar24)) {
                  puVar32 = (uint *)((int)puVar29 + (int)pcVar24);
                  puVar22 = puVar16;
                  puVar20 = puVar32;
                  if (puVar32 < (uint *)((int)puVar7 + -3)) {
                    if (*puVar16 == *(uint *)((int)puVar29 + (int)pcVar24)) {
                      do {
                        puVar20 = puVar20 + 1;
                        puVar22 = puVar22 + 1;
                        if ((uint *)((int)puVar7 + -3) <= puVar20) goto LAB_017f9fbc;
                      } while (*puVar22 == *puVar20);
                      uVar28 = *puVar22 ^ *puVar20;
                      bVar3 = (byte)uVar28;
                      bVar4 = (byte)(uVar28 >> 8);
                      bVar5 = (byte)(uVar28 >> 0x10);
                      bVar1 = (byte)(uVar28 >> 0x18);
                      pcVar8 = (char *)((int)puVar20 +
                                       (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                         bVar3 >> 1 & 1) << 1 |
                                                                        bVar3 >> 2 & 1) << 1 |
                                                                       bVar3 >> 3 & 1) << 1 |
                                                                      bVar3 >> 4 & 1) << 1 |
                                                                     bVar3 >> 5 & 1) << 1 |
                                                                    bVar3 >> 6 & 1) << 1 |
                                                                   bVar3 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                    bVar5 >> 6 & 1) << 1 |
                                                                   bVar5 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                         bVar1 >> 1 & 1) << 1 |
                                                                        bVar1 >> 2 & 1) << 1 |
                                                                       bVar1 >> 3 & 1) << 1 |
                                                                      bVar1 >> 4 & 1) << 1 |
                                                                     bVar1 >> 5 & 1) << 1 |
                                                                    bVar1 >> 6 & 1) << 1 |
                                                                   bVar1 >> 7)) >> 3) - (int)puVar32
                                       ));
                    }
                    else {
                      uVar28 = *puVar16 ^ *(uint *)((int)puVar29 + (int)pcVar24);
                      bVar3 = (byte)uVar28;
                      bVar4 = (byte)(uVar28 >> 8);
                      bVar5 = (byte)(uVar28 >> 0x10);
                      bVar1 = (byte)(uVar28 >> 0x18);
                      pcVar8 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3);
                    }
                  }
                  else {
LAB_017f9fbc:
                    if (puVar20 < (uint *)((int)puVar7 + -1)) {
                      if ((short)*puVar22 == (short)*puVar20) {
                        puVar22 = (uint *)((int)puVar22 + 2);
                        puVar20 = (uint *)((int)puVar20 + 2);
                      }
                    }
                    if ((puVar20 < puVar7) && ((char)*puVar22 == (char)*puVar20)) {
                      puVar20 = (uint *)((int)puVar20 + 1);
                    }
                    pcVar8 = (char *)((int)puVar20 - (int)puVar32);
                  }
                  pcVar24 = pcVar24 + (int)pcVar8;
                }
                iVar25 = LZCOUNT(local_48);
                if (pcVar24 < (char *)0xfffffffc &&
                    (int)(pcVar23 + -10) * 3 + iVar25 < (int)(pcVar24 + 4) * 3) {
                  local_48 = 1;
                  iVar25 = 0x1f;
                  puVar31 = puVar27;
                  pcVar23 = pcVar24 + 4;
                }
              }
              local_40 = 999999999;
              if (uVar17 == 5) {
                pcVar8 = (char *)FUN_017c2248(param_1,puVar27,puVar7,&local_40);
              }
              else if (uVar17 < 6) {
                pcVar8 = (char *)FUN_017c2144();
              }
              else {
                pcVar8 = (char *)FUN_017c23a8();
              }
              iVar19 = iVar25 + (int)pcVar23 * 4;
              if (pcVar8 < &DAT_00000004 ||
                  LZCOUNT(local_40) + (int)pcVar8 * 4 + -0x1f <= iVar19 + -0x1b) {
                pcVar24 = pcVar23;
                if (puVar30 <= puVar27) goto LAB_017f9c38;
                puVar27 = (uint *)((int)puVar36 + 2);
                piVar13 = (int *)(((int)puVar27 - (int)pcVar26) - local_4c);
                pcVar24 = pcVar26;
                if (piVar13 < piVar33) {
                  pcVar24 = (char *)((int)puVar12 + iVar35 + iVar6);
                }
                piVar18 = (int *)(pcVar24 + (int)piVar13);
                if (((char *)0x2 <
                     (char *)((int)piVar33 + ((local_4c + -1) - ((int)puVar27 - (int)pcVar26)))) &&
                   (*piVar18 == *(int *)((int)puVar36 + 2))) {
                  puVar32 = (uint *)(piVar18 + 1);
                  puVar22 = (uint *)((int)puVar36 + 6);
                  puVar20 = puVar12;
                  if (piVar33 <= piVar13) {
                    puVar20 = puVar7;
                  }
                  puVar29 = (uint *)((int)puVar22 + ((int)puVar20 - (int)puVar32));
                  if (puVar7 < puVar29) {
                    puVar29 = puVar7;
                  }
                  puVar10 = (uint *)((int)puVar29 + -3);
                  if (puVar22 < puVar10) {
                    if (piVar18[1] == *(uint *)((int)puVar36 + 6)) {
                      puVar36 = (uint *)((int)puVar36 + 10);
                      puVar34 = (uint *)(piVar18 + 2);
                      if (puVar36 < puVar10) {
                        do {
                          if (*puVar34 != *puVar36) {
                            uVar28 = *puVar34 ^ *puVar36;
                            bVar3 = (byte)uVar28;
                            bVar4 = (byte)(uVar28 >> 8);
                            bVar5 = (byte)(uVar28 >> 0x10);
                            bVar1 = (byte)(uVar28 >> 0x18);
                            pcVar24 = (char *)((int)puVar36 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                bVar3 >> 1 & 1) << 1
                                                                               | bVar3 >> 2 & 1) <<
                                                                               1 | bVar3 >> 3 & 1)
                                                                              << 1 | bVar3 >> 4 & 1)
                                                                             << 1 | bVar3 >> 5 & 1)
                                                                            << 1 | bVar3 >> 6 & 1)
                                                                           << 1 | bVar3 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar4 & 1)
                                                                                        << 1 | bVar4
                                                                                               >> 1 
                                                  & 1) << 1 | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                  << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                  | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
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
                                                                  )) >> 3) - (int)puVar22));
                            goto joined_r0x017fa3ac;
                          }
                          puVar36 = puVar36 + 1;
                          puVar34 = puVar34 + 1;
                        } while (puVar36 < puVar10);
                      }
                      goto LAB_017fa650;
                    }
                    uVar28 = piVar18[1] ^ *(uint *)((int)puVar36 + 6);
                    bVar3 = (byte)uVar28;
                    bVar4 = (byte)(uVar28 >> 8);
                    bVar5 = (byte)(uVar28 >> 0x10);
                    bVar1 = (byte)(uVar28 >> 0x18);
                    pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                       bVar3 >> 1 & 1) << 1 |
                                                                      bVar3 >> 2 & 1) << 1 |
                                                                     bVar3 >> 3 & 1) << 1 |
                                                                    bVar3 >> 4 & 1) << 1 |
                                                                   bVar3 >> 5 & 1) << 1 |
                                                                  bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                 bVar4 >> 1 & 1) <<
                                                                                 1 | bVar4 >> 2 & 1)
                                                                                << 1 | bVar4 >> 3 &
                                                                                       1) << 1 |
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
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3);
                  }
                  else {
                    puVar34 = puVar32;
                    puVar36 = puVar22;
LAB_017fa650:
                    if (puVar36 < (uint *)((int)puVar29 + -1)) {
                      if ((short)*puVar34 == (short)*puVar36) {
                        puVar34 = (uint *)((int)puVar34 + 2);
                        puVar36 = (uint *)((int)puVar36 + 2);
                      }
                    }
                    if ((puVar36 < puVar29) && ((char)*puVar34 == (char)*puVar36)) {
                      puVar36 = (uint *)((int)puVar36 + 1);
                    }
                    pcVar24 = (char *)((int)puVar36 - (int)puVar22);
                  }
joined_r0x017fa3ac:
                  if (puVar20 == (uint *)((int)puVar32 + (int)pcVar24)) {
                    puVar32 = (uint *)((int)puVar22 + (int)pcVar24);
                    puVar36 = puVar32;
                    puVar20 = puVar16;
                    if (puVar32 < (uint *)((int)puVar7 + -3)) {
                      if (*puVar16 == *(uint *)((int)puVar22 + (int)pcVar24)) {
                        do {
                          puVar36 = puVar36 + 1;
                          puVar20 = puVar20 + 1;
                          if ((uint *)((int)puVar7 + -3) <= puVar36) goto LAB_017fa3c8;
                        } while (*puVar20 == *puVar36);
                        uVar28 = *puVar20 ^ *puVar36;
                        bVar3 = (byte)uVar28;
                        bVar4 = (byte)(uVar28 >> 8);
                        bVar5 = (byte)(uVar28 >> 0x10);
                        bVar1 = (byte)(uVar28 >> 0x18);
                        pcVar8 = (char *)((int)puVar36 +
                                         (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                           bVar3 >> 1 & 1) << 1 |
                                                                          bVar3 >> 2 & 1) << 1 |
                                                                         bVar3 >> 3 & 1) << 1 |
                                                                        bVar3 >> 4 & 1) << 1 |
                                                                       bVar3 >> 5 & 1) << 1 |
                                                                      bVar3 >> 6 & 1) << 1 |
                                                                     bVar3 >> 7) << 0x18 |
                                                         (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 8 |
                                                         (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                           bVar1 >> 1 & 1) << 1 |
                                                                          bVar1 >> 2 & 1) << 1 |
                                                                         bVar1 >> 3 & 1) << 1 |
                                                                        bVar1 >> 4 & 1) << 1 |
                                                                       bVar1 >> 5 & 1) << 1 |
                                                                      bVar1 >> 6 & 1) << 1 |
                                                                     bVar1 >> 7)) >> 3) -
                                         (int)puVar32));
                      }
                      else {
                        uVar28 = *puVar16 ^ *(uint *)((int)puVar22 + (int)pcVar24);
                        bVar3 = (byte)uVar28;
                        bVar4 = (byte)(uVar28 >> 8);
                        bVar5 = (byte)(uVar28 >> 0x10);
                        bVar1 = (byte)(uVar28 >> 0x18);
                        pcVar8 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar1 & 1) << 1 |
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
LAB_017fa3c8:
                      if (puVar36 < (uint *)((int)puVar7 + -1)) {
                        if ((short)*puVar20 == (short)*puVar36) {
                          puVar36 = (uint *)((int)puVar36 + 2);
                          puVar20 = (uint *)((int)puVar20 + 2);
                        }
                      }
                      if ((puVar36 < puVar7) && ((char)*puVar20 == (char)*puVar36)) {
                        puVar36 = (uint *)((int)puVar36 + 1);
                      }
                      pcVar8 = (char *)((int)puVar36 - (int)puVar32);
                    }
                    pcVar24 = pcVar24 + (int)pcVar8;
                  }
                  pcVar8 = pcVar24;
                  if ((char *)0xfffffffb < pcVar24) {
                    pcVar8 = (char *)0x0;
                  }
                  if (pcVar24 < (char *)0xfffffffc) {
                    pcVar8 = (char *)0x1;
                  }
                  if ((int)(pcVar24 + 4) * 4 <= iVar19 + -0x1e) {
                    pcVar8 = (char *)0x0;
                  }
                  if (pcVar8 != (char *)0x0) {
                    local_48 = 1;
                    iVar25 = 0x1f;
                    puVar31 = puVar27;
                    pcVar23 = pcVar24 + 4;
                  }
                }
                local_40 = 999999999;
                if (uVar17 == 5) {
                  pcVar8 = (char *)FUN_017c2248(param_1,puVar27,puVar7,&local_40);
                }
                else if (uVar17 < 6) {
                  pcVar8 = (char *)FUN_017c2144();
                }
                else {
                  pcVar8 = (char *)FUN_017c23a8();
                }
                pcVar24 = pcVar23;
                if (pcVar8 < (char *)0x4 ||
                    LZCOUNT(local_40) + (int)pcVar8 * 4 + -0x1f <= iVar25 + (int)(pcVar23 + -6) * 4)
                goto LAB_017f9c38;
              }
              puVar31 = puVar27;
              pcVar24 = pcVar8;
              local_48 = local_40;
              if (puVar30 <= puVar27) goto LAB_017f9c38;
              pcVar23 = pcVar8;
              puVar36 = puVar27;
            } while( true );
          }
          goto LAB_017f9cd8;
        }
LAB_017f9ed8:
        uVar28 = ((uint)((int)puVar36 - (int)param_4) >> 8) + 1;
        puVar36 = (uint *)((int)puVar36 + uVar28);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar28);
      }
    } while (puVar36 < puVar30);
  }
LAB_017f9e10:
  *param_3 = local_4c;
  param_3[1] = local_7c;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar7 - (int)param_4,piVar13,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

