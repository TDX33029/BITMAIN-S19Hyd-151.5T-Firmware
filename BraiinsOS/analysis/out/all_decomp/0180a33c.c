// FUN_0180a33c @ 0180a33c size=1756 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0180a33c(int param_1,uint *param_2,uint *param_3,int param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  char *pcVar29;
  bool bVar30;
  uint *local_6c;
  int local_5c;
  uint *local_50;
  uint *local_44;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  iVar18 = *(int *)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  iVar8 = *(int *)(param_1 + 100);
  lVar2 = (ulonglong)*param_2 * 0xbb000000;
  uVar9 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  iVar24 = *(int *)(param_1 + 0xc0);
  uVar21 = (uint)lVar2 >> (0x40U - iVar24 & 0xff) | uVar9 << (iVar24 - 0x20U & 0xff) |
           uVar9 >> (0x20U - iVar24 & 0xff);
  uVar25 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  uVar9 = (int)param_2 - iVar18;
  uVar19 = *(uint *)(param_1 + 0xc);
  if (uVar25 < uVar9) {
    uVar26 = uVar9 - uVar25;
  }
  else {
    uVar26 = 0;
  }
  uVar14 = *(uint *)(param_1 + 0x10);
  uVar11 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar24 = *(int *)(param_1 + 8);
  bVar30 = uVar11 < param_4 - uVar14;
  if (bVar30) {
    uVar11 = param_4 - uVar11;
  }
  if (!bVar30) {
    uVar11 = uVar14;
  }
  uVar10 = *(uint *)(*(int *)(param_1 + 0x5c) + uVar21 * 4);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar11 = uVar14;
  }
  uVar14 = *(uint *)(param_1 + 0xc4);
  local_44 = (uint *)(iVar8 + (uVar25 & uVar9) * 8);
  *(uint *)(*(int *)(param_1 + 0x5c) + uVar21 * 4) = uVar9;
  local_5c = uVar9 + 9;
  if (uVar10 < uVar11) {
    *(undefined4 *)(iVar8 + (uVar25 & uVar9) * 8) = 0;
    uVar19 = 0;
    local_44[1] = 0;
  }
  else {
    uVar20 = 0;
    local_34 = 1 << (uVar14 & 0xff);
    uVar21 = 0;
    pcVar6 = (char *)(uVar19 + iVar24);
    puVar12 = (uint *)(uVar19 + iVar18);
    local_50 = local_44 + 1;
    local_38 = 8;
    puVar13 = (uint *)((int)param_3 + -3);
    do {
      if (uVar20 < uVar21) {
        uVar14 = uVar20;
      }
      else {
        uVar14 = uVar21;
      }
      puVar22 = (uint *)((int)param_2 + uVar14);
      if ((param_5 == 0) || (uVar19 <= uVar14 + uVar10)) {
        iVar7 = iVar18 + uVar10;
        puVar15 = (uint *)(uVar14 + iVar7);
        if (puVar22 < puVar13) {
          if (*(uint *)(uVar14 + iVar7) == *(uint *)((int)param_2 + uVar14)) {
            puVar28 = puVar22 + 1;
            puVar15 = puVar15 + 1;
            if (puVar28 < puVar13) {
              do {
                if (*puVar15 != *puVar28) {
                  uVar27 = *puVar15 ^ *puVar28;
                  bVar3 = (byte)uVar27;
                  bVar4 = (byte)(uVar27 >> 8);
                  bVar5 = (byte)(uVar27 >> 0x10);
                  bVar1 = (byte)(uVar27 >> 0x18);
                  pcVar29 = (char *)((int)puVar28 +
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
                                    (int)puVar22));
                  goto LAB_0180a650;
                }
                puVar28 = puVar28 + 1;
                puVar15 = puVar15 + 1;
              } while (puVar28 < puVar13);
            }
            goto LAB_0180a684;
          }
          uVar27 = *(uint *)(uVar14 + iVar7) ^ *(uint *)((int)param_2 + uVar14);
          bVar3 = (byte)uVar27;
          bVar4 = (byte)(uVar27 >> 8);
          bVar5 = (byte)(uVar27 >> 0x10);
          bVar1 = (byte)(uVar27 >> 0x18);
          pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar28 = puVar22;
LAB_0180a684:
          if (puVar28 < (uint *)((int)param_3 + -1)) {
            if ((short)*puVar15 == (short)*puVar28) {
              puVar15 = (uint *)((int)puVar15 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar28 < param_3) && ((char)*puVar15 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar29 = (char *)((int)puVar28 - (int)puVar22);
        }
LAB_0180a650:
        uVar14 = uVar14 + (int)pcVar29;
      }
      else {
        iVar7 = iVar24 + uVar10;
        puVar28 = (uint *)(uVar14 + iVar7);
        puVar15 = (uint *)((int)param_2 + ((int)pcVar6 - iVar7));
        if (param_3 < puVar15) {
          puVar15 = param_3;
        }
        puVar16 = (uint *)((int)puVar15 + -3);
        if (puVar22 < puVar16) {
          if (*(uint *)(uVar14 + iVar7) == *(uint *)((int)param_2 + uVar14)) {
            puVar17 = puVar22 + 1;
            local_6c = puVar28 + 1;
            if (puVar17 < puVar16) {
              do {
                if (*local_6c != *puVar17) {
                  uVar27 = *local_6c ^ *puVar17;
                  bVar3 = (byte)uVar27;
                  bVar4 = (byte)(uVar27 >> 8);
                  bVar5 = (byte)(uVar27 >> 0x10);
                  bVar1 = (byte)(uVar27 >> 0x18);
                  pcVar29 = (char *)((int)puVar17 +
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
                                    (int)puVar22));
                  goto joined_r0x0180a794;
                }
                puVar17 = puVar17 + 1;
                local_6c = local_6c + 1;
              } while (puVar17 < puVar16);
            }
            goto LAB_0180a720;
          }
          uVar27 = *(uint *)(uVar14 + iVar7) ^ *(uint *)((int)param_2 + uVar14);
          bVar3 = (byte)uVar27;
          bVar4 = (byte)(uVar27 >> 8);
          bVar5 = (byte)(uVar27 >> 0x10);
          bVar1 = (byte)(uVar27 >> 0x18);
          pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar17 = puVar22;
          local_6c = puVar28;
LAB_0180a720:
          if (puVar17 < (uint *)((int)puVar15 + -1)) {
            if ((short)*local_6c == (short)*puVar17) {
              local_6c = (uint *)((int)local_6c + 2);
              puVar17 = (uint *)((int)puVar17 + 2);
            }
          }
          if ((puVar17 < puVar15) && ((char)*local_6c == (char)*puVar17)) {
            puVar17 = (uint *)((int)puVar17 + 1);
          }
          pcVar29 = (char *)((int)puVar17 - (int)puVar22);
        }
joined_r0x0180a794:
        if (pcVar6 == (char *)((int)puVar28 + (int)pcVar29)) {
          puVar15 = (uint *)((int)puVar22 + (int)pcVar29);
          if (puVar15 < puVar13) {
            if (*puVar12 == *(uint *)((int)puVar22 + (int)pcVar29)) {
              puVar28 = puVar15 + 1;
              puVar22 = puVar12 + 1;
              if (puVar28 < puVar13) {
                do {
                  if (*puVar22 != *puVar28) {
                    uVar27 = *puVar22 ^ *puVar28;
                    bVar3 = (byte)uVar27;
                    bVar4 = (byte)(uVar27 >> 8);
                    bVar5 = (byte)(uVar27 >> 0x10);
                    bVar1 = (byte)(uVar27 >> 0x18);
                    pcVar23 = (char *)((int)puVar28 +
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
                                                                  )) >> 3) - (int)puVar15));
                    goto LAB_0180a974;
                  }
                  puVar28 = puVar28 + 1;
                  puVar22 = puVar22 + 1;
                } while (puVar28 < puVar13);
              }
              goto LAB_0180a920;
            }
            uVar27 = *(uint *)((int)puVar22 + (int)pcVar29) ^ *puVar12;
            bVar3 = (byte)uVar27;
            bVar4 = (byte)(uVar27 >> 8);
            bVar5 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
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
            puVar22 = puVar12;
            puVar28 = puVar15;
LAB_0180a920:
            if (puVar28 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar22 == (short)*puVar28) {
                puVar22 = (uint *)((int)puVar22 + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < param_3) && ((char)*puVar22 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar23 = (char *)((int)puVar28 - (int)puVar15);
          }
LAB_0180a974:
          pcVar29 = pcVar29 + (int)pcVar23;
        }
        uVar14 = uVar14 + (int)pcVar29;
        if (uVar19 <= uVar14 + uVar10) {
          iVar7 = iVar18 + uVar10;
        }
      }
      if ((local_38 < uVar14) && (local_38 = uVar14, local_5c - uVar10 < uVar14)) {
        local_5c = uVar14 + uVar10;
      }
      if (param_3 == (uint *)((int)param_2 + uVar14)) break;
      puVar22 = (uint *)(iVar8 + (uVar10 & uVar25) * 8);
      if (*(byte *)(uVar14 + iVar7) < *(byte *)((int)param_2 + uVar14)) {
        *local_44 = uVar10;
        if (uVar10 <= uVar26) {
          local_44 = &local_30;
          break;
        }
        uVar10 = puVar22[1];
        local_44 = puVar22 + 1;
        uVar20 = uVar14;
      }
      else {
        *local_50 = uVar10;
        if (uVar10 <= uVar26) {
          local_50 = &local_30;
          break;
        }
        uVar10 = *(uint *)(iVar8 + (uVar10 & uVar25) * 8);
        uVar21 = uVar14;
        local_50 = puVar22;
      }
      local_34 = local_34 + -1;
    } while (uVar11 <= uVar10 && local_34 != 0);
    uVar19 = 0;
    *local_50 = 0;
    *local_44 = 0;
    if ((0x180 < local_38) && (uVar19 = local_38 + -0x180, 0xbf < uVar19)) {
      uVar19 = 0xc0;
    }
  }
  uVar21 = local_5c + (-8 - uVar9);
  if (uVar21 < uVar19) {
    uVar21 = uVar19;
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar21,uVar9,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

