// FUN_017f7470 @ 017f7470 size=5928 calls_out=12 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017f7470(int param_1,uint *param_2,int *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  undefined2 uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint *puVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  undefined8 uVar45;
  uint *local_a0;
  int local_78;
  uint *local_64;
  uint *local_5c;
  int local_54;
  uint local_40;
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar13 = (uint *)((int)param_4 + param_5);
  puVar41 = puVar13 + -4;
  uVar14 = *(uint *)(param_1 + 0xc4);
  iVar35 = *(int *)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  puVar22 = *(undefined4 **)(param_1 + 0xb4);
  iVar7 = puVar22[1];
  iVar18 = puVar22[3];
  pcVar8 = *(char **)(param_1 + 0xc);
  puVar28 = (uint *)*puVar22;
  uVar23 = uVar14;
  if (5 < uVar14) {
    uVar23 = 6;
  }
  puVar9 = (uint *)(pcVar8 + iVar35);
  puVar15 = (uint *)((iVar7 + iVar18) - (int)puVar28);
  if (uVar23 < 4) {
    uVar23 = 4;
  }
  puVar37 = param_4;
  if (puVar15 == (uint *)((int)param_4 - (int)puVar9)) {
    puVar37 = (uint *)((int)param_4 + 1);
  }
  local_54 = *param_3;
  uVar24 = *(uint *)(param_1 + 0x1c);
  local_78 = param_3[1];
  puVar10 = (uint *)(uVar24 + iVar35);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  uVar19 = *(uint *)(param_1 + 200);
  if (puVar10 <= puVar41) {
    iVar29 = *(int *)(param_1 + 0x28);
    pcVar20 = (char *)((int)puVar41 + (1 - (int)puVar10));
    iVar31 = *(int *)(param_1 + 0x24);
    if (pcVar20 < (char *)0x9) {
      uVar38 = uVar24 + (int)pcVar20;
    }
    else {
      uVar38 = uVar24 + 8;
    }
    puVar27 = *(uint **)(param_1 + 0x5c);
    puVar15 = puVar27;
    if (uVar24 < uVar38) {
      uVar36 = *(uint *)(param_1 + 0x54);
      uVar42 = *(uint *)(param_1 + 0x50);
      if (4 < uVar14) {
        if (uVar19 == 5) goto LAB_017f7710;
        do {
          if (5 < uVar19) {
            uVar30 = *puVar10;
            uVar40 = puVar10[1];
            uVar33 = 0xbf9b0000;
            goto LAB_017f7d98;
          }
          uVar33 = (*puVar10 * -0x61c8864f ^ uVar42) >> (0x18U - iVar31 & 0xff);
          while( true ) {
            iVar26 = (uVar33 >> 8) << (uVar23 & 0xff);
            HintPreloadData(iVar29 + iVar26);
            HintPreloadData(puVar27 + iVar26);
            HintPreloadData(puVar27 + iVar26 + 0x10);
            if (uVar14 != 5) {
              HintPreloadData(iVar29 + iVar26 + 0x20);
            }
            uVar30 = uVar24 & 7;
            uVar24 = uVar24 + 1;
            *(uint *)(param_1 + uVar30 * 4 + 0x2c) = uVar33;
            if (uVar38 <= uVar24) goto LAB_017f7564;
            puVar10 = (uint *)(uVar24 + iVar35);
            if (uVar19 != 5) break;
LAB_017f7710:
            uVar30 = *puVar10;
            uVar40 = puVar10[1];
            uVar33 = 0xbb000000;
LAB_017f7d98:
            uVar40 = uVar33 * uVar40 + uVar30 * -0x30e44324 +
                     (int)((ulonglong)uVar33 * (ulonglong)uVar30 >> 0x20) ^ uVar36;
            uVar33 = ((uint)((ulonglong)uVar33 * (ulonglong)uVar30) ^ uVar42) >>
                     (0x38U - iVar31 & 0xff) | uVar40 << (iVar31 - 0x18U & 0xff) |
                     uVar40 >> (0x18U - iVar31 & 0xff);
          }
        } while( true );
      }
      if (uVar19 == 5) {
        while( true ) {
          uVar40 = uVar24 & 7;
          puVar32 = (uint *)(uVar24 + iVar35);
          uVar24 = uVar24 + 1;
          lVar3 = (ulonglong)*puVar32 * 0xbb000000;
          uVar33 = puVar10[1] * -0x45000000 + *puVar32 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar36;
          uVar30 = ((uint)lVar3 ^ uVar42) >> (0x38U - iVar31 & 0xff) |
                   uVar33 << (iVar31 - 0x18U & 0xff) | uVar33 >> (0x18U - iVar31 & 0xff);
          uVar33 = uVar30 >> 8;
          HintPreloadData(puVar27 + uVar33 * 0x10);
          HintPreloadData(iVar29 + uVar33 * 0x10);
          *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar30;
          if (uVar38 <= uVar24) break;
          puVar10 = (uint *)(uVar24 + iVar35);
        }
      }
      else if (uVar19 < 6) {
        do {
          piVar25 = (int *)(uVar24 + iVar35);
          uVar30 = uVar24 & 7;
          uVar24 = uVar24 + 1;
          uVar33 = (*piVar25 * -0x61c8864f ^ uVar42) >> (0x18U - iVar31 & 0xff);
          uVar36 = uVar33 >> 8;
          HintPreloadData(puVar27 + uVar36 * 0x10);
          HintPreloadData(iVar29 + uVar36 * 0x10);
          *(uint *)(param_1 + uVar30 * 4 + 0x2c) = uVar33;
        } while (uVar24 < uVar38);
      }
      else {
        while( true ) {
          puVar15 = (uint *)(uVar24 + iVar35);
          uVar33 = uVar24 & 7;
          uVar24 = uVar24 + 1;
          lVar3 = (ulonglong)*puVar15 * 0xbf9b0000;
          uVar30 = puVar10[1] * -0x40650000 + *puVar15 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar36;
          puVar15 = (uint *)(((uint)lVar3 ^ uVar42) >> (0x38U - iVar31 & 0xff) |
                             uVar30 << (iVar31 - 0x18U & 0xff) | uVar30 >> (0x18U - iVar31 & 0xff));
          HintPreloadData(puVar27 + ((uint)puVar15 >> 8) * 0x10);
          HintPreloadData(iVar29 + ((uint)puVar15 >> 8) * 0x10);
          *(uint **)(param_1 + uVar33 * 4 + 0x2c) = puVar15;
          if (uVar38 <= uVar24) break;
          puVar10 = (uint *)(uVar24 + iVar35);
        }
      }
    }
  }
LAB_017f7564:
  local_64 = param_4;
  if (puVar37 < puVar41) {
    iVar31 = -(int)pcVar8 - iVar7;
    do {
      pcVar20 = (char *)((int)puVar37 + ((1 - local_54) - iVar35));
      if (pcVar20 < pcVar8) {
        piVar25 = (int *)((int)puVar28 + (int)(pcVar20 + iVar7 + iVar31));
      }
      else {
        piVar25 = (int *)(pcVar20 + iVar35);
      }
      if ((pcVar8 + (-1 - (int)pcVar20) < (char *)0x3) || (*piVar25 != *(int *)((int)puVar37 + 1)))
      {
        pcVar20 = (char *)0x0;
      }
      else {
        if (pcVar20 < pcVar8) {
          puVar15 = puVar28;
        }
        else {
          puVar15 = puVar13;
        }
        puVar10 = (uint *)((int)puVar37 + 5);
        puVar32 = (uint *)(piVar25 + 1);
        puVar27 = (uint *)((int)puVar10 + ((int)puVar15 - (int)puVar32));
        if (puVar13 < puVar27) {
          puVar27 = puVar13;
        }
        if (puVar10 < (uint *)((int)puVar27 + -3)) {
          if (piVar25[1] == *(uint *)((int)puVar37 + 5)) {
            puVar12 = (uint *)(piVar25 + 2);
            puVar16 = (uint *)((int)puVar37 + 9);
            while( true ) {
              if ((uint *)((int)puVar27 + -3) <= puVar16) break;
              if (*puVar12 != *puVar16) {
                uVar24 = *puVar12 ^ *puVar16;
                bVar4 = (byte)uVar24;
                bVar5 = (byte)(uVar24 >> 8);
                bVar6 = (byte)(uVar24 >> 0x10);
                bVar1 = (byte)(uVar24 >> 0x18);
                pcVar20 = (char *)((int)puVar16 +
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
                                                                  )) >> 3) - (int)puVar10));
                goto LAB_017f8608;
              }
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            }
            goto LAB_017f85d0;
          }
          uVar24 = piVar25[1] ^ *(uint *)((int)puVar37 + 5);
          bVar4 = (byte)uVar24;
          bVar5 = (byte)(uVar24 >> 8);
          bVar6 = (byte)(uVar24 >> 0x10);
          bVar1 = (byte)(uVar24 >> 0x18);
          pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar12 = puVar32;
          puVar16 = puVar10;
LAB_017f85d0:
          if (puVar16 < (uint *)((int)puVar27 + -1)) {
            if ((short)*puVar12 == (short)*puVar16) {
              puVar12 = (uint *)((int)puVar12 + 2);
              puVar16 = (uint *)((int)puVar16 + 2);
            }
          }
          if ((puVar16 < puVar27) && ((char)*puVar12 == (char)*puVar16)) {
            puVar16 = (uint *)((int)puVar16 + 1);
          }
          pcVar20 = (char *)((int)puVar16 - (int)puVar10);
        }
LAB_017f8608:
        if (puVar15 == (uint *)((int)puVar32 + (int)pcVar20)) {
          puVar32 = (uint *)((int)puVar10 + (int)pcVar20);
          puVar27 = puVar9;
          puVar15 = puVar32;
          if (puVar32 < (uint *)((int)puVar13 + -3)) {
            if (*puVar9 == *(uint *)((int)puVar10 + (int)pcVar20)) {
              do {
                puVar15 = puVar15 + 1;
                puVar27 = puVar27 + 1;
                if ((uint *)((int)puVar13 + -3) <= puVar15) goto LAB_017f8804;
              } while (*puVar27 == *puVar15);
              uVar24 = *puVar27 ^ *puVar15;
              bVar4 = (byte)uVar24;
              bVar5 = (byte)(uVar24 >> 8);
              bVar6 = (byte)(uVar24 >> 0x10);
              bVar1 = (byte)(uVar24 >> 0x18);
              pcVar21 = (char *)((int)puVar15 +
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
                                                            bVar1 >> 7)) >> 3) - (int)puVar32));
            }
            else {
              uVar24 = *puVar9 ^ *(uint *)((int)puVar10 + (int)pcVar20);
              bVar4 = (byte)uVar24;
              bVar5 = (byte)(uVar24 >> 8);
              bVar6 = (byte)(uVar24 >> 0x10);
              bVar1 = (byte)(uVar24 >> 0x18);
              pcVar21 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017f8804:
            if (puVar15 < (uint *)((int)puVar13 + -1)) {
              if ((short)*puVar27 == (short)*puVar15) {
                puVar27 = (uint *)((int)puVar27 + 2);
                puVar15 = (uint *)((int)puVar15 + 2);
              }
            }
            if ((puVar15 < puVar13) && ((char)*puVar27 == (char)*puVar15)) {
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            pcVar21 = (char *)((int)puVar15 - (int)puVar32);
          }
          pcVar20 = pcVar20 + (int)pcVar21;
        }
        pcVar20 = pcVar20 + 4;
      }
      local_40 = 999999999;
      if (uVar19 == 5) {
        if (uVar14 == 5) {
          uVar45 = FUN_017e1858(param_1,puVar37,puVar13,&local_40);
        }
        else if (uVar14 < 6) {
          uVar45 = FUN_017de968();
        }
        else {
          uVar45 = FUN_017e4b1c();
        }
      }
      else if (uVar19 < 6) {
        if (uVar14 == 5) {
          uVar45 = FUN_017df92c(param_1,puVar37,puVar13,&local_40);
        }
        else if (uVar14 < 6) {
          uVar45 = FUN_017dcb2c();
        }
        else {
          uVar45 = FUN_017e2870();
        }
      }
      else if (uVar14 == 5) {
        uVar45 = FUN_017e0808(param_1,puVar37,puVar13,&local_40);
      }
      else if (uVar14 < 6) {
        uVar45 = FUN_017dd998();
      }
      else {
        uVar45 = FUN_017e38f8();
      }
      puVar15 = (uint *)((ulonglong)uVar45 >> 0x20);
      local_5c = (uint *)uVar45;
      if (pcVar20 < local_5c) {
        local_64 = (uint *)local_40;
        if ((char *)0x3 < local_5c) {
          puVar15 = puVar37;
          if (puVar37 < puVar41) goto LAB_017f7898;
LAB_017f7a40:
          puVar10 = puVar37;
          if (3 < local_64) {
            pcVar20 = (char *)((int)puVar37 + ((3 - (int)local_64) - iVar35));
            if (pcVar20 < pcVar8) {
              puVar27 = (uint *)((int)puVar28 + (int)(pcVar20 + iVar7 + (-(int)pcVar8 - iVar7)));
              puVar15 = (uint *)(iVar7 + iVar18);
            }
            else {
              puVar27 = (uint *)(pcVar20 + iVar35);
              puVar15 = puVar9;
            }
            bVar44 = puVar15 <= puVar27;
            bVar43 = puVar27 == puVar15;
            if (bVar44 && !bVar43) {
              bVar44 = param_4 <= puVar37;
              bVar43 = puVar37 == param_4;
            }
            if (bVar44 && !bVar43) {
              do {
                puVar27 = (uint *)((int)puVar27 + -1);
                puVar10 = (uint *)((int)puVar37 + -1);
                if (*(char *)puVar10 != *(char *)puVar27) {
                  puVar10 = puVar37;
                  break;
                }
                local_5c = (uint *)((int)local_5c + 1);
                puVar37 = puVar10;
              } while (param_4 < puVar10 && puVar15 < puVar27);
            }
            local_78 = local_54;
            local_54 = (int)local_64 - 3;
          }
          goto LAB_017f7ad4;
        }
LAB_017f7d54:
        uVar24 = ((uint)((int)puVar37 - (int)param_4) >> 8) + 1;
        puVar37 = (uint *)((int)puVar37 + uVar24);
        *(uint *)(param_1 + 0xdc) = (uint)(8 < uVar24);
      }
      else {
        if (pcVar20 < (char *)0x4) goto LAB_017f7d54;
        local_64 = (uint *)0x1;
        puVar10 = (uint *)((int)puVar37 + 1);
        puVar15 = (uint *)((int)puVar37 + 1);
        local_5c = (uint *)pcVar20;
        if (puVar37 < puVar41) {
LAB_017f7898:
          puVar10 = local_5c;
          puVar27 = puVar37;
          do {
            puVar32 = (uint *)((int)puVar27 + 1);
            pcVar20 = (char *)(((int)puVar32 - iVar35) - local_54);
            if (pcVar20 < pcVar8) {
              piVar25 = (int *)((int)puVar28 + (int)(pcVar20 + iVar7 + iVar31));
            }
            else {
              piVar25 = (int *)(pcVar20 + iVar35);
            }
            if ((pcVar8 + ((local_54 + -1) - ((int)puVar32 - iVar35)) < (char *)0x3) ||
               (*piVar25 != *(int *)((int)puVar27 + 1))) {
              iVar29 = LZCOUNT(local_64);
            }
            else {
              if (pcVar20 < pcVar8) {
                puVar37 = puVar28;
              }
              else {
                puVar37 = puVar13;
              }
              puVar16 = (uint *)(piVar25 + 1);
              puVar11 = (uint *)((int)puVar27 + 5);
              puVar12 = (uint *)((int)puVar11 + ((int)puVar37 - (int)puVar16));
              if (puVar13 < puVar12) {
                puVar12 = puVar13;
              }
              puVar17 = (uint *)((int)puVar12 + -3);
              if (puVar11 < puVar17) {
                if (piVar25[1] == *(uint *)((int)puVar27 + 5)) {
                  puVar39 = (uint *)((int)puVar27 + 9);
                  local_a0 = (uint *)(piVar25 + 2);
                  if (puVar39 < puVar17) {
                    do {
                      if (*local_a0 != *puVar39) {
                        uVar24 = *puVar39 ^ *local_a0;
                        bVar4 = (byte)uVar24;
                        bVar5 = (byte)(uVar24 >> 8);
                        bVar6 = (byte)(uVar24 >> 0x10);
                        bVar1 = (byte)(uVar24 >> 0x18);
                        pcVar20 = (char *)((int)puVar39 +
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
                                          (int)puVar11));
                        goto LAB_017f82f4;
                      }
                      puVar39 = puVar39 + 1;
                      local_a0 = local_a0 + 1;
                    } while (puVar39 < puVar17);
                  }
                  goto LAB_017f82b0;
                }
                uVar24 = piVar25[1] ^ *(uint *)((int)puVar27 + 5);
                bVar4 = (byte)uVar24;
                bVar5 = (byte)(uVar24 >> 8);
                bVar6 = (byte)(uVar24 >> 0x10);
                bVar1 = (byte)(uVar24 >> 0x18);
                pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
                puVar39 = puVar11;
                local_a0 = puVar16;
LAB_017f82b0:
                if (puVar39 < (uint *)((int)puVar12 + -1)) {
                  if ((short)*local_a0 == (short)*puVar39) {
                    local_a0 = (uint *)((int)local_a0 + 2);
                    puVar39 = (uint *)((int)puVar39 + 2);
                  }
                }
                if ((puVar39 < puVar12) && ((char)*local_a0 == (char)*puVar39)) {
                  puVar39 = (uint *)((int)puVar39 + 1);
                }
                pcVar20 = (char *)((int)puVar39 - (int)puVar11);
              }
LAB_017f82f4:
              if (puVar37 == (uint *)((int)puVar16 + (int)pcVar20)) {
                puVar12 = (uint *)((int)puVar11 + (int)pcVar20);
                puVar16 = puVar9;
                puVar37 = puVar12;
                if (puVar12 < (uint *)((int)puVar13 + -3)) {
                  if (*puVar9 == *(uint *)((int)puVar11 + (int)pcVar20)) {
                    do {
                      puVar37 = puVar37 + 1;
                      puVar16 = puVar16 + 1;
                      if ((uint *)((int)puVar13 + -3) <= puVar37) goto LAB_017f8450;
                    } while (*puVar16 == *puVar37);
                    uVar24 = *puVar16 ^ *puVar37;
                    bVar4 = (byte)uVar24;
                    bVar5 = (byte)(uVar24 >> 8);
                    bVar6 = (byte)(uVar24 >> 0x10);
                    bVar1 = (byte)(uVar24 >> 0x18);
                    pcVar21 = (char *)((int)puVar37 +
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
                                                                  )) >> 3) - (int)puVar12));
                  }
                  else {
                    uVar24 = *puVar9 ^ *(uint *)((int)puVar11 + (int)pcVar20);
                    bVar4 = (byte)uVar24;
                    bVar5 = (byte)(uVar24 >> 8);
                    bVar6 = (byte)(uVar24 >> 0x10);
                    bVar1 = (byte)(uVar24 >> 0x18);
                    pcVar21 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
LAB_017f8450:
                  if (puVar37 < (uint *)((int)puVar13 + -1)) {
                    if ((short)*puVar16 == (short)*puVar37) {
                      puVar16 = (uint *)((int)puVar16 + 2);
                      puVar37 = (uint *)((int)puVar37 + 2);
                    }
                  }
                  if ((puVar37 < puVar13) && ((char)*puVar16 == (char)*puVar37)) {
                    puVar37 = (uint *)((int)puVar37 + 1);
                  }
                  pcVar21 = (char *)((int)puVar37 - (int)puVar12);
                }
                pcVar20 = pcVar20 + (int)pcVar21;
              }
              iVar29 = LZCOUNT(local_64);
              if (pcVar20 < (char *)0xfffffffc &&
                  (int)((int)puVar10 + -10) * 3 + iVar29 < (int)(pcVar20 + 4) * 3) {
                local_64 = (uint *)0x1;
                iVar29 = 0x1f;
                puVar15 = puVar32;
                puVar10 = (uint *)(pcVar20 + 4);
              }
            }
            local_40 = 999999999;
            if (uVar19 == 5) {
              if (uVar14 == 5) {
                pcVar20 = (char *)FUN_017e1858(param_1,puVar32,puVar13,&local_40);
              }
              else if (uVar14 < 6) {
                pcVar20 = (char *)FUN_017de968();
              }
              else {
                pcVar20 = (char *)FUN_017e4b1c();
              }
            }
            else if (uVar19 < 6) {
              if (uVar14 == 5) {
                pcVar20 = (char *)FUN_017df92c(param_1,puVar32,puVar13,&local_40);
              }
              else if (uVar14 < 6) {
                pcVar20 = (char *)FUN_017dcb2c();
              }
              else {
                pcVar20 = (char *)FUN_017e2870();
              }
            }
            else if (uVar14 == 5) {
              pcVar20 = (char *)FUN_017e0808(param_1,puVar32,puVar13,&local_40);
            }
            else if (uVar14 < 6) {
              pcVar20 = (char *)FUN_017dd998();
            }
            else {
              pcVar20 = (char *)FUN_017e38f8();
            }
            iVar26 = iVar29 + (int)puVar10 * 4;
            if (pcVar20 < &DAT_00000004 ||
                LZCOUNT(local_40) + (int)pcVar20 * 4 + -0x1f <= iVar26 + -0x1b) {
              puVar37 = puVar15;
              local_5c = puVar10;
              if (puVar41 <= puVar32) goto LAB_017f7a40;
              puVar32 = (uint *)((int)puVar27 + 2);
              pcVar20 = (char *)(((int)puVar32 - iVar35) - local_54);
              if (pcVar20 < pcVar8) {
                piVar25 = (int *)((int)puVar28 + (int)(pcVar20 + iVar7 + iVar31));
              }
              else {
                piVar25 = (int *)(pcVar20 + iVar35);
              }
              if (((char *)0x2 < pcVar8 + ((local_54 + -1) - ((int)puVar32 - iVar35))) &&
                 (*piVar25 == *(int *)((int)puVar27 + 2))) {
                puVar37 = puVar13;
                if (pcVar20 < pcVar8) {
                  puVar37 = puVar28;
                }
                puVar11 = (uint *)(piVar25 + 1);
                puVar12 = (uint *)((int)puVar27 + 6);
                puVar16 = (uint *)((int)puVar12 + ((int)puVar37 - (int)puVar11));
                if (puVar13 < puVar16) {
                  puVar16 = puVar13;
                }
                puVar17 = (uint *)((int)puVar16 + -3);
                if (puVar12 < puVar17) {
                  if (piVar25[1] == *(uint *)((int)puVar27 + 6)) {
                    puVar27 = (uint *)((int)puVar27 + 10);
                    puVar39 = (uint *)(piVar25 + 2);
                    if (puVar27 < puVar17) {
                      do {
                        if (*puVar39 != *puVar27) {
                          uVar24 = *puVar39 ^ *puVar27;
                          bVar4 = (byte)uVar24;
                          bVar5 = (byte)(uVar24 >> 8);
                          bVar6 = (byte)(uVar24 >> 0x10);
                          bVar1 = (byte)(uVar24 >> 0x18);
                          pcVar20 = (char *)((int)puVar27 +
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
                                            (int)puVar12));
                          goto LAB_017f81bc;
                        }
                        puVar27 = puVar27 + 1;
                        puVar39 = puVar39 + 1;
                      } while (puVar27 < puVar17);
                    }
                    goto LAB_017f8150;
                  }
                  uVar24 = piVar25[1] ^ *(uint *)((int)puVar27 + 6);
                  bVar4 = (byte)uVar24;
                  bVar5 = (byte)(uVar24 >> 8);
                  bVar6 = (byte)(uVar24 >> 0x10);
                  bVar1 = (byte)(uVar24 >> 0x18);
                  pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                      bVar1 >> 7)) >> 3);
                }
                else {
                  puVar39 = puVar11;
                  puVar27 = puVar12;
LAB_017f8150:
                  if (puVar27 < (uint *)((int)puVar16 + -1)) {
                    if ((short)*puVar39 == (short)*puVar27) {
                      puVar39 = (uint *)((int)puVar39 + 2);
                      puVar27 = (uint *)((int)puVar27 + 2);
                    }
                  }
                  if ((puVar27 < puVar16) && ((char)*puVar39 == (char)*puVar27)) {
                    puVar27 = (uint *)((int)puVar27 + 1);
                  }
                  pcVar20 = (char *)((int)puVar27 - (int)puVar12);
                }
LAB_017f81bc:
                if (puVar37 == (uint *)((int)puVar11 + (int)pcVar20)) {
                  puVar37 = (uint *)((int)puVar12 + (int)pcVar20);
                  puVar27 = (uint *)((int)puVar13 + -3);
                  if (puVar37 < puVar27) {
                    if (*puVar9 == *(uint *)((int)puVar12 + (int)pcVar20)) {
                      puVar16 = puVar37 + 1;
                      local_5c = puVar9 + 1;
                      if (puVar16 < puVar27) {
                        do {
                          if (*local_5c != *puVar16) {
                            uVar24 = *local_5c ^ *puVar16;
                            bVar4 = (byte)uVar24;
                            bVar5 = (byte)(uVar24 >> 8);
                            bVar6 = (byte)(uVar24 >> 0x10);
                            bVar1 = (byte)(uVar24 >> 0x18);
                            pcVar21 = (char *)((int)puVar16 +
                                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x18 | (uint)(byte)((((((((bVar5 & 1)
                                                                                        << 1 | bVar5
                                                                                               >> 1 
                                                  & 1) << 1 | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                  << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                  | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
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
                                                                  )) >> 3) - (int)puVar37));
                            goto LAB_017f874c;
                          }
                          puVar16 = puVar16 + 1;
                          local_5c = local_5c + 1;
                        } while (puVar16 < puVar27);
                      }
                      goto LAB_017f88b4;
                    }
                    uVar24 = *puVar9 ^ *(uint *)((int)puVar12 + (int)pcVar20);
                    bVar4 = (byte)uVar24;
                    bVar5 = (byte)(uVar24 >> 8);
                    bVar6 = (byte)(uVar24 >> 0x10);
                    bVar1 = (byte)(uVar24 >> 0x18);
                    pcVar21 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
                  else {
                    puVar16 = puVar37;
                    local_5c = puVar9;
LAB_017f88b4:
                    if (puVar16 < (uint *)((int)puVar13 + -1)) {
                      if ((short)*local_5c == (short)*puVar16) {
                        local_5c = (uint *)((int)local_5c + 2);
                        puVar16 = (uint *)((int)puVar16 + 2);
                      }
                    }
                    if ((puVar16 < puVar13) && ((char)*local_5c == (char)*puVar16)) {
                      puVar16 = (uint *)((int)puVar16 + 1);
                    }
                    pcVar21 = (char *)((int)puVar16 - (int)puVar37);
                  }
LAB_017f874c:
                  pcVar20 = pcVar20 + (int)pcVar21;
                }
                pcVar21 = pcVar20;
                if ((char *)0xfffffffb < pcVar20) {
                  pcVar21 = (char *)0x0;
                }
                if (pcVar20 < (char *)0xfffffffc) {
                  pcVar21 = (char *)0x1;
                }
                if ((int)(pcVar20 + 4) * 4 <= iVar26 + -0x1e) {
                  pcVar21 = (char *)0x0;
                }
                if (pcVar21 != (char *)0x0) {
                  local_64 = (uint *)0x1;
                  iVar29 = 0x1f;
                  puVar15 = puVar32;
                  puVar10 = (uint *)(pcVar20 + 4);
                }
              }
              local_40 = 999999999;
              if (uVar19 == 5) {
                if (uVar14 == 5) {
                  pcVar20 = (char *)FUN_017e1858(param_1,puVar32,puVar13,&local_40);
                }
                else if (uVar14 < 6) {
                  pcVar20 = (char *)FUN_017de968();
                }
                else {
                  pcVar20 = (char *)FUN_017e4b1c();
                }
              }
              else if (uVar19 < 6) {
                if (uVar14 == 5) {
                  pcVar20 = (char *)FUN_017df92c(param_1,puVar32,puVar13,&local_40);
                }
                else if (uVar14 < 6) {
                  pcVar20 = (char *)FUN_017dcb2c();
                }
                else {
                  pcVar20 = (char *)FUN_017e2870();
                }
              }
              else if (uVar14 == 5) {
                pcVar20 = (char *)FUN_017e0808(param_1,puVar32,puVar13,&local_40);
              }
              else if (uVar14 < 6) {
                pcVar20 = (char *)FUN_017dd998();
              }
              else {
                pcVar20 = (char *)FUN_017e38f8();
              }
              puVar37 = puVar15;
              local_5c = puVar10;
              if (pcVar20 < (char *)0x4 ||
                  LZCOUNT(local_40) + (int)pcVar20 * 4 + -0x1f <=
                  iVar29 + (int)((int)puVar10 + -6) * 4) goto LAB_017f7a40;
            }
            puVar37 = puVar32;
            local_5c = (uint *)pcVar20;
            local_64 = (uint *)local_40;
            if (puVar41 <= puVar32) goto LAB_017f7a40;
            puVar15 = puVar32;
            puVar10 = (uint *)pcVar20;
            puVar27 = puVar32;
          } while( true );
        }
LAB_017f7ad4:
        uVar24 = (int)puVar10 - (int)param_4;
        puVar27 = puVar13 + -8;
        puVar37 = (uint *)param_2[3];
        puVar15 = param_2;
        if (puVar27 < puVar10) {
          FUN_017bfa44(puVar37,param_4,puVar10);
LAB_017f7ff8:
          param_2[3] = param_2[3] + uVar24;
          puVar32 = (uint *)param_2[1];
          if (0xffff < uVar24) {
            param_2[10] = (int)((int)puVar32 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          puStack_38 = (uint *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          *puVar37 = local_3c;
          puVar37[1] = (uint)puStack_38;
          puVar37[2] = uStack_34;
          puVar37[3] = uStack_30;
          uVar38 = param_2[3];
          if (0x10 < uVar24) {
            local_3c = param_4[4];
            puStack_38 = (uint *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(uVar38 + 0x10) = local_3c;
            *(uint **)(uVar38 + 0x14) = puStack_38;
            *(uint *)(uVar38 + 0x18) = uStack_34;
            *(uint *)(uVar38 + 0x1c) = uStack_30;
            if (0x10 < (int)(uVar24 - 0x10)) {
              puVar37 = param_4 + 0x10;
              puVar32 = (uint *)(uVar38 + 0x20);
              do {
                uVar36 = puVar37[-7];
                uVar42 = puVar37[-6];
                puVar16 = puVar32 + 8;
                uVar33 = puVar37[-5];
                *puVar32 = puVar37[-8];
                puVar32[1] = uVar36;
                puVar32[2] = uVar42;
                puVar32[3] = uVar33;
                local_3c = puVar37[-4];
                puStack_38 = (uint *)puVar37[-3];
                uStack_34 = puVar37[-2];
                uStack_30 = puVar37[-1];
                puVar32[4] = local_3c;
                puVar32[5] = (uint)puStack_38;
                puVar32[6] = uStack_34;
                puVar32[7] = uStack_30;
                puVar37 = puVar37 + 8;
                puVar32 = puVar16;
              } while (puVar16 < (uint *)(uVar38 + uVar24));
            }
            goto LAB_017f7ff8;
          }
          puVar32 = (uint *)param_2[1];
          param_2[3] = uVar38 + uVar24;
          puVar15 = puStack_38;
        }
        *puVar32 = (uint)local_64;
        *(short *)(puVar32 + 1) = (short)uVar24;
        if ((char *)0xffff < (char *)((int)local_5c + -3)) {
          param_2[10] = (int)((int)puVar32 - *param_2) >> 3;
          puVar15 = (uint *)&SUB_00000002;
          param_2[9] = 2;
        }
        *(short *)((int)puVar32 + 6) = (short)(char *)((int)local_5c + -3);
        puVar37 = (uint *)((int)puVar10 + (int)local_5c);
        param_2[1] = (uint)(puVar32 + 2);
        if (*(int *)(param_1 + 0xdc) != 0) {
          uVar24 = *(uint *)(param_1 + 0x1c);
          puVar10 = (uint *)(uVar24 + iVar35);
          if (puVar10 <= puVar41) {
            pcVar20 = (char *)((int)puVar41 + (1 - (int)puVar10));
            if (pcVar20 < (char *)0x9) {
              uVar38 = uVar24 + (int)pcVar20;
            }
            else {
              uVar38 = uVar24 + 8;
            }
            iVar29 = *(int *)(param_1 + 0x28);
            puVar15 = *(uint **)(param_1 + 0x5c);
            iVar26 = *(int *)(param_1 + 0x24);
            if (uVar24 < uVar38) {
              uVar36 = *(uint *)(param_1 + 0x50);
              uVar42 = *(uint *)(param_1 + 0x54);
              if (4 < uVar14) {
                do {
                  if (uVar19 == 5) {
                    uVar40 = *puVar10;
                    uVar30 = puVar10[1];
                    uVar33 = 0xbb000000;
LAB_017f8770:
                    uVar30 = uVar33 * uVar30 + uVar40 * -0x30e44324 +
                             (int)((ulonglong)uVar33 * (ulonglong)uVar40 >> 0x20) ^ uVar42;
                    uVar33 = ((uint)((ulonglong)uVar33 * (ulonglong)uVar40) ^ uVar36) >>
                             (0x38U - iVar26 & 0xff) | uVar30 << (iVar26 - 0x18U & 0xff) |
                             uVar30 >> (0x18U - iVar26 & 0xff);
                  }
                  else {
                    if (5 < uVar19) {
                      uVar40 = *puVar10;
                      uVar30 = puVar10[1];
                      uVar33 = 0xbf9b0000;
                      goto LAB_017f8770;
                    }
                    uVar33 = (*puVar10 * -0x61c8864f ^ uVar36) >> (0x18U - iVar26 & 0xff);
                  }
                  iVar34 = (uVar33 >> 8) << (uVar23 & 0xff);
                  HintPreloadData(iVar29 + iVar34);
                  HintPreloadData(puVar15 + iVar34);
                  HintPreloadData(puVar15 + iVar34 + 0x10);
                  if (uVar14 != 5) {
                    HintPreloadData(iVar29 + iVar34 + 0x20);
                  }
                  uVar30 = uVar24 & 7;
                  uVar24 = uVar24 + 1;
                  *(uint *)(param_1 + uVar30 * 4 + 0x2c) = uVar33;
                  if (uVar38 <= uVar24) goto LAB_017f7bb4;
                  puVar10 = (uint *)(uVar24 + iVar35);
                } while( true );
              }
              if (uVar19 == 5) {
                while( true ) {
                  uVar40 = uVar24 & 7;
                  puVar32 = (uint *)(uVar24 + iVar35);
                  uVar24 = uVar24 + 1;
                  lVar3 = (ulonglong)*puVar32 * 0xbb000000;
                  uVar33 = puVar10[1] * -0x45000000 + *puVar32 * -0x30e44324 +
                           (int)((ulonglong)lVar3 >> 0x20) ^ uVar42;
                  uVar30 = ((uint)lVar3 ^ uVar36) >> (0x38U - iVar26 & 0xff) |
                           uVar33 << (iVar26 - 0x18U & 0xff) | uVar33 >> (0x18U - iVar26 & 0xff);
                  uVar33 = uVar30 >> 8;
                  HintPreloadData(puVar15 + uVar33 * 0x10);
                  HintPreloadData(iVar29 + uVar33 * 0x10);
                  *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar30;
                  if (uVar38 <= uVar24) break;
                  puVar10 = (uint *)(uVar24 + iVar35);
                }
              }
              else if (uVar19 < 6) {
                do {
                  piVar25 = (int *)(uVar24 + iVar35);
                  uVar30 = uVar24 & 7;
                  uVar24 = uVar24 + 1;
                  uVar33 = (*piVar25 * -0x61c8864f ^ uVar36) >> (0x18U - iVar26 & 0xff);
                  uVar42 = uVar33 >> 8;
                  HintPreloadData(puVar15 + uVar42 * 0x10);
                  HintPreloadData(iVar29 + uVar42 * 0x10);
                  *(uint *)(param_1 + uVar30 * 4 + 0x2c) = uVar33;
                } while (uVar24 < uVar38);
              }
              else {
                while( true ) {
                  uVar40 = uVar24 & 7;
                  puVar32 = (uint *)(uVar24 + iVar35);
                  uVar24 = uVar24 + 1;
                  lVar3 = (ulonglong)*puVar32 * 0xbf9b0000;
                  uVar33 = puVar10[1] * -0x40650000 + *puVar32 * -0x30e44324 +
                           (int)((ulonglong)lVar3 >> 0x20) ^ uVar42;
                  uVar30 = ((uint)lVar3 ^ uVar36) >> (0x38U - iVar26 & 0xff) |
                           uVar33 << (iVar26 - 0x18U & 0xff) | uVar33 >> (0x18U - iVar26 & 0xff);
                  uVar33 = uVar30 >> 8;
                  HintPreloadData(puVar15 + uVar33 * 0x10);
                  HintPreloadData(iVar29 + uVar33 * 0x10);
                  *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar30;
                  if (uVar38 <= uVar24) break;
                  puVar10 = (uint *)(uVar24 + iVar35);
                }
              }
            }
          }
LAB_017f7bb4:
          *(undefined4 *)(param_1 + 0xdc) = 0;
        }
        if (puVar41 < puVar37) {
LAB_017f87f4:
          local_64 = puVar37;
          goto LAB_017f7c38;
        }
        while( true ) {
          iVar29 = local_78;
          pcVar20 = (char *)(((int)puVar37 - iVar35) - iVar29);
          if (pcVar20 < pcVar8) {
            puVar15 = (uint *)((int)puVar28 + (int)(pcVar20 + iVar7 + (-(int)pcVar8 - iVar7)));
          }
          else {
            puVar15 = (uint *)(pcVar20 + iVar35);
          }
          if ((pcVar8 + ((iVar29 + -1) - ((int)puVar37 - iVar35)) < (char *)0x3) ||
             (*puVar15 != *puVar37)) break;
          if (pcVar20 < pcVar8) {
            puVar10 = puVar28;
          }
          else {
            puVar10 = puVar13;
          }
          iVar26 = FUN_017ce288(puVar37 + 1,puVar15 + 1,puVar13,puVar10,puVar9);
          iVar34 = iVar26 + 4;
          puVar15 = (uint *)param_2[3];
          if (puVar27 < puVar37) {
            FUN_017bfa44(puVar15,puVar37,puVar37,puVar27);
          }
          else {
            local_3c = *puVar37;
            puStack_38 = (uint *)puVar37[1];
            uStack_34 = puVar37[2];
            uStack_30 = puVar37[3];
            *puVar15 = local_3c;
            puVar15[1] = (uint)puStack_38;
            puVar15[2] = uStack_34;
            puVar15[3] = uStack_30;
          }
          puVar22 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar22 + 1) = 0;
          *puVar22 = 1;
          uVar2 = (undefined2)(iVar26 + 1U);
          if (iVar26 + 1U < 0x10000) {
            *(undefined2 *)((int)puVar22 + 6) = uVar2;
            param_2[1] = (uint)(puVar22 + 2);
          }
          else {
            param_2[10] = (int)((int)puVar22 - *param_2) >> 3;
            param_2[9] = 2;
            *(undefined2 *)((int)puVar22 + 6) = uVar2;
            param_2[1] = (uint)(puVar22 + 2);
          }
          if (puVar41 < (uint *)((int)puVar37 + iVar34)) {
            puVar37 = (uint *)((int)puVar37 + iVar34);
            local_78 = local_54;
            puVar15 = param_2;
            local_54 = iVar29;
            goto LAB_017f87f4;
          }
          puVar37 = (uint *)((int)puVar37 + iVar34);
          local_78 = local_54;
          local_54 = iVar29;
        }
        param_4 = puVar37;
        local_78 = iVar29;
      }
    } while (puVar37 < puVar41);
    local_64 = param_4;
  }
LAB_017f7c38:
  *param_3 = local_54;
  param_3[1] = local_78;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar13 - (int)local_64,puVar15,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

