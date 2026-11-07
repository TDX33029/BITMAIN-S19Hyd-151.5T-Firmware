// FUN_017fb4f4 @ 017fb4f4 size=4412 calls_out=11 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017fb4f4(int param_1,int *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint *puVar9;
  char *pcVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *extraout_r1;
  uint *puVar15;
  uint *extraout_r1_00;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  char *pcVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint *puVar28;
  char *pcVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  undefined8 uVar44;
  uint *local_70;
  char *local_6c;
  uint *local_60;
  char *local_5c;
  uint local_40;
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar13 = (uint *)((int)param_4 + param_5);
  puVar9 = puVar13 + -4;
  iVar30 = *(int *)(param_1 + 4);
  local_5c = (char *)*param_3;
  pcVar16 = *(char **)(param_1 + 0xc);
  local_2c = DAT_018ddaf8;
  uVar21 = *(uint *)(param_1 + 0xc4);
  puVar38 = (uint *)(pcVar16 + iVar30);
  uVar22 = uVar21;
  if (5 < uVar21) {
    uVar22 = 6;
  }
  local_6c = (char *)param_3[1];
  if (uVar22 < 4) {
    uVar22 = 4;
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar28 = param_4;
  if (param_4 == puVar38) {
    puVar28 = (uint *)((int)param_4 + 1);
  }
  uVar23 = *(uint *)(param_1 + 0x1c);
  iVar17 = *(int *)(param_1 + 8);
  uVar18 = *(uint *)(param_1 + 0xb8);
  puVar14 = (uint *)(uVar23 + iVar30);
  uVar19 = *(uint *)(param_1 + 200);
  iVar33 = *(int *)(param_1 + 0x10);
  if (puVar14 <= puVar9) {
    iVar39 = *(int *)(param_1 + 0x5c);
    pcVar10 = (char *)((int)puVar9 + (1 - (int)puVar14));
    iVar35 = *(int *)(param_1 + 0x28);
    if (pcVar10 < (char *)0x9) {
      uVar40 = uVar23 + (int)pcVar10;
    }
    else {
      uVar40 = uVar23 + 8;
    }
    iVar11 = *(int *)(param_1 + 0x24);
    if (uVar23 < uVar40) {
      uVar31 = *(uint *)(param_1 + 0x50);
      uVar41 = *(uint *)(param_1 + 0x54);
      if (4 < uVar21) {
        if (uVar19 == 5) goto LAB_017fb8c0;
        do {
          if (5 < uVar19) {
            uVar36 = *puVar14;
            uVar42 = 0xbf9b0000;
            uVar34 = puVar14[1];
            goto LAB_017fb9b4;
          }
          uVar42 = (*puVar14 * -0x61c8864f ^ uVar31) >> (0x18U - iVar11 & 0xff);
          while( true ) {
            iVar1 = (uVar42 >> 8) << (uVar22 & 0xff);
            HintPreloadData(iVar35 + iVar1);
            HintPreloadData(iVar39 + iVar1 * 4);
            HintPreloadData(iVar39 + iVar1 * 4 + 0x40);
            if (uVar21 != 5) {
              HintPreloadData(iVar35 + iVar1 + 0x20);
            }
            uVar36 = uVar23 & 7;
            uVar23 = uVar23 + 1;
            puVar14 = (uint *)(param_1 + uVar36 * 4);
            puVar14[0xb] = uVar42;
            if (uVar40 <= uVar23) goto LAB_017fb5d4;
            puVar14 = (uint *)(uVar23 + iVar30);
            if (uVar19 != 5) break;
LAB_017fb8c0:
            uVar36 = *puVar14;
            uVar42 = 0xbb000000;
            uVar34 = puVar14[1];
LAB_017fb9b4:
            uVar34 = uVar42 * uVar34 + uVar36 * -0x30e44324 +
                     (int)((ulonglong)uVar42 * (ulonglong)uVar36 >> 0x20) ^ uVar41;
            uVar42 = ((uint)((ulonglong)uVar42 * (ulonglong)uVar36) ^ uVar31) >>
                     (0x38U - iVar11 & 0xff) | uVar34 << (iVar11 - 0x18U & 0xff) |
                     uVar34 >> (0x18U - iVar11 & 0xff);
          }
        } while( true );
      }
      if (uVar19 == 5) {
        while( true ) {
          puVar12 = (uint *)(uVar23 + iVar30);
          puVar24 = puVar14 + 1;
          uVar42 = uVar23 & 7;
          uVar23 = uVar23 + 1;
          puVar14 = (uint *)(param_1 + uVar42 * 4);
          lVar5 = (ulonglong)*puVar12 * 0xbb000000;
          uVar42 = *puVar24 * -0x45000000 + *puVar12 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
                   ^ uVar41;
          uVar36 = ((uint)lVar5 ^ uVar31) >> (0x38U - iVar11 & 0xff) |
                   uVar42 << (iVar11 - 0x18U & 0xff) | uVar42 >> (0x18U - iVar11 & 0xff);
          uVar42 = uVar36 >> 8;
          HintPreloadData(iVar39 + uVar42 * 0x40);
          HintPreloadData(iVar35 + uVar42 * 0x10);
          puVar14[0xb] = uVar36;
          if (uVar40 <= uVar23) break;
          puVar14 = (uint *)(uVar23 + iVar30);
        }
      }
      else if (uVar19 < 6) {
        do {
          piVar2 = (int *)(uVar23 + iVar30);
          uVar41 = uVar23 & 7;
          uVar23 = uVar23 + 1;
          puVar14 = (uint *)(param_1 + uVar41 * 4);
          uVar42 = (*piVar2 * -0x61c8864f ^ uVar31) >> (0x18U - iVar11 & 0xff);
          uVar41 = uVar42 >> 8;
          HintPreloadData(iVar39 + uVar41 * 0x40);
          HintPreloadData(iVar35 + uVar41 * 0x10);
          puVar14[0xb] = uVar42;
        } while (uVar23 < uVar40);
      }
      else {
        while( true ) {
          puVar12 = (uint *)(uVar23 + iVar30);
          puVar24 = puVar14 + 1;
          uVar42 = uVar23 & 7;
          uVar23 = uVar23 + 1;
          puVar14 = (uint *)(param_1 + uVar42 * 4);
          lVar5 = (ulonglong)*puVar12 * 0xbf9b0000;
          uVar42 = *puVar24 * -0x40650000 + *puVar12 * -0x30e44324 + (int)((ulonglong)lVar5 >> 0x20)
                   ^ uVar41;
          uVar36 = ((uint)lVar5 ^ uVar31) >> (0x38U - iVar11 & 0xff) |
                   uVar42 << (iVar11 - 0x18U & 0xff) | uVar42 >> (0x18U - iVar11 & 0xff);
          uVar42 = uVar36 >> 8;
          HintPreloadData(iVar39 + uVar42 * 0x40);
          HintPreloadData(iVar35 + uVar42 * 0x10);
          puVar14[0xb] = uVar36;
          if (uVar40 <= uVar23) break;
          puVar14 = (uint *)(uVar23 + iVar30);
        }
      }
    }
  }
LAB_017fb5d4:
  local_70 = param_4;
  if (puVar28 < puVar9) {
    pcVar10 = (char *)(1 << (uVar18 & 0xff));
    puVar24 = (uint *)(iVar17 + iVar33);
    do {
      pcVar25 = (char *)((int)puVar28 + ((1 - iVar33) - iVar30));
      pcVar29 = pcVar10;
      if (pcVar25 <= pcVar10) {
        pcVar29 = pcVar25;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        pcVar29 = pcVar25;
      }
      pcVar25 = (char *)((int)puVar28 + ((1 - (int)local_5c) - iVar30));
      iVar33 = iVar17;
      if (pcVar16 <= pcVar25) {
        iVar33 = iVar30;
      }
      if ((pcVar29 < local_5c || (uint)((int)(pcVar16 + -1) - (int)pcVar25) < 3) ||
         (*(int *)((int)puVar28 + 1) != *(int *)(pcVar25 + iVar33))) {
        local_40 = 999999999;
        if (uVar19 == 5) {
          if (uVar21 == 5) {
            uVar44 = FUN_017d852c(param_1,puVar28,puVar13,&local_40);
          }
          else if (uVar21 < 6) {
            uVar44 = FUN_017d4200();
          }
          else {
            uVar44 = FUN_017daba0();
          }
        }
        else if (uVar19 < 6) {
          if (uVar21 == 5) {
            uVar44 = FUN_017d6e8c(param_1,puVar28,puVar13,&local_40);
          }
          else if (uVar21 < 6) {
            uVar44 = FUN_017d2ca0();
          }
          else {
            uVar44 = FUN_017d9120();
          }
        }
        else if (uVar21 == 5) {
          uVar44 = FUN_017d792c(param_1,puVar28,puVar13,&local_40);
        }
        else if (uVar21 < 6) {
          uVar44 = FUN_017d3690();
        }
        else {
          uVar44 = FUN_017d9da0();
        }
        puVar14 = (uint *)((ulonglong)uVar44 >> 0x20);
        pcVar29 = (char *)uVar44;
        if ((pcVar29 != (char *)0x0) && (local_60 = (uint *)local_40, (char *)0x3 < pcVar29)) {
          puVar12 = puVar28;
          if (3 < local_40) {
            pcVar25 = (char *)((int)puVar28 + ((3 - local_40) - iVar30));
            puVar14 = puVar24;
            iVar33 = iVar17;
            if (pcVar16 <= pcVar25) {
              puVar14 = puVar38;
              iVar33 = iVar30;
            }
            puVar20 = (uint *)(pcVar25 + iVar33);
            if (puVar14 < puVar20 && param_4 < puVar28) {
              do {
                puVar20 = (uint *)((int)puVar20 + -1);
                puVar28 = (uint *)((int)puVar12 + -1);
                if (*(char *)puVar28 != *(char *)puVar20) {
                  puVar28 = puVar12;
                  break;
                }
                pcVar29 = pcVar29 + 1;
                puVar12 = puVar28;
              } while (param_4 < puVar28 && puVar14 < puVar20);
            }
            local_6c = local_5c;
            local_5c = (char *)(local_40 - 3);
            puVar12 = puVar28;
          }
          goto LAB_017fb9f0;
        }
        uVar18 = (uint)((int)puVar28 - (int)param_4) >> 8;
        puVar28 = (uint *)((int)puVar28 + uVar18 + 1);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar18);
      }
      else {
        if (pcVar25 < pcVar16) {
          puVar14 = (uint *)(pcVar16 + iVar17);
        }
        else {
          puVar14 = puVar13;
        }
        puVar20 = (uint *)((int)puVar28 + 5);
        puVar43 = (uint *)(pcVar25 + iVar33 + 4);
        puVar15 = (uint *)((int)puVar20 + ((int)puVar14 - (int)puVar43));
        if (puVar13 < puVar15) {
          puVar15 = puVar13;
        }
        puVar12 = (uint *)((int)puVar28 + 1);
        if (puVar20 < (uint *)((int)puVar15 + -3)) {
          if (*(uint *)(pcVar25 + iVar33 + 4) == *(uint *)((int)puVar28 + 5)) {
            puVar27 = (uint *)(pcVar25 + iVar33 + 8);
            puVar28 = (uint *)((int)puVar28 + 9);
            while( true ) {
              if ((uint *)((int)puVar15 + -3) <= puVar28) break;
              if (*puVar27 != *puVar28) {
                uVar18 = *puVar27 ^ *puVar28;
                bVar6 = (byte)uVar18;
                bVar7 = (byte)(uVar18 >> 8);
                bVar8 = (byte)(uVar18 >> 0x10);
                bVar3 = (byte)(uVar18 >> 0x18);
                pcVar29 = (char *)((int)puVar28 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                           bVar7 >> 1 & 1) << 1 |
                                                                          bVar7 >> 2 & 1) << 1 |
                                                                         bVar7 >> 3 & 1) << 1 |
                                                                        bVar7 >> 4 & 1) << 1 |
                                                                       bVar7 >> 5 & 1) << 1 |
                                                                      bVar7 >> 6 & 1) << 1 |
                                                                     bVar7 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                    bVar8 >> 1 & 1) << 1 |
                                                                   bVar8 >> 2 & 1) << 1 |
                                                                  bVar8 >> 3 & 1) << 1 |
                                                                 bVar8 >> 4 & 1) << 1 |
                                                                bVar8 >> 5 & 1) << 1 |
                                                               bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar20));
                goto LAB_017fbf44;
              }
              puVar27 = puVar27 + 1;
              puVar28 = puVar28 + 1;
            }
            goto LAB_017fbf04;
          }
          uVar18 = *(uint *)(pcVar25 + iVar33 + 4) ^ *(uint *)((int)puVar28 + 5);
          bVar6 = (byte)uVar18;
          bVar7 = (byte)(uVar18 >> 8);
          bVar8 = (byte)(uVar18 >> 0x10);
          bVar3 = (byte)(uVar18 >> 0x18);
          pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) <<
                                                             1 | bVar8 >> 2 & 1) << 1 |
                                                           bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) <<
                                                          1 | bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1)
                                                        << 1 | bVar8 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
        else {
          puVar27 = puVar43;
          puVar28 = puVar20;
LAB_017fbf04:
          if (puVar28 < (uint *)((int)puVar15 + -1)) {
            if ((short)*puVar27 == (short)*puVar28) {
              puVar27 = (uint *)((int)puVar27 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar28 < puVar15) && ((char)*puVar27 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar29 = (char *)((int)puVar28 - (int)puVar20);
        }
LAB_017fbf44:
        if (puVar14 == (uint *)((int)puVar43 + (int)pcVar29)) {
          puVar15 = (uint *)((int)puVar20 + (int)pcVar29);
          puVar14 = puVar38;
          puVar28 = puVar15;
          if (puVar15 < (uint *)((int)puVar13 + -3)) {
            if (*puVar38 == *(uint *)((int)puVar20 + (int)pcVar29)) {
              do {
                puVar28 = puVar28 + 1;
                puVar14 = puVar14 + 1;
                if ((uint *)((int)puVar13 + -3) <= puVar28) goto LAB_017fc020;
              } while (*puVar14 == *puVar28);
              uVar18 = *puVar14 ^ *puVar28;
              bVar6 = (byte)uVar18;
              bVar7 = (byte)(uVar18 >> 8);
              bVar8 = (byte)(uVar18 >> 0x10);
              bVar3 = (byte)(uVar18 >> 0x18);
              pcVar25 = (char *)((int)puVar28 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1
                                                                  ) << 1 | bVar8 >> 2 & 1) << 1 |
                                                                bVar8 >> 3 & 1) << 1 |
                                                               bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1
                                                              ) << 1 | bVar8 >> 6 & 1) << 1 |
                                                            bVar8 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7)) >> 3) - (int)puVar15));
            }
            else {
              uVar18 = *puVar38 ^ *(uint *)((int)puVar20 + (int)pcVar29);
              bVar6 = (byte)uVar18;
              bVar7 = (byte)(uVar18 >> 8);
              bVar8 = (byte)(uVar18 >> 0x10);
              bVar3 = (byte)(uVar18 >> 0x18);
              pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1)
                                                                 << 1 | bVar8 >> 2 & 1) << 1 |
                                                               bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1
                                                              ) << 1 | bVar8 >> 5 & 1) << 1 |
                                                            bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8
                                               | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
            }
          }
          else {
LAB_017fc020:
            if (puVar28 < (uint *)((int)puVar13 + -1)) {
              if ((short)*puVar14 == (short)*puVar28) {
                puVar14 = (uint *)((int)puVar14 + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < puVar13) && ((char)*puVar14 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar25 = (char *)((int)puVar28 - (int)puVar15);
          }
          pcVar29 = pcVar29 + (int)pcVar25;
        }
        pcVar29 = pcVar29 + 4;
        local_60 = (uint *)0x1;
LAB_017fb9f0:
        uVar18 = (int)puVar12 - (int)param_4;
        puVar28 = (uint *)param_2[3];
        if (puVar13 + -8 < puVar12) {
          FUN_017bfa44(puVar28,param_4,puVar12);
          puVar14 = extraout_r1;
LAB_017fbdf0:
          param_2[3] = param_2[3] + uVar18;
          puVar28 = (uint *)param_2[1];
          if (0xffff < uVar18) {
            param_2[10] = (int)puVar28 - *param_2 >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          puVar14 = (uint *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar28[3] = uStack_30;
          *puVar28 = local_3c;
          puVar28[1] = (uint)puVar14;
          puVar28[2] = uStack_34;
          iVar33 = param_2[3];
          if (0x10 < uVar18) {
            local_3c = param_4[4];
            puVar14 = (uint *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(iVar33 + 0x10) = local_3c;
            *(uint **)(iVar33 + 0x14) = puVar14;
            *(uint *)(iVar33 + 0x18) = uStack_34;
            *(uint *)(iVar33 + 0x1c) = uStack_30;
            puStack_38 = puVar14;
            if (0x10 < (int)(uVar18 - 0x10)) {
              puVar28 = (uint *)(iVar33 + 0x20);
              puVar20 = param_4 + 0x10;
              do {
                uVar23 = puVar20[-7];
                uVar40 = puVar20[-6];
                puVar15 = puVar28 + 8;
                uVar41 = puVar20[-5];
                *puVar28 = puVar20[-8];
                puVar28[1] = uVar23;
                puVar28[2] = uVar40;
                puVar28[3] = uVar41;
                local_3c = puVar20[-4];
                puVar14 = (uint *)puVar20[-3];
                uStack_34 = puVar20[-2];
                uStack_30 = puVar20[-1];
                puVar28[4] = local_3c;
                puVar28[5] = (uint)puVar14;
                puVar28[6] = uStack_34;
                puVar28[7] = uStack_30;
                puVar28 = puVar15;
                puVar20 = puVar20 + 8;
              } while (puVar15 < (uint *)(iVar33 + uVar18));
              puStack_38 = puVar14;
            }
            goto LAB_017fbdf0;
          }
          param_2[3] = (int)(iVar33 + uVar18);
          puVar28 = (uint *)param_2[1];
          puStack_38 = puVar14;
        }
        *puVar28 = (uint)local_60;
        *(short *)(puVar28 + 1) = (short)uVar18;
        if ((char *)0xffff < pcVar29 + -3) {
          param_2[10] = (int)puVar28 - *param_2 >> 3;
          puVar14 = (uint *)&SUB_00000002;
          param_2[9] = 2;
        }
        *(short *)((int)puVar28 + 6) = (short)(pcVar29 + -3);
        param_2[1] = (int)(puVar28 + 2);
        puVar28 = (uint *)((int)puVar12 + (int)pcVar29);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar18 = *(uint *)(param_1 + 0x1c);
          puVar12 = (uint *)(uVar18 + iVar30);
          if (puVar12 <= puVar9) {
            iVar33 = *(int *)(param_1 + 0x28);
            pcVar29 = (char *)((int)puVar9 + (1 - (int)puVar12));
            iVar35 = *(int *)(param_1 + 0x24);
            if (pcVar29 < (char *)0x9) {
              uVar23 = uVar18 + (int)pcVar29;
            }
            else {
              uVar23 = uVar18 + 8;
            }
            puVar14 = *(uint **)(param_1 + 0x5c);
            if (uVar18 < uVar23) {
              uVar40 = *(uint *)(param_1 + 0x50);
              uVar41 = *(uint *)(param_1 + 0x54);
              if (4 < uVar21) {
                do {
                  if (uVar19 == 5) {
                    uVar36 = *puVar12;
                    uVar42 = puVar12[1];
                    uVar31 = 0xbb000000;
LAB_017fbbfc:
                    uVar42 = uVar31 * uVar42 + uVar36 * -0x30e44324 +
                             (int)((ulonglong)uVar31 * (ulonglong)uVar36 >> 0x20) ^ uVar41;
                    uVar31 = ((uint)((ulonglong)uVar31 * (ulonglong)uVar36) ^ uVar40) >>
                             (0x38U - iVar35 & 0xff) | uVar42 << (iVar35 - 0x18U & 0xff) |
                             uVar42 >> (0x18U - iVar35 & 0xff);
                  }
                  else {
                    if (5 < uVar19) {
                      uVar36 = *puVar12;
                      uVar42 = puVar12[1];
                      uVar31 = 0xbf9b0000;
                      goto LAB_017fbbfc;
                    }
                    uVar31 = (*puVar12 * -0x61c8864f ^ uVar40) >> (0x18U - iVar35 & 0xff);
                  }
                  iVar39 = (uVar31 >> 8) << (uVar22 & 0xff);
                  HintPreloadData(iVar33 + iVar39);
                  HintPreloadData(puVar14 + iVar39);
                  HintPreloadData(puVar14 + iVar39 + 0x10);
                  if (uVar21 != 5) {
                    HintPreloadData(iVar33 + iVar39 + 0x20);
                  }
                  uVar42 = uVar18 & 7;
                  uVar18 = uVar18 + 1;
                  *(uint *)(param_1 + uVar42 * 4 + 0x2c) = uVar31;
                  if (uVar23 <= uVar18) goto LAB_017fbab0;
                  puVar12 = (uint *)(uVar18 + iVar30);
                } while( true );
              }
              if (uVar19 == 5) {
                while( true ) {
                  puVar20 = (uint *)(uVar18 + iVar30);
                  uVar36 = uVar18 & 7;
                  uVar18 = uVar18 + 1;
                  lVar5 = (ulonglong)*puVar20 * 0xbb000000;
                  uVar31 = puVar12[1] * -0x45000000 + *puVar20 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar41;
                  uVar42 = ((uint)lVar5 ^ uVar40) >> (0x38U - iVar35 & 0xff) |
                           uVar31 << (iVar35 - 0x18U & 0xff) | uVar31 >> (0x18U - iVar35 & 0xff);
                  uVar31 = uVar42 >> 8;
                  HintPreloadData(puVar14 + uVar31 * 0x10);
                  HintPreloadData(iVar33 + uVar31 * 0x10);
                  *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar42;
                  if (uVar23 <= uVar18) break;
                  puVar12 = (uint *)(uVar18 + iVar30);
                }
              }
              else if (uVar19 < 6) {
                do {
                  piVar2 = (int *)(uVar18 + iVar30);
                  uVar42 = uVar18 & 7;
                  uVar18 = uVar18 + 1;
                  uVar31 = (*piVar2 * -0x61c8864f ^ uVar40) >> (0x18U - iVar35 & 0xff);
                  uVar41 = uVar31 >> 8;
                  HintPreloadData(puVar14 + uVar41 * 0x10);
                  HintPreloadData(iVar33 + uVar41 * 0x10);
                  *(uint *)(param_1 + uVar42 * 4 + 0x2c) = uVar31;
                } while (uVar18 < uVar23);
              }
              else {
                while( true ) {
                  uVar36 = uVar18 & 7;
                  puVar20 = (uint *)(uVar18 + iVar30);
                  uVar18 = uVar18 + 1;
                  lVar5 = (ulonglong)*puVar20 * 0xbf9b0000;
                  uVar31 = puVar12[1] * -0x40650000 + *puVar20 * -0x30e44324 +
                           (int)((ulonglong)lVar5 >> 0x20) ^ uVar41;
                  uVar42 = ((uint)lVar5 ^ uVar40) >> (0x38U - iVar35 & 0xff) |
                           uVar31 << (iVar35 - 0x18U & 0xff) | uVar31 >> (0x18U - iVar35 & 0xff);
                  uVar31 = uVar42 >> 8;
                  HintPreloadData(puVar14 + uVar31 * 0x10);
                  HintPreloadData(iVar33 + uVar31 * 0x10);
                  *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar42;
                  if (uVar23 <= uVar18) break;
                  puVar12 = (uint *)(uVar18 + iVar30);
                }
              }
            }
          }
LAB_017fbab0:
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar9 < puVar28) {
          local_60 = puVar28;
LAB_017fc354:
          local_70 = local_60;
          break;
        }
        while( true ) {
          pcVar32 = local_6c;
          iVar33 = (int)puVar28 - iVar30;
          pcVar25 = (char *)(iVar33 - *(int *)(param_1 + 0x10));
          pcVar29 = pcVar10;
          if (pcVar25 <= pcVar10) {
            pcVar29 = pcVar25;
          }
          if (*(int *)(param_1 + 0x18) != 0) {
            pcVar29 = pcVar25;
          }
          pcVar25 = (char *)(iVar33 - (int)pcVar32);
          iVar35 = iVar17;
          if (pcVar16 <= pcVar25) {
            iVar35 = iVar30;
          }
          puVar14 = (uint *)0x0;
          if ((pcVar29 < pcVar32 || (uint)((int)(pcVar32 + (int)(pcVar16 + -1)) - iVar33) < 3) ||
             (puVar14 = *(uint **)(pcVar25 + iVar35), (uint *)*puVar28 != puVar14)) break;
          if (pcVar25 < pcVar16) {
            puVar14 = (uint *)(pcVar16 + iVar17);
          }
          else {
            puVar14 = puVar13;
          }
          puVar12 = puVar28 + 1;
          puVar15 = (uint *)(pcVar25 + iVar35 + 4);
          puVar20 = (uint *)((int)puVar12 + ((int)puVar14 - (int)puVar15));
          if (puVar13 < puVar20) {
            puVar20 = puVar13;
          }
          puVar43 = (uint *)((int)puVar20 + -3);
          if (puVar12 < puVar43) {
            if (*(uint *)(pcVar25 + iVar35 + 4) == puVar28[1]) {
              puVar37 = puVar28 + 2;
              puVar27 = (uint *)(pcVar25 + iVar35 + 8);
              if (puVar37 < puVar43) {
                do {
                  if (*puVar27 != *puVar37) {
                    uVar18 = *puVar27 ^ *puVar37;
                    bVar6 = (byte)uVar18;
                    bVar7 = (byte)(uVar18 >> 8);
                    bVar8 = (byte)(uVar18 >> 0x10);
                    bVar3 = (byte)(uVar18 >> 0x18);
                    pcVar29 = (char *)((int)puVar37 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar12));
                    goto LAB_017fc1cc;
                  }
                  puVar37 = puVar37 + 1;
                  puVar27 = puVar27 + 1;
                } while (puVar37 < puVar43);
              }
              goto LAB_017fc364;
            }
            uVar18 = puVar28[1] ^ *(uint *)(pcVar25 + iVar35 + 4);
            bVar6 = (byte)uVar18;
            bVar7 = (byte)(uVar18 >> 8);
            bVar8 = (byte)(uVar18 >> 0x10);
            bVar3 = (byte)(uVar18 >> 0x18);
            pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                               << 1 | bVar6 >> 2 & 1) << 1 |
                                                             bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                            << 1 | bVar6 >> 5 & 1) << 1 |
                                                          bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                        bVar8 >> 1 & 1) << 1 |
                                                                       bVar8 >> 2 & 1) << 1 |
                                                                      bVar8 >> 3 & 1) << 1 |
                                                                     bVar8 >> 4 & 1) << 1 |
                                                                    bVar8 >> 5 & 1) << 1 |
                                                                   bVar8 >> 6 & 1) << 1 | bVar8 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
          else {
            puVar27 = puVar15;
            puVar37 = puVar12;
LAB_017fc364:
            if (puVar37 < (uint *)((int)puVar20 + -1)) {
              if ((short)*puVar27 == (short)*puVar37) {
                puVar27 = (uint *)((int)puVar27 + 2);
                puVar37 = (uint *)((int)puVar37 + 2);
              }
            }
            if ((puVar37 < puVar20) && ((char)*puVar27 == (char)*puVar37)) {
              puVar37 = (uint *)((int)puVar37 + 1);
            }
            pcVar29 = (char *)((int)puVar37 - (int)puVar12);
          }
LAB_017fc1cc:
          if (puVar14 == (uint *)((int)puVar15 + (int)pcVar29)) {
            puVar15 = (uint *)((int)puVar12 + (int)pcVar29);
            puVar20 = puVar38;
            puVar14 = puVar15;
            if (puVar15 < (uint *)((int)puVar13 + -3)) {
              if (*puVar38 == *(uint *)((int)puVar12 + (int)pcVar29)) {
                do {
                  puVar14 = puVar14 + 1;
                  puVar20 = puVar20 + 1;
                  if ((uint *)((int)puVar13 + -3) <= puVar14) goto LAB_017fc558;
                } while (*puVar20 == *puVar14);
                uVar18 = *puVar20 ^ *puVar14;
                bVar6 = (byte)uVar18;
                bVar7 = (byte)(uVar18 >> 8);
                bVar8 = (byte)(uVar18 >> 0x10);
                bVar3 = (byte)(uVar18 >> 0x18);
                pcVar25 = (char *)((int)puVar14 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                           bVar7 >> 1 & 1) << 1 |
                                                                          bVar7 >> 2 & 1) << 1 |
                                                                         bVar7 >> 3 & 1) << 1 |
                                                                        bVar7 >> 4 & 1) << 1 |
                                                                       bVar7 >> 5 & 1) << 1 |
                                                                      bVar7 >> 6 & 1) << 1 |
                                                                     bVar7 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                    bVar8 >> 1 & 1) << 1 |
                                                                   bVar8 >> 2 & 1) << 1 |
                                                                  bVar8 >> 3 & 1) << 1 |
                                                                 bVar8 >> 4 & 1) << 1 |
                                                                bVar8 >> 5 & 1) << 1 |
                                                               bVar8 >> 6 & 1) << 1 | bVar8 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar15));
              }
              else {
                uVar18 = *puVar38 ^ *(uint *)((int)puVar12 + (int)pcVar29);
                bVar6 = (byte)uVar18;
                bVar7 = (byte)(uVar18 >> 8);
                bVar8 = (byte)(uVar18 >> 0x10);
                bVar3 = (byte)(uVar18 >> 0x18);
                pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                   bVar7 >> 1 & 1) << 1 |
                                                                  bVar7 >> 2 & 1) << 1 |
                                                                 bVar7 >> 3 & 1) << 1 |
                                                                bVar7 >> 4 & 1) << 1 |
                                                               bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1
                                                              ) << 1 | bVar7 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar8 & 1) << 1 |
                                                                   bVar8 >> 1 & 1) << 1 |
                                                                  bVar8 >> 2 & 1) << 1 |
                                                                 bVar8 >> 3 & 1) << 1 |
                                                                bVar8 >> 4 & 1) << 1 |
                                                               bVar8 >> 5 & 1) << 1 | bVar8 >> 6 & 1
                                                              ) << 1 | bVar8 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
              }
            }
            else {
LAB_017fc558:
              if (puVar14 < (uint *)((int)puVar13 + -1)) {
                if ((short)*puVar20 == (short)*puVar14) {
                  puVar20 = (uint *)((int)puVar20 + 2);
                  puVar14 = (uint *)((int)puVar14 + 2);
                }
              }
              if ((puVar14 < puVar13) && ((char)*puVar20 == (char)*puVar14)) {
                puVar14 = (uint *)((int)puVar14 + 1);
              }
              pcVar25 = (char *)((int)puVar14 - (int)puVar15);
            }
            pcVar29 = pcVar29 + (int)pcVar25;
          }
          puVar12 = (uint *)param_2[3];
          if (puVar13 + -8 < puVar28) {
            FUN_017bfa44(puVar12,puVar28,puVar28);
            puVar14 = extraout_r1_00;
          }
          else {
            local_3c = *puVar28;
            puVar14 = (uint *)puVar28[1];
            uStack_34 = puVar28[2];
            uStack_30 = puVar28[3];
            *puVar12 = local_3c;
            puVar12[1] = (uint)puVar14;
            puVar12[2] = uStack_34;
            puVar12[3] = uStack_30;
            puStack_38 = puVar14;
          }
          puVar26 = (undefined4 *)param_2[1];
          puVar28 = (uint *)((int)puVar28 + (int)(pcVar29 + 4));
          *(undefined2 *)(puVar26 + 1) = 0;
          *puVar26 = 1;
          uVar4 = SUB42(pcVar29 + 1,0);
          if (pcVar29 + 1 < (char *)0x10000) {
            *(undefined2 *)((int)puVar26 + 6) = uVar4;
            param_2[1] = (int)(puVar26 + 2);
          }
          else {
            param_2[10] = (int)puVar26 - *param_2 >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar26 + 6) = uVar4;
            param_2[1] = (int)(puVar26 + 2);
          }
          if (puVar9 < puVar28) {
            local_6c = local_5c;
            local_60 = puVar28;
            local_5c = pcVar32;
            goto LAB_017fc354;
          }
          local_6c = local_5c;
          local_5c = pcVar32;
        }
        param_4 = puVar28;
        local_6c = pcVar32;
      }
      if (puVar9 <= puVar28) goto LAB_017fbcb4;
      iVar33 = *(int *)(param_1 + 0x10);
    } while( true );
  }
LAB_017fbcbc:
  *param_3 = local_5c;
  param_3[1] = local_6c;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar13 - (int)local_70,puVar14,local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_017fbcb4:
  local_70 = param_4;
  goto LAB_017fbcbc;
}

