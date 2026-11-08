// FUN_017db984 @ 017db984 size=3532 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_017db984(int param_1,uint *param_2,uint *param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  byte *pbVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint local_90;
  uint *local_6c;
  int local_5c;
  uint local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_44;
  uint *local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar32 = *(int *)(param_1 + 0x5c);
  local_2c = DAT_018ddaf8;
  iVar14 = *(int *)(param_1 + 0xc0);
  if (param_5 == 5) {
    uVar10 = *param_2;
    uVar5 = 0xbb000000;
    uVar29 = param_2[1];
  }
  else {
    if (param_5 != 6) {
      uVar5 = *param_2 * -0x61c8864f >> (0x20U - iVar14 & 0xff);
      goto LAB_017dba28;
    }
    uVar10 = *param_2;
    uVar5 = 0xbf9b0000;
    uVar29 = param_2[1];
  }
  uVar29 = uVar5 * uVar29 + uVar10 * -0x30e44324 +
           (int)((ulonglong)uVar5 * (ulonglong)uVar10 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar5 * (ulonglong)uVar10) >> (0x40U - iVar14 & 0xff) |
          uVar29 << (iVar14 - 0x20U & 0xff) | uVar29 >> (0x20U - iVar14 & 0xff);
LAB_017dba28:
  uVar29 = *(uint *)(param_1 + 0x10);
  iVar14 = *(int *)(param_1 + 4);
  uVar10 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar30 = (int)param_2 - iVar14;
  uVar15 = *(uint *)(iVar32 + uVar5 * 4);
  if (uVar10 < uVar30 - uVar29) {
    uVar10 = uVar30 - uVar10;
  }
  else {
    uVar10 = uVar29;
  }
  iVar25 = *(int *)(param_1 + 100);
  uVar11 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar29 = uVar10;
  }
  if (uVar11 < uVar30) {
    local_90 = uVar30 - uVar11;
    local_54 = local_90;
    if (local_90 < uVar29) {
      local_54 = uVar29;
    }
  }
  else {
    local_90 = 0;
    local_54 = uVar29;
  }
  iVar27 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  if (local_54 < uVar15) {
    iVar35 = iVar27;
    uVar10 = 0;
    do {
      uVar23 = uVar15;
      iVar31 = (uVar23 & uVar11) * 8;
      puVar12 = (uint *)(iVar25 + iVar31);
      puVar8 = (uint *)(iVar25 + iVar31 + 4);
      puVar24 = (uint *)*puVar8;
      if (puVar24 != (uint *)&DAT_00000001) {
LAB_017dbb40:
        local_5c = *(int *)(param_1 + 8);
        uVar23 = uVar10;
        if (uVar10 != 0) goto LAB_017dbb54;
        goto LAB_017dbe04;
      }
      if (iVar35 == 1) {
        if (local_54 < uVar23) {
          *puVar8 = 0;
          *puVar12 = 0;
        }
        goto LAB_017dbb40;
      }
      *puVar8 = uVar10;
      iVar35 = iVar35 + -1;
      uVar15 = *puVar12;
      uVar10 = uVar23;
    } while (local_54 < uVar15);
    local_5c = *(int *)(param_1 + 8);
LAB_017dbb54:
    do {
      uVar15 = *(uint *)(param_1 + 0xc);
      local_44 = *(uint **)(param_1 + 0x10);
      uVar10 = *(uint *)(iVar25 + (uVar11 & uVar23) * 8 + 4);
      puVar8 = puVar24;
      if (uVar15 <= uVar23) {
        puVar8 = param_3;
      }
      uVar16 = (1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff)) - 1;
      puVar12 = (uint *)(uVar15 + local_5c);
      puVar24 = puVar12;
      iVar31 = local_5c;
      if (uVar15 <= uVar23) {
        puVar24 = puVar8;
        iVar31 = iVar14;
      }
      iVar31 = uVar23 + iVar31;
      uVar26 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
      uVar17 = uVar16 & uVar23;
      local_4c = (uint *)(iVar25 + uVar17 * 8);
      uVar17 = *(uint *)(iVar25 + uVar17 * 8);
      local_50 = local_4c + 1;
      if (uVar26 < uVar23 - (int)local_44) {
        local_44 = (uint *)(uVar23 - uVar26);
      }
      if (iVar35 != 0 && local_44 < uVar17) {
        puVar8 = (uint *)(uVar15 + iVar14);
        uVar26 = 0;
        puVar13 = (uint *)((int)puVar24 + -3);
        uVar28 = 0;
        local_34 = iVar35;
        do {
          if (uVar26 < uVar28) {
            uVar34 = uVar26;
          }
          else {
            uVar34 = uVar28;
          }
          puVar6 = (uint *)(iVar31 + uVar34);
          if (uVar34 + uVar17 < uVar15) {
            iVar9 = local_5c;
            if (uVar23 < uVar15) goto LAB_017dbd8c;
            iVar9 = uVar17 + local_5c;
            puVar22 = (uint *)(iVar9 + uVar34);
            puVar18 = (uint *)((int)puVar12 + (iVar31 - iVar9));
            if (puVar24 < puVar18) {
              puVar18 = puVar24;
            }
            puVar20 = (uint *)((int)puVar18 + -3);
            if (puVar6 < puVar20) {
              if (*(uint *)(iVar9 + uVar34) == *puVar6) {
                puVar21 = puVar6 + 1;
                local_6c = puVar22 + 1;
                if (puVar21 < puVar20) {
                  do {
                    if (*local_6c != *puVar21) {
                      uVar33 = *local_6c ^ *puVar21;
                      bVar2 = (byte)uVar33;
                      bVar3 = (byte)(uVar33 >> 8);
                      bVar4 = (byte)(uVar33 >> 0x10);
                      bVar1 = (byte)(uVar33 >> 0x18);
                      pbVar7 = (byte *)((int)puVar21 +
                                       (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                         bVar2 >> 1 & 1) << 1 |
                                                                        bVar2 >> 2 & 1) << 1 |
                                                                       bVar2 >> 3 & 1) << 1 |
                                                                      bVar2 >> 4 & 1) << 1 |
                                                                     bVar2 >> 5 & 1) << 1 |
                                                                    bVar2 >> 6 & 1) << 1 |
                                                                   bVar2 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                         bVar1 >> 1 & 1) << 1 |
                                                                        bVar1 >> 2 & 1) << 1 |
                                                                       bVar1 >> 3 & 1) << 1 |
                                                                      bVar1 >> 4 & 1) << 1 |
                                                                     bVar1 >> 5 & 1) << 1 |
                                                                    bVar1 >> 6 & 1) << 1 |
                                                                   bVar1 >> 7)) >> 3) - (int)puVar6)
                                       );
                      goto joined_r0x017dc198;
                    }
                    puVar21 = puVar21 + 1;
                    local_6c = local_6c + 1;
                  } while (puVar21 < puVar20);
                }
                goto LAB_017dc124;
              }
              uVar33 = *(uint *)(iVar9 + uVar34) ^ *puVar6;
              bVar2 = (byte)uVar33;
              bVar3 = (byte)(uVar33 >> 8);
              bVar4 = (byte)(uVar33 >> 0x10);
              bVar1 = (byte)(uVar33 >> 0x18);
              pbVar7 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            else {
              puVar21 = puVar6;
              local_6c = puVar22;
LAB_017dc124:
              if (puVar21 < (uint *)((int)puVar18 + -1)) {
                if ((short)*local_6c == (short)*puVar21) {
                  local_6c = (uint *)((int)local_6c + 2);
                  puVar21 = (uint *)((int)puVar21 + 2);
                }
              }
              if ((puVar21 < puVar18) && ((byte)*local_6c == (byte)*puVar21)) {
                puVar21 = (uint *)((int)puVar21 + 1);
              }
              pbVar7 = (byte *)((int)puVar21 - (int)puVar6);
            }
joined_r0x017dc198:
            if (puVar12 == (uint *)((int)puVar22 + (int)pbVar7)) {
              puVar18 = (uint *)((int)puVar6 + (int)pbVar7);
              if (puVar18 < puVar13) {
                if (*puVar8 == *(uint *)((int)puVar6 + (int)pbVar7)) {
                  puVar6 = puVar18 + 1;
                  puVar22 = puVar8 + 1;
                  if (puVar6 < puVar13) {
                    do {
                      if (*puVar22 != *puVar6) {
                        uVar33 = *puVar22 ^ *puVar6;
                        bVar2 = (byte)uVar33;
                        bVar3 = (byte)(uVar33 >> 8);
                        bVar4 = (byte)(uVar33 >> 0x10);
                        bVar1 = (byte)(uVar33 >> 0x18);
                        pbVar19 = (byte *)((int)puVar6 +
                                          (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                            bVar2 >> 1 & 1) << 1 |
                                                                           bVar2 >> 2 & 1) << 1 |
                                                                          bVar2 >> 3 & 1) << 1 |
                                                                         bVar2 >> 4 & 1) << 1 |
                                                                        bVar2 >> 5 & 1) << 1 |
                                                                       bVar2 >> 6 & 1) << 1 |
                                                                      bVar2 >> 7) << 0x18 |
                                                          (uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                       bVar4 >> 6 & 1) << 1 |
                                                                      bVar4 >> 7) << 8 |
                                                          (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                          (int)puVar18));
                        goto LAB_017dc1d0;
                      }
                      puVar6 = puVar6 + 1;
                      puVar22 = puVar22 + 1;
                    } while (puVar6 < puVar13);
                  }
                  goto LAB_017dc288;
                }
                uVar33 = *(uint *)((int)puVar6 + (int)pbVar7) ^ *puVar8;
                bVar2 = (byte)uVar33;
                bVar3 = (byte)(uVar33 >> 8);
                bVar4 = (byte)(uVar33 >> 0x10);
                bVar1 = (byte)(uVar33 >> 0x18);
                pbVar19 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
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
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
              else {
                puVar6 = puVar18;
                puVar22 = puVar8;
LAB_017dc288:
                if (puVar6 < (uint *)((int)puVar24 + -1)) {
                  if ((short)*puVar22 == (short)*puVar6) {
                    puVar6 = (uint *)((int)puVar6 + 2);
                    puVar22 = (uint *)((int)puVar22 + 2);
                  }
                }
                if ((puVar6 < puVar24) && ((byte)*puVar22 == (byte)*puVar6)) {
                  puVar6 = (uint *)((int)puVar6 + 1);
                }
                pbVar19 = (byte *)((int)puVar6 - (int)puVar18);
              }
LAB_017dc1d0:
              pbVar7 = pbVar7 + (int)pbVar19;
            }
            uVar34 = uVar34 + (int)pbVar7;
            if (uVar15 <= uVar34 + uVar17) {
              iVar9 = uVar17 + iVar14;
            }
          }
          else {
            iVar9 = iVar14;
LAB_017dbd8c:
            iVar9 = uVar17 + iVar9;
            puVar18 = (uint *)(iVar9 + uVar34);
            if (puVar6 < puVar13) {
              if (*(uint *)(iVar9 + uVar34) == *puVar6) {
                puVar22 = puVar6 + 1;
                puVar18 = puVar18 + 1;
                if (puVar22 < puVar13) {
                  do {
                    if (*puVar18 != *puVar22) {
                      uVar33 = *puVar18 ^ *puVar22;
                      bVar2 = (byte)uVar33;
                      bVar3 = (byte)(uVar33 >> 8);
                      bVar4 = (byte)(uVar33 >> 0x10);
                      bVar1 = (byte)(uVar33 >> 0x18);
                      pbVar7 = (byte *)((int)puVar22 +
                                       (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                         bVar2 >> 1 & 1) << 1 |
                                                                        bVar2 >> 2 & 1) << 1 |
                                                                       bVar2 >> 3 & 1) << 1 |
                                                                      bVar2 >> 4 & 1) << 1 |
                                                                     bVar2 >> 5 & 1) << 1 |
                                                                    bVar2 >> 6 & 1) << 1 |
                                                                   bVar2 >> 7) << 0x18 |
                                                       (uint)(byte)((((((((bVar3 & 1) << 1 |
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
                                                                    bVar4 >> 6 & 1) << 1 |
                                                                   bVar4 >> 7) << 8 |
                                                       (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                         bVar1 >> 1 & 1) << 1 |
                                                                        bVar1 >> 2 & 1) << 1 |
                                                                       bVar1 >> 3 & 1) << 1 |
                                                                      bVar1 >> 4 & 1) << 1 |
                                                                     bVar1 >> 5 & 1) << 1 |
                                                                    bVar1 >> 6 & 1) << 1 |
                                                                   bVar1 >> 7)) >> 3) - (int)puVar6)
                                       );
                      goto LAB_017dbdc0;
                    }
                    puVar22 = puVar22 + 1;
                    puVar18 = puVar18 + 1;
                  } while (puVar22 < puVar13);
                }
                goto LAB_017dc088;
              }
              uVar33 = *(uint *)(iVar9 + uVar34) ^ *puVar6;
              bVar2 = (byte)uVar33;
              bVar3 = (byte)(uVar33 >> 8);
              bVar4 = (byte)(uVar33 >> 0x10);
              bVar1 = (byte)(uVar33 >> 0x18);
              pbVar7 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            else {
              puVar22 = puVar6;
LAB_017dc088:
              if (puVar22 < (uint *)((int)puVar24 + -1)) {
                if ((short)*puVar18 == (short)*puVar22) {
                  puVar18 = (uint *)((int)puVar18 + 2);
                  puVar22 = (uint *)((int)puVar22 + 2);
                }
              }
              if ((puVar22 < puVar24) && ((byte)*puVar18 == (byte)*puVar22)) {
                puVar22 = (uint *)((int)puVar22 + 1);
              }
              pbVar7 = (byte *)((int)puVar22 - (int)puVar6);
            }
LAB_017dbdc0:
            uVar34 = uVar34 + (int)pbVar7;
          }
          if (puVar24 == (uint *)(iVar31 + uVar34)) break;
          uVar33 = uVar16 & uVar17;
          puVar6 = (uint *)(iVar25 + uVar33 * 8);
          if (*(byte *)(iVar9 + uVar34) < *(byte *)(iVar31 + uVar34)) {
            *local_4c = uVar17;
            if (uVar17 <= local_54) {
              local_4c = &local_30;
              goto LAB_017dbdd8;
            }
            uVar17 = puVar6[1];
            local_4c = puVar6 + 1;
            uVar26 = uVar34;
            uVar34 = uVar28;
          }
          else {
            *local_50 = uVar17;
            if (uVar17 <= local_54) {
              local_50 = &local_30;
              goto LAB_017dbdd8;
            }
            uVar17 = *(uint *)(iVar25 + uVar33 * 8);
            local_50 = puVar6;
          }
          local_34 = local_34 + -1;
          uVar28 = uVar34;
        } while (local_44 < uVar17 && local_34 != 0);
      }
LAB_017dbdd8:
      iVar35 = iVar35 + 1;
      *local_50 = 0;
      *local_4c = 0;
      uVar23 = uVar10;
    } while (uVar10 != 0);
LAB_017dbe04:
    uVar15 = *(uint *)(iVar32 + uVar5 * 4);
  }
  else {
    local_5c = *(int *)(param_1 + 8);
  }
  iVar35 = (uVar30 & uVar11) * 8;
  uVar10 = *(uint *)(param_1 + 0xc);
  local_44 = (uint *)(iVar25 + iVar35 + 4);
  local_40 = (uint *)(iVar25 + iVar35);
  local_54 = uVar30 + 9;
  *(uint *)(iVar32 + uVar5 * 4) = uVar30;
  if (uVar29 < uVar15) {
    uVar5 = 0;
    puVar24 = (uint *)(uVar10 + iVar14);
    puVar8 = (uint *)((int)param_3 + -3);
    local_34 = 0;
    uVar23 = 0;
    do {
      if (uVar5 < uVar23) {
        uVar16 = uVar5;
      }
      else {
        uVar16 = uVar23;
      }
      puVar12 = (uint *)((int)param_2 + uVar16);
      if (uVar16 + uVar15 < uVar10) {
        iVar32 = uVar15 + local_5c;
        puVar13 = (uint *)((int)param_2 + ((int)(uVar10 + local_5c) - iVar32));
        if (param_3 < puVar13) {
          puVar13 = param_3;
        }
        puVar6 = (uint *)(iVar32 + uVar16);
        puVar18 = (uint *)((int)puVar13 + -3);
        if (puVar12 < puVar18) {
          if (*(uint *)(iVar32 + uVar16) == *(uint *)((int)param_2 + uVar16)) {
            puVar22 = puVar12 + 1;
            local_50 = puVar6 + 1;
            if (puVar22 < puVar18) {
              do {
                if (*local_50 != *puVar22) {
                  uVar26 = *local_50 ^ *puVar22;
                  bVar2 = (byte)uVar26;
                  bVar3 = (byte)(uVar26 >> 8);
                  bVar4 = (byte)(uVar26 >> 0x10);
                  bVar1 = (byte)(uVar26 >> 0x18);
                  pbVar7 = (byte *)((int)puVar22 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                     bVar2 >> 1 & 1) << 1 |
                                                                    bVar2 >> 2 & 1) << 1 |
                                                                   bVar2 >> 3 & 1) << 1 |
                                                                  bVar2 >> 4 & 1) << 1 |
                                                                 bVar2 >> 5 & 1) << 1 |
                                                                bVar2 >> 6 & 1) << 1 | bVar2 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                               bVar3 >> 1 & 1) << 1
                                                                              | bVar3 >> 2 & 1) << 1
                                                                             | bVar3 >> 3 & 1) << 1
                                                                            | bVar3 >> 4 & 1) << 1 |
                                                                           bVar3 >> 5 & 1) << 1 |
                                                                          bVar3 >> 6 & 1) << 1 |
                                                                         bVar3 >> 7) << 0x10 |
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
                                   (int)puVar12));
                  goto joined_r0x017dc3c8;
                }
                puVar22 = puVar22 + 1;
                local_50 = local_50 + 1;
              } while (puVar22 < puVar18);
            }
            goto LAB_017dc354;
          }
          uVar26 = *(uint *)(iVar32 + uVar16) ^ *(uint *)((int)param_2 + uVar16);
          bVar2 = (byte)uVar26;
          bVar3 = (byte)(uVar26 >> 8);
          bVar4 = (byte)(uVar26 >> 0x10);
          bVar1 = (byte)(uVar26 >> 0x18);
          pbVar7 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                           | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                          << 1 | bVar2 >> 4 & 1) << 1 |
                                                        bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1
                                                      | bVar2 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
        else {
          puVar22 = puVar12;
          local_50 = puVar6;
LAB_017dc354:
          if (puVar22 < (uint *)((int)puVar13 + -1)) {
            if ((short)*local_50 == (short)*puVar22) {
              local_50 = (uint *)((int)local_50 + 2);
              puVar22 = (uint *)((int)puVar22 + 2);
            }
          }
          if ((puVar22 < puVar13) && ((byte)*local_50 == (byte)*puVar22)) {
            puVar22 = (uint *)((int)puVar22 + 1);
          }
          pbVar7 = (byte *)((int)puVar22 - (int)puVar12);
        }
joined_r0x017dc3c8:
        if ((byte *)(uVar10 + local_5c) == (byte *)((int)puVar6 + (int)pbVar7)) {
          puVar13 = (uint *)((int)puVar12 + (int)pbVar7);
          if (puVar13 < puVar8) {
            if (*puVar24 == *(uint *)((int)puVar12 + (int)pbVar7)) {
              puVar12 = puVar13 + 1;
              local_50 = puVar24 + 1;
              if (puVar12 < puVar8) {
                do {
                  if (*local_50 != *puVar12) {
                    uVar26 = *local_50 ^ *puVar12;
                    bVar2 = (byte)uVar26;
                    bVar3 = (byte)(uVar26 >> 8);
                    bVar4 = (byte)(uVar26 >> 0x10);
                    bVar1 = (byte)(uVar26 >> 0x18);
                    pbVar19 = (byte *)((int)puVar12 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar13));
                    goto LAB_017dc400;
                  }
                  puVar12 = puVar12 + 1;
                  local_50 = local_50 + 1;
                } while (puVar12 < puVar8);
              }
              goto LAB_017dc51c;
            }
            uVar26 = *puVar24 ^ *(uint *)((int)puVar12 + (int)pbVar7);
            bVar2 = (byte)uVar26;
            bVar3 = (byte)(uVar26 >> 8);
            bVar4 = (byte)(uVar26 >> 0x10);
            bVar1 = (byte)(uVar26 >> 0x18);
            pbVar19 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                 << 1 | bVar3 >> 2 & 1) << 1 |
                                                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1
                                                              ) << 1 | bVar3 >> 5 & 1) << 1 |
                                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar12 = puVar13;
            local_50 = puVar24;
LAB_017dc51c:
            if (puVar12 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_50 == (short)*puVar12) {
                local_50 = (uint *)((int)local_50 + 2);
                puVar12 = (uint *)((int)puVar12 + 2);
              }
            }
            if ((puVar12 < param_3) && ((byte)*local_50 == (byte)*puVar12)) {
              puVar12 = (uint *)((int)puVar12 + 1);
            }
            pbVar19 = (byte *)((int)puVar12 - (int)puVar13);
          }
LAB_017dc400:
          pbVar7 = pbVar7 + (int)pbVar19;
        }
        uVar16 = uVar16 + (int)pbVar7;
        if (uVar10 <= uVar16 + uVar15) {
          iVar32 = uVar15 + iVar14;
        }
      }
      else {
        iVar32 = uVar15 + iVar14;
        puVar6 = (uint *)(iVar32 + uVar16);
        puVar13 = puVar12;
        if (puVar12 < puVar8) {
          if (*(uint *)(iVar32 + uVar16) == *(uint *)((int)param_2 + uVar16)) {
            do {
              puVar13 = puVar13 + 1;
              puVar6 = puVar6 + 1;
              if (puVar8 <= puVar13) goto LAB_017dc2f4;
            } while (*puVar6 == *puVar13);
            uVar26 = *puVar6 ^ *puVar13;
            bVar2 = (byte)uVar26;
            bVar3 = (byte)(uVar26 >> 8);
            bVar4 = (byte)(uVar26 >> 0x10);
            bVar1 = (byte)(uVar26 >> 0x18);
            pbVar7 = (byte *)((int)puVar13 +
                             (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                 << 1 | bVar3 >> 2 & 1) << 1 |
                                                               bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1
                                                              ) << 1 | bVar3 >> 5 & 1) << 1 |
                                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                             - (int)puVar12));
          }
          else {
            uVar26 = *(uint *)(iVar32 + uVar16) ^ *(uint *)((int)param_2 + uVar16);
            bVar2 = (byte)uVar26;
            bVar3 = (byte)(uVar26 >> 8);
            bVar4 = (byte)(uVar26 >> 0x10);
            bVar1 = (byte)(uVar26 >> 0x18);
            pbVar7 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                              1 | bVar2 >> 2 & 1) << 1 |
                                                            bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                           << 1 | bVar2 >> 5 & 1) << 1 |
                                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017dc2f4:
          if (puVar13 < (uint *)((int)param_3 + -1)) {
            if ((short)*puVar6 == (short)*puVar13) {
              puVar13 = (uint *)((int)puVar13 + 2);
              puVar6 = (uint *)((int)puVar6 + 2);
            }
          }
          if ((puVar13 < param_3) && ((byte)*puVar6 == (byte)*puVar13)) {
            puVar13 = (uint *)((int)puVar13 + 1);
          }
          pbVar7 = (byte *)((int)puVar13 - (int)puVar12);
        }
        uVar16 = uVar16 + (int)pbVar7;
      }
      if (local_34 < uVar16) {
        if (local_54 - uVar15 < uVar16) {
          local_54 = uVar16 + uVar15;
        }
        if (LZCOUNT(*param_4) - LZCOUNT((uVar30 - uVar15) + 1) < (int)((uVar16 - local_34) * 4)) {
          *param_4 = (uVar30 - uVar15) + 3;
          local_34 = uVar16;
        }
        if (param_3 == (uint *)((int)param_2 + uVar16)) break;
      }
      puVar12 = (uint *)(iVar25 + (uVar11 & uVar15) * 8);
      if (*(byte *)(iVar32 + uVar16) < (byte)*(uint *)((int)param_2 + uVar16)) {
        *local_40 = uVar15;
        if (uVar15 <= local_90) {
          local_40 = &local_30;
          break;
        }
        uVar15 = puVar12[1];
        local_40 = puVar12 + 1;
        uVar5 = uVar16;
        uVar16 = uVar23;
      }
      else {
        *local_44 = uVar15;
        if (uVar15 <= local_90) {
          local_44 = &local_30;
          break;
        }
        uVar15 = *(uint *)(iVar25 + (uVar11 & uVar15) * 8);
        local_44 = puVar12;
      }
      iVar27 = iVar27 + -1;
      uVar23 = uVar16;
    } while (uVar29 < uVar15 && iVar27 != 0);
  }
  else {
    local_34 = 0;
  }
  *local_44 = 0;
  *local_40 = 0;
  *(uint *)(param_1 + 0x1c) = local_54 + -8;
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_34;
}

