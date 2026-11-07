// FUN_018124e4 @ 018124e4 size=4156 calls_out=2 calls_in=0
// strings: 

int FUN_018124e4(int *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                uint param_7,int param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  char *pcVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  char *pcVar28;
  uint *puVar29;
  int iVar30;
  undefined4 *puVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  char *pcVar35;
  char *pcVar36;
  uint *puVar37;
  uint *puVar38;
  uint uVar39;
  bool bVar40;
  int local_6c;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  char *local_4c;
  uint *local_40;
  char *local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  
  local_34 = param_6;
  iVar30 = *(int *)(param_2 + 4);
  uVar25 = *(uint *)(param_2 + 0x1c);
  puVar10 = (uint *)(iVar30 + uVar25);
  local_2c = DAT_018ddaf8;
  if (param_4 < puVar10) {
    local_6c = 0;
    goto LAB_01812b7c;
  }
  uVar32 = (int)param_4 - iVar30;
  if (uVar25 < uVar32) {
    while( true ) {
      iVar5 = FUN_01809590(param_2,puVar10,param_5,uVar32,0);
      uVar25 = uVar25 + iVar5;
      if (uVar32 <= uVar25) break;
      puVar10 = (uint *)(iVar30 + uVar25);
    }
  }
  *(uint *)(param_2 + 0x1c) = uVar32;
  iVar33 = *(int *)(param_2 + 0x5c);
  puVar10 = *(uint **)(param_2 + 100);
  iVar5 = *(int *)(param_2 + 0xc);
  uVar25 = *param_4 * -0x61c8864f >> (0x20U - *(int *)(param_2 + 0xc0) & 0xff);
  uVar6 = ~(-1 << (*(int *)(param_2 + 0xbc) - 1U & 0xff));
  pcVar28 = (char *)0xfff;
  if (*(char **)(param_2 + 0xcc) < (char *)0xfff) {
    pcVar28 = *(char **)(param_2 + 0xcc);
  }
  uVar14 = *(uint *)(iVar33 + uVar25 * 4);
  puVar18 = (uint *)(iVar30 + iVar5);
  if (uVar6 < uVar32) {
    local_60 = uVar32 - uVar6;
  }
  else {
    local_60 = 0;
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  puVar31 = *(undefined4 **)(param_2 + 0xb4);
  uVar39 = 1 << (*(uint *)(param_2 + 0xb8) & 0xff);
  uVar34 = uVar32 - uVar7;
  bVar40 = uVar34 <= uVar39;
  if (!bVar40) {
    uVar34 = uVar32 - uVar39;
  }
  if (bVar40) {
    uVar34 = uVar7;
  }
  uVar39 = puVar31[4];
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar34 = uVar7;
  }
  pcVar35 = (char *)*puVar31;
  uVar7 = ~(-1 << (puVar31[0x2f] - 1 & 0xff));
  iVar19 = puVar31[1];
  pcVar36 = pcVar35 + -iVar19;
  uVar26 = *(uint *)(param_2 + 0xc4);
  if (uVar7 < (int)pcVar36 - uVar39) {
    uVar20 = (int)pcVar36 - uVar7;
  }
  else {
    uVar20 = uVar39;
  }
  iVar27 = puVar31[0x30];
  local_38 = (char *)(param_8 + -1);
  if (param_7 < param_7 + 3) {
    local_6c = 0;
    uVar21 = param_7;
    do {
      if (uVar21 == 3) {
        uVar15 = *param_6 - 1;
      }
      else {
        uVar15 = param_6[uVar21];
      }
      uVar11 = uVar32 - uVar15;
      if ((char *)(uVar15 - 1) < (char *)(uVar32 - iVar5)) {
        bVar40 = uVar34 == uVar11;
        if (uVar34 <= uVar11) {
          bVar40 = *(int *)((int)param_4 - uVar15) * 0x100 == *param_4 * 0x100;
        }
        if (!bVar40) goto LAB_018127c4;
        puVar16 = (uint *)((int)param_4 + 3);
        puVar37 = (uint *)((int)param_5 + -3);
        puVar8 = (uint *)((int)param_4 + (3 - uVar15));
        if (puVar16 < puVar37) {
          uVar15 = *(uint *)((int)param_4 + (3 - uVar15));
          if (uVar15 == *(uint *)((int)param_4 + 3)) {
            puVar12 = (uint *)((int)param_4 + 7);
            puVar8 = puVar8 + 1;
            if (puVar12 < puVar37) {
              do {
                if (*puVar8 != *puVar12) {
                  uVar15 = *puVar8 ^ *puVar12;
                  bVar2 = (byte)uVar15;
                  bVar3 = (byte)(uVar15 >> 8);
                  bVar4 = (byte)(uVar15 >> 0x10);
                  bVar1 = (byte)(uVar15 >> 0x18);
                  pcVar17 = (char *)((int)puVar12 +
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
                                    (int)puVar16) + 3);
                  if (local_38 < pcVar17) goto LAB_01812c14;
                  goto LAB_018127c4;
                }
                puVar12 = puVar12 + 1;
                puVar8 = puVar8 + 1;
              } while (puVar12 < puVar37);
            }
            goto LAB_01812bc0;
          }
          uVar15 = uVar15 ^ *(uint *)((int)param_4 + 3);
          bVar2 = (byte)uVar15;
          bVar3 = (byte)(uVar15 >> 8);
          bVar4 = (byte)(uVar15 >> 0x10);
          bVar1 = (byte)(uVar15 >> 0x18);
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
          puVar12 = puVar16;
LAB_01812bc0:
          if (puVar12 < (uint *)((int)param_5 + -1)) {
            if ((ushort)*puVar8 == (ushort)*puVar12) {
              puVar8 = (uint *)((int)puVar8 + 2);
              puVar12 = (uint *)((int)puVar12 + 2);
            }
          }
          if ((puVar12 < param_5) && ((char)*puVar8 == (char)*puVar12)) {
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          pcVar17 = (char *)((int)puVar12 - (int)puVar16);
        }
LAB_01812c04:
        pcVar17 = pcVar17 + 3;
        if (local_38 < pcVar17) {
LAB_01812c14:
          param_1[local_6c * 2] = (1 - param_7) + uVar21;
          iVar13 = local_6c + 1;
          param_1[local_6c * 2 + 1] = (int)pcVar17;
          local_6c = iVar13;
          if (param_5 == (uint *)((int)param_4 + (int)pcVar17) || pcVar28 < pcVar17)
          goto LAB_01812b7c;
          local_38 = pcVar17;
        }
      }
      else if ((!(pcVar36 + ((uVar32 - uVar39) - uVar34) <= (char *)(uVar15 - 1) ||
                 ((iVar5 + -1) - uVar32) + uVar15 < 3)) &&
              (iVar13 = iVar19 + (uVar11 - uVar34),
              *(int *)(pcVar36 + iVar19 + (uVar11 - uVar34)) * 0x100 == *param_4 * 0x100)) {
        puVar37 = (uint *)(pcVar36 + iVar13 + 3);
        puVar16 = (uint *)((int)param_4 + 3);
        puVar8 = (uint *)((int)puVar16 + ((int)pcVar35 - (int)puVar37));
        if (param_5 < puVar8) {
          puVar8 = param_5;
        }
        puVar12 = (uint *)((int)puVar8 + -3);
        if (puVar16 < puVar12) {
          if (*(uint *)(pcVar36 + iVar13 + 3) == *(uint *)((int)param_4 + 3)) {
            puVar38 = (uint *)((int)param_4 + 7);
            puVar29 = (uint *)(pcVar36 + iVar13 + 7);
            if (puVar38 < puVar12) {
              do {
                local_34 = puVar12;
                if (*puVar29 != *puVar38) {
                  uVar15 = *puVar29 ^ *puVar38;
                  bVar2 = (byte)uVar15;
                  bVar3 = (byte)(uVar15 >> 8);
                  bVar4 = (byte)(uVar15 >> 0x10);
                  bVar1 = (byte)(uVar15 >> 0x18);
                  pcVar17 = (char *)((int)puVar38 +
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
                                    (int)puVar16));
                  goto LAB_0181325c;
                }
                puVar38 = puVar38 + 1;
                puVar29 = puVar29 + 1;
              } while (puVar38 < puVar12);
            }
            goto LAB_01813208;
          }
          uVar15 = *(uint *)((int)param_4 + 3) ^ *(uint *)(pcVar36 + iVar13 + 3);
          bVar2 = (byte)uVar15;
          bVar3 = (byte)(uVar15 >> 8);
          bVar4 = (byte)(uVar15 >> 0x10);
          bVar1 = (byte)(uVar15 >> 0x18);
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
          puVar29 = puVar37;
          puVar38 = puVar16;
LAB_01813208:
          if (puVar38 < (uint *)((int)puVar8 + -1)) {
            local_34 = (uint *)(uint)(ushort)*puVar29;
            if (local_34 == (uint *)(uint)(ushort)*puVar38) {
              puVar29 = (uint *)((int)puVar29 + 2);
              puVar38 = (uint *)((int)puVar38 + 2);
            }
          }
          if ((puVar38 < puVar8) && ((char)*puVar29 == (char)*puVar38)) {
            puVar38 = (uint *)((int)puVar38 + 1);
          }
          pcVar17 = (char *)((int)puVar38 - (int)puVar16);
        }
LAB_0181325c:
        if (pcVar35 != (char *)((int)puVar37 + (int)pcVar17)) goto LAB_01812c04;
        puVar37 = (uint *)((int)puVar16 + (int)pcVar17);
        puVar8 = (uint *)((int)param_5 + -3);
        if (puVar37 < puVar8) {
          if (*puVar18 == *(uint *)((int)puVar16 + (int)pcVar17)) {
            puVar12 = puVar37 + 1;
            puVar16 = puVar18 + 1;
            if (puVar12 < puVar8) {
              do {
                local_34 = puVar8;
                if (*puVar16 != *puVar12) {
                  uVar15 = *puVar16 ^ *puVar12;
                  bVar2 = (byte)uVar15;
                  bVar3 = (byte)(uVar15 >> 8);
                  bVar4 = (byte)(uVar15 >> 0x10);
                  bVar1 = (byte)(uVar15 >> 0x18);
                  pcVar22 = (char *)((int)puVar12 +
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
                                    (int)puVar37));
                  goto LAB_018132dc;
                }
                puVar12 = puVar12 + 1;
                puVar16 = puVar16 + 1;
              } while (puVar12 < puVar8);
            }
            goto LAB_01813288;
          }
          uVar15 = *(uint *)((int)puVar16 + (int)pcVar17) ^ *puVar18;
          bVar2 = (byte)uVar15;
          bVar3 = (byte)(uVar15 >> 8);
          bVar4 = (byte)(uVar15 >> 0x10);
          bVar1 = (byte)(uVar15 >> 0x18);
          pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar16 = puVar18;
          puVar12 = puVar37;
LAB_01813288:
          if (puVar12 < (uint *)((int)param_5 + -1)) {
            local_34 = (uint *)((int)puVar16 + 2);
            if ((ushort)*puVar16 == (ushort)*puVar12) {
              puVar16 = local_34;
              puVar12 = (uint *)((int)puVar12 + 2);
            }
          }
          if ((puVar12 < param_5) && ((char)*puVar16 == (char)*puVar12)) {
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          pcVar22 = (char *)((int)puVar12 - (int)puVar37);
        }
LAB_018132dc:
        pcVar17 = pcVar17 + (int)pcVar22;
        goto LAB_01812c04;
      }
LAB_018127c4:
      uVar21 = uVar21 + 1;
    } while (param_7 + 3 != uVar21);
  }
  else {
    local_6c = 0;
  }
  uVar21 = uVar34;
  if (uVar34 == 0) {
    uVar21 = 1;
  }
  if (local_38 < (char *)0x3) {
    uVar24 = *param_4;
    uVar11 = *param_3;
    uVar15 = 0x20 - *(int *)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x60);
    if (uVar11 < uVar32) {
      local_34 = puVar10;
    }
    if (uVar11 < uVar32) {
      do {
        *(uint *)(iVar5 + ((uint)(*(int *)(iVar30 + uVar11) * 0x35a7bd00) >> (uVar15 & 0xff)) * 4) =
             uVar11;
        uVar11 = uVar11 + 1;
      } while (uVar32 != uVar11);
      puVar10 = local_34;
    }
    *param_3 = uVar32;
    uVar15 = *(uint *)(iVar5 + (uVar24 * 0x35a7bd00 >> (uVar15 & 0xff)) * 4);
    bVar40 = uVar15 <= uVar21;
    if (uVar21 <= uVar15) {
      bVar40 = 0x3ffff < uVar32 - uVar15;
    }
    if (!bVar40) {
      puVar16 = (uint *)(iVar30 + uVar15);
      puVar8 = param_4;
      if (param_4 < (uint *)((int)param_5 + -3)) {
        if (*(uint *)(iVar30 + uVar15) == *param_4) {
          do {
            puVar8 = puVar8 + 1;
            puVar16 = puVar16 + 1;
            if ((uint *)((int)param_5 + -3) <= puVar8) {
              if (((uint *)((int)param_5 + -1) <= puVar8) || ((ushort)*puVar16 != (ushort)*puVar8))
              goto LAB_018134e0;
              goto LAB_01813500;
            }
          } while (*puVar16 == *puVar8);
          uVar11 = *puVar16 ^ *puVar8;
          bVar2 = (byte)uVar11;
          bVar3 = (byte)(uVar11 >> 8);
          bVar4 = (byte)(uVar11 >> 0x10);
          bVar1 = (byte)(uVar11 >> 0x18);
          pcVar17 = (char *)((int)puVar8 +
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
          uVar11 = *(uint *)(iVar30 + uVar15) ^ *param_4;
          bVar2 = (byte)uVar11;
          bVar3 = (byte)(uVar11 >> 8);
          bVar4 = (byte)(uVar11 >> 0x10);
          bVar1 = (byte)(uVar11 >> 0x18);
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
      }
      else {
        if (param_4 < (uint *)((int)param_5 + -1)) {
          if ((ushort)*param_4 == *(ushort *)(iVar30 + uVar15)) {
LAB_01813500:
            puVar8 = (uint *)((int)puVar8 + 2);
            puVar16 = (uint *)((int)puVar16 + 2);
LAB_018134e0:
            if (puVar8 < param_5) goto LAB_01813150;
          }
          else {
            if (param_5 <= param_4) goto LAB_01812800;
LAB_01813150:
            if ((char)*puVar16 == (char)*puVar8) goto LAB_018133f0;
          }
        }
        else {
          if ((param_5 <= param_4) || (*(char *)(iVar30 + uVar15) != (char)*param_4))
          goto LAB_01812800;
LAB_018133f0:
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        pcVar17 = (char *)((int)puVar8 - (int)param_4);
      }
      if ((char *)0x2 < pcVar17) {
        *param_1 = (uVar32 - uVar15) + 3;
        param_1[1] = (int)pcVar17;
        if (param_5 == (uint *)((int)param_4 + (int)pcVar17) || pcVar28 < pcVar17) {
          *(uint *)(param_2 + 0x1c) = uVar32 + 1;
          local_6c = 1;
          goto LAB_01812b7c;
        }
        local_6c = 1;
        local_38 = pcVar17;
      }
    }
  }
LAB_01812800:
  *(uint *)(iVar33 + uVar25 * 4) = uVar32;
  uVar25 = uVar32 & uVar6;
  local_34 = (uint *)(1 << (uVar26 & 0xff));
  local_58 = puVar10 + uVar25 * 2;
  local_4c = (char *)(uVar32 + 9);
  if (uVar14 < uVar21) {
    puVar10[uVar25 * 2] = 0;
    local_58[1] = 0;
LAB_01812cd4:
    uVar25 = *(uint *)(puVar31[0x17] + (*param_4 * -0x61c8864f >> (0x20U - iVar27 & 0xff)) * 4);
    if (uVar39 < uVar25) {
      iVar5 = puVar31[0x19];
      pcVar28 = (char *)0x0;
      pcVar17 = (char *)0x0;
      puVar10 = (uint *)((int)param_5 + -3);
      do {
        iVar33 = iVar19 + uVar25;
        if (pcVar28 < pcVar17) {
          pcVar22 = pcVar28;
        }
        else {
          pcVar22 = pcVar17;
        }
        puVar16 = (uint *)(pcVar22 + iVar33);
        puVar37 = (uint *)((int)param_4 + (int)pcVar22);
        puVar8 = (uint *)((int)puVar37 + ((int)pcVar35 - (int)puVar16));
        if (param_5 < puVar8) {
          puVar8 = param_5;
        }
        puVar12 = (uint *)((int)puVar8 + -3);
        if (puVar37 < puVar12) {
          if (*(uint *)(pcVar22 + iVar33) == *(uint *)((int)param_4 + (int)pcVar22)) {
            puVar29 = puVar37 + 1;
            local_40 = puVar16 + 1;
            if (puVar29 < puVar12) {
              do {
                if (*local_40 != *puVar29) {
                  uVar6 = *local_40 ^ *puVar29;
                  bVar2 = (byte)uVar6;
                  bVar3 = (byte)(uVar6 >> 8);
                  bVar4 = (byte)(uVar6 >> 0x10);
                  bVar1 = (byte)(uVar6 >> 0x18);
                  pcVar23 = (char *)((int)puVar29 +
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
                                    (int)puVar37));
                  goto joined_r0x01812d78;
                }
                puVar29 = puVar29 + 1;
                local_40 = local_40 + 1;
              } while (puVar29 < puVar12);
            }
            goto LAB_01812eb0;
          }
          uVar6 = *(uint *)(pcVar22 + iVar33) ^ *(uint *)((int)param_4 + (int)pcVar22);
          bVar2 = (byte)uVar6;
          bVar3 = (byte)(uVar6 >> 8);
          bVar4 = (byte)(uVar6 >> 0x10);
          bVar1 = (byte)(uVar6 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
          puVar29 = puVar37;
          local_40 = puVar16;
LAB_01812eb0:
          if (puVar29 < (uint *)((int)puVar8 + -1)) {
            if ((ushort)*local_40 == (ushort)*puVar29) {
              local_40 = (uint *)((int)local_40 + 2);
              puVar29 = (uint *)((int)puVar29 + 2);
            }
          }
          if ((puVar29 < puVar8) && ((char)*local_40 == (char)*puVar29)) {
            puVar29 = (uint *)((int)puVar29 + 1);
          }
          pcVar23 = (char *)((int)puVar29 - (int)puVar37);
        }
joined_r0x01812d78:
        if (pcVar35 == (char *)((int)puVar16 + (int)pcVar23)) {
          puVar8 = (uint *)((int)puVar37 + (int)pcVar23);
          if (puVar8 < puVar10) {
            if (*puVar18 == *(uint *)((int)puVar37 + (int)pcVar23)) {
              puVar16 = puVar8 + 1;
              local_40 = puVar18 + 1;
              if (puVar16 < puVar10) {
                do {
                  if (*local_40 != *puVar16) {
                    uVar6 = *local_40 ^ *puVar16;
                    bVar2 = (byte)uVar6;
                    bVar3 = (byte)(uVar6 >> 8);
                    bVar4 = (byte)(uVar6 >> 0x10);
                    bVar1 = (byte)(uVar6 >> 0x18);
                    pcVar9 = (char *)((int)puVar16 +
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
                    goto LAB_01812f5c;
                  }
                  puVar16 = puVar16 + 1;
                  local_40 = local_40 + 1;
                } while (puVar16 < puVar10);
              }
              goto LAB_01812fbc;
            }
            uVar6 = *puVar18 ^ *(uint *)((int)puVar37 + (int)pcVar23);
            bVar2 = (byte)uVar6;
            bVar3 = (byte)(uVar6 >> 8);
            bVar4 = (byte)(uVar6 >> 0x10);
            bVar1 = (byte)(uVar6 >> 0x18);
            pcVar9 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
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
            puVar16 = puVar8;
            local_40 = puVar18;
LAB_01812fbc:
            if (puVar16 < (uint *)((int)param_5 + -1)) {
              if ((ushort)*local_40 == (ushort)*puVar16) {
                local_40 = (uint *)((int)local_40 + 2);
                puVar16 = (uint *)((int)puVar16 + 2);
              }
            }
            if ((puVar16 < param_5) && ((char)*local_40 == (char)*puVar16)) {
              puVar16 = (uint *)((int)puVar16 + 1);
            }
            pcVar9 = (char *)((int)puVar16 - (int)puVar8);
          }
LAB_01812f5c:
          pcVar23 = pcVar23 + (int)pcVar9;
        }
        pcVar22 = pcVar22 + (int)pcVar23;
        iVar27 = (uVar34 - (int)pcVar36) + uVar25;
        if (pcVar36 <= pcVar22 + uVar25) {
          iVar33 = iVar30 + iVar27;
        }
        if (local_38 < pcVar22) {
          if (local_4c + -iVar27 < pcVar22) {
            local_4c = pcVar22 + iVar27;
          }
          param_1[local_6c * 2] = (uVar32 + 3) - iVar27;
          param_1[local_6c * 2 + 1] = (int)pcVar22;
          local_6c = local_6c + 1;
          if (param_5 == (uint *)((int)param_4 + (int)pcVar22) || (char *)0x1000 < pcVar22) break;
          local_38 = pcVar22;
        }
        if (uVar25 <= uVar20) break;
        bVar40 = (byte)pcVar22[iVar33] < *(byte *)((int)param_4 + (int)pcVar22);
        if (bVar40) {
          pcVar28 = pcVar22;
        }
        else {
          pcVar17 = pcVar22;
        }
        if (bVar40) {
          uVar25 = *(uint *)(iVar5 + (uVar25 & uVar7) * 8 + 4);
        }
        else {
          uVar25 = *(uint *)(iVar5 + (uVar25 & uVar7) * 8);
        }
        local_34 = (uint *)((int)local_34 + -1);
      } while (uVar39 < uVar25 && local_34 != (uint *)0x0);
      *(char **)(param_2 + 0x1c) = local_4c + -8;
      goto LAB_01812b7c;
    }
  }
  else {
    pcVar28 = (char *)0x0;
    local_5c = puVar10 + uVar25 * 2 + 1;
    pcVar17 = (char *)0x0;
    puVar8 = (uint *)((int)param_5 + -3);
    iVar5 = local_6c;
    do {
      if (pcVar17 < pcVar28) {
        pcVar22 = pcVar17;
      }
      else {
        pcVar22 = pcVar28;
      }
      iVar33 = iVar30 + uVar14;
      puVar37 = (uint *)((int)param_4 + (int)pcVar22);
      puVar16 = (uint *)(pcVar22 + iVar33);
      if (puVar37 < puVar8) {
        if (*(uint *)(pcVar22 + iVar33) == *(uint *)((int)param_4 + (int)pcVar22)) {
          puVar12 = puVar37 + 1;
          puVar16 = puVar16 + 1;
          if (puVar12 < puVar8) {
            do {
              if (*puVar16 != *puVar12) {
                uVar25 = *puVar16 ^ *puVar12;
                bVar2 = (byte)uVar25;
                bVar3 = (byte)(uVar25 >> 8);
                bVar4 = (byte)(uVar25 >> 0x10);
                bVar1 = (byte)(uVar25 >> 0x18);
                pcVar23 = (char *)((int)puVar12 +
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
                                                                  )) >> 3) - (int)puVar37));
                goto LAB_018128a8;
              }
              puVar12 = puVar12 + 1;
              puVar16 = puVar16 + 1;
            } while (puVar12 < puVar8);
          }
          goto LAB_018129ac;
        }
        uVar25 = *(uint *)(pcVar22 + iVar33) ^ *(uint *)((int)param_4 + (int)pcVar22);
        bVar2 = (byte)uVar25;
        bVar3 = (byte)(uVar25 >> 8);
        bVar4 = (byte)(uVar25 >> 0x10);
        bVar1 = (byte)(uVar25 >> 0x18);
        pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
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
        puVar12 = puVar37;
LAB_018129ac:
        if (puVar12 < (uint *)((int)param_5 + -1)) {
          if ((ushort)*puVar16 == (ushort)*puVar12) {
            puVar12 = (uint *)((int)puVar12 + 2);
            puVar16 = (uint *)((int)puVar16 + 2);
          }
        }
        if ((puVar12 < param_5) && ((char)*puVar16 == (char)*puVar12)) {
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        pcVar23 = (char *)((int)puVar12 - (int)puVar37);
      }
LAB_018128a8:
      pcVar22 = pcVar22 + (int)pcVar23;
      local_6c = iVar5;
      if (local_38 < pcVar22) {
        if (local_4c + -uVar14 < pcVar22) {
          local_4c = pcVar22 + uVar14;
        }
        param_1[iVar5 * 2] = (uVar32 + 3) - uVar14;
        local_6c = iVar5 + 1;
        param_1[iVar5 * 2 + 1] = (int)pcVar22;
        if ((char *)0x1000 < pcVar22 || param_5 == (uint *)((int)param_4 + (int)pcVar22)) {
          *local_5c = 0;
          *local_58 = 0;
          *(char **)(param_2 + 0x1c) = local_4c + -8;
          goto LAB_01812b7c;
        }
        local_38 = pcVar22;
      }
      puVar16 = puVar10 + (uVar6 & uVar14) * 2;
      if ((byte)pcVar22[iVar33] < *(byte *)((int)param_4 + (int)pcVar22)) {
        *local_58 = uVar14;
        if (uVar14 <= local_60) {
          local_58 = &local_30;
          goto LAB_01812cc0;
        }
        uVar14 = puVar16[1];
        local_58 = puVar16 + 1;
        pcVar17 = pcVar22;
      }
      else {
        *local_5c = uVar14;
        if (uVar14 <= local_60) {
          local_5c = &local_30;
LAB_01812cc0:
          *local_5c = 0;
          *local_58 = 0;
          goto LAB_01812cd4;
        }
        uVar14 = puVar10[(uVar6 & uVar14) * 2];
        pcVar28 = pcVar22;
        local_5c = puVar16;
      }
      local_34 = (uint *)((int)local_34 + -1);
      iVar5 = local_6c;
    } while (uVar21 <= uVar14 && local_34 != (uint *)0x0);
    *local_5c = 0;
    *local_58 = 0;
    if (local_34 != (uint *)0x0) goto LAB_01812cd4;
  }
  *(char **)(param_2 + 0x1c) = local_4c + -8;
LAB_01812b7c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_6c;
}

