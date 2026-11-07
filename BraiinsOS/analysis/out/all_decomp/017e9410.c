// FUN_017e9410 @ 017e9410 size=4292 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017e9410(int param_1,uint *param_2,int *param_3,uint *param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  char *pcVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  undefined8 uVar41;
  int local_70;
  int local_5c;
  uint local_40;
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar9 = (uint *)((int)param_4 + param_5);
  puVar8 = puVar9 + -4;
  uVar10 = *(uint *)(param_1 + 0xc4);
  iVar31 = *(int *)(param_1 + 4);
  puVar36 = *(uint **)(param_1 + 0xc);
  local_2c = DAT_018ddaf8;
  puVar21 = *(undefined4 **)(param_1 + 0xb4);
  puVar37 = (uint *)(iVar31 + (int)puVar36);
  iVar15 = puVar21[3];
  iVar33 = puVar21[1];
  puVar22 = (uint *)*puVar21;
  uVar16 = uVar10;
  if (5 < uVar10) {
    uVar16 = 6;
  }
  if (uVar16 < 4) {
    uVar16 = 4;
  }
  puVar38 = param_4;
  if ((iVar33 + iVar15) - (int)puVar22 == (int)param_4 - (int)puVar37) {
    puVar38 = (uint *)((int)param_4 + 1);
  }
  local_5c = *param_3;
  uVar17 = *(uint *)(param_1 + 0x1c);
  local_70 = param_3[1];
  puVar23 = (uint *)(uVar17 + iVar31);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar11 = *(uint **)(param_1 + 200);
  puVar18 = puVar11;
  if (puVar23 <= puVar8) {
    iVar32 = *(int *)(param_1 + 0x5c);
    pcVar28 = (char *)((int)puVar8 + (1 - (int)puVar23));
    iVar34 = *(int *)(param_1 + 0x28);
    if (pcVar28 < (char *)0x9) {
      uVar29 = uVar17 + (int)pcVar28;
    }
    else {
      uVar29 = uVar17 + 8;
    }
    puVar18 = *(uint **)(param_1 + 0x24);
    if (uVar17 < uVar29) {
      uVar39 = *(uint *)(param_1 + 0x50);
      uVar40 = *(uint *)(param_1 + 0x54);
      if (4 < uVar10) {
        if (puVar11 == (uint *)&DAT_00000005) goto LAB_017e9718;
        do {
          if (&DAT_00000005 < puVar11) {
            uVar27 = *puVar23;
            uVar14 = puVar23[1];
            uVar13 = 0xbf9b0000;
            goto LAB_017e9730;
          }
          uVar13 = (*puVar23 * -0x61c8864f ^ uVar39) >> (0x18U - (int)puVar18 & 0xff);
          while( true ) {
            iVar1 = (uVar13 >> 8) << (uVar16 & 0xff);
            HintPreloadData(iVar34 + iVar1);
            HintPreloadData(iVar32 + iVar1 * 4);
            HintPreloadData(iVar32 + iVar1 * 4 + 0x40);
            if (uVar10 != 5) {
              HintPreloadData(iVar34 + iVar1 + 0x20);
            }
            uVar27 = uVar17 & 7;
            uVar17 = uVar17 + 1;
            *(uint *)(param_1 + uVar27 * 4 + 0x2c) = uVar13;
            if (uVar29 <= uVar17) goto LAB_017e9504;
            puVar23 = (uint *)(uVar17 + iVar31);
            if (puVar11 != (uint *)&DAT_00000005) break;
LAB_017e9718:
            uVar27 = *puVar23;
            uVar14 = puVar23[1];
            uVar13 = 0xbb000000;
LAB_017e9730:
            uVar14 = uVar13 * uVar14 + uVar27 * -0x30e44324 +
                     (int)((ulonglong)uVar13 * (ulonglong)uVar27 >> 0x20) ^ uVar40;
            uVar13 = ((uint)((ulonglong)uVar13 * (ulonglong)uVar27) ^ uVar39) >>
                     (0x38U - (int)puVar18 & 0xff) | uVar14 << ((uint)(puVar18 + -6) & 0xff) |
                     uVar14 >> (0x18U - (int)puVar18 & 0xff);
          }
        } while( true );
      }
      if (puVar11 == (uint *)&DAT_00000005) {
        uVar27 = 0x38 - (int)puVar18;
        puVar25 = puVar18 + -6;
        uVar13 = 0x18 - (int)puVar18;
        while( true ) {
          puVar26 = (uint *)(uVar17 + iVar31);
          uVar14 = uVar17 & 7;
          uVar17 = uVar17 + 1;
          puVar18 = (uint *)(param_1 + uVar14 * 4);
          lVar4 = (ulonglong)*puVar26 * 0xbb000000;
          uVar14 = puVar23[1] * -0x45000000 + *puVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
          uVar20 = ((uint)lVar4 ^ uVar39) >> (uVar27 & 0xff) | uVar14 << ((uint)puVar25 & 0xff) |
                   uVar14 >> (uVar13 & 0xff);
          uVar14 = uVar20 >> 8;
          HintPreloadData(iVar32 + uVar14 * 0x40);
          HintPreloadData(iVar34 + uVar14 * 0x10);
          puVar18[0xb] = uVar20;
          if (uVar29 <= uVar17) break;
          puVar23 = (uint *)(uVar17 + iVar31);
        }
      }
      else if (&DAT_00000005 < puVar11) {
        uVar27 = 0x38 - (int)puVar18;
        puVar25 = puVar18 + -6;
        uVar13 = 0x18 - (int)puVar18;
        while( true ) {
          uVar14 = uVar17 & 7;
          puVar26 = (uint *)(uVar17 + iVar31);
          uVar17 = uVar17 + 1;
          puVar18 = (uint *)(param_1 + uVar14 * 4);
          lVar4 = (ulonglong)*puVar26 * 0xbf9b0000;
          uVar14 = puVar23[1] * -0x40650000 + *puVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
          uVar20 = ((uint)lVar4 ^ uVar39) >> (uVar27 & 0xff) | uVar14 << ((uint)puVar25 & 0xff) |
                   uVar14 >> (uVar13 & 0xff);
          uVar14 = uVar20 >> 8;
          HintPreloadData(iVar32 + uVar14 * 0x40);
          HintPreloadData(iVar34 + uVar14 * 0x10);
          puVar18[0xb] = uVar20;
          if (uVar29 <= uVar17) break;
          puVar23 = (uint *)(uVar17 + iVar31);
        }
      }
      else {
        puVar18 = (uint *)(0x18 - (int)puVar18);
        do {
          piVar24 = (int *)(uVar17 + iVar31);
          uVar27 = uVar17 & 7;
          uVar17 = uVar17 + 1;
          uVar13 = (*piVar24 * -0x61c8864f ^ uVar39) >> ((uint)puVar18 & 0xff);
          uVar40 = uVar13 >> 8;
          HintPreloadData(iVar32 + uVar40 * 0x40);
          HintPreloadData(iVar34 + uVar40 * 0x10);
          *(uint *)(param_1 + uVar27 * 4 + 0x2c) = uVar13;
        } while (uVar17 < uVar29);
      }
    }
  }
LAB_017e9504:
  if (puVar38 < puVar8) {
    puVar23 = puVar9 + -8;
    do {
      puVar18 = (uint *)((int)puVar38 + ((1 - local_5c) - iVar31));
      iVar32 = iVar31;
      if (puVar18 < puVar36) {
        iVar32 = (int)puVar22 - (int)puVar36;
      }
      piVar24 = (int *)((int)puVar18 + iVar32);
      if (((char *)((int)puVar36 + (-1 - (int)puVar18)) < (char *)0x3) ||
         (*piVar24 != *(int *)((int)puVar38 + 1))) {
        local_40 = 999999999;
        if (puVar11 == (uint *)&DAT_00000005) {
          if (uVar10 == 5) {
            uVar41 = FUN_017cd3bc(param_1,puVar38,puVar9,&local_40);
          }
          else if (uVar10 < 6) {
            uVar41 = FUN_017ca9dc();
          }
          else {
            uVar41 = FUN_017d0834();
          }
        }
        else if (&DAT_00000005 < puVar11) {
          if (uVar10 == 5) {
            uVar41 = FUN_017cc4f0(param_1,puVar38,puVar9,&local_40);
          }
          else if (uVar10 < 6) {
            uVar41 = FUN_017c9bdc();
          }
          else {
            uVar41 = FUN_017cf5c8();
          }
        }
        else if (uVar10 == 5) {
          uVar41 = FUN_017cb7a0(param_1,puVar38,puVar9,&local_40);
        }
        else if (uVar10 < 6) {
          uVar41 = FUN_017c8fac();
        }
        else {
          uVar41 = FUN_017ce4b8();
        }
        puVar18 = (uint *)((ulonglong)uVar41 >> 0x20);
        pcVar28 = (char *)uVar41;
        if ((pcVar28 != (char *)0x0) && ((char *)0x3 < pcVar28)) {
          uVar17 = local_40;
          puVar25 = puVar38;
          if (3 < local_40) {
            puVar25 = (uint *)((int)puVar38 + ((3 - local_40) - iVar31));
            puVar18 = puVar37;
            iVar32 = iVar31;
            if (puVar25 < puVar36) {
              puVar18 = (uint *)(iVar33 + iVar15);
              iVar32 = (int)puVar22 - (int)puVar36;
            }
            puVar25 = (uint *)(iVar32 + (int)puVar25);
            puVar26 = puVar38;
            if (puVar18 < puVar25 && param_4 < puVar38) {
              do {
                puVar25 = (uint *)((int)puVar25 + -1);
                puVar38 = (uint *)((int)puVar26 + -1);
                if (*(char *)puVar38 != *(char *)puVar25) {
                  puVar38 = puVar26;
                  break;
                }
                pcVar28 = pcVar28 + 1;
                puVar26 = puVar38;
              } while (param_4 < puVar38 && puVar18 < puVar25);
            }
            local_70 = local_5c;
            local_5c = local_40 - 3;
            puVar25 = puVar38;
          }
          goto LAB_017e9858;
        }
        uVar17 = ((uint)((int)puVar38 - (int)param_4) >> 8) + 1;
        puVar38 = (uint *)((int)puVar38 + uVar17);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar17);
      }
      else {
        puVar25 = (uint *)((int)puVar38 + 1);
        if (puVar18 < puVar36) {
          puVar18 = puVar22;
        }
        else {
          puVar18 = puVar9;
        }
        puVar26 = (uint *)((int)puVar38 + 5);
        puVar12 = (uint *)(piVar24 + 1);
        puVar19 = (uint *)((int)puVar26 + ((int)puVar18 - (int)puVar12));
        if (puVar9 < puVar19) {
          puVar19 = puVar9;
        }
        if (puVar26 < (uint *)((int)puVar19 + -3)) {
          if (piVar24[1] == *(uint *)((int)puVar38 + 5)) {
            puVar35 = (uint *)(piVar24 + 2);
            puVar38 = (uint *)((int)puVar38 + 9);
            while( true ) {
              if ((uint *)((int)puVar19 + -3) <= puVar38) break;
              if (*puVar35 != *puVar38) {
                uVar17 = *puVar35 ^ *puVar38;
                bVar5 = (byte)uVar17;
                bVar6 = (byte)(uVar17 >> 8);
                bVar7 = (byte)(uVar17 >> 0x10);
                bVar2 = (byte)(uVar17 >> 0x18);
                pcVar28 = (char *)((int)puVar38 +
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
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar26));
                goto LAB_017e9ed8;
              }
              puVar35 = puVar35 + 1;
              puVar38 = puVar38 + 1;
            }
            goto LAB_017e9ea0;
          }
          uVar17 = piVar24[1] ^ *(uint *)((int)puVar38 + 5);
          bVar5 = (byte)uVar17;
          bVar6 = (byte)(uVar17 >> 8);
          bVar7 = (byte)(uVar17 >> 0x10);
          bVar2 = (byte)(uVar17 >> 0x18);
          pcVar28 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
        else {
          puVar35 = puVar12;
          puVar38 = puVar26;
LAB_017e9ea0:
          if (puVar38 < (uint *)((int)puVar19 + -1)) {
            if ((short)*puVar35 == (short)*puVar38) {
              puVar35 = (uint *)((int)puVar35 + 2);
              puVar38 = (uint *)((int)puVar38 + 2);
            }
          }
          if ((puVar38 < puVar19) && ((char)*puVar35 == (char)*puVar38)) {
            puVar38 = (uint *)((int)puVar38 + 1);
          }
          pcVar28 = (char *)((int)puVar38 - (int)puVar26);
        }
LAB_017e9ed8:
        if (puVar18 == (uint *)((int)puVar12 + (int)pcVar28)) {
          puVar19 = (uint *)((int)puVar26 + (int)pcVar28);
          puVar18 = puVar37;
          puVar38 = puVar19;
          if (puVar19 < (uint *)((int)puVar9 + -3)) {
            if (*puVar37 == *(uint *)((int)puVar26 + (int)pcVar28)) {
              do {
                puVar38 = puVar38 + 1;
                puVar18 = puVar18 + 1;
                if ((uint *)((int)puVar9 + -3) <= puVar38) goto LAB_017e9f18;
              } while (*puVar18 == *puVar38);
              uVar17 = *puVar18 ^ *puVar38;
              bVar5 = (byte)uVar17;
              bVar6 = (byte)(uVar17 >> 8);
              bVar7 = (byte)(uVar17 >> 0x10);
              bVar2 = (byte)(uVar17 >> 0x18);
              pcVar30 = (char *)((int)puVar38 +
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
                                                            bVar2 >> 7)) >> 3) - (int)puVar19));
            }
            else {
              uVar17 = *puVar37 ^ *(uint *)((int)puVar26 + (int)pcVar28);
              bVar5 = (byte)uVar17;
              bVar6 = (byte)(uVar17 >> 8);
              bVar7 = (byte)(uVar17 >> 0x10);
              bVar2 = (byte)(uVar17 >> 0x18);
              pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
          }
          else {
LAB_017e9f18:
            if (puVar38 < (uint *)((int)puVar9 + -1)) {
              if ((short)*puVar18 == (short)*puVar38) {
                puVar18 = (uint *)((int)puVar18 + 2);
                puVar38 = (uint *)((int)puVar38 + 2);
              }
            }
            if ((puVar38 < puVar9) && ((char)*puVar18 == (char)*puVar38)) {
              puVar38 = (uint *)((int)puVar38 + 1);
            }
            pcVar30 = (char *)((int)puVar38 - (int)puVar19);
          }
          pcVar28 = pcVar28 + (int)pcVar30;
        }
        pcVar28 = pcVar28 + 4;
        uVar17 = 1;
LAB_017e9858:
        uVar29 = (int)puVar25 - (int)param_4;
        puVar38 = (uint *)param_2[3];
        puVar18 = param_2;
        if (puVar23 < puVar25) {
          FUN_017bfa44(puVar38,param_4,puVar25,puVar23);
LAB_017e9c5c:
          param_2[3] = param_2[3] + uVar29;
          puVar26 = (uint *)param_2[1];
          if (0xffff < uVar29) {
            param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          puStack_38 = (uint *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar38[3] = uStack_30;
          puVar38[2] = uStack_34;
          *puVar38 = local_3c;
          puVar38[1] = (uint)puStack_38;
          uVar39 = param_2[3];
          if (0x10 < uVar29) {
            local_3c = param_4[4];
            puStack_38 = (uint *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(uVar39 + 0x10) = local_3c;
            *(uint **)(uVar39 + 0x14) = puStack_38;
            *(uint *)(uVar39 + 0x18) = uStack_34;
            *(uint *)(uVar39 + 0x1c) = uStack_30;
            if (0x10 < (int)(uVar29 - 0x10)) {
              puVar38 = param_4 + 0x10;
              puVar26 = (uint *)(uVar39 + 0x20);
              do {
                uVar40 = puVar38[-7];
                uVar13 = puVar38[-6];
                puVar19 = puVar26 + 8;
                uVar27 = puVar38[-5];
                *puVar26 = puVar38[-8];
                puVar26[1] = uVar40;
                puVar26[2] = uVar13;
                puVar26[3] = uVar27;
                local_3c = puVar38[-4];
                puStack_38 = (uint *)puVar38[-3];
                uStack_34 = puVar38[-2];
                uStack_30 = puVar38[-1];
                puVar26[4] = local_3c;
                puVar26[5] = (uint)puStack_38;
                puVar26[6] = uStack_34;
                puVar26[7] = uStack_30;
                puVar38 = puVar38 + 8;
                puVar26 = puVar19;
              } while (puVar19 < (uint *)(uVar39 + uVar29));
            }
            goto LAB_017e9c5c;
          }
          param_2[3] = uVar39 + uVar29;
          puVar26 = (uint *)param_2[1];
          puVar18 = puStack_38;
        }
        *(short *)(puVar26 + 1) = (short)uVar29;
        *puVar26 = uVar17;
        if ((char *)0xffff < pcVar28 + -3) {
          param_2[10] = (int)((int)puVar26 - *param_2) >> 3;
          puVar18 = (uint *)&SUB_00000002;
          param_2[9] = 2;
        }
        *(short *)((int)puVar26 + 6) = (short)(pcVar28 + -3);
        puVar38 = (uint *)((int)puVar25 + (int)pcVar28);
        param_2[1] = (uint)(puVar26 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar17 = *(uint *)(param_1 + 0x1c);
          puVar25 = (uint *)(uVar17 + iVar31);
          puVar18 = puVar8;
          if (puVar25 <= puVar8) {
            iVar34 = *(int *)(param_1 + 0x5c);
            pcVar28 = (char *)((int)puVar8 + (1 - (int)puVar25));
            iVar32 = *(int *)(param_1 + 0x28);
            if (pcVar28 < (char *)0x9) {
              uVar29 = uVar17 + (int)pcVar28;
            }
            else {
              uVar29 = uVar17 + 8;
            }
            puVar18 = *(uint **)(param_1 + 0x24);
            if (uVar17 < uVar29) {
              uVar39 = *(uint *)(param_1 + 0x50);
              uVar40 = *(uint *)(param_1 + 0x54);
              if (4 < uVar10) {
                do {
                  if (puVar11 == (uint *)&DAT_00000005) {
                    uVar14 = *puVar25;
                    uVar27 = puVar25[1];
                    uVar13 = 0xbb000000;
LAB_017ea148:
                    uVar27 = uVar13 * uVar27 + uVar14 * -0x30e44324 +
                             (int)((ulonglong)uVar13 * (ulonglong)uVar14 >> 0x20) ^ uVar40;
                    uVar13 = ((uint)((ulonglong)uVar13 * (ulonglong)uVar14) ^ uVar39) >>
                             (0x38U - (int)puVar18 & 0xff) | uVar27 << ((uint)(puVar18 + -6) & 0xff)
                             | uVar27 >> (0x18U - (int)puVar18 & 0xff);
                  }
                  else {
                    if (&DAT_00000005 < puVar11) {
                      uVar14 = *puVar25;
                      uVar27 = puVar25[1];
                      uVar13 = 0xbf9b0000;
                      goto LAB_017ea148;
                    }
                    uVar13 = (*puVar25 * -0x61c8864f ^ uVar39) >> (0x18U - (int)puVar18 & 0xff);
                  }
                  iVar1 = (uVar13 >> 8) << (uVar16 & 0xff);
                  HintPreloadData(iVar32 + iVar1);
                  HintPreloadData(iVar34 + iVar1 * 4);
                  HintPreloadData(iVar34 + iVar1 * 4 + 0x40);
                  if (uVar10 != 5) {
                    HintPreloadData(iVar32 + iVar1 + 0x20);
                  }
                  uVar27 = uVar17 & 7;
                  uVar17 = uVar17 + 1;
                  *(uint *)(param_1 + uVar27 * 4 + 0x2c) = uVar13;
                  if (uVar29 <= uVar17) goto LAB_017e992c;
                  puVar25 = (uint *)(uVar17 + iVar31);
                } while( true );
              }
              if (puVar11 == (uint *)&DAT_00000005) {
                uVar27 = 0x38 - (int)puVar18;
                puVar26 = puVar18 + -6;
                uVar13 = 0x18 - (int)puVar18;
                while( true ) {
                  uVar14 = uVar17 & 7;
                  puVar19 = (uint *)(uVar17 + iVar31);
                  uVar17 = uVar17 + 1;
                  puVar18 = (uint *)(param_1 + uVar14 * 4);
                  lVar4 = (ulonglong)*puVar19 * 0xbb000000;
                  uVar14 = puVar25[1] * -0x45000000 + *puVar19 * -0x30e44324 +
                           (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
                  uVar20 = ((uint)lVar4 ^ uVar39) >> (uVar27 & 0xff) |
                           uVar14 << ((uint)puVar26 & 0xff) | uVar14 >> (uVar13 & 0xff);
                  uVar14 = uVar20 >> 8;
                  HintPreloadData(iVar34 + uVar14 * 0x40);
                  HintPreloadData(iVar32 + uVar14 * 0x10);
                  puVar18[0xb] = uVar20;
                  if (uVar29 <= uVar17) break;
                  puVar25 = (uint *)(uVar17 + iVar31);
                }
              }
              else if (puVar11 < &DAT_00000006) {
                puVar18 = (uint *)(0x18 - (int)puVar18);
                do {
                  piVar24 = (int *)(uVar17 + iVar31);
                  uVar27 = uVar17 & 7;
                  uVar17 = uVar17 + 1;
                  uVar13 = (*piVar24 * -0x61c8864f ^ uVar39) >> ((uint)puVar18 & 0xff);
                  uVar40 = uVar13 >> 8;
                  HintPreloadData(iVar34 + uVar40 * 0x40);
                  HintPreloadData(iVar32 + uVar40 * 0x10);
                  *(uint *)(param_1 + uVar27 * 4 + 0x2c) = uVar13;
                } while (uVar17 < uVar29);
              }
              else {
                uVar27 = 0x38 - (int)puVar18;
                puVar26 = puVar18 + -6;
                uVar13 = 0x18 - (int)puVar18;
                while( true ) {
                  uVar14 = uVar17 & 7;
                  puVar19 = (uint *)(uVar17 + iVar31);
                  uVar17 = uVar17 + 1;
                  puVar18 = (uint *)(param_1 + uVar14 * 4);
                  lVar4 = (ulonglong)*puVar19 * 0xbf9b0000;
                  uVar14 = puVar25[1] * -0x40650000 + *puVar19 * -0x30e44324 +
                           (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
                  uVar20 = ((uint)lVar4 ^ uVar39) >> (uVar27 & 0xff) |
                           uVar14 << ((uint)puVar26 & 0xff) | uVar14 >> (uVar13 & 0xff);
                  uVar14 = uVar20 >> 8;
                  HintPreloadData(iVar34 + uVar14 * 0x40);
                  HintPreloadData(iVar32 + uVar14 * 0x10);
                  puVar18[0xb] = uVar20;
                  if (uVar29 <= uVar17) break;
                  puVar25 = (uint *)(uVar17 + iVar31);
                }
              }
            }
          }
LAB_017e992c:
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar8 < puVar38) {
          param_4 = puVar38;
          goto LAB_017e99b0;
        }
        while( true ) {
          iVar34 = local_70;
          puVar18 = (uint *)(((int)puVar38 - iVar31) - iVar34);
          iVar32 = iVar31;
          if (puVar18 < puVar36) {
            iVar32 = (int)puVar22 - (int)puVar36;
          }
          puVar25 = (uint *)(iVar32 + (int)puVar18);
          if (((char *)((int)puVar36 + ((iVar34 + -1) - ((int)puVar38 - iVar31))) < (char *)0x3) ||
             (*puVar25 != *puVar38)) break;
          if (puVar18 < puVar36) {
            puVar18 = puVar22;
          }
          else {
            puVar18 = puVar9;
          }
          puVar26 = puVar25 + 1;
          puVar12 = puVar38 + 1;
          puVar19 = (uint *)((int)puVar12 + ((int)puVar18 - (int)puVar26));
          if (puVar9 < puVar19) {
            puVar19 = puVar9;
          }
          if (puVar12 < (uint *)((int)puVar19 + -3)) {
            if (puVar25[1] == puVar38[1]) {
              puVar25 = puVar25 + 2;
              for (puVar35 = puVar38 + 2; puVar35 < (uint *)((int)puVar19 + -3);
                  puVar35 = puVar35 + 1) {
                if (*puVar25 != *puVar35) {
                  uVar17 = *puVar25 ^ *puVar35;
                  bVar5 = (byte)uVar17;
                  bVar6 = (byte)(uVar17 >> 8);
                  bVar7 = (byte)(uVar17 >> 0x10);
                  bVar2 = (byte)(uVar17 >> 0x18);
                  pcVar28 = (char *)((int)puVar35 +
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
                                    (int)puVar12));
                  goto LAB_017e9ffc;
                }
                puVar25 = puVar25 + 1;
              }
              goto LAB_017e9fb4;
            }
            uVar17 = puVar25[1] ^ puVar38[1];
            bVar5 = (byte)uVar17;
            bVar6 = (byte)(uVar17 >> 8);
            bVar7 = (byte)(uVar17 >> 0x10);
            bVar2 = (byte)(uVar17 >> 0x18);
            pcVar28 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
          else {
            puVar25 = puVar26;
            puVar35 = puVar12;
LAB_017e9fb4:
            if (puVar35 < (uint *)((int)puVar19 + -1)) {
              if ((short)*puVar25 == (short)*puVar35) {
                puVar25 = (uint *)((int)puVar25 + 2);
                puVar35 = (uint *)((int)puVar35 + 2);
              }
            }
            if ((puVar35 < puVar19) && ((char)*puVar25 == (char)*puVar35)) {
              puVar35 = (uint *)((int)puVar35 + 1);
            }
            pcVar28 = (char *)((int)puVar35 - (int)puVar12);
          }
LAB_017e9ffc:
          if (puVar18 == (uint *)((int)puVar26 + (int)pcVar28)) {
            puVar26 = (uint *)((int)puVar12 + (int)pcVar28);
            puVar25 = puVar37;
            puVar18 = puVar26;
            if (puVar26 < (uint *)((int)puVar9 + -3)) {
              if (*puVar37 == *(uint *)((int)puVar12 + (int)pcVar28)) {
                do {
                  puVar18 = puVar18 + 1;
                  puVar25 = puVar25 + 1;
                  if ((uint *)((int)puVar9 + -3) <= puVar18) goto LAB_017ea400;
                } while (*puVar25 == *puVar18);
                uVar17 = *puVar25 ^ *puVar18;
                bVar5 = (byte)uVar17;
                bVar6 = (byte)(uVar17 >> 8);
                bVar7 = (byte)(uVar17 >> 0x10);
                bVar2 = (byte)(uVar17 >> 0x18);
                pcVar30 = (char *)((int)puVar18 +
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
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar26));
              }
              else {
                uVar17 = *puVar37 ^ *(uint *)((int)puVar12 + (int)pcVar28);
                bVar5 = (byte)uVar17;
                bVar6 = (byte)(uVar17 >> 8);
                bVar7 = (byte)(uVar17 >> 0x10);
                bVar2 = (byte)(uVar17 >> 0x18);
                pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
              }
            }
            else {
LAB_017ea400:
              if (puVar18 < (uint *)((int)puVar9 + -1)) {
                if ((short)*puVar25 == (short)*puVar18) {
                  puVar25 = (uint *)((int)puVar25 + 2);
                  puVar18 = (uint *)((int)puVar18 + 2);
                }
              }
              if ((puVar18 < puVar9) && ((char)*puVar25 == (char)*puVar18)) {
                puVar18 = (uint *)((int)puVar18 + 1);
              }
              pcVar30 = (char *)((int)puVar18 - (int)puVar26);
            }
            pcVar28 = pcVar28 + (int)pcVar30;
          }
          pcVar30 = pcVar28 + 4;
          puVar18 = (uint *)param_2[3];
          if (puVar23 < puVar38) {
            FUN_017bfa44(puVar18,puVar38,puVar38,puVar23);
          }
          else {
            local_3c = *puVar38;
            puStack_38 = (uint *)puVar38[1];
            uStack_34 = puVar38[2];
            uStack_30 = puVar38[3];
            *puVar18 = local_3c;
            puVar18[1] = (uint)puStack_38;
            puVar18[2] = uStack_34;
            puVar18[3] = uStack_30;
          }
          puVar21 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar21 + 1) = 0;
          *puVar21 = 1;
          uVar3 = SUB42(pcVar28 + 1,0);
          if (pcVar28 + 1 < (char *)0x10000) {
            *(undefined2 *)((int)puVar21 + 6) = uVar3;
            param_2[1] = (uint)(puVar21 + 2);
          }
          else {
            param_2[10] = (int)((int)puVar21 - *param_2) >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar21 + 6) = uVar3;
            param_2[1] = (uint)(puVar21 + 2);
          }
          if (puVar8 < (uint *)((int)puVar38 + (int)pcVar30)) {
            local_70 = local_5c;
            puVar18 = param_2;
            param_4 = (uint *)((int)puVar38 + (int)pcVar30);
            local_5c = iVar34;
            goto LAB_017e99b0;
          }
          puVar38 = (uint *)((int)puVar38 + (int)pcVar30);
          local_70 = local_5c;
          local_5c = iVar34;
        }
        param_4 = puVar38;
        local_70 = iVar34;
      }
    } while (puVar38 < puVar8);
  }
LAB_017e99b0:
  *param_3 = local_5c;
  param_3[1] = local_70;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar9 - (int)param_4,puVar18,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

