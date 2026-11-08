// FUN_017ec11c @ 017ec11c size=3536 calls_out=5 calls_in=0
// strings: 

void FUN_017ec11c(char *param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  char *extraout_r1;
  char *extraout_r1_00;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  char *pcVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  char *pcVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  uint *puVar33;
  undefined8 uVar34;
  int local_70;
  int local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  char *pcStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar8 = (uint *)((int)param_4 + param_5);
  puVar24 = puVar8 + -2;
  iVar32 = *(int *)(param_1 + 4);
  pcVar7 = *(char **)(param_1 + 0xc);
  puVar10 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  local_4c = *param_3;
  local_70 = param_3[1];
  iVar30 = puVar10[1];
  iVar16 = puVar10[3];
  puVar11 = (uint *)*puVar10;
  puVar17 = (uint *)(pcVar7 + iVar32);
  puVar33 = param_4;
  if ((iVar30 + iVar16) - (int)puVar11 == (int)param_4 - (int)puVar17) {
    puVar33 = (uint *)((int)param_4 + 1);
  }
  param_1[0xdc] = '\0';
  param_1[0xdd] = '\0';
  param_1[0xde] = '\0';
  param_1[0xdf] = '\0';
  uVar18 = *(uint *)(param_1 + 200);
  pcVar12 = param_1;
  if (puVar33 < puVar24) {
    iVar6 = -(int)pcVar7 - iVar30;
LAB_017ec224:
    pcVar12 = (char *)((int)puVar33 + ((1 - local_4c) - iVar32));
    if (pcVar12 < pcVar7) {
      piVar19 = (int *)((int)puVar11 + (int)(pcVar12 + iVar30 + iVar6));
    }
    else {
      piVar19 = (int *)(pcVar12 + iVar32);
    }
    if ((pcVar7 + (-1 - (int)pcVar12) < (char *)0x3) || (*piVar19 != *(int *)((int)puVar33 + 1))) {
      pcVar25 = (char *)0x0;
    }
    else {
      if (pcVar12 < pcVar7) {
        puVar13 = puVar11;
      }
      else {
        puVar13 = puVar8;
      }
      puVar21 = (uint *)((int)puVar33 + 5);
      puVar23 = (uint *)(piVar19 + 1);
      puVar20 = (uint *)((int)puVar21 + ((int)puVar13 - (int)puVar23));
      if (puVar8 < puVar20) {
        puVar20 = puVar8;
      }
      if (puVar21 < (uint *)((int)puVar20 + -3)) {
        if (piVar19[1] == *(uint *)((int)puVar33 + 5)) {
          puVar28 = (uint *)(piVar19 + 2);
          puVar31 = (uint *)((int)puVar33 + 9);
          while( true ) {
            if ((uint *)((int)puVar20 + -3) <= puVar31) break;
            if (*puVar28 != *puVar31) {
              uVar27 = *puVar31 ^ *puVar28;
              bVar3 = (byte)uVar27;
              bVar4 = (byte)(uVar27 >> 8);
              bVar5 = (byte)(uVar27 >> 0x10);
              bVar1 = (byte)(uVar27 >> 0x18);
              pcVar25 = (char *)((int)puVar31 +
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
                                                            bVar1 >> 7)) >> 3) - (int)puVar21));
              goto joined_r0x017ec7f4;
            }
            puVar28 = puVar28 + 1;
            puVar31 = puVar31 + 1;
          }
          goto LAB_017eca4c;
        }
        uVar27 = piVar19[1] ^ *(uint *)((int)puVar33 + 5);
        bVar3 = (byte)uVar27;
        bVar4 = (byte)(uVar27 >> 8);
        bVar5 = (byte)(uVar27 >> 0x10);
        bVar1 = (byte)(uVar27 >> 0x18);
        pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar28 = puVar23;
        puVar31 = puVar21;
LAB_017eca4c:
        if (puVar31 < (uint *)((int)puVar20 + -1)) {
          if ((short)*puVar28 == (short)*puVar31) {
            puVar28 = (uint *)((int)puVar28 + 2);
            puVar31 = (uint *)((int)puVar31 + 2);
          }
        }
        if ((puVar31 < puVar20) && ((char)*puVar28 == (char)*puVar31)) {
          puVar31 = (uint *)((int)puVar31 + 1);
        }
        pcVar25 = (char *)((int)puVar31 - (int)puVar21);
      }
joined_r0x017ec7f4:
      if (puVar13 == (uint *)((int)puVar23 + (int)pcVar25)) {
        puVar23 = (uint *)((int)puVar21 + (int)pcVar25);
        puVar20 = puVar17;
        puVar13 = puVar23;
        if (puVar23 < (uint *)((int)puVar8 + -3)) {
          if (*puVar17 == *(uint *)((int)puVar21 + (int)pcVar25)) {
            do {
              puVar13 = puVar13 + 1;
              puVar20 = puVar20 + 1;
              if ((uint *)((int)puVar8 + -3) <= puVar13) goto LAB_017ec814;
            } while (*puVar20 == *puVar13);
            uVar27 = *puVar20 ^ *puVar13;
            bVar3 = (byte)uVar27;
            bVar4 = (byte)(uVar27 >> 8);
            bVar5 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
            pcVar12 = (char *)((int)puVar13 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar23));
          }
          else {
            uVar27 = *puVar17 ^ *(uint *)((int)puVar21 + (int)pcVar25);
            bVar3 = (byte)uVar27;
            bVar4 = (byte)(uVar27 >> 8);
            bVar5 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
            pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
        }
        else {
LAB_017ec814:
          if (puVar13 < (uint *)((int)puVar8 + -1)) {
            if ((short)*puVar20 == (short)*puVar13) {
              puVar20 = (uint *)((int)puVar20 + 2);
              puVar13 = (uint *)((int)puVar13 + 2);
            }
          }
          if ((puVar13 < puVar8) && ((char)*puVar20 == (char)*puVar13)) {
            puVar13 = (uint *)((int)puVar13 + 1);
          }
          pcVar12 = (char *)((int)puVar13 - (int)puVar23);
        }
        pcVar25 = pcVar25 + (int)pcVar12;
      }
      pcVar25 = pcVar25 + 4;
    }
    local_40 = 999999999;
    if (uVar18 == 5) {
      uVar34 = FUN_017c8078(param_1,puVar33,puVar8,&local_40);
    }
    else if (uVar18 < 6) {
      uVar34 = FUN_017c8884();
    }
    else {
      uVar34 = FUN_017c7868();
    }
    pcVar12 = (char *)((ulonglong)uVar34 >> 0x20);
    pcVar29 = (char *)uVar34;
    if (pcVar25 < pcVar29) {
      local_48 = local_40;
      if (pcVar29 < (char *)0x4) goto LAB_017ec60c;
      puVar13 = puVar33;
      if (puVar33 < puVar24) goto LAB_017ec2dc;
      goto LAB_017ec3a4;
    }
    if ((char *)0x3 < pcVar25) {
      local_48 = 1;
      puVar13 = (uint *)((int)puVar33 + 1);
      pcVar29 = pcVar25;
      if (puVar33 < puVar24) {
LAB_017ec2dc:
        do {
          puVar21 = (uint *)((int)puVar33 + 1);
          pcVar12 = (char *)(((int)puVar21 - iVar32) - local_4c);
          if (pcVar12 < pcVar7) {
            puVar20 = (uint *)((int)puVar11 + (int)(pcVar12 + iVar30 + iVar6));
          }
          else {
            puVar20 = (uint *)(pcVar12 + iVar32);
          }
          if ((pcVar7 + ((local_4c + -1) - ((int)puVar21 - iVar32)) < (char *)0x3) ||
             (*puVar20 != *puVar21)) {
            iVar26 = LZCOUNT(local_48);
          }
          else {
            puVar23 = puVar20 + 1;
            if (pcVar12 < pcVar7) {
              puVar31 = puVar11;
            }
            else {
              puVar31 = puVar8;
            }
            puVar28 = (uint *)((int)puVar33 + 5);
            puVar15 = (uint *)((int)puVar28 + ((int)puVar31 - (int)puVar23));
            if (puVar8 < puVar15) {
              puVar15 = puVar8;
            }
            if (puVar28 < (uint *)((int)puVar15 + -3)) {
              if (puVar20[1] == *(uint *)((int)puVar33 + 5)) {
                puVar20 = puVar20 + 2;
                puVar33 = (uint *)((int)puVar33 + 9);
                while( true ) {
                  if ((uint *)((int)puVar15 + -3) <= puVar33) break;
                  if (*puVar20 != *puVar33) {
                    uVar27 = *puVar20 ^ *puVar33;
                    bVar3 = (byte)uVar27;
                    bVar4 = (byte)(uVar27 >> 8);
                    bVar5 = (byte)(uVar27 >> 0x10);
                    bVar1 = (byte)(uVar27 >> 0x18);
                    pcVar12 = (char *)((int)puVar33 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                  )) >> 3) - (int)puVar28));
                    goto joined_r0x017ec8ec;
                  }
                  puVar20 = puVar20 + 1;
                  puVar33 = puVar33 + 1;
                }
                goto LAB_017ecaa0;
              }
              uVar27 = puVar20[1] ^ *(uint *)((int)puVar33 + 5);
              bVar3 = (byte)uVar27;
              bVar4 = (byte)(uVar27 >> 8);
              bVar5 = (byte)(uVar27 >> 0x10);
              bVar1 = (byte)(uVar27 >> 0x18);
              pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            else {
              puVar33 = puVar28;
              puVar20 = puVar23;
LAB_017ecaa0:
              if (puVar33 < (uint *)((int)puVar15 + -1)) {
                if ((short)*puVar20 == (short)*puVar33) {
                  puVar33 = (uint *)((int)puVar33 + 2);
                  puVar20 = (uint *)((int)puVar20 + 2);
                }
              }
              if ((puVar33 < puVar15) && ((char)*puVar20 == (char)*puVar33)) {
                puVar33 = (uint *)((int)puVar33 + 1);
              }
              pcVar12 = (char *)((int)puVar33 - (int)puVar28);
            }
joined_r0x017ec8ec:
            if (puVar31 == (uint *)((int)puVar23 + (int)pcVar12)) {
              puVar23 = (uint *)((int)puVar28 + (int)pcVar12);
              puVar20 = puVar17;
              puVar33 = puVar23;
              if (puVar23 < (uint *)((int)puVar8 + -3)) {
                if (*puVar17 == *(uint *)((int)puVar28 + (int)pcVar12)) {
                  do {
                    puVar33 = puVar33 + 1;
                    puVar20 = puVar20 + 1;
                    if ((uint *)((int)puVar8 + -3) <= puVar33) goto LAB_017ec90c;
                  } while (*puVar20 == *puVar33);
                  uVar27 = *puVar20 ^ *puVar33;
                  bVar3 = (byte)uVar27;
                  bVar4 = (byte)(uVar27 >> 8);
                  bVar5 = (byte)(uVar27 >> 0x10);
                  bVar1 = (byte)(uVar27 >> 0x18);
                  pcVar25 = (char *)((int)puVar33 +
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
                                    (int)puVar23));
                }
                else {
                  uVar27 = *puVar17 ^ *(uint *)((int)puVar28 + (int)pcVar12);
                  bVar3 = (byte)uVar27;
                  bVar4 = (byte)(uVar27 >> 8);
                  bVar5 = (byte)(uVar27 >> 0x10);
                  bVar1 = (byte)(uVar27 >> 0x18);
                  pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
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
              }
              else {
LAB_017ec90c:
                if (puVar33 < (uint *)((int)puVar8 + -1)) {
                  if ((short)*puVar20 == (short)*puVar33) {
                    puVar20 = (uint *)((int)puVar20 + 2);
                    puVar33 = (uint *)((int)puVar33 + 2);
                  }
                }
                if ((puVar33 < puVar8) && ((char)*puVar20 == (char)*puVar33)) {
                  puVar33 = (uint *)((int)puVar33 + 1);
                }
                pcVar25 = (char *)((int)puVar33 - (int)puVar23);
              }
              pcVar12 = pcVar12 + (int)pcVar25;
            }
            iVar26 = LZCOUNT(local_48);
            if (pcVar12 < (char *)0xfffffffc &&
                (int)(pcVar29 + -10) * 3 + iVar26 < (int)(pcVar12 + 4) * 3) {
              local_48 = 1;
              iVar26 = 0x1f;
              puVar13 = puVar21;
              pcVar29 = pcVar12 + 4;
            }
          }
          local_40 = 999999999;
          if (uVar18 == 5) {
            pcVar12 = (char *)FUN_017c8078(param_1,puVar21,puVar8,&local_40);
          }
          else if (uVar18 < 6) {
            pcVar12 = (char *)FUN_017c8884();
          }
          else {
            pcVar12 = (char *)FUN_017c7868();
          }
          puVar33 = puVar13;
          if (pcVar12 < (char *)0x4 ||
              LZCOUNT(local_40) + (int)pcVar12 * 4 + -0x1f <= iVar26 + (int)pcVar29 * 4 + -0x1b)
          goto LAB_017ec3a4;
          puVar33 = puVar21;
          pcVar29 = pcVar12;
          if (puVar24 <= puVar21) goto LAB_017ece9c;
          local_48 = local_40;
          puVar13 = puVar21;
        } while( true );
      }
      goto LAB_017ec444;
    }
LAB_017ec60c:
    uVar27 = ((uint)((int)puVar33 - (int)param_4) >> 8) + 1;
    puVar33 = (uint *)((int)puVar33 + uVar27);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar27);
    goto LAB_017ec568;
  }
LAB_017ec578:
  *param_3 = local_4c;
  param_3[1] = local_70;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar8 - (int)param_4,pcVar12,local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_017ece9c:
  local_48 = local_40;
LAB_017ec3a4:
  puVar13 = puVar33;
  if (3 < local_48) {
    pcVar12 = (char *)((int)puVar33 + ((3 - local_48) - iVar32));
    if (pcVar12 < pcVar7) {
      puVar21 = (uint *)((int)puVar11 + (int)(pcVar12 + iVar30 + iVar6));
      puVar13 = (uint *)(iVar30 + iVar16);
    }
    else {
      puVar21 = (uint *)(pcVar12 + iVar32);
      puVar13 = puVar17;
    }
    puVar20 = puVar33;
    if (param_4 < puVar33 && puVar13 < puVar21) {
      do {
        puVar21 = (uint *)((int)puVar21 + -1);
        puVar33 = (uint *)((int)puVar20 + -1);
        if (*(char *)puVar33 != *(char *)puVar21) {
          puVar33 = puVar20;
          break;
        }
        pcVar29 = pcVar29 + 1;
        puVar20 = puVar33;
      } while (param_4 < puVar33 && puVar13 < puVar21);
    }
    local_70 = local_4c;
    local_4c = local_48 - 3;
    puVar13 = puVar33;
  }
LAB_017ec444:
  uVar27 = (int)puVar13 - (int)param_4;
  puVar33 = (uint *)param_2[3];
  if (puVar8 + -8 < puVar13) {
    FUN_017bfa44(puVar33,param_4,puVar13);
    pcVar12 = extraout_r1;
  }
  else {
    local_3c = *param_4;
    pcVar12 = (char *)param_4[1];
    uStack_34 = param_4[2];
    uStack_30 = param_4[3];
    *puVar33 = local_3c;
    puVar33[1] = (uint)pcVar12;
    puVar33[2] = uStack_34;
    puVar33[3] = uStack_30;
    iVar26 = param_2[3];
    if (uVar27 < 0x11) {
      puVar21 = (uint *)param_2[1];
      param_2[3] = (int)(iVar26 + uVar27);
      pcStack_38 = pcVar12;
      goto LAB_017ec4ac;
    }
    local_3c = param_4[4];
    pcVar12 = (char *)param_4[5];
    uStack_34 = param_4[6];
    uStack_30 = param_4[7];
    *(uint *)(iVar26 + 0x10) = local_3c;
    *(char **)(iVar26 + 0x14) = pcVar12;
    *(uint *)(iVar26 + 0x18) = uStack_34;
    *(uint *)(iVar26 + 0x1c) = uStack_30;
    pcStack_38 = pcVar12;
    if (0x10 < (int)(uVar27 - 0x10)) {
      puVar33 = param_4 + 0x10;
      puVar21 = (uint *)(iVar26 + 0x20);
      do {
        uVar9 = puVar33[-7];
        uVar14 = puVar33[-6];
        puVar20 = puVar21 + 8;
        uVar22 = puVar33[-5];
        *puVar21 = puVar33[-8];
        puVar21[1] = uVar9;
        puVar21[2] = uVar14;
        puVar21[3] = uVar22;
        local_3c = puVar33[-4];
        pcVar12 = (char *)puVar33[-3];
        uStack_34 = puVar33[-2];
        uStack_30 = puVar33[-1];
        puVar21[4] = local_3c;
        puVar21[5] = (uint)pcVar12;
        puVar21[6] = uStack_34;
        puVar21[7] = uStack_30;
        puVar33 = puVar33 + 8;
        puVar21 = puVar20;
      } while (puVar20 < (uint *)(iVar26 + uVar27));
      pcStack_38 = pcVar12;
    }
  }
  param_2[3] = param_2[3] + uVar27;
  puVar21 = (uint *)param_2[1];
  if (0xffff < uVar27) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    param_2[9] = 1;
  }
LAB_017ec4ac:
  *puVar21 = local_48;
  *(short *)(puVar21 + 1) = (short)uVar27;
  if ((char *)0xffff < pcVar29 + -3) {
    param_2[10] = (int)puVar21 - *param_2 >> 3;
    pcVar12 = (char *)0x2;
    param_2[9] = 2;
  }
  *(short *)((int)puVar21 + 6) = (short)(pcVar29 + -3);
  puVar33 = (uint *)((int)puVar13 + (int)pcVar29);
  param_2[1] = (int)(puVar21 + 2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    param_1[0xdc] = '\0';
    param_1[0xdd] = '\0';
    param_1[0xde] = '\0';
    param_1[0xdf] = '\0';
  }
  if (puVar24 < puVar33) {
LAB_017ece58:
    param_4 = puVar33;
    goto LAB_017ec578;
  }
  while( true ) {
    iVar26 = local_70;
    pcVar12 = (char *)(((int)puVar33 - iVar32) - iVar26);
    if (pcVar12 < pcVar7) {
      puVar13 = (uint *)((int)puVar11 + (int)(pcVar12 + iVar30 + iVar6));
    }
    else {
      puVar13 = (uint *)(pcVar12 + iVar32);
    }
    if ((pcVar7 + ((iVar26 + -1) - ((int)puVar33 - iVar32)) < (char *)0x3) || (*puVar13 != *puVar33)
       ) break;
    if (pcVar12 < pcVar7) {
      puVar21 = puVar11;
    }
    else {
      puVar21 = puVar8;
    }
    puVar20 = puVar13 + 1;
    puVar31 = puVar33 + 1;
    puVar23 = (uint *)((int)puVar31 + ((int)puVar21 - (int)puVar20));
    if (puVar8 < puVar23) {
      puVar23 = puVar8;
    }
    if (puVar31 < (uint *)((int)puVar23 + -3)) {
      if (puVar13[1] == puVar33[1]) {
        puVar13 = puVar13 + 2;
        puVar28 = puVar33 + 2;
        while( true ) {
          if ((uint *)((int)puVar23 + -3) <= puVar28) break;
          if (*puVar13 != *puVar28) {
            uVar27 = *puVar13 ^ *puVar28;
            bVar3 = (byte)uVar27;
            bVar4 = (byte)(uVar27 >> 8);
            bVar5 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
            pcVar25 = (char *)((int)puVar28 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar31));
            goto joined_r0x017ec9dc;
          }
          puVar13 = puVar13 + 1;
          puVar28 = puVar28 + 1;
        }
        goto LAB_017ecb44;
      }
      uVar27 = puVar13[1] ^ puVar33[1];
      bVar3 = (byte)uVar27;
      bVar4 = (byte)(uVar27 >> 8);
      bVar5 = (byte)(uVar27 >> 0x10);
      bVar1 = (byte)(uVar27 >> 0x18);
      pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                        bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1
                                                      | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                                                    | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar13 = puVar20;
      puVar28 = puVar31;
LAB_017ecb44:
      if (puVar28 < (uint *)((int)puVar23 + -1)) {
        if ((short)*puVar13 == (short)*puVar28) {
          puVar13 = (uint *)((int)puVar13 + 2);
          puVar28 = (uint *)((int)puVar28 + 2);
        }
      }
      if ((puVar28 < puVar23) && ((char)*puVar13 == (char)*puVar28)) {
        puVar28 = (uint *)((int)puVar28 + 1);
      }
      pcVar25 = (char *)((int)puVar28 - (int)puVar31);
    }
joined_r0x017ec9dc:
    if (puVar21 == (uint *)((int)puVar20 + (int)pcVar25)) {
      puVar20 = (uint *)((int)puVar31 + (int)pcVar25);
      puVar13 = puVar20;
      puVar21 = puVar17;
      if (puVar20 < (uint *)((int)puVar8 + -3)) {
        if (*puVar17 == *(uint *)((int)puVar31 + (int)pcVar25)) {
          do {
            puVar13 = puVar13 + 1;
            puVar21 = puVar21 + 1;
            if ((uint *)((int)puVar8 + -3) <= puVar13) goto LAB_017ec9fc;
          } while (*puVar21 == *puVar13);
          uVar27 = *puVar21 ^ *puVar13;
          bVar3 = (byte)uVar27;
          bVar4 = (byte)(uVar27 >> 8);
          bVar5 = (byte)(uVar27 >> 0x10);
          bVar1 = (byte)(uVar27 >> 0x18);
          pcVar12 = (char *)((int)puVar13 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar20));
        }
        else {
          uVar27 = *puVar17 ^ *(uint *)((int)puVar31 + (int)pcVar25);
          bVar3 = (byte)uVar27;
          bVar4 = (byte)(uVar27 >> 8);
          bVar5 = (byte)(uVar27 >> 0x10);
          bVar1 = (byte)(uVar27 >> 0x18);
          pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
      }
      else {
LAB_017ec9fc:
        if (puVar13 < (uint *)((int)puVar8 + -1)) {
          if ((short)*puVar21 == (short)*puVar13) {
            puVar13 = (uint *)((int)puVar13 + 2);
            puVar21 = (uint *)((int)puVar21 + 2);
          }
        }
        if ((puVar13 < puVar8) && ((char)*puVar21 == (char)*puVar13)) {
          puVar13 = (uint *)((int)puVar13 + 1);
        }
        pcVar12 = (char *)((int)puVar13 - (int)puVar20);
      }
      pcVar25 = pcVar25 + (int)pcVar12;
    }
    puVar13 = (uint *)param_2[3];
    if (puVar8 + -8 < puVar33) {
      FUN_017bfa44(puVar13,puVar33,puVar33);
      pcVar12 = extraout_r1_00;
    }
    else {
      local_3c = *puVar33;
      pcVar12 = (char *)puVar33[1];
      uStack_34 = puVar33[2];
      uStack_30 = puVar33[3];
      *puVar13 = local_3c;
      puVar13[1] = (uint)pcVar12;
      puVar13[2] = uStack_34;
      puVar13[3] = uStack_30;
      pcStack_38 = pcVar12;
    }
    puVar10 = (undefined4 *)param_2[1];
    puVar33 = (uint *)((int)puVar33 + (int)(pcVar25 + 4));
    *(undefined2 *)(puVar10 + 1) = 0;
    *puVar10 = 1;
    uVar2 = SUB42(pcVar25 + 1,0);
    if (pcVar25 + 1 < (char *)0x10000) {
      *(undefined2 *)((int)puVar10 + 6) = uVar2;
      param_2[1] = (int)(puVar10 + 2);
    }
    else {
      param_2[10] = (int)puVar10 - *param_2 >> 3;
      param_2[9] = 2;
      *(undefined2 *)((int)puVar10 + 6) = uVar2;
      param_2[1] = (int)(puVar10 + 2);
    }
    if (puVar24 < puVar33) {
      local_70 = local_4c;
      local_4c = iVar26;
      goto LAB_017ece58;
    }
    local_70 = local_4c;
    local_4c = iVar26;
  }
  param_4 = puVar33;
  local_70 = iVar26;
LAB_017ec568:
  if (puVar24 <= puVar33) goto code_r0x017ec574;
  goto LAB_017ec224;
code_r0x017ec574:
  goto LAB_017ec578;
}

