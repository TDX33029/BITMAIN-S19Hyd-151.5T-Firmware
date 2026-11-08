// FUN_0180be24 @ 0180be24 size=2208 calls_out=2 calls_in=0
// strings: 

int FUN_0180be24(int *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,int *param_6,
                uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  bool bVar28;
  char *local_60;
  uint local_5c;
  uint *local_54;
  uint *local_50;
  char *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  uVar23 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_018ddaf8;
  iVar14 = *(int *)(param_2 + 4);
  puVar6 = (uint *)(iVar14 + uVar23);
  if (param_4 < puVar6) {
    iVar25 = 0;
    goto LAB_0180c2c4;
  }
  uVar22 = (int)param_4 - iVar14;
  if (uVar23 < uVar22) {
    while( true ) {
      iVar25 = FUN_01809590(param_2,puVar6,param_5,uVar22,0);
      uVar23 = uVar23 + iVar25;
      if (uVar22 <= uVar23) break;
      puVar6 = (uint *)(iVar14 + uVar23);
    }
  }
  *(uint *)(param_2 + 0x1c) = uVar22;
  iVar5 = *(int *)(param_2 + 0x5c);
  uVar18 = *param_4 * -0x61c8864f >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
  uVar7 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
  pcVar24 = (char *)0xfff;
  if (*(char **)(param_2 + 0xcc) < (char *)0xfff) {
    pcVar24 = *(char **)(param_2 + 0xcc);
  }
  uVar15 = *(uint *)(param_2 + 100);
  local_5c = uVar15;
  if (uVar22 <= uVar7) {
    local_5c = 0;
  }
  uVar11 = *(uint *)(iVar5 + uVar18 * 4);
  if (uVar7 < uVar22) {
    local_5c = uVar22 - uVar7;
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar16 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
  bVar28 = uVar16 < uVar22 - uVar8;
  if (bVar28) {
    uVar23 = uVar22 - uVar16;
  }
  if (!bVar28) {
    uVar23 = uVar8;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar23 = uVar8;
  }
  uVar16 = *(uint *)(param_2 + 0xc4);
  local_38 = (char *)(param_8 + -1);
  if (param_7 < param_7 + 3) {
    iVar17 = *(int *)(param_2 + 0xc);
    iVar26 = 0;
    uVar8 = param_7;
    do {
      if (uVar8 == 3) {
        iVar25 = *param_6 + -1;
      }
      else {
        iVar25 = param_6[uVar8];
      }
      if (iVar25 - 1U < uVar22 - iVar17) {
        bVar28 = uVar23 == uVar22 - iVar25;
        if (uVar23 <= uVar22 - iVar25) {
          bVar28 = *(int *)((int)param_4 - iVar25) * 0x100 == *param_4 * 0x100;
        }
        if (bVar28) {
          puVar12 = (uint *)((int)param_4 + 3);
          puVar27 = (uint *)((int)param_5 + -3);
          puVar6 = (uint *)((int)param_4 + (3 - iVar25));
          if (puVar12 < puVar27) {
            uVar9 = *(uint *)((int)param_4 + (3 - iVar25));
            if (uVar9 == *(uint *)((int)param_4 + 3)) {
              puVar10 = (uint *)((int)param_4 + 7);
              puVar6 = puVar6 + 1;
              if (puVar10 < puVar27) {
                do {
                  if (*puVar6 != *puVar10) {
                    uVar9 = *puVar10 ^ *puVar6;
                    bVar2 = (byte)uVar9;
                    bVar3 = (byte)(uVar9 >> 8);
                    bVar4 = (byte)(uVar9 >> 0x10);
                    bVar1 = (byte)(uVar9 >> 0x18);
                    pcVar13 = (char *)((int)puVar10 +
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
                                                                  )) >> 3) - (int)puVar12) + 3);
                    if (local_38 < pcVar13) goto LAB_0180c404;
                    goto LAB_0180c078;
                  }
                  puVar10 = puVar10 + 1;
                  puVar6 = puVar6 + 1;
                } while (puVar10 < puVar27);
              }
              goto LAB_0180c39c;
            }
            uVar9 = uVar9 ^ *(uint *)((int)param_4 + 3);
            bVar2 = (byte)uVar9;
            bVar3 = (byte)(uVar9 >> 8);
            bVar4 = (byte)(uVar9 >> 0x10);
            bVar1 = (byte)(uVar9 >> 0x18);
            uVar9 = (uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                   bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                                 bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                               bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                                  (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                   bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                 bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                                  (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                   bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                 bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                                  (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                   bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                                 bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                               bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3;
          }
          else {
            puVar10 = puVar12;
LAB_0180c39c:
            if (puVar10 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar6 == (short)*puVar10) {
                puVar6 = (uint *)((int)puVar6 + 2);
                puVar10 = (uint *)((int)puVar10 + 2);
              }
            }
            if ((puVar10 < param_5) && ((char)*puVar6 == (char)*puVar10)) {
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            uVar9 = (int)puVar10 - (int)puVar12;
          }
          pcVar13 = (char *)(uVar9 + 3);
          if (local_38 < pcVar13) {
LAB_0180c404:
            param_1[iVar26 * 2] = (1 - param_7) + uVar8;
            iVar25 = iVar26 + 1;
            param_1[iVar26 * 2 + 1] = (int)pcVar13;
            if (param_5 == (uint *)((int)param_4 + (int)pcVar13) || pcVar24 < pcVar13)
            goto LAB_0180c2c4;
            iVar26 = iVar25;
            local_38 = pcVar13;
          }
        }
      }
LAB_0180c078:
      uVar8 = uVar8 + 1;
      iVar25 = iVar26;
    } while (param_7 + 3 != uVar8);
  }
  else {
    iVar25 = 0;
  }
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  if (local_38 < (char *)0x3) {
    uVar21 = *param_4;
    uVar9 = *param_3;
    uVar8 = 0x20 - *(int *)(param_2 + 0x20);
    iVar26 = *(int *)(param_2 + 0x60);
    if (uVar9 < uVar22) {
      do {
        *(uint *)(iVar26 + ((uint)(*(int *)(iVar14 + uVar9) * 0x35a7bd00) >> (uVar8 & 0xff)) * 4) =
             uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar22 != uVar9);
    }
    *param_3 = uVar22;
    uVar8 = *(uint *)(iVar26 + (uVar21 * 0x35a7bd00 >> (uVar8 & 0xff)) * 4);
    bVar28 = uVar8 <= uVar23;
    if (uVar23 <= uVar8) {
      bVar28 = 0x3ffff < uVar22 - uVar8;
    }
    if (!bVar28) {
      puVar12 = (uint *)(iVar14 + uVar8);
      puVar6 = param_4;
      if (param_4 < (uint *)((int)param_5 + -3)) {
        if (*(uint *)(iVar14 + uVar8) == *param_4) {
          do {
            puVar6 = puVar6 + 1;
            puVar12 = puVar12 + 1;
            if ((uint *)((int)param_5 + -3) <= puVar6) {
              if (((uint *)((int)param_5 + -1) <= puVar6) || ((short)*puVar12 != (short)*puVar6))
              goto LAB_0180c6a0;
              goto LAB_0180c6b4;
            }
          } while (*puVar12 == *puVar6);
          uVar9 = *puVar12 ^ *puVar6;
          bVar2 = (byte)uVar9;
          bVar3 = (byte)(uVar9 >> 8);
          bVar4 = (byte)(uVar9 >> 0x10);
          bVar1 = (byte)(uVar9 >> 0x18);
          pcVar13 = (char *)((int)puVar6 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)param_4));
        }
        else {
          uVar9 = *(uint *)(iVar14 + uVar8) ^ *param_4;
          bVar2 = (byte)uVar9;
          bVar3 = (byte)(uVar9 >> 8);
          bVar4 = (byte)(uVar9 >> 0x10);
          bVar1 = (byte)(uVar9 >> 0x18);
          pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
      }
      else {
        if (param_4 < (uint *)((int)param_5 + -1)) {
          if ((short)*param_4 == *(short *)(iVar14 + uVar8)) {
LAB_0180c6b4:
            puVar6 = (uint *)((int)puVar6 + 2);
            puVar12 = (uint *)((int)puVar12 + 2);
LAB_0180c6a0:
            if (puVar6 < param_5) goto LAB_0180c65c;
          }
          else {
            if (param_5 <= param_4) goto LAB_0180c0ac;
LAB_0180c65c:
            if ((char)*puVar12 == (char)*puVar6) goto LAB_0180c514;
          }
        }
        else {
          if ((param_5 <= param_4) || ((char)*param_4 != *(char *)(iVar14 + uVar8)))
          goto LAB_0180c0ac;
LAB_0180c514:
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        pcVar13 = (char *)((int)puVar6 - (int)param_4);
      }
      if ((char *)0x2 < pcVar13) {
        *param_1 = (uVar22 - uVar8) + 3;
        param_1[1] = (int)pcVar13;
        if (param_5 == (uint *)((int)param_4 + (int)pcVar13) || pcVar24 < pcVar13) {
          iVar25 = 1;
          *(uint *)(param_2 + 0x1c) = uVar22 + 1;
          goto LAB_0180c2c4;
        }
        iVar25 = 1;
        local_38 = pcVar13;
      }
    }
  }
LAB_0180c0ac:
  *(uint *)(iVar5 + uVar18 * 4) = uVar22;
  local_60 = (char *)(uVar22 + 9);
  iVar5 = (uVar22 & uVar7) * 8;
  local_50 = (uint *)(uVar15 + iVar5);
  local_54 = (uint *)(uVar15 + iVar5 + 4);
  if (uVar23 <= uVar11) {
    pcVar24 = (char *)0x0;
    pcVar13 = (char *)0x0;
    local_34 = 1 << (uVar16 & 0xff);
    puVar6 = (uint *)((int)param_5 + -3);
    iVar5 = iVar25;
    do {
      if (pcVar13 < pcVar24) {
        pcVar19 = pcVar13;
      }
      else {
        pcVar19 = pcVar24;
      }
      iVar26 = iVar14 + uVar11;
      puVar27 = (uint *)((int)param_4 + (int)pcVar19);
      puVar12 = (uint *)(pcVar19 + iVar26);
      if (puVar27 < puVar6) {
        if (*(uint *)(pcVar19 + iVar26) == *(uint *)((int)param_4 + (int)pcVar19)) {
          puVar10 = puVar27 + 1;
          puVar12 = puVar12 + 1;
          if (puVar10 < puVar6) {
            do {
              if (*puVar12 != *puVar10) {
                uVar18 = *puVar12 ^ *puVar10;
                bVar2 = (byte)uVar18;
                bVar3 = (byte)(uVar18 >> 8);
                bVar4 = (byte)(uVar18 >> 0x10);
                bVar1 = (byte)(uVar18 >> 0x18);
                pcVar20 = (char *)((int)puVar10 +
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
                                                                  )) >> 3) - (int)puVar27));
                goto LAB_0180c148;
              }
              puVar10 = puVar10 + 1;
              puVar12 = puVar12 + 1;
            } while (puVar10 < puVar6);
          }
          goto LAB_0180c24c;
        }
        uVar18 = *(uint *)(pcVar19 + iVar26) ^ *(uint *)((int)param_4 + (int)pcVar19);
        bVar2 = (byte)uVar18;
        bVar3 = (byte)(uVar18 >> 8);
        bVar4 = (byte)(uVar18 >> 0x10);
        bVar1 = (byte)(uVar18 >> 0x18);
        pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
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
        puVar10 = puVar27;
LAB_0180c24c:
        if (puVar10 < (uint *)((int)param_5 + -1)) {
          if ((short)*puVar12 == (short)*puVar10) {
            puVar10 = (uint *)((int)puVar10 + 2);
            puVar12 = (uint *)((int)puVar12 + 2);
          }
        }
        if ((puVar10 < param_5) && ((char)*puVar12 == (char)*puVar10)) {
          puVar10 = (uint *)((int)puVar10 + 1);
        }
        pcVar20 = (char *)((int)puVar10 - (int)puVar27);
      }
LAB_0180c148:
      pcVar19 = pcVar19 + (int)pcVar20;
      iVar25 = iVar5;
      if (local_38 < pcVar19) {
        if (local_60 + -uVar11 < pcVar19) {
          local_60 = pcVar19 + uVar11;
        }
        param_1[iVar5 * 2] = (uVar22 + 3) - uVar11;
        iVar25 = iVar5 + 1;
        param_1[iVar5 * 2 + 1] = (int)pcVar19;
        if ((char *)0x1000 < pcVar19 || param_5 == (uint *)((int)param_4 + (int)pcVar19)) break;
        local_38 = pcVar19;
      }
      puVar12 = (uint *)(uVar15 + (uVar7 & uVar11) * 8);
      if ((byte)pcVar19[iVar26] < *(byte *)((int)param_4 + (int)pcVar19)) {
        *local_50 = uVar11;
        if (uVar11 <= local_5c) {
          local_50 = &local_30;
          break;
        }
        uVar11 = puVar12[1];
        local_50 = puVar12 + 1;
        pcVar13 = pcVar19;
      }
      else {
        *local_54 = uVar11;
        if (uVar11 <= local_5c) {
          local_54 = &local_30;
          break;
        }
        uVar11 = *(uint *)(uVar15 + (uVar7 & uVar11) * 8);
        pcVar24 = pcVar19;
        local_54 = puVar12;
      }
      local_34 = local_34 + -1;
      iVar5 = iVar25;
    } while (uVar23 <= uVar11 && local_34 != 0);
  }
  *local_54 = 0;
  *local_50 = 0;
  *(char **)(param_2 + 0x1c) = local_60 + -8;
LAB_0180c2c4:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar25;
}

