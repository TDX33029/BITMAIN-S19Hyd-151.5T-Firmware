// FUN_01808ed0 @ 01808ed0 size=1716 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_01808ed0(int param_1,int *param_2,uint *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  char *pcVar28;
  bool bVar29;
  uint *local_6c;
  int local_5c;
  uint *local_50;
  uint *local_44;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  iVar14 = *(int *)(param_1 + 4);
  uVar20 = *(uint *)(param_1 + 0xc);
  local_2c = DAT_018ddaf8;
  iVar7 = *(int *)(param_1 + 100);
  uVar15 = (int)param_2 - iVar14;
  uVar21 = (uint)(*param_2 * -0x61c8864f) >> (0x20U - *(int *)(param_1 + 0xc0) & 0xff);
  uVar24 = ~(-1 << (*(int *)(param_1 + 0xbc) - 1U & 0xff));
  iVar8 = *(int *)(param_1 + 8);
  if (uVar24 < uVar15) {
    uVar25 = uVar15 - uVar24;
  }
  else {
    uVar25 = 0;
  }
  uVar16 = *(uint *)(param_1 + 0x10);
  uVar10 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar29 = uVar10 < param_4 - uVar16;
  if (bVar29) {
    uVar10 = param_4 - uVar10;
  }
  if (!bVar29) {
    uVar10 = uVar16;
  }
  uVar9 = *(uint *)(*(int *)(param_1 + 0x5c) + uVar21 * 4);
  uVar11 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar10 = uVar16;
  }
  local_44 = (uint *)(iVar7 + (uVar24 & uVar15) * 8);
  *(uint *)(*(int *)(param_1 + 0x5c) + uVar21 * 4) = uVar15;
  local_5c = uVar15 + 9;
  if (uVar9 < uVar10) {
    *(undefined4 *)(iVar7 + (uVar24 & uVar15) * 8) = 0;
    uVar21 = 0;
    local_44[1] = 0;
  }
  else {
    uVar16 = 0;
    local_34 = 1 << (uVar11 & 0xff);
    uVar21 = 0;
    pcVar5 = (char *)(uVar20 + iVar8);
    puVar12 = (uint *)(uVar20 + iVar14);
    local_50 = local_44 + 1;
    local_38 = 8;
    puVar13 = (uint *)((int)param_3 + -3);
    do {
      if (uVar16 < uVar21) {
        uVar11 = uVar16;
      }
      else {
        uVar11 = uVar21;
      }
      puVar22 = (uint *)((int)param_2 + uVar11);
      if ((param_5 == 0) || (uVar20 <= uVar11 + uVar9)) {
        iVar6 = iVar14 + uVar9;
        puVar17 = (uint *)(uVar11 + iVar6);
        if (puVar22 < puVar13) {
          if (*(uint *)(uVar11 + iVar6) == *(uint *)((int)param_2 + uVar11)) {
            puVar27 = puVar22 + 1;
            puVar17 = puVar17 + 1;
            if (puVar27 < puVar13) {
              do {
                if (*puVar17 != *puVar27) {
                  uVar26 = *puVar17 ^ *puVar27;
                  bVar2 = (byte)uVar26;
                  bVar3 = (byte)(uVar26 >> 8);
                  bVar4 = (byte)(uVar26 >> 0x10);
                  bVar1 = (byte)(uVar26 >> 0x18);
                  pcVar28 = (char *)((int)puVar27 +
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
                                    (int)puVar22));
                  goto LAB_018091bc;
                }
                puVar27 = puVar27 + 1;
                puVar17 = puVar17 + 1;
              } while (puVar27 < puVar13);
            }
            goto LAB_018091f0;
          }
          uVar26 = *(uint *)(uVar11 + iVar6) ^ *(uint *)((int)param_2 + uVar11);
          bVar2 = (byte)uVar26;
          bVar3 = (byte)(uVar26 >> 8);
          bVar4 = (byte)(uVar26 >> 0x10);
          bVar1 = (byte)(uVar26 >> 0x18);
          pcVar28 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar27 = puVar22;
LAB_018091f0:
          if (puVar27 < (uint *)((int)param_3 + -1)) {
            if ((short)*puVar17 == (short)*puVar27) {
              puVar17 = (uint *)((int)puVar17 + 2);
              puVar27 = (uint *)((int)puVar27 + 2);
            }
          }
          if ((puVar27 < param_3) && ((char)*puVar17 == (char)*puVar27)) {
            puVar27 = (uint *)((int)puVar27 + 1);
          }
          pcVar28 = (char *)((int)puVar27 - (int)puVar22);
        }
LAB_018091bc:
        uVar11 = uVar11 + (int)pcVar28;
      }
      else {
        iVar6 = iVar8 + uVar9;
        puVar27 = (uint *)(uVar11 + iVar6);
        puVar17 = (uint *)((int)param_2 + ((int)pcVar5 - iVar6));
        if (param_3 < puVar17) {
          puVar17 = param_3;
        }
        puVar18 = (uint *)((int)puVar17 + -3);
        if (puVar22 < puVar18) {
          if (*(uint *)(uVar11 + iVar6) == *(uint *)((int)param_2 + uVar11)) {
            puVar19 = puVar22 + 1;
            local_6c = puVar27 + 1;
            if (puVar19 < puVar18) {
              do {
                if (*local_6c != *puVar19) {
                  uVar26 = *local_6c ^ *puVar19;
                  bVar2 = (byte)uVar26;
                  bVar3 = (byte)(uVar26 >> 8);
                  bVar4 = (byte)(uVar26 >> 0x10);
                  bVar1 = (byte)(uVar26 >> 0x18);
                  pcVar28 = (char *)((int)puVar19 +
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
                                    (int)puVar22));
                  goto joined_r0x01809300;
                }
                puVar19 = puVar19 + 1;
                local_6c = local_6c + 1;
              } while (puVar19 < puVar18);
            }
            goto LAB_0180928c;
          }
          uVar26 = *(uint *)(uVar11 + iVar6) ^ *(uint *)((int)param_2 + uVar11);
          bVar2 = (byte)uVar26;
          bVar3 = (byte)(uVar26 >> 8);
          bVar4 = (byte)(uVar26 >> 0x10);
          bVar1 = (byte)(uVar26 >> 0x18);
          pcVar28 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar19 = puVar22;
          local_6c = puVar27;
LAB_0180928c:
          if (puVar19 < (uint *)((int)puVar17 + -1)) {
            if ((short)*local_6c == (short)*puVar19) {
              local_6c = (uint *)((int)local_6c + 2);
              puVar19 = (uint *)((int)puVar19 + 2);
            }
          }
          if ((puVar19 < puVar17) && ((char)*local_6c == (char)*puVar19)) {
            puVar19 = (uint *)((int)puVar19 + 1);
          }
          pcVar28 = (char *)((int)puVar19 - (int)puVar22);
        }
joined_r0x01809300:
        if (pcVar5 == (char *)((int)puVar27 + (int)pcVar28)) {
          puVar17 = (uint *)((int)puVar22 + (int)pcVar28);
          if (puVar17 < puVar13) {
            if (*puVar12 == *(uint *)((int)puVar22 + (int)pcVar28)) {
              puVar27 = puVar17 + 1;
              puVar22 = puVar12 + 1;
              if (puVar27 < puVar13) {
                do {
                  if (*puVar22 != *puVar27) {
                    uVar26 = *puVar22 ^ *puVar27;
                    bVar2 = (byte)uVar26;
                    bVar3 = (byte)(uVar26 >> 8);
                    bVar4 = (byte)(uVar26 >> 0x10);
                    bVar1 = (byte)(uVar26 >> 0x18);
                    pcVar23 = (char *)((int)puVar27 +
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
                    goto LAB_018094e0;
                  }
                  puVar27 = puVar27 + 1;
                  puVar22 = puVar22 + 1;
                } while (puVar27 < puVar13);
              }
              goto LAB_0180948c;
            }
            uVar26 = *(uint *)((int)puVar22 + (int)pcVar28) ^ *puVar12;
            bVar2 = (byte)uVar26;
            bVar3 = (byte)(uVar26 >> 8);
            bVar4 = (byte)(uVar26 >> 0x10);
            bVar1 = (byte)(uVar26 >> 0x18);
            pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar22 = puVar12;
            puVar27 = puVar17;
LAB_0180948c:
            if (puVar27 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar22 == (short)*puVar27) {
                puVar22 = (uint *)((int)puVar22 + 2);
                puVar27 = (uint *)((int)puVar27 + 2);
              }
            }
            if ((puVar27 < param_3) && ((char)*puVar22 == (char)*puVar27)) {
              puVar27 = (uint *)((int)puVar27 + 1);
            }
            pcVar23 = (char *)((int)puVar27 - (int)puVar17);
          }
LAB_018094e0:
          pcVar28 = pcVar28 + (int)pcVar23;
        }
        uVar11 = uVar11 + (int)pcVar28;
        if (uVar20 <= uVar11 + uVar9) {
          iVar6 = iVar14 + uVar9;
        }
      }
      if ((local_38 < uVar11) && (local_38 = uVar11, local_5c - uVar9 < uVar11)) {
        local_5c = uVar11 + uVar9;
      }
      if (param_3 == (uint *)((int)param_2 + uVar11)) break;
      puVar22 = (uint *)(iVar7 + (uVar9 & uVar24) * 8);
      if (*(byte *)(uVar11 + iVar6) < *(byte *)((int)param_2 + uVar11)) {
        *local_44 = uVar9;
        if (uVar9 <= uVar25) {
          local_44 = &local_30;
          break;
        }
        uVar9 = puVar22[1];
        local_44 = puVar22 + 1;
        uVar16 = uVar11;
      }
      else {
        *local_50 = uVar9;
        if (uVar9 <= uVar25) {
          local_50 = &local_30;
          break;
        }
        uVar9 = *(uint *)(iVar7 + (uVar9 & uVar24) * 8);
        uVar21 = uVar11;
        local_50 = puVar22;
      }
      local_34 = local_34 + -1;
    } while (uVar10 <= uVar9 && local_34 != 0);
    uVar21 = 0;
    *local_50 = 0;
    *local_44 = 0;
    if ((0x180 < local_38) && (uVar21 = local_38 + -0x180, 0xbf < uVar21)) {
      uVar21 = 0xc0;
    }
  }
  uVar20 = local_5c + (-8 - uVar15);
  if (uVar20 < uVar21) {
    uVar20 = uVar21;
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar20,uVar15,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

