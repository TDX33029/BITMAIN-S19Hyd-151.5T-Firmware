// FUN_017c8078 @ 017c8078 size=2060 calls_out=0 calls_in=3
// strings: 

char * FUN_017c8078(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  int iVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  char *pcVar31;
  bool bVar32;
  uint *local_40;
  uint local_3c;
  uint *local_34;
  char *local_30;
  
  iVar11 = *(int *)(param_1 + 4);
  uVar19 = (int)param_2 - iVar11;
  iVar29 = *(int *)(param_1 + 0xc);
  uVar17 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar7 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar13 = *(uint *)(param_1 + 0x10);
  uVar25 = uVar17 - 1;
  iVar23 = *(int *)(param_1 + 100);
  uVar30 = uVar19 - uVar13;
  bVar32 = uVar30 <= uVar7;
  if (!bVar32) {
    uVar30 = uVar19 - uVar7;
  }
  if (bVar32) {
    uVar30 = uVar13;
  }
  iVar20 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar30 = uVar13;
  }
  iVar3 = -*(int *)(param_1 + 0xc0);
  uVar7 = iVar3 + 0x40;
  if (uVar17 < uVar19) {
    uVar17 = uVar19 - uVar17;
  }
  else {
    uVar17 = 0;
  }
  uVar13 = *(uint *)(param_1 + 0x1c);
  local_40 = (uint *)(1 << (*(uint *)(param_1 + 0xc4) & 0xff));
  puVar18 = *(undefined4 **)(param_1 + 0xb4);
  if (uVar13 < uVar19) {
    local_34 = (uint *)(0x20 - uVar7);
    lVar2 = (ulonglong)*(uint *)(iVar11 + uVar13) * 0xbb000000;
    uVar27 = *(int *)(iVar11 + uVar13 + 4) * -0x45000000 + *(uint *)(iVar11 + uVar13) * -0x30e44324
             + (int)((ulonglong)lVar2 >> 0x20);
    uVar27 = (uint)lVar2 >> (uVar7 & 0xff) | uVar27 << ((uint)local_34 & 0xff) |
             uVar27 >> (iVar3 + 0x20U & 0xff);
    iVar28 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar23 + (uVar25 & uVar13) * 4) = *(undefined4 *)(iVar20 + uVar27 * 4);
    *(uint *)(iVar20 + uVar27 * 4) = uVar13;
    if ((iVar28 == 0) && (uVar13 = uVar13 + 1, uVar13 < uVar19)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar11 + uVar13) * 0xbb000000;
        uVar27 = *(int *)(iVar11 + uVar13 + 4) * -0x45000000 +
                 *(uint *)(iVar11 + uVar13) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar27 = (uint)lVar2 >> (uVar7 & 0xff) | uVar27 << ((uint)local_34 & 0xff) |
                 uVar27 >> (iVar3 + 0x20U & 0xff);
        *(undefined4 *)(iVar23 + (uVar25 & uVar13) * 4) = *(undefined4 *)(iVar20 + uVar27 * 4);
        *(uint *)(iVar20 + uVar27 * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar19 != uVar13);
    }
  }
  else {
    local_34 = (uint *)(0x20 - uVar7);
  }
  local_3c = iVar3 + 0x20;
  *(uint *)(param_1 + 0x1c) = uVar19;
  lVar2 = (ulonglong)*param_2 * 0xbb000000;
  uVar13 = (uint)lVar2;
  uVar27 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = *(uint *)(iVar20 + (uVar13 >> (uVar7 & 0xff) | uVar27 << ((uint)local_34 & 0xff) |
                             uVar27 >> (local_3c & 0xff)) * 4);
  if (uVar7 < uVar30) {
    bVar32 = true;
    local_30 = (char *)0x3;
  }
  else {
    puVar12 = param_2 + 1;
    puVar21 = (uint *)((int)param_3 + -3);
    pcVar31 = (char *)0x3;
    do {
      puVar14 = (uint *)(iVar11 + uVar7);
      if (*(int *)((int)puVar14 + (int)(pcVar31 + -3)) ==
          *(int *)((int)param_2 + (int)(pcVar31 + -3))) {
        if (param_2 < puVar21) {
          if (*puVar14 == *param_2) {
            puVar14 = puVar14 + 1;
            local_34 = puVar12;
            if (puVar12 < puVar21) {
              do {
                if (*puVar14 != *local_34) {
                  uVar8 = *puVar14 ^ *local_34;
                  bVar4 = (byte)uVar8;
                  bVar5 = (byte)(uVar8 >> 8);
                  bVar6 = (byte)(uVar8 >> 0x10);
                  bVar1 = (byte)(uVar8 >> 0x18);
                  local_30 = (char *)((int)local_34 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                        bVar1 >> 7)) >> 3) -
                                     (int)param_2));
                  goto LAB_017c8304;
                }
                local_34 = local_34 + 1;
                puVar14 = puVar14 + 1;
              } while (local_34 < puVar21);
            }
            if ((local_34 < (uint *)((int)param_3 + -1)) && ((short)*puVar14 == (short)*local_34))
            goto LAB_017c87e8;
LAB_017c87f4:
            if (local_34 < param_3) goto LAB_017c82c4;
            goto LAB_017c82d8;
          }
          uVar8 = *puVar14 ^ *param_2;
          bVar4 = (byte)uVar8;
          bVar5 = (byte)(uVar8 >> 8);
          bVar6 = (byte)(uVar8 >> 0x10);
          bVar1 = (byte)(uVar8 >> 0x18);
          local_30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          local_34 = param_2;
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if ((short)*param_2 == *(short *)(iVar11 + uVar7)) {
LAB_017c87e8:
              puVar14 = (uint *)((int)puVar14 + 2);
              local_34 = (uint *)((int)local_34 + 2);
              goto LAB_017c87f4;
            }
            if (param_3 <= param_2) goto joined_r0x017c8334;
LAB_017c82c4:
            if ((char)*puVar14 != (char)*local_34) goto LAB_017c82d8;
          }
          else if ((param_3 <= param_2) || ((char)*puVar14 != (char)*param_2))
          goto joined_r0x017c8334;
          local_34 = (uint *)((int)local_34 + 1);
LAB_017c82d8:
          local_30 = (char *)((int)local_34 - (int)param_2);
        }
LAB_017c8304:
        if (pcVar31 < local_30) {
          *param_4 = (uVar19 + 3) - uVar7;
          pcVar31 = local_30;
          if (param_3 == (uint *)((int)param_2 + (int)local_30)) {
            bVar32 = true;
            break;
          }
        }
      }
joined_r0x017c8334:
      local_30 = pcVar31;
      if (uVar7 <= uVar17) {
        bVar32 = true;
        break;
      }
      local_40 = (uint *)((int)local_40 + -1);
      bVar32 = local_40 != (uint *)0x0;
      uVar7 = *(uint *)(iVar23 + (uVar7 & uVar25) * 4);
      pcVar31 = local_30;
    } while (uVar30 <= uVar7 && bVar32);
  }
  pcVar31 = (char *)*puVar18;
  iVar20 = puVar18[1];
  uVar17 = 1 << (puVar18[0x2f] & 0xff);
  uVar7 = puVar18[3];
  uVar30 = (int)pcVar31 - iVar20;
  iVar23 = puVar18[0x30];
  if (uVar17 < uVar30) {
    uVar25 = uVar30 - uVar17;
  }
  else {
    uVar25 = 0;
  }
  uVar13 = *(uint *)(puVar18[0x17] +
                    (uVar13 >> (0x40U - iVar23 & 0xff) | uVar27 << (iVar23 - 0x20U & 0xff) |
                    uVar27 >> (0x20U - iVar23 & 0xff)) * 4);
  if (uVar13 < uVar7) {
    bVar32 = false;
  }
  if (bVar32) {
    iVar23 = puVar18[0x19];
    puVar22 = param_2 + 1;
    puVar12 = (uint *)(iVar11 + iVar29);
    puVar14 = (uint *)((int)param_3 + -3);
    puVar21 = local_40;
    do {
      iVar11 = iVar20 + uVar13;
      if (*(uint *)(iVar20 + uVar13) == *param_2) {
        puVar24 = (uint *)(iVar11 + 4);
        puVar15 = (uint *)((int)puVar22 + ((int)pcVar31 - (int)puVar24));
        if (param_3 < puVar15) {
          puVar15 = param_3;
        }
        puVar26 = (uint *)((int)puVar15 + -3);
        if (puVar22 < puVar26) {
          if (*(uint *)(iVar11 + 4) == param_2[1]) {
            puVar10 = param_2 + 2;
            local_40 = (uint *)(iVar11 + 8);
            if (puVar10 < puVar26) {
              do {
                if (*local_40 != *puVar10) {
                  uVar27 = *local_40 ^ *puVar10;
                  bVar4 = (byte)uVar27;
                  bVar5 = (byte)(uVar27 >> 8);
                  bVar6 = (byte)(uVar27 >> 0x10);
                  bVar1 = (byte)(uVar27 >> 0x18);
                  pcVar9 = (char *)((int)puVar10 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                                      bVar1 >> 7)) >> 3) -
                                   (int)puVar22));
                  goto joined_r0x017c85fc;
                }
                puVar10 = puVar10 + 1;
                local_40 = local_40 + 1;
              } while (puVar10 < puVar26);
            }
            goto LAB_017c8598;
          }
          uVar27 = *(uint *)(iVar11 + 4) ^ param_2[1];
          bVar4 = (byte)uVar27;
          bVar5 = (byte)(uVar27 >> 8);
          bVar6 = (byte)(uVar27 >> 0x10);
          bVar1 = (byte)(uVar27 >> 0x18);
          pcVar9 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
        else {
          puVar10 = puVar22;
          local_40 = puVar24;
LAB_017c8598:
          if (puVar10 < (uint *)((int)puVar15 + -1)) {
            if ((short)*local_40 == (short)*puVar10) {
              local_40 = (uint *)((int)local_40 + 2);
              puVar10 = (uint *)((int)puVar10 + 2);
            }
          }
          if ((puVar10 < puVar15) && ((char)*local_40 == (char)*puVar10)) {
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          pcVar9 = (char *)((int)puVar10 - (int)puVar22);
        }
joined_r0x017c85fc:
        if (pcVar31 == (char *)((int)puVar24 + (int)pcVar9)) {
          puVar15 = (uint *)((int)puVar22 + (int)pcVar9);
          if (puVar15 < puVar14) {
            if (*puVar12 == *(uint *)((int)puVar22 + (int)pcVar9)) {
              puVar24 = puVar15 + 1;
              local_40 = puVar12 + 1;
              if (puVar24 < puVar14) {
                do {
                  if (*local_40 != *puVar24) {
                    uVar27 = *local_40 ^ *puVar24;
                    bVar4 = (byte)uVar27;
                    bVar5 = (byte)(uVar27 >> 8);
                    bVar6 = (byte)(uVar27 >> 0x10);
                    bVar1 = (byte)(uVar27 >> 0x18);
                    pcVar16 = (char *)((int)puVar24 +
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
                                                                  )) >> 3) - (int)puVar15));
                    goto LAB_017c86f8;
                  }
                  puVar24 = puVar24 + 1;
                  local_40 = local_40 + 1;
                } while (puVar24 < puVar14);
              }
              goto LAB_017c86b0;
            }
            uVar27 = *puVar12 ^ *(uint *)((int)puVar22 + (int)pcVar9);
            bVar4 = (byte)uVar27;
            bVar5 = (byte)(uVar27 >> 8);
            bVar6 = (byte)(uVar27 >> 0x10);
            bVar1 = (byte)(uVar27 >> 0x18);
            pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar24 = puVar15;
            local_40 = puVar12;
LAB_017c86b0:
            if (puVar24 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_40 == (short)*puVar24) {
                local_40 = (uint *)((int)local_40 + 2);
                puVar24 = (uint *)((int)puVar24 + 2);
              }
            }
            if ((puVar24 < param_3) && ((char)*local_40 == (char)*puVar24)) {
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            pcVar16 = (char *)((int)puVar24 - (int)puVar15);
          }
LAB_017c86f8:
          pcVar9 = pcVar9 + (int)pcVar16;
        }
        pcVar9 = pcVar9 + 4;
        if (local_30 < pcVar9) {
          *param_4 = ((3 - iVar29) + uVar19 + uVar30) - uVar13;
          local_30 = pcVar9;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar9)) {
            return pcVar9;
          }
        }
      }
      if (uVar13 <= uVar25) break;
      puVar21 = (uint *)((int)puVar21 + -1);
      uVar13 = *(uint *)(iVar23 + (uVar13 & uVar17 - 1) * 4);
    } while (uVar7 <= uVar13 && puVar21 != (uint *)0x0);
  }
  return local_30;
}

