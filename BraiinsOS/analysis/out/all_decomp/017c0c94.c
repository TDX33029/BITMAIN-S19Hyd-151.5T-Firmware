// FUN_017c0c94 @ 017c0c94 size=2084 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c0c94(int param_1,uint *param_2,uint *param_3,int *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  uint local_7c;
  int local_60;
  uint local_54;
  uint *local_50;
  uint *local_4c;
  int local_48;
  uint *local_44;
  uint *local_3c;
  int local_34;
  uint local_30;
  uint local_2c;
  
  iVar24 = *(int *)(param_1 + 0x5c);
  iVar11 = *(int *)(param_1 + 0xc0);
  local_2c = DAT_018ddaf8;
  if (param_5 == 5) {
    uVar14 = *param_2;
    uVar5 = 0xbb000000;
    uVar26 = param_2[1];
  }
  else {
    if (param_5 != 6) {
      uVar5 = *param_2 * -0x61c8864f >> (0x20U - iVar11 & 0xff);
      goto LAB_017c0d38;
    }
    uVar14 = *param_2;
    uVar5 = 0xbf9b0000;
    uVar26 = param_2[1];
  }
  uVar26 = uVar5 * uVar26 + uVar14 * -0x30e44324 +
           (int)((ulonglong)uVar5 * (ulonglong)uVar14 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar5 * (ulonglong)uVar14) >> (0x40U - iVar11 & 0xff) |
          uVar26 << (iVar11 - 0x20U & 0xff) | uVar26 >> (0x20U - iVar11 & 0xff);
LAB_017c0d38:
  uVar26 = *(uint *)(param_1 + 0x10);
  uVar27 = *(uint *)(param_1 + 4);
  uVar14 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar18 = (int)param_2 - uVar27;
  uVar12 = *(uint *)(iVar24 + uVar5 * 4);
  if (uVar14 < uVar18 - uVar26) {
    uVar14 = uVar18 - uVar14;
  }
  else {
    uVar14 = uVar26;
  }
  puVar22 = *(uint **)(param_1 + 100);
  uVar15 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar26 = uVar14;
  }
  if (uVar15 < uVar18) {
    local_7c = uVar18 - uVar15;
    local_54 = local_7c;
    if (local_7c < uVar26) {
      local_54 = uVar26;
    }
  }
  else {
    local_7c = 0;
    local_54 = uVar26;
  }
  local_60 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  if (local_54 < uVar12) {
    iVar11 = local_60;
    uVar14 = 0;
    do {
      uVar21 = uVar12;
      puVar23 = puVar22 + (uVar21 & uVar15) * 2 + 1;
      if (*puVar23 != 1) {
LAB_017c0e50:
        uVar21 = uVar14;
        if (uVar14 == 0) goto LAB_017c10ac;
        break;
      }
      if (iVar11 == 1) {
        if (local_54 < uVar21) {
          *puVar23 = 0;
          puVar22[(uVar21 & uVar15) * 2] = 0;
        }
        goto LAB_017c0e50;
      }
      *puVar23 = uVar14;
      iVar11 = iVar11 + -1;
      uVar12 = puVar22[(uVar21 & uVar15) * 2];
      uVar14 = uVar21;
    } while (local_54 < uVar12);
    iVar7 = *(int *)(param_1 + 8);
    puVar23 = puVar22;
    iVar25 = iVar24;
    do {
      local_44 = *(uint **)(param_1 + 0x10);
      uVar19 = puVar22[(uVar15 & uVar21) * 2 + 1];
      uVar12 = (1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff)) - 1;
      uVar14 = *(uint *)(param_1 + 0xc);
      bVar29 = uVar21 < uVar14;
      if (bVar29) {
        iVar25 = iVar7 + uVar21;
        puVar23 = (uint *)(iVar7 + uVar14);
      }
      else {
        uVar14 = uVar27;
      }
      if (!bVar29) {
        iVar25 = uVar14 + uVar21;
        puVar23 = param_3;
      }
      uVar14 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
      uVar13 = uVar21 & uVar12;
      if (uVar14 < uVar21 - (int)local_44) {
        local_44 = (uint *)(uVar21 - uVar14);
      }
      local_4c = puVar22 + uVar13 * 2;
      uVar14 = puVar22[uVar13 * 2];
      local_50 = local_4c + 1;
      if (iVar11 != 0 && local_44 < uVar14) {
        uVar21 = 0;
        puVar8 = (uint *)((int)puVar23 + -3);
        uVar13 = 0;
        local_34 = iVar11;
        do {
          if (uVar13 < uVar21) {
            uVar10 = uVar13;
          }
          else {
            uVar10 = uVar21;
          }
          iVar28 = uVar27 + uVar14;
          puVar16 = (uint *)(uVar10 + iVar25);
          puVar20 = (uint *)(uVar10 + iVar28);
          if (puVar16 < puVar8) {
            if (*(uint *)(uVar10 + iVar28) == *(uint *)(uVar10 + iVar25)) {
              puVar6 = puVar16 + 1;
              puVar20 = puVar20 + 1;
              if (puVar6 < puVar8) {
                do {
                  if (*puVar20 != *puVar6) {
                    uVar9 = *puVar20 ^ *puVar6;
                    bVar2 = (byte)uVar9;
                    bVar3 = (byte)(uVar9 >> 8);
                    bVar4 = (byte)(uVar9 >> 0x10);
                    bVar1 = (byte)(uVar9 >> 0x18);
                    pcVar17 = (char *)((int)puVar6 +
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
                                                                  )) >> 3) - (int)puVar16));
                    goto joined_r0x017c0f7c;
                  }
                  puVar6 = puVar6 + 1;
                  puVar20 = puVar20 + 1;
                } while (puVar6 < puVar8);
              }
              goto LAB_017c101c;
            }
            uVar9 = *(uint *)(uVar10 + iVar28) ^ *(uint *)(uVar10 + iVar25);
            bVar2 = (byte)uVar9;
            bVar3 = (byte)(uVar9 >> 8);
            bVar4 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar6 = puVar16;
LAB_017c101c:
            if (puVar6 < (uint *)((int)puVar23 + -1)) {
              if ((short)*puVar20 == (short)*puVar6) {
                puVar6 = (uint *)((int)puVar6 + 2);
                puVar20 = (uint *)((int)puVar20 + 2);
              }
            }
            if ((puVar6 < puVar23) && ((char)*puVar20 == (char)*puVar6)) {
              puVar6 = (uint *)((int)puVar6 + 1);
            }
            pcVar17 = (char *)((int)puVar6 - (int)puVar16);
          }
joined_r0x017c0f7c:
          uVar10 = uVar10 + (int)pcVar17;
          if (puVar23 == (uint *)(uVar10 + iVar25)) break;
          uVar9 = uVar12 & uVar14;
          puVar20 = puVar22 + uVar9 * 2;
          if (*(byte *)(uVar10 + iVar28) < *(byte *)(uVar10 + iVar25)) {
            *local_4c = uVar14;
            if (uVar14 <= local_54) {
              local_4c = &local_30;
              goto LAB_017c1080;
            }
            uVar14 = puVar20[1];
            local_4c = puVar20 + 1;
            uVar13 = uVar10;
          }
          else {
            *local_50 = uVar14;
            if (uVar14 <= local_54) {
              local_50 = &local_30;
              goto LAB_017c1080;
            }
            uVar14 = puVar22[uVar9 * 2];
            uVar21 = uVar10;
            local_50 = puVar20;
          }
          local_34 = local_34 + -1;
        } while (local_44 < uVar14 && local_34 != 0);
      }
LAB_017c1080:
      iVar11 = iVar11 + 1;
      *local_50 = 0;
      *local_4c = 0;
      uVar21 = uVar19;
    } while (uVar19 != 0);
LAB_017c10ac:
    uVar12 = *(uint *)(iVar24 + uVar5 * 4);
  }
  *(uint *)(iVar24 + uVar5 * 4) = uVar18;
  local_48 = uVar18 + 9;
  local_3c = puVar22 + (uVar18 & uVar15) * 2;
  local_44 = puVar22 + (uVar18 & uVar15) * 2 + 1;
  if (uVar26 < uVar12) {
    uVar5 = 0;
    uVar14 = 0;
    puVar23 = (uint *)((int)param_3 + -3);
    uVar21 = 0;
    do {
      if (uVar21 < uVar14) {
        uVar19 = uVar21;
      }
      else {
        uVar19 = uVar14;
      }
      iVar11 = uVar27 + uVar12;
      puVar20 = (uint *)((int)param_2 + uVar19);
      puVar8 = (uint *)(uVar19 + iVar11);
      if (puVar20 < puVar23) {
        if (*(uint *)(uVar19 + iVar11) == *(uint *)((int)param_2 + uVar19)) {
          puVar16 = puVar20 + 1;
          puVar8 = puVar8 + 1;
          if (puVar16 < puVar23) {
            do {
              if (*puVar8 != *puVar16) {
                uVar13 = *puVar8 ^ *puVar16;
                bVar2 = (byte)uVar13;
                bVar3 = (byte)(uVar13 >> 8);
                bVar4 = (byte)(uVar13 >> 0x10);
                bVar1 = (byte)(uVar13 >> 0x18);
                pcVar17 = (char *)((int)puVar16 +
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
                goto LAB_017c1138;
              }
              puVar16 = puVar16 + 1;
              puVar8 = puVar8 + 1;
            } while (puVar16 < puVar23);
          }
          goto LAB_017c1238;
        }
        uVar13 = *(uint *)(uVar19 + iVar11) ^ *(uint *)((int)param_2 + uVar19);
        bVar2 = (byte)uVar13;
        bVar3 = (byte)(uVar13 >> 8);
        bVar4 = (byte)(uVar13 >> 0x10);
        bVar1 = (byte)(uVar13 >> 0x18);
        pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
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
        puVar16 = puVar20;
LAB_017c1238:
        if (puVar16 < (uint *)((int)param_3 + -1)) {
          if ((short)*puVar8 == (short)*puVar16) {
            puVar16 = (uint *)((int)puVar16 + 2);
            puVar8 = (uint *)((int)puVar8 + 2);
          }
        }
        if ((puVar16 < param_3) && ((char)*puVar8 == (char)*puVar16)) {
          puVar16 = (uint *)((int)puVar16 + 1);
        }
        pcVar17 = (char *)((int)puVar16 - (int)puVar20);
      }
LAB_017c1138:
      uVar19 = uVar19 + (int)pcVar17;
      if (uVar5 < uVar19) {
        if (local_48 - uVar12 < uVar19) {
          local_48 = uVar19 + uVar12;
        }
        if (LZCOUNT(*param_4) - LZCOUNT((uVar18 - uVar12) + 1) < (int)((uVar19 - uVar5) * 4)) {
          *param_4 = (uVar18 - uVar12) + 3;
          uVar5 = uVar19;
        }
        if (param_3 == (uint *)((int)param_2 + uVar19)) break;
      }
      puVar8 = puVar22 + (uVar15 & uVar12) * 2;
      if (*(byte *)(uVar19 + iVar11) < *(byte *)((int)param_2 + uVar19)) {
        *local_3c = uVar12;
        if (uVar12 <= local_7c) {
          local_3c = &local_30;
          break;
        }
        uVar12 = puVar8[1];
        local_3c = puVar8 + 1;
        uVar21 = uVar19;
      }
      else {
        *local_44 = uVar12;
        if (uVar12 <= local_7c) {
          local_44 = &local_30;
          break;
        }
        uVar12 = puVar22[(uVar15 & uVar12) * 2];
        uVar14 = uVar19;
        local_44 = puVar8;
      }
      local_60 = local_60 + -1;
    } while (uVar26 < uVar12 && local_60 != 0);
  }
  else {
    uVar5 = 0;
  }
  *local_44 = 0;
  *local_3c = 0;
  *(int *)(param_1 + 0x1c) = local_48 + -8;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar5,local_3c,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

