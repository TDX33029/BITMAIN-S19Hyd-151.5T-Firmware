// FUN_017d852c @ 017d852c size=1560 calls_out=0 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017d852c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  char *pcVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  bool bVar45;
  uint local_178;
  uint local_174;
  uint *local_148;
  uint uStack_130;
  uint auStack_12c [64];
  uint local_2c;
  
  iVar35 = *(int *)(param_1 + 4);
  iVar30 = *(int *)(param_1 + 0x24);
  uVar39 = (int)param_2 - iVar35;
  local_2c = DAT_018ddaf8;
  iVar16 = *(int *)(param_1 + 0x5c);
  iVar17 = *(int *)(param_1 + 0x28);
  pcVar13 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  pcVar18 = *(char **)(param_1 + 0x10);
  uVar38 = *(uint *)(param_1 + 0x50);
  bVar45 = pcVar13 < (char *)(uVar39 - (int)pcVar18);
  iVar8 = *(int *)(param_1 + 8);
  if (bVar45) {
    pcVar13 = (char *)(uVar39 - (int)pcVar13);
  }
  pcVar9 = *(char **)(param_1 + 0xc);
  if (!bVar45) {
    pcVar13 = pcVar18;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar13 = pcVar18;
  }
  uVar19 = *(uint *)(param_1 + 0xc4);
  uVar20 = *(uint *)(param_1 + 0x54);
  iVar28 = -iVar30;
  uVar21 = iVar28 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar14 = *(uint *)(param_1 + 0x1c);
    iVar27 = param_1 + 0x2c;
    iVar40 = iVar17;
    iVar10 = iVar35;
    iVar42 = iVar16;
    if (uVar39 - uVar14 < 0x181) {
      local_178 = iVar30 - 0x18;
      local_174 = 0x18 - iVar30;
    }
    else {
      uVar22 = uVar14 + 0x60;
      if (uVar14 < uVar22) {
        local_178 = 0x20 - uVar21;
        local_174 = iVar28 + 0x18;
        uVar24 = uVar38;
        uVar23 = uVar20;
        while( true ) {
          uVar36 = *(uint *)(iVar27 + (uVar14 & 7) * 4);
          uVar31 = *(uint *)(uVar14 + iVar35 + 8);
          lVar3 = (ulonglong)uVar31 * 0xbb000000;
          uVar23 = *(int *)(uVar14 + iVar35 + 0xc) * -0x45000000 + uVar31 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar23;
          uVar31 = uVar36 >> 8;
          uVar23 = ((uint)lVar3 ^ uVar24) >> (uVar21 & 0xff) | uVar23 << (local_178 & 0xff) |
                   uVar23 >> (local_174 & 0xff);
          uVar24 = uVar23 >> 8;
          HintPreloadData(iVar17 + uVar24 * 0x20);
          iVar30 = uVar24 * 0x80;
          HintPreloadData(iVar16 + iVar30);
          HintPreloadData(iVar16 + iVar30 + 0x40);
          *(uint *)(iVar27 + (uVar14 & 7) * 4) = uVar23;
          uVar24 = *(byte *)(iVar17 + uVar31 * 0x20) - 1 & 0x1f;
          if (uVar24 == 0) {
            uVar24 = 0x1f;
          }
          *(char *)(iVar17 + uVar31 * 0x20) = (char)uVar24;
          *(char *)(iVar17 + uVar31 * 0x20 + uVar24) = (char)uVar36;
          *(uint *)(iVar16 + (uVar31 * 0x20 + uVar24) * 4) = uVar14;
          uVar14 = uVar14 + 1;
          if (uVar22 == uVar14) break;
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x54);
        }
        iVar30 = *(int *)(param_1 + 0x24);
        iVar40 = *(int *)(param_1 + 0x28);
        iVar10 = *(int *)(param_1 + 4);
        iVar42 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_178 = iVar30 - 0x18;
        local_174 = 0x18 - iVar30;
      }
      uVar14 = uVar39 + -0x20;
      if ((char *)(uVar14 + iVar35) <= (char *)((int)param_2 + 1)) {
        pcVar18 = (char *)((int)param_2 + 1) + (1 - (int)(uVar14 + iVar35));
        if (pcVar18 < (char *)0x9) {
          uVar22 = uVar14 + (int)pcVar18;
        }
        else {
          uVar22 = uVar39 + -0x18;
        }
        if (uVar14 < uVar22) {
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar31 = *(uint *)(param_1 + 0x54);
          uVar24 = uVar14;
          do {
            uVar37 = uVar24 & 7;
            piVar1 = (int *)(uVar24 + iVar35 + 4);
            puVar11 = (uint *)(uVar24 + iVar35);
            uVar24 = uVar24 + 1;
            lVar3 = (ulonglong)*puVar11 * 0xbb000000;
            uVar36 = *piVar1 * -0x45000000 + *puVar11 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar31;
            uVar43 = ((uint)lVar3 ^ uVar23) >> (0x38U - iVar30 & 0xff) |
                     uVar36 << (iVar30 - 0x18U & 0xff) | uVar36 >> (0x18U - iVar30 & 0xff);
            uVar36 = uVar43 >> 8;
            HintPreloadData(iVar40 + uVar36 * 0x20);
            iVar28 = uVar36 * 0x80;
            HintPreloadData(iVar42 + iVar28);
            HintPreloadData(iVar42 + iVar28 + 0x40);
            *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar43;
          } while (uVar24 < uVar22);
        }
      }
    }
    if (uVar14 < uVar39) {
      do {
        uVar22 = *(uint *)(uVar14 + iVar10 + 8);
        uVar31 = *(uint *)(iVar27 + (uVar14 & 7) * 4);
        lVar3 = (ulonglong)uVar22 * 0xbb000000;
        uVar22 = *(int *)(uVar14 + iVar10 + 0xc) * -0x45000000 + uVar22 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar23 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar30 & 0xff) |
                 uVar22 << (iVar30 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar30 & 0xff);
        uVar22 = uVar31 >> 8;
        uVar24 = uVar23 >> 8;
        HintPreloadData(iVar40 + uVar24 * 0x20);
        iVar28 = uVar24 * 0x80;
        HintPreloadData(iVar42 + iVar28);
        HintPreloadData(iVar42 + iVar28 + 0x40);
        *(uint *)(iVar27 + (uVar14 & 7) * 4) = uVar23;
        uVar24 = *(byte *)(iVar40 + uVar22 * 0x20) - 1 & 0x1f;
        if (uVar24 == 0) {
          uVar24 = 0x1f;
        }
        *(char *)(iVar40 + uVar22 * 0x20) = (char)uVar24;
        *(char *)(iVar40 + uVar22 * 0x20 + uVar24) = (char)uVar31;
        *(uint *)(iVar42 + (uVar24 + uVar22 * 0x20) * 4) = uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar39 != uVar14);
    }
    *(uint *)(param_1 + 0x1c) = uVar39;
    lVar3 = (ulonglong)param_2[2] * 0xbb000000;
    uVar20 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar20;
    uVar21 = ((uint)lVar3 ^ uVar38) >> (uVar21 & 0xff) | uVar20 << (local_178 & 0xff) |
             uVar20 >> (local_174 & 0xff);
    uVar20 = uVar21 >> 8;
    uVar38 = *(uint *)(iVar27 + (uVar39 & 7) * 4);
    HintPreloadData(iVar17 + uVar20 * 0x20);
    iVar30 = uVar20 * 0x80;
    HintPreloadData(iVar16 + iVar30);
    HintPreloadData(iVar16 + iVar30 + 0x40);
    *(uint *)(iVar27 + (uVar39 & 7) * 4) = uVar21;
  }
  else {
    uVar14 = *param_2;
    uVar22 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar39;
    lVar3 = (ulonglong)uVar14 * 0xbb000000;
    uVar20 = uVar22 * -0x45000000 + uVar14 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar20;
    uVar38 = ((uint)lVar3 ^ uVar38) >> (uVar21 & 0xff) | uVar20 << (0x20 - uVar21 & 0xff) |
             uVar20 >> (iVar28 + 0x18U & 0xff);
  }
  uVar20 = uVar38 >> 8;
  iVar16 = iVar16 + uVar20 * 0x80;
  iVar30 = iVar17 + uVar20 * 0x20;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar38;
  uVar43 = (uVar38 & 0xff) * 0x1010101;
  uVar14 = *(uint *)(iVar30 + 0x1c) ^ uVar43;
  uVar21 = *(uint *)(iVar30 + 0x18) ^ uVar43;
  uVar22 = *(uint *)(iVar30 + 0x14) ^ uVar43;
  uVar36 = *(uint *)(iVar30 + 0x10) ^ uVar43;
  uVar24 = *(uint *)(iVar30 + 0xc) ^ uVar43;
  uVar37 = *(uint *)(iVar30 + 8) ^ uVar43;
  uVar23 = *(uint *)(iVar30 + 4) ^ uVar43;
  uVar43 = uVar43 ^ *(uint *)(iVar17 + uVar20 * 0x20);
  uVar31 = (uint)*(byte *)(iVar17 + uVar20 * 0x20);
  uVar44 = uVar31 & 0x1f;
  uVar21 = ~((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar21 = uVar21 >> uVar44 | uVar21 << 0x20 - uVar44;
  if (uVar21 == 0) {
    pcVar18 = (char *)0x0;
    iVar28 = 0;
  }
  else {
    if (4 < uVar19) {
      uVar19 = 5;
    }
    iVar40 = 1 << (uVar19 & 0xff);
    iVar28 = 0;
    do {
      if (uVar21 == 0) {
        iVar10 = 0;
      }
      else {
        bVar4 = (byte)uVar21;
        bVar5 = (byte)(uVar21 >> 8);
        bVar6 = (byte)(uVar21 >> 0x10);
        bVar2 = (byte)(uVar21 >> 0x18);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar19 = iVar10 + uVar44 & 0x1f;
      if (uVar19 == 0) {
        bVar45 = true;
        iVar10 = iVar28;
      }
      else {
        pcVar18 = *(char **)(iVar16 + uVar19 * 4);
        if (pcVar18 < pcVar13) break;
        if (pcVar18 < pcVar9) {
          iVar10 = iVar8;
        }
        else {
          iVar10 = iVar35;
        }
        HintPreloadData(pcVar18 + iVar10);
        iVar10 = iVar28 + 1;
        auStack_12c[iVar28] = (uint)pcVar18;
        bVar45 = iVar40 != 1;
        iVar40 = iVar40 + -1;
      }
      uVar21 = uVar21 & uVar21 - 1;
      if (uVar21 == 0) {
        bVar45 = false;
      }
      pcVar18 = (char *)0x0;
      iVar28 = iVar10;
    } while (bVar45);
  }
  uVar19 = uVar31 - 1 & 0x1f;
  if (uVar19 == 0) {
    uVar19 = 0x1f;
  }
  *(char *)(iVar17 + uVar20 * 0x20) = (char)uVar19;
  *(char *)(iVar30 + uVar19) = (char)uVar38;
  iVar17 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar17 + 1;
  *(int *)(iVar16 + uVar19 * 4) = iVar17;
  if (iVar28 == 0) {
    pcVar13 = (char *)0x3;
  }
  else {
    puVar32 = &uStack_130;
    iVar16 = 0;
    puVar25 = (uint *)(pcVar9 + iVar35);
    puVar15 = (uint *)((int)param_3 + -3);
    puVar11 = param_2 + 1;
    pcVar7 = (char *)0x3;
    do {
      puVar32 = puVar32 + 1;
      pcVar26 = (char *)*puVar32;
      if (pcVar26 < pcVar9) {
        pcVar18 = (char *)*param_2;
        if (*(char **)(pcVar26 + iVar8) != (char *)*param_2) goto LAB_017d8abc;
        puVar29 = (uint *)(pcVar26 + iVar8 + 4);
        puVar12 = (uint *)((int)puVar11 + ((int)(pcVar9 + iVar8) - (int)puVar29));
        if (param_3 < puVar12) {
          puVar12 = param_3;
        }
        puVar34 = (uint *)((int)puVar12 + -3);
        if (puVar11 < puVar34) {
          if (*(uint *)(pcVar26 + iVar8 + 4) == param_2[1]) {
            puVar33 = param_2 + 2;
            puVar41 = (uint *)(pcVar26 + iVar8 + 8);
            if (puVar33 < puVar34) {
              do {
                if (*puVar41 != *puVar33) {
                  uVar38 = *puVar41 ^ *puVar33;
                  bVar4 = (byte)uVar38;
                  bVar5 = (byte)(uVar38 >> 8);
                  bVar6 = (byte)(uVar38 >> 0x10);
                  bVar2 = (byte)(uVar38 >> 0x18);
                  pcVar13 = (char *)((int)puVar33 +
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
                                    (int)puVar11));
                  goto joined_r0x017d8c68;
                }
                puVar33 = puVar33 + 1;
                puVar41 = puVar41 + 1;
              } while (puVar33 < puVar34);
            }
            goto LAB_017d8bec;
          }
          uVar38 = param_2[1] ^ *(uint *)(pcVar26 + iVar8 + 4);
          bVar4 = (byte)uVar38;
          bVar5 = (byte)(uVar38 >> 8);
          bVar6 = (byte)(uVar38 >> 0x10);
          bVar2 = (byte)(uVar38 >> 0x18);
          pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar33 = puVar11;
          puVar41 = puVar29;
LAB_017d8bec:
          if (puVar33 < (uint *)((int)puVar12 + -1)) {
            if ((short)*puVar41 == (short)*puVar33) {
              puVar33 = (uint *)((int)puVar33 + 2);
              puVar41 = (uint *)((int)puVar41 + 2);
            }
          }
          if ((puVar33 < puVar12) && ((char)*puVar41 == (char)*puVar33)) {
            puVar33 = (uint *)((int)puVar33 + 1);
          }
          pcVar13 = (char *)((int)puVar33 - (int)puVar11);
        }
joined_r0x017d8c68:
        if (pcVar9 + iVar8 == (char *)((int)puVar29 + (int)pcVar13)) {
          puVar12 = (uint *)((int)puVar11 + (int)pcVar13);
          if (puVar12 < puVar15) {
            if (*puVar25 == *(uint *)((int)puVar11 + (int)pcVar13)) {
              puVar29 = puVar12 + 1;
              local_148 = puVar25 + 1;
              if (puVar29 < puVar15) {
                do {
                  if (*local_148 != *puVar29) {
                    uVar38 = *local_148 ^ *puVar29;
                    bVar4 = (byte)uVar38;
                    bVar5 = (byte)(uVar38 >> 8);
                    bVar6 = (byte)(uVar38 >> 0x10);
                    bVar2 = (byte)(uVar38 >> 0x18);
                    pcVar18 = (char *)((int)puVar29 +
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
                                                                  )) >> 3) - (int)puVar12));
                    goto LAB_017d8e30;
                  }
                  puVar29 = puVar29 + 1;
                  local_148 = local_148 + 1;
                } while (puVar29 < puVar15);
              }
              goto LAB_017d8dd4;
            }
            uVar38 = *(uint *)((int)puVar11 + (int)pcVar13) ^ *puVar25;
            bVar4 = (byte)uVar38;
            bVar5 = (byte)(uVar38 >> 8);
            bVar6 = (byte)(uVar38 >> 0x10);
            bVar2 = (byte)(uVar38 >> 0x18);
            pcVar18 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            puVar29 = puVar12;
            local_148 = puVar25;
LAB_017d8dd4:
            if (puVar29 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar29) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar29 = (uint *)((int)puVar29 + 2);
              }
            }
            if ((puVar29 < param_3) && ((char)*local_148 == (char)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pcVar18 = (char *)((int)puVar29 - (int)puVar12);
          }
LAB_017d8e30:
          pcVar13 = pcVar13 + (int)pcVar18;
        }
        pcVar13 = pcVar13 + 4;
LAB_017d8b4c:
        pcVar18 = pcVar13;
        if (pcVar7 < pcVar13) {
          *param_4 = uVar39 + (3 - (int)pcVar26);
          pcVar7 = pcVar13;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) break;
        }
      }
      else {
        puVar12 = (uint *)(pcVar26 + iVar35);
        pcVar18 = *(char **)((int)puVar12 + (int)(pcVar7 + -3));
        if (pcVar18 == *(char **)((int)param_2 + (int)(pcVar7 + -3))) {
          puVar29 = param_2;
          if (param_2 < puVar15) {
            if (*(uint *)(pcVar26 + iVar35) == *param_2) {
              do {
                puVar29 = puVar29 + 1;
                puVar12 = puVar12 + 1;
                if (puVar15 <= puVar29) goto LAB_017d8cec;
              } while (*puVar12 == *puVar29);
              uVar38 = *puVar12 ^ *puVar29;
              bVar4 = (byte)uVar38;
              bVar5 = (byte)(uVar38 >> 8);
              bVar6 = (byte)(uVar38 >> 0x10);
              bVar2 = (byte)(uVar38 >> 0x18);
              pcVar13 = (char *)((int)puVar29 +
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
              uVar38 = *(uint *)(pcVar26 + iVar35) ^ *param_2;
              bVar4 = (byte)uVar38;
              bVar5 = (byte)(uVar38 >> 8);
              bVar6 = (byte)(uVar38 >> 0x10);
              bVar2 = (byte)(uVar38 >> 0x18);
              pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
LAB_017d8cec:
            if (puVar29 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar12 == (short)*puVar29) {
                puVar29 = (uint *)((int)puVar29 + 2);
                puVar12 = (uint *)((int)puVar12 + 2);
              }
            }
            if ((puVar29 < param_3) && ((char)*puVar12 == (char)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pcVar13 = (char *)((int)puVar29 - (int)param_2);
          }
          goto LAB_017d8b4c;
        }
      }
LAB_017d8abc:
      pcVar13 = pcVar7;
      iVar16 = iVar16 + 1;
      pcVar7 = pcVar13;
    } while (iVar16 != iVar28);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar13,pcVar18,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

