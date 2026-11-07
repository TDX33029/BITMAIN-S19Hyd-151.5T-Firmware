// FUN_017ae3e0 @ 017ae3e0 size=6664 calls_out=3 calls_in=1
// strings: 

void FUN_017ae3e0(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  char *pcVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint uVar31;
  char *pcVar32;
  char *pcVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  int iVar44;
  bool bVar45;
  char *local_c0;
  uint local_b4;
  uint local_b0;
  uint local_8c;
  uint *local_88;
  uint *local_68;
  uint *local_64;
  uint *local_4c;
  uint *local_48;
  uint *local_44 [2];
  uint local_3c;
  uint *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  puVar35 = *(uint **)(param_1 + 4);
  local_2c = DAT_018ddaf8;
  puVar16 = *(uint **)(param_1 + 0x10);
  uVar18 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar9 = (int)param_4 - (int)puVar35;
  puVar10 = (uint *)(iVar9 + param_5);
  bVar45 = (uint)((int)puVar10 - (int)puVar16) <= uVar18;
  if (!bVar45) {
    puVar10 = (uint *)((int)puVar10 - uVar18);
  }
  if (bVar45) {
    puVar10 = puVar16;
  }
  bVar45 = *(int *)(param_1 + 0x18) != 0;
  puVar23 = (uint *)0x0;
  if (bVar45) {
    puVar23 = puVar16;
  }
  puVar16 = *(uint **)(param_1 + 0xc);
  if (!bVar45) {
    puVar23 = puVar10;
  }
  if (puVar16 <= puVar23) {
    FUN_017ab244(param_1,param_2,param_3,param_4);
    return;
  }
  puVar24 = (uint *)((int)param_4 + param_5);
  puVar25 = puVar24 + -2;
  local_4c = (uint *)*param_3;
  local_88 = (uint *)param_3[1];
  if (param_4 < puVar25) {
    iVar11 = *(int *)(param_1 + 0x5c);
    iVar12 = *(int *)(param_1 + 100);
    local_b0 = 0xbf9b0000;
    local_b4 = 0xbfa56300;
    iVar26 = *(int *)(param_1 + 0xc0);
    local_48 = *(uint **)(param_1 + 8);
    iVar38 = *(int *)(param_1 + 0xbc);
    puVar7 = (uint *)((int)puVar35 + (int)puVar16);
    puVar42 = (uint *)((int)local_48 + (int)puVar23);
    puVar17 = (uint *)((int)local_48 + (int)puVar16);
    uVar18 = 0x40 - iVar26;
    local_44[0] = puVar35;
    uVar19 = iVar26 - 0x20;
    puVar10 = (uint *)(0x20 - iVar26);
    iVar26 = -iVar38;
    uVar27 = iVar26 + 0x40;
    puVar35 = param_4;
    do {
      puVar20 = local_4c;
      puVar13 = (uint *)*puVar35;
      uVar36 = puVar35[1];
      if (param_6 == 6) {
        uVar14 = local_b0;
LAB_017ae8b8:
        uVar31 = uVar14 * uVar36 + (int)puVar13 * -0x30e44324 +
                 (int)((ulonglong)uVar14 * ZEXT48(puVar13) >> 0x20);
        uVar14 = (uint)((ulonglong)uVar14 * ZEXT48(puVar13)) >> (uVar27 & 0xff) |
                 uVar31 << (0x20 - uVar27 & 0xff) | uVar31 >> (iVar26 + 0x20U & 0xff);
      }
      else {
        if (param_6 == 7) {
          uVar14 = local_b4;
          goto LAB_017ae8b8;
        }
        if (param_6 == 5) {
          uVar14 = uVar36 * -0x45000000 + (int)puVar13 * -0x30e44324 +
                   (int)(ZEXT48(puVar13) * 0xbb000000 >> 0x20);
          uVar14 = (uint)(ZEXT48(puVar13) * 0xbb000000) >> (uVar27 & 0xff) |
                   uVar14 << (0x20 - uVar27 & 0xff) | uVar14 >> (iVar26 + 0x20U & 0xff);
        }
        else {
          uVar14 = (uint)((int)puVar13 * -0x61c8864f) >> (0x20U - iVar38 & 0xff);
        }
      }
      puVar8 = (uint *)((1 - (int)local_4c) + iVar9);
      puVar43 = *(uint **)(iVar12 + uVar14 * 4);
      uVar31 = ((int)puVar16 + -1) - (int)puVar8;
      puVar28 = (uint *)(iVar9 + (1 - (int)puVar23));
      if (puVar43 < puVar16) {
        puVar15 = local_48;
      }
      else {
        puVar15 = local_44[0];
      }
      if (puVar8 < puVar16) {
        puVar21 = local_48;
      }
      else {
        puVar21 = local_44[0];
      }
      uVar39 = uVar36 * -0x485a9b9d + (int)puVar13 * -0x30e44324 +
               (int)(ZEXT48(puVar13) * 0xb7a56463 >> 0x20);
      uVar39 = (uint)(ZEXT48(puVar13) * 0xb7a56463) >> (uVar18 & 0xff) | uVar39 << (uVar19 & 0xff) |
               uVar39 >> ((uint)puVar10 & 0xff);
      puVar40 = *(uint **)(iVar11 + uVar39 * 4);
      *(int *)(iVar11 + uVar39 * 4) = iVar9;
      *(int *)(iVar12 + uVar14 * 4) = iVar9;
      ppuVar6 = local_44;
      if (puVar40 < puVar16) {
        ppuVar6 = &local_48;
      }
      bVar45 = puVar28 == local_4c;
      if (puVar28 >= local_4c) {
        bVar45 = uVar31 == 2;
      }
      if (((puVar28 < local_4c || uVar31 < 2) || bVar45) ||
         (pcVar33 = (char *)((int)puVar21 + (int)puVar8),
         *(int *)((int)puVar35 + 1) != *(int *)((int)puVar21 + (int)puVar8))) {
        if ((puVar23 < puVar40) &&
           (puVar20 = (uint *)((int)*ppuVar6 + (int)puVar40),
           puVar20[1] == uVar36 && *(uint **)((int)*ppuVar6 + (int)puVar40) == puVar13)) {
          puVar8 = puVar20 + 2;
          puVar13 = puVar35 + 2;
          if (puVar40 < puVar16) {
            puVar43 = puVar42;
            puVar28 = puVar17;
          }
          else {
            puVar43 = puVar7;
            puVar28 = puVar24;
          }
          puVar15 = (uint *)((int)puVar13 + ((int)puVar28 - (int)puVar8));
          if (puVar24 < puVar15) {
            puVar15 = puVar24;
          }
          puVar21 = (uint *)((int)puVar15 + -3);
          if (puVar13 < puVar21) {
            if (puVar20[2] == puVar35[2]) {
              puVar41 = puVar35 + 3;
              local_68 = puVar20 + 3;
              if (puVar41 < puVar21) {
                do {
                  if (*local_68 != *puVar41) {
                    uVar36 = *puVar41 ^ *local_68;
                    bVar3 = (byte)uVar36;
                    bVar4 = (byte)(uVar36 >> 8);
                    bVar5 = (byte)(uVar36 >> 0x10);
                    bVar1 = (byte)(uVar36 >> 0x18);
                    pcVar33 = (char *)((int)puVar41 +
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
                                                                  )) >> 3) - (int)puVar13));
                    goto joined_r0x017aee88;
                  }
                  puVar41 = puVar41 + 1;
                  local_68 = local_68 + 1;
                } while (puVar41 < puVar21);
              }
              goto LAB_017aee24;
            }
            uVar36 = puVar20[2] ^ puVar35[2];
            bVar3 = (byte)uVar36;
            bVar4 = (byte)(uVar36 >> 8);
            bVar5 = (byte)(uVar36 >> 0x10);
            bVar1 = (byte)(uVar36 >> 0x18);
            pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar41 = puVar13;
            local_68 = puVar8;
LAB_017aee24:
            if (puVar41 < (uint *)((int)puVar15 + -1)) {
              if ((short)*local_68 == (short)*puVar41) {
                local_68 = (uint *)((int)local_68 + 2);
                puVar41 = (uint *)((int)puVar41 + 2);
              }
            }
            if ((puVar41 < puVar15) && ((char)*local_68 == (char)*puVar41)) {
              puVar41 = (uint *)((int)puVar41 + 1);
            }
            pcVar33 = (char *)((int)puVar41 - (int)puVar13);
          }
joined_r0x017aee88:
          if (puVar28 == (uint *)((int)puVar8 + (int)pcVar33)) {
            puVar15 = (uint *)((int)puVar13 + (int)pcVar33);
            puVar28 = puVar7;
            puVar8 = puVar15;
            if (puVar15 < (uint *)((int)puVar24 + -3)) {
              if (*puVar7 == *(uint *)((int)puVar13 + (int)pcVar33)) {
                do {
                  puVar8 = puVar8 + 1;
                  puVar28 = puVar28 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar8) goto LAB_017afa70;
                } while (*puVar28 == *puVar8);
                uVar36 = *puVar28 ^ *puVar8;
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar22 = (char *)((int)puVar8 +
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
                                                                  )) >> 3) - (int)puVar15));
              }
              else {
                uVar36 = *puVar7 ^ *(uint *)((int)puVar13 + (int)pcVar33);
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
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
LAB_017afa70:
              if (puVar8 < (uint *)((int)puVar24 + -1)) {
                if ((short)*puVar28 == (short)*puVar8) {
                  puVar28 = (uint *)((int)puVar28 + 2);
                  puVar8 = (uint *)((int)puVar8 + 2);
                }
              }
              if ((puVar8 < puVar24) && ((char)*puVar28 == (char)*puVar8)) {
                puVar8 = (uint *)((int)puVar8 + 1);
              }
              pcVar22 = (char *)((int)puVar8 - (int)puVar15);
            }
            pcVar33 = pcVar33 + (int)pcVar22;
          }
          local_88 = (uint *)(iVar9 - (int)puVar40);
          local_64 = (uint *)(pcVar33 + 8);
          puVar13 = puVar35;
          if (param_4 < puVar35 && puVar43 < puVar20) {
            do {
              puVar20 = (uint *)((int)puVar20 + -1);
              puVar35 = (uint *)((int)puVar13 + -1);
              if (*(char *)puVar35 != *(char *)puVar20) {
                puVar35 = puVar13;
                break;
              }
              local_64 = (uint *)((int)local_64 + 1);
              puVar13 = puVar35;
            } while (param_4 < puVar35 && puVar43 < puVar20);
          }
          uVar37 = (int)puVar35 - (int)param_4;
          puVar20 = (uint *)param_2[3];
          pcVar32 = (char *)((int)local_88 + 3);
          if (puVar24 + -8 < puVar35) {
LAB_017aef64:
            local_68 = puVar24 + -8;
            FUN_017a4c40(puVar20,param_4,puVar35,local_68);
LAB_017aebe0:
            param_2[3] = param_2[3] + uVar37;
            puVar29 = (undefined4 *)param_2[1];
            puVar20 = param_2;
            if (0xffff < uVar37) {
              param_2[10] = (int)((int)puVar29 - *param_2) >> 3;
              param_2[9] = 1;
            }
          }
          else {
            local_3c = *param_4;
            puStack_38 = (uint *)param_4[1];
            uStack_34 = param_4[2];
            uStack_30 = param_4[3];
            puVar20[3] = uStack_30;
            *puVar20 = local_3c;
            puVar20[1] = (uint)puStack_38;
            puVar20[2] = uStack_34;
            uVar36 = param_2[3];
            puVar20 = (uint *)(uVar36 + uVar37);
            if (0x10 < uVar37) {
              local_3c = param_4[4];
              puStack_38 = (uint *)param_4[5];
              uStack_34 = param_4[6];
              uStack_30 = param_4[7];
              *(uint *)(uVar36 + 0x10) = local_3c;
              *(uint **)(uVar36 + 0x14) = puStack_38;
              *(uint *)(uVar36 + 0x18) = uStack_34;
              *(uint *)(uVar36 + 0x1c) = uStack_30;
              if (0x10 < (int)(uVar37 - 0x10)) {
                puVar13 = (uint *)(uVar36 + 0x20);
                puVar8 = param_4 + 0x10;
                do {
                  uVar36 = puVar8[-7];
                  uVar14 = puVar8[-6];
                  puVar28 = puVar13 + 8;
                  uVar31 = puVar8[-5];
                  *puVar13 = puVar8[-8];
                  puVar13[1] = uVar36;
                  puVar13[2] = uVar14;
                  puVar13[3] = uVar31;
                  local_3c = puVar8[-4];
                  puStack_38 = (uint *)puVar8[-3];
                  uStack_34 = puVar8[-2];
                  uStack_30 = puVar8[-1];
                  puVar13[4] = local_3c;
                  puVar13[5] = (uint)puStack_38;
                  puVar13[6] = uStack_34;
                  puVar13[7] = uStack_30;
                  puVar13 = puVar28;
                  puVar8 = puVar8 + 8;
                } while (puVar28 < puVar20);
              }
              goto LAB_017aebe0;
            }
LAB_017aef58:
            param_2[3] = (uint)puVar20;
            puVar29 = (undefined4 *)param_2[1];
            puVar20 = puStack_38;
          }
          *(short *)(puVar29 + 1) = (short)uVar37;
          *puVar29 = pcVar32;
          if ((char *)0xffff < (char *)((int)local_64 + -3)) {
            param_2[10] = (int)((int)puVar29 - *param_2) >> 3;
            puVar20 = (uint *)&SUB_00000002;
            param_2[9] = 2;
          }
          *(short *)((int)puVar29 + 6) = (short)(char *)((int)local_64 + -3);
          goto LAB_017aec50;
        }
        if (puVar23 < puVar43) {
          puVar20 = (uint *)((int)puVar15 + (int)puVar43);
          puVar13 = puVar15;
          if (*puVar35 == *(uint *)((int)puVar15 + (int)puVar43)) {
            uVar31 = *(uint *)((int)puVar35 + 1);
            uVar14 = *(uint *)((int)puVar35 + 5);
            uVar36 = uVar14 * -0x485a9b9d + uVar31 * -0x30e44324 +
                     (int)((ulonglong)uVar31 * 0xb7a56463 >> 0x20);
            uVar36 = (uint)((ulonglong)uVar31 * 0xb7a56463) >> (uVar18 & 0xff) |
                     uVar36 << (uVar19 & 0xff) | uVar36 >> ((uint)puVar10 & 0xff);
            local_88 = *(uint **)(iVar11 + uVar36 * 4);
            *(int *)(iVar11 + uVar36 * 4) = iVar9 + 1;
            puVar13 = local_44[0];
            if (local_88 < puVar16) {
              puVar13 = local_48;
            }
            if ((puVar23 < local_88) &&
               (puVar8 = (uint *)((int)puVar13 + (int)local_88),
               uVar14 == puVar8[1] && uVar31 == *(uint *)((int)puVar13 + (int)local_88))) {
              puVar13 = puVar8 + 2;
              puVar20 = (uint *)((int)puVar35 + 9);
              if (local_88 < puVar16) {
                puVar43 = puVar42;
                puVar28 = puVar17;
              }
              else {
                puVar43 = puVar7;
                puVar28 = puVar24;
              }
              puVar15 = (uint *)((int)puVar20 + ((int)puVar28 - (int)puVar13));
              if (puVar24 < puVar15) {
                puVar15 = puVar24;
              }
              puVar21 = (uint *)((int)puVar15 + -3);
              if (puVar20 < puVar21) {
                if (puVar8[2] == *(uint *)((int)puVar35 + 9)) {
                  puVar40 = (uint *)((int)puVar35 + 0xd);
                  local_68 = puVar8 + 3;
                  if (puVar40 < puVar21) {
                    do {
                      if (*local_68 != *puVar40) {
                        uVar36 = *local_68 ^ *puVar40;
                        bVar3 = (byte)uVar36;
                        bVar4 = (byte)(uVar36 >> 8);
                        bVar5 = (byte)(uVar36 >> 0x10);
                        bVar1 = (byte)(uVar36 >> 0x18);
                        pcVar33 = (char *)((int)puVar40 +
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
                                          (int)puVar20));
                        goto joined_r0x017af45c;
                      }
                      puVar40 = puVar40 + 1;
                      local_68 = local_68 + 1;
                    } while (puVar40 < puVar21);
                  }
                  goto LAB_017af3fc;
                }
                uVar36 = puVar8[2] ^ *(uint *)((int)puVar35 + 9);
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
              else {
                puVar40 = puVar20;
                local_68 = puVar13;
LAB_017af3fc:
                if (puVar40 < (uint *)((int)puVar15 + -1)) {
                  if ((short)*local_68 == (short)*puVar40) {
                    local_68 = (uint *)((int)local_68 + 2);
                    puVar40 = (uint *)((int)puVar40 + 2);
                  }
                }
                if ((puVar40 < puVar15) && ((char)*local_68 == (char)*puVar40)) {
                  puVar40 = (uint *)((int)puVar40 + 1);
                }
                pcVar33 = (char *)((int)puVar40 - (int)puVar20);
              }
joined_r0x017af45c:
              if (puVar28 == (uint *)((int)puVar13 + (int)pcVar33)) {
                puVar28 = (uint *)((int)puVar20 + (int)pcVar33);
                puVar13 = (uint *)((int)puVar24 + -3);
                if (puVar28 < puVar13) {
                  if (*puVar7 == *(uint *)((int)puVar20 + (int)pcVar33)) {
                    puVar15 = puVar28 + 1;
                    puVar20 = puVar7 + 1;
                    if (puVar15 < puVar13) {
                      do {
                        if (*puVar20 != *puVar15) {
                          uVar36 = *puVar15 ^ *puVar20;
                          bVar3 = (byte)uVar36;
                          bVar4 = (byte)(uVar36 >> 8);
                          bVar5 = (byte)(uVar36 >> 0x10);
                          bVar1 = (byte)(uVar36 >> 0x18);
                          pcVar22 = (char *)((int)puVar15 +
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
                          goto LAB_017afb2c;
                        }
                        puVar15 = puVar15 + 1;
                        puVar20 = puVar20 + 1;
                      } while (puVar15 < puVar13);
                    }
                    goto LAB_017afad4;
                  }
                  uVar36 = *puVar7 ^ *(uint *)((int)puVar20 + (int)pcVar33);
                  bVar3 = (byte)uVar36;
                  bVar4 = (byte)(uVar36 >> 8);
                  bVar5 = (byte)(uVar36 >> 0x10);
                  bVar1 = (byte)(uVar36 >> 0x18);
                  pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                     bVar3 >> 1 & 1) << 1 |
                                                                    bVar3 >> 2 & 1) << 1 |
                                                                   bVar3 >> 3 & 1) << 1 |
                                                                  bVar3 >> 4 & 1) << 1 |
                                                                 bVar3 >> 5 & 1) << 1 |
                                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                               bVar4 >> 1 & 1) << 1
                                                                              | bVar4 >> 2 & 1) << 1
                                                                             | bVar4 >> 3 & 1) << 1
                                                                            | bVar4 >> 4 & 1) << 1 |
                                                                           bVar4 >> 5 & 1) << 1 |
                                                                          bVar4 >> 6 & 1) << 1 |
                                                                         bVar4 >> 7) << 0x10 |
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
                                                                      bVar1 >> 7)) >> 3);
                }
                else {
                  puVar20 = puVar7;
                  puVar15 = puVar28;
LAB_017afad4:
                  if (puVar15 < (uint *)((int)puVar24 + -1)) {
                    if ((short)*puVar20 == (short)*puVar15) {
                      puVar20 = (uint *)((int)puVar20 + 2);
                      puVar15 = (uint *)((int)puVar15 + 2);
                    }
                  }
                  if ((puVar15 < puVar24) && ((char)*puVar20 == (char)*puVar15)) {
                    puVar15 = (uint *)((int)puVar15 + 1);
                  }
                  pcVar22 = (char *)((int)puVar15 - (int)puVar28);
                }
LAB_017afb2c:
                pcVar33 = pcVar33 + (int)pcVar22;
              }
              local_88 = (uint *)((iVar9 + 1) - (int)local_88);
              puVar35 = (uint *)((int)puVar35 + 1);
              local_64 = (uint *)(pcVar33 + 8);
              if (puVar43 < puVar8 && param_4 < puVar35) {
                do {
                  puVar8 = (uint *)((int)puVar8 + -1);
                  puVar20 = (uint *)((int)puVar35 + -1);
                  if (*(char *)((int)puVar35 + -1) != *(char *)puVar8) break;
                  local_64 = (uint *)((int)local_64 + 1);
                  puVar35 = puVar20;
                } while (param_4 < puVar20 && puVar43 < puVar8);
              }
            }
            else {
              puVar8 = puVar20 + 1;
              puVar13 = puVar35 + 1;
              if (puVar43 < puVar16) {
                puVar15 = puVar42;
                puVar28 = puVar17;
              }
              else {
                puVar15 = puVar16;
                puVar28 = puVar24;
              }
              if (puVar16 <= puVar43) {
                puVar15 = puVar7;
              }
              puVar21 = (uint *)((int)puVar13 + ((int)puVar28 - (int)puVar8));
              if (puVar24 < puVar21) {
                puVar21 = puVar24;
              }
              puVar40 = (uint *)((int)puVar21 + -3);
              if (puVar13 < puVar40) {
                if (puVar20[1] == puVar35[1]) {
                  puVar41 = puVar35 + 2;
                  local_64 = puVar20 + 2;
                  if (puVar41 < puVar40) {
                    do {
                      if (*local_64 != *puVar41) {
                        uVar36 = *local_64 ^ *puVar41;
                        bVar3 = (byte)uVar36;
                        bVar4 = (byte)(uVar36 >> 8);
                        bVar5 = (byte)(uVar36 >> 0x10);
                        bVar1 = (byte)(uVar36 >> 0x18);
                        pcVar33 = (char *)((int)puVar41 +
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
                                          (int)puVar13));
                        goto joined_r0x017ae7e4;
                      }
                      puVar41 = puVar41 + 1;
                      local_64 = local_64 + 1;
                    } while (puVar41 < puVar40);
                  }
                  goto LAB_017ae9e8;
                }
                uVar36 = puVar35[1] ^ puVar20[1];
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
              }
              else {
                puVar41 = puVar13;
                local_64 = puVar8;
LAB_017ae9e8:
                if (puVar41 < (uint *)((int)puVar21 + -1)) {
                  if ((short)*local_64 == (short)*puVar41) {
                    local_64 = (uint *)((int)local_64 + 2);
                    puVar41 = (uint *)((int)puVar41 + 2);
                  }
                }
                if ((puVar41 < puVar21) && ((char)*local_64 == (char)*puVar41)) {
                  puVar41 = (uint *)((int)puVar41 + 1);
                }
                pcVar33 = (char *)((int)puVar41 - (int)puVar13);
              }
joined_r0x017ae7e4:
              if (puVar28 == (uint *)((int)puVar8 + (int)pcVar33)) {
                puVar21 = (uint *)((int)puVar13 + (int)pcVar33);
                puVar28 = puVar7;
                puVar8 = puVar21;
                if (puVar21 < (uint *)((int)puVar24 + -3)) {
                  if (*puVar7 == *(uint *)((int)puVar13 + (int)pcVar33)) {
                    do {
                      puVar8 = puVar8 + 1;
                      puVar28 = puVar28 + 1;
                      if ((uint *)((int)puVar24 + -3) <= puVar8) goto LAB_017ae804;
                    } while (*puVar28 == *puVar8);
                    uVar36 = *puVar28 ^ *puVar8;
                    bVar3 = (byte)uVar36;
                    bVar4 = (byte)(uVar36 >> 8);
                    bVar5 = (byte)(uVar36 >> 0x10);
                    bVar1 = (byte)(uVar36 >> 0x18);
                    pcVar22 = (char *)((int)puVar8 +
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
                                                                  )) >> 3) - (int)puVar21));
                  }
                  else {
                    uVar36 = *puVar7 ^ *(uint *)((int)puVar13 + (int)pcVar33);
                    bVar3 = (byte)uVar36;
                    bVar4 = (byte)(uVar36 >> 8);
                    bVar5 = (byte)(uVar36 >> 0x10);
                    bVar1 = (byte)(uVar36 >> 0x18);
                    pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                       bVar3 >> 1 & 1) << 1 |
                                                                      bVar3 >> 2 & 1) << 1 |
                                                                     bVar3 >> 3 & 1) << 1 |
                                                                    bVar3 >> 4 & 1) << 1 |
                                                                   bVar3 >> 5 & 1) << 1 |
                                                                  bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                 bVar4 >> 1 & 1) <<
                                                                                 1 | bVar4 >> 2 & 1)
                                                                                << 1 | bVar4 >> 3 &
                                                                                       1) << 1 |
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
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3);
                  }
                }
                else {
LAB_017ae804:
                  if (puVar8 < (uint *)((int)puVar24 + -1)) {
                    if ((short)*puVar28 == (short)*puVar8) {
                      puVar28 = (uint *)((int)puVar28 + 2);
                      puVar8 = (uint *)((int)puVar8 + 2);
                    }
                  }
                  if ((puVar8 < puVar24) && ((char)*puVar28 == (char)*puVar8)) {
                    puVar8 = (uint *)((int)puVar8 + 1);
                  }
                  pcVar22 = (char *)((int)puVar8 - (int)puVar21);
                }
                pcVar33 = pcVar33 + (int)pcVar22;
              }
              local_88 = (uint *)(iVar9 - (int)puVar43);
              local_64 = (uint *)(pcVar33 + 4);
              if (puVar15 < puVar20 && param_4 < puVar35) {
                do {
                  puVar20 = (uint *)((int)puVar20 + -1);
                  puVar13 = (uint *)((int)puVar35 + -1);
                  if (*(char *)puVar13 != *(char *)puVar20) break;
                  local_64 = (uint *)((int)local_64 + 1);
                  puVar35 = puVar13;
                } while (param_4 < puVar13 && puVar15 < puVar20);
              }
            }
            uVar37 = (int)puVar35 - (int)param_4;
            puVar20 = (uint *)param_2[3];
            pcVar32 = (char *)((int)local_88 + 3);
            if (puVar35 <= puVar24 + -8) {
              local_3c = *param_4;
              puStack_38 = (uint *)param_4[1];
              uStack_34 = param_4[2];
              uStack_30 = param_4[3];
              puVar20[3] = uStack_30;
              *puVar20 = local_3c;
              puVar20[1] = (uint)puStack_38;
              puVar20[2] = uStack_34;
              uVar36 = param_2[3];
              puVar20 = (uint *)(uVar36 + uVar37);
              if (uVar37 < 0x11) goto LAB_017aef58;
              local_3c = param_4[4];
              puStack_38 = (uint *)param_4[5];
              uStack_34 = param_4[6];
              uStack_30 = param_4[7];
              *(uint *)(uVar36 + 0x10) = local_3c;
              *(uint **)(uVar36 + 0x14) = puStack_38;
              *(uint *)(uVar36 + 0x18) = uStack_34;
              *(uint *)(uVar36 + 0x1c) = uStack_30;
              if (0x10 < (int)(uVar37 - 0x10)) {
                puVar13 = (uint *)(uVar36 + 0x20);
                puVar8 = param_4 + 0x10;
                do {
                  uVar36 = puVar8[-7];
                  uVar14 = puVar8[-6];
                  puVar28 = puVar13 + 8;
                  uVar31 = puVar8[-5];
                  *puVar13 = puVar8[-8];
                  puVar13[1] = uVar36;
                  puVar13[2] = uVar14;
                  puVar13[3] = uVar31;
                  local_3c = puVar8[-4];
                  puStack_38 = (uint *)puVar8[-3];
                  uStack_34 = puVar8[-2];
                  uStack_30 = puVar8[-1];
                  puVar13[4] = local_3c;
                  puVar13[5] = (uint)puStack_38;
                  puVar13[6] = uStack_34;
                  puVar13[7] = uStack_30;
                  puVar13 = puVar28;
                  puVar8 = puVar8 + 8;
                } while (puVar28 < puVar20);
              }
              goto LAB_017aebe0;
            }
            goto LAB_017aef64;
          }
        }
        puVar35 = (uint *)((int)puVar35 + ((int)puVar35 - (int)param_4 >> 8) + 1);
      }
      else {
        puVar13 = (uint *)((int)puVar35 + 5);
        if (puVar8 < puVar16) {
          puVar8 = puVar17;
        }
        else {
          puVar8 = puVar24;
        }
        puVar28 = (uint *)(pcVar33 + 4);
        puVar43 = (uint *)((int)puVar13 + ((int)puVar8 - (int)puVar28));
        if (puVar24 < puVar43) {
          puVar43 = puVar24;
        }
        if (puVar13 < (uint *)((int)puVar43 + -3)) {
          if (*(uint *)(pcVar33 + 4) == *(uint *)((int)puVar35 + 5)) {
            puVar21 = (uint *)(pcVar33 + 8);
            puVar15 = (uint *)((int)puVar35 + 9);
            while( true ) {
              if ((uint *)((int)puVar43 + -3) <= puVar15) break;
              if (*puVar21 != *puVar15) {
                uVar36 = *puVar21 ^ *puVar15;
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar33 = (char *)((int)puVar15 +
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
                                                                  )) >> 3) - (int)puVar13));
                goto joined_r0x017ae978;
              }
              puVar21 = puVar21 + 1;
              puVar15 = puVar15 + 1;
            }
            goto LAB_017aef84;
          }
          uVar36 = *(uint *)(pcVar33 + 4) ^ *(uint *)((int)puVar35 + 5);
          bVar3 = (byte)uVar36;
          bVar4 = (byte)(uVar36 >> 8);
          bVar5 = (byte)(uVar36 >> 0x10);
          bVar1 = (byte)(uVar36 >> 0x18);
          pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar15 = puVar13;
          puVar21 = puVar28;
LAB_017aef84:
          if (puVar15 < (uint *)((int)puVar43 + -1)) {
            if ((short)*puVar21 == (short)*puVar15) {
              puVar15 = (uint *)((int)puVar15 + 2);
              puVar21 = (uint *)((int)puVar21 + 2);
            }
          }
          if ((puVar15 < puVar43) && ((char)*puVar21 == (char)*puVar15)) {
            puVar15 = (uint *)((int)puVar15 + 1);
          }
          pcVar33 = (char *)((int)puVar15 - (int)puVar13);
        }
joined_r0x017ae978:
        if (puVar8 == (uint *)((int)puVar28 + (int)pcVar33)) {
          puVar43 = (uint *)((int)puVar13 + (int)pcVar33);
          puVar28 = puVar7;
          puVar8 = puVar43;
          if (puVar43 < (uint *)((int)puVar24 + -3)) {
            if (*puVar7 == *(uint *)((int)puVar13 + (int)pcVar33)) {
              do {
                puVar8 = puVar8 + 1;
                puVar28 = puVar28 + 1;
                if ((uint *)((int)puVar24 + -3) <= puVar8) goto LAB_017af39c;
              } while (*puVar28 == *puVar8);
              uVar36 = *puVar28 ^ *puVar8;
              bVar3 = (byte)uVar36;
              bVar4 = (byte)(uVar36 >> 8);
              bVar5 = (byte)(uVar36 >> 0x10);
              bVar1 = (byte)(uVar36 >> 0x18);
              pcVar22 = (char *)((int)puVar8 +
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
                                                            bVar1 >> 7)) >> 3) - (int)puVar43));
            }
            else {
              uVar36 = *puVar7 ^ *(uint *)((int)puVar13 + (int)pcVar33);
              bVar3 = (byte)uVar36;
              bVar4 = (byte)(uVar36 >> 8);
              bVar5 = (byte)(uVar36 >> 0x10);
              bVar1 = (byte)(uVar36 >> 0x18);
              pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
LAB_017af39c:
            if (puVar8 < (uint *)((int)puVar24 + -1)) {
              if ((short)*puVar28 == (short)*puVar8) {
                puVar28 = (uint *)((int)puVar28 + 2);
                puVar8 = (uint *)((int)puVar8 + 2);
              }
            }
            if ((puVar8 < puVar24) && ((char)*puVar28 == (char)*puVar8)) {
              puVar8 = (uint *)((int)puVar8 + 1);
            }
            pcVar22 = (char *)((int)puVar8 - (int)puVar43);
          }
          pcVar33 = pcVar33 + (int)pcVar22;
        }
        puVar35 = (uint *)((int)puVar35 + 1);
        uVar36 = (int)puVar35 - (int)param_4;
        local_64 = (uint *)(pcVar33 + 4);
        puVar13 = (uint *)param_2[3];
        if (puVar24 + -8 < puVar35) {
          FUN_017a4c40(puVar13,param_4,puVar35,puVar24 + -8);
LAB_017af15c:
          param_2[3] = param_2[3] + uVar36;
          puVar29 = (undefined4 *)param_2[1];
          if (0xffff < uVar36) {
            param_2[10] = (int)((int)puVar29 - *param_2) >> 3;
            param_2[9] = 1;
          }
        }
        else {
          local_3c = *param_4;
          puStack_38 = (uint *)param_4[1];
          uStack_34 = param_4[2];
          uStack_30 = param_4[3];
          puVar13[3] = uStack_30;
          *puVar13 = local_3c;
          puVar13[1] = (uint)puStack_38;
          puVar13[2] = uStack_34;
          uVar14 = param_2[3];
          if (0x10 < uVar36) {
            local_3c = param_4[4];
            puStack_38 = (uint *)param_4[5];
            uStack_34 = param_4[6];
            uStack_30 = param_4[7];
            *(uint *)(uVar14 + 0x10) = local_3c;
            *(uint **)(uVar14 + 0x14) = puStack_38;
            *(uint *)(uVar14 + 0x18) = uStack_34;
            *(uint *)(uVar14 + 0x1c) = uStack_30;
            if (0x10 < (int)(uVar36 - 0x10)) {
              puVar13 = (uint *)(uVar14 + 0x20);
              puVar8 = param_4 + 0x10;
              do {
                uVar31 = puVar8[-7];
                uVar39 = puVar8[-6];
                puVar28 = puVar13 + 8;
                uVar30 = puVar8[-5];
                *puVar13 = puVar8[-8];
                puVar13[1] = uVar31;
                puVar13[2] = uVar39;
                puVar13[3] = uVar30;
                local_3c = puVar8[-4];
                puStack_38 = (uint *)puVar8[-3];
                uStack_34 = puVar8[-2];
                uStack_30 = puVar8[-1];
                puVar13[4] = local_3c;
                puVar13[5] = (uint)puStack_38;
                puVar13[6] = uStack_34;
                puVar13[7] = uStack_30;
                puVar13 = puVar28;
                puVar8 = puVar8 + 8;
              } while (puVar28 < (uint *)(uVar14 + uVar36));
            }
            goto LAB_017af15c;
          }
          param_2[3] = uVar14 + uVar36;
          puVar29 = (undefined4 *)param_2[1];
        }
        *(short *)(puVar29 + 1) = (short)uVar36;
        *puVar29 = 1;
        if ((char *)0xffff < pcVar33 + 1) {
          param_2[10] = (int)((int)puVar29 - *param_2) >> 3;
          param_2[9] = 2;
        }
        *(short *)((int)puVar29 + 6) = (short)(pcVar33 + 1);
        local_4c = local_88;
        local_88 = puVar20;
LAB_017aec50:
        puVar13 = local_4c;
        local_68 = puVar24 + -8;
        param_4 = (uint *)((int)puVar35 + (int)local_64);
        param_2[1] = (uint)(puVar29 + 2);
        if (puVar25 < param_4) {
          puVar10 = puVar20;
          puVar16 = local_88;
          goto LAB_017aec70;
        }
        iVar44 = iVar9 + 2;
        iVar34 = *(int *)((int)local_44[0] + iVar9 + 6);
        uVar14 = *(uint *)((int)local_44[0] + iVar44);
        iVar9 = uVar14 * -0x30e44324;
        lVar2 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
        uVar36 = *(int *)((int)param_4 + 2) * -0x485a9b9d +
                 *(uint *)((int)param_4 + -2) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
        uVar31 = iVar34 * -0x485a9b9d + iVar9 + (int)((ulonglong)uVar14 * 0xb7a56463 >> 0x20);
        *(int *)(iVar11 + ((uint)((ulonglong)uVar14 * 0xb7a56463) >> (uVar18 & 0xff) |
                           uVar31 << (uVar19 & 0xff) | uVar31 >> ((uint)puVar10 & 0xff)) * 4) =
             iVar44;
        *(char **)(iVar11 + ((uint)lVar2 >> (uVar18 & 0xff) | uVar36 << (uVar19 & 0xff) |
                            uVar36 >> ((uint)puVar10 & 0xff)) * 4) =
             (char *)((int)param_4 + (-2 - (int)local_44[0]));
        if (param_6 == 6) {
          uVar36 = 0xbf9b0000;
LAB_017af9c8:
          uVar39 = uVar36 * iVar34 + iVar9 + (int)((ulonglong)uVar36 * (ulonglong)uVar14 >> 0x20);
          lVar2 = (ulonglong)uVar36 * (ulonglong)*(uint *)((int)param_4 + -1);
          uVar31 = uVar36 * *(int *)((int)param_4 + 3) + *(uint *)((int)param_4 + -1) * -0x30e44324
                   + (int)((ulonglong)lVar2 >> 0x20);
          uVar31 = (uint)lVar2 >> (0x40U - iVar38 & 0xff) | uVar31 << (iVar38 - 0x20U & 0xff) |
                   uVar31 >> (0x20U - iVar38 & 0xff);
          *(int *)(iVar12 + ((uint)((ulonglong)uVar36 * (ulonglong)uVar14) >>
                             (0x40U - iVar38 & 0xff) | uVar39 << (iVar38 - 0x20U & 0xff) |
                            uVar39 >> (0x20U - iVar38 & 0xff)) * 4) = iVar44;
        }
        else if (param_6 == 7) {
          uVar36 = iVar34 * -0x405a9d00 + iVar9 + (int)((ulonglong)uVar14 * 0xbfa56300 >> 0x20);
          lVar2 = (ulonglong)*(uint *)((int)param_4 + -1) * 0xbfa56300;
          uVar31 = *(int *)((int)param_4 + 3) * -0x405a9d00 +
                   *(uint *)((int)param_4 + -1) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
          uVar31 = (uint)lVar2 >> (0x40U - iVar38 & 0xff) | uVar31 << (iVar38 - 0x20U & 0xff) |
                   uVar31 >> (0x20U - iVar38 & 0xff);
          *(int *)(iVar12 + ((uint)((ulonglong)uVar14 * 0xbfa56300) >> (0x40U - iVar38 & 0xff) |
                             uVar36 << (iVar38 - 0x20U & 0xff) | uVar36 >> (0x20U - iVar38 & 0xff))
                            * 4) = iVar44;
        }
        else {
          if (param_6 == 5) {
            uVar36 = 0xbb000000;
            goto LAB_017af9c8;
          }
          *(int *)(iVar12 + ((uint)(*(int *)((int)local_44[0] + iVar44) * -0x61c8864f) >>
                            (0x20U - iVar38 & 0xff)) * 4) = iVar44;
          uVar31 = (uint)(*(int *)((int)param_4 + -1) * -0x61c8864f) >> (0x20U - iVar38 & 0xff);
        }
        *(char **)(iVar12 + uVar31 * 4) = (char *)((int)param_4 + (-1 - (int)local_44[0]));
        local_4c = local_88;
        while( true ) {
          local_88 = puVar13;
          iVar9 = (int)param_4 - (int)local_44[0];
          puVar35 = (uint *)(iVar9 - (int)local_88);
          puVar13 = (uint *)(iVar9 - (int)puVar23);
          if (puVar35 < puVar16) {
            puVar20 = local_48;
          }
          else {
            puVar20 = local_44[0];
          }
          pcVar33 = (char *)((int)puVar20 + (int)puVar35);
          uVar36 = (int)((int)local_88 + (int)((int)puVar16 + -1)) - iVar9;
          bVar45 = puVar13 == local_88;
          if (puVar13 >= local_88) {
            bVar45 = uVar36 == 2;
          }
          if (((puVar13 < local_88 || uVar36 < 2) || bVar45) ||
             (puVar13 = (uint *)*param_4, puVar13 != *(uint **)pcVar33)) break;
          if (puVar35 < puVar16) {
            puVar35 = puVar17;
          }
          else {
            puVar35 = puVar24;
          }
          puVar20 = (uint *)(pcVar33 + 4);
          puVar8 = param_4 + 1;
          puVar13 = (uint *)((int)puVar8 + ((int)puVar35 - (int)puVar20));
          if (puVar24 < puVar13) {
            puVar13 = puVar24;
          }
          if (puVar8 < (uint *)((int)puVar13 + -3)) {
            if (*(uint *)(pcVar33 + 4) == param_4[1]) {
              puVar43 = (uint *)(pcVar33 + 8);
              for (puVar28 = param_4 + 2; puVar28 < (uint *)((int)puVar13 + -3);
                  puVar28 = puVar28 + 1) {
                if (*puVar43 != *puVar28) {
                  uVar36 = *puVar43 ^ *puVar28;
                  bVar3 = (byte)uVar36;
                  bVar4 = (byte)(uVar36 >> 8);
                  bVar5 = (byte)(uVar36 >> 0x10);
                  bVar1 = (byte)(uVar36 >> 0x18);
                  pcVar33 = (char *)((int)puVar28 +
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
                                    (int)puVar8));
                  goto LAB_017af59c;
                }
                puVar43 = puVar43 + 1;
              }
              goto LAB_017af554;
            }
            uVar36 = *(uint *)(pcVar33 + 4) ^ param_4[1];
            bVar3 = (byte)uVar36;
            bVar4 = (byte)(uVar36 >> 8);
            bVar5 = (byte)(uVar36 >> 0x10);
            bVar1 = (byte)(uVar36 >> 0x18);
            pcVar33 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar43 = puVar20;
            puVar28 = puVar8;
LAB_017af554:
            if (puVar28 < (uint *)((int)puVar13 + -1)) {
              if ((short)*puVar43 == (short)*puVar28) {
                puVar43 = (uint *)((int)puVar43 + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < puVar13) && ((char)*puVar43 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar33 = (char *)((int)puVar28 - (int)puVar8);
          }
LAB_017af59c:
          if (puVar35 == (uint *)((int)puVar20 + (int)pcVar33)) {
            puVar13 = (uint *)((int)puVar8 + (int)pcVar33);
            puVar20 = puVar7;
            puVar35 = puVar13;
            if (puVar13 < (uint *)((int)puVar24 + -3)) {
              if (*puVar7 == *(uint *)((int)puVar8 + (int)pcVar33)) {
                do {
                  puVar35 = puVar35 + 1;
                  puVar20 = puVar20 + 1;
                  if ((uint *)((int)puVar24 + -3) <= puVar35) goto LAB_017afb50;
                } while (*puVar20 == *puVar35);
                uVar36 = *puVar20 ^ *puVar35;
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar22 = (char *)((int)puVar35 +
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
                                                                  )) >> 3) - (int)puVar13));
              }
              else {
                uVar36 = *puVar7 ^ *(uint *)((int)puVar8 + (int)pcVar33);
                bVar3 = (byte)uVar36;
                bVar4 = (byte)(uVar36 >> 8);
                bVar5 = (byte)(uVar36 >> 0x10);
                bVar1 = (byte)(uVar36 >> 0x18);
                pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 8 |
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
LAB_017afb50:
              if (puVar35 < (uint *)((int)puVar24 + -1)) {
                if ((short)*puVar20 == (short)*puVar35) {
                  puVar20 = (uint *)((int)puVar20 + 2);
                  puVar35 = (uint *)((int)puVar35 + 2);
                }
              }
              if ((puVar35 < puVar24) && ((char)*puVar20 == (char)*puVar35)) {
                puVar35 = (uint *)((int)puVar35 + 1);
              }
              pcVar22 = (char *)((int)puVar35 - (int)puVar13);
            }
            pcVar33 = pcVar33 + (int)pcVar22;
          }
          puVar35 = (uint *)param_2[3];
          if (local_68 < param_4) {
            FUN_017a4c40(puVar35,param_4,param_4,local_68);
          }
          else {
            local_3c = *param_4;
            puStack_38 = (uint *)param_4[1];
            uStack_34 = param_4[2];
            uStack_30 = param_4[3];
            *puVar35 = local_3c;
            puVar35[1] = (uint)puStack_38;
            puVar35[2] = uStack_34;
            puVar35[3] = uStack_30;
          }
          puVar29 = (undefined4 *)param_2[1];
          *(undefined2 *)(puVar29 + 1) = 0;
          *puVar29 = 1;
          if ((char *)0xffff < pcVar33 + 1) {
            param_2[10] = (int)((int)puVar29 - *param_2) >> 3;
            param_2[9] = 2;
          }
          *(short *)((int)puVar29 + 6) = (short)(pcVar33 + 1);
          uVar36 = param_4[1];
          param_2[1] = (uint)(puVar29 + 2);
          uVar14 = *param_4;
          if (param_6 == 6) {
            uVar31 = 0xbf9b0000;
LAB_017afd08:
            uVar39 = uVar31 * uVar36 + uVar14 * -0x30e44324 +
                     (int)((ulonglong)uVar31 * (ulonglong)uVar14 >> 0x20);
            uVar31 = (uint)((ulonglong)uVar31 * (ulonglong)uVar14) >> (0x40U - iVar38 & 0xff) |
                     uVar39 << (iVar38 - 0x20U & 0xff) | uVar39 >> (0x20U - iVar38 & 0xff);
          }
          else {
            if (param_6 == 7) {
              uVar31 = 0xbfa56300;
              goto LAB_017afd08;
            }
            if (param_6 == 5) {
              uVar31 = 0xbb000000;
              goto LAB_017afd08;
            }
            uVar31 = uVar14 * -0x61c8864f >> (0x20U - iVar38 & 0xff);
          }
          param_4 = (uint *)((int)param_4 + (int)(pcVar33 + 4));
          *(int *)(iVar12 + uVar31 * 4) = iVar9;
          uVar36 = uVar36 * -0x485a9b9d + uVar14 * -0x30e44324 +
                   (int)((ulonglong)uVar14 * 0xb7a56463 >> 0x20);
          *(int *)(iVar11 + ((uint)((ulonglong)uVar14 * 0xb7a56463) >> (uVar18 & 0xff) |
                             uVar36 << (uVar19 & 0xff) | uVar36 >> ((uint)puVar10 & 0xff)) * 4) =
               iVar9;
          if (puVar25 < param_4) {
            puVar16 = local_88;
            goto LAB_017aec70;
          }
          puVar13 = local_4c;
          local_4c = local_88;
        }
        puVar35 = param_4;
      }
      if (puVar25 <= puVar35) goto LAB_017afba8;
      iVar9 = (int)puVar35 - (int)local_44[0];
    } while( true );
  }
LAB_017afbb8:
  puVar16 = local_4c;
  local_4c = local_88;
LAB_017aec70:
  local_88 = puVar16;
  *param_3 = local_88;
  param_3[1] = local_4c;
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)puVar24 - (int)param_4,puVar10,local_2c ^ DAT_018ddaf8,0);
  }
  return;
LAB_017afba8:
  puVar10 = puVar13;
  goto LAB_017afbb8;
}

