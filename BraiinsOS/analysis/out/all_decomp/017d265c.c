// FUN_017d265c @ 017d265c size=1604 calls_out=0 calls_in=2
// strings: 

char * FUN_017d265c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  char *pcVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  bool bVar31;
  uint *local_4c;
  uint local_40;
  uint local_38;
  
  iVar26 = *(int *)(param_1 + 4);
  uVar18 = (int)param_2 - iVar26;
  iVar27 = -*(int *)(param_1 + 0xc0);
  uVar20 = iVar27 + 0x40;
  iVar8 = *(int *)(param_1 + 8);
  uVar16 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar21 = *(int *)(param_1 + 100);
  uVar11 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar13 = *(uint *)(param_1 + 0x10);
  iVar28 = *(int *)(param_1 + 0x5c);
  bVar31 = uVar11 < uVar18 - uVar13;
  uVar9 = *(uint *)(param_1 + 0xc);
  uVar10 = uVar16 - 1;
  if (bVar31) {
    uVar11 = uVar18 - uVar11;
  }
  if (!bVar31) {
    uVar11 = uVar13;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar11 = uVar13;
  }
  uVar13 = *(uint *)(param_1 + 0x1c);
  if (uVar16 < uVar18) {
    uVar16 = uVar18 - uVar16;
  }
  else {
    uVar16 = 0;
  }
  uVar17 = *(uint *)(param_1 + 0xc4);
  if (uVar13 < uVar18) {
    local_38 = 0x20 - uVar20;
    lVar2 = (ulonglong)*(uint *)(iVar26 + uVar13) * 0xbb000000;
    uVar23 = *(int *)(iVar26 + uVar13 + 4) * -0x45000000 + *(uint *)(iVar26 + uVar13) * -0x30e44324
             + (int)((ulonglong)lVar2 >> 0x20);
    uVar23 = (uint)lVar2 >> (uVar20 & 0xff) | uVar23 << (local_38 & 0xff) |
             uVar23 >> (iVar27 + 0x20U & 0xff);
    iVar24 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar21 + (uVar10 & uVar13) * 4) = *(undefined4 *)(iVar28 + uVar23 * 4);
    *(uint *)(iVar28 + uVar23 * 4) = uVar13;
    if ((iVar24 == 0) && (uVar13 = uVar13 + 1, uVar13 < uVar18)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar26 + uVar13) * 0xbb000000;
        uVar23 = *(int *)(iVar26 + uVar13 + 4) * -0x45000000 +
                 *(uint *)(iVar26 + uVar13) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar23 = (uint)lVar2 >> (uVar20 & 0xff) | uVar23 << (local_38 & 0xff) |
                 uVar23 >> (iVar27 + 0x20U & 0xff);
        *(undefined4 *)(iVar21 + (uVar10 & uVar13) * 4) = *(undefined4 *)(iVar28 + uVar23 * 4);
        *(uint *)(iVar28 + uVar23 * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar18 != uVar13);
    }
  }
  else {
    local_38 = 0x20 - uVar20;
  }
  local_40 = iVar27 + 0x20;
  uVar13 = *param_2;
  *(uint *)(param_1 + 0x1c) = uVar18;
  lVar2 = (ulonglong)uVar13 * 0xbb000000;
  uVar13 = param_2[1] * -0x45000000 + uVar13 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar13 = *(uint *)(iVar28 + ((uint)lVar2 >> (uVar20 & 0xff) | uVar13 << (local_38 & 0xff) |
                              uVar13 >> (local_40 & 0xff)) * 4);
  if (uVar13 < uVar11) {
    pcVar22 = (char *)0x3;
  }
  else {
    puVar25 = param_2 + 1;
    pcVar22 = (char *)0x3;
    iVar27 = 1 << (uVar17 & 0xff);
    puVar12 = (uint *)(iVar26 + uVar9);
    puVar29 = (uint *)((int)param_3 + -3);
    do {
      if (uVar13 < uVar9) {
        iVar28 = iVar8 + uVar13;
        if (*(uint *)(iVar8 + uVar13) != *param_2) goto LAB_017d2850;
        puVar30 = (uint *)(iVar28 + 4);
        puVar14 = (uint *)((int)puVar25 + ((int)(iVar8 + uVar9) - (int)puVar30));
        if (param_3 < puVar14) {
          puVar14 = param_3;
        }
        puVar19 = (uint *)((int)puVar14 + -3);
        if (puVar25 < puVar19) {
          if (*(uint *)(iVar28 + 4) == param_2[1]) {
            puVar7 = param_2 + 2;
            local_4c = (uint *)(iVar28 + 8);
            if (puVar7 < puVar19) {
              do {
                if (*local_4c != *puVar7) {
                  uVar20 = *local_4c ^ *puVar7;
                  bVar3 = (byte)uVar20;
                  bVar4 = (byte)(uVar20 >> 8);
                  bVar5 = (byte)(uVar20 >> 0x10);
                  bVar1 = (byte)(uVar20 >> 0x18);
                  pcVar6 = (char *)((int)puVar7 +
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
                                   (int)puVar25));
                  goto joined_r0x017d29f0;
                }
                puVar7 = puVar7 + 1;
                local_4c = local_4c + 1;
              } while (puVar7 < puVar19);
            }
            goto LAB_017d2988;
          }
          uVar20 = *(uint *)(iVar28 + 4) ^ param_2[1];
          bVar3 = (byte)uVar20;
          bVar4 = (byte)(uVar20 >> 8);
          bVar5 = (byte)(uVar20 >> 0x10);
          bVar1 = (byte)(uVar20 >> 0x18);
          pcVar6 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
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
          puVar7 = puVar25;
          local_4c = puVar30;
LAB_017d2988:
          if (puVar7 < (uint *)((int)puVar14 + -1)) {
            if ((short)*local_4c == (short)*puVar7) {
              local_4c = (uint *)((int)local_4c + 2);
              puVar7 = (uint *)((int)puVar7 + 2);
            }
          }
          if ((puVar7 < puVar14) && ((char)*local_4c == (char)*puVar7)) {
            puVar7 = (uint *)((int)puVar7 + 1);
          }
          pcVar6 = (char *)((int)puVar7 - (int)puVar25);
        }
joined_r0x017d29f0:
        if ((char *)(iVar8 + uVar9) == (char *)((int)puVar30 + (int)pcVar6)) {
          puVar14 = (uint *)((int)puVar25 + (int)pcVar6);
          if (puVar14 < puVar29) {
            if (*puVar12 == *(uint *)((int)puVar25 + (int)pcVar6)) {
              puVar30 = puVar14 + 1;
              local_4c = puVar12 + 1;
              if (puVar30 < puVar29) {
                do {
                  if (*local_4c != *puVar30) {
                    uVar20 = *local_4c ^ *puVar30;
                    bVar3 = (byte)uVar20;
                    bVar4 = (byte)(uVar20 >> 8);
                    bVar5 = (byte)(uVar20 >> 0x10);
                    bVar1 = (byte)(uVar20 >> 0x18);
                    pcVar15 = (char *)((int)puVar30 +
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
                                                                  )) >> 3) - (int)puVar14));
                    goto LAB_017d2a74;
                  }
                  puVar30 = puVar30 + 1;
                  local_4c = local_4c + 1;
                } while (puVar30 < puVar29);
              }
              goto LAB_017d2a14;
            }
            uVar20 = *puVar12 ^ *(uint *)((int)puVar25 + (int)pcVar6);
            bVar3 = (byte)uVar20;
            bVar4 = (byte)(uVar20 >> 8);
            bVar5 = (byte)(uVar20 >> 0x10);
            bVar1 = (byte)(uVar20 >> 0x18);
            pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar30 = puVar14;
            local_4c = puVar12;
LAB_017d2a14:
            if (puVar30 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_4c == (short)*puVar30) {
                local_4c = (uint *)((int)local_4c + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar30 < param_3) && ((char)*local_4c == (char)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pcVar15 = (char *)((int)puVar30 - (int)puVar14);
          }
LAB_017d2a74:
          pcVar6 = pcVar6 + (int)pcVar15;
        }
        pcVar6 = pcVar6 + 4;
LAB_017d2908:
        if (pcVar22 < pcVar6) {
          *param_4 = (uVar18 + 3) - uVar13;
          pcVar22 = pcVar6;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar6)) {
            return pcVar6;
          }
        }
      }
      else {
        puVar14 = (uint *)(iVar26 + uVar13);
        if (*(int *)((int)puVar14 + (int)(pcVar22 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar22 + -3))) {
          if (param_2 < puVar29) {
            if (*(uint *)(iVar26 + uVar13) == *param_2) {
              puVar30 = param_2 + 1;
              puVar14 = puVar14 + 1;
              if (puVar29 <= puVar30) goto LAB_017d2a80;
              uVar17 = *puVar30;
              uVar20 = *puVar14;
              if (uVar20 == uVar17) {
                do {
                  puVar30 = puVar30 + 1;
                  puVar14 = puVar14 + 1;
                  if (puVar29 <= puVar30) goto LAB_017d2a80;
                  uVar17 = *puVar30;
                  uVar20 = *puVar14;
                } while (uVar20 == uVar17);
              }
              uVar20 = uVar20 ^ uVar17;
              bVar3 = (byte)uVar20;
              bVar4 = (byte)(uVar20 >> 8);
              bVar5 = (byte)(uVar20 >> 0x10);
              bVar1 = (byte)(uVar20 >> 0x18);
              pcVar6 = (char *)((int)puVar30 +
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
              uVar20 = *param_2 ^ *(uint *)(iVar26 + uVar13);
              bVar3 = (byte)uVar20;
              bVar4 = (byte)(uVar20 >> 8);
              bVar5 = (byte)(uVar20 >> 0x10);
              bVar1 = (byte)(uVar20 >> 0x18);
              pcVar6 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar30 = param_2;
LAB_017d2a80:
            if (puVar30 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar14 == (short)*puVar30) {
                puVar30 = (uint *)((int)puVar30 + 2);
                puVar14 = (uint *)((int)puVar14 + 2);
              }
            }
            if ((puVar30 < param_3) && ((char)*puVar14 == (char)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pcVar6 = (char *)((int)puVar30 - (int)param_2);
          }
          goto LAB_017d2908;
        }
      }
LAB_017d2850:
      if (uVar13 <= uVar16) {
        return pcVar22;
      }
      iVar27 = iVar27 + -1;
      uVar13 = *(uint *)(iVar21 + (uVar13 & uVar10) * 4);
    } while (uVar11 <= uVar13 && iVar27 != 0);
  }
  return pcVar22;
}

