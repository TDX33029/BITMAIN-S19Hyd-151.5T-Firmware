// FUN_0180d2b4 @ 0180d2b4 size=3076 calls_out=2 calls_in=0
// strings: 

int FUN_0180d2b4(int param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,int *param_6
                ,uint param_7,int param_8)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
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
  
  uVar24 = *(uint *)(param_2 + 0x1c);
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_2 + 4);
  puVar13 = (uint *)(iVar17 + uVar24);
  if (param_4 < puVar13) {
    local_44 = 0;
  }
  else {
    uVar22 = (int)param_4 - iVar17;
    if (uVar24 < uVar22) {
      unaff_r6 = 1;
      while( true ) {
        iVar6 = FUN_01809c50(param_2,puVar13,param_5,uVar22,1);
        uVar24 = uVar24 + iVar6;
        if (uVar22 <= uVar24) break;
        puVar13 = (uint *)(iVar17 + uVar24);
      }
    }
    uVar16 = *param_4;
    uVar24 = param_4[1];
    *(uint *)(param_2 + 0x1c) = uVar22;
    iVar25 = *(int *)(param_2 + 8);
    iVar6 = *(int *)(param_2 + 0xc0);
    lVar2 = (ulonglong)uVar16 * 0xbf9b0000;
    uVar24 = uVar24 * -0x40650000 + uVar16 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
    iVar29 = *(int *)(param_2 + 0x5c);
    uVar18 = (uint)lVar2 >> (0x40U - iVar6 & 0xff) | uVar24 << (iVar6 - 0x20U & 0xff) |
             uVar24 >> (0x20U - iVar6 & 0xff);
    pbVar7 = *(byte **)(param_2 + 0xc);
    uVar24 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
    uVar16 = *(uint *)(iVar29 + uVar18 * 4);
    iVar6 = *(int *)(param_2 + 100);
    pbVar19 = pbVar7 + iVar25;
    puVar13 = (uint *)(pbVar7 + iVar17);
    if (uVar24 < uVar22) {
      local_5c = uVar22 - uVar24;
    }
    else {
      local_5c = 0;
    }
    uVar14 = *(uint *)(param_2 + 0x10);
    uVar28 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
    bVar32 = uVar28 < uVar22 - uVar14;
    uVar8 = *(uint *)(param_2 + 0xc4);
    if (bVar32) {
      unaff_r6 = uVar22 - uVar28;
    }
    if (!bVar32) {
      unaff_r6 = uVar14;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      unaff_r6 = uVar14;
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
          iVar20 = *param_6 + -1;
        }
        else {
          iVar20 = param_6[uVar28];
        }
        uVar14 = uVar22 - iVar20;
        if (iVar20 - 1U < uVar22 - (int)pbVar7) {
          bVar32 = unaff_r6 == uVar14;
          if (unaff_r6 <= uVar14) {
            bVar32 = *(uint *)((int)param_4 - iVar20) == *param_4;
          }
          if (!bVar32) goto LAB_0180d55c;
          puVar9 = (uint *)((int)param_5 + -3);
          puVar10 = param_4 + 1;
          puVar15 = (uint *)((int)param_4 + (4 - iVar20));
          if (puVar10 < puVar9) {
            uVar14 = *(uint *)((int)param_4 + (4 - iVar20));
            if (uVar14 == param_4[1]) {
              puVar30 = param_4 + 2;
              puVar15 = puVar15 + 1;
              if (puVar30 < puVar9) {
                do {
                  if (*puVar15 != *puVar30) {
                    uVar14 = *puVar30 ^ *puVar15;
                    bVar3 = (byte)uVar14;
                    bVar4 = (byte)(uVar14 >> 8);
                    bVar5 = (byte)(uVar14 >> 0x10);
                    bVar1 = (byte)(uVar14 >> 0x18);
                    pbVar21 = (byte *)((int)puVar30 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar10) + 4);
                    goto joined_r0x0180d558;
                  }
                  puVar30 = puVar30 + 1;
                  puVar15 = puVar15 + 1;
                } while (puVar30 < puVar9);
              }
              goto LAB_0180dba8;
            }
            uVar14 = uVar14 ^ param_4[1];
            bVar3 = (byte)uVar14;
            bVar4 = (byte)(uVar14 >> 8);
            bVar5 = (byte)(uVar14 >> 0x10);
            bVar1 = (byte)(uVar14 >> 0x18);
            pbVar21 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar30 = puVar10;
LAB_0180dba8:
            if (puVar30 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar15 == (short)*puVar30) {
                puVar15 = (uint *)((int)puVar15 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar30 < param_5) && ((byte)*puVar15 == (byte)*puVar30)) {
              puVar30 = (uint *)((int)puVar30 + 1);
            }
            pbVar21 = (byte *)((int)puVar30 - (int)puVar10);
          }
LAB_0180dbe4:
          pbVar21 = pbVar21 + 4;
joined_r0x0180d558:
          if (local_38 < pbVar21) {
            iVar20 = local_44 * 8;
            *(uint *)(param_1 + local_44 * 8) = (1 - param_7) + uVar28;
            local_44 = local_44 + 1;
            *(byte **)(param_1 + iVar20 + 4) = pbVar21;
            if (param_5 == (uint *)((int)param_4 + (int)pbVar21) || pbVar27 < pbVar21)
            goto LAB_0180dad8;
            local_38 = pbVar21;
          }
        }
        else if ((!(uVar22 - unaff_r6 <= iVar20 - 1U ||
                   pbVar7 + iVar20 + (-1 - uVar22) < (byte *)0x3)) &&
                (iVar20 = iVar25 + uVar14, *param_4 == *(uint *)(iVar25 + uVar14))) {
          puVar10 = (uint *)(iVar20 + 4);
          puVar9 = param_4 + 1;
          puVar15 = (uint *)((int)puVar9 + ((int)pbVar19 - (int)puVar10));
          if (param_5 < puVar15) {
            puVar15 = param_5;
          }
          puVar30 = (uint *)((int)puVar15 + -3);
          if (puVar9 < puVar30) {
            if (*(uint *)(iVar20 + 4) == param_4[1]) {
              local_84 = (uint *)(iVar20 + 8);
              puVar26 = param_4 + 2;
              if (puVar26 < puVar30) {
                do {
                  if (*local_84 != *puVar26) {
                    uVar14 = *puVar26 ^ *local_84;
                    bVar3 = (byte)uVar14;
                    bVar4 = (byte)(uVar14 >> 8);
                    bVar5 = (byte)(uVar14 >> 0x10);
                    bVar1 = (byte)(uVar14 >> 0x18);
                    pbVar21 = (byte *)((int)puVar26 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar9));
                    goto LAB_0180dd18;
                  }
                  puVar26 = puVar26 + 1;
                  local_84 = local_84 + 1;
                } while (puVar26 < puVar30);
              }
              goto LAB_0180dcc4;
            }
            uVar14 = param_4[1] ^ *(uint *)(iVar20 + 4);
            bVar3 = (byte)uVar14;
            bVar4 = (byte)(uVar14 >> 8);
            bVar5 = (byte)(uVar14 >> 0x10);
            bVar1 = (byte)(uVar14 >> 0x18);
            pbVar21 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar26 = puVar9;
            local_84 = puVar10;
LAB_0180dcc4:
            if (puVar26 < (uint *)((int)puVar15 + -1)) {
              if ((short)*local_84 == (short)*puVar26) {
                local_84 = (uint *)((int)local_84 + 2);
                puVar26 = (uint *)((int)puVar26 + 2);
              }
            }
            if ((puVar26 < puVar15) && ((byte)*local_84 == (byte)*puVar26)) {
              puVar26 = (uint *)((int)puVar26 + 1);
            }
            pbVar21 = (byte *)((int)puVar26 - (int)puVar9);
          }
LAB_0180dd18:
          if (pbVar19 != (byte *)((int)puVar10 + (int)pbVar21)) goto LAB_0180dbe4;
          puVar10 = (uint *)((int)puVar9 + (int)pbVar21);
          puVar15 = (uint *)((int)param_5 + -3);
          if (puVar10 < puVar15) {
            if (*puVar13 == *(uint *)((int)puVar9 + (int)pbVar21)) {
              puVar9 = puVar10 + 1;
              local_84 = puVar13 + 1;
              if (puVar9 < puVar15) {
                do {
                  if (*local_84 != *puVar9) {
                    uVar14 = *local_84 ^ *puVar9;
                    bVar3 = (byte)uVar14;
                    bVar4 = (byte)(uVar14 >> 8);
                    bVar5 = (byte)(uVar14 >> 0x10);
                    bVar1 = (byte)(uVar14 >> 0x18);
                    pbVar11 = (byte *)((int)puVar9 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar10));
                    goto LAB_0180dd9c;
                  }
                  puVar9 = puVar9 + 1;
                  local_84 = local_84 + 1;
                } while (puVar9 < puVar15);
              }
              goto LAB_0180dd44;
            }
            uVar14 = *puVar13 ^ *(uint *)((int)puVar9 + (int)pbVar21);
            bVar3 = (byte)uVar14;
            bVar4 = (byte)(uVar14 >> 8);
            bVar5 = (byte)(uVar14 >> 0x10);
            bVar1 = (byte)(uVar14 >> 0x18);
            pbVar11 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar9 = puVar10;
            local_84 = puVar13;
LAB_0180dd44:
            if (puVar9 < (uint *)((int)param_5 + -1)) {
              if ((short)*local_84 == (short)*puVar9) {
                local_84 = (uint *)((int)local_84 + 2);
                puVar9 = (uint *)((int)puVar9 + 2);
              }
            }
            if ((puVar9 < param_5) && ((byte)*local_84 == (byte)*puVar9)) {
              puVar9 = (uint *)((int)puVar9 + 1);
            }
            pbVar11 = (byte *)((int)puVar9 - (int)puVar10);
          }
LAB_0180dd9c:
          pbVar21 = pbVar21 + (int)pbVar11;
          goto LAB_0180dbe4;
        }
LAB_0180d55c:
        uVar28 = uVar28 + 1;
      } while (param_7 + 3 != uVar28);
    }
    else {
      local_44 = 0;
    }
    *(uint *)(iVar29 + uVar18 * 4) = uVar22;
    if (unaff_r6 == 0) {
      unaff_r6 = 1;
    }
    local_6c = (byte *)(uVar22 + 9);
    iVar29 = (uVar22 & uVar24) * 8;
    local_4c = (uint *)(iVar6 + iVar29);
    local_50 = (uint *)(iVar6 + iVar29 + 4);
    if (unaff_r6 <= uVar16) {
      pbVar21 = (byte *)0x0;
      local_34 = 1 << (uVar8 & 0xff);
      puVar15 = (uint *)((int)param_5 + -3);
      pbVar27 = (byte *)0x0;
      do {
        if (pbVar21 < pbVar27) {
          pbVar11 = pbVar21;
        }
        else {
          pbVar11 = pbVar27;
        }
        puVar9 = (uint *)((int)param_4 + (int)pbVar11);
        if (pbVar11 + uVar16 < pbVar7) {
          iVar29 = iVar25 + uVar16;
          puVar30 = (uint *)(pbVar11 + iVar29);
          puVar10 = (uint *)((int)param_4 + ((int)pbVar19 - iVar29));
          if (param_5 < puVar10) {
            puVar10 = param_5;
          }
          puVar26 = (uint *)((int)puVar10 + -3);
          if (puVar9 < puVar26) {
            if (*(uint *)(pbVar11 + iVar29) == *(uint *)((int)param_4 + (int)pbVar11)) {
              puVar23 = puVar9 + 1;
              local_68 = puVar30 + 1;
              if (puVar23 < puVar26) {
                do {
                  if (*local_68 != *puVar23) {
                    uVar18 = *local_68 ^ *puVar23;
                    bVar3 = (byte)uVar18;
                    bVar4 = (byte)(uVar18 >> 8);
                    bVar5 = (byte)(uVar18 >> 0x10);
                    bVar1 = (byte)(uVar18 >> 0x18);
                    pbVar12 = (byte *)((int)puVar23 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar9));
                    goto joined_r0x0180d8b8;
                  }
                  puVar23 = puVar23 + 1;
                  local_68 = local_68 + 1;
                } while (puVar23 < puVar26);
              }
              goto LAB_0180d844;
            }
            uVar18 = *(uint *)(pbVar11 + iVar29) ^ *(uint *)((int)param_4 + (int)pbVar11);
            bVar3 = (byte)uVar18;
            bVar4 = (byte)(uVar18 >> 8);
            bVar5 = (byte)(uVar18 >> 0x10);
            bVar1 = (byte)(uVar18 >> 0x18);
            pbVar12 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar23 = puVar9;
            local_68 = puVar30;
LAB_0180d844:
            if (puVar23 < (uint *)((int)puVar10 + -1)) {
              if ((short)*local_68 == (short)*puVar23) {
                local_68 = (uint *)((int)local_68 + 2);
                puVar23 = (uint *)((int)puVar23 + 2);
              }
            }
            if ((puVar23 < puVar10) && ((byte)*local_68 == (byte)*puVar23)) {
              puVar23 = (uint *)((int)puVar23 + 1);
            }
            pbVar12 = (byte *)((int)puVar23 - (int)puVar9);
          }
joined_r0x0180d8b8:
          if (pbVar19 == (byte *)((int)puVar30 + (int)pbVar12)) {
            puVar10 = (uint *)((int)puVar9 + (int)pbVar12);
            if (puVar10 < puVar15) {
              if (*puVar13 == *(uint *)((int)puVar9 + (int)pbVar12)) {
                puVar9 = puVar10 + 1;
                local_68 = puVar13 + 1;
                if (puVar9 < puVar15) {
                  do {
                    if (*local_68 != *puVar9) {
                      uVar18 = *local_68 ^ *puVar9;
                      bVar3 = (byte)uVar18;
                      bVar4 = (byte)(uVar18 >> 8);
                      bVar5 = (byte)(uVar18 >> 0x10);
                      bVar1 = (byte)(uVar18 >> 0x18);
                      pbVar31 = (byte *)((int)puVar9 +
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
                                        (int)puVar10));
                      goto LAB_0180d8f0;
                    }
                    puVar9 = puVar9 + 1;
                    local_68 = local_68 + 1;
                  } while (puVar9 < puVar15);
                }
                goto LAB_0180d98c;
              }
              uVar18 = *puVar13 ^ *(uint *)((int)puVar9 + (int)pbVar12);
              bVar3 = (byte)uVar18;
              bVar4 = (byte)(uVar18 >> 8);
              bVar5 = (byte)(uVar18 >> 0x10);
              bVar1 = (byte)(uVar18 >> 0x18);
              pbVar31 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
              puVar9 = puVar10;
              local_68 = puVar13;
LAB_0180d98c:
              if (puVar9 < (uint *)((int)param_5 + -1)) {
                if ((short)*local_68 == (short)*puVar9) {
                  local_68 = (uint *)((int)local_68 + 2);
                  puVar9 = (uint *)((int)puVar9 + 2);
                }
              }
              if ((puVar9 < param_5) && ((byte)*local_68 == (byte)*puVar9)) {
                puVar9 = (uint *)((int)puVar9 + 1);
              }
              pbVar31 = (byte *)((int)puVar9 - (int)puVar10);
            }
LAB_0180d8f0:
            pbVar12 = pbVar12 + (int)pbVar31;
          }
          pbVar11 = pbVar11 + (int)pbVar12;
          if (pbVar7 <= pbVar11 + uVar16) {
            iVar29 = iVar17 + uVar16;
          }
        }
        else {
          iVar29 = iVar17 + uVar16;
          puVar30 = (uint *)(pbVar11 + iVar29);
          puVar10 = puVar9;
          if (puVar9 < puVar15) {
            if (*(uint *)(pbVar11 + iVar29) == *(uint *)((int)param_4 + (int)pbVar11)) {
              do {
                puVar10 = puVar10 + 1;
                puVar30 = puVar30 + 1;
                if (puVar15 <= puVar10) goto LAB_0180d7e8;
              } while (*puVar30 == *puVar10);
              uVar18 = *puVar30 ^ *puVar10;
              bVar3 = (byte)uVar18;
              bVar4 = (byte)(uVar18 >> 8);
              bVar5 = (byte)(uVar18 >> 0x10);
              bVar1 = (byte)(uVar18 >> 0x18);
              pbVar12 = (byte *)((int)puVar10 +
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
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)puVar9));
            }
            else {
              uVar18 = *(uint *)(pbVar11 + iVar29) ^ *(uint *)((int)param_4 + (int)pbVar11);
              bVar3 = (byte)uVar18;
              bVar4 = (byte)(uVar18 >> 8);
              bVar5 = (byte)(uVar18 >> 0x10);
              bVar1 = (byte)(uVar18 >> 0x18);
              pbVar12 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
          }
          else {
LAB_0180d7e8:
            if (puVar10 < (uint *)((int)param_5 + -1)) {
              if ((short)*puVar30 == (short)*puVar10) {
                puVar10 = (uint *)((int)puVar10 + 2);
                puVar30 = (uint *)((int)puVar30 + 2);
              }
            }
            if ((puVar10 < param_5) && ((byte)*puVar30 == (byte)*puVar10)) {
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            pbVar12 = (byte *)((int)puVar10 - (int)puVar9);
          }
          pbVar11 = pbVar11 + (int)pbVar12;
        }
        if (local_38 < pbVar11) {
          if (local_6c + -uVar16 < pbVar11) {
            local_6c = pbVar11 + uVar16;
          }
          iVar20 = local_44 * 8;
          *(uint *)(param_1 + local_44 * 8) = (uVar22 + 3) - uVar16;
          local_44 = local_44 + 1;
          *(byte **)(param_1 + iVar20 + 4) = pbVar11;
          if ((byte *)0x1000 < pbVar11 || param_5 == (uint *)((int)param_4 + (int)pbVar11)) break;
          local_38 = pbVar11;
        }
        puVar9 = (uint *)(iVar6 + (uVar24 & uVar16) * 8);
        if (pbVar11[iVar29] < (byte)*(uint *)((int)param_4 + (int)pbVar11)) {
          *local_4c = uVar16;
          if (uVar16 <= local_5c) {
            local_4c = &local_30;
            break;
          }
          uVar16 = puVar9[1];
          local_4c = puVar9 + 1;
          pbVar21 = pbVar11;
        }
        else {
          *local_50 = uVar16;
          if (uVar16 <= local_5c) {
            local_50 = &local_30;
            break;
          }
          uVar16 = *(uint *)(iVar6 + (uVar24 & uVar16) * 8);
          pbVar27 = pbVar11;
          local_50 = puVar9;
        }
        local_34 = local_34 + -1;
      } while (unaff_r6 <= uVar16 && local_34 != 0);
    }
    *local_50 = 0;
    *local_4c = 0;
    *(byte **)(param_2 + 0x1c) = local_6c + -8;
  }
LAB_0180dad8:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_44;
}

