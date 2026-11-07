// FUN_017a5eb8 @ 017a5eb8 size=6736 calls_out=2 calls_in=1
// strings: 

void FUN_017a5eb8(int param_1,uint *param_2,undefined4 *param_3,uint *param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  char *pcVar30;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  uint *puVar36;
  char *pcVar37;
  int iVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  uint *unaff_r8;
  int iVar42;
  uint *puVar43;
  uint *puVar44;
  uint uVar45;
  bool bVar46;
  uint *local_a0;
  uint *local_60;
  char *local_58;
  uint *local_54;
  
  uVar7 = DAT_018ddaf8;
  puVar31 = *(uint **)(param_1 + 4);
  puVar11 = *(uint **)(param_1 + 0xc);
  puVar32 = (uint *)((int)param_4 + param_5);
  pcVar37 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  bVar46 = pcVar37 < (char *)((int)param_4 + ((param_5 - (int)puVar31) - (int)puVar11));
  if (bVar46) {
    unaff_r8 = (uint *)((int)param_4 + ((param_5 - (int)puVar31) - (int)pcVar37));
  }
  puVar23 = *(undefined4 **)(param_1 + 0xb4);
  if (!bVar46) {
    unaff_r8 = puVar11;
  }
  puVar17 = (uint *)puVar23[1];
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r8 = puVar11;
  }
  puVar44 = (uint *)*puVar23;
  puVar12 = (uint *)((int)puVar17 + puVar23[3]);
  iVar38 = puVar23[0x17];
  puVar18 = (uint *)((int)puVar31 + (int)unaff_r8);
  local_54 = (uint *)*param_3;
  local_a0 = (uint *)param_3[1];
  puVar19 = (uint *)puVar23[0x19];
  uVar20 = puVar23[0x30];
  uVar45 = puVar23[0x2f];
  puVar24 = puVar32 + -2;
  puVar11 = puVar12;
  if (*(int *)(param_1 + 0xd8) != 0) {
    uVar13 = 4 << (uVar45 & 0xff);
    puVar11 = (uint *)(4 << (uVar20 & 0xff));
    if (puVar11 != (uint *)0x0) {
      puVar25 = (uint *)0x0;
      do {
        HintPreloadData((char *)(iVar38 + (int)puVar25));
        puVar25 = puVar25 + 0x10;
      } while (puVar25 < puVar11);
    }
    if (uVar13 != 0) {
      uVar26 = 0;
      do {
        HintPreloadData((char *)((int)puVar19 + uVar26));
        uVar26 = uVar26 + 0x40;
        puVar11 = puVar19;
      } while (uVar26 < uVar13);
    }
  }
  puVar25 = param_4;
  if ((char *)((int)param_4 + (int)((int)puVar44 + (-(int)puVar12 - (int)puVar18))) == (char *)0x0)
  {
    puVar25 = (uint *)((int)param_4 + 1);
  }
  if (puVar24 <= puVar25) {
LAB_017a7108:
    puVar8 = puVar11;
    puVar11 = local_a0;
    local_a0 = local_54;
    local_54 = puVar11;
LAB_017a684c:
    *param_3 = local_a0;
    param_3[1] = local_54;
    if ((uVar7 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78((int)puVar32 - (int)param_4,puVar8,uVar7 ^ DAT_018ddaf8,0);
    }
    return;
  }
  uVar13 = 0x20 - *(int *)(param_1 + 0xbc);
  iVar27 = *(int *)(param_1 + 0xc0);
  puVar14 = (uint *)((int)puVar44 - (int)puVar17);
  iVar42 = *(int *)(param_1 + 0x5c);
  puVar8 = *(uint **)(param_1 + 100);
  uVar26 = 0x40 - iVar27;
  uVar21 = iVar27 - 0x20;
  uVar28 = 0x20 - iVar27;
  puVar34 = unaff_r8;
LAB_017a6118:
  puVar16 = local_54;
  puVar43 = (uint *)*puVar25;
  puVar9 = (uint *)puVar25[1];
  uVar41 = (int)puVar25 - (int)puVar31;
  puVar15 = (uint *)((1 - (int)local_54) + uVar41);
  if (puVar15 < unaff_r8) {
    puVar34 = puVar14;
  }
  uVar40 = (uint)((int)puVar43 * -0x61c8864f) >> (0x18 - uVar45 & 0xff);
  uVar10 = (uint)((int)puVar43 * -0x61c8864f) >> (uVar13 & 0xff);
  uVar35 = puVar19[uVar40 >> 8];
  uVar29 = (uint)(ZEXT48(puVar43) * 0xb7a56463);
  uVar33 = (int)puVar9 * -0x485a9b9d + (int)puVar43 * -0x30e44324 +
           (int)(ZEXT48(puVar43) * 0xb7a56463 >> 0x20);
  puVar36 = (uint *)puVar8[uVar10];
  uVar22 = uVar29 >> (0x38 - uVar20 & 0xff) | uVar33 << (uVar20 - 0x18 & 0xff) |
           uVar33 >> (0x18 - uVar20 & 0xff);
  uVar29 = uVar29 >> (uVar26 & 0xff) | uVar33 << (uVar21 & 0xff) | uVar33 >> (uVar28 & 0xff);
  puVar11 = *(uint **)(iVar38 + (uVar22 >> 8) * 4);
  if (puVar15 < unaff_r8) {
    puVar34 = (uint *)((int)puVar17 + (int)(((int)puVar34 - (int)unaff_r8) + (int)puVar15));
  }
  else {
    puVar34 = puVar31;
  }
  puVar39 = *(uint **)(iVar42 + uVar29 * 4);
  puVar8[uVar10] = uVar41;
  if (unaff_r8 <= puVar15) {
    puVar34 = (uint *)((int)puVar34 + (int)puVar15);
  }
  *(uint *)(iVar42 + uVar29 * 4) = uVar41;
  if ((2 < (uint)(((int)unaff_r8 + -1) - (int)puVar15)) && (*puVar34 == *(uint *)((int)puVar25 + 1))
     ) {
    if (puVar15 < unaff_r8) {
      puVar11 = puVar44;
    }
    else {
      puVar11 = puVar32;
    }
    puVar9 = puVar34 + 1;
    puVar43 = (uint *)((int)puVar25 + 5);
    puVar15 = (uint *)((int)puVar43 + ((int)puVar11 - (int)puVar9));
    if (puVar32 < puVar15) {
      puVar15 = puVar32;
    }
    if (puVar43 < (uint *)((int)puVar15 + -3)) {
      if (puVar34[1] == *(uint *)((int)puVar25 + 5)) {
        puVar34 = puVar34 + 2;
        for (puVar36 = (uint *)((int)puVar25 + 9); puVar36 < (uint *)((int)puVar15 + -3);
            puVar36 = puVar36 + 1) {
          if (*puVar34 != *puVar36) {
            uVar40 = *puVar34 ^ *puVar36;
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((int)puVar36 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar43));
            goto joined_r0x017a6988;
          }
          puVar34 = puVar34 + 1;
        }
        goto LAB_017a6710;
      }
      uVar40 = puVar34[1] ^ *(uint *)((int)puVar25 + 5);
      bVar4 = (byte)uVar40;
      bVar5 = (byte)(uVar40 >> 8);
      bVar6 = (byte)(uVar40 >> 0x10);
      bVar1 = (byte)(uVar40 >> 0x18);
      pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar36 = puVar43;
      puVar34 = puVar9;
LAB_017a6710:
      if (puVar36 < (uint *)((int)puVar15 + -1)) {
        if ((ushort)*puVar34 == (ushort)*puVar36) {
          puVar36 = (uint *)((int)puVar36 + 2);
          puVar34 = (uint *)((int)puVar34 + 2);
        }
      }
      if ((puVar36 < puVar15) && ((char)*puVar34 == (char)*puVar36)) {
        puVar36 = (uint *)((int)puVar36 + 1);
      }
      pcVar37 = (char *)((int)puVar36 - (int)puVar43);
    }
joined_r0x017a6988:
    if (puVar11 == (uint *)((int)puVar9 + (int)pcVar37)) {
      puVar9 = (uint *)((int)puVar43 + (int)pcVar37);
      puVar34 = puVar18;
      puVar11 = puVar9;
      if (puVar9 < (uint *)((int)puVar32 + -3)) {
        if (*puVar18 == *(uint *)((int)puVar43 + (int)pcVar37)) {
          do {
            puVar11 = puVar11 + 1;
            puVar34 = puVar34 + 1;
            if ((uint *)((int)puVar32 + -3) <= puVar11) goto LAB_017a69a8;
          } while (*puVar34 == *puVar11);
          uVar40 = *puVar34 ^ *puVar11;
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          pcVar30 = (char *)((int)puVar11 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar9));
        }
        else {
          uVar40 = *puVar18 ^ *(uint *)((int)puVar43 + (int)pcVar37);
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017a69a8:
        if (puVar11 < (uint *)((int)puVar32 + -1)) {
          if ((ushort)*puVar34 == (ushort)*puVar11) {
            puVar34 = (uint *)((int)puVar34 + 2);
            puVar11 = (uint *)((int)puVar11 + 2);
          }
        }
        if ((puVar11 < puVar32) && ((char)*puVar34 == (char)*puVar11)) {
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        pcVar30 = (char *)((int)puVar11 - (int)puVar9);
      }
      pcVar37 = pcVar37 + (int)pcVar30;
    }
    puVar25 = (uint *)((int)puVar25 + 1);
    uVar40 = (int)puVar25 - (int)param_4;
    local_58 = pcVar37 + 4;
    puVar11 = (uint *)param_2[3];
    if (puVar32 + -8 < puVar25) {
      FUN_017a4c40(puVar11,param_4,puVar25,puVar32 + -8);
LAB_017a6ed4:
      param_2[3] = param_2[3] + uVar40;
      puVar23 = (undefined4 *)param_2[1];
      if (0xffff < uVar40) {
        param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
        param_2[9] = 1;
      }
    }
    else {
      uVar10 = *param_4;
      uVar22 = param_4[1];
      uVar29 = param_4[2];
      puVar11[3] = param_4[3];
      *puVar11 = uVar10;
      puVar11[1] = uVar22;
      puVar11[2] = uVar29;
      uVar10 = param_2[3];
      if (0x10 < uVar40) {
        uVar22 = param_4[5];
        uVar29 = param_4[6];
        uVar33 = param_4[7];
        *(uint *)(uVar10 + 0x10) = param_4[4];
        *(uint *)(uVar10 + 0x14) = uVar22;
        *(uint *)(uVar10 + 0x18) = uVar29;
        *(uint *)(uVar10 + 0x1c) = uVar33;
        if (0x10 < (int)(uVar40 - 0x10)) {
          puVar11 = param_4 + 0x10;
          puVar34 = (uint *)(uVar10 + 0x20);
          do {
            uVar22 = puVar11[-7];
            uVar29 = puVar11[-6];
            puVar9 = puVar34 + 8;
            uVar33 = puVar11[-5];
            *puVar34 = puVar11[-8];
            puVar34[1] = uVar22;
            puVar34[2] = uVar29;
            puVar34[3] = uVar33;
            uVar22 = puVar11[-3];
            uVar29 = puVar11[-2];
            uVar33 = puVar11[-1];
            puVar34[4] = puVar11[-4];
            puVar34[5] = uVar22;
            puVar34[6] = uVar29;
            puVar34[7] = uVar33;
            puVar11 = puVar11 + 8;
            puVar34 = puVar9;
          } while (puVar9 < (uint *)(uVar10 + uVar40));
        }
        goto LAB_017a6ed4;
      }
      param_2[3] = uVar10 + uVar40;
      puVar23 = (undefined4 *)param_2[1];
    }
    *(short *)(puVar23 + 1) = (short)uVar40;
    *puVar23 = 1;
    if ((char *)0xffff < pcVar37 + 1) {
      param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar23 + 6) = (short)(pcVar37 + 1);
    local_54 = local_a0;
    local_a0 = puVar16;
    goto LAB_017a682c;
  }
  if (unaff_r8 < puVar39) {
    puVar34 = (uint *)((int)puVar31 + (int)puVar39);
    puVar11 = *(uint **)((int)puVar31 + (int)puVar39);
    if (puVar9 != (uint *)puVar34[1] || puVar43 != puVar11) goto LAB_017a60dc;
    puVar11 = puVar25 + 2;
    if (puVar11 < (uint *)((int)puVar32 + -3)) {
      if (puVar34[2] == puVar25[2]) {
        puVar9 = puVar34 + 3;
        for (puVar16 = puVar25 + 3; puVar16 < (uint *)((int)puVar32 + -3); puVar16 = puVar16 + 1) {
          if (*puVar9 != *puVar16) {
            uVar40 = *puVar9 ^ *puVar16;
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            local_58 = (char *)((int)puVar16 +
                               (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                 << 1 | bVar4 >> 2 & 1) << 1 |
                                                               bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1
                                                              ) << 1 | bVar4 >> 5 & 1) << 1 |
                                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                               (int)puVar11));
            goto LAB_017a6dac;
          }
          puVar9 = puVar9 + 1;
        }
        goto LAB_017a6d5c;
      }
      uVar40 = puVar34[2] ^ puVar25[2];
      bVar4 = (byte)uVar40;
      bVar5 = (byte)(uVar40 >> 8);
      bVar6 = (byte)(uVar40 >> 0x10);
      bVar1 = (byte)(uVar40 >> 0x18);
      local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                         bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                       | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                     | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                         bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                       | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                     | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                        (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                         bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                       | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                     | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                        (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                         bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                       | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                     | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar9 = puVar34 + 2;
      puVar16 = puVar11;
LAB_017a6d5c:
      if (puVar16 < (uint *)((int)puVar32 + -1)) {
        if ((ushort)*puVar9 == (ushort)*puVar16) {
          puVar9 = (uint *)((int)puVar9 + 2);
          puVar16 = (uint *)((int)puVar16 + 2);
        }
      }
      if ((puVar16 < puVar32) && ((char)*puVar9 == (char)*puVar16)) {
        puVar16 = (uint *)((int)puVar16 + 1);
      }
      local_58 = (char *)((int)puVar16 - (int)puVar11);
    }
LAB_017a6dac:
    local_58 = local_58 + 8;
    local_a0 = (uint *)((int)puVar25 - (int)puVar34);
    if (param_4 < puVar25 && puVar18 < puVar34) {
      do {
        puVar34 = (uint *)((int)puVar34 + -1);
        puVar11 = (uint *)((int)puVar25 + -1);
        if (*(char *)puVar11 != *(char *)puVar34) goto LAB_017a6360;
        local_58 = local_58 + 1;
        puVar25 = puVar11;
      } while (param_4 < puVar11 && puVar18 < puVar34);
LAB_017a6af8:
      puVar25 = puVar11;
    }
    goto LAB_017a6368;
  }
  if (((uVar22 ^ (uint)puVar11) & 0xff) == 0) {
    uVar10 = (uint)puVar11 >> 8;
    puVar34 = (uint *)((int)puVar17 + uVar10);
    if ((puVar12 < puVar34) &&
       (uVar22 = (uint)puVar11 >> 8, puVar11 = (uint *)puVar34[1],
       puVar9 == puVar11 && puVar43 == *(uint **)((int)puVar17 + uVar22))) {
      puVar16 = puVar34 + 2;
      puVar9 = puVar25 + 2;
      puVar11 = (uint *)((int)puVar9 + ((int)puVar44 - (int)puVar16));
      if (puVar32 < puVar11) {
        puVar11 = puVar32;
      }
      if (puVar9 < (uint *)((int)puVar11 + -3)) {
        if (puVar34[2] == puVar25[2]) {
          puVar43 = puVar34 + 3;
          for (puVar15 = puVar25 + 3; puVar15 < (uint *)((int)puVar11 + -3); puVar15 = puVar15 + 1)
          {
            if (*puVar43 != *puVar15) {
              uVar40 = *puVar43 ^ *puVar15;
              bVar4 = (byte)uVar40;
              bVar5 = (byte)(uVar40 >> 8);
              bVar6 = (byte)(uVar40 >> 0x10);
              bVar1 = (byte)(uVar40 >> 0x18);
              local_58 = (char *)((int)puVar15 +
                                 (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                                 (int)puVar9));
              goto LAB_017a62fc;
            }
            puVar43 = puVar43 + 1;
          }
          goto LAB_017a62ac;
        }
        uVar40 = puVar34[2] ^ puVar25[2];
        bVar4 = (byte)uVar40;
        bVar5 = (byte)(uVar40 >> 8);
        bVar6 = (byte)(uVar40 >> 0x10);
        bVar1 = (byte)(uVar40 >> 0x18);
        local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
      }
      else {
        puVar15 = puVar9;
        puVar43 = puVar16;
LAB_017a62ac:
        if (puVar15 < (uint *)((int)puVar11 + -1)) {
          if ((ushort)*puVar43 == (ushort)*puVar15) {
            puVar15 = (uint *)((int)puVar15 + 2);
            puVar43 = (uint *)((int)puVar43 + 2);
          }
        }
        if ((puVar15 < puVar11) && ((char)*puVar43 == (char)*puVar15)) {
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        local_58 = (char *)((int)puVar15 - (int)puVar9);
      }
LAB_017a62fc:
      if (puVar44 == (uint *)((int)puVar16 + (int)local_58)) {
        puVar15 = (uint *)((int)puVar9 + (int)local_58);
        puVar11 = puVar15;
        puVar16 = puVar18;
        if (puVar15 < (uint *)((int)puVar32 + -3)) {
          if (*puVar18 == *(uint *)((int)puVar9 + (int)local_58)) {
            do {
              puVar11 = puVar11 + 1;
              puVar16 = puVar16 + 1;
              if ((uint *)((int)puVar32 + -3) <= puVar11) goto LAB_017a7680;
            } while (*puVar16 == *puVar11);
            uVar40 = *puVar16 ^ *puVar11;
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((int)puVar11 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar15));
          }
          else {
            uVar40 = *puVar18 ^ *(uint *)((int)puVar9 + (int)local_58);
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017a7680:
          if (puVar11 < (uint *)((int)puVar32 + -1)) {
            if ((ushort)*puVar16 == (ushort)*puVar11) {
              puVar11 = (uint *)((int)puVar11 + 2);
              puVar16 = (uint *)((int)puVar16 + 2);
            }
          }
          if ((puVar11 < puVar32) && ((char)*puVar16 == (char)*puVar11)) {
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          pcVar37 = (char *)((int)puVar11 - (int)puVar15);
        }
        local_58 = local_58 + (int)pcVar37;
      }
      local_58 = local_58 + 8;
      local_a0 = (uint *)((int)puVar14 + ((uVar41 - (int)unaff_r8) - uVar10));
      if (param_4 < puVar25) {
        do {
          puVar34 = (uint *)((int)puVar34 + -1);
          puVar11 = (uint *)((int)puVar25 + -1);
          if (*(char *)puVar11 != *(char *)puVar34) goto LAB_017a6360;
          local_58 = local_58 + 1;
          puVar25 = puVar11;
        } while (param_4 < puVar11 && puVar12 < puVar34);
        goto LAB_017a6af8;
      }
      goto LAB_017a6368;
    }
  }
LAB_017a60dc:
  if (unaff_r8 < puVar36) {
    puVar34 = (uint *)((int)puVar31 + (int)puVar36);
    puVar11 = puVar31;
    if (*(uint *)((int)puVar31 + (int)puVar36) == *puVar25) {
LAB_017a6464:
      uVar40 = *(uint *)((int)puVar25 + 1);
      uVar29 = *(uint *)((int)puVar25 + 5);
      uVar10 = (uint)((ulonglong)uVar40 * 0xb7a56463);
      uVar33 = uVar29 * -0x485a9b9d + uVar40 * -0x30e44324 +
               (int)((ulonglong)uVar40 * 0xb7a56463 >> 0x20);
      uVar22 = uVar10 >> (uVar26 & 0xff) | uVar33 << (uVar21 & 0xff) | uVar33 >> (uVar28 & 0xff);
      uVar10 = uVar10 >> (0x38 - uVar20 & 0xff) | uVar33 << (uVar20 - 0x18 & 0xff) |
               uVar33 >> (0x18 - uVar20 & 0xff);
      uVar33 = *(uint *)(iVar38 + (uVar10 >> 8) * 4);
      puVar11 = *(uint **)(iVar42 + uVar22 * 4);
      *(uint *)(iVar42 + uVar22 * 4) = uVar41 + 1;
      if (unaff_r8 < puVar11) {
        puVar16 = (uint *)((int)puVar31 + (int)puVar11);
        if (uVar29 != puVar16[1] || uVar40 != *(uint *)((int)puVar31 + (int)puVar11))
        goto LAB_017a64f8;
        puVar11 = (uint *)((int)puVar25 + 9);
        if (puVar11 < (uint *)((int)puVar32 + -3)) {
          if (puVar16[2] == *(uint *)((int)puVar25 + 9)) {
            puVar9 = puVar16 + 3;
            for (puVar34 = (uint *)((int)puVar25 + 0xd); puVar34 < (uint *)((int)puVar32 + -3);
                puVar34 = puVar34 + 1) {
              if (*puVar9 != *puVar34) {
                uVar40 = *puVar9 ^ *puVar34;
                bVar4 = (byte)uVar40;
                bVar5 = (byte)(uVar40 >> 8);
                bVar6 = (byte)(uVar40 >> 0x10);
                bVar1 = (byte)(uVar40 >> 0x18);
                local_58 = (char *)((int)puVar34 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                     bVar4 >> 1 & 1) << 1 |
                                                                    bVar4 >> 2 & 1) << 1 |
                                                                   bVar4 >> 3 & 1) << 1 |
                                                                  bVar4 >> 4 & 1) << 1 |
                                                                 bVar4 >> 5 & 1) << 1 |
                                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                               bVar5 >> 1 & 1) << 1
                                                                              | bVar5 >> 2 & 1) << 1
                                                                             | bVar5 >> 3 & 1) << 1
                                                                            | bVar5 >> 4 & 1) << 1 |
                                                                           bVar5 >> 5 & 1) << 1 |
                                                                          bVar5 >> 6 & 1) << 1 |
                                                                         bVar5 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                     bVar6 >> 1 & 1) << 1 |
                                                                    bVar6 >> 2 & 1) << 1 |
                                                                   bVar6 >> 3 & 1) << 1 |
                                                                  bVar6 >> 4 & 1) << 1 |
                                                                 bVar6 >> 5 & 1) << 1 |
                                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                   (int)puVar11));
                goto LAB_017a741c;
              }
              puVar9 = puVar9 + 1;
            }
            goto LAB_017a73cc;
          }
          uVar40 = puVar16[2] ^ *(uint *)((int)puVar25 + 9);
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar9 = puVar16 + 2;
          puVar34 = puVar11;
LAB_017a73cc:
          if (puVar34 < (uint *)((int)puVar32 + -1)) {
            if ((ushort)*puVar9 == (ushort)*puVar34) {
              puVar9 = (uint *)((int)puVar9 + 2);
              puVar34 = (uint *)((int)puVar34 + 2);
            }
          }
          if ((puVar34 < puVar32) && ((char)*puVar9 == (char)*puVar34)) {
            puVar34 = (uint *)((int)puVar34 + 1);
          }
          local_58 = (char *)((int)puVar34 - (int)puVar11);
        }
LAB_017a741c:
        puVar25 = (uint *)((int)puVar25 + 1);
        local_58 = local_58 + 8;
        local_a0 = (uint *)((int)puVar25 - (int)puVar16);
        if (puVar18 < puVar16 && param_4 < puVar25) {
          do {
            puVar16 = (uint *)((int)puVar16 + -1);
            puVar11 = (uint *)((int)puVar25 + -1);
            if (*(char *)((int)puVar25 + -1) != *(char *)puVar16) {
              goto LAB_017a6368;
            }
            local_58 = local_58 + 1;
            puVar25 = puVar11;
          } while (param_4 < puVar11 && puVar18 < puVar16);
          goto LAB_017a6af8;
        }
        goto LAB_017a6368;
      }
      if (((uVar10 ^ uVar33) & 0xff) == 0) {
        puVar11 = (uint *)((int)puVar17 + (uVar33 >> 8));
        if ((puVar12 < puVar11) &&
           (uVar29 == puVar11[1] && uVar40 == *(uint *)((int)puVar17 + (uVar33 >> 8)))) {
          puVar9 = puVar11 + 2;
          puVar16 = (uint *)((int)puVar25 + 9);
          puVar34 = (uint *)((int)puVar16 + ((int)puVar44 - (int)puVar9));
          if (puVar32 < puVar34) {
            puVar34 = puVar32;
          }
          if (puVar16 < (uint *)((int)puVar34 + -3)) {
            if (puVar11[2] == *(uint *)((int)puVar25 + 9)) {
              puVar43 = puVar11 + 3;
              puVar15 = (uint *)((int)puVar25 + 0xd);
              while( true ) {
                if ((uint *)((int)puVar34 + -3) <= puVar15) break;
                if (*puVar43 != *puVar15) {
                  uVar40 = *puVar43 ^ *puVar15;
                  bVar4 = (byte)uVar40;
                  bVar5 = (byte)(uVar40 >> 8);
                  bVar6 = (byte)(uVar40 >> 0x10);
                  bVar1 = (byte)(uVar40 >> 0x18);
                  local_58 = (char *)((int)puVar15 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
                                                                              bVar5 >> 4 & 1) << 1 |
                                                                             bVar5 >> 5 & 1) << 1 |
                                                                            bVar5 >> 6 & 1) << 1 |
                                                                           bVar5 >> 7) << 0x10 |
                                                     (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                              bVar1 >> 1 & 1) << 1 |
                                                                             bVar1 >> 2 & 1) << 1 |
                                                                            bVar1 >> 3 & 1) << 1 |
                                                                           bVar1 >> 4 & 1) << 1 |
                                                                          bVar1 >> 5 & 1) << 1 |
                                                                         bVar1 >> 6 & 1) << 1 |
                                                                        bVar1 >> 7)) >> 3) -
                                     (int)puVar16));
                  goto LAB_017a6648;
                }
                puVar43 = puVar43 + 1;
                puVar15 = puVar15 + 1;
              }
              goto LAB_017a76dc;
            }
            uVar40 = puVar11[2] ^ *(uint *)((int)puVar25 + 9);
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
            ;
          }
          else {
            puVar15 = puVar16;
            puVar43 = puVar9;
LAB_017a76dc:
            if (puVar15 < (uint *)((int)puVar34 + -1)) {
              if ((ushort)*puVar43 == (ushort)*puVar15) {
                puVar15 = (uint *)((int)puVar15 + 2);
                puVar43 = (uint *)((int)puVar43 + 2);
              }
            }
            if ((puVar15 < puVar34) && ((char)*puVar43 == (char)*puVar15)) {
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            local_58 = (char *)((int)puVar15 - (int)puVar16);
          }
LAB_017a6648:
          if (puVar44 == (uint *)((int)puVar9 + (int)local_58)) {
            puVar15 = (uint *)((int)puVar16 + (int)local_58);
            puVar34 = puVar15;
            puVar9 = puVar18;
            if (puVar15 < (uint *)((int)puVar32 + -3)) {
              if (*puVar18 == *(uint *)((int)puVar16 + (int)local_58)) {
                do {
                  puVar34 = puVar34 + 1;
                  puVar9 = puVar9 + 1;
                  if ((uint *)((int)puVar32 + -3) <= puVar34) goto LAB_017a783c;
                } while (*puVar9 == *puVar34);
                uVar40 = *puVar9 ^ *puVar34;
                bVar4 = (byte)uVar40;
                bVar5 = (byte)(uVar40 >> 8);
                bVar6 = (byte)(uVar40 >> 0x10);
                bVar1 = (byte)(uVar40 >> 0x18);
                pcVar37 = (char *)((int)puVar34 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                           bVar5 >> 1 & 1) << 1 |
                                                                          bVar5 >> 2 & 1) << 1 |
                                                                         bVar5 >> 3 & 1) << 1 |
                                                                        bVar5 >> 4 & 1) << 1 |
                                                                       bVar5 >> 5 & 1) << 1 |
                                                                      bVar5 >> 6 & 1) << 1 |
                                                                     bVar5 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                    bVar6 >> 1 & 1) << 1 |
                                                                   bVar6 >> 2 & 1) << 1 |
                                                                  bVar6 >> 3 & 1) << 1 |
                                                                 bVar6 >> 4 & 1) << 1 |
                                                                bVar6 >> 5 & 1) << 1 |
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
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
                uVar40 = *puVar18 ^ *(uint *)((int)puVar16 + (int)local_58);
                bVar4 = (byte)uVar40;
                bVar5 = (byte)(uVar40 >> 8);
                bVar6 = (byte)(uVar40 >> 0x10);
                bVar1 = (byte)(uVar40 >> 0x18);
                pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
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
LAB_017a783c:
              if (puVar34 < (uint *)((int)puVar32 + -1)) {
                if ((ushort)*puVar9 == (ushort)*puVar34) {
                  puVar34 = (uint *)((int)puVar34 + 2);
                  puVar9 = (uint *)((int)puVar9 + 2);
                }
              }
              if ((puVar34 < puVar32) && ((char)*puVar9 == (char)*puVar34)) {
                puVar34 = (uint *)((int)puVar34 + 1);
              }
              pcVar37 = (char *)((int)puVar34 - (int)puVar15);
            }
            local_58 = local_58 + (int)pcVar37;
          }
          puVar25 = (uint *)((int)puVar25 + 1);
          local_58 = local_58 + 8;
          local_a0 = (uint *)((int)puVar14 + ((uVar41 + (1 - (int)unaff_r8)) - (uVar33 >> 8)));
          if (param_4 < puVar25) {
            puVar34 = puVar25;
            do {
              puVar11 = (uint *)((int)puVar11 + -1);
              puVar25 = (uint *)((int)puVar34 + -1);
              if (*(char *)((int)puVar34 + -1) != *(char *)puVar11) {
                puVar25 = puVar34;
                break;
              }
              local_58 = local_58 + 1;
              puVar34 = puVar25;
            } while (param_4 < puVar25 && puVar12 < puVar11);
          }
          goto LAB_017a6368;
        }
      }
LAB_017a64f8:
      puVar16 = puVar25 + 1;
      puVar11 = puVar34 + 1;
      if (unaff_r8 <= puVar36) {
        if (puVar16 < (uint *)((int)puVar32 + -3)) {
          if (puVar34[1] == puVar25[1]) {
            puVar11 = puVar34 + 2;
            for (puVar9 = puVar25 + 2; puVar9 < (uint *)((int)puVar32 + -3); puVar9 = puVar9 + 1) {
              if (*puVar11 != *puVar9) {
                uVar40 = *puVar11 ^ *puVar9;
                bVar4 = (byte)uVar40;
                bVar5 = (byte)(uVar40 >> 8);
                bVar6 = (byte)(uVar40 >> 0x10);
                bVar1 = (byte)(uVar40 >> 0x18);
                local_58 = (char *)((int)puVar9 +
                                   (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                     bVar4 >> 1 & 1) << 1 |
                                                                    bVar4 >> 2 & 1) << 1 |
                                                                   bVar4 >> 3 & 1) << 1 |
                                                                  bVar4 >> 4 & 1) << 1 |
                                                                 bVar4 >> 5 & 1) << 1 |
                                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                   << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                               bVar5 >> 1 & 1) << 1
                                                                              | bVar5 >> 2 & 1) << 1
                                                                             | bVar5 >> 3 & 1) << 1
                                                                            | bVar5 >> 4 & 1) << 1 |
                                                                           bVar5 >> 5 & 1) << 1 |
                                                                          bVar5 >> 6 & 1) << 1 |
                                                                         bVar5 >> 7) << 0x10 |
                                                   (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                     bVar6 >> 1 & 1) << 1 |
                                                                    bVar6 >> 2 & 1) << 1 |
                                                                   bVar6 >> 3 & 1) << 1 |
                                                                  bVar6 >> 4 & 1) << 1 |
                                                                 bVar6 >> 5 & 1) << 1 |
                                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                   << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                            bVar1 >> 1 & 1) << 1 |
                                                                           bVar1 >> 2 & 1) << 1 |
                                                                          bVar1 >> 3 & 1) << 1 |
                                                                         bVar1 >> 4 & 1) << 1 |
                                                                        bVar1 >> 5 & 1) << 1 |
                                                                       bVar1 >> 6 & 1) << 1 |
                                                                      bVar1 >> 7)) >> 3) -
                                   (int)puVar16));
                goto LAB_017a6904;
              }
              puVar11 = puVar11 + 1;
            }
            goto LAB_017a68b4;
          }
          uVar40 = puVar34[1] ^ puVar25[1];
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar9 = puVar16;
LAB_017a68b4:
          if (puVar9 < (uint *)((int)puVar32 + -1)) {
            if ((ushort)*puVar11 == (ushort)*puVar9) {
              puVar9 = (uint *)((int)puVar9 + 2);
              puVar11 = (uint *)((int)puVar11 + 2);
            }
          }
          if ((puVar9 < puVar32) && ((char)*puVar11 == (char)*puVar9)) {
            puVar9 = (uint *)((int)puVar9 + 1);
          }
          local_58 = (char *)((int)puVar9 - (int)puVar16);
        }
LAB_017a6904:
        local_58 = local_58 + 4;
        local_a0 = (uint *)((int)puVar25 - (int)puVar34);
        if (puVar18 < puVar34 && param_4 < puVar25) {
          do {
            puVar34 = (uint *)((int)puVar34 + -1);
            puVar11 = (uint *)((int)puVar25 + -1);
            if (*(char *)puVar11 != *(char *)puVar34) goto LAB_017a6360;
            local_58 = local_58 + 1;
            puVar25 = puVar11;
          } while (param_4 < puVar11 && puVar18 < puVar34);
          goto LAB_017a6af8;
        }
        goto LAB_017a6368;
      }
      puVar9 = (uint *)((int)puVar16 + ((int)puVar44 - (int)puVar11));
      if (puVar32 < puVar9) {
        puVar9 = puVar32;
      }
      if (puVar16 < (uint *)((int)puVar9 + -3)) {
        if (puVar34[1] == puVar25[1]) {
          puVar43 = puVar34 + 2;
          puVar15 = puVar25 + 2;
          while( true ) {
            if ((uint *)((int)puVar9 + -3) <= puVar15) break;
            if (*puVar43 != *puVar15) {
              uVar40 = *puVar43 ^ *puVar15;
              bVar4 = (byte)uVar40;
              bVar5 = (byte)(uVar40 >> 8);
              bVar6 = (byte)(uVar40 >> 0x10);
              bVar1 = (byte)(uVar40 >> 0x18);
              local_58 = (char *)((int)puVar15 +
                                 (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7) << 0x18 |
                                                 (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                   bVar5 >> 1 & 1) << 1 |
                                                                  bVar5 >> 2 & 1) << 1 |
                                                                 bVar5 >> 3 & 1) << 1 |
                                                                bVar5 >> 4 & 1) << 1 |
                                                               bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1
                                                              ) << 1 | bVar5 >> 7) << 0x10 |
                                                 (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                   bVar6 >> 1 & 1) << 1 |
                                                                  bVar6 >> 2 & 1) << 1 |
                                                                 bVar6 >> 3 & 1) << 1 |
                                                                bVar6 >> 4 & 1) << 1 |
                                                               bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1
                                                              ) << 1 | bVar6 >> 7) << 8 |
                                                 (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3) -
                                 (int)puVar16));
              goto joined_r0x017a6a60;
            }
            puVar43 = puVar43 + 1;
            puVar15 = puVar15 + 1;
          }
          goto LAB_017a6a08;
        }
        uVar40 = puVar34[1] ^ puVar25[1];
        bVar4 = (byte)uVar40;
        bVar5 = (byte)(uVar40 >> 8);
        bVar6 = (byte)(uVar40 >> 0x10);
        bVar1 = (byte)(uVar40 >> 0x18);
        local_58 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                           | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                          << 1 | bVar6 >> 4 & 1) << 1 |
                                                        bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1
                                                      | bVar6 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
      }
      else {
        puVar15 = puVar16;
        puVar43 = puVar11;
LAB_017a6a08:
        if (puVar15 < (uint *)((int)puVar9 + -1)) {
          if ((ushort)*puVar43 == (ushort)*puVar15) {
            puVar15 = (uint *)((int)puVar15 + 2);
            puVar43 = (uint *)((int)puVar43 + 2);
          }
        }
        if ((puVar15 < puVar9) && ((char)*puVar43 == (char)*puVar15)) {
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        local_58 = (char *)((int)puVar15 - (int)puVar16);
      }
joined_r0x017a6a60:
      if (puVar44 == (uint *)((int)puVar11 + (int)local_58)) {
        puVar15 = (uint *)((int)puVar16 + (int)local_58);
        puVar11 = puVar15;
        puVar9 = puVar18;
        if (puVar15 < (uint *)((int)puVar32 + -3)) {
          if (*puVar18 == *(uint *)((int)puVar16 + (int)local_58)) {
            do {
              puVar11 = puVar11 + 1;
              puVar9 = puVar9 + 1;
              if ((uint *)((int)puVar32 + -3) <= puVar11) goto LAB_017a6a80;
            } while (*puVar9 == *puVar11);
            uVar40 = *puVar9 ^ *puVar11;
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((int)puVar11 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar15));
          }
          else {
            uVar40 = *puVar18 ^ *(uint *)((int)puVar16 + (int)local_58);
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
LAB_017a6a80:
          if (puVar11 < (uint *)((int)puVar32 + -1)) {
            if ((ushort)*puVar9 == (ushort)*puVar11) {
              puVar11 = (uint *)((int)puVar11 + 2);
              puVar9 = (uint *)((int)puVar9 + 2);
            }
          }
          if ((puVar11 < puVar32) && ((char)*puVar9 == (char)*puVar11)) {
            puVar11 = (uint *)((int)puVar11 + 1);
          }
          pcVar37 = (char *)((int)puVar11 - (int)puVar15);
        }
        local_58 = local_58 + (int)pcVar37;
      }
      local_a0 = (uint *)(uVar41 - (int)puVar36);
      local_58 = local_58 + 4;
      if (puVar12 < puVar34 && param_4 < puVar25) {
        do {
          puVar34 = (uint *)((int)puVar34 + -1);
          puVar11 = (uint *)((int)puVar25 + -1);
          if (*(char *)puVar11 != *(char *)puVar34) goto LAB_017a6360;
          local_58 = local_58 + 1;
          puVar25 = puVar11;
        } while (param_4 < puVar11 && puVar12 < puVar34);
        goto LAB_017a6af8;
      }
      goto LAB_017a6368;
    }
  }
  else if (((uVar40 ^ uVar35) & 0xff) == 0) {
    puVar34 = (uint *)((int)puVar17 + (uVar35 >> 8));
    puVar11 = puVar17;
    if ((puVar12 < puVar34) &&
       (puVar11 = *(uint **)((int)puVar17 + (uVar35 >> 8)), puVar11 == (uint *)*puVar25)) {
      puVar36 = (uint *)((int)unaff_r8 + ((uVar35 >> 8) - (int)puVar14));
      goto LAB_017a6464;
    }
  }
  puVar25 = (uint *)((int)puVar25 + ((int)puVar25 - (int)param_4 >> 8) + 1);
  puVar34 = puVar8;
  goto LAB_017a610c;
LAB_017a6360:
LAB_017a6368:
  uVar40 = (int)puVar25 - (int)param_4;
  puVar11 = (uint *)param_2[3];
  if (puVar32 + -8 < puVar25) {
    FUN_017a4c40(puVar11,param_4,puVar25,puVar32 + -8);
  }
  else {
    uVar10 = *param_4;
    puVar16 = (uint *)param_4[1];
    uVar22 = param_4[2];
    puVar11[3] = param_4[3];
    *puVar11 = uVar10;
    puVar11[1] = (uint)puVar16;
    puVar11[2] = uVar22;
    uVar10 = param_2[3];
    if (uVar40 < 0x11) {
      param_2[3] = uVar10 + uVar40;
      puVar23 = (undefined4 *)param_2[1];
      goto LAB_017a63e0;
    }
    uVar22 = param_4[5];
    uVar29 = param_4[6];
    uVar33 = param_4[7];
    *(uint *)(uVar10 + 0x10) = param_4[4];
    *(uint *)(uVar10 + 0x14) = uVar22;
    *(uint *)(uVar10 + 0x18) = uVar29;
    *(uint *)(uVar10 + 0x1c) = uVar33;
    if (0x10 < (int)(uVar40 - 0x10)) {
      puVar11 = param_4 + 0x10;
      puVar34 = (uint *)(uVar10 + 0x20);
      do {
        uVar22 = puVar11[-7];
        uVar29 = puVar11[-6];
        puVar16 = puVar34 + 8;
        uVar33 = puVar11[-5];
        *puVar34 = puVar11[-8];
        puVar34[1] = uVar22;
        puVar34[2] = uVar29;
        puVar34[3] = uVar33;
        uVar22 = puVar11[-3];
        uVar29 = puVar11[-2];
        uVar33 = puVar11[-1];
        puVar34[4] = puVar11[-4];
        puVar34[5] = uVar22;
        puVar34[6] = uVar29;
        puVar34[7] = uVar33;
        puVar11 = puVar11 + 8;
        puVar34 = puVar16;
      } while (puVar16 < (uint *)(uVar10 + uVar40));
    }
  }
  param_2[3] = param_2[3] + uVar40;
  puVar23 = (undefined4 *)param_2[1];
  puVar16 = param_2;
  if (0xffff < uVar40) {
    param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
    param_2[9] = 1;
  }
LAB_017a63e0:
  *(short *)(puVar23 + 1) = (short)uVar40;
  *puVar23 = (char *)((int)local_a0 + 3);
  if ((char *)0xffff < local_58 + -3) {
    param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
    puVar16 = (uint *)&SUB_00000002;
    param_2[9] = 2;
  }
  *(short *)((int)puVar23 + 6) = (short)(local_58 + -3);
LAB_017a682c:
  puVar34 = local_54;
  local_60 = puVar32 + -8;
  param_4 = (uint *)((int)puVar25 + (int)local_58);
  param_2[1] = (uint)(puVar23 + 2);
  if (puVar24 < param_4) {
    puVar8 = puVar16;
    goto LAB_017a684c;
  }
  uVar40 = uVar41 + 2;
  local_54 = local_a0;
  lVar2 = (ulonglong)*(uint *)((int)puVar31 + uVar40) * 0xb7a56463;
  lVar3 = (ulonglong)*(uint *)((int)param_4 + -2) * 0xb7a56463;
  uVar10 = *(int *)((int)puVar31 + uVar41 + 6) * -0x485a9b9d +
           *(uint *)((int)puVar31 + uVar40) * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar41 = *(int *)((int)param_4 + 2) * -0x485a9b9d + *(uint *)((int)param_4 + -2) * -0x30e44324 +
           (int)((ulonglong)lVar3 >> 0x20);
  *(uint *)(iVar42 + ((uint)lVar2 >> (uVar26 & 0xff) | uVar10 << (uVar21 & 0xff) |
                     uVar10 >> (uVar28 & 0xff)) * 4) = uVar40;
  *(char **)(iVar42 + ((uint)lVar3 >> (uVar26 & 0xff) | uVar41 << (uVar21 & 0xff) |
                      uVar41 >> (uVar28 & 0xff)) * 4) = (char *)((int)param_4 + (-2 - (int)puVar31))
  ;
  puVar8[(uint)(*(int *)((int)puVar31 + uVar40) * -0x61c8864f) >> (uVar13 & 0xff)] = uVar40;
  puVar8[(uint)(*(int *)((int)param_4 + -1) * -0x61c8864f) >> (uVar13 & 0xff)] =
       ((int)param_4 + -1) - (int)puVar31;
  puVar11 = puVar34;
  while( true ) {
    local_a0 = puVar11;
    uVar41 = (int)param_4 - (int)puVar31;
    puVar11 = (uint *)(uVar41 - (int)local_a0);
    if (puVar11 < unaff_r8) {
      puVar25 = (uint *)((int)puVar17 + (int)(((int)puVar14 - (int)unaff_r8) + (int)puVar11));
    }
    else {
      puVar25 = (uint *)((int)puVar31 + (int)puVar11);
    }
    if (((int)((int)local_a0 + (int)((int)unaff_r8 + -1)) - uVar41 < 3) || (*puVar25 != *param_4))
    break;
    if (puVar11 < unaff_r8) {
      puVar11 = puVar44;
    }
    else {
      puVar11 = puVar32;
    }
    puVar16 = puVar25 + 1;
    puVar15 = param_4 + 1;
    puVar9 = (uint *)((int)puVar15 + ((int)puVar11 - (int)puVar16));
    if (puVar32 < puVar9) {
      puVar9 = puVar32;
    }
    if (puVar15 < (uint *)((int)puVar9 + -3)) {
      if (puVar25[1] == param_4[1]) {
        puVar25 = puVar25 + 2;
        puVar43 = param_4 + 2;
        while( true ) {
          if ((uint *)((int)puVar9 + -3) <= puVar43) break;
          puVar34 = (uint *)*puVar43;
          if ((uint *)*puVar25 != puVar34) {
            uVar40 = *puVar25 ^ (uint)puVar34;
            bVar4 = (byte)uVar40;
            bVar5 = (byte)(uVar40 >> 8);
            bVar6 = (byte)(uVar40 >> 0x10);
            bVar1 = (byte)(uVar40 >> 0x18);
            pcVar37 = (char *)((int)puVar43 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                << 1 | bVar6 >> 2 & 1) << 1 |
                                                              bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1)
                                                             << 1 | bVar6 >> 5 & 1) << 1 |
                                                           bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)puVar15));
            goto LAB_017a719c;
          }
          puVar25 = puVar25 + 1;
          puVar43 = puVar43 + 1;
        }
        goto LAB_017a7164;
      }
      uVar40 = puVar25[1] ^ param_4[1];
      bVar4 = (byte)uVar40;
      bVar5 = (byte)(uVar40 >> 8);
      bVar6 = (byte)(uVar40 >> 0x10);
      bVar1 = (byte)(uVar40 >> 0x18);
      pcVar37 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                        bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1
                                                      | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                                                    | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                       (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                        bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1
                                                      | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                                                    | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                       (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                        bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1
                                                      | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                                                    | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                        bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1
                                                      | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                                                    | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
    }
    else {
      puVar25 = puVar16;
      puVar43 = puVar15;
LAB_017a7164:
      if (puVar43 < (uint *)((int)puVar9 + -1)) {
        puVar34 = (uint *)(uint)(ushort)*puVar43;
        if ((uint *)(uint)(ushort)*puVar25 == puVar34) {
          puVar25 = (uint *)((int)puVar25 + 2);
          puVar43 = (uint *)((int)puVar43 + 2);
        }
      }
      if ((puVar43 < puVar9) && ((char)*puVar25 == (char)*puVar43)) {
        puVar43 = (uint *)((int)puVar43 + 1);
      }
      pcVar37 = (char *)((int)puVar43 - (int)puVar15);
    }
LAB_017a719c:
    if (puVar11 == (uint *)((int)puVar16 + (int)pcVar37)) {
      puVar16 = (uint *)((int)puVar15 + (int)pcVar37);
      puVar11 = puVar16;
      puVar25 = puVar18;
      if (puVar16 < (uint *)((int)puVar32 + -3)) {
        if (*puVar18 == *(uint *)((int)puVar15 + (int)pcVar37)) {
          do {
            puVar11 = puVar11 + 1;
            puVar25 = puVar25 + 1;
            if ((uint *)((int)puVar32 + -3) <= puVar11) goto LAB_017a7320;
          } while (*puVar25 == *puVar11);
          uVar40 = *puVar25 ^ *puVar11;
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          pcVar30 = (char *)((int)puVar11 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                              1 | bVar1 >> 2 & 1) << 1 |
                                                            bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                           << 1 | bVar1 >> 5 & 1) << 1 |
                                                         bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3) -
                            (int)puVar16));
        }
        else {
          uVar40 = *puVar18 ^ *(uint *)((int)puVar15 + (int)pcVar37);
          bVar4 = (byte)uVar40;
          bVar5 = (byte)(uVar40 >> 8);
          bVar6 = (byte)(uVar40 >> 0x10);
          bVar1 = (byte)(uVar40 >> 0x18);
          pcVar30 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
LAB_017a7320:
        if (puVar11 < (uint *)((int)puVar32 + -1)) {
          if ((ushort)*puVar25 == (ushort)*puVar11) {
            puVar11 = (uint *)((int)puVar11 + 2);
            puVar25 = (uint *)((int)puVar25 + 2);
          }
        }
        if ((puVar11 < puVar32) && ((char)*puVar25 == (char)*puVar11)) {
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        pcVar30 = (char *)((int)puVar11 - (int)puVar16);
      }
      pcVar37 = pcVar37 + (int)pcVar30;
    }
    puVar11 = (uint *)param_2[3];
    if (local_60 < param_4) {
      FUN_017a4c40(puVar11,param_4,param_4,local_60);
    }
    else {
      uVar40 = param_4[1];
      uVar10 = param_4[2];
      uVar22 = param_4[3];
      *puVar11 = *param_4;
      puVar11[1] = uVar40;
      puVar11[2] = uVar10;
      puVar11[3] = uVar22;
    }
    puVar23 = (undefined4 *)param_2[1];
    *(undefined2 *)(puVar23 + 1) = 0;
    *puVar23 = 1;
    if ((char *)0xffff < pcVar37 + 1) {
      param_2[10] = (int)((int)puVar23 - *param_2) >> 3;
      param_2[9] = 2;
    }
    *(short *)((int)puVar23 + 6) = (short)(pcVar37 + 1);
    uVar40 = param_4[1];
    param_2[1] = (uint)(puVar23 + 2);
    lVar2 = (ulonglong)*param_4 * 0xb7a56463;
    uVar40 = uVar40 * -0x485a9b9d + *param_4 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
    uVar10 = *param_4;
    param_4 = (uint *)((int)param_4 + (int)(pcVar37 + 4));
    puVar8[uVar10 * -0x61c8864f >> (uVar13 & 0xff)] = uVar41;
    *(uint *)(iVar42 + ((uint)lVar2 >> (uVar26 & 0xff) | uVar40 << (uVar21 & 0xff) |
                       uVar40 >> (uVar28 & 0xff)) * 4) = uVar41;
    if (puVar24 < param_4) goto LAB_017a684c;
    puVar11 = local_54;
    local_54 = local_a0;
  }
  puVar25 = param_4;
LAB_017a610c:
  if (puVar24 <= puVar25) goto LAB_017a7108;
  goto LAB_017a6118;
}

