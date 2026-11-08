// FUN_017d1aa4 @ 017d1aa4 size=1416 calls_out=0 calls_in=2
// strings: 

char * FUN_017d1aa4(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint unaff_r10;
  uint uVar23;
  char *pcVar24;
  uint *puVar25;
  uint uVar26;
  bool bVar27;
  uint *local_4c;
  char *local_2c;
  
  iVar22 = *(int *)(param_1 + 4);
  iVar17 = *(int *)(param_1 + 8);
  uVar19 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar8 = *(uint *)(param_1 + 0x10);
  uVar13 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar23 = (int)param_2 - iVar22;
  iVar15 = *(int *)(param_1 + 100);
  bVar27 = uVar19 < uVar23 - uVar8;
  uVar18 = *(uint *)(param_1 + 0xc);
  if (bVar27) {
    unaff_r10 = uVar23 - uVar19;
  }
  if (!bVar27) {
    unaff_r10 = uVar8;
  }
  uVar19 = uVar13 - 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r10 = uVar8;
  }
  if (uVar13 < uVar23) {
    uVar13 = uVar23 - uVar13;
  }
  else {
    uVar13 = 0;
  }
  uVar14 = *(uint *)(param_1 + 0x1c);
  uVar26 = 0x20 - *(int *)(param_1 + 0xc0);
  uVar8 = *(uint *)(param_1 + 0xc4);
  iVar9 = *(int *)(param_1 + 0x5c);
  if (uVar14 < uVar23) {
    uVar1 = (uint)(*(int *)(iVar22 + uVar14) * -0x61c8864f) >> (uVar26 & 0xff);
    iVar21 = *(int *)(param_1 + 0xdc);
    *(undefined4 *)(iVar15 + (uVar19 & uVar14) * 4) = *(undefined4 *)(iVar9 + uVar1 * 4);
    *(uint *)(iVar9 + uVar1 * 4) = uVar14;
    if ((iVar21 == 0) && (uVar14 = uVar14 + 1, uVar14 < uVar23)) {
      do {
        uVar1 = (uint)(*(int *)(iVar22 + uVar14) * -0x61c8864f) >> (uVar26 & 0xff);
        *(undefined4 *)(iVar15 + (uVar19 & uVar14) * 4) = *(undefined4 *)(iVar9 + uVar1 * 4);
        *(uint *)(iVar9 + uVar1 * 4) = uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar23 != uVar14);
    }
  }
  *(uint *)(param_1 + 0x1c) = uVar23;
  uVar14 = *(uint *)(iVar9 + (*param_2 * -0x61c8864f >> (uVar26 & 0xff)) * 4);
  if (uVar14 < unaff_r10) {
    local_2c = (char *)0x3;
  }
  else {
    iVar9 = 1 << (uVar8 & 0xff);
    puVar10 = (uint *)(iVar22 + uVar18);
    puVar6 = (uint *)((int)param_3 + -3);
    local_2c = (char *)0x3;
    puVar7 = param_2 + 1;
    do {
      if (uVar14 < uVar18) {
        iVar21 = iVar17 + uVar14;
        if (*(uint *)(iVar17 + uVar14) != *param_2) goto LAB_017d1c20;
        puVar16 = (uint *)(iVar21 + 4);
        puVar11 = (uint *)((int)puVar7 + ((int)(iVar17 + uVar18) - (int)puVar16));
        if (param_3 < puVar11) {
          puVar11 = param_3;
        }
        puVar20 = (uint *)((int)puVar11 + -3);
        if (puVar7 < puVar20) {
          if (*(uint *)(iVar21 + 4) == param_2[1]) {
            puVar25 = param_2 + 2;
            local_4c = (uint *)(iVar21 + 8);
            if (puVar25 < puVar20) {
              do {
                if (*local_4c != *puVar25) {
                  uVar8 = *local_4c ^ *puVar25;
                  bVar3 = (byte)uVar8;
                  bVar4 = (byte)(uVar8 >> 8);
                  bVar5 = (byte)(uVar8 >> 0x10);
                  bVar2 = (byte)(uVar8 >> 0x18);
                  pcVar24 = (char *)((int)puVar25 +
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
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar7));
                  goto joined_r0x017d1dc0;
                }
                puVar25 = puVar25 + 1;
                local_4c = local_4c + 1;
              } while (puVar25 < puVar20);
            }
            goto LAB_017d1d58;
          }
          uVar8 = *(uint *)(iVar21 + 4) ^ param_2[1];
          bVar3 = (byte)uVar8;
          bVar4 = (byte)(uVar8 >> 8);
          bVar5 = (byte)(uVar8 >> 0x10);
          bVar2 = (byte)(uVar8 >> 0x18);
          pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar25 = puVar7;
          local_4c = puVar16;
LAB_017d1d58:
          if (puVar25 < (uint *)((int)puVar11 + -1)) {
            if ((short)*local_4c == (short)*puVar25) {
              local_4c = (uint *)((int)local_4c + 2);
              puVar25 = (uint *)((int)puVar25 + 2);
            }
          }
          if ((puVar25 < puVar11) && ((char)*local_4c == (char)*puVar25)) {
            puVar25 = (uint *)((int)puVar25 + 1);
          }
          pcVar24 = (char *)((int)puVar25 - (int)puVar7);
        }
joined_r0x017d1dc0:
        if ((char *)(iVar17 + uVar18) == (char *)((int)puVar16 + (int)pcVar24)) {
          puVar11 = (uint *)((int)puVar7 + (int)pcVar24);
          if (puVar11 < puVar6) {
            if (*puVar10 == *(uint *)((int)puVar7 + (int)pcVar24)) {
              puVar16 = puVar11 + 1;
              local_4c = puVar10 + 1;
              if (puVar16 < puVar6) {
                do {
                  if (*local_4c != *puVar16) {
                    uVar8 = *local_4c ^ *puVar16;
                    bVar3 = (byte)uVar8;
                    bVar4 = (byte)(uVar8 >> 8);
                    bVar5 = (byte)(uVar8 >> 0x10);
                    bVar2 = (byte)(uVar8 >> 0x18);
                    pcVar12 = (char *)((int)puVar16 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar11));
                    goto LAB_017d1e44;
                  }
                  puVar16 = puVar16 + 1;
                  local_4c = local_4c + 1;
                } while (puVar16 < puVar6);
              }
              goto LAB_017d1de4;
            }
            uVar8 = *puVar10 ^ *(uint *)((int)puVar7 + (int)pcVar24);
            bVar3 = (byte)uVar8;
            bVar4 = (byte)(uVar8 >> 8);
            bVar5 = (byte)(uVar8 >> 0x10);
            bVar2 = (byte)(uVar8 >> 0x18);
            pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
          else {
            puVar16 = puVar11;
            local_4c = puVar10;
LAB_017d1de4:
            if (puVar16 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_4c == (short)*puVar16) {
                local_4c = (uint *)((int)local_4c + 2);
                puVar16 = (uint *)((int)puVar16 + 2);
              }
            }
            if ((puVar16 < param_3) && ((char)*local_4c == (char)*puVar16)) {
              puVar16 = (uint *)((int)puVar16 + 1);
            }
            pcVar12 = (char *)((int)puVar16 - (int)puVar11);
          }
LAB_017d1e44:
          pcVar24 = pcVar24 + (int)pcVar12;
        }
        pcVar24 = pcVar24 + 4;
LAB_017d1cd4:
        if (local_2c < pcVar24) {
          *param_4 = (uVar23 + 3) - uVar14;
          local_2c = pcVar24;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar24)) {
            return pcVar24;
          }
        }
      }
      else {
        puVar11 = (uint *)(iVar22 + uVar14);
        if (*(int *)((int)puVar11 + (int)(local_2c + -3)) ==
            *(int *)((int)param_2 + (int)(local_2c + -3))) {
          if (param_2 < puVar6) {
            if (*(uint *)(iVar22 + uVar14) == *param_2) {
              puVar16 = param_2 + 1;
              puVar11 = puVar11 + 1;
              if (puVar6 <= puVar16) goto LAB_017d1e50;
              uVar8 = *puVar16;
              uVar26 = *puVar11;
              if (uVar26 == uVar8) {
                do {
                  puVar16 = puVar16 + 1;
                  puVar11 = puVar11 + 1;
                  if (puVar6 <= puVar16) goto LAB_017d1e50;
                  uVar8 = *puVar16;
                  uVar26 = *puVar11;
                } while (uVar26 == uVar8);
              }
              uVar26 = uVar26 ^ uVar8;
              bVar3 = (byte)uVar26;
              bVar4 = (byte)(uVar26 >> 8);
              bVar5 = (byte)(uVar26 >> 0x10);
              bVar2 = (byte)(uVar26 >> 0x18);
              pcVar24 = (char *)((int)puVar16 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar8 = *param_2 ^ *(uint *)(iVar22 + uVar14);
              bVar3 = (byte)uVar8;
              bVar4 = (byte)(uVar8 >> 8);
              bVar5 = (byte)(uVar8 >> 0x10);
              bVar2 = (byte)(uVar8 >> 0x18);
              pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
            }
          }
          else {
            puVar16 = param_2;
LAB_017d1e50:
            if (puVar16 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar11 == (short)*puVar16) {
                puVar16 = (uint *)((int)puVar16 + 2);
                puVar11 = (uint *)((int)puVar11 + 2);
              }
            }
            if ((puVar16 < param_3) && ((char)*puVar11 == (char)*puVar16)) {
              puVar16 = (uint *)((int)puVar16 + 1);
            }
            pcVar24 = (char *)((int)puVar16 - (int)param_2);
          }
          goto LAB_017d1cd4;
        }
      }
LAB_017d1c20:
      if (uVar14 <= uVar13) {
        return local_2c;
      }
      iVar9 = iVar9 + -1;
      uVar14 = *(uint *)(iVar15 + (uVar14 & uVar19) * 4);
    } while (unaff_r10 <= uVar14 && iVar9 != 0);
  }
  return local_2c;
}

