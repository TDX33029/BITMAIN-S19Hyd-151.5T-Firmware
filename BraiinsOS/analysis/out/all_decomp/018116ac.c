// FUN_018116ac @ 018116ac size=3628 calls_out=2 calls_in=0
// strings: 

int FUN_018116ac(int param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5,int *param_6
                ,uint param_7,int param_8)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  char *pcVar24;
  uint *puVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  char *pcVar29;
  uint *puVar30;
  uint uVar31;
  int iVar32;
  uint *puVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  undefined4 *puVar39;
  uint *puVar40;
  bool bVar41;
  uint local_5c;
  uint *local_58;
  uint *local_54;
  char *local_4c;
  int local_48;
  uint *local_40;
  char *local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  iVar35 = *(int *)(param_2 + 4);
  uVar27 = *(uint *)(param_2 + 0x1c);
  puVar14 = (uint *)(iVar35 + uVar27);
  local_2c = DAT_018ddaf8;
  if (param_4 < puVar14) {
    local_48 = 0;
    goto LAB_01811bec;
  }
  uVar34 = (int)param_4 - iVar35;
  if (uVar27 < uVar34) {
    while( true ) {
      iVar6 = FUN_0180a33c(param_2,puVar14,param_5,uVar34,0);
      uVar27 = uVar27 + iVar6;
      if (uVar34 <= uVar27) break;
      puVar14 = (uint *)(iVar35 + uVar27);
    }
  }
  uVar15 = *param_4;
  uVar27 = param_4[1];
  iVar28 = *(int *)(param_2 + 0x5c);
  *(uint *)(param_2 + 0x1c) = uVar34;
  iVar32 = *(int *)(param_2 + 100);
  lVar2 = (ulonglong)uVar15 * 0xbb000000;
  uVar7 = (uint)lVar2;
  iVar6 = *(int *)(param_2 + 0xc0);
  uVar36 = uVar27 * -0x45000000 + uVar15 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = uVar7 >> (0x40U - iVar6 & 0xff) | uVar36 << (iVar6 - 0x20U & 0xff) |
           uVar36 >> (0x20U - iVar6 & 0xff);
  iVar6 = *(int *)(param_2 + 0xc);
  uVar27 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
  uVar15 = *(uint *)(iVar28 + uVar20 * 4);
  puVar14 = (uint *)(iVar35 + iVar6);
  if (uVar27 < uVar34) {
    local_5c = uVar34 - uVar27;
  }
  else {
    local_5c = 0;
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  puVar39 = *(undefined4 **)(param_2 + 0xb4);
  uVar31 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
  bVar41 = uVar34 - uVar8 <= uVar31;
  uVar17 = uVar15;
  if (!bVar41) {
    uVar17 = uVar34 - uVar31;
  }
  if (bVar41) {
    uVar17 = uVar8;
  }
  uVar31 = puVar39[4];
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar17 = uVar8;
  }
  uVar18 = ~(-1 << (puVar39[0x2f] - 1 & 0xff));
  iVar21 = puVar39[1];
  pcVar9 = (char *)*puVar39;
  pcVar10 = pcVar9 + -iVar21;
  uVar37 = *(uint *)(param_2 + 0xc4);
  uVar8 = uVar31;
  if (uVar18 < (int)pcVar10 - uVar31) {
    uVar8 = (int)pcVar10 - uVar18;
  }
  iVar38 = puVar39[0x30];
  local_38 = (char *)(param_8 + -1);
  if (param_7 < param_7 + 3) {
    local_48 = 0;
    pcVar29 = (char *)0xfff;
    if (*(char **)(param_2 + 0xcc) < (char *)0xfff) {
      pcVar29 = *(char **)(param_2 + 0xcc);
    }
    uVar11 = param_7;
    do {
      if (uVar11 == 3) {
        iVar22 = *param_6 + -1;
      }
      else {
        iVar22 = param_6[uVar11];
      }
      uVar19 = uVar34 - iVar22;
      if ((char *)(iVar22 + -1) < (char *)(uVar34 - iVar6)) {
        bVar41 = uVar17 == uVar19;
        if (uVar17 <= uVar19) {
          bVar41 = *(uint *)((int)param_4 - iVar22) == *param_4;
        }
        if (!bVar41) goto LAB_018119a8;
        puVar40 = param_4 + 1;
        puVar16 = (uint *)((int)param_4 + (4 - iVar22));
        if (puVar40 < (uint *)((int)param_5 + -3)) {
          uVar19 = *(uint *)((int)param_4 + (4 - iVar22));
          if (uVar19 == param_4[1]) {
            puVar25 = param_4 + 2;
            while( true ) {
              puVar16 = puVar16 + 1;
              if ((uint *)((int)param_5 + -3) <= puVar25) break;
              if (*puVar16 != *puVar25) {
                uVar19 = *puVar16 ^ *puVar25;
                bVar3 = (byte)uVar19;
                bVar4 = (byte)(uVar19 >> 8);
                bVar5 = (byte)(uVar19 >> 0x10);
                bVar1 = (byte)(uVar19 >> 0x18);
                pcVar23 = (char *)((int)puVar25 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                    bVar3 >> 1 & 1) << 1 |
                                                                   bVar3 >> 2 & 1) << 1 |
                                                                  bVar3 >> 3 & 1) << 1 |
                                                                 bVar3 >> 4 & 1) << 1 |
                                                                bVar3 >> 5 & 1) << 1 |
                                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar40) + 4);
                if (local_38 < pcVar23) goto LAB_018121d4;
                goto LAB_018119a8;
              }
              puVar25 = puVar25 + 1;
            }
            goto LAB_0181217c;
          }
          uVar19 = uVar19 ^ param_4[1];
          bVar3 = (byte)uVar19;
          bVar4 = (byte)(uVar19 >> 8);
          bVar5 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar25 = puVar40;
LAB_0181217c:
          if (puVar25 < (uint *)((int)param_5 + -1)) {
            if ((short)*puVar16 == (short)*puVar25) {
              puVar16 = (uint *)((int)puVar16 + 2);
              puVar25 = (uint *)((int)puVar25 + 2);
            }
          }
          if ((puVar25 < param_5) && ((char)*puVar16 == (char)*puVar25)) {
            puVar25 = (uint *)((int)puVar25 + 1);
          }
          pcVar23 = (char *)((int)puVar25 - (int)puVar40);
        }
LAB_018121c4:
        pcVar23 = pcVar23 + 4;
        if (local_38 < pcVar23) {
LAB_018121d4:
          iVar22 = local_48 * 8;
          *(uint *)(param_1 + local_48 * 8) = (1 - param_7) + uVar11;
          local_48 = local_48 + 1;
          *(char **)(param_1 + iVar22 + 4) = pcVar23;
          if (param_5 == (uint *)((int)param_4 + (int)pcVar23) || pcVar29 < pcVar23)
          goto LAB_01811bec;
          local_38 = pcVar23;
        }
      }
      else if ((!(pcVar10 + ((uVar34 - uVar31) - uVar17) <= (char *)(iVar22 + -1) ||
                 ((iVar6 + -1) - uVar34) + iVar22 < 3)) &&
              (iVar22 = iVar21 + (uVar19 - uVar17),
              *param_4 == *(uint *)(pcVar10 + iVar21 + (uVar19 - uVar17)))) {
        puVar25 = (uint *)(pcVar10 + iVar22 + 4);
        puVar40 = param_4 + 1;
        puVar16 = (uint *)((int)puVar40 + ((int)pcVar9 - (int)puVar25));
        if (param_5 < puVar16) {
          puVar16 = param_5;
        }
        puVar12 = (uint *)((int)puVar16 + -3);
        if (puVar40 < puVar12) {
          if (*(uint *)(pcVar10 + iVar22 + 4) == param_4[1]) {
            puVar30 = param_4 + 2;
            puVar33 = (uint *)(pcVar10 + iVar22 + 8);
            if (puVar30 < puVar12) {
              do {
                if (*puVar33 != *puVar30) {
                  uVar19 = *puVar33 ^ *puVar30;
                  bVar3 = (byte)uVar19;
                  bVar4 = (byte)(uVar19 >> 8);
                  bVar5 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar23 = (char *)((int)puVar30 +
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
                                    (int)puVar40));
                  goto LAB_01812348;
                }
                puVar30 = puVar30 + 1;
                puVar33 = puVar33 + 1;
              } while (puVar30 < puVar12);
            }
            goto LAB_018122ec;
          }
          uVar19 = param_4[1] ^ *(uint *)(pcVar10 + iVar22 + 4);
          bVar3 = (byte)uVar19;
          bVar4 = (byte)(uVar19 >> 8);
          bVar5 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar33 = puVar25;
          puVar30 = puVar40;
LAB_018122ec:
          if (puVar30 < (uint *)((int)puVar16 + -1)) {
            if ((short)*puVar33 == (short)*puVar30) {
              puVar33 = (uint *)((int)puVar33 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < puVar16) && ((char)*puVar33 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar23 = (char *)((int)puVar30 - (int)puVar40);
        }
LAB_01812348:
        if (pcVar9 != (char *)((int)puVar25 + (int)pcVar23)) goto LAB_018121c4;
        puVar25 = (uint *)((int)puVar40 + (int)pcVar23);
        puVar16 = (uint *)((int)param_5 + -3);
        if (puVar25 < puVar16) {
          if (*puVar14 == *(uint *)((int)puVar40 + (int)pcVar23)) {
            puVar40 = puVar25 + 1;
            local_34 = puVar14 + 1;
            if (puVar40 < puVar16) {
              do {
                if (*local_34 != *puVar40) {
                  uVar19 = *local_34 ^ *puVar40;
                  bVar3 = (byte)uVar19;
                  bVar4 = (byte)(uVar19 >> 8);
                  bVar5 = (byte)(uVar19 >> 0x10);
                  bVar1 = (byte)(uVar19 >> 0x18);
                  pcVar24 = (char *)((int)puVar40 +
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
                                    (int)puVar25));
                  goto LAB_018123d8;
                }
                puVar40 = puVar40 + 1;
                local_34 = local_34 + 1;
              } while (puVar40 < puVar16);
            }
            goto LAB_01812378;
          }
          uVar19 = *puVar14 ^ *(uint *)((int)puVar40 + (int)pcVar23);
          bVar3 = (byte)uVar19;
          bVar4 = (byte)(uVar19 >> 8);
          bVar5 = (byte)(uVar19 >> 0x10);
          bVar1 = (byte)(uVar19 >> 0x18);
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
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar40 = puVar25;
          local_34 = puVar14;
LAB_01812378:
          if (puVar40 < (uint *)((int)param_5 + -1)) {
            if ((short)*local_34 == (short)*puVar40) {
              local_34 = (uint *)((int)local_34 + 2);
              puVar40 = (uint *)((int)puVar40 + 2);
            }
          }
          if ((puVar40 < param_5) && ((char)*local_34 == (char)*puVar40)) {
            puVar40 = (uint *)((int)puVar40 + 1);
          }
          pcVar24 = (char *)((int)puVar40 - (int)puVar25);
        }
LAB_018123d8:
        pcVar23 = pcVar23 + (int)pcVar24;
        goto LAB_018121c4;
      }
LAB_018119a8:
      uVar11 = uVar11 + 1;
    } while (param_7 + 3 != uVar11);
  }
  else {
    local_48 = 0;
  }
  *(uint *)(iVar28 + uVar20 * 4) = uVar34;
  local_34 = (uint *)(1 << (uVar37 & 0xff));
  uVar20 = 1;
  if (uVar17 != 0) {
    uVar20 = uVar17;
  }
  iVar6 = (uVar34 & uVar27) * 8;
  local_54 = (uint *)(iVar32 + iVar6);
  local_4c = (char *)(uVar34 + 9);
  if (uVar15 < uVar20) {
    *(undefined4 *)(iVar32 + (uVar34 & uVar27) * 8) = 0;
    local_54[1] = 0;
LAB_01811dc4:
    uVar27 = *(uint *)(puVar39[0x17] +
                      (uVar7 >> (0x40U - iVar38 & 0xff) | uVar36 << (iVar38 - 0x20U & 0xff) |
                      uVar36 >> (0x20U - iVar38 & 0xff)) * 4);
    if (uVar31 < uVar27) {
      iVar6 = puVar39[0x19];
      pcVar29 = (char *)0x0;
      pcVar23 = (char *)0x0;
      puVar16 = (uint *)((int)param_5 + -3);
      do {
        iVar28 = iVar21 + uVar27;
        if (pcVar29 < pcVar23) {
          pcVar24 = pcVar29;
        }
        else {
          pcVar24 = pcVar23;
        }
        puVar25 = (uint *)(pcVar24 + iVar28);
        puVar12 = (uint *)((int)param_4 + (int)pcVar24);
        puVar40 = (uint *)((int)puVar12 + ((int)pcVar9 - (int)puVar25));
        if (param_5 < puVar40) {
          puVar40 = param_5;
        }
        puVar33 = (uint *)((int)puVar40 + -3);
        if (puVar12 < puVar33) {
          if (*(uint *)(pcVar24 + iVar28) == *(uint *)((int)param_4 + (int)pcVar24)) {
            puVar30 = puVar12 + 1;
            local_40 = puVar25 + 1;
            if (puVar30 < puVar33) {
              do {
                if (*local_40 != *puVar30) {
                  uVar7 = *local_40 ^ *puVar30;
                  bVar3 = (byte)uVar7;
                  bVar4 = (byte)(uVar7 >> 8);
                  bVar5 = (byte)(uVar7 >> 0x10);
                  bVar1 = (byte)(uVar7 >> 0x18);
                  pcVar26 = (char *)((int)puVar30 +
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
                                    (int)puVar12));
                  goto joined_r0x01811e70;
                }
                puVar30 = puVar30 + 1;
                local_40 = local_40 + 1;
              } while (puVar30 < puVar33);
            }
            goto LAB_01811fa8;
          }
          uVar7 = *(uint *)(pcVar24 + iVar28) ^ *(uint *)((int)param_4 + (int)pcVar24);
          bVar3 = (byte)uVar7;
          bVar4 = (byte)(uVar7 >> 8);
          bVar5 = (byte)(uVar7 >> 0x10);
          bVar1 = (byte)(uVar7 >> 0x18);
          pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar30 = puVar12;
          local_40 = puVar25;
LAB_01811fa8:
          if (puVar30 < (uint *)((int)puVar40 + -1)) {
            if ((short)*local_40 == (short)*puVar30) {
              local_40 = (uint *)((int)local_40 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < puVar40) && ((char)*local_40 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar26 = (char *)((int)puVar30 - (int)puVar12);
        }
joined_r0x01811e70:
        if (pcVar9 == (char *)((int)puVar25 + (int)pcVar26)) {
          puVar40 = (uint *)((int)puVar12 + (int)pcVar26);
          if (puVar40 < puVar16) {
            if (*puVar14 == *(uint *)((int)puVar12 + (int)pcVar26)) {
              puVar25 = puVar40 + 1;
              local_40 = puVar14 + 1;
              if (puVar25 < puVar16) {
                do {
                  if (*local_40 != *puVar25) {
                    uVar7 = *local_40 ^ *puVar25;
                    bVar3 = (byte)uVar7;
                    bVar4 = (byte)(uVar7 >> 8);
                    bVar5 = (byte)(uVar7 >> 0x10);
                    bVar1 = (byte)(uVar7 >> 0x18);
                    pcVar13 = (char *)((int)puVar25 +
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
                                                                  )) >> 3) - (int)puVar40));
                    goto LAB_01812054;
                  }
                  puVar25 = puVar25 + 1;
                  local_40 = local_40 + 1;
                } while (puVar25 < puVar16);
              }
              goto LAB_018120b4;
            }
            uVar7 = *puVar14 ^ *(uint *)((int)puVar12 + (int)pcVar26);
            bVar3 = (byte)uVar7;
            bVar4 = (byte)(uVar7 >> 8);
            bVar5 = (byte)(uVar7 >> 0x10);
            bVar1 = (byte)(uVar7 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar25 = puVar40;
            local_40 = puVar14;
LAB_018120b4:
            if (puVar25 < (uint *)((int)param_5 + -1)) {
              if ((short)*local_40 == (short)*puVar25) {
                local_40 = (uint *)((int)local_40 + 2);
                puVar25 = (uint *)((int)puVar25 + 2);
              }
            }
            if ((puVar25 < param_5) && ((char)*local_40 == (char)*puVar25)) {
              puVar25 = (uint *)((int)puVar25 + 1);
            }
            pcVar13 = (char *)((int)puVar25 - (int)puVar40);
          }
LAB_01812054:
          pcVar26 = pcVar26 + (int)pcVar13;
        }
        pcVar24 = pcVar24 + (int)pcVar26;
        iVar32 = (uVar17 - (int)pcVar10) + uVar27;
        if (pcVar10 <= pcVar24 + uVar27) {
          iVar28 = iVar35 + iVar32;
        }
        if (local_38 < pcVar24) {
          if (local_4c + -iVar32 < pcVar24) {
            local_4c = pcVar24 + iVar32;
          }
          *(uint *)(param_1 + local_48 * 8) = (uVar34 + 3) - iVar32;
          *(char **)(param_1 + local_48 * 8 + 4) = pcVar24;
          local_48 = local_48 + 1;
          if (param_5 == (uint *)((int)param_4 + (int)pcVar24) || (char *)0x1000 < pcVar24) break;
          local_38 = pcVar24;
        }
        if (uVar27 <= uVar8) break;
        bVar41 = (byte)pcVar24[iVar28] < *(byte *)((int)param_4 + (int)pcVar24);
        if (bVar41) {
          pcVar29 = pcVar24;
        }
        else {
          pcVar23 = pcVar24;
        }
        if (bVar41) {
          uVar27 = *(uint *)(iVar6 + (uVar27 & uVar18) * 8 + 4);
        }
        else {
          uVar27 = *(uint *)(iVar6 + (uVar27 & uVar18) * 8);
        }
        local_34 = (uint *)((int)local_34 + -1);
      } while (uVar31 < uVar27 && local_34 != (uint *)0x0);
    }
  }
  else {
    pcVar29 = (char *)0x0;
    local_58 = (uint *)(iVar32 + iVar6 + 4);
    pcVar23 = (char *)0x0;
    puVar16 = (uint *)((int)param_5 + -3);
    do {
      if (pcVar23 < pcVar29) {
        pcVar24 = pcVar23;
      }
      else {
        pcVar24 = pcVar29;
      }
      iVar6 = iVar35 + uVar15;
      puVar25 = (uint *)((int)param_4 + (int)pcVar24);
      puVar40 = (uint *)(pcVar24 + iVar6);
      if (puVar25 < puVar16) {
        if (*(uint *)(pcVar24 + iVar6) == *(uint *)((int)param_4 + (int)pcVar24)) {
          puVar12 = puVar25 + 1;
          puVar40 = puVar40 + 1;
          if (puVar12 < puVar16) {
            do {
              if (*puVar40 != *puVar12) {
                uVar37 = *puVar40 ^ *puVar12;
                bVar3 = (byte)uVar37;
                bVar4 = (byte)(uVar37 >> 8);
                bVar5 = (byte)(uVar37 >> 0x10);
                bVar1 = (byte)(uVar37 >> 0x18);
                pcVar26 = (char *)((int)puVar12 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                    bVar3 >> 1 & 1) << 1 |
                                                                   bVar3 >> 2 & 1) << 1 |
                                                                  bVar3 >> 3 & 1) << 1 |
                                                                 bVar3 >> 4 & 1) << 1 |
                                                                bVar3 >> 5 & 1) << 1 |
                                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar25));
                goto LAB_01811a80;
              }
              puVar12 = puVar12 + 1;
              puVar40 = puVar40 + 1;
            } while (puVar12 < puVar16);
          }
          goto LAB_01811b84;
        }
        uVar37 = *(uint *)(pcVar24 + iVar6) ^ *(uint *)((int)param_4 + (int)pcVar24);
        bVar3 = (byte)uVar37;
        bVar4 = (byte)(uVar37 >> 8);
        bVar5 = (byte)(uVar37 >> 0x10);
        bVar1 = (byte)(uVar37 >> 0x18);
        pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar12 = puVar25;
LAB_01811b84:
        if (puVar12 < (uint *)((int)param_5 + -1)) {
          if ((short)*puVar40 == (short)*puVar12) {
            puVar12 = (uint *)((int)puVar12 + 2);
            puVar40 = (uint *)((int)puVar40 + 2);
          }
        }
        if ((puVar12 < param_5) && ((char)*puVar40 == (char)*puVar12)) {
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        pcVar26 = (char *)((int)puVar12 - (int)puVar25);
      }
LAB_01811a80:
      pcVar24 = pcVar24 + (int)pcVar26;
      if (local_38 < pcVar24) {
        if (local_4c + -uVar15 < pcVar24) {
          local_4c = pcVar24 + uVar15;
        }
        *(uint *)(param_1 + local_48 * 8) = (uVar34 + 3) - uVar15;
        iVar28 = local_48 * 8;
        local_48 = local_48 + 1;
        *(char **)(param_1 + iVar28 + 4) = pcVar24;
        if ((char *)0x1000 < pcVar24 || param_5 == (uint *)((int)param_4 + (int)pcVar24)) {
          *local_58 = 0;
          *local_54 = 0;
          *(char **)(param_2 + 0x1c) = local_4c + -8;
          goto LAB_01811bec;
        }
        local_38 = pcVar24;
      }
      puVar40 = (uint *)(iVar32 + (uVar27 & uVar15) * 8);
      if ((byte)pcVar24[iVar6] < *(byte *)((int)param_4 + (int)pcVar24)) {
        *local_54 = uVar15;
        if (uVar15 <= local_5c) {
          local_54 = &local_30;
          goto LAB_018122b0;
        }
        uVar15 = puVar40[1];
        local_54 = puVar40 + 1;
        pcVar23 = pcVar24;
      }
      else {
        *local_58 = uVar15;
        if (uVar15 <= local_5c) {
          local_58 = &local_30;
LAB_018122b0:
          *local_58 = 0;
          *local_54 = 0;
          goto LAB_01811dc4;
        }
        uVar15 = *(uint *)(iVar32 + (uVar27 & uVar15) * 8);
        pcVar29 = pcVar24;
        local_58 = puVar40;
      }
      local_34 = (uint *)((int)local_34 + -1);
    } while (uVar20 <= uVar15 && local_34 != (uint *)0x0);
    *local_58 = 0;
    *local_54 = 0;
    if (local_34 != (uint *)0x0) goto LAB_01811dc4;
  }
  *(char **)(param_2 + 0x1c) = local_4c + -8;
LAB_01811bec:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_48;
}

