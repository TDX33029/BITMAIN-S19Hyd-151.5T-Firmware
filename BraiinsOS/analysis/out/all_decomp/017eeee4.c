// FUN_017eeee4 @ 017eeee4 size=5360 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017eeee4(int param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  char *extraout_r1;
  char *extraout_r1_00;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  char *pcVar30;
  char *pcVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint *puVar35;
  uint *puVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  undefined8 uVar41;
  uint *local_9c;
  int local_6c;
  uint *local_64;
  int local_54;
  uint local_40;
  uint local_3c;
  char *pcStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar12 = (uint *)((int)param_4 + param_5);
  puVar38 = puVar12 + -4;
  uVar13 = *(uint *)(param_1 + 0xc4);
  iVar28 = *(int *)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  puVar20 = *(undefined4 **)(param_1 + 0xb4);
  iVar8 = puVar20[1];
  iVar15 = puVar20[3];
  pcVar9 = *(char **)(param_1 + 0xc);
  puVar26 = (uint *)*puVar20;
  uVar21 = uVar13;
  if (5 < uVar13) {
    uVar21 = 6;
  }
  puVar10 = (uint *)(pcVar9 + iVar28);
  pcVar14 = (char *)((iVar8 + iVar15) - (int)puVar26);
  if (uVar21 < 4) {
    uVar21 = 4;
  }
  puVar33 = param_4;
  if (pcVar14 == (char *)((int)param_4 - (int)puVar10)) {
    puVar33 = (uint *)((int)param_4 + 1);
  }
  local_54 = *param_3;
  uVar22 = *(uint *)(param_1 + 0x1c);
  local_6c = param_3[1];
  puVar11 = (uint *)(uVar22 + iVar28);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar16 = *(uint *)(param_1 + 200);
  if (puVar11 <= puVar38) {
    iVar34 = *(int *)(param_1 + 0x28);
    pcVar14 = (char *)((int)puVar38 + (1 - (int)puVar11));
    iVar27 = *(int *)(param_1 + 0x24);
    if (pcVar14 < (char *)0x9) {
      uVar17 = uVar22 + (int)pcVar14;
    }
    else {
      uVar17 = uVar22 + 8;
    }
    pcVar14 = *(char **)(param_1 + 0x5c);
    if (uVar22 < uVar17) {
      uVar32 = *(uint *)(param_1 + 0x54);
      uVar39 = *(uint *)(param_1 + 0x50);
      if (4 < uVar13) {
        if (uVar16 == 5) goto LAB_017ef18c;
        do {
          if (5 < uVar16) {
            uVar40 = *puVar11;
            uVar37 = puVar11[1];
            uVar29 = 0xbf9b0000;
            goto LAB_017ef734;
          }
          uVar29 = (*puVar11 * -0x61c8864f ^ uVar39) >> (0x18U - iVar27 & 0xff);
          while( true ) {
            iVar1 = (uVar29 >> 8) << (uVar21 & 0xff);
            HintPreloadData(iVar34 + iVar1);
            HintPreloadData(pcVar14 + iVar1 * 4);
            HintPreloadData(pcVar14 + iVar1 * 4 + 0x40);
            if (uVar13 != 5) {
              HintPreloadData(iVar34 + iVar1 + 0x20);
            }
            uVar40 = uVar22 & 7;
            uVar22 = uVar22 + 1;
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar29;
            if (uVar17 <= uVar22) goto LAB_017eefd8;
            puVar11 = (uint *)(uVar22 + iVar28);
            if (uVar16 != 5) break;
LAB_017ef18c:
            uVar40 = *puVar11;
            uVar37 = puVar11[1];
            uVar29 = 0xbb000000;
LAB_017ef734:
            uVar37 = uVar29 * uVar37 + uVar40 * -0x30e44324 +
                     (int)((ulonglong)uVar29 * (ulonglong)uVar40 >> 0x20) ^ uVar32;
            uVar29 = ((uint)((ulonglong)uVar29 * (ulonglong)uVar40) ^ uVar39) >>
                     (0x38U - iVar27 & 0xff) | uVar37 << (iVar27 - 0x18U & 0xff) |
                     uVar37 >> (0x18U - iVar27 & 0xff);
          }
        } while( true );
      }
      if (uVar16 == 5) {
        while( true ) {
          uVar37 = uVar22 & 7;
          puVar24 = (uint *)(uVar22 + iVar28);
          uVar22 = uVar22 + 1;
          lVar4 = (ulonglong)*puVar24 * 0xbb000000;
          uVar29 = puVar11[1] * -0x45000000 + *puVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar32;
          uVar40 = ((uint)lVar4 ^ uVar39) >> (0x38U - iVar27 & 0xff) |
                   uVar29 << (iVar27 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar27 & 0xff);
          uVar29 = uVar40 >> 8;
          HintPreloadData(pcVar14 + uVar29 * 0x40);
          HintPreloadData(iVar34 + uVar29 * 0x10);
          *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar40;
          if (uVar17 <= uVar22) break;
          puVar11 = (uint *)(uVar22 + iVar28);
        }
      }
      else if (uVar16 < 6) {
        do {
          piVar23 = (int *)(uVar22 + iVar28);
          uVar40 = uVar22 & 7;
          uVar22 = uVar22 + 1;
          uVar29 = (*piVar23 * -0x61c8864f ^ uVar39) >> (0x18U - iVar27 & 0xff);
          uVar32 = uVar29 >> 8;
          HintPreloadData(pcVar14 + uVar32 * 0x40);
          HintPreloadData(iVar34 + uVar32 * 0x10);
          *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar29;
        } while (uVar22 < uVar17);
      }
      else {
        while( true ) {
          uVar37 = uVar22 & 7;
          puVar24 = (uint *)(uVar22 + iVar28);
          uVar22 = uVar22 + 1;
          lVar4 = (ulonglong)*puVar24 * 0xbf9b0000;
          uVar29 = puVar11[1] * -0x40650000 + *puVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar32;
          uVar40 = ((uint)lVar4 ^ uVar39) >> (0x38U - iVar27 & 0xff) |
                   uVar29 << (iVar27 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar27 & 0xff);
          uVar29 = uVar40 >> 8;
          HintPreloadData(pcVar14 + uVar29 * 0x40);
          HintPreloadData(iVar34 + uVar29 * 0x10);
          *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar40;
          if (uVar17 <= uVar22) break;
          puVar11 = (uint *)(uVar22 + iVar28);
        }
      }
    }
  }
LAB_017eefd8:
  local_64 = param_4;
  if (puVar33 < puVar38) {
LAB_017ef038:
    pcVar14 = (char *)((int)puVar33 + ((1 - local_54) - iVar28));
    if (pcVar14 < pcVar9) {
      piVar23 = (int *)((int)puVar26 + (int)(pcVar14 + iVar8 + (-(int)pcVar9 - iVar8)));
    }
    else {
      piVar23 = (int *)(pcVar14 + iVar28);
    }
    if ((pcVar9 + (-1 - (int)pcVar14) < (char *)0x3) || (*piVar23 != *(int *)((int)puVar33 + 1))) {
      pcVar31 = (char *)0x0;
    }
    else {
      if (pcVar14 < pcVar9) {
        puVar11 = puVar26;
      }
      else {
        puVar11 = puVar12;
      }
      puVar24 = (uint *)((int)puVar33 + 5);
      puVar19 = (uint *)(piVar23 + 1);
      puVar25 = (uint *)((int)puVar24 + ((int)puVar11 - (int)puVar19));
      if (puVar12 < puVar25) {
        puVar25 = puVar12;
      }
      if (puVar24 < (uint *)((int)puVar25 + -3)) {
        if (piVar23[1] == *(uint *)((int)puVar33 + 5)) {
          puVar36 = (uint *)(piVar23 + 2);
          puVar18 = (uint *)((int)puVar33 + 9);
          while( true ) {
            if ((uint *)((int)puVar25 + -3) <= puVar18) break;
            if (*puVar36 != *puVar18) {
              uVar22 = *puVar36 ^ *puVar18;
              bVar5 = (byte)uVar22;
              bVar6 = (byte)(uVar22 >> 8);
              bVar7 = (byte)(uVar22 >> 0x10);
              bVar2 = (byte)(uVar22 >> 0x18);
              pcVar31 = (char *)((int)puVar18 +
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
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)puVar24));
              goto LAB_017efd38;
            }
            puVar36 = puVar36 + 1;
            puVar18 = puVar18 + 1;
          }
          goto LAB_017efd00;
        }
        uVar22 = piVar23[1] ^ *(uint *)((int)puVar33 + 5);
        bVar5 = (byte)uVar22;
        bVar6 = (byte)(uVar22 >> 8);
        bVar7 = (byte)(uVar22 >> 0x10);
        bVar2 = (byte)(uVar22 >> 0x18);
        pcVar31 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
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
                                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7)) >> 3);
      }
      else {
        puVar36 = puVar19;
        puVar18 = puVar24;
LAB_017efd00:
        if (puVar18 < (uint *)((int)puVar25 + -1)) {
          if ((short)*puVar36 == (short)*puVar18) {
            puVar36 = (uint *)((int)puVar36 + 2);
            puVar18 = (uint *)((int)puVar18 + 2);
          }
        }
        if ((puVar18 < puVar25) && ((char)*puVar36 == (char)*puVar18)) {
          puVar18 = (uint *)((int)puVar18 + 1);
        }
        pcVar31 = (char *)((int)puVar18 - (int)puVar24);
      }
LAB_017efd38:
      if (puVar11 == (uint *)((int)puVar19 + (int)pcVar31)) {
        puVar19 = (uint *)((int)puVar24 + (int)pcVar31);
        puVar25 = puVar10;
        puVar11 = puVar19;
        if (puVar19 < (uint *)((int)puVar12 + -3)) {
          if (*puVar10 == *(uint *)((int)puVar24 + (int)pcVar31)) {
            do {
              puVar11 = puVar11 + 1;
              puVar25 = puVar25 + 1;
              if ((uint *)((int)puVar12 + -3) <= puVar11) goto LAB_017effe8;
            } while (*puVar25 == *puVar11);
            uVar22 = *puVar25 ^ *puVar11;
            bVar5 = (byte)uVar22;
            bVar6 = (byte)(uVar22 >> 8);
            bVar7 = (byte)(uVar22 >> 0x10);
            bVar2 = (byte)(uVar22 >> 0x18);
            pcVar14 = (char *)((int)puVar11 +
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
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)puVar19));
          }
          else {
            uVar22 = *puVar10 ^ *(uint *)((int)puVar24 + (int)pcVar31);
            bVar5 = (byte)uVar22;
            bVar6 = (byte)(uVar22 >> 8);
            bVar7 = (byte)(uVar22 >> 0x10);
            bVar2 = (byte)(uVar22 >> 0x18);
            pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
        }
        else {
LAB_017effe8:
          if (puVar11 < (uint *)((int)puVar12 + -1)) {
            if ((short)*puVar25 == (short)*puVar11) {
              puVar25 = (uint *)((int)puVar25 + 2);
              puVar11 = (uint *)((int)puVar11 + 2);
            }
          }
          if ((puVar11 < puVar12) && ((char)*puVar25 == (char)*puVar11)) {
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          pcVar14 = (char *)((int)puVar11 - (int)puVar19);
        }
        pcVar31 = pcVar31 + (int)pcVar14;
      }
      pcVar31 = pcVar31 + 4;
    }
    local_40 = 999999999;
    if (uVar16 == 5) {
      if (uVar13 == 5) {
        uVar41 = FUN_017cd3bc(param_1,puVar33,puVar12,&local_40);
      }
      else if (uVar13 < 6) {
        uVar41 = FUN_017ca9dc();
      }
      else {
        uVar41 = FUN_017d0834();
      }
    }
    else if (uVar16 < 6) {
      if (uVar13 == 5) {
        uVar41 = FUN_017cb7a0(param_1,puVar33,puVar12,&local_40);
      }
      else if (uVar13 < 6) {
        uVar41 = FUN_017c8fac();
      }
      else {
        uVar41 = FUN_017ce4b8();
      }
    }
    else if (uVar13 == 5) {
      uVar41 = FUN_017cc4f0(param_1,puVar33,puVar12,&local_40);
    }
    else if (uVar13 < 6) {
      uVar41 = FUN_017c9bdc();
    }
    else {
      uVar41 = FUN_017cf5c8();
    }
    pcVar14 = (char *)((ulonglong)uVar41 >> 0x20);
    pcVar30 = (char *)uVar41;
    if (pcVar31 < pcVar30) {
      local_64 = (uint *)local_40;
      if (pcVar30 < (char *)0x4) goto LAB_017ef684;
      puVar11 = puVar33;
      pcVar31 = pcVar30;
      if (puVar33 < puVar38) goto LAB_017ef30c;
      goto LAB_017ef3dc;
    }
    if ((char *)0x3 < pcVar31) {
      puVar11 = (uint *)((int)puVar33 + 1);
      local_64 = (uint *)0x1;
      pcVar30 = pcVar31;
      if (puVar33 < puVar38) {
LAB_017ef30c:
        do {
          puVar24 = (uint *)((int)puVar33 + 1);
          pcVar14 = (char *)(((int)puVar24 - iVar28) - local_54);
          if (pcVar14 < pcVar9) {
            local_9c = (uint *)((int)puVar26 + (int)(pcVar14 + iVar8 + (-(int)pcVar9 - iVar8)));
          }
          else {
            local_9c = (uint *)(pcVar14 + iVar28);
          }
          if ((pcVar9 + ((local_54 + -1) - ((int)puVar24 - iVar28)) < (char *)0x3) ||
             (*local_9c != *puVar24)) {
            iVar27 = LZCOUNT(local_64);
          }
          else {
            if (pcVar14 < pcVar9) {
              puVar25 = puVar26;
            }
            else {
              puVar25 = puVar12;
            }
            puVar19 = local_9c + 1;
            puVar36 = (uint *)((int)puVar33 + 5);
            puVar18 = (uint *)((int)puVar36 + ((int)puVar25 - (int)puVar19));
            if (puVar12 < puVar18) {
              puVar18 = puVar12;
            }
            puVar35 = (uint *)((int)puVar18 + -3);
            if (puVar36 < puVar35) {
              if (local_9c[1] == *(uint *)((int)puVar33 + 5)) {
                puVar33 = (uint *)((int)puVar33 + 9);
                local_9c = local_9c + 2;
                if (puVar33 < puVar35) {
                  do {
                    if (*local_9c != *puVar33) {
                      uVar22 = *local_9c ^ *puVar33;
                      bVar5 = (byte)uVar22;
                      bVar6 = (byte)(uVar22 >> 8);
                      bVar7 = (byte)(uVar22 >> 0x10);
                      bVar2 = (byte)(uVar22 >> 0x18);
                      pcVar14 = (char *)((int)puVar33 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar6 & 1) << 1 |
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
                                                                     bVar7 >> 6 & 1) << 1 |
                                                                    bVar7 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                          bVar2 >> 1 & 1) << 1 |
                                                                         bVar2 >> 2 & 1) << 1 |
                                                                        bVar2 >> 3 & 1) << 1 |
                                                                       bVar2 >> 4 & 1) << 1 |
                                                                      bVar2 >> 5 & 1) << 1 |
                                                                     bVar2 >> 6 & 1) << 1 |
                                                                    bVar2 >> 7)) >> 3) -
                                        (int)puVar36));
                      goto LAB_017efd98;
                    }
                    puVar33 = puVar33 + 1;
                    local_9c = local_9c + 1;
                  } while (puVar33 < puVar35);
                }
                goto LAB_017efd54;
              }
              uVar22 = local_9c[1] ^ *(uint *)((int)puVar33 + 5);
              bVar5 = (byte)uVar22;
              bVar6 = (byte)(uVar22 >> 8);
              bVar7 = (byte)(uVar22 >> 0x10);
              bVar2 = (byte)(uVar22 >> 0x18);
              pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
            }
            else {
              puVar33 = puVar36;
              local_9c = puVar19;
LAB_017efd54:
              if (puVar33 < (uint *)((int)puVar18 + -1)) {
                if ((short)*local_9c == (short)*puVar33) {
                  local_9c = (uint *)((int)local_9c + 2);
                  puVar33 = (uint *)((int)puVar33 + 2);
                }
              }
              if ((puVar33 < puVar18) && ((char)*local_9c == (char)*puVar33)) {
                puVar33 = (uint *)((int)puVar33 + 1);
              }
              pcVar14 = (char *)((int)puVar33 - (int)puVar36);
            }
LAB_017efd98:
            if (puVar25 == (uint *)((int)puVar19 + (int)pcVar14)) {
              puVar19 = (uint *)((int)puVar36 + (int)pcVar14);
              puVar33 = puVar19;
              puVar25 = puVar10;
              if (puVar19 < (uint *)((int)puVar12 + -3)) {
                if (*puVar10 == *(uint *)((int)puVar36 + (int)pcVar14)) {
                  do {
                    puVar33 = puVar33 + 1;
                    puVar25 = puVar25 + 1;
                    if ((uint *)((int)puVar12 + -3) <= puVar33) goto LAB_017f0044;
                  } while (*puVar25 == *puVar33);
                  uVar22 = *puVar25 ^ *puVar33;
                  bVar5 = (byte)uVar22;
                  bVar6 = (byte)(uVar22 >> 8);
                  bVar7 = (byte)(uVar22 >> 0x10);
                  bVar2 = (byte)(uVar22 >> 0x18);
                  pcVar31 = (char *)((int)puVar33 +
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
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar19));
                }
                else {
                  uVar22 = *puVar10 ^ *(uint *)((int)puVar36 + (int)pcVar14);
                  bVar5 = (byte)uVar22;
                  bVar6 = (byte)(uVar22 >> 8);
                  bVar7 = (byte)(uVar22 >> 0x10);
                  bVar2 = (byte)(uVar22 >> 0x18);
                  pcVar31 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                     bVar5 >> 1 & 1) << 1 |
                                                                    bVar5 >> 2 & 1) << 1 |
                                                                   bVar5 >> 3 & 1) << 1 |
                                                                  bVar5 >> 4 & 1) << 1 |
                                                                 bVar5 >> 5 & 1) << 1 |
                                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                               bVar6 >> 1 & 1) << 1
                                                                              | bVar6 >> 2 & 1) << 1
                                                                             | bVar6 >> 3 & 1) << 1
                                                                            | bVar6 >> 4 & 1) << 1 |
                                                                           bVar6 >> 5 & 1) << 1 |
                                                                          bVar6 >> 6 & 1) << 1 |
                                                                         bVar6 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                     bVar7 >> 1 & 1) << 1 |
                                                                    bVar7 >> 2 & 1) << 1 |
                                                                   bVar7 >> 3 & 1) << 1 |
                                                                  bVar7 >> 4 & 1) << 1 |
                                                                 bVar7 >> 5 & 1) << 1 |
                                                                bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                            bVar2 >> 1 & 1) << 1 |
                                                                           bVar2 >> 2 & 1) << 1 |
                                                                          bVar2 >> 3 & 1) << 1 |
                                                                         bVar2 >> 4 & 1) << 1 |
                                                                        bVar2 >> 5 & 1) << 1 |
                                                                       bVar2 >> 6 & 1) << 1 |
                                                                      bVar2 >> 7)) >> 3);
                }
              }
              else {
LAB_017f0044:
                if (puVar33 < (uint *)((int)puVar12 + -1)) {
                  if ((short)*puVar25 == (short)*puVar33) {
                    puVar33 = (uint *)((int)puVar33 + 2);
                    puVar25 = (uint *)((int)puVar25 + 2);
                  }
                }
                if ((puVar33 < puVar12) && ((char)*puVar25 == (char)*puVar33)) {
                  puVar33 = (uint *)((int)puVar33 + 1);
                }
                pcVar31 = (char *)((int)puVar33 - (int)puVar19);
              }
              pcVar14 = pcVar14 + (int)pcVar31;
            }
            iVar27 = LZCOUNT(local_64);
            if (pcVar14 < (char *)0xfffffffc &&
                (int)(pcVar30 + -10) * 3 + iVar27 < (int)(pcVar14 + 4) * 3) {
              local_64 = (uint *)0x1;
              iVar27 = 0x1f;
              puVar11 = puVar24;
              pcVar30 = pcVar14 + 4;
            }
          }
          local_40 = 999999999;
          if (uVar16 == 5) {
            if (uVar13 == 5) {
              pcVar14 = (char *)FUN_017cd3bc(param_1,puVar24,puVar12,&local_40);
            }
            else if (uVar13 < 6) {
              pcVar14 = (char *)FUN_017ca9dc();
            }
            else {
              pcVar14 = (char *)FUN_017d0834();
            }
          }
          else if (uVar16 < 6) {
            if (uVar13 == 5) {
              pcVar14 = (char *)FUN_017cb7a0(param_1,puVar24,puVar12,&local_40);
            }
            else if (uVar13 < 6) {
              pcVar14 = (char *)FUN_017c8fac();
            }
            else {
              pcVar14 = (char *)FUN_017ce4b8();
            }
          }
          else if (uVar13 == 5) {
            pcVar14 = (char *)FUN_017cc4f0(param_1,puVar24,puVar12,&local_40);
          }
          else if (uVar13 < 6) {
            pcVar14 = (char *)FUN_017c9bdc();
          }
          else {
            pcVar14 = (char *)FUN_017cf5c8();
          }
          pcVar31 = pcVar30;
          if (pcVar14 < (char *)0x4 ||
              LZCOUNT(local_40) + (int)pcVar14 * 4 + -0x1f <= iVar27 + (int)pcVar30 * 4 + -0x1b)
          goto LAB_017ef3dc;
          if (puVar38 <= puVar24) goto LAB_017f0340;
          local_64 = (uint *)local_40;
          puVar11 = puVar24;
          puVar33 = puVar24;
          pcVar30 = pcVar14;
        } while( true );
      }
      goto LAB_017ef480;
    }
LAB_017ef684:
    uVar22 = ((uint)((int)puVar33 - (int)param_4) >> 8) + 1;
    puVar33 = (uint *)((int)puVar33 + uVar22);
    *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar22);
    goto LAB_017ef5cc;
  }
LAB_017ef5e0:
  *param_3 = local_54;
  param_3[1] = local_6c;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar12 - (int)local_64,pcVar14,local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_017f0340:
  local_64 = (uint *)local_40;
  puVar11 = puVar24;
  pcVar31 = pcVar14;
LAB_017ef3dc:
  if (3 < local_64) {
    pcVar14 = (char *)((int)puVar11 + ((3 - (int)local_64) - iVar28));
    if (pcVar14 < pcVar9) {
      puVar24 = (uint *)((int)puVar26 + (int)(pcVar14 + iVar8 + (-(int)pcVar9 - iVar8)));
      puVar33 = (uint *)(iVar8 + iVar15);
    }
    else {
      puVar24 = (uint *)(pcVar14 + iVar28);
      puVar33 = puVar10;
    }
    puVar25 = puVar11;
    if (param_4 < puVar11 && puVar33 < puVar24) {
      do {
        puVar24 = (uint *)((int)puVar24 + -1);
        puVar11 = (uint *)((int)puVar25 + -1);
        if (*(char *)puVar11 != *(char *)puVar24) {
          puVar11 = puVar25;
          break;
        }
        pcVar31 = pcVar31 + 1;
        puVar25 = puVar11;
      } while (param_4 < puVar11 && puVar33 < puVar24);
    }
    local_6c = local_54;
    local_54 = (int)local_64 - 3;
  }
LAB_017ef480:
  uVar22 = (int)puVar11 - (int)param_4;
  puVar33 = (uint *)param_2[3];
  if (puVar12 + -8 < puVar11) {
    FUN_017bfa44(puVar33,param_4,puVar11);
    pcVar14 = extraout_r1;
  }
  else {
    local_3c = *param_4;
    pcVar14 = (char *)param_4[1];
    uStack_34 = param_4[2];
    uStack_30 = param_4[3];
    puVar33[3] = uStack_30;
    *puVar33 = local_3c;
    puVar33[1] = (uint)pcVar14;
    puVar33[2] = uStack_34;
    iVar27 = param_2[3];
    if (uVar22 < 0x11) {
      param_2[3] = (int)(iVar27 + uVar22);
      puVar24 = (uint *)param_2[1];
      pcStack_38 = pcVar14;
      goto LAB_017ef4ec;
    }
    local_3c = param_4[4];
    pcVar14 = (char *)param_4[5];
    uStack_34 = param_4[6];
    uStack_30 = param_4[7];
    *(uint *)(iVar27 + 0x10) = local_3c;
    *(char **)(iVar27 + 0x14) = pcVar14;
    *(uint *)(iVar27 + 0x18) = uStack_34;
    *(uint *)(iVar27 + 0x1c) = uStack_30;
    pcStack_38 = pcVar14;
    if (0x10 < (int)(uVar22 - 0x10)) {
      puVar33 = param_4 + 0x10;
      puVar24 = (uint *)(iVar27 + 0x20);
      do {
        uVar17 = puVar33[-7];
        uVar32 = puVar33[-6];
        puVar25 = puVar24 + 8;
        uVar39 = puVar33[-5];
        *puVar24 = puVar33[-8];
        puVar24[1] = uVar17;
        puVar24[2] = uVar32;
        puVar24[3] = uVar39;
        local_3c = puVar33[-4];
        pcVar14 = (char *)puVar33[-3];
        uStack_34 = puVar33[-2];
        uStack_30 = puVar33[-1];
        puVar24[4] = local_3c;
        puVar24[5] = (uint)pcVar14;
        puVar24[6] = uStack_34;
        puVar24[7] = uStack_30;
        puVar33 = puVar33 + 8;
        puVar24 = puVar25;
      } while (puVar25 < (uint *)(iVar27 + uVar22));
      pcStack_38 = pcVar14;
    }
  }
  param_2[3] = param_2[3] + uVar22;
  puVar24 = (uint *)param_2[1];
  if (0xffff < uVar22) {
    param_2[10] = (int)puVar24 - *param_2 >> 3;
    param_2[9] = 1;
  }
LAB_017ef4ec:
  *puVar24 = (uint)local_64;
  *(short *)(puVar24 + 1) = (short)uVar22;
  if ((char *)0xffff < pcVar31 + -3) {
    param_2[10] = (int)puVar24 - *param_2 >> 3;
    pcVar14 = (char *)0x2;
    param_2[9] = 2;
  }
  *(short *)((int)puVar24 + 6) = (short)(pcVar31 + -3);
  puVar33 = (uint *)((int)puVar11 + (int)pcVar31);
  param_2[1] = (int)(puVar24 + 2);
  if (*(int *)(param_1 + 0xdc) != 0) {
    uVar22 = *(uint *)(param_1 + 0x1c);
    puVar11 = (uint *)(uVar22 + iVar28);
    if (puVar11 <= puVar38) {
      pcVar14 = (char *)((int)puVar38 + (1 - (int)puVar11));
      if (pcVar14 < (char *)0x9) {
        uVar17 = uVar22 + (int)pcVar14;
      }
      else {
        uVar17 = uVar22 + 8;
      }
      iVar27 = *(int *)(param_1 + 0x28);
      pcVar14 = *(char **)(param_1 + 0x5c);
      iVar34 = *(int *)(param_1 + 0x24);
      if (uVar22 < uVar17) {
        uVar32 = *(uint *)(param_1 + 0x50);
        uVar39 = *(uint *)(param_1 + 0x54);
        if (4 < uVar13) {
          do {
            if (uVar16 == 5) {
              uVar37 = *puVar11;
              uVar40 = puVar11[1];
              uVar29 = 0xbb000000;
LAB_017eff18:
              uVar40 = uVar29 * uVar40 + uVar37 * -0x30e44324 +
                       (int)((ulonglong)uVar29 * (ulonglong)uVar37 >> 0x20) ^ uVar39;
              uVar29 = ((uint)((ulonglong)uVar29 * (ulonglong)uVar37) ^ uVar32) >>
                       (0x38U - iVar34 & 0xff) | uVar40 << (iVar34 - 0x18U & 0xff) |
                       uVar40 >> (0x18U - iVar34 & 0xff);
            }
            else {
              if (5 < uVar16) {
                uVar37 = *puVar11;
                uVar40 = puVar11[1];
                uVar29 = 0xbf9b0000;
                goto LAB_017eff18;
              }
              uVar29 = (*puVar11 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
            }
            iVar1 = (uVar29 >> 8) << (uVar21 & 0xff);
            HintPreloadData(iVar27 + iVar1);
            HintPreloadData(pcVar14 + iVar1 * 4);
            HintPreloadData(pcVar14 + iVar1 * 4 + 0x40);
            if (uVar13 != 5) {
              HintPreloadData(iVar27 + iVar1 + 0x20);
            }
            uVar40 = uVar22 & 7;
            uVar22 = uVar22 + 1;
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar29;
            if (uVar17 <= uVar22) goto LAB_017ef554;
            puVar11 = (uint *)(uVar22 + iVar28);
          } while( true );
        }
        if (uVar16 == 5) {
          while( true ) {
            uVar37 = uVar22 & 7;
            puVar24 = (uint *)(uVar22 + iVar28);
            uVar22 = uVar22 + 1;
            lVar4 = (ulonglong)*puVar24 * 0xbb000000;
            uVar29 = puVar11[1] * -0x45000000 + *puVar24 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar39;
            uVar40 = ((uint)lVar4 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                     uVar29 << (iVar34 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar34 & 0xff);
            uVar29 = uVar40 >> 8;
            HintPreloadData(pcVar14 + uVar29 * 0x40);
            HintPreloadData(iVar27 + uVar29 * 0x10);
            *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar40;
            if (uVar17 <= uVar22) break;
            puVar11 = (uint *)(uVar22 + iVar28);
          }
        }
        else if (uVar16 < 6) {
          do {
            uVar40 = uVar22 & 7;
            piVar23 = (int *)(uVar22 + iVar28);
            uVar22 = uVar22 + 1;
            uVar29 = (*piVar23 * -0x61c8864f ^ uVar32) >> (0x18U - iVar34 & 0xff);
            uVar39 = uVar29 >> 8;
            HintPreloadData(pcVar14 + uVar39 * 0x40);
            HintPreloadData(iVar27 + uVar39 * 0x10);
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar29;
          } while (uVar22 < uVar17);
        }
        else {
          while( true ) {
            uVar37 = uVar22 & 7;
            puVar24 = (uint *)(uVar22 + iVar28);
            uVar22 = uVar22 + 1;
            lVar4 = (ulonglong)*puVar24 * 0xbf9b0000;
            uVar29 = puVar11[1] * -0x40650000 + *puVar24 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar39;
            uVar40 = ((uint)lVar4 ^ uVar32) >> (0x38U - iVar34 & 0xff) |
                     uVar29 << (iVar34 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar34 & 0xff);
            uVar29 = uVar40 >> 8;
            HintPreloadData(pcVar14 + uVar29 * 0x40);
            HintPreloadData(iVar27 + uVar29 * 0x10);
            *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar40;
            if (uVar17 <= uVar22) break;
            puVar11 = (uint *)(uVar22 + iVar28);
          }
        }
      }
    }
LAB_017ef554:
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  if (puVar38 < puVar33) {
LAB_017eff98:
    local_64 = puVar33;
    goto LAB_017ef5e0;
  }
  while( true ) {
    iVar27 = local_6c;
    pcVar14 = (char *)(((int)puVar33 - iVar28) - iVar27);
    if (pcVar14 < pcVar9) {
      puVar11 = (uint *)((int)puVar26 + (int)(pcVar14 + iVar8 + (-(int)pcVar9 - iVar8)));
    }
    else {
      puVar11 = (uint *)(pcVar14 + iVar28);
    }
    if ((pcVar9 + ((iVar27 + -1) - ((int)puVar33 - iVar28)) < (char *)0x3) || (*puVar11 != *puVar33)
       ) break;
    if (pcVar14 < pcVar9) {
      puVar24 = puVar26;
    }
    else {
      puVar24 = puVar12;
    }
    puVar25 = puVar11 + 1;
    puVar18 = puVar33 + 1;
    puVar19 = (uint *)((int)puVar18 + ((int)puVar24 - (int)puVar25));
    if (puVar12 < puVar19) {
      puVar19 = puVar12;
    }
    if (puVar18 < (uint *)((int)puVar19 + -3)) {
      if (puVar11[1] == puVar33[1]) {
        puVar11 = puVar11 + 2;
        for (puVar36 = puVar33 + 2; puVar36 < (uint *)((int)puVar19 + -3); puVar36 = puVar36 + 1) {
          if (*puVar11 != *puVar36) {
            uVar22 = *puVar11 ^ *puVar36;
            bVar5 = (byte)uVar22;
            bVar6 = (byte)(uVar22 >> 8);
            bVar7 = (byte)(uVar22 >> 0x10);
            bVar2 = (byte)(uVar22 >> 0x18);
            pcVar31 = (char *)((int)puVar36 +
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
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)puVar18));
            goto LAB_017efc44;
          }
          puVar11 = puVar11 + 1;
        }
        goto LAB_017efbfc;
      }
      uVar22 = puVar11[1] ^ puVar33[1];
      bVar5 = (byte)uVar22;
      bVar6 = (byte)(uVar22 >> 8);
      bVar7 = (byte)(uVar22 >> 0x10);
      bVar2 = (byte)(uVar22 >> 0x18);
      pcVar31 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
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
                                       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                        bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1
                                                      | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                                                    | bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
    }
    else {
      puVar11 = puVar25;
      puVar36 = puVar18;
LAB_017efbfc:
      if (puVar36 < (uint *)((int)puVar19 + -1)) {
        if ((short)*puVar11 == (short)*puVar36) {
          puVar11 = (uint *)((int)puVar11 + 2);
          puVar36 = (uint *)((int)puVar36 + 2);
        }
      }
      if ((puVar36 < puVar19) && ((char)*puVar11 == (char)*puVar36)) {
        puVar36 = (uint *)((int)puVar36 + 1);
      }
      pcVar31 = (char *)((int)puVar36 - (int)puVar18);
    }
LAB_017efc44:
    if (puVar24 == (uint *)((int)puVar25 + (int)pcVar31)) {
      puVar25 = (uint *)((int)puVar18 + (int)pcVar31);
      puVar24 = puVar10;
      puVar11 = puVar25;
      if (puVar25 < (uint *)((int)puVar12 + -3)) {
        if (*puVar10 == *(uint *)((int)puVar18 + (int)pcVar31)) {
          do {
            puVar11 = puVar11 + 1;
            puVar24 = puVar24 + 1;
            if ((uint *)((int)puVar12 + -3) <= puVar11) goto LAB_017f0234;
          } while (*puVar24 == *puVar11);
          uVar22 = *puVar24 ^ *puVar11;
          bVar5 = (byte)uVar22;
          bVar6 = (byte)(uVar22 >> 8);
          bVar7 = (byte)(uVar22 >> 0x10);
          bVar2 = (byte)(uVar22 >> 0x18);
          pcVar14 = (char *)((int)puVar11 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                              1 | bVar5 >> 2 & 1) << 1 |
                                                            bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                           << 1 | bVar5 >> 5 & 1) << 1 |
                                                         bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                       bVar7 >> 1 & 1) << 1 |
                                                                      bVar7 >> 2 & 1) << 1 |
                                                                     bVar7 >> 3 & 1) << 1 |
                                                                    bVar7 >> 4 & 1) << 1 |
                                                                   bVar7 >> 5 & 1) << 1 |
                                                                  bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                              1 | bVar2 >> 2 & 1) << 1 |
                                                            bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                           << 1 | bVar2 >> 5 & 1) << 1 |
                                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3) -
                            (int)puVar25));
        }
        else {
          uVar22 = *puVar10 ^ *(uint *)((int)puVar18 + (int)pcVar31);
          bVar5 = (byte)uVar22;
          bVar6 = (byte)(uVar22 >> 8);
          bVar7 = (byte)(uVar22 >> 0x10);
          bVar2 = (byte)(uVar22 >> 0x18);
          pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
      }
      else {
LAB_017f0234:
        if (puVar11 < (uint *)((int)puVar12 + -1)) {
          if ((short)*puVar24 == (short)*puVar11) {
            puVar24 = (uint *)((int)puVar24 + 2);
            puVar11 = (uint *)((int)puVar11 + 2);
          }
        }
        if ((puVar11 < puVar12) && ((char)*puVar24 == (char)*puVar11)) {
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        pcVar14 = (char *)((int)puVar11 - (int)puVar25);
      }
      pcVar31 = pcVar31 + (int)pcVar14;
    }
    puVar11 = (uint *)param_2[3];
    if (puVar12 + -8 < puVar33) {
      FUN_017bfa44(puVar11,puVar33,puVar33);
      pcVar14 = extraout_r1_00;
    }
    else {
      local_3c = *puVar33;
      pcVar14 = (char *)puVar33[1];
      uStack_34 = puVar33[2];
      uStack_30 = puVar33[3];
      *puVar11 = local_3c;
      puVar11[1] = (uint)pcVar14;
      puVar11[2] = uStack_34;
      puVar11[3] = uStack_30;
      pcStack_38 = pcVar14;
    }
    puVar20 = (undefined4 *)param_2[1];
    puVar33 = (uint *)((int)puVar33 + (int)(pcVar31 + 4));
    *(undefined2 *)(puVar20 + 1) = 0;
    *puVar20 = 1;
    uVar3 = SUB42(pcVar31 + 1,0);
    if (pcVar31 + 1 < (char *)0x10000) {
      *(undefined2 *)((int)puVar20 + 6) = uVar3;
      param_2[1] = (int)(puVar20 + 2);
    }
    else {
      param_2[10] = (int)puVar20 - *param_2 >> 3;
      param_2[9] = 2;
      *(undefined2 *)((int)puVar20 + 6) = uVar3;
      param_2[1] = (int)(puVar20 + 2);
    }
    if (puVar38 < puVar33) {
      local_6c = local_54;
      local_54 = iVar27;
      goto LAB_017eff98;
    }
    local_6c = local_54;
    local_54 = iVar27;
  }
  param_4 = puVar33;
  local_6c = iVar27;
LAB_017ef5cc:
  if (puVar38 <= puVar33) goto code_r0x017ef5d8;
  goto LAB_017ef038;
code_r0x017ef5d8:
  local_64 = param_4;
  goto LAB_017ef5e0;
}

