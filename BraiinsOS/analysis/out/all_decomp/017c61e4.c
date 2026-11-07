// FUN_017c61e4 @ 017c61e4 size=2896 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c61e4(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  char *pcVar40;
  uint *puVar41;
  bool bVar42;
  bool bVar43;
  uint local_170;
  uint local_16c;
  uint local_140;
  uint local_13c;
  undefined4 uStack_130;
  uint local_12c [64];
  uint local_2c;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  iVar26 = *(int *)(param_1 + 0x24);
  uVar24 = *(uint *)(param_1 + 0x50);
  local_2c = DAT_018ddaf8;
  iVar13 = *(int *)(param_1 + 0x5c);
  iVar14 = *(int *)(param_1 + 0x28);
  uVar8 = *(uint *)(param_1 + 4);
  uVar36 = (int)param_2 - uVar8;
  uVar16 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar42 = uVar16 < uVar36 - uVar11;
  uVar15 = uVar8;
  if (bVar42) {
    uVar15 = uVar36 - uVar16;
  }
  if (!bVar42) {
    uVar15 = uVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar15 = uVar11;
  }
  uVar11 = *(uint *)(param_1 + 0xc4);
  uVar16 = *(uint *)(param_1 + 0x54);
  iVar39 = -iVar26;
  uVar17 = iVar39 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar12 = *(uint *)(param_1 + 0x1c);
    iVar28 = param_1 + 0x2c;
    iVar9 = iVar14;
    iVar22 = iVar13;
    local_13c = uVar8;
    if (uVar36 - uVar12 < 0x181) {
      local_170 = iVar26 - 0x18;
      local_16c = 0x18 - iVar26;
    }
    else {
      uVar37 = uVar12 + 0x60;
      if (uVar12 < uVar37) {
        local_170 = 0x20 - uVar17;
        local_16c = iVar39 + 0x18;
        uVar18 = uVar16;
        uVar19 = uVar24;
        while( true ) {
          uVar27 = *(uint *)(iVar28 + (uVar12 & 7) * 4);
          uVar25 = *(uint *)(uVar12 + uVar8 + 8);
          lVar4 = (ulonglong)uVar25 * 0xbf9b0000;
          uVar18 = *(int *)(uVar12 + uVar8 + 0xc) * -0x40650000 + uVar25 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar18;
          uVar25 = uVar27 >> 8;
          uVar19 = ((uint)lVar4 ^ uVar19) >> (uVar17 & 0xff) | uVar18 << (local_170 & 0xff) |
                   uVar18 >> (local_16c & 0xff);
          uVar18 = uVar19 >> 8;
          iVar26 = uVar18 * 0x40;
          iVar39 = uVar18 * 0x100;
          HintPreloadData(iVar14 + iVar26);
          HintPreloadData(iVar13 + iVar39);
          HintPreloadData(iVar14 + iVar26 + 0x20);
          HintPreloadData(iVar13 + iVar39 + 0x40);
          *(uint *)(iVar28 + (uVar12 & 7) * 4) = uVar19;
          uVar18 = *(byte *)(iVar14 + uVar25 * 0x40) - 1 & 0x3f;
          if (uVar18 == 0) {
            uVar18 = 0x3f;
          }
          *(char *)(iVar14 + uVar25 * 0x40) = (char)uVar18;
          *(char *)(iVar14 + uVar25 * 0x40 + uVar18) = (char)uVar27;
          *(uint *)(iVar13 + (uVar25 * 0x40 + uVar18) * 4) = uVar12;
          uVar12 = uVar12 + 1;
          if (uVar37 == uVar12) break;
          uVar19 = *(uint *)(param_1 + 0x50);
          uVar18 = *(uint *)(param_1 + 0x54);
        }
        iVar26 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0x28);
        iVar22 = *(int *)(param_1 + 0x5c);
        local_13c = *(uint *)(param_1 + 4);
      }
      else {
        local_170 = iVar26 - 0x18;
        local_16c = 0x18 - iVar26;
      }
      uVar12 = uVar36 + -0x20;
      if ((char *)(uVar12 + uVar8) <= (char *)((int)param_2 + 1)) {
        pcVar40 = (char *)((int)param_2 + 1) + (1 - (int)(uVar12 + uVar8));
        if (pcVar40 < (char *)0x9) {
          uVar37 = uVar12 + (int)pcVar40;
        }
        else {
          uVar37 = uVar36 + -0x18;
        }
        if (uVar12 < uVar37) {
          uVar19 = *(uint *)(param_1 + 0x50);
          uVar25 = *(uint *)(param_1 + 0x54);
          uVar18 = uVar12;
          do {
            uVar38 = uVar18 & 7;
            piVar2 = (int *)(uVar18 + uVar8 + 4);
            puVar20 = (uint *)(uVar18 + uVar8);
            uVar18 = uVar18 + 1;
            lVar4 = (ulonglong)*puVar20 * 0xbf9b0000;
            uVar27 = *piVar2 * -0x40650000 + *puVar20 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar25;
            uVar29 = ((uint)lVar4 ^ uVar19) >> (0x38U - iVar26 & 0xff) |
                     uVar27 << (iVar26 - 0x18U & 0xff) | uVar27 >> (0x18U - iVar26 & 0xff);
            uVar27 = uVar29 >> 8;
            iVar39 = uVar27 * 0x40;
            iVar1 = uVar27 * 0x100;
            HintPreloadData(iVar9 + iVar39);
            HintPreloadData(iVar22 + iVar1);
            HintPreloadData(iVar9 + iVar39 + 0x20);
            HintPreloadData(iVar22 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar38 * 4 + 0x2c) = uVar29;
          } while (uVar18 < uVar37);
        }
      }
    }
    if (uVar12 < uVar36) {
      do {
        uVar25 = *(uint *)(iVar28 + (uVar12 & 7) * 4);
        uVar18 = *(uint *)(uVar12 + local_13c + 8);
        lVar4 = (ulonglong)uVar18 * 0xbf9b0000;
        uVar37 = uVar25 >> 8;
        uVar18 = *(int *)(uVar12 + local_13c + 0xc) * -0x40650000 + uVar18 * -0x30e44324 +
                 (int)((ulonglong)lVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar19 = ((uint)lVar4 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar26 & 0xff) |
                 uVar18 << (iVar26 - 0x18U & 0xff) | uVar18 >> (0x18U - iVar26 & 0xff);
        uVar18 = uVar19 >> 8;
        iVar39 = uVar18 * 0x40;
        iVar1 = uVar18 * 0x100;
        HintPreloadData(iVar9 + iVar39);
        HintPreloadData(iVar22 + iVar1);
        HintPreloadData(iVar9 + iVar39 + 0x20);
        HintPreloadData(iVar22 + iVar1 + 0x40);
        *(uint *)(iVar28 + (uVar12 & 7) * 4) = uVar19;
        uVar18 = *(byte *)(iVar9 + uVar37 * 0x40) - 1 & 0x3f;
        if (uVar18 == 0) {
          uVar18 = 0x3f;
        }
        *(char *)(iVar9 + uVar37 * 0x40) = (char)uVar18;
        *(char *)(iVar9 + uVar37 * 0x40 + uVar18) = (char)uVar25;
        *(uint *)(iVar22 + (uVar18 + uVar37 * 0x40) * 4) = uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar36 != uVar12);
    }
    uVar12 = param_2[2];
    uVar37 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar36;
    lVar4 = (ulonglong)uVar12 * 0xbf9b0000;
    uVar16 = uVar16 ^ uVar37 * -0x40650000 + uVar12 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20);
    uVar24 = ((uint)lVar4 ^ uVar24) >> (uVar17 & 0xff) | uVar16 << (local_170 & 0xff) |
             uVar16 >> (local_16c & 0xff);
    uVar16 = uVar24 >> 8;
    local_140 = *(uint *)(iVar28 + (uVar36 & 7) * 4);
    iVar26 = uVar16 * 0x40;
    iVar39 = uVar16 * 0x100;
    HintPreloadData(iVar14 + iVar26);
    HintPreloadData(iVar14 + iVar26 + 0x20);
    HintPreloadData(iVar13 + iVar39);
    HintPreloadData(iVar13 + iVar39 + 0x40);
    *(uint *)(iVar28 + (uVar36 & 7) * 4) = uVar24;
  }
  else {
    uVar12 = *param_2;
    uVar37 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar36;
    lVar4 = (ulonglong)uVar12 * 0xbf9b0000;
    uVar16 = uVar37 * -0x40650000 + uVar12 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar16;
    local_140 = ((uint)lVar4 ^ uVar24) >> (uVar17 & 0xff) | uVar16 << (0x20 - uVar17 & 0xff) |
                uVar16 >> (iVar39 + 0x18U & 0xff);
  }
  uVar16 = local_140 >> 8;
  puVar20 = (uint *)(iVar13 + uVar16 * 0x100);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_140;
  iVar13 = iVar14 + uVar16 * 0x40;
  uVar38 = (local_140 & 0xff) * 0x1010101;
  uVar17 = *(uint *)(iVar13 + 0x3c) ^ uVar38;
  uVar37 = *(uint *)(iVar13 + 0x38) ^ uVar38;
  uVar12 = *(uint *)(iVar13 + 0x34) ^ uVar38;
  uVar29 = *(uint *)(iVar13 + 0x30) ^ uVar38;
  uVar34 = *(uint *)(iVar13 + 0x18) ^ uVar38;
  uVar18 = *(uint *)(iVar13 + 0x2c) ^ uVar38;
  uVar30 = *(uint *)(iVar13 + 0x28) ^ uVar38;
  uVar19 = *(uint *)(iVar13 + 0x24) ^ uVar38;
  uVar31 = *(uint *)(iVar13 + 0x20) ^ uVar38;
  uVar25 = *(uint *)(iVar13 + 0x1c) ^ uVar38;
  uVar32 = *(uint *)(iVar13 + 0x14) ^ uVar38;
  uVar24 = *(uint *)(iVar13 + 0x10) ^ uVar38;
  uVar27 = *(uint *)(iVar13 + 0xc) ^ uVar38;
  uVar35 = *(uint *)(iVar13 + 4) ^ uVar38;
  uVar33 = *(uint *)(iVar13 + 8) ^ uVar38;
  uVar38 = *(uint *)(iVar14 + uVar16 * 0x40) ^ uVar38;
  uVar24 = (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4;
  uVar17 = (((((((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar12 | 0x80808080) + 0xfefefeff | uVar12) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c;
  uVar12 = (uint)*(byte *)(iVar14 + uVar16 * 0x40);
  uVar37 = (((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
           uVar24 << 4;
  if (uVar17 == 0xffffffff && uVar37 == 0xffffffff) {
    iVar26 = 0;
  }
  else {
    uVar18 = uVar12 & 0x3f;
    uVar37 = ~uVar37;
    uVar17 = ~uVar17;
    if (uVar11 < 6) {
      uVar24 = uVar11;
    }
    uVar19 = -uVar18 & 0x3f;
    if (uVar11 >= 6) {
      uVar24 = 6;
    }
    uVar25 = uVar37 >> uVar18 | uVar17 << (0x20 - uVar18 & 0xff) | uVar17 >> (uVar18 - 0x20 & 0xff)
             | uVar37 << uVar19;
    uVar11 = uVar17 << uVar19 | uVar37 << (uVar19 - 0x20 & 0xff) | uVar37 >> (0x20 - uVar19 & 0xff)
             | uVar17 >> uVar18;
    iVar39 = 1 << (uVar24 & 0xff);
    iVar26 = 0;
    do {
      if (uVar25 == 0) {
        bVar5 = (byte)uVar11;
        bVar6 = (byte)(uVar11 >> 8);
        bVar7 = (byte)(uVar11 >> 0x10);
        bVar3 = (byte)(uVar11 >> 0x18);
        iVar9 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                              bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1)
                                         << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                      bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                        | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                           bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                         bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                       bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar5 = (byte)uVar25;
        bVar6 = (byte)(uVar25 >> 8);
        bVar7 = (byte)(uVar25 >> 0x10);
        bVar3 = (byte)(uVar25 >> 0x18);
        iVar9 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                              bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1)
                                         << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                      bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                        | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                           bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                         bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                       bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar24 = uVar18 + iVar9 & 0x3f;
      if (uVar24 == 0) {
        bVar42 = true;
        iVar9 = iVar26;
      }
      else {
        uVar24 = puVar20[uVar24];
        if (uVar24 < uVar15) break;
        HintPreloadData(uVar8 + uVar24);
        iVar9 = iVar26 + 1;
        local_12c[iVar26] = uVar24;
        bVar42 = iVar39 != 1;
        iVar39 = iVar39 + -1;
      }
      bVar43 = uVar25 == 0;
      uVar25 = uVar25 & uVar25 - 1;
      uVar11 = uVar11 & uVar11 - bVar43;
      if (uVar25 == 0 && uVar11 == 0) {
        bVar42 = false;
      }
      iVar26 = iVar9;
    } while (bVar42);
  }
  uVar15 = uVar12 - 1 & 0x3f;
  if (uVar15 == 0) {
    uVar15 = 0x3f;
  }
  *(char *)(iVar14 + uVar16 * 0x40) = (char)uVar15;
  *(char *)(iVar13 + uVar15) = (char)local_140;
  uVar16 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar16 + 1;
  puVar20[uVar15] = uVar16;
  if (iVar26 == 0) {
    pcVar40 = (char *)0x3;
  }
  else {
    puVar23 = &uStack_130;
    iVar13 = 0;
    pcVar10 = (char *)0x3;
    do {
      puVar23 = puVar23 + 1;
      puVar20 = (uint *)*puVar23;
      puVar21 = (uint *)(uVar8 + (int)puVar20);
      if (*(int *)((int)puVar21 + (int)(pcVar10 + -3)) ==
          *(int *)((int)param_2 + (int)(pcVar10 + -3))) {
        puVar41 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(uVar8 + (int)puVar20) == *param_2) {
            do {
              puVar41 = puVar41 + 1;
              puVar21 = puVar21 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar41) {
                if (((uint *)((int)param_3 + -1) <= puVar41) || ((short)*puVar21 != (short)*puVar41)
                   ) goto LAB_017c6aa8;
                goto LAB_017c6aa0;
              }
            } while (*puVar21 == *puVar41);
            uVar16 = *puVar21 ^ *puVar41;
            bVar5 = (byte)uVar16;
            bVar6 = (byte)(uVar16 >> 8);
            bVar7 = (byte)(uVar16 >> 0x10);
            bVar3 = (byte)(uVar16 >> 0x18);
            pcVar40 = (char *)((int)puVar41 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)param_2));
          }
          else {
            uVar16 = *(uint *)(uVar8 + (int)puVar20) ^ *param_2;
            bVar5 = (byte)uVar16;
            bVar6 = (byte)(uVar16 >> 8);
            bVar7 = (byte)(uVar16 >> 0x10);
            bVar3 = (byte)(uVar16 >> 0x18);
            pcVar40 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                               << 1 | bVar5 >> 2 & 1) << 1 |
                                                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                            << 1 | bVar5 >> 5 & 1) << 1 |
                                                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x18
                                             | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1)
                                                                 << 1 | bVar6 >> 2 & 1) << 1 |
                                                               bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1
                                                              ) << 1 | bVar6 >> 5 & 1) << 1 |
                                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                               0x10 | (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if ((short)*param_2 == *(short *)(uVar8 + (int)puVar20)) {
LAB_017c6aa0:
              puVar41 = (uint *)((int)puVar41 + 2);
              puVar21 = (uint *)((int)puVar21 + 2);
LAB_017c6aa8:
              if (puVar41 < param_3) goto LAB_017c6974;
            }
            else {
              if (param_3 <= param_2) goto LAB_017c691c;
LAB_017c6974:
              if ((char)*puVar21 == (char)*puVar41) goto LAB_017c6a64;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(uVar8 + (int)puVar20)))
            goto LAB_017c691c;
LAB_017c6a64:
            puVar41 = (uint *)((int)puVar41 + 1);
          }
          pcVar40 = (char *)((int)puVar41 - (int)param_2);
        }
        if (pcVar10 < pcVar40) {
          *param_4 = uVar36 + (3 - (int)puVar20);
          puVar20 = (uint *)((int)param_2 + (int)pcVar40);
          pcVar10 = pcVar40;
          if (param_3 == puVar20) break;
        }
      }
LAB_017c691c:
      pcVar40 = pcVar10;
      iVar13 = iVar13 + 1;
      pcVar10 = pcVar40;
    } while (iVar13 != iVar26);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar40,puVar20,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

