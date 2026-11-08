// FUN_017c1894 @ 017c1894 size=2212 calls_out=2 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c1894(int param_1,uint *param_2,uint *param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  char *pcVar24;
  char *pcVar25;
  uint uVar26;
  uint *puVar27;
  char *pcVar28;
  undefined8 uVar29;
  uint *local_7c;
  int local_60;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint *local_44;
  uint *local_3c;
  int local_34;
  uint local_30;
  uint local_2c;
  
  pcVar24 = *(char **)(param_1 + 0x5c);
  iVar12 = *(int *)(param_1 + 0xc0);
  local_2c = DAT_018ddaf8;
  if (param_5 == 5) {
    uVar16 = *param_2;
    uVar5 = 0xbb000000;
    uVar26 = param_2[1];
LAB_017c1910:
    uVar26 = uVar5 * uVar26 + uVar16 * -0x30e44324 +
             (int)((ulonglong)uVar5 * (ulonglong)uVar16 >> 0x20);
    uVar5 = (uint)((ulonglong)uVar5 * (ulonglong)uVar16) >> (0x40U - iVar12 & 0xff) |
            uVar26 << (iVar12 - 0x20U & 0xff) | uVar26 >> (0x20U - iVar12 & 0xff);
  }
  else {
    if (param_5 == 6) {
      uVar16 = *param_2;
      uVar5 = 0xbf9b0000;
      uVar26 = param_2[1];
      goto LAB_017c1910;
    }
    uVar5 = *param_2 * -0x61c8864f >> (0x20U - iVar12 & 0xff);
  }
  puVar27 = *(uint **)(param_1 + 4);
  puVar8 = *(uint **)(param_1 + 0x10);
  uVar16 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar26 = (int)param_2 - (int)puVar27;
  puVar13 = *(uint **)(pcVar24 + uVar5 * 4);
  puVar6 = puVar8;
  if (uVar16 < uVar26 - (int)puVar8) {
    puVar6 = (uint *)(uVar26 - uVar16);
  }
  puVar23 = *(uint **)(param_1 + 100);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar6 = puVar8;
  }
  uVar16 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  if (uVar16 < uVar26) {
    local_7c = (uint *)(uVar26 - uVar16);
    local_54 = local_7c;
    if (local_7c < puVar6) {
      local_54 = puVar6;
    }
  }
  else {
    local_7c = (uint *)0x0;
    local_54 = puVar6;
  }
  local_60 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  if (local_54 < puVar13) {
    iVar12 = local_60;
    puVar8 = (uint *)0x0;
    do {
      puVar10 = puVar13;
      puVar13 = puVar23 + ((uint)puVar10 & uVar16) * 2 + 1;
      if (*puVar13 != 1) {
LAB_017c1a50:
        puVar10 = puVar8;
        if (puVar8 == (uint *)0x0) goto LAB_017c1cb4;
        break;
      }
      if (iVar12 == 1) {
        if (local_54 < puVar10) {
          *puVar13 = 0;
          puVar23[((uint)puVar10 & uVar16) * 2] = 0;
        }
        goto LAB_017c1a50;
      }
      *puVar13 = (uint)puVar8;
      iVar12 = iVar12 + -1;
      puVar13 = (uint *)puVar23[((uint)puVar10 & uVar16) * 2];
      puVar8 = puVar10;
    } while (local_54 < puVar13);
    iVar9 = *(int *)(param_1 + 8);
    puVar13 = puVar23;
    pcVar25 = pcVar24;
    do {
      local_44 = *(uint **)(param_1 + 0x10);
      puVar20 = (uint *)puVar23[(uVar16 & (uint)puVar10) * 2 + 1];
      uVar14 = (1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff)) - 1;
      puVar8 = *(uint **)(param_1 + 0xc);
      if (puVar10 < puVar8) {
        pcVar25 = (char *)(iVar9 + (int)puVar10);
        puVar13 = (uint *)(iVar9 + (int)puVar8);
        puVar21 = puVar8;
      }
      else {
        puVar21 = puVar27;
      }
      if (puVar8 <= puVar10) {
        pcVar25 = (char *)((int)puVar21 + (int)puVar10);
        puVar13 = param_3;
      }
      uVar22 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
      uVar15 = uVar14 & (uint)puVar10;
      if (uVar22 < (uint)((int)puVar10 - (int)local_44)) {
        local_44 = (uint *)((int)puVar10 - uVar22);
      }
      local_4c = puVar23 + uVar15 * 2;
      puVar8 = (uint *)puVar23[uVar15 * 2];
      local_50 = local_4c + 1;
      if (iVar12 != 0 && local_44 < puVar8) {
        uVar22 = 0;
        puVar10 = (uint *)((int)puVar13 + -3);
        uVar15 = 0;
        local_34 = iVar12;
        do {
          if (uVar15 < uVar22) {
            uVar19 = uVar15;
          }
          else {
            uVar19 = uVar22;
          }
          pcVar28 = (char *)((int)puVar27 + (int)puVar8);
          puVar17 = (uint *)(pcVar25 + uVar19);
          puVar21 = (uint *)(pcVar28 + uVar19);
          if (puVar17 < puVar10) {
            if (*(uint *)(pcVar28 + uVar19) == *(uint *)(pcVar25 + uVar19)) {
              puVar7 = puVar17 + 1;
              puVar21 = puVar21 + 1;
              if (puVar7 < puVar10) {
                do {
                  if (*puVar21 != *puVar7) {
                    uVar11 = *puVar21 ^ *puVar7;
                    bVar2 = (byte)uVar11;
                    bVar3 = (byte)(uVar11 >> 8);
                    bVar4 = (byte)(uVar11 >> 0x10);
                    bVar1 = (byte)(uVar11 >> 0x18);
                    pcVar18 = (char *)((int)puVar7 +
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
                                                                  )) >> 3) - (int)puVar17));
                    goto joined_r0x017c1b80;
                  }
                  puVar7 = puVar7 + 1;
                  puVar21 = puVar21 + 1;
                } while (puVar7 < puVar10);
              }
              goto LAB_017c1c20;
            }
            uVar11 = *(uint *)(pcVar28 + uVar19) ^ *(uint *)(pcVar25 + uVar19);
            bVar2 = (byte)uVar11;
            bVar3 = (byte)(uVar11 >> 8);
            bVar4 = (byte)(uVar11 >> 0x10);
            bVar1 = (byte)(uVar11 >> 0x18);
            pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar7 = puVar17;
LAB_017c1c20:
            if (puVar7 < (uint *)((int)puVar13 + -1)) {
              if ((short)*puVar21 == (short)*puVar7) {
                puVar7 = (uint *)((int)puVar7 + 2);
                puVar21 = (uint *)((int)puVar21 + 2);
              }
            }
            if ((puVar7 < puVar13) && ((char)*puVar21 == (char)*puVar7)) {
              puVar7 = (uint *)((int)puVar7 + 1);
            }
            pcVar18 = (char *)((int)puVar7 - (int)puVar17);
          }
joined_r0x017c1b80:
          uVar19 = uVar19 + (int)pcVar18;
          if (puVar13 == (uint *)(pcVar25 + uVar19)) break;
          uVar11 = uVar14 & (uint)puVar8;
          puVar21 = puVar23 + uVar11 * 2;
          if ((byte)pcVar28[uVar19] < (byte)pcVar25[uVar19]) {
            *local_4c = (uint)puVar8;
            if (puVar8 <= local_54) {
              local_4c = &local_30;
              goto LAB_017c1c84;
            }
            puVar8 = (uint *)puVar21[1];
            local_4c = puVar21 + 1;
            uVar15 = uVar19;
          }
          else {
            *local_50 = (uint)puVar8;
            if (puVar8 <= local_54) {
              local_50 = &local_30;
              goto LAB_017c1c84;
            }
            puVar8 = (uint *)puVar23[uVar11 * 2];
            uVar22 = uVar19;
            local_50 = puVar21;
          }
          local_34 = local_34 + -1;
        } while (local_44 < puVar8 && local_34 != 0);
      }
LAB_017c1c84:
      iVar12 = iVar12 + 1;
      *local_50 = 0;
      *local_4c = 0;
      puVar10 = puVar20;
    } while (puVar20 != (uint *)0x0);
LAB_017c1cb4:
    puVar13 = *(uint **)(pcVar24 + uVar5 * 4);
  }
  *(uint *)(pcVar24 + uVar5 * 4) = uVar26;
  uVar5 = uVar26 & uVar16;
  local_48 = uVar26 + 9;
  local_3c = puVar23 + uVar5 * 2;
  if (puVar6 < puVar13) {
    uVar14 = 0;
    local_44 = puVar23 + uVar5 * 2 + 1;
    uVar5 = 0;
    uVar22 = 0;
    puVar8 = (uint *)((int)param_3 + -3);
    do {
      if (uVar22 < uVar5) {
        uVar15 = uVar22;
      }
      else {
        uVar15 = uVar5;
      }
      pcVar24 = (char *)((int)puVar27 + (int)puVar13);
      puVar20 = (uint *)((int)param_2 + uVar15);
      puVar10 = (uint *)(pcVar24 + uVar15);
      if (puVar20 < puVar8) {
        if (*(uint *)(pcVar24 + uVar15) == *(uint *)((int)param_2 + uVar15)) {
          puVar21 = puVar20 + 1;
          puVar10 = puVar10 + 1;
          if (puVar21 < puVar8) {
            do {
              if (*puVar10 != *puVar21) {
                uVar19 = *puVar10 ^ *puVar21;
                bVar2 = (byte)uVar19;
                bVar3 = (byte)(uVar19 >> 8);
                bVar4 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar25 = (char *)((int)puVar21 +
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
                                                                  )) >> 3) - (int)puVar20));
                goto LAB_017c1d44;
              }
              puVar21 = puVar21 + 1;
              puVar10 = puVar10 + 1;
            } while (puVar21 < puVar8);
          }
          goto LAB_017c1e44;
        }
        uVar19 = *(uint *)(pcVar24 + uVar15) ^ *(uint *)((int)param_2 + uVar15);
        bVar2 = (byte)uVar19;
        bVar3 = (byte)(uVar19 >> 8);
        bVar4 = (byte)(uVar19 >> 0x10);
        bVar1 = (byte)(uVar19 >> 0x18);
        pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
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
        puVar21 = puVar20;
LAB_017c1e44:
        if (puVar21 < (uint *)((int)param_3 + -1)) {
          if ((short)*puVar10 == (short)*puVar21) {
            puVar21 = (uint *)((int)puVar21 + 2);
            puVar10 = (uint *)((int)puVar10 + 2);
          }
        }
        if ((puVar21 < param_3) && ((char)*puVar10 == (char)*puVar21)) {
          puVar21 = (uint *)((int)puVar21 + 1);
        }
        pcVar25 = (char *)((int)puVar21 - (int)puVar20);
      }
LAB_017c1d44:
      uVar15 = uVar15 + (int)pcVar25;
      if (uVar14 < uVar15) {
        if ((uint)(local_48 - (int)puVar13) < uVar15) {
          local_48 = uVar15 + (int)puVar13;
        }
        if (LZCOUNT(*param_4) - LZCOUNT((uVar26 - (int)puVar13) + 1) < (int)((uVar15 - uVar14) * 4))
        {
          *param_4 = (uVar26 - (int)puVar13) + 3;
          uVar14 = uVar15;
        }
        if (param_3 == (uint *)((int)param_2 + uVar15)) {
          *local_44 = 0;
          *local_3c = 0;
          puVar6 = param_3;
          goto LAB_017c2024;
        }
      }
      puVar10 = puVar23 + (uVar16 & (uint)puVar13) * 2;
      if ((byte)pcVar24[uVar15] < *(byte *)((int)param_2 + uVar15)) {
        *local_3c = (uint)puVar13;
        if (puVar13 <= local_7c) {
          local_3c = &local_30;
          goto LAB_017c2080;
        }
        puVar13 = (uint *)puVar10[1];
        local_3c = puVar10 + 1;
        uVar22 = uVar15;
      }
      else {
        *local_44 = (uint)puVar13;
        if (puVar13 <= local_7c) {
          local_44 = &local_30;
LAB_017c2080:
          *local_44 = 0;
          *local_3c = 0;
          goto LAB_017c2094;
        }
        puVar13 = (uint *)puVar23[(uVar16 & (uint)puVar13) * 2];
        uVar5 = uVar15;
        local_44 = puVar10;
      }
      local_60 = local_60 + -1;
    } while (puVar6 < puVar13 && local_60 != 0);
    *local_44 = 0;
    *local_3c = 0;
    if (local_60 == 0) goto LAB_017c2024;
  }
  else {
    puVar23[uVar5 * 2] = 0;
    local_3c[1] = 0;
    uVar14 = 0;
  }
LAB_017c2094:
  uVar29 = FUN_017c07b4(param_1,param_2,param_3,param_4,uVar14,local_60,param_5);
  uVar14 = (uint)uVar29;
  puVar6 = (uint *)((ulonglong)uVar29 >> 0x20);
LAB_017c2024:
  *(int *)(param_1 + 0x1c) = local_48 + -8;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar14,puVar6,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

