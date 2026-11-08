// FUN_017d2ca0 @ 017d2ca0 size=2532 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017d2ca0(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  int iVar29;
  char *pcVar30;
  uint *puVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  int iVar39;
  bool bVar40;
  uint local_150;
  uint *local_148;
  uint uStack_130;
  uint local_12c [64];
  int local_2c;
  
  uVar32 = *(uint *)(param_1 + 4);
  iVar34 = *(int *)(param_1 + 0x5c);
  iVar26 = *(int *)(param_1 + 0x24);
  local_2c = DAT_018ddaf8;
  iVar20 = *(int *)(param_1 + 0x28);
  uVar8 = (int)param_2 - uVar32;
  uVar21 = *(uint *)(param_1 + 0x10);
  uVar22 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar36 = *(uint *)(param_1 + 0xc);
  uVar38 = *(uint *)(param_1 + 0x50);
  bVar40 = uVar22 < uVar8 - uVar21;
  uVar12 = *(uint *)(param_1 + 8);
  uVar16 = uVar12;
  if (bVar40) {
    uVar16 = uVar8 - uVar22;
  }
  if (!bVar40) {
    uVar16 = uVar21;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar16 = uVar21;
  }
  uVar21 = 0x18 - iVar26;
  uVar22 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar17 = *(uint *)(param_1 + 0x1c);
    iVar29 = param_1 + 0x2c;
    iVar9 = iVar20;
    iVar39 = iVar34;
    uVar24 = uVar32;
    if (0x180 < uVar8 - uVar17) {
      uVar27 = uVar17 + 0x60;
      if (uVar17 < uVar27) {
        uVar24 = uVar38;
        while( true ) {
          uVar23 = (*(int *)(uVar17 + uVar32 + 8) * -0x61c8864f ^ uVar24) >> (uVar21 & 0xff);
          uVar35 = *(uint *)(iVar29 + (uVar17 & 7) * 4);
          uVar24 = uVar23 >> 8;
          HintPreloadData(iVar34 + uVar24 * 0x40);
          HintPreloadData(iVar20 + uVar24 * 0x10);
          uVar24 = uVar35 >> 8;
          *(uint *)(iVar29 + (uVar17 & 7) * 4) = uVar23;
          uVar23 = *(byte *)(iVar20 + uVar24 * 0x10) - 1 & 0xf;
          if (uVar23 == 0) {
            uVar23 = 0xf;
          }
          *(char *)(iVar20 + uVar24 * 0x10) = (char)uVar23;
          *(char *)(iVar20 + uVar24 * 0x10 + uVar23) = (char)uVar35;
          *(uint *)(iVar34 + (uVar24 * 0x10 + uVar23) * 4) = uVar17;
          uVar17 = uVar17 + 1;
          if (uVar27 == uVar17) break;
          uVar24 = *(uint *)(param_1 + 0x50);
        }
        iVar26 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0x28);
        iVar39 = *(int *)(param_1 + 0x5c);
        uVar24 = *(uint *)(param_1 + 4);
      }
      uVar17 = uVar8 + -0x20;
      if ((char *)(uVar17 + uVar32) <= (char *)((int)param_2 + 1)) {
        pcVar15 = (char *)((int)param_2 + 1) + (1 - (int)(uVar17 + uVar32));
        if (pcVar15 < (char *)0x9) {
          uVar27 = uVar17 + (int)pcVar15;
        }
        else {
          uVar27 = uVar8 + -0x18;
        }
        if (uVar17 < uVar27) {
          uVar35 = *(uint *)(param_1 + 0x50);
          uVar23 = uVar17;
          do {
            piVar3 = (int *)(uVar23 + uVar32);
            uVar19 = uVar23 & 7;
            uVar23 = uVar23 + 1;
            uVar2 = (*piVar3 * -0x61c8864f ^ uVar35) >> (0x18U - iVar26 & 0xff);
            uVar1 = uVar2 >> 8;
            HintPreloadData(iVar39 + uVar1 * 0x40);
            HintPreloadData(iVar9 + uVar1 * 0x10);
            *(uint *)(param_1 + uVar19 * 4 + 0x2c) = uVar2;
          } while (uVar23 < uVar27);
        }
      }
    }
    if (uVar17 < uVar8) {
      do {
        uVar23 = (*(int *)(uVar17 + uVar24 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar26 & 0xff);
        uVar35 = *(uint *)(iVar29 + (uVar17 & 7) * 4);
        uVar27 = uVar23 >> 8;
        HintPreloadData(iVar39 + uVar27 * 0x40);
        HintPreloadData(iVar9 + uVar27 * 0x10);
        *(uint *)(iVar29 + (uVar17 & 7) * 4) = uVar23;
        uVar27 = uVar35 >> 8;
        uVar23 = *(byte *)(iVar9 + uVar27 * 0x10) - 1 & 0xf;
        if (uVar23 == 0) {
          uVar23 = 0xf;
        }
        *(char *)(iVar9 + uVar27 * 0x10) = (char)uVar23;
        *(char *)(iVar9 + uVar27 * 0x10 + uVar23) = (char)uVar35;
        *(uint *)(iVar39 + (uVar23 + uVar27 * 0x10) * 4) = uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar8 != uVar17);
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    uVar38 = (param_2[2] * -0x61c8864f ^ uVar38) >> (uVar21 & 0xff);
    local_150 = *(uint *)(iVar29 + (uVar8 & 7) * 4);
    uVar21 = uVar38 >> 8;
    HintPreloadData(iVar34 + uVar21 * 0x40);
    HintPreloadData(iVar20 + uVar21 * 0x10);
    *(uint *)(iVar29 + (uVar8 & 7) * 4) = uVar38;
  }
  else {
    uVar24 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar8;
    local_150 = (uVar24 * -0x61c8864f ^ uVar38) >> (uVar21 & 0xff);
  }
  uVar21 = local_150 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  iVar34 = iVar34 + uVar21 * 0x40;
  uVar24 = (local_150 & 0xff) * 0x1010101;
  iVar26 = iVar20 + uVar21 * 0x10;
  uVar38 = *(uint *)(iVar26 + 0xc) ^ uVar24;
  uVar23 = *(uint *)(iVar26 + 8) ^ uVar24;
  uVar17 = *(uint *)(iVar26 + 4) ^ uVar24;
  uVar24 = *(uint *)(iVar20 + uVar21 * 0x10) ^ uVar24;
  uVar35 = (uint)*(byte *)(iVar20 + uVar21 * 0x10);
  uVar27 = uVar35 & 0xf;
  uVar38 = (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar38 = (~uVar38 << (-uVar27 & 0xf) | (uVar38 ^ 0xffff) >> uVar27) & 0xffff;
  if (uVar38 == 0) {
    iVar9 = 0;
  }
  else {
    if (3 < uVar22) {
      uVar22 = 4;
    }
    iVar39 = 1 << (uVar22 & 0xff);
    iVar9 = 0;
    do {
      if (uVar38 == 0) {
        iVar29 = 0;
      }
      else {
        bVar5 = (byte)uVar38;
        bVar4 = (byte)(uVar38 >> 8);
        iVar29 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10);
      }
      uVar22 = iVar29 + uVar27 & 0xf;
      if (uVar22 == 0) {
        bVar40 = true;
        iVar29 = iVar9;
      }
      else {
        uVar22 = *(uint *)(iVar34 + uVar22 * 4);
        if (uVar22 < uVar16) break;
        if (uVar22 < uVar36) {
          uVar24 = uVar12;
        }
        else {
          uVar24 = uVar32;
        }
        HintPreloadData(uVar24 + uVar22);
        iVar29 = iVar9 + 1;
        local_12c[iVar9] = uVar22;
        bVar40 = iVar39 != 1;
        iVar39 = iVar39 + -1;
      }
      uVar38 = uVar38 & uVar38 - 1;
      if (uVar38 == 0) {
        bVar40 = false;
      }
      iVar9 = iVar29;
    } while (bVar40);
  }
  uVar22 = uVar35 - 1 & 0xf;
  if (uVar22 == 0) {
    uVar22 = 0xf;
  }
  *(char *)(iVar20 + uVar21 * 0x10) = (char)uVar22;
  *(char *)(iVar26 + uVar22) = (char)local_150;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar34 + uVar22 * 4) = iVar20;
  if (iVar9 == 0) {
    pcVar15 = (char *)0x3;
  }
  else {
    puVar28 = &uStack_130;
    iVar20 = 0;
    puVar25 = (uint *)(uVar32 + uVar36);
    puVar18 = (uint *)((int)param_3 + -3);
    puVar13 = param_2 + 1;
    pcVar30 = (char *)0x3;
    do {
      puVar28 = puVar28 + 1;
      uVar22 = *puVar28;
      if (uVar22 < uVar36) {
        iVar26 = uVar12 + uVar22;
        if (*(uint *)(uVar12 + uVar22) != *param_2) goto LAB_017d30bc;
        puVar37 = (uint *)(iVar26 + 4);
        puVar14 = (uint *)((int)puVar13 + ((int)(uVar12 + uVar36) - (int)puVar37));
        if (param_3 < puVar14) {
          puVar14 = param_3;
        }
        puVar33 = (uint *)((int)puVar14 + -3);
        if (puVar13 < puVar33) {
          if (*(uint *)(iVar26 + 4) == param_2[1]) {
            puVar31 = param_2 + 2;
            puVar11 = (uint *)(iVar26 + 8);
            if (puVar31 < puVar33) {
              do {
                if (*puVar11 != *puVar31) {
                  uVar16 = *puVar11 ^ *puVar31;
                  bVar5 = (byte)uVar16;
                  bVar6 = (byte)(uVar16 >> 8);
                  bVar7 = (byte)(uVar16 >> 0x10);
                  bVar4 = (byte)(uVar16 >> 0x18);
                  pcVar15 = (char *)((int)puVar31 +
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
                                                    << 8 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                             bVar4 >> 1 & 1) << 1 |
                                                                            bVar4 >> 2 & 1) << 1 |
                                                                           bVar4 >> 3 & 1) << 1 |
                                                                          bVar4 >> 4 & 1) << 1 |
                                                                         bVar4 >> 5 & 1) << 1 |
                                                                        bVar4 >> 6 & 1) << 1 |
                                                                       bVar4 >> 7)) >> 3) -
                                    (int)puVar13));
                  goto joined_r0x017d326c;
                }
                puVar31 = puVar31 + 1;
                puVar11 = puVar11 + 1;
              } while (puVar31 < puVar33);
            }
            goto LAB_017d31f0;
          }
          uVar16 = param_2[1] ^ *(uint *)(iVar26 + 4);
          bVar5 = (byte)uVar16;
          bVar6 = (byte)(uVar16 >> 8);
          bVar7 = (byte)(uVar16 >> 0x10);
          bVar4 = (byte)(uVar16 >> 0x18);
          pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7)) >> 3);
        }
        else {
          puVar11 = puVar37;
          puVar31 = puVar13;
LAB_017d31f0:
          if (puVar31 < (uint *)((int)puVar14 + -1)) {
            if ((short)*puVar11 == (short)*puVar31) {
              puVar11 = (uint *)((int)puVar11 + 2);
              puVar31 = (uint *)((int)puVar31 + 2);
            }
          }
          if ((puVar31 < puVar14) && ((char)*puVar11 == (char)*puVar31)) {
            puVar31 = (uint *)((int)puVar31 + 1);
          }
          pcVar15 = (char *)((int)puVar31 - (int)puVar13);
        }
joined_r0x017d326c:
        if ((char *)(uVar12 + uVar36) == (char *)((int)puVar37 + (int)pcVar15)) {
          puVar14 = (uint *)((int)puVar13 + (int)pcVar15);
          if (puVar14 < puVar18) {
            if (*puVar25 == *(uint *)((int)puVar13 + (int)pcVar15)) {
              puVar37 = puVar14 + 1;
              local_148 = puVar25 + 1;
              if (puVar37 < puVar18) {
                do {
                  if (*local_148 != *puVar37) {
                    uVar16 = *local_148 ^ *puVar37;
                    bVar5 = (byte)uVar16;
                    bVar6 = (byte)(uVar16 >> 8);
                    bVar7 = (byte)(uVar16 >> 0x10);
                    bVar4 = (byte)(uVar16 >> 0x18);
                    pcVar10 = (char *)((int)puVar37 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  )) >> 3) - (int)puVar14));
                    goto LAB_017d3434;
                  }
                  puVar37 = puVar37 + 1;
                  local_148 = local_148 + 1;
                } while (puVar37 < puVar18);
              }
              goto LAB_017d33d8;
            }
            uVar16 = *(uint *)((int)puVar13 + (int)pcVar15) ^ *puVar25;
            bVar5 = (byte)uVar16;
            bVar6 = (byte)(uVar16 >> 8);
            bVar7 = (byte)(uVar16 >> 0x10);
            bVar4 = (byte)(uVar16 >> 0x18);
            pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7)) >> 3);
          }
          else {
            puVar37 = puVar14;
            local_148 = puVar25;
LAB_017d33d8:
            if (puVar37 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar37) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar37 = (uint *)((int)puVar37 + 2);
              }
            }
            if ((puVar37 < param_3) && ((char)*local_148 == (char)*puVar37)) {
              puVar37 = (uint *)((int)puVar37 + 1);
            }
            pcVar10 = (char *)((int)puVar37 - (int)puVar14);
          }
LAB_017d3434:
          pcVar15 = pcVar15 + (int)pcVar10;
        }
        pcVar15 = pcVar15 + 4;
LAB_017d314c:
        if (pcVar30 < pcVar15) {
          *param_4 = uVar8 + (3 - uVar22);
          pcVar30 = pcVar15;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar15)) break;
        }
      }
      else {
        puVar14 = (uint *)(uVar32 + uVar22);
        if (*(int *)((int)puVar14 + (int)(pcVar30 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar30 + -3))) {
          puVar37 = param_2;
          if (param_2 < puVar18) {
            if (*(uint *)(uVar32 + uVar22) == *param_2) {
              do {
                puVar37 = puVar37 + 1;
                puVar14 = puVar14 + 1;
                if (puVar18 <= puVar37) goto LAB_017d32f0;
              } while (*puVar14 == *puVar37);
              uVar16 = *puVar14 ^ *puVar37;
              bVar5 = (byte)uVar16;
              bVar6 = (byte)(uVar16 >> 8);
              bVar7 = (byte)(uVar16 >> 0x10);
              bVar4 = (byte)(uVar16 >> 0x18);
              pcVar15 = (char *)((int)puVar37 +
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
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar16 = *(uint *)(uVar32 + uVar22) ^ *param_2;
              bVar5 = (byte)uVar16;
              bVar6 = (byte)(uVar16 >> 8);
              bVar7 = (byte)(uVar16 >> 0x10);
              bVar4 = (byte)(uVar16 >> 0x18);
              pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7)) >> 3);
            }
          }
          else {
LAB_017d32f0:
            if (puVar37 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar14 == (short)*puVar37) {
                puVar14 = (uint *)((int)puVar14 + 2);
                puVar37 = (uint *)((int)puVar37 + 2);
              }
            }
            if ((puVar37 < param_3) && ((char)*puVar14 == (char)*puVar37)) {
              puVar37 = (uint *)((int)puVar37 + 1);
            }
            pcVar15 = (char *)((int)puVar37 - (int)param_2);
          }
          goto LAB_017d314c;
        }
      }
LAB_017d30bc:
      pcVar15 = pcVar30;
      iVar20 = iVar20 + 1;
      pcVar30 = pcVar15;
    } while (iVar20 != iVar9);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar15;
}

