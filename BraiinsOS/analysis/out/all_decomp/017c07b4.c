// FUN_017c07b4 @ 017c07b4 size=1248 calls_out=0 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_017c07b4(int param_1,uint *param_2,uint *param_3,int *param_4,uint param_5,int param_6,
                 int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  char *pcVar29;
  uint local_54;
  uint local_38;
  uint *local_30;
  
  puVar12 = *(undefined4 **)(param_1 + 0xb4);
  iVar26 = puVar12[0x30];
  if (param_7 == 5) {
    uVar11 = *param_2;
    uVar22 = param_2[1];
    uVar19 = 0xbb000000;
  }
  else {
    if (param_7 != 6) {
      uVar11 = *param_2 * -0x61c8864f >> (0x20U - iVar26 & 0xff);
      goto LAB_017c082c;
    }
    uVar11 = *param_2;
    uVar22 = param_2[1];
    uVar19 = 0xbf9b0000;
  }
  uVar22 = uVar19 * uVar22 + uVar11 * -0x30e44324 +
           (int)((ulonglong)uVar19 * (ulonglong)uVar11 >> 0x20);
  uVar11 = (uint)((ulonglong)uVar19 * (ulonglong)uVar11) >> (0x40U - iVar26 & 0xff) |
           uVar22 << (iVar26 - 0x20U & 0xff) | uVar22 >> (0x20U - iVar26 & 0xff);
LAB_017c082c:
  uVar11 = *(uint *)(puVar12[0x17] + uVar11 * 4);
  iVar26 = puVar12[1];
  pcVar20 = (char *)*puVar12;
  uVar19 = puVar12[4];
  pcVar29 = pcVar20 + -iVar26;
  uVar22 = ~(-1 << (puVar12[0x2f] - 1 & 0xff));
  if (uVar22 < (int)pcVar29 - uVar19) {
    local_54 = (int)pcVar29 - uVar22;
  }
  else {
    local_54 = uVar19;
  }
  if (uVar19 < uVar11) {
    iVar27 = *(int *)(param_1 + 4);
    iVar13 = puVar12[0x19];
    uVar25 = 0;
    iVar14 = *(int *)(param_1 + 0x10);
    puVar7 = (uint *)(iVar27 + *(int *)(param_1 + 0xc));
    local_38 = param_5;
    puVar15 = (uint *)((int)param_3 + -3);
    uVar24 = 0;
    do {
      if (uVar24 < uVar25) {
        uVar16 = uVar24;
      }
      else {
        uVar16 = uVar25;
      }
      iVar6 = iVar26 + uVar11;
      puVar8 = (uint *)(uVar16 + iVar6);
      puVar28 = (uint *)((int)param_2 + uVar16);
      puVar17 = (uint *)((int)puVar28 + ((int)pcVar20 - (int)puVar8));
      if (param_3 < puVar17) {
        puVar17 = param_3;
      }
      puVar23 = (uint *)((int)puVar17 + -3);
      if (puVar28 < puVar23) {
        if (*(uint *)(uVar16 + iVar6) == *(uint *)((int)param_2 + uVar16)) {
          puVar21 = puVar28 + 1;
          local_30 = puVar8 + 1;
          if (puVar21 < puVar23) {
            do {
              if (*local_30 != *puVar21) {
                uVar9 = *local_30 ^ *puVar21;
                bVar2 = (byte)uVar9;
                bVar3 = (byte)(uVar9 >> 8);
                bVar4 = (byte)(uVar9 >> 0x10);
                bVar1 = (byte)(uVar9 >> 0x18);
                pcVar18 = (char *)((int)puVar21 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                    bVar2 >> 1 & 1) << 1 |
                                                                   bVar2 >> 2 & 1) << 1 |
                                                                  bVar2 >> 3 & 1) << 1 |
                                                                 bVar2 >> 4 & 1) << 1 |
                                                                bVar2 >> 5 & 1) << 1 |
                                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                           bVar3 >> 1 & 1) << 1 |
                                                                          bVar3 >> 2 & 1) << 1 |
                                                                         bVar3 >> 3 & 1) << 1 |
                                                                        bVar3 >> 4 & 1) << 1 |
                                                                       bVar3 >> 5 & 1) << 1 |
                                                                      bVar3 >> 6 & 1) << 1 |
                                                                     bVar3 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar28));
                goto joined_r0x017c0918;
              }
              puVar21 = puVar21 + 1;
              local_30 = local_30 + 1;
            } while (puVar21 < puVar23);
          }
          goto LAB_017c0a30;
        }
        uVar9 = *(uint *)(uVar16 + iVar6) ^ *(uint *)((int)param_2 + uVar16);
        bVar2 = (byte)uVar9;
        bVar3 = (byte)(uVar9 >> 8);
        bVar4 = (byte)(uVar9 >> 0x10);
        bVar1 = (byte)(uVar9 >> 0x18);
        pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar21 = puVar28;
        local_30 = puVar8;
LAB_017c0a30:
        if (puVar21 < (uint *)((int)puVar17 + -1)) {
          if ((short)*local_30 == (short)*puVar21) {
            local_30 = (uint *)((int)local_30 + 2);
            puVar21 = (uint *)((int)puVar21 + 2);
          }
        }
        if ((puVar21 < puVar17) && ((char)*local_30 == (char)*puVar21)) {
          puVar21 = (uint *)((int)puVar21 + 1);
        }
        pcVar18 = (char *)((int)puVar21 - (int)puVar28);
      }
joined_r0x017c0918:
      if (pcVar20 == (char *)((int)puVar8 + (int)pcVar18)) {
        puVar17 = (uint *)((int)puVar28 + (int)pcVar18);
        if (puVar17 < puVar15) {
          if (*puVar7 == *(uint *)((int)puVar28 + (int)pcVar18)) {
            puVar8 = puVar17 + 1;
            local_30 = puVar7 + 1;
            if (puVar8 < puVar15) {
              do {
                if (*local_30 != *puVar8) {
                  uVar9 = *local_30 ^ *puVar8;
                  bVar2 = (byte)uVar9;
                  bVar3 = (byte)(uVar9 >> 8);
                  bVar4 = (byte)(uVar9 >> 0x10);
                  bVar1 = (byte)(uVar9 >> 0x18);
                  pcVar10 = (char *)((int)puVar8 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                      bVar2 >> 1 & 1) << 1 |
                                                                     bVar2 >> 2 & 1) << 1 |
                                                                    bVar2 >> 3 & 1) << 1 |
                                                                   bVar2 >> 4 & 1) << 1 |
                                                                  bVar2 >> 5 & 1) << 1 |
                                                                 bVar2 >> 6 & 1) << 1 | bVar2 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                bVar3 >> 1 & 1) << 1
                                                                               | bVar3 >> 2 & 1) <<
                                                                               1 | bVar3 >> 3 & 1)
                                                                              << 1 | bVar3 >> 4 & 1)
                                                                             << 1 | bVar3 >> 5 & 1)
                                                                            << 1 | bVar3 >> 6 & 1)
                                                                           << 1 | bVar3 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar17));
                  goto LAB_017c0adc;
                }
                puVar8 = puVar8 + 1;
                local_30 = local_30 + 1;
              } while (puVar8 < puVar15);
            }
            goto LAB_017c0b74;
          }
          uVar9 = *puVar7 ^ *(uint *)((int)puVar28 + (int)pcVar18);
          bVar2 = (byte)uVar9;
          bVar3 = (byte)(uVar9 >> 8);
          bVar4 = (byte)(uVar9 >> 0x10);
          bVar1 = (byte)(uVar9 >> 0x18);
          pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar8 = puVar17;
          local_30 = puVar7;
LAB_017c0b74:
          if (puVar8 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_30 == (short)*puVar8) {
              local_30 = (uint *)((int)local_30 + 2);
              puVar8 = (uint *)((int)puVar8 + 2);
            }
          }
          if ((puVar8 < param_3) && ((char)*local_30 == (char)*puVar8)) {
            puVar8 = (uint *)((int)puVar8 + 1);
          }
          pcVar10 = (char *)((int)puVar8 - (int)puVar17);
        }
LAB_017c0adc:
        pcVar18 = pcVar18 + (int)pcVar10;
      }
      uVar16 = uVar16 + (int)pcVar18;
      if (pcVar29 <= (char *)(uVar16 + uVar11)) {
        iVar6 = iVar27 + uVar11 + (iVar14 - (int)pcVar29);
      }
      if (local_38 < uVar16) {
        iVar5 = (-iVar14 - iVar27) - uVar11;
        if (LZCOUNT(*param_4 + 1) - LZCOUNT((char *)((int)param_2 + (int)(pcVar29 + iVar5 + 1))) <
            (int)((uVar16 - local_38) * 4)) {
          *param_4 = (int)((int)param_2 + (int)(pcVar29 + iVar5 + 3));
          local_38 = uVar16;
        }
        if (param_3 == (uint *)((int)param_2 + uVar16)) {
          return local_38;
        }
      }
      if (*(byte *)(uVar16 + iVar6) < *(byte *)((int)param_2 + uVar16)) {
        if (uVar11 <= local_54) {
          return local_38;
        }
        uVar11 = *(uint *)(iVar13 + (uVar11 & uVar22) * 8 + 4);
        uVar25 = uVar16;
      }
      else {
        if (uVar11 <= local_54) {
          return local_38;
        }
        uVar11 = *(uint *)(iVar13 + (uVar11 & uVar22) * 8);
        uVar24 = uVar16;
      }
      param_6 = param_6 + -1;
    } while (uVar19 < uVar11 && param_6 != 0);
  }
  else {
    local_38 = param_5;
  }
  return local_38;
}

