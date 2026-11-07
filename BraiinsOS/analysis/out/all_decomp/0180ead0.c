// FUN_0180ead0 @ 0180ead0 size=4000 calls_out=2 calls_in=0
// strings: 

int FUN_0180ead0(int *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,int *param_6,
                uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  byte *unaff_r8;
  byte *pbVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  byte *pbVar32;
  bool bVar33;
  uint *local_88;
  byte *local_6c;
  uint *local_68;
  byte *local_5c;
  uint *local_50;
  uint *local_4c;
  int local_44;
  byte *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  uVar25 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_018ddaf8;
  pbVar18 = *(byte **)(param_2 + 4);
  puVar10 = (uint *)(pbVar18 + uVar25);
  if (param_4 < puVar10) {
    local_44 = 0;
  }
  else {
    uVar23 = (int)param_4 - (int)pbVar18;
    if (uVar25 < uVar23) {
      while( true ) {
        iVar5 = FUN_01809590(param_2,puVar10,param_5,uVar23,1);
        uVar25 = uVar25 + iVar5;
        unaff_r8 = pbVar18;
        if (uVar23 <= uVar25) break;
        puVar10 = (uint *)(pbVar18 + uVar25);
      }
    }
    *(uint *)(param_2 + 0x1c) = uVar23;
    pbVar6 = *(byte **)(param_2 + 0xc);
    iVar30 = *(int *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0x5c);
    uVar25 = *param_4 * -0x61c8864f >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    uVar11 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    pbVar28 = (byte *)0xfff;
    if (*(byte **)(param_2 + 0xcc) < (byte *)0xfff) {
      pbVar28 = *(byte **)(param_2 + 0xcc);
    }
    iVar19 = *(int *)(param_2 + 100);
    pbVar20 = pbVar6 + iVar30;
    pbVar15 = *(byte **)(iVar5 + uVar25 * 4);
    puVar10 = (uint *)(pbVar18 + (int)pbVar6);
    if (uVar11 < uVar23) {
      local_5c = (byte *)(uVar23 - uVar11);
    }
    else {
      local_5c = (byte *)0x0;
    }
    pbVar12 = *(byte **)(param_2 + 0x10);
    uVar21 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
    bVar33 = uVar21 < uVar23 - (int)pbVar12;
    if (bVar33) {
      unaff_r8 = (byte *)(uVar23 - uVar21);
    }
    if (!bVar33) {
      unaff_r8 = pbVar12;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      unaff_r8 = pbVar12;
    }
    uVar21 = *(uint *)(param_2 + 0xc4);
    local_38 = (byte *)(param_8 + -1);
    if (param_7 < param_7 + 3) {
      local_44 = 0;
      uVar22 = param_7;
      do {
        if (uVar22 == 3) {
          iVar16 = *param_6 + -1;
        }
        else {
          iVar16 = param_6[uVar22];
        }
        pbVar12 = (byte *)(uVar23 - iVar16);
        if (iVar16 - 1U < uVar23 - (int)pbVar6) {
          bVar33 = unaff_r8 == pbVar12;
          if (unaff_r8 <= pbVar12) {
            bVar33 = *(int *)((int)param_4 - iVar16) * 0x100 == *param_4 * 0x100;
          }
          if (!bVar33) goto LAB_0180ed54;
          puVar29 = (uint *)((int)param_5 + -3);
          puVar17 = (uint *)((int)param_4 + 3);
          puVar7 = (uint *)((int)param_4 + (3 - iVar16));
          if (puVar17 < puVar29) {
            uVar31 = *(uint *)((int)param_4 + (3 - iVar16));
            if (uVar31 == *(uint *)((int)param_4 + 3)) {
              puVar13 = (uint *)((int)param_4 + 7);
              puVar7 = puVar7 + 1;
              if (puVar13 < puVar29) {
                do {
                  if (*puVar7 != *puVar13) {
                    uVar31 = *puVar13 ^ *puVar7;
                    bVar2 = (byte)uVar31;
                    bVar3 = (byte)(uVar31 >> 8);
                    bVar4 = (byte)(uVar31 >> 0x10);
                    bVar1 = (byte)(uVar31 >> 0x18);
                    pbVar12 = (byte *)((int)puVar13 +
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
                                                                  )) >> 3) - (int)puVar17) + 3);
                    goto joined_r0x0180ed50;
                  }
                  puVar13 = puVar13 + 1;
                  puVar7 = puVar7 + 1;
                } while (puVar13 < puVar29);
              }
              goto LAB_0180f3b0;
            }
            uVar31 = uVar31 ^ *(uint *)((int)param_4 + 3);
            bVar2 = (byte)uVar31;
            bVar3 = (byte)(uVar31 >> 8);
            bVar4 = (byte)(uVar31 >> 0x10);
            bVar1 = (byte)(uVar31 >> 0x18);
            pbVar12 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar13 = puVar17;
LAB_0180f3b0:
            if (puVar13 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar7 == (short)*puVar13) {
                puVar7 = (uint *)((int)puVar7 + 2);
                puVar13 = (uint *)((int)puVar13 + 2);
              }
            }
            if ((puVar13 < param_5) && ((byte)*puVar7 == (byte)*puVar13)) {
              puVar13 = (uint *)((int)puVar13 + 1);
            }
            pbVar12 = (byte *)((int)puVar13 - (int)puVar17);
          }
LAB_0180f3ec:
          pbVar12 = pbVar12 + 3;
joined_r0x0180ed50:
          if (local_38 < pbVar12) {
            param_1[local_44 * 2] = (1 - param_7) + uVar22;
            iVar16 = local_44 + 1;
            param_1[local_44 * 2 + 1] = (int)pbVar12;
            local_44 = iVar16;
            if (param_5 == (uint *)((int)param_4 + (int)pbVar12) || pbVar28 < pbVar12)
            goto LAB_0180f2e0;
            local_38 = pbVar12;
          }
        }
        else if ((!(uVar23 - (int)unaff_r8 <= iVar16 - 1U ||
                   pbVar6 + iVar16 + (-1 - uVar23) < (byte *)0x3)) &&
                (*(int *)(pbVar12 + iVar30) * 0x100 == *param_4 * 0x100)) {
          puVar29 = (uint *)(pbVar12 + iVar30 + 3);
          puVar17 = (uint *)((int)param_4 + 3);
          puVar7 = (uint *)((int)puVar17 + ((int)pbVar20 - (int)puVar29));
          if (param_5 < puVar7) {
            puVar7 = param_5;
          }
          puVar13 = (uint *)((int)puVar7 + -3);
          if (puVar17 < puVar13) {
            if (*(uint *)(pbVar12 + iVar30 + 3) == *(uint *)((int)param_4 + 3)) {
              local_88 = (uint *)(pbVar12 + iVar30 + 7);
              puVar27 = (uint *)((int)param_4 + 7);
              if (puVar27 < puVar13) {
                do {
                  if (*local_88 != *puVar27) {
                    uVar31 = *puVar27 ^ *local_88;
                    bVar2 = (byte)uVar31;
                    bVar3 = (byte)(uVar31 >> 8);
                    bVar4 = (byte)(uVar31 >> 0x10);
                    bVar1 = (byte)(uVar31 >> 0x18);
                    pbVar12 = (byte *)((int)puVar27 +
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
                    goto LAB_0180f600;
                  }
                  puVar27 = puVar27 + 1;
                  local_88 = local_88 + 1;
                } while (puVar27 < puVar13);
              }
              goto LAB_0180f5ac;
            }
            uVar31 = *(uint *)((int)param_4 + 3) ^ *(uint *)(pbVar12 + iVar30 + 3);
            bVar2 = (byte)uVar31;
            bVar3 = (byte)(uVar31 >> 8);
            bVar4 = (byte)(uVar31 >> 0x10);
            bVar1 = (byte)(uVar31 >> 0x18);
            pbVar12 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar27 = puVar17;
            local_88 = puVar29;
LAB_0180f5ac:
            if (puVar27 < (uint *)((int)puVar7 + -1)) {
              if ((short)*local_88 == (short)*puVar27) {
                local_88 = (uint *)((int)local_88 + 2);
                puVar27 = (uint *)((int)puVar27 + 2);
              }
            }
            if ((puVar27 < puVar7) && ((byte)*local_88 == (byte)*puVar27)) {
              puVar27 = (uint *)((int)puVar27 + 1);
            }
            pbVar12 = (byte *)((int)puVar27 - (int)puVar17);
          }
LAB_0180f600:
          if (pbVar20 != (byte *)((int)puVar29 + (int)pbVar12)) goto LAB_0180f3ec;
          puVar29 = (uint *)((int)puVar17 + (int)pbVar12);
          puVar7 = (uint *)((int)param_5 + -3);
          if (puVar29 < puVar7) {
            if (*puVar10 == *(uint *)((int)puVar17 + (int)pbVar12)) {
              puVar17 = puVar29 + 1;
              local_88 = puVar10 + 1;
              if (puVar17 < puVar7) {
                do {
                  if (*local_88 != *puVar17) {
                    uVar31 = *local_88 ^ *puVar17;
                    bVar2 = (byte)uVar31;
                    bVar3 = (byte)(uVar31 >> 8);
                    bVar4 = (byte)(uVar31 >> 0x10);
                    bVar1 = (byte)(uVar31 >> 0x18);
                    pbVar8 = (byte *)((int)puVar17 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                       bVar2 >> 1 & 1) << 1 |
                                                                      bVar2 >> 2 & 1) << 1 |
                                                                     bVar2 >> 3 & 1) << 1 |
                                                                    bVar2 >> 4 & 1) << 1 |
                                                                   bVar2 >> 5 & 1) << 1 |
                                                                  bVar2 >> 6 & 1) << 1 | bVar2 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                 bVar3 >> 1 & 1) <<
                                                                                 1 | bVar3 >> 2 & 1)
                                                                                << 1 | bVar3 >> 3 &
                                                                                       1) << 1 |
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
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3) -
                                     (int)puVar29));
                    goto LAB_0180f684;
                  }
                  puVar17 = puVar17 + 1;
                  local_88 = local_88 + 1;
                } while (puVar17 < puVar7);
              }
              goto LAB_0180f62c;
            }
            uVar31 = *(uint *)((int)puVar17 + (int)pbVar12) ^ *puVar10;
            bVar2 = (byte)uVar31;
            bVar3 = (byte)(uVar31 >> 8);
            bVar4 = (byte)(uVar31 >> 0x10);
            bVar1 = (byte)(uVar31 >> 0x18);
            pbVar8 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          else {
            puVar17 = puVar29;
            local_88 = puVar10;
LAB_0180f62c:
            if (puVar17 < (uint *)((int)param_5 + -1)) {
              if ((short)*local_88 == (short)*puVar17) {
                local_88 = (uint *)((int)local_88 + 2);
                puVar17 = (uint *)((int)puVar17 + 2);
              }
            }
            if ((puVar17 < param_5) && ((byte)*local_88 == (byte)*puVar17)) {
              puVar17 = (uint *)((int)puVar17 + 1);
            }
            pbVar8 = (byte *)((int)puVar17 - (int)puVar29);
          }
LAB_0180f684:
          pbVar12 = pbVar12 + (int)pbVar8;
          goto LAB_0180f3ec;
        }
LAB_0180ed54:
        uVar22 = uVar22 + 1;
      } while (param_7 + 3 != uVar22);
    }
    else {
      local_44 = 0;
    }
    if (unaff_r8 == (byte *)0x0) {
      unaff_r8 = (byte *)0x1;
    }
    if (local_38 < (byte *)0x3) {
      uVar26 = *param_4;
      uVar31 = *param_3;
      uVar22 = 0x20 - *(int *)(param_2 + 0x20);
      iVar16 = *(int *)(param_2 + 0x60);
      if (uVar31 < uVar23) {
        do {
          *(uint *)(iVar16 + ((uint)(*(int *)(pbVar18 + uVar31) * 0x35a7bd00) >> (uVar22 & 0xff)) *
                             4) = uVar31;
          uVar31 = uVar31 + 1;
        } while (uVar23 != uVar31);
      }
      *param_3 = uVar23;
      pbVar12 = *(byte **)(iVar16 + (uVar26 * 0x35a7bd00 >> (uVar22 & 0xff)) * 4);
      bVar33 = pbVar12 <= unaff_r8;
      if (unaff_r8 <= pbVar12) {
        bVar33 = 0x3ffff < uVar23 - (int)pbVar12;
      }
      if (!bVar33) {
        if (pbVar12 < pbVar6) {
          puVar7 = (uint *)((int)param_4 + ((int)pbVar6 - (int)pbVar12));
          if (param_5 < puVar7) {
            puVar7 = param_5;
          }
          else {
          }
          puVar13 = (uint *)(pbVar12 + iVar30);
          puVar29 = puVar13;
          puVar17 = param_4;
          if (param_4 < (uint *)((int)puVar7 + -3)) {
            if (*(uint *)(pbVar12 + iVar30) == *param_4) {
              do {
                puVar17 = puVar17 + 1;
                puVar29 = puVar29 + 1;
                if ((uint *)((int)puVar7 + -3) <= puVar17) goto LAB_0180f6e0;
              } while (*puVar29 == *puVar17);
              uVar22 = *puVar29 ^ *puVar17;
              bVar2 = (byte)uVar22;
              bVar3 = (byte)(uVar22 >> 8);
              bVar4 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pbVar8 = (byte *)((int)puVar17 +
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
                               (int)param_4));
            }
            else {
              uVar22 = *(uint *)(pbVar12 + iVar30) ^ *param_4;
              bVar2 = (byte)uVar22;
              bVar3 = (byte)(uVar22 >> 8);
              bVar4 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pbVar8 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
LAB_0180f6e0:
            if (puVar17 < (uint *)((int)puVar7 + -1)) {
              if ((short)*puVar29 == (short)*puVar17) {
                puVar29 = (uint *)((int)puVar29 + 2);
                puVar17 = (uint *)((int)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar7) && ((byte)*puVar29 == (byte)*puVar17)) {
              puVar17 = (uint *)((int)puVar17 + 1);
            }
            pbVar8 = (byte *)((int)puVar17 - (int)param_4);
          }
          if (pbVar20 == (byte *)((int)puVar13 + (int)pbVar8)) {
            puVar29 = (uint *)((int)param_4 + (int)pbVar8);
            puVar17 = puVar10;
            puVar7 = puVar29;
            if (puVar29 < (uint *)((int)param_5 + -3)) {
              if (*(uint *)(pbVar18 + (int)pbVar6) == *(uint *)((int)param_4 + (int)pbVar8)) {
                do {
                  puVar7 = puVar7 + 1;
                  puVar17 = puVar17 + 1;
                  if ((uint *)((int)param_5 + -3) <= puVar7) goto LAB_0180f970;
                } while (*puVar17 == *puVar7);
                uVar22 = *puVar17 ^ *puVar7;
                bVar2 = (byte)uVar22;
                bVar3 = (byte)(uVar22 >> 8);
                bVar4 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                pbVar14 = (byte *)((int)puVar7 +
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
                                                                  )) >> 3) - (int)puVar29));
              }
              else {
                uVar22 = *(uint *)(pbVar18 + (int)pbVar6) ^ *(uint *)((int)param_4 + (int)pbVar8);
                bVar2 = (byte)uVar22;
                bVar3 = (byte)(uVar22 >> 8);
                bVar4 = (byte)(uVar22 >> 0x10);
                bVar1 = (byte)(uVar22 >> 0x18);
                pbVar14 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
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
            }
            else {
LAB_0180f970:
              if (puVar7 < (uint *)((int)param_5 + -1)) {
                if ((short)*puVar17 == (short)*puVar7) {
                  puVar17 = (uint *)((int)puVar17 + 2);
                  puVar7 = (uint *)((int)puVar7 + 2);
                }
              }
              if ((puVar7 < param_5) && ((byte)*puVar17 == (byte)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pbVar14 = (byte *)((int)puVar7 - (int)puVar29);
            }
            pbVar8 = pbVar8 + (int)pbVar14;
          }
        }
        else {
          puVar17 = (uint *)(pbVar18 + (int)pbVar12);
          puVar7 = param_4;
          if (param_4 < (uint *)((int)param_5 + -3)) {
            if (*(uint *)(pbVar18 + (int)pbVar12) == *param_4) {
              do {
                puVar7 = puVar7 + 1;
                puVar17 = puVar17 + 1;
                if ((uint *)((int)param_5 + -3) <= puVar7) goto LAB_0180f504;
              } while (*puVar17 == *puVar7);
              uVar22 = *puVar17 ^ *puVar7;
              bVar2 = (byte)uVar22;
              bVar3 = (byte)(uVar22 >> 8);
              bVar4 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pbVar8 = (byte *)((int)puVar7 +
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
                               (int)param_4));
            }
            else {
              uVar22 = *(uint *)(pbVar18 + (int)pbVar12) ^ *param_4;
              bVar2 = (byte)uVar22;
              bVar3 = (byte)(uVar22 >> 8);
              bVar4 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
              pbVar8 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
LAB_0180f504:
            if (puVar7 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar17 == (short)*puVar7) {
                puVar17 = (uint *)((int)puVar17 + 2);
                puVar7 = (uint *)((int)puVar7 + 2);
              }
            }
            if ((puVar7 < param_5) && ((byte)*puVar17 == (byte)*puVar7)) {
              puVar7 = (uint *)((int)puVar7 + 1);
            }
            pbVar8 = (byte *)((int)puVar7 - (int)param_4);
          }
        }
        if ((byte *)0x2 < pbVar8) {
          *param_1 = (uVar23 - (int)pbVar12) + 3;
          param_1[1] = (int)pbVar8;
          if (param_5 == (uint *)((int)param_4 + (int)pbVar8) || pbVar28 < pbVar8) {
            *(uint *)(param_2 + 0x1c) = uVar23 + 1;
            local_44 = 1;
            goto LAB_0180f2e0;
          }
          local_44 = 1;
          local_38 = pbVar8;
        }
      }
    }
    *(uint *)(iVar5 + uVar25 * 4) = uVar23;
    local_6c = (byte *)(uVar23 + 9);
    iVar5 = (uVar23 & uVar11) * 8;
    local_4c = (uint *)(iVar19 + iVar5);
    local_50 = (uint *)(iVar19 + iVar5 + 4);
    if (unaff_r8 <= pbVar15) {
      pbVar28 = (byte *)0x0;
      local_34 = 1 << (uVar21 & 0xff);
      puVar7 = (uint *)((int)param_5 + -3);
      pbVar12 = (byte *)0x0;
      do {
        if (pbVar12 < pbVar28) {
          pbVar8 = pbVar12;
        }
        else {
          pbVar8 = pbVar28;
        }
        puVar17 = (uint *)((int)param_4 + (int)pbVar8);
        if (pbVar8 + (int)pbVar15 < pbVar6) {
          pbVar14 = pbVar15 + iVar30;
          puVar13 = (uint *)(pbVar14 + (int)pbVar8);
          puVar29 = (uint *)((int)param_4 + ((int)pbVar20 - (int)pbVar14));
          if (param_5 < puVar29) {
            puVar29 = param_5;
          }
          puVar27 = (uint *)((int)puVar29 + -3);
          if (puVar17 < puVar27) {
            if (*(uint *)(pbVar14 + (int)pbVar8) == *(uint *)((int)param_4 + (int)pbVar8)) {
              puVar24 = puVar17 + 1;
              local_68 = puVar13 + 1;
              if (puVar24 < puVar27) {
                do {
                  if (*local_68 != *puVar24) {
                    uVar25 = *local_68 ^ *puVar24;
                    bVar2 = (byte)uVar25;
                    bVar3 = (byte)(uVar25 >> 8);
                    bVar4 = (byte)(uVar25 >> 0x10);
                    bVar1 = (byte)(uVar25 >> 0x18);
                    pbVar9 = (byte *)((int)puVar24 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                       bVar2 >> 1 & 1) << 1 |
                                                                      bVar2 >> 2 & 1) << 1 |
                                                                     bVar2 >> 3 & 1) << 1 |
                                                                    bVar2 >> 4 & 1) << 1 |
                                                                   bVar2 >> 5 & 1) << 1 |
                                                                  bVar2 >> 6 & 1) << 1 | bVar2 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                                 bVar3 >> 1 & 1) <<
                                                                                 1 | bVar3 >> 2 & 1)
                                                                                << 1 | bVar3 >> 3 &
                                                                                       1) << 1 |
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
                    goto joined_r0x0180f0bc;
                  }
                  puVar24 = puVar24 + 1;
                  local_68 = local_68 + 1;
                } while (puVar24 < puVar27);
              }
              goto LAB_0180f048;
            }
            uVar25 = *(uint *)(pbVar14 + (int)pbVar8) ^ *(uint *)((int)param_4 + (int)pbVar8);
            bVar2 = (byte)uVar25;
            bVar3 = (byte)(uVar25 >> 8);
            bVar4 = (byte)(uVar25 >> 0x10);
            bVar1 = (byte)(uVar25 >> 0x18);
            pbVar9 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          else {
            puVar24 = puVar17;
            local_68 = puVar13;
LAB_0180f048:
            if (puVar24 < (uint *)((int)puVar29 + -1)) {
              if ((short)*local_68 == (short)*puVar24) {
                local_68 = (uint *)((int)local_68 + 2);
                puVar24 = (uint *)((int)puVar24 + 2);
              }
            }
            if ((puVar24 < puVar29) && ((byte)*local_68 == (byte)*puVar24)) {
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            pbVar9 = (byte *)((int)puVar24 - (int)puVar17);
          }
joined_r0x0180f0bc:
          if (pbVar20 == (byte *)((int)puVar13 + (int)pbVar9)) {
            puVar29 = (uint *)((int)puVar17 + (int)pbVar9);
            if (puVar29 < puVar7) {
              if (*puVar10 == *(uint *)((int)puVar17 + (int)pbVar9)) {
                puVar17 = puVar29 + 1;
                local_68 = puVar10 + 1;
                if (puVar17 < puVar7) {
                  do {
                    if (*local_68 != *puVar17) {
                      uVar25 = *local_68 ^ *puVar17;
                      bVar2 = (byte)uVar25;
                      bVar3 = (byte)(uVar25 >> 8);
                      bVar4 = (byte)(uVar25 >> 0x10);
                      bVar1 = (byte)(uVar25 >> 0x18);
                      pbVar32 = (byte *)((int)puVar17 +
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
                                        (int)puVar29));
                      goto LAB_0180f0f4;
                    }
                    puVar17 = puVar17 + 1;
                    local_68 = local_68 + 1;
                  } while (puVar17 < puVar7);
                }
                goto LAB_0180f190;
              }
              uVar25 = *puVar10 ^ *(uint *)((int)puVar17 + (int)pbVar9);
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar32 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
              puVar17 = puVar29;
              local_68 = puVar10;
LAB_0180f190:
              if (puVar17 < (uint *)((int)param_5 + -1)) {
                if ((short)*local_68 == (short)*puVar17) {
                  local_68 = (uint *)((int)local_68 + 2);
                  puVar17 = (uint *)((int)puVar17 + 2);
                }
              }
              if ((puVar17 < param_5) && ((byte)*local_68 == (byte)*puVar17)) {
                puVar17 = (uint *)((int)puVar17 + 1);
              }
              pbVar32 = (byte *)((int)puVar17 - (int)puVar29);
            }
LAB_0180f0f4:
            pbVar9 = pbVar9 + (int)pbVar32;
          }
          pbVar8 = pbVar8 + (int)pbVar9;
          if (pbVar6 <= pbVar8 + (int)pbVar15) {
            pbVar14 = pbVar18 + (int)pbVar15;
          }
        }
        else {
          pbVar14 = pbVar18 + (int)pbVar15;
          puVar13 = (uint *)(pbVar14 + (int)pbVar8);
          puVar29 = puVar17;
          if (puVar17 < puVar7) {
            if (*(uint *)(pbVar14 + (int)pbVar8) == *(uint *)((int)param_4 + (int)pbVar8)) {
              do {
                puVar29 = puVar29 + 1;
                puVar13 = puVar13 + 1;
                if (puVar7 <= puVar29) goto LAB_0180efec;
              } while (*puVar13 == *puVar29);
              uVar25 = *puVar13 ^ *puVar29;
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar9 = (byte *)((int)puVar29 +
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
                               (int)puVar17));
            }
            else {
              uVar25 = *(uint *)(pbVar14 + (int)pbVar8) ^ *(uint *)((int)param_4 + (int)pbVar8);
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar9 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
LAB_0180efec:
            if (puVar29 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar13 == (short)*puVar29) {
                puVar29 = (uint *)((int)puVar29 + 2);
                puVar13 = (uint *)((int)puVar13 + 2);
              }
            }
            if ((puVar29 < param_5) && ((byte)*puVar13 == (byte)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pbVar9 = (byte *)((int)puVar29 - (int)puVar17);
          }
          pbVar8 = pbVar8 + (int)pbVar9;
        }
        if (local_38 < pbVar8) {
          if (local_6c + -(int)pbVar15 < pbVar8) {
            local_6c = pbVar8 + (int)pbVar15;
          }
          param_1[local_44 * 2] = (uVar23 + 3) - (int)pbVar15;
          iVar5 = local_44 + 1;
          param_1[local_44 * 2 + 1] = (int)pbVar8;
          local_44 = iVar5;
          if ((byte *)0x1000 < pbVar8 || param_5 == (uint *)((int)param_4 + (int)pbVar8)) break;
          local_38 = pbVar8;
        }
        puVar17 = (uint *)(iVar19 + (uVar11 & (uint)pbVar15) * 8);
        if (pbVar14[(int)pbVar8] < (byte)*(uint *)((int)param_4 + (int)pbVar8)) {
          *local_4c = (uint)pbVar15;
          if (pbVar15 <= local_5c) {
            local_4c = &local_30;
            break;
          }
          pbVar15 = (byte *)puVar17[1];
          local_4c = puVar17 + 1;
          pbVar12 = pbVar8;
        }
        else {
          *local_50 = (uint)pbVar15;
          if (pbVar15 <= local_5c) {
            local_50 = &local_30;
            break;
          }
          pbVar15 = *(byte **)(iVar19 + (uVar11 & (uint)pbVar15) * 8);
          pbVar28 = pbVar8;
          local_50 = puVar17;
        }
        local_34 = local_34 + -1;
      } while (unaff_r8 <= pbVar15 && local_34 != 0);
    }
    *local_50 = 0;
    *local_4c = 0;
    *(byte **)(param_2 + 0x1c) = local_6c + -8;
  }
LAB_0180f2e0:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_44;
}

