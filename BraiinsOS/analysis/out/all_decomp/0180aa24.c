// FUN_0180aa24 @ 0180aa24 size=1668 calls_out=2 calls_in=0
// strings: 

int FUN_0180aa24(int param_1,int param_2,undefined4 param_3,int *param_4,uint *param_5,int *param_6,
                uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  char *local_60;
  uint *local_58;
  uint *local_50;
  uint *local_4c;
  char *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar22 = *(int *)(param_2 + 4);
  uVar19 = *(uint *)(param_2 + 0x1c);
  piVar7 = (int *)(iVar22 + uVar19);
  local_2c = DAT_018ddaf8;
  if (param_4 < piVar7) {
    iVar23 = 0;
  }
  else {
    uVar18 = (int)param_4 - iVar22;
    if (uVar19 < uVar18) {
      while( true ) {
        iVar23 = FUN_01808ed0(param_2,piVar7,param_5,uVar18,0);
        uVar19 = uVar19 + iVar23;
        if (uVar18 <= uVar19) break;
        piVar7 = (int *)(iVar22 + uVar19);
      }
    }
    *(uint *)(param_2 + 0x1c) = uVar18;
    iVar25 = *(int *)(param_2 + 0x5c);
    uVar19 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    uVar12 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    puVar13 = *(uint **)(param_2 + 100);
    local_58 = puVar13;
    if (uVar18 <= uVar12) {
      local_58 = (uint *)0x0;
    }
    puVar9 = *(uint **)(iVar25 + uVar19 * 4);
    if (uVar12 < uVar18) {
      local_58 = (uint *)(uVar18 - uVar12);
    }
    puVar8 = *(uint **)(param_2 + 0x10);
    uVar15 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
    bVar28 = uVar15 < uVar18 - (int)puVar8;
    uVar5 = *(uint *)(param_2 + 0xc4);
    puVar21 = param_5;
    if (bVar28) {
      puVar21 = (uint *)(uVar18 - uVar15);
    }
    if (!bVar28) {
      puVar21 = puVar8;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      puVar21 = puVar8;
    }
    local_38 = (char *)(param_8 + -1);
    if (param_7 < param_7 + 3) {
      iVar23 = 0;
      iVar14 = *(int *)(param_2 + 0xc);
      pcVar20 = (char *)0xfff;
      if (*(char **)(param_2 + 0xcc) < (char *)0xfff) {
        pcVar20 = *(char **)(param_2 + 0xcc);
      }
      uVar15 = param_7;
      do {
        if (uVar15 == 3) {
          iVar10 = *param_6 + -1;
        }
        else {
          iVar10 = param_6[uVar15];
        }
        if (iVar10 - 1U < uVar18 - iVar14) {
          bVar28 = puVar21 == (uint *)(uVar18 - iVar10);
          if (puVar21 <= (uint *)(uVar18 - iVar10)) {
            bVar28 = *(int *)((int)param_4 - iVar10) == *param_4;
          }
          if (bVar28) {
            puVar27 = (uint *)(param_4 + 1);
            puVar24 = (uint *)((int)param_5 + -3);
            puVar8 = (uint *)((int)param_4 + (4 - iVar10));
            if (puVar27 < puVar24) {
              uVar26 = *(uint *)((int)param_4 + (4 - iVar10));
              if (uVar26 == param_4[1]) {
                puVar6 = (uint *)(param_4 + 2);
                puVar8 = puVar8 + 1;
                if (puVar6 < puVar24) {
                  do {
                    if (*puVar8 != *puVar6) {
                      uVar26 = *puVar6 ^ *puVar8;
                      bVar2 = (byte)uVar26;
                      bVar3 = (byte)(uVar26 >> 8);
                      bVar4 = (byte)(uVar26 >> 0x10);
                      bVar1 = (byte)(uVar26 >> 0x18);
                      pcVar11 = (char *)((int)puVar6 +
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
                                        (int)puVar27));
                      goto joined_r0x0180ac58;
                    }
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  } while (puVar6 < puVar24);
                }
                goto LAB_0180af78;
              }
              uVar26 = uVar26 ^ param_4[1];
              bVar2 = (byte)uVar26;
              bVar3 = (byte)(uVar26 >> 8);
              bVar4 = (byte)(uVar26 >> 0x10);
              bVar1 = (byte)(uVar26 >> 0x18);
              pcVar11 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar6 = puVar27;
LAB_0180af78:
              if (puVar6 < (uint *)((int)param_5 + -1)) {
                if ((short)*puVar8 == (short)*puVar6) {
                  puVar8 = (uint *)((int)puVar8 + 2);
                  puVar6 = (uint *)((int)puVar6 + 2);
                }
              }
              if ((puVar6 < param_5) && ((char)*puVar8 == (char)*puVar6)) {
                puVar6 = (uint *)((int)puVar6 + 1);
              }
              pcVar11 = (char *)((int)puVar6 - (int)puVar27);
            }
joined_r0x0180ac58:
            pcVar11 = pcVar11 + 4;
            if (local_38 < pcVar11) {
              iVar10 = iVar23 * 8;
              *(uint *)(param_1 + iVar23 * 8) = (1 - param_7) + uVar15;
              iVar23 = iVar23 + 1;
              *(char **)(param_1 + iVar10 + 4) = pcVar11;
              if (param_5 == (uint *)((int)param_4 + (int)pcVar11) || pcVar20 < pcVar11)
              goto LAB_0180ae9c;
              local_38 = pcVar11;
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (param_7 + 3 != uVar15);
    }
    else {
      iVar23 = 0;
    }
    *(uint *)(iVar25 + uVar19 * 4) = uVar18;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)&DAT_00000001;
    }
    local_60 = (char *)(uVar18 + 9);
    local_4c = puVar13 + (uVar18 & uVar12) * 2;
    local_50 = puVar13 + (uVar18 & uVar12) * 2 + 1;
    if (puVar21 <= puVar9) {
      pcVar20 = (char *)0x0;
      local_34 = 1 << (uVar5 & 0xff);
      pcVar11 = (char *)0x0;
      puVar8 = (uint *)((int)param_5 + -3);
      do {
        if (pcVar11 < pcVar20) {
          pcVar16 = pcVar11;
        }
        else {
          pcVar16 = pcVar20;
        }
        puVar24 = (uint *)((int)param_4 + (int)pcVar16);
        puVar27 = (uint *)((int)puVar9 + (int)(pcVar16 + iVar22));
        if (puVar24 < puVar8) {
          if (*(uint *)((int)puVar9 + (int)(pcVar16 + iVar22)) ==
              *(uint *)((int)param_4 + (int)pcVar16)) {
            puVar6 = puVar24 + 1;
            puVar27 = puVar27 + 1;
            if (puVar6 < puVar8) {
              do {
                if (*puVar27 != *puVar6) {
                  uVar19 = *puVar27 ^ *puVar6;
                  bVar2 = (byte)uVar19;
                  bVar3 = (byte)(uVar19 >> 8);
                  bVar4 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar17 = (char *)((int)puVar6 +
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
                                    (int)puVar24));
                  goto LAB_0180ad20;
                }
                puVar6 = puVar6 + 1;
                puVar27 = puVar27 + 1;
              } while (puVar6 < puVar8);
            }
            goto LAB_0180ae24;
          }
          uVar19 = *(uint *)((int)puVar9 + (int)(pcVar16 + iVar22)) ^
                   *(uint *)((int)param_4 + (int)pcVar16);
          bVar2 = (byte)uVar19;
          bVar3 = (byte)(uVar19 >> 8);
          bVar4 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar6 = puVar24;
LAB_0180ae24:
          if (puVar6 < (uint *)((int)param_5 + -1)) {
            if ((short)*puVar27 == (short)*puVar6) {
              puVar6 = (uint *)((int)puVar6 + 2);
              puVar27 = (uint *)((int)puVar27 + 2);
            }
          }
          if ((puVar6 < param_5) && ((char)*puVar27 == (char)*puVar6)) {
            puVar6 = (uint *)((int)puVar6 + 1);
          }
          pcVar17 = (char *)((int)puVar6 - (int)puVar24);
        }
LAB_0180ad20:
        pcVar16 = pcVar16 + (int)pcVar17;
        if (local_38 < pcVar16) {
          if (local_60 + -(int)puVar9 < pcVar16) {
            local_60 = pcVar16 + (int)puVar9;
          }
          *(uint *)(param_1 + iVar23 * 8) = (uVar18 + 3) - (int)puVar9;
          iVar25 = iVar23 * 8;
          iVar23 = iVar23 + 1;
          *(char **)(param_1 + iVar25 + 4) = pcVar16;
          if ((char *)0x1000 < pcVar16 || param_5 == (uint *)((int)param_4 + (int)pcVar16)) break;
          local_38 = pcVar16;
        }
        puVar27 = puVar13 + (uVar12 & (uint)puVar9) * 2;
        if (*(byte *)((int)puVar9 + (int)(pcVar16 + iVar22)) <
            *(byte *)((int)param_4 + (int)pcVar16)) {
          *local_4c = (uint)puVar9;
          if (puVar9 <= local_58) {
            local_4c = &local_30;
            break;
          }
          puVar9 = (uint *)puVar27[1];
          local_4c = puVar27 + 1;
          pcVar11 = pcVar16;
        }
        else {
          *local_50 = (uint)puVar9;
          if (puVar9 <= local_58) {
            local_50 = &local_30;
            break;
          }
          puVar9 = (uint *)puVar13[(uVar12 & (uint)puVar9) * 2];
          pcVar20 = pcVar16;
          local_50 = puVar27;
        }
        local_34 = local_34 + -1;
      } while (puVar21 <= puVar9 && local_34 != 0);
    }
    *local_50 = 0;
    *local_4c = 0;
    *(char **)(param_2 + 0x1c) = local_60 + -8;
  }
LAB_0180ae9c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar23;
}

