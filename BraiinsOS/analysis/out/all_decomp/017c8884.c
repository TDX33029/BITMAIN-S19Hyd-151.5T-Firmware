// FUN_017c8884 @ 017c8884 size=1832 calls_out=0 calls_in=3
// strings: 

char * FUN_017c8884(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint unaff_r8;
  uint uVar22;
  uint unaff_r9;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  bool bVar29;
  uint *local_40;
  char *local_3c;
  
  uVar26 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar9 = *(int *)(param_1 + 4);
  uVar17 = *(uint *)(param_1 + 0x10);
  uVar19 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar5 = (int)param_2 - iVar9;
  iVar25 = *(int *)(param_1 + 0xc);
  bVar29 = uVar26 < uVar5 - uVar17;
  if (bVar29) {
    unaff_r9 = uVar5 - uVar26;
  }
  if (!bVar29) {
    unaff_r9 = uVar17;
  }
  uVar26 = uVar19 - 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r9 = uVar17;
  }
  if (uVar19 < uVar5) {
    unaff_r8 = uVar5 - uVar19;
  }
  uVar17 = *(uint *)(param_1 + 0x1c);
  if (uVar19 >= uVar5) {
    unaff_r8 = 0;
  }
  iVar24 = *(int *)(param_1 + 100);
  uVar19 = 0x20 - *(int *)(param_1 + 0xc0);
  local_40 = (uint *)(1 << (*(uint *)(param_1 + 0xc4) & 0xff));
  puVar12 = *(undefined4 **)(param_1 + 0xb4);
  iVar18 = *(int *)(param_1 + 0x5c);
  if (uVar17 < uVar5) {
    uVar21 = (uint)(*(int *)(iVar9 + uVar17) * -0x61c8864f) >> (uVar19 & 0xff);
    iVar13 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar24 + (uVar26 & uVar17) * 4) = *(undefined4 *)(iVar18 + uVar21 * 4);
    *(uint *)(iVar18 + uVar21 * 4) = uVar17;
    if ((iVar13 == 0) && (uVar17 = uVar17 + 1, uVar17 < uVar5)) {
      do {
        uVar21 = (uint)(*(int *)(iVar9 + uVar17) * -0x61c8864f) >> (uVar19 & 0xff);
        *(undefined4 *)(iVar24 + (uVar26 & uVar17) * 4) = *(undefined4 *)(iVar18 + uVar21 * 4);
        *(uint *)(iVar18 + uVar21 * 4) = uVar17;
        uVar17 = uVar17 + 1;
      } while (uVar5 != uVar17);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar5;
  uVar21 = *param_2;
  uVar17 = uVar21 * -0x61c8864f;
  uVar19 = *(uint *)(iVar18 + (uVar17 >> (uVar19 & 0xff)) * 4);
  if (unaff_r9 <= uVar19) {
    pcVar6 = (char *)0x3;
    do {
      puVar14 = (uint *)(iVar9 + uVar19);
      if (*(uint *)((int)puVar14 + (int)(pcVar6 + -3)) == uVar21) {
        puVar10 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*puVar14 == *param_2) {
            do {
              puVar10 = puVar10 + 1;
              puVar14 = puVar14 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar10) {
                if (((uint *)((int)param_3 + -1) <= puVar10) || ((short)*puVar14 != (short)*puVar10)
                   ) goto LAB_017c8f68;
                goto LAB_017c8f60;
              }
            } while (*puVar14 == *puVar10);
            uVar17 = *puVar14 ^ *puVar10;
            bVar2 = (byte)uVar17;
            bVar3 = (byte)(uVar17 >> 8);
            bVar4 = (byte)(uVar17 >> 0x10);
            bVar1 = (byte)(uVar17 >> 0x18);
            local_3c = (char *)((int)puVar10 +
                               (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                 << 1 | bVar2 >> 2 & 1) << 1 |
                                                               bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1
                                                              ) << 1 | bVar2 >> 5 & 1) << 1 |
                                                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8
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
            uVar17 = *param_2 ^ *puVar14;
            bVar2 = (byte)uVar17;
            bVar3 = (byte)(uVar17 >> 8);
            bVar4 = (byte)(uVar17 >> 0x10);
            bVar1 = (byte)(uVar17 >> 0x18);
            local_3c = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                       bVar3 >> 1 & 1) << 1 |
                                                                      bVar3 >> 2 & 1) << 1 |
                                                                     bVar3 >> 3 & 1) << 1 |
                                                                    bVar3 >> 4 & 1) << 1 |
                                                                   bVar3 >> 5 & 1) << 1 |
                                                                  bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
            ;
          }
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if ((short)*param_2 == *(short *)(iVar9 + uVar19)) {
LAB_017c8f60:
              puVar10 = (uint *)((int)puVar10 + 2);
              puVar14 = (uint *)((int)puVar14 + 2);
LAB_017c8f68:
              if (puVar10 < param_3) goto LAB_017c8a60;
            }
            else {
              if (param_3 <= param_2) goto joined_r0x017c8ac8;
LAB_017c8a60:
              if ((char)*puVar14 == (char)*puVar10) goto LAB_017c8cc0;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*puVar14 != (char)*param_2)) goto joined_r0x017c8ac8;
LAB_017c8cc0:
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          local_3c = (char *)((int)puVar10 - (int)param_2);
        }
        if (local_3c <= pcVar6) goto joined_r0x017c8ac8;
        *param_4 = (uVar5 + 3) - uVar19;
        pcVar6 = local_3c;
        if (param_3 != (uint *)((int)param_2 + (int)local_3c)) goto joined_r0x017c8ac8;
LAB_017c8ad4:
        bVar29 = true;
        uVar21 = *param_2;
        uVar17 = uVar21 * -0x61c8864f;
        goto LAB_017c8aec;
      }
joined_r0x017c8ac8:
      local_3c = pcVar6;
      if (uVar19 <= unaff_r8) goto LAB_017c8ad4;
      local_40 = (uint *)((int)local_40 + -1);
      bVar29 = local_40 != (uint *)0x0;
      uVar19 = *(uint *)(iVar24 + (uVar19 & uVar26) * 4);
      if (uVar19 < unaff_r9 || !bVar29) goto LAB_017c8f3c;
      uVar21 = *(uint *)((int)param_2 + (int)(local_3c + -3));
      pcVar6 = local_3c;
    } while( true );
  }
  bVar29 = true;
  local_3c = (char *)0x3;
LAB_017c8aec:
  pcVar6 = (char *)*puVar12;
  iVar18 = puVar12[1];
  uVar19 = puVar12[3];
  uVar26 = 1 << (puVar12[0x2f] & 0xff);
  uVar27 = (int)pcVar6 - iVar18;
  if (uVar26 < uVar27) {
    uVar22 = uVar27 - uVar26;
  }
  else {
    uVar22 = 0;
  }
  uVar17 = *(uint *)(puVar12[0x17] + (uVar17 >> (0x20 - puVar12[0x30] & 0xff)) * 4);
  if (uVar17 < uVar19) {
    bVar29 = false;
  }
  if (!bVar29) {
    return local_3c;
  }
  iVar24 = puVar12[0x19];
  puVar10 = (uint *)(iVar9 + iVar25);
  puVar11 = (uint *)((int)param_3 + -3);
  puVar23 = param_2 + 1;
  puVar14 = local_40;
  do {
    iVar9 = iVar18 + uVar17;
    if (*(uint *)(iVar18 + uVar17) == uVar21) {
      puVar28 = (uint *)(iVar9 + 4);
      puVar15 = (uint *)((int)puVar23 + ((int)pcVar6 - (int)puVar28));
      if (param_3 < puVar15) {
        puVar15 = param_3;
      }
      puVar20 = (uint *)((int)puVar15 + -3);
      if (puVar23 < puVar20) {
        if (*(uint *)(iVar9 + 4) == param_2[1]) {
          puVar8 = param_2 + 2;
          local_40 = (uint *)(iVar9 + 8);
          if (puVar8 < puVar20) {
            do {
              if (*local_40 != *puVar8) {
                uVar21 = *local_40 ^ *puVar8;
                bVar2 = (byte)uVar21;
                bVar3 = (byte)(uVar21 >> 8);
                bVar4 = (byte)(uVar21 >> 0x10);
                bVar1 = (byte)(uVar21 >> 0x18);
                pcVar7 = (char *)((int)puVar8 +
                                 (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                                 (int)puVar23));
                goto joined_r0x017c8d70;
              }
              puVar8 = puVar8 + 1;
              local_40 = local_40 + 1;
            } while (puVar8 < puVar20);
          }
          goto LAB_017c8d0c;
        }
        uVar21 = *(uint *)(iVar9 + 4) ^ param_2[1];
        bVar2 = (byte)uVar21;
        bVar3 = (byte)(uVar21 >> 8);
        bVar4 = (byte)(uVar21 >> 0x10);
        bVar1 = (byte)(uVar21 >> 0x18);
        pcVar7 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                         bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1
                                                       | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                                                     | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                         bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1
                                                       | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                                                     | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                         bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                       | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                     | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
      }
      else {
        puVar8 = puVar23;
        local_40 = puVar28;
LAB_017c8d0c:
        if (puVar8 < (uint *)((int)puVar15 + -1)) {
          if ((short)*local_40 == (short)*puVar8) {
            local_40 = (uint *)((int)local_40 + 2);
            puVar8 = (uint *)((int)puVar8 + 2);
          }
        }
        if ((puVar8 < puVar15) && ((char)*local_40 == (char)*puVar8)) {
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        pcVar7 = (char *)((int)puVar8 - (int)puVar23);
      }
joined_r0x017c8d70:
      if (pcVar6 == (char *)((int)puVar28 + (int)pcVar7)) {
        puVar15 = (uint *)((int)puVar23 + (int)pcVar7);
        if (puVar15 < puVar11) {
          if (*puVar10 == *(uint *)((int)puVar23 + (int)pcVar7)) {
            puVar28 = puVar15 + 1;
            local_40 = puVar10 + 1;
            if (puVar28 < puVar11) {
              do {
                if (*local_40 != *puVar28) {
                  uVar21 = *local_40 ^ *puVar28;
                  bVar2 = (byte)uVar21;
                  bVar3 = (byte)(uVar21 >> 8);
                  bVar4 = (byte)(uVar21 >> 0x10);
                  bVar1 = (byte)(uVar21 >> 0x18);
                  pcVar16 = (char *)((int)puVar28 +
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
                                    (int)puVar15));
                  goto LAB_017c8e68;
                }
                puVar28 = puVar28 + 1;
                local_40 = local_40 + 1;
              } while (puVar28 < puVar11);
            }
            goto LAB_017c8e24;
          }
          uVar21 = *puVar10 ^ *(uint *)((int)puVar23 + (int)pcVar7);
          bVar2 = (byte)uVar21;
          bVar3 = (byte)(uVar21 >> 8);
          bVar4 = (byte)(uVar21 >> 0x10);
          bVar1 = (byte)(uVar21 >> 0x18);
          pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar28 = puVar15;
          local_40 = puVar10;
LAB_017c8e24:
          if (puVar28 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_40 == (short)*puVar28) {
              local_40 = (uint *)((int)local_40 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar28 < param_3) && ((char)*local_40 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar16 = (char *)((int)puVar28 - (int)puVar15);
        }
LAB_017c8e68:
        pcVar7 = pcVar7 + (int)pcVar16;
      }
      pcVar7 = pcVar7 + 4;
      if (local_3c < pcVar7) {
        *param_4 = ((3 - iVar25) + uVar5 + uVar27) - uVar17;
        local_3c = pcVar7;
        if (param_3 == (uint *)((int)param_2 + (int)pcVar7)) {
          return pcVar7;
        }
      }
    }
    if (uVar17 <= uVar22) {
      return local_3c;
    }
    puVar14 = (uint *)((int)puVar14 + -1);
    uVar17 = *(uint *)(iVar24 + (uVar17 & uVar26 - 1) * 4);
    if (uVar17 < uVar19 || puVar14 == (uint *)0x0) {
      return local_3c;
    }
    uVar21 = *param_2;
  } while( true );
LAB_017c8f3c:
  uVar21 = *param_2;
  uVar17 = uVar21 * -0x61c8864f;
  goto LAB_017c8aec;
}

