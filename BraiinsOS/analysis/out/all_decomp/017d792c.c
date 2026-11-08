// FUN_017d792c @ 017d792c size=3060 calls_out=1 calls_in=2
// strings: 

void FUN_017d792c(int param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  char *pcVar37;
  int iVar38;
  uint *puVar39;
  int iVar40;
  int iVar41;
  char *pcVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  uint local_178;
  uint local_174;
  uint *local_148;
  uint uStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar24 = *(int *)(param_1 + 4);
  iVar41 = *(int *)(param_1 + 8);
  pcVar37 = (char *)((int)param_2 - iVar24);
  pcVar12 = *(char **)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_1 + 0x5c);
  iVar18 = *(int *)(param_1 + 0x28);
  uVar13 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar45 = (uint)((int)pcVar37 - (int)pcVar12) <= uVar13;
  pcVar10 = pcVar37;
  if (!bVar45) {
    pcVar10 = pcVar37 + -uVar13;
  }
  if (bVar45) {
    pcVar10 = pcVar12;
  }
  iVar19 = *(int *)(param_1 + 0x24);
  pcVar42 = *(char **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar10 = pcVar12;
  }
  uVar35 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0xc4);
  uVar14 = *(uint *)(param_1 + 0x54);
  iVar25 = -iVar19;
  uVar15 = iVar25 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    pcVar12 = *(char **)(param_1 + 0x1c);
    iVar27 = param_1 + 0x2c;
    iVar38 = iVar18;
    iVar7 = iVar24;
    iVar40 = iVar17;
    if ((uint)((int)pcVar37 - (int)pcVar12) < 0x181) {
      local_178 = iVar19 - 0x18;
      local_174 = 0x18 - iVar19;
    }
    else {
      pcVar11 = pcVar12 + 0x60;
      if (pcVar12 < pcVar11) {
        local_178 = 0x20 - uVar15;
        local_174 = iVar25 + 0x18;
        uVar36 = uVar35;
        uVar21 = uVar14;
        while( true ) {
          uVar31 = *(uint *)(iVar27 + ((uint)pcVar12 & 7) * 4);
          lVar3 = (ulonglong)*(uint *)(pcVar12 + iVar24 + 8) * 0xbf9b0000;
          uVar21 = *(int *)(pcVar12 + iVar24 + 0xc) * -0x40650000 +
                   *(uint *)(pcVar12 + iVar24 + 8) * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
                   uVar21;
          uVar20 = uVar31 >> 8;
          uVar21 = ((uint)lVar3 ^ uVar36) >> (uVar15 & 0xff) | uVar21 << (local_178 & 0xff) |
                   uVar21 >> (local_174 & 0xff);
          uVar36 = uVar21 >> 8;
          HintPreloadData(iVar18 + uVar36 * 0x20);
          iVar19 = uVar36 * 0x80;
          HintPreloadData(iVar17 + iVar19);
          HintPreloadData(iVar17 + iVar19 + 0x40);
          *(uint *)(iVar27 + ((uint)pcVar12 & 7) * 4) = uVar21;
          uVar36 = *(byte *)(iVar18 + uVar20 * 0x20) - 1 & 0x1f;
          if (uVar36 == 0) {
            uVar36 = 0x1f;
          }
          *(char *)(iVar18 + uVar20 * 0x20) = (char)uVar36;
          *(char *)(iVar18 + uVar20 * 0x20 + uVar36) = (char)uVar31;
          *(char **)(iVar17 + (uVar20 * 0x20 + uVar36) * 4) = pcVar12;
          pcVar12 = pcVar12 + 1;
          if (pcVar11 == pcVar12) break;
          uVar36 = *(uint *)(param_1 + 0x50);
          uVar21 = *(uint *)(param_1 + 0x54);
        }
        iVar19 = *(int *)(param_1 + 0x24);
        iVar38 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 4);
        iVar40 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_178 = iVar19 - 0x18;
        local_174 = 0x18 - iVar19;
      }
      pcVar12 = pcVar37 + -0x20;
      if (pcVar12 + iVar24 <= (char *)((int)param_2 + 1)) {
        pcVar11 = (char *)((int)param_2 + 1) + (1 - (int)(pcVar12 + iVar24));
        if (pcVar11 < (char *)0x9) {
          pcVar11 = pcVar12 + (int)pcVar11;
        }
        else {
          pcVar11 = pcVar37 + -0x18;
        }
        if (pcVar12 < pcVar11) {
          uVar36 = *(uint *)(param_1 + 0x50);
          uVar21 = *(uint *)(param_1 + 0x54);
          pcVar23 = pcVar12;
          do {
            uVar31 = (uint)pcVar23 & 7;
            piVar1 = (int *)(pcVar23 + iVar24 + 4);
            puVar8 = (uint *)(pcVar23 + iVar24);
            pcVar23 = pcVar23 + 1;
            lVar3 = (ulonglong)*puVar8 * 0xbf9b0000;
            uVar20 = *piVar1 * -0x40650000 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
                     ^ uVar21;
            uVar28 = ((uint)lVar3 ^ uVar36) >> (0x38U - iVar19 & 0xff) |
                     uVar20 << (iVar19 - 0x18U & 0xff) | uVar20 >> (0x18U - iVar19 & 0xff);
            uVar20 = uVar28 >> 8;
            HintPreloadData(iVar38 + uVar20 * 0x20);
            iVar25 = uVar20 * 0x80;
            HintPreloadData(iVar40 + iVar25);
            HintPreloadData(iVar40 + iVar25 + 0x40);
            *(uint *)(param_1 + uVar31 * 4 + 0x2c) = uVar28;
          } while (pcVar23 < pcVar11);
        }
      }
    }
    if (pcVar12 < pcVar37) {
      do {
        uVar31 = *(uint *)(iVar27 + ((uint)pcVar12 & 7) * 4);
        lVar3 = (ulonglong)*(uint *)(pcVar12 + iVar7 + 8) * 0xbf9b0000;
        uVar36 = *(int *)(pcVar12 + iVar7 + 0xc) * -0x40650000 +
                 *(uint *)(pcVar12 + iVar7 + 8) * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar20 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar19 & 0xff) |
                 uVar36 << (iVar19 - 0x18U & 0xff) | uVar36 >> (0x18U - iVar19 & 0xff);
        uVar36 = uVar31 >> 8;
        uVar21 = uVar20 >> 8;
        HintPreloadData(iVar38 + uVar21 * 0x20);
        iVar25 = uVar21 * 0x80;
        HintPreloadData(iVar40 + iVar25);
        HintPreloadData(iVar40 + iVar25 + 0x40);
        *(uint *)(iVar27 + ((uint)pcVar12 & 7) * 4) = uVar20;
        uVar21 = *(byte *)(iVar38 + uVar36 * 0x20) - 1 & 0x1f;
        if (uVar21 == 0) {
          uVar21 = 0x1f;
        }
        *(char *)(iVar38 + uVar36 * 0x20) = (char)uVar21;
        *(char *)(iVar38 + uVar36 * 0x20 + uVar21) = (char)uVar31;
        *(char **)(iVar40 + (uVar21 + uVar36 * 0x20) * 4) = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (pcVar37 != pcVar12);
    }
    *(char **)(param_1 + 0x1c) = pcVar37;
    lVar3 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar14 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar14;
    uVar35 = ((uint)lVar3 ^ uVar35) >> (uVar15 & 0xff) | uVar14 << (local_178 & 0xff) |
             uVar14 >> (local_174 & 0xff);
    uVar14 = uVar35 >> 8;
    uVar15 = *(uint *)(iVar27 + ((uint)pcVar37 & 7) * 4);
    HintPreloadData(iVar18 + uVar14 * 0x20);
    iVar19 = uVar14 * 0x80;
    HintPreloadData(iVar17 + iVar19);
    HintPreloadData(iVar17 + iVar19 + 0x40);
    *(uint *)(iVar27 + ((uint)pcVar37 & 7) * 4) = uVar35;
  }
  else {
    uVar36 = *param_2;
    uVar21 = param_2[1];
    *(char **)(param_1 + 0x1c) = pcVar37;
    lVar3 = (ulonglong)uVar36 * 0xbf9b0000;
    uVar14 = uVar21 * -0x40650000 + uVar36 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar14;
    uVar15 = ((uint)lVar3 ^ uVar35) >> (uVar15 & 0xff) | uVar14 << (0x20 - uVar15 & 0xff) |
             uVar14 >> (iVar25 + 0x18U & 0xff);
  }
  uVar14 = uVar15 >> 8;
  iVar17 = iVar17 + uVar14 * 0x80;
  iVar19 = iVar18 + uVar14 * 0x20;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar15;
  uVar43 = (uVar15 & 0xff) * 0x1010101;
  uVar36 = *(uint *)(iVar19 + 0x1c) ^ uVar43;
  uVar35 = *(uint *)(iVar19 + 0x18) ^ uVar43;
  uVar21 = *(uint *)(iVar19 + 0x14) ^ uVar43;
  uVar33 = *(uint *)(iVar19 + 0x10) ^ uVar43;
  uVar20 = *(uint *)(iVar19 + 0xc) ^ uVar43;
  uVar34 = *(uint *)(iVar19 + 8) ^ uVar43;
  uVar31 = *(uint *)(iVar19 + 4) ^ uVar43;
  uVar43 = uVar43 ^ *(uint *)(iVar18 + uVar14 * 0x20);
  uVar28 = (uint)*(byte *)(iVar18 + uVar14 * 0x20);
  uVar44 = uVar28 & 0x1f;
  uVar35 = ~((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar35 = uVar35 >> uVar44 | uVar35 << 0x20 - uVar44;
  if (uVar35 == 0) {
    pcVar12 = (char *)0x0;
    iVar25 = 0;
  }
  else {
    if (4 < uVar13) {
      uVar13 = 5;
    }
    iVar38 = 1 << (uVar13 & 0xff);
    iVar25 = 0;
    do {
      if (uVar35 == 0) {
        iVar7 = 0;
      }
      else {
        bVar4 = (byte)uVar35;
        bVar5 = (byte)(uVar35 >> 8);
        bVar6 = (byte)(uVar35 >> 0x10);
        bVar2 = (byte)(uVar35 >> 0x18);
        iVar7 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                         << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                      bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                              bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1)
                                         << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                      bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8
                        | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                           bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                         bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                       bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar13 = iVar7 + uVar44 & 0x1f;
      if (uVar13 == 0) {
        bVar45 = true;
        iVar7 = iVar25;
      }
      else {
        pcVar12 = *(char **)(iVar17 + uVar13 * 4);
        if (pcVar12 < pcVar10) break;
        if (pcVar12 < pcVar42) {
          iVar7 = iVar41;
        }
        else {
          iVar7 = iVar24;
        }
        HintPreloadData(pcVar12 + iVar7);
        iVar7 = iVar25 + 1;
        local_12c[iVar25] = (uint)pcVar12;
        bVar45 = iVar38 != 1;
        iVar38 = iVar38 + -1;
      }
      uVar35 = uVar35 & uVar35 - 1;
      if (uVar35 == 0) {
        bVar45 = false;
      }
      pcVar12 = (char *)0x0;
      iVar25 = iVar7;
    } while (bVar45);
  }
  uVar13 = uVar28 - 1 & 0x1f;
  if (uVar13 == 0) {
    uVar13 = 0x1f;
  }
  *(char *)(iVar18 + uVar14 * 0x20) = (char)uVar13;
  *(char *)(iVar19 + uVar13) = (char)uVar15;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar17 + uVar13 * 4) = iVar18;
  if (iVar25 == 0) {
    pcVar10 = (char *)0x3;
  }
  else {
    puVar29 = &uStack_130;
    iVar17 = 0;
    puVar22 = (uint *)(pcVar42 + iVar24);
    puVar16 = (uint *)((int)param_3 + -3);
    puVar8 = param_2 + 1;
    pcVar11 = (char *)0x3;
    do {
      puVar29 = puVar29 + 1;
      pcVar23 = (char *)*puVar29;
      if (pcVar23 < pcVar42) {
        pcVar12 = (char *)*param_2;
        if (*(char **)(pcVar23 + iVar41) != (char *)*param_2) goto LAB_017d7ec8;
        puVar26 = (uint *)(pcVar23 + iVar41 + 4);
        puVar9 = (uint *)((int)puVar8 + ((int)(pcVar42 + iVar41) - (int)puVar26));
        if (param_3 < puVar9) {
          puVar9 = param_3;
        }
        puVar32 = (uint *)((int)puVar9 + -3);
        if (puVar8 < puVar32) {
          if (*(uint *)(pcVar23 + iVar41 + 4) == param_2[1]) {
            puVar30 = param_2 + 2;
            puVar39 = (uint *)(pcVar23 + iVar41 + 8);
            if (puVar30 < puVar32) {
              do {
                if (*puVar39 != *puVar30) {
                  uVar13 = *puVar39 ^ *puVar30;
                  bVar4 = (byte)uVar13;
                  bVar5 = (byte)(uVar13 >> 8);
                  bVar6 = (byte)(uVar13 >> 0x10);
                  bVar2 = (byte)(uVar13 >> 0x18);
                  pcVar10 = (char *)((int)puVar30 +
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
                                    (int)puVar8));
                  goto joined_r0x017d8074;
                }
                puVar30 = puVar30 + 1;
                puVar39 = puVar39 + 1;
              } while (puVar30 < puVar32);
            }
            goto LAB_017d7ff8;
          }
          uVar13 = param_2[1] ^ *(uint *)(pcVar23 + iVar41 + 4);
          bVar4 = (byte)uVar13;
          bVar5 = (byte)(uVar13 >> 8);
          bVar6 = (byte)(uVar13 >> 0x10);
          bVar2 = (byte)(uVar13 >> 0x18);
          pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar30 = puVar8;
          puVar39 = puVar26;
LAB_017d7ff8:
          if (puVar30 < (uint *)((int)puVar9 + -1)) {
            if ((short)*puVar39 == (short)*puVar30) {
              puVar30 = (uint *)((int)puVar30 + 2);
              puVar39 = (uint *)((int)puVar39 + 2);
            }
          }
          if ((puVar30 < puVar9) && ((char)*puVar39 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar10 = (char *)((int)puVar30 - (int)puVar8);
        }
joined_r0x017d8074:
        if (pcVar42 + iVar41 == (char *)((int)puVar26 + (int)pcVar10)) {
          puVar9 = (uint *)((int)puVar8 + (int)pcVar10);
          if (puVar9 < puVar16) {
            if (*puVar22 == *(uint *)((int)puVar8 + (int)pcVar10)) {
              puVar26 = puVar9 + 1;
              local_148 = puVar22 + 1;
              if (puVar26 < puVar16) {
                do {
                  if (*local_148 != *puVar26) {
                    uVar13 = *local_148 ^ *puVar26;
                    bVar4 = (byte)uVar13;
                    bVar5 = (byte)(uVar13 >> 8);
                    bVar6 = (byte)(uVar13 >> 0x10);
                    bVar2 = (byte)(uVar13 >> 0x18);
                    pcVar12 = (char *)((int)puVar26 +
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
                                                                  )) >> 3) - (int)puVar9));
                    goto LAB_017d823c;
                  }
                  puVar26 = puVar26 + 1;
                  local_148 = local_148 + 1;
                } while (puVar26 < puVar16);
              }
              goto LAB_017d81e0;
            }
            uVar13 = *(uint *)((int)puVar8 + (int)pcVar10) ^ *puVar22;
            bVar4 = (byte)uVar13;
            bVar5 = (byte)(uVar13 >> 8);
            bVar6 = (byte)(uVar13 >> 0x10);
            bVar2 = (byte)(uVar13 >> 0x18);
            pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            puVar26 = puVar9;
            local_148 = puVar22;
LAB_017d81e0:
            if (puVar26 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar26) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar26 = (uint *)((int)puVar26 + 2);
              }
            }
            if ((puVar26 < param_3) && ((char)*local_148 == (char)*puVar26)) {
              puVar26 = (uint *)((int)puVar26 + 1);
            }
            pcVar12 = (char *)((int)puVar26 - (int)puVar9);
          }
LAB_017d823c:
          pcVar10 = pcVar10 + (int)pcVar12;
        }
        pcVar10 = pcVar10 + 4;
LAB_017d7f58:
        pcVar12 = pcVar10;
        if (pcVar11 < pcVar10) {
          *param_4 = pcVar37 + (3 - (int)pcVar23);
          pcVar11 = pcVar10;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar10)) break;
        }
      }
      else {
        puVar9 = (uint *)(pcVar23 + iVar24);
        pcVar12 = *(char **)((int)puVar9 + (int)(pcVar11 + -3));
        if (pcVar12 == *(char **)((int)param_2 + (int)(pcVar11 + -3))) {
          puVar26 = param_2;
          if (param_2 < puVar16) {
            if (*(uint *)(pcVar23 + iVar24) == *param_2) {
              do {
                puVar26 = puVar26 + 1;
                puVar9 = puVar9 + 1;
                if (puVar16 <= puVar26) goto LAB_017d80f8;
              } while (*puVar9 == *puVar26);
              uVar13 = *puVar9 ^ *puVar26;
              bVar4 = (byte)uVar13;
              bVar5 = (byte)(uVar13 >> 8);
              bVar6 = (byte)(uVar13 >> 0x10);
              bVar2 = (byte)(uVar13 >> 0x18);
              pcVar10 = (char *)((int)puVar26 +
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
              uVar13 = *(uint *)(pcVar23 + iVar24) ^ *param_2;
              bVar4 = (byte)uVar13;
              bVar5 = (byte)(uVar13 >> 8);
              bVar6 = (byte)(uVar13 >> 0x10);
              bVar2 = (byte)(uVar13 >> 0x18);
              pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017d80f8:
            if (puVar26 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar9 == (short)*puVar26) {
                puVar26 = (uint *)((int)puVar26 + 2);
                puVar9 = (uint *)((int)puVar9 + 2);
              }
            }
            if ((puVar26 < param_3) && ((char)*puVar9 == (char)*puVar26)) {
              puVar26 = (uint *)((int)puVar26 + 1);
            }
            pcVar10 = (char *)((int)puVar26 - (int)param_2);
          }
          goto LAB_017d7f58;
        }
      }
LAB_017d7ec8:
      pcVar10 = pcVar11;
      iVar17 = iVar17 + 1;
      pcVar11 = pcVar10;
    } while (iVar17 != iVar25);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar10,pcVar12,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

