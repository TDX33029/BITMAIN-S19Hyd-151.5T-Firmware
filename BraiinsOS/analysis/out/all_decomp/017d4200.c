// FUN_017d4200 @ 017d4200 size=2888 calls_out=1 calls_in=2
// strings: 

void FUN_017d4200(int param_1,uint *param_2,uint *param_3,undefined4 *param_4)

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
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  char *pcVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  char *pcVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  int iVar38;
  char *pcVar39;
  uint uVar40;
  bool bVar41;
  uint local_174;
  uint local_170;
  uint *local_148;
  uint uStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar30 = *(int *)(param_1 + 4);
  iVar38 = *(int *)(param_1 + 8);
  pcVar34 = (char *)((int)param_2 - iVar30);
  pcVar12 = *(char **)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar16 = *(int *)(param_1 + 0x5c);
  iVar17 = *(int *)(param_1 + 0x28);
  uVar13 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar41 = (uint)((int)pcVar34 - (int)pcVar12) <= uVar13;
  pcVar10 = pcVar34;
  if (!bVar41) {
    pcVar10 = pcVar34 + -uVar13;
  }
  if (bVar41) {
    pcVar10 = pcVar12;
  }
  iVar18 = *(int *)(param_1 + 0x24);
  pcVar39 = *(char **)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar10 = pcVar12;
  }
  uVar27 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0xc4);
  iVar23 = -iVar18;
  uVar14 = iVar23 + 0x38;
  uVar32 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0xdc) == 0) {
    pcVar12 = *(char **)(param_1 + 0x1c);
    iVar25 = param_1 + 0x2c;
    iVar36 = iVar17;
    iVar7 = iVar16;
    iVar31 = iVar30;
    if ((uint)((int)pcVar34 - (int)pcVar12) < 0x181) {
      local_174 = iVar18 - 0x18;
      local_170 = 0x18 - iVar18;
    }
    else {
      pcVar11 = pcVar12 + 0x60;
      if (pcVar12 < pcVar11) {
        local_174 = 0x20 - uVar14;
        local_170 = iVar23 + 0x18;
        uVar35 = uVar27;
        uVar20 = uVar32;
        while( true ) {
          uVar33 = *(uint *)(iVar25 + ((uint)pcVar12 & 7) * 4);
          lVar3 = (ulonglong)*(uint *)(pcVar12 + iVar30 + 8) * 0xbb000000;
          uVar20 = *(int *)(pcVar12 + iVar30 + 0xc) * -0x45000000 +
                   *(uint *)(pcVar12 + iVar30 + 8) * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
                   uVar20;
          uVar19 = uVar33 >> 8;
          uVar20 = ((uint)lVar3 ^ uVar35) >> (uVar14 & 0xff) | uVar20 << (local_174 & 0xff) |
                   uVar20 >> (local_170 & 0xff);
          uVar35 = uVar20 >> 8;
          HintPreloadData(iVar16 + uVar35 * 0x40);
          HintPreloadData(iVar17 + uVar35 * 0x10);
          *(uint *)(iVar25 + ((uint)pcVar12 & 7) * 4) = uVar20;
          uVar35 = *(byte *)(iVar17 + uVar19 * 0x10) - 1 & 0xf;
          if (uVar35 == 0) {
            uVar35 = 0xf;
          }
          *(char *)(iVar17 + uVar19 * 0x10) = (char)uVar35;
          *(char *)(iVar17 + uVar19 * 0x10 + uVar35) = (char)uVar33;
          *(char **)(iVar16 + (uVar19 * 0x10 + uVar35) * 4) = pcVar12;
          pcVar12 = pcVar12 + 1;
          if (pcVar11 == pcVar12) break;
          uVar35 = *(uint *)(param_1 + 0x50);
          uVar20 = *(uint *)(param_1 + 0x54);
        }
        iVar18 = *(int *)(param_1 + 0x24);
        iVar36 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 0x5c);
        iVar31 = *(int *)(param_1 + 4);
      }
      else {
        local_174 = iVar18 - 0x18;
        local_170 = 0x18 - iVar18;
      }
      pcVar12 = pcVar34 + -0x20;
      if (pcVar12 + iVar30 <= (char *)((int)param_2 + 1)) {
        pcVar11 = (char *)((int)param_2 + 1) + (1 - (int)(pcVar12 + iVar30));
        if (pcVar11 < (char *)0x9) {
          pcVar11 = pcVar12 + (int)pcVar11;
        }
        else {
          pcVar11 = pcVar34 + -0x18;
        }
        if (pcVar12 < pcVar11) {
          uVar35 = *(uint *)(param_1 + 0x50);
          uVar20 = *(uint *)(param_1 + 0x54);
          pcVar22 = pcVar12;
          do {
            uVar33 = (uint)pcVar22 & 7;
            piVar1 = (int *)(pcVar22 + iVar30 + 4);
            puVar8 = (uint *)(pcVar22 + iVar30);
            pcVar22 = pcVar22 + 1;
            lVar3 = (ulonglong)*puVar8 * 0xbb000000;
            uVar19 = *piVar1 * -0x45000000 + *puVar8 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20)
                     ^ uVar20;
            uVar40 = ((uint)lVar3 ^ uVar35) >> (0x38U - iVar18 & 0xff) |
                     uVar19 << (iVar18 - 0x18U & 0xff) | uVar19 >> (0x18U - iVar18 & 0xff);
            uVar19 = uVar40 >> 8;
            HintPreloadData(iVar7 + uVar19 * 0x40);
            HintPreloadData(iVar36 + uVar19 * 0x10);
            *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar40;
          } while (pcVar22 < pcVar11);
        }
      }
    }
    if (pcVar12 < pcVar34) {
      do {
        uVar33 = *(uint *)(iVar25 + ((uint)pcVar12 & 7) * 4);
        lVar3 = (ulonglong)*(uint *)(pcVar12 + iVar31 + 8) * 0xbb000000;
        uVar35 = *(int *)(pcVar12 + iVar31 + 0xc) * -0x45000000 +
                 *(uint *)(pcVar12 + iVar31 + 8) * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar19 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar18 & 0xff) |
                 uVar35 << (iVar18 - 0x18U & 0xff) | uVar35 >> (0x18U - iVar18 & 0xff);
        uVar35 = uVar33 >> 8;
        uVar20 = uVar19 >> 8;
        HintPreloadData(iVar7 + uVar20 * 0x40);
        HintPreloadData(iVar36 + uVar20 * 0x10);
        *(uint *)(iVar25 + ((uint)pcVar12 & 7) * 4) = uVar19;
        uVar20 = *(byte *)(iVar36 + uVar35 * 0x10) - 1 & 0xf;
        if (uVar20 == 0) {
          uVar20 = 0xf;
        }
        *(char *)(iVar36 + uVar35 * 0x10) = (char)uVar20;
        *(char *)(iVar36 + uVar35 * 0x10 + uVar20) = (char)uVar33;
        *(char **)(iVar7 + (uVar20 + uVar35 * 0x10) * 4) = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (pcVar34 != pcVar12);
    }
    *(char **)(param_1 + 0x1c) = pcVar34;
    lVar3 = (ulonglong)param_2[2] * 0xbb000000;
    uVar32 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar32;
    uVar27 = ((uint)lVar3 ^ uVar27) >> (uVar14 & 0xff) | uVar32 << (local_174 & 0xff) |
             uVar32 >> (local_170 & 0xff);
    uVar32 = uVar27 >> 8;
    uVar14 = *(uint *)(iVar25 + ((uint)pcVar34 & 7) * 4);
    HintPreloadData(iVar16 + uVar32 * 0x40);
    HintPreloadData(iVar17 + uVar32 * 0x10);
    *(uint *)(iVar25 + ((uint)pcVar34 & 7) * 4) = uVar27;
  }
  else {
    uVar35 = *param_2;
    uVar20 = param_2[1];
    *(char **)(param_1 + 0x1c) = pcVar34;
    lVar3 = (ulonglong)uVar35 * 0xbb000000;
    uVar32 = uVar20 * -0x45000000 + uVar35 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar32;
    uVar14 = ((uint)lVar3 ^ uVar27) >> (uVar14 & 0xff) | uVar32 << (0x20 - uVar14 & 0xff) |
             uVar32 >> (iVar23 + 0x18U & 0xff);
  }
  uVar32 = uVar14 >> 8;
  iVar16 = iVar16 + uVar32 * 0x40;
  iVar18 = iVar17 + uVar32 * 0x10;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar14;
  uVar35 = (uVar14 & 0xff) * 0x1010101;
  uVar27 = *(uint *)(iVar18 + 0xc) ^ uVar35;
  uVar19 = *(uint *)(iVar18 + 8) ^ uVar35;
  uVar20 = *(uint *)(iVar18 + 4) ^ uVar35;
  uVar35 = *(uint *)(iVar17 + uVar32 * 0x10) ^ uVar35;
  uVar33 = (uint)*(byte *)(iVar17 + uVar32 * 0x10);
  uVar40 = uVar33 & 0xf;
  pcVar12 = (char *)(-uVar40 & 0xf);
  uVar27 = (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar27 = (~uVar27 << (int)pcVar12 | (uVar27 ^ 0xffff) >> uVar40) & 0xffff;
  if (uVar27 == 0) {
    iVar23 = 0;
  }
  else {
    if (3 < uVar13) {
      uVar13 = 4;
    }
    iVar36 = 1 << (uVar13 & 0xff);
    iVar23 = 0;
    do {
      if (uVar27 == 0) {
        iVar7 = 0;
      }
      else {
        bVar4 = (byte)uVar27;
        bVar2 = (byte)(uVar27 >> 8);
        iVar7 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                         << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                      bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                              bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar13 = iVar7 + uVar40 & 0xf;
      if (uVar13 == 0) {
        bVar41 = true;
        iVar7 = iVar23;
      }
      else {
        pcVar12 = *(char **)(iVar16 + uVar13 * 4);
        if (pcVar12 < pcVar10) break;
        if (pcVar12 < pcVar39) {
          iVar7 = iVar38;
        }
        else {
          iVar7 = iVar30;
        }
        HintPreloadData(pcVar12 + iVar7);
        iVar7 = iVar23 + 1;
        local_12c[iVar23] = (uint)pcVar12;
        bVar41 = iVar36 != 1;
        iVar36 = iVar36 + -1;
      }
      uVar27 = uVar27 & uVar27 - 1;
      if (uVar27 == 0) {
        bVar41 = false;
      }
      pcVar12 = (char *)0x0;
      iVar23 = iVar7;
    } while (bVar41);
  }
  uVar13 = uVar33 - 1 & 0xf;
  if (uVar13 == 0) {
    uVar13 = 0xf;
  }
  *(char *)(iVar17 + uVar32 * 0x10) = (char)uVar13;
  *(char *)(iVar18 + uVar13) = (char)uVar14;
  iVar17 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar17 + 1;
  *(int *)(iVar16 + uVar13 * 4) = iVar17;
  if (iVar23 == 0) {
    pcVar10 = (char *)0x3;
  }
  else {
    puVar26 = &uStack_130;
    iVar16 = 0;
    puVar21 = (uint *)(pcVar39 + iVar30);
    puVar15 = (uint *)((int)param_3 + -3);
    puVar8 = param_2 + 1;
    pcVar11 = (char *)0x3;
    do {
      puVar26 = puVar26 + 1;
      pcVar22 = (char *)*puVar26;
      if (pcVar22 < pcVar39) {
        pcVar12 = (char *)*param_2;
        if (*(char **)(pcVar22 + iVar38) != (char *)*param_2) goto LAB_017d46f8;
        puVar24 = (uint *)(pcVar22 + iVar38 + 4);
        puVar9 = (uint *)((int)puVar8 + ((int)(pcVar39 + iVar38) - (int)puVar24));
        if (param_3 < puVar9) {
          puVar9 = param_3;
        }
        puVar29 = (uint *)((int)puVar9 + -3);
        if (puVar8 < puVar29) {
          if (*(uint *)(pcVar22 + iVar38 + 4) == param_2[1]) {
            puVar28 = param_2 + 2;
            puVar37 = (uint *)(pcVar22 + iVar38 + 8);
            if (puVar28 < puVar29) {
              do {
                if (*puVar37 != *puVar28) {
                  uVar13 = *puVar37 ^ *puVar28;
                  bVar4 = (byte)uVar13;
                  bVar5 = (byte)(uVar13 >> 8);
                  bVar6 = (byte)(uVar13 >> 0x10);
                  bVar2 = (byte)(uVar13 >> 0x18);
                  pcVar10 = (char *)((int)puVar28 +
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
                  goto joined_r0x017d48a4;
                }
                puVar28 = puVar28 + 1;
                puVar37 = puVar37 + 1;
              } while (puVar28 < puVar29);
            }
            goto LAB_017d4828;
          }
          uVar13 = param_2[1] ^ *(uint *)(pcVar22 + iVar38 + 4);
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
          puVar28 = puVar8;
          puVar37 = puVar24;
LAB_017d4828:
          if (puVar28 < (uint *)((int)puVar9 + -1)) {
            if ((short)*puVar37 == (short)*puVar28) {
              puVar28 = (uint *)((int)puVar28 + 2);
              puVar37 = (uint *)((int)puVar37 + 2);
            }
          }
          if ((puVar28 < puVar9) && ((char)*puVar37 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar10 = (char *)((int)puVar28 - (int)puVar8);
        }
joined_r0x017d48a4:
        if (pcVar39 + iVar38 == (char *)((int)puVar24 + (int)pcVar10)) {
          puVar9 = (uint *)((int)puVar8 + (int)pcVar10);
          if (puVar9 < puVar15) {
            if (*puVar21 == *(uint *)((int)puVar8 + (int)pcVar10)) {
              puVar24 = puVar9 + 1;
              local_148 = puVar21 + 1;
              if (puVar24 < puVar15) {
                do {
                  if (*local_148 != *puVar24) {
                    uVar13 = *local_148 ^ *puVar24;
                    bVar4 = (byte)uVar13;
                    bVar5 = (byte)(uVar13 >> 8);
                    bVar6 = (byte)(uVar13 >> 0x10);
                    bVar2 = (byte)(uVar13 >> 0x18);
                    pcVar12 = (char *)((int)puVar24 +
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
                    goto LAB_017d4a6c;
                  }
                  puVar24 = puVar24 + 1;
                  local_148 = local_148 + 1;
                } while (puVar24 < puVar15);
              }
              goto LAB_017d4a10;
            }
            uVar13 = *(uint *)((int)puVar8 + (int)pcVar10) ^ *puVar21;
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
            puVar24 = puVar9;
            local_148 = puVar21;
LAB_017d4a10:
            if (puVar24 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar24) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar24 = (uint *)((int)puVar24 + 2);
              }
            }
            if ((puVar24 < param_3) && ((char)*local_148 == (char)*puVar24)) {
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            pcVar12 = (char *)((int)puVar24 - (int)puVar9);
          }
LAB_017d4a6c:
          pcVar10 = pcVar10 + (int)pcVar12;
        }
        pcVar10 = pcVar10 + 4;
LAB_017d4788:
        pcVar12 = pcVar10;
        if (pcVar11 < pcVar10) {
          *param_4 = pcVar34 + (3 - (int)pcVar22);
          pcVar11 = pcVar10;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar10)) break;
        }
      }
      else {
        puVar9 = (uint *)(pcVar22 + iVar30);
        pcVar12 = *(char **)((int)puVar9 + (int)(pcVar11 + -3));
        if (pcVar12 == *(char **)((int)param_2 + (int)(pcVar11 + -3))) {
          puVar24 = param_2;
          if (param_2 < puVar15) {
            if (*(uint *)(pcVar22 + iVar30) == *param_2) {
              do {
                puVar24 = puVar24 + 1;
                puVar9 = puVar9 + 1;
                if (puVar15 <= puVar24) goto LAB_017d4928;
              } while (*puVar9 == *puVar24);
              uVar13 = *puVar9 ^ *puVar24;
              bVar4 = (byte)uVar13;
              bVar5 = (byte)(uVar13 >> 8);
              bVar6 = (byte)(uVar13 >> 0x10);
              bVar2 = (byte)(uVar13 >> 0x18);
              pcVar10 = (char *)((int)puVar24 +
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
              uVar13 = *(uint *)(pcVar22 + iVar30) ^ *param_2;
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
LAB_017d4928:
            if (puVar24 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar9 == (short)*puVar24) {
                puVar24 = (uint *)((int)puVar24 + 2);
                puVar9 = (uint *)((int)puVar9 + 2);
              }
            }
            if ((puVar24 < param_3) && ((char)*puVar9 == (char)*puVar24)) {
              puVar24 = (uint *)((int)puVar24 + 1);
            }
            pcVar10 = (char *)((int)puVar24 - (int)param_2);
          }
          goto LAB_017d4788;
        }
      }
LAB_017d46f8:
      pcVar10 = pcVar11;
      iVar16 = iVar16 + 1;
      pcVar11 = pcVar10;
    } while (iVar16 != iVar23);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar10,pcVar12,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

