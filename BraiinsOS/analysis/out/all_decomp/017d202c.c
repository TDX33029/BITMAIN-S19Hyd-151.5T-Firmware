// FUN_017d202c @ 017d202c size=1584 calls_out=0 calls_in=2
// strings: 

char * FUN_017d202c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  char *pcVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  uint *local_4c;
  uint local_38;
  uint local_34;
  
  iVar28 = *(int *)(param_1 + 4);
  uVar20 = (int)param_2 - iVar28;
  iVar29 = -*(int *)(param_1 + 0xc0);
  uVar22 = iVar29 + 0x40;
  iVar10 = *(int *)(param_1 + 8);
  uVar18 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar12 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar15 = *(uint *)(param_1 + 0x10);
  uVar24 = uVar18 - 1;
  iVar27 = *(int *)(param_1 + 100);
  iVar30 = *(int *)(param_1 + 0x5c);
  bVar31 = uVar12 < uVar20 - uVar15;
  uVar11 = *(uint *)(param_1 + 0xc);
  if (bVar31) {
    uVar12 = uVar20 - uVar12;
  }
  if (!bVar31) {
    uVar12 = uVar15;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar12 = uVar15;
  }
  uVar15 = *(uint *)(param_1 + 0x1c);
  if (uVar18 < uVar20) {
    uVar18 = uVar20 - uVar18;
  }
  else {
    uVar18 = 0;
  }
  uVar19 = *(uint *)(param_1 + 0xc4);
  if (uVar15 < uVar20) {
    local_34 = 0x20 - uVar22;
    lVar2 = (ulonglong)*(uint *)(iVar28 + uVar15) * 0xbf9b0000;
    uVar13 = *(int *)(iVar28 + uVar15 + 4) * -0x40650000 + *(uint *)(iVar28 + uVar15) * -0x30e44324
             + (int)((ulonglong)lVar2 >> 0x20);
    uVar13 = (uint)lVar2 >> (uVar22 & 0xff) | uVar13 << (local_34 & 0xff) |
             uVar13 >> (iVar29 + 0x20U & 0xff);
    iVar25 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar27 + (uVar24 & uVar15) * 4) = *(undefined4 *)(iVar30 + uVar13 * 4);
    *(uint *)(iVar30 + uVar13 * 4) = uVar15;
    if ((iVar25 == 0) && (uVar15 = uVar15 + 1, uVar15 < uVar20)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar28 + uVar15) * 0xbf9b0000;
        uVar13 = *(int *)(iVar28 + uVar15 + 4) * -0x40650000 +
                 *(uint *)(iVar28 + uVar15) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar13 = (uint)lVar2 >> (uVar22 & 0xff) | uVar13 << (local_34 & 0xff) |
                 uVar13 >> (iVar29 + 0x20U & 0xff);
        *(undefined4 *)(iVar27 + (uVar24 & uVar15) * 4) = *(undefined4 *)(iVar30 + uVar13 * 4);
        *(uint *)(iVar30 + uVar13 * 4) = uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar20 != uVar15);
    }
  }
  else {
    local_34 = 0x20 - uVar22;
  }
  local_38 = iVar29 + 0x20;
  *(uint *)(param_1 + 0x1c) = uVar20;
  lVar2 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar15 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar15 = *(uint *)(iVar30 + ((uint)lVar2 >> (uVar22 & 0xff) | uVar15 << (local_34 & 0xff) |
                              uVar15 >> (local_38 & 0xff)) * 4);
  if (uVar15 < uVar12) {
    pcVar26 = (char *)0x3;
  }
  else {
    pcVar26 = (char *)0x3;
    iVar29 = 1 << (uVar19 & 0xff);
    puVar14 = (uint *)(iVar28 + uVar11);
    puVar6 = (uint *)((int)param_3 + -3);
    puVar7 = param_2 + 1;
    do {
      if (uVar15 < uVar11) {
        iVar30 = iVar10 + uVar15;
        if (*(uint *)(iVar10 + uVar15) != *param_2) goto LAB_017d2218;
        puVar21 = (uint *)(iVar30 + 4);
        puVar16 = (uint *)((int)puVar7 + ((int)(iVar10 + uVar11) - (int)puVar21));
        if (param_3 < puVar16) {
          puVar16 = param_3;
        }
        puVar23 = (uint *)((int)puVar16 + -3);
        if (puVar7 < puVar23) {
          if (*(uint *)(iVar30 + 4) == param_2[1]) {
            puVar9 = param_2 + 2;
            local_4c = (uint *)(iVar30 + 8);
            if (puVar9 < puVar23) {
              do {
                if (*local_4c != *puVar9) {
                  uVar22 = *local_4c ^ *puVar9;
                  bVar3 = (byte)uVar22;
                  bVar4 = (byte)(uVar22 >> 8);
                  bVar5 = (byte)(uVar22 >> 0x10);
                  bVar1 = (byte)(uVar22 >> 0x18);
                  pcVar8 = (char *)((int)puVar9 +
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
                                   (int)puVar7));
                  goto joined_r0x017d23b8;
                }
                puVar9 = puVar9 + 1;
                local_4c = local_4c + 1;
              } while (puVar9 < puVar23);
            }
            goto LAB_017d2350;
          }
          uVar22 = *(uint *)(iVar30 + 4) ^ param_2[1];
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          pcVar8 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
        else {
          puVar9 = puVar7;
          local_4c = puVar21;
LAB_017d2350:
          if (puVar9 < (uint *)((int)puVar16 + -1)) {
            if ((short)*local_4c == (short)*puVar9) {
              local_4c = (uint *)((int)local_4c + 2);
              puVar9 = (uint *)((int)puVar9 + 2);
            }
          }
          if ((puVar9 < puVar16) && ((char)*local_4c == (char)*puVar9)) {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          pcVar8 = (char *)((int)puVar9 - (int)puVar7);
        }
joined_r0x017d23b8:
        if ((char *)(iVar10 + uVar11) == (char *)((int)puVar21 + (int)pcVar8)) {
          puVar16 = (uint *)((int)puVar7 + (int)pcVar8);
          if (puVar16 < puVar6) {
            if (*puVar14 == *(uint *)((int)puVar7 + (int)pcVar8)) {
              puVar21 = puVar16 + 1;
              local_4c = puVar14 + 1;
              if (puVar21 < puVar6) {
                do {
                  if (*local_4c != *puVar21) {
                    uVar22 = *local_4c ^ *puVar21;
                    bVar3 = (byte)uVar22;
                    bVar4 = (byte)(uVar22 >> 8);
                    bVar5 = (byte)(uVar22 >> 0x10);
                    bVar1 = (byte)(uVar22 >> 0x18);
                    pcVar17 = (char *)((int)puVar21 +
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
                                                                  )) >> 3) - (int)puVar16));
                    goto LAB_017d243c;
                  }
                  puVar21 = puVar21 + 1;
                  local_4c = local_4c + 1;
                } while (puVar21 < puVar6);
              }
              goto LAB_017d23dc;
            }
            uVar22 = *puVar14 ^ *(uint *)((int)puVar7 + (int)pcVar8);
            bVar3 = (byte)uVar22;
            bVar4 = (byte)(uVar22 >> 8);
            bVar5 = (byte)(uVar22 >> 0x10);
            bVar1 = (byte)(uVar22 >> 0x18);
            pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar21 = puVar16;
            local_4c = puVar14;
LAB_017d23dc:
            if (puVar21 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_4c == (short)*puVar21) {
                local_4c = (uint *)((int)local_4c + 2);
                puVar21 = (uint *)((int)puVar21 + 2);
              }
            }
            if ((puVar21 < param_3) && ((char)*local_4c == (char)*puVar21)) {
              puVar21 = (uint *)((int)puVar21 + 1);
            }
            pcVar17 = (char *)((int)puVar21 - (int)puVar16);
          }
LAB_017d243c:
          pcVar8 = pcVar8 + (int)pcVar17;
        }
        pcVar8 = pcVar8 + 4;
LAB_017d22d0:
        if (pcVar26 < pcVar8) {
          *param_4 = (uVar20 + 3) - uVar15;
          pcVar26 = pcVar8;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar8)) {
            return pcVar8;
          }
        }
      }
      else {
        puVar16 = (uint *)(iVar28 + uVar15);
        if (*(int *)((int)puVar16 + (int)(pcVar26 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar26 + -3))) {
          if (param_2 < puVar6) {
            if (*(uint *)(iVar28 + uVar15) == *param_2) {
              puVar21 = param_2 + 1;
              puVar16 = puVar16 + 1;
              if (puVar6 <= puVar21) goto LAB_017d2448;
              uVar19 = *puVar21;
              uVar22 = *puVar16;
              if (uVar22 == uVar19) {
                do {
                  puVar21 = puVar21 + 1;
                  puVar16 = puVar16 + 1;
                  if (puVar6 <= puVar21) goto LAB_017d2448;
                  uVar19 = *puVar21;
                  uVar22 = *puVar16;
                } while (uVar22 == uVar19);
              }
              uVar22 = uVar22 ^ uVar19;
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar8 = (char *)((int)puVar21 +
                               (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                               (int)param_2));
            }
            else {
              uVar22 = *param_2 ^ *(uint *)(iVar28 + uVar15);
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pcVar8 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
              ;
            }
          }
          else {
            puVar21 = param_2;
LAB_017d2448:
            if (puVar21 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar16 == (short)*puVar21) {
                puVar21 = (uint *)((int)puVar21 + 2);
                puVar16 = (uint *)((int)puVar16 + 2);
              }
            }
            if ((puVar21 < param_3) && ((char)*puVar16 == (char)*puVar21)) {
              puVar21 = (uint *)((int)puVar21 + 1);
            }
            pcVar8 = (char *)((int)puVar21 - (int)param_2);
          }
          goto LAB_017d22d0;
        }
      }
LAB_017d2218:
      if (uVar15 <= uVar18) {
        return pcVar26;
      }
      iVar29 = iVar29 + -1;
      uVar15 = *(uint *)(iVar27 + (uVar15 & uVar24) * 4);
    } while (uVar12 <= uVar15 && iVar29 != 0);
  }
  return pcVar26;
}

