// FUN_0180b0b4 @ 0180b0b4 size=1712 calls_out=2 calls_in=0
// strings: 

int FUN_0180b0b4(int param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,int *param_6
                ,uint param_7,int param_8)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  bool bVar29;
  char *local_60;
  uint *local_58;
  undefined4 *local_50;
  undefined4 *local_4c;
  char *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar23 = *(int *)(param_2 + 4);
  uVar20 = *(uint *)(param_2 + 0x1c);
  puVar9 = (uint *)(iVar23 + uVar20);
  local_2c = DAT_018ddaf8;
  if (param_4 < puVar9) {
    iVar24 = 0;
  }
  else {
    uVar19 = (int)param_4 - iVar23;
    if (uVar20 < uVar19) {
      while( true ) {
        iVar24 = FUN_01809c50(param_2,puVar9,param_5,uVar19,0);
        uVar20 = uVar20 + iVar24;
        if (uVar19 <= uVar20) break;
        puVar9 = (uint *)(iVar23 + uVar20);
      }
    }
    uVar10 = *param_4;
    uVar20 = param_4[1];
    *(uint *)(param_2 + 0x1c) = uVar19;
    iVar24 = *(int *)(param_2 + 0xc0);
    lVar2 = (ulonglong)uVar10 * 0xbf9b0000;
    uVar20 = uVar20 * -0x40650000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
    iVar25 = *(int *)(param_2 + 0x5c);
    uVar10 = (uint)lVar2 >> (0x40U - iVar24 & 0xff) | uVar20 << (iVar24 - 0x20U & 0xff) |
             uVar20 >> (0x20U - iVar24 & 0xff);
    uVar20 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    puVar9 = *(uint **)(iVar25 + uVar10 * 4);
    iVar14 = *(int *)(param_2 + 100);
    if (uVar20 < uVar19) {
      local_58 = (uint *)(uVar19 - uVar20);
    }
    else {
      local_58 = (uint *)0x0;
    }
    puVar11 = *(uint **)(param_2 + 0x10);
    uVar16 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
    bVar29 = uVar16 < uVar19 - (int)puVar11;
    uVar6 = *(uint *)(param_2 + 0xc4);
    puVar22 = param_5;
    if (bVar29) {
      puVar22 = (uint *)(uVar19 - uVar16);
    }
    if (!bVar29) {
      puVar22 = puVar11;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      puVar22 = puVar11;
    }
    local_38 = (char *)(param_8 + -1);
    if (param_7 < param_7 + 3) {
      iVar24 = 0;
      iVar15 = *(int *)(param_2 + 0xc);
      pcVar21 = (char *)0xfff;
      if (*(char **)(param_2 + 0xcc) < (char *)0xfff) {
        pcVar21 = *(char **)(param_2 + 0xcc);
      }
      uVar16 = param_7;
      do {
        if (uVar16 == 3) {
          iVar12 = *param_6 + -1;
        }
        else {
          iVar12 = param_6[uVar16];
        }
        if (iVar12 - 1U < uVar19 - iVar15) {
          bVar29 = puVar22 == (uint *)(uVar19 - iVar12);
          if (puVar22 <= (uint *)(uVar19 - iVar12)) {
            bVar29 = *(uint *)((int)param_4 - iVar12) == *param_4;
          }
          if (bVar29) {
            puVar28 = param_4 + 1;
            puVar26 = (uint *)((int)param_5 + -3);
            puVar11 = (uint *)((int)param_4 + (4 - iVar12));
            if (puVar28 < puVar26) {
              uVar27 = *(uint *)((int)param_4 + (4 - iVar12));
              if (uVar27 == param_4[1]) {
                puVar8 = param_4 + 2;
                puVar11 = puVar11 + 1;
                if (puVar8 < puVar26) {
                  do {
                    if (*puVar11 != *puVar8) {
                      uVar27 = *puVar8 ^ *puVar11;
                      bVar3 = (byte)uVar27;
                      bVar4 = (byte)(uVar27 >> 8);
                      bVar5 = (byte)(uVar27 >> 0x10);
                      bVar1 = (byte)(uVar27 >> 0x18);
                      pcVar13 = (char *)((int)puVar8 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                          bVar4 >> 1 & 1) << 1 |
                                                                         bVar4 >> 2 & 1) << 1 |
                                                                        bVar4 >> 3 & 1) << 1 |
                                                                       bVar4 >> 4 & 1) << 1 |
                                                                      bVar4 >> 5 & 1) << 1 |
                                                                     bVar4 >> 6 & 1) << 1 |
                                                                    bVar4 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                          bVar1 >> 1 & 1) << 1 |
                                                                         bVar1 >> 2 & 1) << 1 |
                                                                        bVar1 >> 3 & 1) << 1 |
                                                                       bVar1 >> 4 & 1) << 1 |
                                                                      bVar1 >> 5 & 1) << 1 |
                                                                     bVar1 >> 6 & 1) << 1 |
                                                                    bVar1 >> 7)) >> 3) -
                                        (int)puVar28));
                      goto joined_r0x0180b314;
                    }
                    puVar8 = puVar8 + 1;
                    puVar11 = puVar11 + 1;
                  } while (puVar8 < puVar26);
                }
                goto LAB_0180b634;
              }
              uVar27 = uVar27 ^ param_4[1];
              bVar3 = (byte)uVar27;
              bVar4 = (byte)(uVar27 >> 8);
              bVar5 = (byte)(uVar27 >> 0x10);
              bVar1 = (byte)(uVar27 >> 0x18);
              pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar8 = puVar28;
LAB_0180b634:
              if (puVar8 < (uint *)((int)param_5 + -1)) {
                if ((short)*puVar11 == (short)*puVar8) {
                  puVar11 = (uint *)((int)puVar11 + 2);
                  puVar8 = (uint *)((int)puVar8 + 2);
                }
              }
              if ((puVar8 < param_5) && ((char)*puVar11 == (char)*puVar8)) {
                puVar8 = (uint *)((int)puVar8 + 1);
              }
              pcVar13 = (char *)((int)puVar8 - (int)puVar28);
            }
joined_r0x0180b314:
            pcVar13 = pcVar13 + 4;
            if (local_38 < pcVar13) {
              iVar12 = iVar24 * 8;
              *(uint *)(param_1 + iVar24 * 8) = (1 - param_7) + uVar16;
              iVar24 = iVar24 + 1;
              *(char **)(param_1 + iVar12 + 4) = pcVar13;
              if (param_5 == (uint *)((int)param_4 + (int)pcVar13) || pcVar21 < pcVar13)
              goto LAB_0180b558;
              local_38 = pcVar13;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (param_7 + 3 != uVar16);
    }
    else {
      iVar24 = 0;
    }
    *(uint *)(iVar25 + uVar10 * 4) = uVar19;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)&DAT_00000001;
    }
    local_60 = (char *)(uVar19 + 9);
    iVar25 = (uVar19 & uVar20) * 8;
    local_4c = (undefined4 *)(iVar14 + iVar25);
    local_50 = (undefined4 *)(iVar14 + iVar25 + 4);
    if (puVar22 <= puVar9) {
      pcVar21 = (char *)0x0;
      local_34 = 1 << (uVar6 & 0xff);
      pcVar13 = (char *)0x0;
      puVar11 = (uint *)((int)param_5 + -3);
      do {
        if (pcVar13 < pcVar21) {
          pcVar17 = pcVar13;
        }
        else {
          pcVar17 = pcVar21;
        }
        puVar26 = (uint *)((int)param_4 + (int)pcVar17);
        puVar28 = (uint *)((int)puVar9 + (int)(pcVar17 + iVar23));
        if (puVar26 < puVar11) {
          if (*(uint *)((int)puVar9 + (int)(pcVar17 + iVar23)) ==
              *(uint *)((int)param_4 + (int)pcVar17)) {
            puVar8 = puVar26 + 1;
            puVar28 = puVar28 + 1;
            if (puVar8 < puVar11) {
              do {
                if (*puVar28 != *puVar8) {
                  uVar10 = *puVar28 ^ *puVar8;
                  bVar3 = (byte)uVar10;
                  bVar4 = (byte)(uVar10 >> 8);
                  bVar5 = (byte)(uVar10 >> 0x10);
                  bVar1 = (byte)(uVar10 >> 0x18);
                  pcVar18 = (char *)((int)puVar8 +
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
                                    (int)puVar26));
                  goto LAB_0180b3dc;
                }
                puVar8 = puVar8 + 1;
                puVar28 = puVar28 + 1;
              } while (puVar8 < puVar11);
            }
            goto LAB_0180b4e0;
          }
          uVar10 = *(uint *)((int)puVar9 + (int)(pcVar17 + iVar23)) ^
                   *(uint *)((int)param_4 + (int)pcVar17);
          bVar3 = (byte)uVar10;
          bVar4 = (byte)(uVar10 >> 8);
          bVar5 = (byte)(uVar10 >> 0x10);
          bVar1 = (byte)(uVar10 >> 0x18);
          pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar8 = puVar26;
LAB_0180b4e0:
          if (puVar8 < (uint *)((int)param_5 + -1)) {
            if ((short)*puVar28 == (short)*puVar8) {
              puVar8 = (uint *)((int)puVar8 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar8 < param_5) && ((char)*puVar28 == (char)*puVar8)) {
            puVar8 = (uint *)((int)puVar8 + 1);
          }
          pcVar18 = (char *)((int)puVar8 - (int)puVar26);
        }
LAB_0180b3dc:
        pcVar17 = pcVar17 + (int)pcVar18;
        if (local_38 < pcVar17) {
          if (local_60 + -(int)puVar9 < pcVar17) {
            local_60 = pcVar17 + (int)puVar9;
          }
          *(uint *)(param_1 + iVar24 * 8) = (uVar19 + 3) - (int)puVar9;
          iVar25 = iVar24 * 8;
          iVar24 = iVar24 + 1;
          *(char **)(param_1 + iVar25 + 4) = pcVar17;
          if ((char *)0x1000 < pcVar17 || param_5 == (uint *)((int)param_4 + (int)pcVar17)) break;
          local_38 = pcVar17;
        }
        puVar7 = (undefined4 *)(iVar14 + (uVar20 & (uint)puVar9) * 8);
        if (*(byte *)((int)puVar9 + (int)(pcVar17 + iVar23)) <
            *(byte *)((int)param_4 + (int)pcVar17)) {
          *local_4c = puVar9;
          if (puVar9 <= local_58) {
            local_4c = &local_30;
            break;
          }
          puVar9 = (uint *)puVar7[1];
          local_4c = puVar7 + 1;
          pcVar13 = pcVar17;
        }
        else {
          *local_50 = puVar9;
          if (puVar9 <= local_58) {
            local_50 = &local_30;
            break;
          }
          puVar9 = *(uint **)(iVar14 + (uVar20 & (uint)puVar9) * 8);
          pcVar21 = pcVar17;
          local_50 = puVar7;
        }
        local_34 = local_34 + -1;
      } while (puVar22 <= puVar9 && local_34 != 0);
    }
    *local_50 = 0;
    *local_4c = 0;
    *(char **)(param_2 + 0x1c) = local_60 + -8;
  }
LAB_0180b558:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar24;
}

