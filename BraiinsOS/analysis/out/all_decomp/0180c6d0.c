// FUN_0180c6d0 @ 0180c6d0 size=3032 calls_out=2 calls_in=0
// strings: 

int FUN_0180c6d0(int param_1,int param_2,undefined4 param_3,int *param_4,uint *param_5,int *param_6,
                uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  uint *puVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint unaff_r6;
  uint *puVar26;
  byte *pbVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  byte *pbVar31;
  bool bVar32;
  uint *local_84;
  byte *local_6c;
  uint *local_68;
  uint local_5c;
  uint *local_50;
  uint *local_4c;
  int local_44;
  byte *local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  uVar25 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_018ddaf8;
  iVar16 = *(int *)(param_2 + 4);
  piVar11 = (int *)(iVar16 + uVar25);
  if (param_4 < piVar11) {
    local_44 = 0;
  }
  else {
    uVar23 = (int)param_4 - iVar16;
    if (uVar25 < uVar23) {
      unaff_r6 = 1;
      while( true ) {
        iVar5 = FUN_01808ed0(param_2,piVar11,param_5,uVar23,1);
        uVar25 = uVar25 + iVar5;
        if (uVar23 <= uVar25) break;
        piVar11 = (int *)(iVar16 + uVar25);
      }
    }
    *(uint *)(param_2 + 0x1c) = uVar23;
    iVar5 = *(int *)(param_2 + 8);
    iVar29 = *(int *)(param_2 + 0x5c);
    pbVar12 = *(byte **)(param_2 + 0xc);
    uVar25 = (uint)(*param_4 * -0x61c8864f) >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
    uVar17 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    iVar18 = *(int *)(param_2 + 100);
    pbVar19 = pbVar12 + iVar5;
    uVar15 = *(uint *)(iVar29 + uVar25 * 4);
    puVar20 = (uint *)(pbVar12 + iVar16);
    if (uVar17 < uVar23) {
      local_5c = uVar23 - uVar17;
    }
    else {
      local_5c = 0;
    }
    uVar13 = *(uint *)(param_2 + 0x10);
    uVar28 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
    bVar32 = uVar28 < uVar23 - uVar13;
    uVar6 = *(uint *)(param_2 + 0xc4);
    if (bVar32) {
      unaff_r6 = uVar23 - uVar28;
    }
    if (!bVar32) {
      unaff_r6 = uVar13;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      unaff_r6 = uVar13;
    }
    local_38 = (byte *)(param_8 + -1);
    if (param_7 < param_7 + 3) {
      pbVar27 = (byte *)0xfff;
      if (*(byte **)(param_2 + 0xcc) < (byte *)0xfff) {
        pbVar27 = *(byte **)(param_2 + 0xcc);
      }
      local_44 = 0;
      uVar28 = param_7;
      do {
        if (uVar28 == 3) {
          iVar21 = *param_6 + -1;
        }
        else {
          iVar21 = param_6[uVar28];
        }
        uVar13 = uVar23 - iVar21;
        if (iVar21 - 1U < uVar23 - (int)pbVar12) {
          bVar32 = unaff_r6 == uVar13;
          if (unaff_r6 <= uVar13) {
            bVar32 = *(int *)((int)param_4 - iVar21) == *param_4;
          }
          if (!bVar32) goto LAB_0180c94c;
          puVar7 = (uint *)((int)param_5 + -3);
          puVar8 = (uint *)(param_4 + 1);
          puVar14 = (uint *)((int)param_4 + (4 - iVar21));
          if (puVar8 < puVar7) {
            uVar13 = *(uint *)((int)param_4 + (4 - iVar21));
            if (uVar13 == param_4[1]) {
              puVar30 = (uint *)(param_4 + 2);
              puVar14 = puVar14 + 1;
              if (puVar30 < puVar7) {
                do {
                  if (*puVar14 != *puVar30) {
                    uVar13 = *puVar30 ^ *puVar14;
                    bVar2 = (byte)uVar13;
                    bVar3 = (byte)(uVar13 >> 8);
                    bVar4 = (byte)(uVar13 >> 0x10);
                    bVar1 = (byte)(uVar13 >> 0x18);
                    pbVar22 = (byte *)((int)puVar30 +
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
                                                                  )) >> 3) - (int)puVar8) + 4);
                    goto joined_r0x0180c948;
                  }
                  puVar30 = puVar30 + 1;
                  puVar14 = puVar14 + 1;
                } while (puVar30 < puVar7);
              }
              goto LAB_0180cf98;
            }
            uVar13 = uVar13 ^ param_4[1];
            bVar2 = (byte)uVar13;
            bVar3 = (byte)(uVar13 >> 8);
            bVar4 = (byte)(uVar13 >> 0x10);
            bVar1 = (byte)(uVar13 >> 0x18);
            pbVar22 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar30 = puVar8;
LAB_0180cf98:
            if (puVar30 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar14 == (short)*puVar30) {
                puVar14 = (uint *)((int)puVar14 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar30 < param_5) && ((byte)*puVar14 == (byte)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pbVar22 = (byte *)((int)puVar30 - (int)puVar8);
          }
LAB_0180cfd4:
          pbVar22 = pbVar22 + 4;
joined_r0x0180c948:
          if (local_38 < pbVar22) {
            iVar21 = local_44 * 8;
            *(uint *)(param_1 + local_44 * 8) = (1 - param_7) + uVar28;
            local_44 = local_44 + 1;
            *(byte **)(param_1 + iVar21 + 4) = pbVar22;
            if (param_5 == (uint *)((int)param_4 + (int)pbVar22) || pbVar27 < pbVar22)
            goto LAB_0180cec8;
            local_38 = pbVar22;
          }
        }
        else if ((!(uVar23 - unaff_r6 <= iVar21 - 1U ||
                   pbVar12 + iVar21 + (-1 - uVar23) < (byte *)0x3)) &&
                (iVar21 = iVar5 + uVar13, *param_4 == *(int *)(iVar5 + uVar13))) {
          puVar8 = (uint *)(iVar21 + 4);
          puVar7 = (uint *)(param_4 + 1);
          puVar14 = (uint *)((int)puVar7 + ((int)pbVar19 - (int)puVar8));
          if (param_5 < puVar14) {
            puVar14 = param_5;
          }
          puVar30 = (uint *)((int)puVar14 + -3);
          if (puVar7 < puVar30) {
            if (*(uint *)(iVar21 + 4) == param_4[1]) {
              local_84 = (uint *)(iVar21 + 8);
              puVar26 = (uint *)(param_4 + 2);
              if (puVar26 < puVar30) {
                do {
                  if (*local_84 != *puVar26) {
                    uVar13 = *puVar26 ^ *local_84;
                    bVar2 = (byte)uVar13;
                    bVar3 = (byte)(uVar13 >> 8);
                    bVar4 = (byte)(uVar13 >> 0x10);
                    bVar1 = (byte)(uVar13 >> 0x18);
                    pbVar22 = (byte *)((int)puVar26 +
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
                                                                  )) >> 3) - (int)puVar7));
                    goto LAB_0180d108;
                  }
                  puVar26 = puVar26 + 1;
                  local_84 = local_84 + 1;
                } while (puVar26 < puVar30);
              }
              goto LAB_0180d0b4;
            }
            uVar13 = param_4[1] ^ *(uint *)(iVar21 + 4);
            bVar2 = (byte)uVar13;
            bVar3 = (byte)(uVar13 >> 8);
            bVar4 = (byte)(uVar13 >> 0x10);
            bVar1 = (byte)(uVar13 >> 0x18);
            pbVar22 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar26 = puVar7;
            local_84 = puVar8;
LAB_0180d0b4:
            if (puVar26 < (uint *)((int)puVar14 + -1)) {
              if ((short)*local_84 == (short)*puVar26) {
                local_84 = (uint *)((int)local_84 + 2);
                puVar26 = (uint *)((int)puVar26 + 2);
              }
            }
            if ((puVar26 < puVar14) && ((byte)*local_84 == (byte)*puVar26)) {
              puVar26 = (uint *)((int)puVar26 + 1);
            }
            pbVar22 = (byte *)((int)puVar26 - (int)puVar7);
          }
LAB_0180d108:
          if (pbVar19 != (byte *)((int)puVar8 + (int)pbVar22)) goto LAB_0180cfd4;
          puVar8 = (uint *)((int)puVar7 + (int)pbVar22);
          puVar14 = (uint *)((int)param_5 + -3);
          if (puVar8 < puVar14) {
            if (*puVar20 == *(uint *)((int)puVar7 + (int)pbVar22)) {
              puVar7 = puVar8 + 1;
              local_84 = puVar20 + 1;
              if (puVar7 < puVar14) {
                do {
                  if (*local_84 != *puVar7) {
                    uVar13 = *local_84 ^ *puVar7;
                    bVar2 = (byte)uVar13;
                    bVar3 = (byte)(uVar13 >> 8);
                    bVar4 = (byte)(uVar13 >> 0x10);
                    bVar1 = (byte)(uVar13 >> 0x18);
                    pbVar9 = (byte *)((int)puVar7 +
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
                                     (int)puVar8));
                    goto LAB_0180d18c;
                  }
                  puVar7 = puVar7 + 1;
                  local_84 = local_84 + 1;
                } while (puVar7 < puVar14);
              }
              goto LAB_0180d134;
            }
            uVar13 = *puVar20 ^ *(uint *)((int)puVar7 + (int)pbVar22);
            bVar2 = (byte)uVar13;
            bVar3 = (byte)(uVar13 >> 8);
            bVar4 = (byte)(uVar13 >> 0x10);
            bVar1 = (byte)(uVar13 >> 0x18);
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
            puVar7 = puVar8;
            local_84 = puVar20;
LAB_0180d134:
            if (puVar7 < (uint *)((int)param_5 + -1)) {
              if ((short)*local_84 == (short)*puVar7) {
                local_84 = (uint *)((int)local_84 + 2);
                puVar7 = (uint *)((int)puVar7 + 2);
              }
            }
            if ((puVar7 < param_5) && ((byte)*local_84 == (byte)*puVar7)) {
              puVar7 = (uint *)((int)puVar7 + 1);
            }
            pbVar9 = (byte *)((int)puVar7 - (int)puVar8);
          }
LAB_0180d18c:
          pbVar22 = pbVar22 + (int)pbVar9;
          goto LAB_0180cfd4;
        }
LAB_0180c94c:
        uVar28 = uVar28 + 1;
      } while (param_7 + 3 != uVar28);
    }
    else {
      local_44 = 0;
    }
    *(uint *)(iVar29 + uVar25 * 4) = uVar23;
    if (unaff_r6 == 0) {
      unaff_r6 = 1;
    }
    local_6c = (byte *)(uVar23 + 9);
    iVar29 = (uVar23 & uVar17) * 8;
    local_4c = (uint *)(iVar18 + iVar29);
    local_50 = (uint *)(iVar18 + iVar29 + 4);
    if (unaff_r6 <= uVar15) {
      pbVar22 = (byte *)0x0;
      local_34 = 1 << (uVar6 & 0xff);
      puVar14 = (uint *)((int)param_5 + -3);
      pbVar27 = (byte *)0x0;
      do {
        if (pbVar22 < pbVar27) {
          pbVar9 = pbVar22;
        }
        else {
          pbVar9 = pbVar27;
        }
        puVar7 = (uint *)((int)param_4 + (int)pbVar9);
        if (pbVar9 + uVar15 < pbVar12) {
          iVar29 = iVar5 + uVar15;
          puVar30 = (uint *)(pbVar9 + iVar29);
          puVar8 = (uint *)((int)param_4 + ((int)pbVar19 - iVar29));
          if (param_5 < puVar8) {
            puVar8 = param_5;
          }
          puVar26 = (uint *)((int)puVar8 + -3);
          if (puVar7 < puVar26) {
            if (*(uint *)(pbVar9 + iVar29) == *(uint *)((int)param_4 + (int)pbVar9)) {
              puVar24 = puVar7 + 1;
              local_68 = puVar30 + 1;
              if (puVar24 < puVar26) {
                do {
                  if (*local_68 != *puVar24) {
                    uVar25 = *local_68 ^ *puVar24;
                    bVar2 = (byte)uVar25;
                    bVar3 = (byte)(uVar25 >> 8);
                    bVar4 = (byte)(uVar25 >> 0x10);
                    bVar1 = (byte)(uVar25 >> 0x18);
                    pbVar10 = (byte *)((int)puVar24 +
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
                                                                  )) >> 3) - (int)puVar7));
                    goto joined_r0x0180cca8;
                  }
                  puVar24 = puVar24 + 1;
                  local_68 = local_68 + 1;
                } while (puVar24 < puVar26);
              }
              goto LAB_0180cc34;
            }
            uVar25 = *(uint *)(pbVar9 + iVar29) ^ *(uint *)((int)param_4 + (int)pbVar9);
            bVar2 = (byte)uVar25;
            bVar3 = (byte)(uVar25 >> 8);
            bVar4 = (byte)(uVar25 >> 0x10);
            bVar1 = (byte)(uVar25 >> 0x18);
            pbVar10 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
            puVar24 = puVar7;
            local_68 = puVar30;
LAB_0180cc34:
            if (puVar24 < (uint *)((int)puVar8 + -1)) {
              if ((short)*local_68 == (short)*puVar24) {
                local_68 = (uint *)((int)local_68 + 2);
                puVar24 = (uint *)((int)puVar24 + 2);
              }
            }
            if ((puVar24 < puVar8) && ((byte)*local_68 == (byte)*puVar24)) {
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            pbVar10 = (byte *)((int)puVar24 - (int)puVar7);
          }
joined_r0x0180cca8:
          if (pbVar19 == (byte *)((int)puVar30 + (int)pbVar10)) {
            puVar8 = (uint *)((int)puVar7 + (int)pbVar10);
            if (puVar8 < puVar14) {
              if (*puVar20 == *(uint *)((int)puVar7 + (int)pbVar10)) {
                puVar7 = puVar8 + 1;
                local_68 = puVar20 + 1;
                if (puVar7 < puVar14) {
                  do {
                    if (*local_68 != *puVar7) {
                      uVar25 = *local_68 ^ *puVar7;
                      bVar2 = (byte)uVar25;
                      bVar3 = (byte)(uVar25 >> 8);
                      bVar4 = (byte)(uVar25 >> 0x10);
                      bVar1 = (byte)(uVar25 >> 0x18);
                      pbVar31 = (byte *)((int)puVar7 +
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
                                                                    bVar1 >> 7)) >> 3) - (int)puVar8
                                        ));
                      goto LAB_0180cce0;
                    }
                    puVar7 = puVar7 + 1;
                    local_68 = local_68 + 1;
                  } while (puVar7 < puVar14);
                }
                goto LAB_0180cd7c;
              }
              uVar25 = *puVar20 ^ *(uint *)((int)puVar7 + (int)pbVar10);
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar31 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
              puVar7 = puVar8;
              local_68 = puVar20;
LAB_0180cd7c:
              if (puVar7 < (uint *)((int)param_5 + -1)) {
                if ((short)*local_68 == (short)*puVar7) {
                  local_68 = (uint *)((int)local_68 + 2);
                  puVar7 = (uint *)((int)puVar7 + 2);
                }
              }
              if ((puVar7 < param_5) && ((byte)*local_68 == (byte)*puVar7)) {
                puVar7 = (uint *)((int)puVar7 + 1);
              }
              pbVar31 = (byte *)((int)puVar7 - (int)puVar8);
            }
LAB_0180cce0:
            pbVar10 = pbVar10 + (int)pbVar31;
          }
          pbVar9 = pbVar9 + (int)pbVar10;
          if (pbVar12 <= pbVar9 + uVar15) {
            iVar29 = iVar16 + uVar15;
          }
        }
        else {
          iVar29 = iVar16 + uVar15;
          puVar30 = (uint *)(pbVar9 + iVar29);
          puVar8 = puVar7;
          if (puVar7 < puVar14) {
            if (*(uint *)(pbVar9 + iVar29) == *(uint *)((int)param_4 + (int)pbVar9)) {
              do {
                puVar8 = puVar8 + 1;
                puVar30 = puVar30 + 1;
                if (puVar14 <= puVar8) goto LAB_0180cbd8;
              } while (*puVar30 == *puVar8);
              uVar25 = *puVar30 ^ *puVar8;
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar10 = (byte *)((int)puVar8 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar7));
            }
            else {
              uVar25 = *(uint *)(pbVar9 + iVar29) ^ *(uint *)((int)param_4 + (int)pbVar9);
              bVar2 = (byte)uVar25;
              bVar3 = (byte)(uVar25 >> 8);
              bVar4 = (byte)(uVar25 >> 0x10);
              bVar1 = (byte)(uVar25 >> 0x18);
              pbVar10 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
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
          }
          else {
LAB_0180cbd8:
            if (puVar8 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar30 == (short)*puVar8) {
                puVar8 = (uint *)((int)puVar8 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar8 < param_5) && ((byte)*puVar30 == (byte)*puVar8)) {
              puVar8 = (uint *)((int)puVar8 + 1);
            }
            pbVar10 = (byte *)((int)puVar8 - (int)puVar7);
          }
          pbVar9 = pbVar9 + (int)pbVar10;
        }
        if (local_38 < pbVar9) {
          if (local_6c + -uVar15 < pbVar9) {
            local_6c = pbVar9 + uVar15;
          }
          iVar21 = local_44 * 8;
          *(uint *)(param_1 + local_44 * 8) = (uVar23 + 3) - uVar15;
          local_44 = local_44 + 1;
          *(byte **)(param_1 + iVar21 + 4) = pbVar9;
          if ((byte *)0x1000 < pbVar9 || param_5 == (uint *)((int)param_4 + (int)pbVar9)) break;
          local_38 = pbVar9;
        }
        puVar7 = (uint *)(iVar18 + (uVar17 & uVar15) * 8);
        if (pbVar9[iVar29] < (byte)*(uint *)((int)param_4 + (int)pbVar9)) {
          *local_4c = uVar15;
          if (uVar15 <= local_5c) {
            local_4c = &local_30;
            break;
          }
          uVar15 = puVar7[1];
          local_4c = puVar7 + 1;
          pbVar22 = pbVar9;
        }
        else {
          *local_50 = uVar15;
          if (uVar15 <= local_5c) {
            local_50 = &local_30;
            break;
          }
          uVar15 = *(uint *)(iVar18 + (uVar17 & uVar15) * 8);
          pbVar27 = pbVar9;
          local_50 = puVar7;
        }
        local_34 = local_34 + -1;
      } while (unaff_r6 <= uVar15 && local_34 != 0);
    }
    *local_50 = 0;
    *local_4c = 0;
    *(byte **)(param_2 + 0x1c) = local_6c + -8;
  }
LAB_0180cec8:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_44;
}

