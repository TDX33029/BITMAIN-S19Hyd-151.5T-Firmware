// FUN_017c7868 @ 017c7868 size=2064 calls_out=0 calls_in=3
// strings: 

char * FUN_017c7868(int param_1,uint *param_2,uint *param_3,int *param_4)

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
  uint uVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  char *pcVar30;
  uint *puVar31;
  bool bVar32;
  uint *local_40;
  uint local_3c;
  uint *local_34;
  char *local_30;
  
  iVar11 = *(int *)(param_1 + 4);
  uVar19 = (int)param_2 - iVar11;
  iVar28 = *(int *)(param_1 + 0xc);
  uVar17 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar7 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar13 = *(uint *)(param_1 + 0x10);
  uVar27 = uVar17 - 1;
  iVar25 = *(int *)(param_1 + 100);
  uVar29 = uVar19 - uVar13;
  bVar32 = uVar29 <= uVar7;
  if (!bVar32) {
    uVar29 = uVar19 - uVar7;
  }
  if (bVar32) {
    uVar29 = uVar13;
  }
  iVar20 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar29 = uVar13;
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
    lVar2 = (ulonglong)*(uint *)(iVar11 + uVar13) * 0xbf9b0000;
    uVar23 = *(int *)(iVar11 + uVar13 + 4) * -0x40650000 + *(uint *)(iVar11 + uVar13) * -0x30e44324
             + (int)((ulonglong)lVar2 >> 0x20);
    iVar26 = *(int *)(param_1 + 0xdc);
    uVar23 = (uint)lVar2 >> (uVar7 & 0xff) | uVar23 << ((uint)local_34 & 0xff) |
             uVar23 >> (iVar3 + 0x20U & 0xff);
    *(undefined4 *)(iVar25 + (uVar27 & uVar13) * 4) = *(undefined4 *)(iVar20 + uVar23 * 4);
    *(uint *)(iVar20 + uVar23 * 4) = uVar13;
    if ((iVar26 == 0) && (uVar13 = uVar13 + 1, uVar13 < uVar19)) {
      do {
        lVar2 = (ulonglong)*(uint *)(iVar11 + uVar13) * 0xbf9b0000;
        uVar23 = *(int *)(iVar11 + uVar13 + 4) * -0x40650000 +
                 *(uint *)(iVar11 + uVar13) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar23 = (uint)lVar2 >> (uVar7 & 0xff) | uVar23 << ((uint)local_34 & 0xff) |
                 uVar23 >> (iVar3 + 0x20U & 0xff);
        *(undefined4 *)(iVar25 + (uVar27 & uVar13) * 4) = *(undefined4 *)(iVar20 + uVar23 * 4);
        *(uint *)(iVar20 + uVar23 * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar19 != uVar13);
    }
  }
  else {
    local_34 = (uint *)(0x20 - uVar7);
  }
  local_3c = iVar3 + 0x20;
  *(uint *)(param_1 + 0x1c) = uVar19;
  lVar2 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar13 = (uint)lVar2;
  uVar23 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar7 = *(uint *)(iVar20 + (uVar13 >> (uVar7 & 0xff) | uVar23 << ((uint)local_34 & 0xff) |
                             uVar23 >> (local_3c & 0xff)) * 4);
  if (uVar7 < uVar29) {
    bVar32 = true;
    local_30 = (char *)0x3;
  }
  else {
    puVar12 = param_2 + 1;
    puVar21 = (uint *)((int)param_3 + -3);
    pcVar30 = (char *)0x3;
    do {
      puVar14 = (uint *)(iVar11 + uVar7);
      if (*(int *)((int)puVar14 + (int)(pcVar30 + -3)) ==
          *(int *)((int)param_2 + (int)(pcVar30 + -3))) {
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
                  goto LAB_017c7afc;
                }
                local_34 = local_34 + 1;
                puVar14 = puVar14 + 1;
              } while (local_34 < puVar21);
            }
            if ((local_34 < (uint *)((int)param_3 + -1)) && ((short)*puVar14 == (short)*local_34))
            goto LAB_017c7fe0;
LAB_017c7fec:
            if (local_34 < param_3) goto LAB_017c7abc;
            goto LAB_017c7ad0;
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
LAB_017c7fe0:
              puVar14 = (uint *)((int)puVar14 + 2);
              local_34 = (uint *)((int)local_34 + 2);
              goto LAB_017c7fec;
            }
            if (param_3 <= param_2) goto joined_r0x017c7b2c;
LAB_017c7abc:
            if ((char)*puVar14 != (char)*local_34) goto LAB_017c7ad0;
          }
          else if ((param_3 <= param_2) || ((char)*puVar14 != (char)*param_2))
          goto joined_r0x017c7b2c;
          local_34 = (uint *)((int)local_34 + 1);
LAB_017c7ad0:
          local_30 = (char *)((int)local_34 - (int)param_2);
        }
LAB_017c7afc:
        if (pcVar30 < local_30) {
          *param_4 = (uVar19 + 3) - uVar7;
          pcVar30 = local_30;
          if (param_3 == (uint *)((int)param_2 + (int)local_30)) {
            bVar32 = true;
            break;
          }
        }
      }
joined_r0x017c7b2c:
      local_30 = pcVar30;
      if (uVar7 <= uVar17) {
        bVar32 = true;
        break;
      }
      local_40 = (uint *)((int)local_40 + -1);
      bVar32 = local_40 != (uint *)0x0;
      uVar7 = *(uint *)(iVar25 + (uVar7 & uVar27) * 4);
      pcVar30 = local_30;
    } while (uVar29 <= uVar7 && bVar32);
  }
  pcVar30 = (char *)*puVar18;
  iVar20 = puVar18[1];
  uVar17 = 1 << (puVar18[0x2f] & 0xff);
  uVar7 = puVar18[3];
  uVar29 = (int)pcVar30 - iVar20;
  iVar25 = puVar18[0x30];
  if (uVar17 < uVar29) {
    uVar27 = uVar29 - uVar17;
  }
  else {
    uVar27 = 0;
  }
  uVar13 = *(uint *)(puVar18[0x17] +
                    (uVar13 >> (0x40U - iVar25 & 0xff) | uVar23 << (iVar25 - 0x20U & 0xff) |
                    uVar23 >> (0x20U - iVar25 & 0xff)) * 4);
  if (uVar13 < uVar7) {
    bVar32 = false;
  }
  if (bVar32) {
    iVar25 = puVar18[0x19];
    puVar22 = param_2 + 1;
    puVar12 = (uint *)(iVar11 + iVar28);
    puVar14 = (uint *)((int)param_3 + -3);
    puVar21 = local_40;
    do {
      iVar11 = iVar20 + uVar13;
      if (*(uint *)(iVar20 + uVar13) == *param_2) {
        puVar31 = (uint *)(iVar11 + 4);
        puVar15 = (uint *)((int)puVar22 + ((int)pcVar30 - (int)puVar31));
        if (param_3 < puVar15) {
          puVar15 = param_3;
        }
        puVar24 = (uint *)((int)puVar15 + -3);
        if (puVar22 < puVar24) {
          if (*(uint *)(iVar11 + 4) == param_2[1]) {
            puVar10 = param_2 + 2;
            local_40 = (uint *)(iVar11 + 8);
            if (puVar10 < puVar24) {
              do {
                if (*local_40 != *puVar10) {
                  uVar23 = *local_40 ^ *puVar10;
                  bVar4 = (byte)uVar23;
                  bVar5 = (byte)(uVar23 >> 8);
                  bVar6 = (byte)(uVar23 >> 0x10);
                  bVar1 = (byte)(uVar23 >> 0x18);
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
                  goto joined_r0x017c7df4;
                }
                puVar10 = puVar10 + 1;
                local_40 = local_40 + 1;
              } while (puVar10 < puVar24);
            }
            goto LAB_017c7d90;
          }
          uVar23 = *(uint *)(iVar11 + 4) ^ param_2[1];
          bVar4 = (byte)uVar23;
          bVar5 = (byte)(uVar23 >> 8);
          bVar6 = (byte)(uVar23 >> 0x10);
          bVar1 = (byte)(uVar23 >> 0x18);
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
          local_40 = puVar31;
LAB_017c7d90:
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
joined_r0x017c7df4:
        if (pcVar30 == (char *)((int)puVar31 + (int)pcVar9)) {
          puVar15 = (uint *)((int)puVar22 + (int)pcVar9);
          if (puVar15 < puVar14) {
            if (*puVar12 == *(uint *)((int)puVar22 + (int)pcVar9)) {
              puVar31 = puVar15 + 1;
              local_40 = puVar12 + 1;
              if (puVar31 < puVar14) {
                do {
                  if (*local_40 != *puVar31) {
                    uVar23 = *local_40 ^ *puVar31;
                    bVar4 = (byte)uVar23;
                    bVar5 = (byte)(uVar23 >> 8);
                    bVar6 = (byte)(uVar23 >> 0x10);
                    bVar1 = (byte)(uVar23 >> 0x18);
                    pcVar16 = (char *)((int)puVar31 +
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
                    goto LAB_017c7ef0;
                  }
                  puVar31 = puVar31 + 1;
                  local_40 = local_40 + 1;
                } while (puVar31 < puVar14);
              }
              goto LAB_017c7ea8;
            }
            uVar23 = *puVar12 ^ *(uint *)((int)puVar22 + (int)pcVar9);
            bVar4 = (byte)uVar23;
            bVar5 = (byte)(uVar23 >> 8);
            bVar6 = (byte)(uVar23 >> 0x10);
            bVar1 = (byte)(uVar23 >> 0x18);
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
            puVar31 = puVar15;
            local_40 = puVar12;
LAB_017c7ea8:
            if (puVar31 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_40 == (short)*puVar31) {
                local_40 = (uint *)((int)local_40 + 2);
                puVar31 = (uint *)((int)puVar31 + 2);
              }
            }
            if ((puVar31 < param_3) && ((char)*local_40 == (char)*puVar31)) {
              puVar31 = (uint *)((int)puVar31 + 1);
            }
            pcVar16 = (char *)((int)puVar31 - (int)puVar15);
          }
LAB_017c7ef0:
          pcVar9 = pcVar9 + (int)pcVar16;
        }
        pcVar9 = pcVar9 + 4;
        if (local_30 < pcVar9) {
          *param_4 = ((3 - iVar28) + uVar19 + uVar29) - uVar13;
          local_30 = pcVar9;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar9)) {
            return pcVar9;
          }
        }
      }
      if (uVar13 <= uVar27) break;
      puVar21 = (uint *)((int)puVar21 + -1);
      uVar13 = *(uint *)(iVar25 + (uVar13 & uVar17 - 1) * 4);
    } while (uVar7 <= uVar13 && puVar21 != (uint *)0x0);
  }
  return local_30;
}

