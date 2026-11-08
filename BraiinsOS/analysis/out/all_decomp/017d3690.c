// FUN_017d3690 @ 017d3690 size=2916 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017d3690(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  undefined4 *puVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  uint *puVar41;
  uint uVar42;
  bool bVar43;
  uint local_178;
  uint local_174;
  int local_170;
  uint *local_148;
  undefined4 uStack_130;
  undefined4 local_12c [64];
  uint local_2c;
  
  iVar39 = *(int *)(param_1 + 4);
  uVar42 = (int)param_2 - iVar39;
  iVar30 = *(int *)(param_1 + 0x24);
  uVar35 = *(uint *)(param_1 + 0x50);
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_1 + 0x5c);
  puVar11 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  iVar18 = *(int *)(param_1 + 0x28);
  puVar19 = *(uint **)(param_1 + 0x10);
  bVar43 = puVar11 < (uint *)(uVar42 - (int)puVar19);
  iVar8 = *(int *)(param_1 + 8);
  if (bVar43) {
    puVar11 = (uint *)(uVar42 - (int)puVar11);
  }
  puVar9 = *(uint **)(param_1 + 0xc);
  if (!bVar43) {
    puVar11 = puVar19;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar11 = puVar19;
  }
  uVar20 = *(uint *)(param_1 + 0xc4);
  uVar21 = *(uint *)(param_1 + 0x54);
  iVar31 = -iVar30;
  uVar22 = iVar31 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar12 = *(uint *)(param_1 + 0x1c);
    iVar33 = param_1 + 0x2c;
    iVar40 = iVar18;
    iVar10 = iVar17;
    local_170 = iVar39;
    if (uVar42 - uVar12 < 0x181) {
      local_178 = iVar30 - 0x18;
      local_174 = 0x18 - iVar30;
    }
    else {
      uVar23 = uVar12 + 0x60;
      if (uVar12 < uVar23) {
        local_178 = 0x20 - uVar22;
        local_174 = iVar31 + 0x18;
        uVar25 = uVar35;
        uVar24 = uVar21;
        while( true ) {
          uVar38 = *(uint *)(iVar33 + (uVar12 & 7) * 4);
          uVar36 = *(uint *)(uVar12 + iVar39 + 8);
          lVar3 = (ulonglong)uVar36 * 0xbf9b0000;
          uVar24 = *(int *)(uVar12 + iVar39 + 0xc) * -0x40650000 + uVar36 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar24;
          uVar36 = uVar38 >> 8;
          uVar24 = ((uint)lVar3 ^ uVar25) >> (uVar22 & 0xff) | uVar24 << (local_178 & 0xff) |
                   uVar24 >> (local_174 & 0xff);
          uVar25 = uVar24 >> 8;
          HintPreloadData(iVar17 + uVar25 * 0x40);
          HintPreloadData(iVar18 + uVar25 * 0x10);
          *(uint *)(iVar33 + (uVar12 & 7) * 4) = uVar24;
          uVar25 = *(byte *)(iVar18 + uVar36 * 0x10) - 1 & 0xf;
          if (uVar25 == 0) {
            uVar25 = 0xf;
          }
          *(char *)(iVar18 + uVar36 * 0x10) = (char)uVar25;
          *(char *)(iVar18 + uVar36 * 0x10 + uVar25) = (char)uVar38;
          *(uint *)(iVar17 + (uVar36 * 0x10 + uVar25) * 4) = uVar12;
          uVar12 = uVar12 + 1;
          if (uVar23 == uVar12) break;
          uVar25 = *(uint *)(param_1 + 0x50);
          uVar24 = *(uint *)(param_1 + 0x54);
        }
        iVar30 = *(int *)(param_1 + 0x24);
        iVar40 = *(int *)(param_1 + 0x28);
        iVar10 = *(int *)(param_1 + 0x5c);
        local_170 = *(int *)(param_1 + 4);
      }
      else {
        local_178 = iVar30 - 0x18;
        local_174 = 0x18 - iVar30;
      }
      uVar12 = uVar42 + -0x20;
      if ((byte *)(uVar12 + iVar39) <= (byte *)((int)param_2 + 1)) {
        pbVar15 = (byte *)((int)param_2 + 1) + (1 - (int)(uVar12 + iVar39));
        if (pbVar15 < (byte *)0x9) {
          uVar23 = uVar12 + (int)pbVar15;
        }
        else {
          uVar23 = uVar42 + -0x18;
        }
        if (uVar12 < uVar23) {
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar36 = *(uint *)(param_1 + 0x54);
          uVar25 = uVar12;
          do {
            uVar16 = uVar25 & 7;
            piVar1 = (int *)(uVar25 + iVar39 + 4);
            puVar19 = (uint *)(uVar25 + iVar39);
            uVar25 = uVar25 + 1;
            lVar3 = (ulonglong)*puVar19 * 0xbf9b0000;
            uVar38 = *piVar1 * -0x40650000 + *puVar19 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar36;
            uVar29 = ((uint)lVar3 ^ uVar24) >> (0x38U - iVar30 & 0xff) |
                     uVar38 << (iVar30 - 0x18U & 0xff) | uVar38 >> (0x18U - iVar30 & 0xff);
            uVar38 = uVar29 >> 8;
            HintPreloadData(iVar10 + uVar38 * 0x40);
            HintPreloadData(iVar40 + uVar38 * 0x10);
            *(uint *)(param_1 + uVar16 * 4 + 0x2c) = uVar29;
          } while (uVar25 < uVar23);
        }
      }
    }
    if (uVar12 < uVar42) {
      do {
        uVar23 = *(uint *)(uVar12 + local_170 + 8);
        uVar36 = *(uint *)(iVar33 + (uVar12 & 7) * 4);
        lVar3 = (ulonglong)uVar23 * 0xbf9b0000;
        uVar23 = *(int *)(uVar12 + local_170 + 0xc) * -0x40650000 + uVar23 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar24 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar30 & 0xff) |
                 uVar23 << (iVar30 - 0x18U & 0xff) | uVar23 >> (0x18U - iVar30 & 0xff);
        uVar23 = uVar36 >> 8;
        uVar25 = uVar24 >> 8;
        HintPreloadData(iVar10 + uVar25 * 0x40);
        HintPreloadData(iVar40 + uVar25 * 0x10);
        *(uint *)(iVar33 + (uVar12 & 7) * 4) = uVar24;
        uVar25 = *(byte *)(iVar40 + uVar23 * 0x10) - 1 & 0xf;
        if (uVar25 == 0) {
          uVar25 = 0xf;
        }
        *(char *)(iVar40 + uVar23 * 0x10) = (char)uVar25;
        *(char *)(iVar40 + uVar23 * 0x10 + uVar25) = (char)uVar36;
        *(uint *)(iVar10 + (uVar25 + uVar23 * 0x10) * 4) = uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar42 != uVar12);
    }
    uVar12 = param_2[2];
    uVar23 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar42;
    lVar3 = (ulonglong)uVar12 * 0xbf9b0000;
    uVar21 = uVar23 * -0x40650000 + uVar12 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
    uVar22 = ((uint)lVar3 ^ uVar35) >> (uVar22 & 0xff) | uVar21 << (local_178 & 0xff) |
             uVar21 >> (local_174 & 0xff);
    uVar21 = uVar22 >> 8;
    uVar35 = *(uint *)(iVar33 + (uVar42 & 7) * 4);
    HintPreloadData(iVar17 + uVar21 * 0x40);
    HintPreloadData(iVar18 + uVar21 * 0x10);
    *(uint *)(iVar33 + (uVar42 & 7) * 4) = uVar22;
  }
  else {
    uVar12 = *param_2;
    uVar23 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar42;
    lVar3 = (ulonglong)uVar12 * 0xbf9b0000;
    uVar21 = uVar23 * -0x40650000 + uVar12 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
    uVar35 = ((uint)lVar3 ^ uVar35) >> (uVar22 & 0xff) | uVar21 << (0x20 - uVar22 & 0xff) |
             uVar21 >> (iVar31 + 0x18U & 0xff);
  }
  uVar21 = uVar35 >> 8;
  iVar17 = iVar17 + uVar21 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar35;
  iVar30 = iVar18 + uVar21 * 0x10;
  uVar12 = (uVar35 & 0xff) * 0x1010101;
  uVar22 = *(uint *)(iVar30 + 0xc) ^ uVar12;
  uVar25 = *(uint *)(iVar30 + 8) ^ uVar12;
  uVar23 = *(uint *)(iVar30 + 4) ^ uVar12;
  uVar12 = *(uint *)(iVar18 + uVar21 * 0x10) ^ uVar12;
  uVar24 = (uint)*(byte *)(iVar18 + uVar21 * 0x10);
  uVar36 = uVar24 & 0xf;
  puVar19 = (uint *)(-uVar36 & 0xf);
  uVar22 = (((uVar12 | 0x80808080) + 0xfefefeff | uVar12) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar22 = (~uVar22 << (int)puVar19 | (uVar22 ^ 0xffff) >> uVar36) & 0xffff;
  if (uVar22 == 0) {
    iVar31 = 0;
  }
  else {
    if (3 < uVar20) {
      uVar20 = 4;
    }
    iVar40 = 1 << (uVar20 & 0xff);
    iVar31 = 0;
    do {
      if (uVar22 == 0) {
        iVar10 = 0;
      }
      else {
        bVar4 = (byte)uVar22;
        bVar2 = (byte)(uVar22 >> 8);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                 bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar20 = iVar10 + uVar36 & 0xf;
      if (uVar20 == 0) {
        bVar43 = true;
        iVar10 = iVar31;
      }
      else {
        puVar19 = *(uint **)(iVar17 + uVar20 * 4);
        if (puVar19 < puVar11) break;
        if (puVar19 < puVar9) {
          iVar10 = iVar8;
        }
        else {
          iVar10 = iVar39;
        }
        HintPreloadData((byte *)(iVar10 + (int)puVar19));
        iVar10 = iVar31 + 1;
        local_12c[iVar31] = puVar19;
        bVar43 = iVar40 != 1;
        iVar40 = iVar40 + -1;
      }
      uVar22 = uVar22 & uVar22 - 1;
      if (uVar22 == 0) {
        bVar43 = false;
      }
      puVar19 = (uint *)0x0;
      iVar31 = iVar10;
    } while (bVar43);
  }
  uVar20 = uVar24 - 1 & 0xf;
  if (uVar20 == 0) {
    uVar20 = 0xf;
  }
  *(char *)(iVar18 + uVar21 * 0x10) = (char)uVar20;
  *(char *)(iVar30 + uVar20) = (char)uVar35;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar17 + uVar20 * 4) = iVar18;
  if (iVar31 == 0) {
    pbVar15 = (byte *)0x3;
  }
  else {
    puVar34 = &uStack_130;
    iVar17 = 0;
    puVar26 = (uint *)(iVar39 + (int)puVar9);
    puVar27 = (uint *)(iVar8 + (int)puVar9);
    puVar11 = (uint *)((int)param_3 + -3);
    puVar13 = param_2 + 1;
    pbVar7 = (byte *)0x3;
    do {
      puVar34 = puVar34 + 1;
      puVar28 = (uint *)*puVar34;
      if (puVar28 < puVar9) {
        puVar19 = (uint *)(iVar8 + (int)puVar28);
        if (*(uint *)(iVar8 + (int)puVar28) != *param_2) goto LAB_017d3bac;
        puVar41 = puVar19 + 1;
        puVar14 = (uint *)((int)puVar13 + ((int)puVar27 - (int)puVar41));
        if (param_3 < puVar14) {
          puVar14 = param_3;
        }
        puVar37 = (uint *)((int)puVar14 + -3);
        if (puVar13 < puVar37) {
          if (puVar19[1] == param_2[1]) {
            puVar32 = param_2 + 2;
            puVar19 = puVar19 + 2;
            if (puVar32 < puVar37) {
              do {
                if (*puVar19 != *puVar32) {
                  uVar35 = *puVar19 ^ *puVar32;
                  bVar4 = (byte)uVar35;
                  bVar5 = (byte)(uVar35 >> 8);
                  bVar6 = (byte)(uVar35 >> 0x10);
                  bVar2 = (byte)(uVar35 >> 0x18);
                  pbVar15 = (byte *)((int)puVar32 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar13));
                  goto joined_r0x017d3d58;
                }
                puVar32 = puVar32 + 1;
                puVar19 = puVar19 + 1;
              } while (puVar32 < puVar37);
            }
            goto LAB_017d3cdc;
          }
          uVar35 = param_2[1] ^ puVar19[1];
          bVar4 = (byte)uVar35;
          bVar5 = (byte)(uVar35 >> 8);
          bVar6 = (byte)(uVar35 >> 0x10);
          bVar2 = (byte)(uVar35 >> 0x18);
          pbVar15 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar19 = puVar41;
          puVar32 = puVar13;
LAB_017d3cdc:
          if (puVar32 < (uint *)((int)puVar14 + -1)) {
            if ((short)*puVar19 == (short)*puVar32) {
              puVar19 = (uint *)((int)puVar19 + 2);
              puVar32 = (uint *)((int)puVar32 + 2);
            }
          }
          if ((puVar32 < puVar14) && ((byte)*puVar19 == (byte)*puVar32)) {
            puVar32 = (uint *)((int)puVar32 + 1);
          }
          pbVar15 = (byte *)((int)puVar32 - (int)puVar13);
        }
joined_r0x017d3d58:
        puVar19 = puVar27;
        if (puVar27 == (uint *)((int)puVar41 + (int)pbVar15)) {
          puVar14 = (uint *)((int)puVar13 + (int)pbVar15);
          if (puVar14 < puVar11) {
            if (*puVar26 == *(uint *)((int)puVar13 + (int)pbVar15)) {
              puVar19 = puVar14 + 1;
              local_148 = puVar26 + 1;
              if (puVar19 < puVar11) {
                do {
                  if (*local_148 != *puVar19) {
                    uVar35 = *local_148 ^ *puVar19;
                    bVar4 = (byte)uVar35;
                    bVar5 = (byte)(uVar35 >> 8);
                    bVar6 = (byte)(uVar35 >> 0x10);
                    bVar2 = (byte)(uVar35 >> 0x18);
                    puVar19 = (uint *)((int)puVar19 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar14));
                    goto LAB_017d3f20;
                  }
                  puVar19 = puVar19 + 1;
                  local_148 = local_148 + 1;
                } while (puVar19 < puVar11);
              }
              goto LAB_017d3ec4;
            }
            uVar35 = *(uint *)((int)puVar13 + (int)pbVar15) ^ *puVar26;
            bVar4 = (byte)uVar35;
            bVar5 = (byte)(uVar35 >> 8);
            bVar6 = (byte)(uVar35 >> 0x10);
            bVar2 = (byte)(uVar35 >> 0x18);
            puVar19 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
          else {
            puVar19 = puVar14;
            local_148 = puVar26;
LAB_017d3ec4:
            if (puVar19 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar19) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar19 = (uint *)((int)puVar19 + 2);
              }
            }
            if ((puVar19 < param_3) && ((byte)*local_148 == (byte)*puVar19)) {
              puVar19 = (uint *)((int)puVar19 + 1);
            }
            puVar19 = (uint *)((int)puVar19 - (int)puVar14);
          }
LAB_017d3f20:
          pbVar15 = pbVar15 + (int)puVar19;
        }
        pbVar15 = pbVar15 + 4;
LAB_017d3c3c:
        if (pbVar7 < pbVar15) {
          *param_4 = uVar42 + (3 - (int)puVar28);
          pbVar7 = pbVar15;
          puVar19 = param_3;
          if (param_3 == (uint *)((int)param_2 + (int)pbVar15)) break;
        }
      }
      else {
        puVar19 = (uint *)(iVar39 + (int)puVar28);
        if (*(int *)((int)puVar19 + (int)(pbVar7 + -3)) ==
            *(int *)((int)param_2 + (int)(pbVar7 + -3))) {
          puVar14 = param_2;
          if (param_2 < puVar11) {
            if (*(uint *)(iVar39 + (int)puVar28) == *param_2) {
              do {
                puVar14 = puVar14 + 1;
                puVar19 = puVar19 + 1;
                if (puVar11 <= puVar14) goto LAB_017d3ddc;
              } while (*puVar19 == *puVar14);
              uVar35 = *puVar19 ^ *puVar14;
              bVar4 = (byte)uVar35;
              bVar5 = (byte)(uVar35 >> 8);
              bVar6 = (byte)(uVar35 >> 0x10);
              bVar2 = (byte)(uVar35 >> 0x18);
              pbVar15 = (byte *)((int)puVar14 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar35 = *(uint *)(iVar39 + (int)puVar28) ^ *param_2;
              bVar4 = (byte)uVar35;
              bVar5 = (byte)(uVar35 >> 8);
              bVar6 = (byte)(uVar35 >> 0x10);
              bVar2 = (byte)(uVar35 >> 0x18);
              pbVar15 = (byte *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017d3ddc:
            if (puVar14 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar19 == (short)*puVar14) {
                puVar19 = (uint *)((int)puVar19 + 2);
                puVar14 = (uint *)((int)puVar14 + 2);
              }
            }
            if ((puVar14 < param_3) &&
               (uVar35 = *puVar19, puVar19 = (uint *)(uint)(byte)*puVar14,
               (uint *)(uint)(byte)uVar35 == puVar19)) {
              puVar14 = (uint *)((int)puVar14 + 1);
            }
            pbVar15 = (byte *)((int)puVar14 - (int)param_2);
          }
          goto LAB_017d3c3c;
        }
      }
LAB_017d3bac:
      pbVar15 = pbVar7;
      iVar17 = iVar17 + 1;
      pbVar7 = pbVar15;
    } while (iVar17 != iVar31);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pbVar15,puVar19,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

