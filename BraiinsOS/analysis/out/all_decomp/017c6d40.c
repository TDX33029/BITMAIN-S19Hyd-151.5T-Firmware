// FUN_017c6d40 @ 017c6d40 size=2844 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c6d40(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  byte *pbVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint *puVar41;
  bool bVar42;
  bool bVar43;
  uint local_170;
  uint local_16c;
  uint local_138;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar33 = *(int *)(param_1 + 0x5c);
  uVar9 = *(uint *)(param_1 + 0x10);
  iVar25 = *(int *)(param_1 + 0x24);
  local_2c = DAT_018ddaf8;
  iVar14 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 4);
  uVar37 = (int)param_2 - iVar7;
  uVar23 = *(uint *)(param_1 + 0x50);
  uVar15 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar12 = uVar37 - uVar9;
  bVar42 = uVar12 <= uVar15;
  if (!bVar42) {
    uVar12 = uVar37 - uVar15;
  }
  if (bVar42) {
    uVar12 = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar12 = uVar9;
  }
  uVar9 = *(uint *)(param_1 + 0xc4);
  uVar15 = *(uint *)(param_1 + 0x54);
  iVar40 = -iVar25;
  uVar16 = iVar40 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar27 = param_1 + 0x2c;
    iVar13 = iVar14;
    iVar21 = iVar33;
    local_138 = iVar7;
    if (uVar37 - uVar10 < 0x181) {
      local_170 = iVar25 - 0x18;
      local_16c = 0x18 - iVar25;
    }
    else {
      uVar38 = uVar10 + 0x60;
      if (uVar10 < uVar38) {
        local_170 = 0x20 - uVar16;
        local_16c = iVar40 + 0x18;
        uVar17 = uVar15;
        uVar18 = uVar23;
        while( true ) {
          uVar26 = *(uint *)(iVar27 + (uVar10 & 7) * 4);
          uVar24 = *(uint *)(uVar10 + iVar7 + 8);
          lVar3 = (ulonglong)uVar24 * 0xbb000000;
          uVar17 = *(int *)(uVar10 + iVar7 + 0xc) * -0x45000000 + uVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar17;
          uVar24 = uVar26 >> 8;
          uVar18 = ((uint)lVar3 ^ uVar18) >> (uVar16 & 0xff) | uVar17 << (local_170 & 0xff) |
                   uVar17 >> (local_16c & 0xff);
          uVar17 = uVar18 >> 8;
          iVar25 = uVar17 * 0x40;
          iVar40 = uVar17 * 0x100;
          HintPreloadData(iVar14 + iVar25);
          HintPreloadData(iVar33 + iVar40);
          HintPreloadData(iVar14 + iVar25 + 0x20);
          HintPreloadData(iVar33 + iVar40 + 0x40);
          *(uint *)(iVar27 + (uVar10 & 7) * 4) = uVar18;
          uVar17 = *(byte *)(iVar14 + uVar24 * 0x40) - 1 & 0x3f;
          if (uVar17 == 0) {
            uVar17 = 0x3f;
          }
          *(char *)(iVar14 + uVar24 * 0x40) = (char)uVar17;
          *(char *)(iVar14 + uVar24 * 0x40 + uVar17) = (char)uVar26;
          *(uint *)(iVar33 + (uVar24 * 0x40 + uVar17) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar38 == uVar10) break;
          uVar18 = *(uint *)(param_1 + 0x50);
          uVar17 = *(uint *)(param_1 + 0x54);
        }
        iVar25 = *(int *)(param_1 + 0x24);
        iVar13 = *(int *)(param_1 + 0x28);
        iVar21 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_170 = iVar25 - 0x18;
        local_16c = 0x18 - iVar25;
      }
      uVar10 = uVar37 + -0x20;
      if ((byte *)(uVar10 + iVar7) <= (byte *)((int)param_2 + 1)) {
        pbVar20 = (byte *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar7));
        if (pbVar20 < (byte *)0x9) {
          uVar38 = uVar10 + (int)pbVar20;
        }
        else {
          uVar38 = uVar37 + -0x18;
        }
        if (uVar10 < uVar38) {
          uVar18 = *(uint *)(param_1 + 0x50);
          uVar24 = *(uint *)(param_1 + 0x54);
          uVar17 = uVar10;
          do {
            uVar39 = uVar17 & 7;
            piVar22 = (int *)(uVar17 + iVar7 + 4);
            puVar19 = (uint *)(uVar17 + iVar7);
            uVar17 = uVar17 + 1;
            lVar3 = (ulonglong)*puVar19 * 0xbb000000;
            uVar26 = *piVar22 * -0x45000000 + *puVar19 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar24;
            uVar28 = ((uint)lVar3 ^ uVar18) >> (0x38U - iVar25 & 0xff) |
                     uVar26 << (iVar25 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar25 & 0xff);
            uVar26 = uVar28 >> 8;
            iVar40 = uVar26 * 0x40;
            iVar1 = uVar26 * 0x100;
            HintPreloadData(iVar13 + iVar40);
            HintPreloadData(iVar21 + iVar1);
            HintPreloadData(iVar13 + iVar40 + 0x20);
            HintPreloadData(iVar21 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar39 * 4 + 0x2c) = uVar28;
          } while (uVar17 < uVar38);
        }
      }
    }
    if (uVar10 < uVar37) {
      do {
        uVar24 = *(uint *)(iVar27 + (uVar10 & 7) * 4);
        uVar17 = *(uint *)(uVar10 + local_138 + 8);
        lVar3 = (ulonglong)uVar17 * 0xbb000000;
        uVar38 = uVar24 >> 8;
        uVar17 = *(int *)(uVar10 + local_138 + 0xc) * -0x45000000 + uVar17 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar18 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar25 & 0xff) |
                 uVar17 << (iVar25 - 0x18U & 0xff) | uVar17 >> (0x18U - iVar25 & 0xff);
        uVar17 = uVar18 >> 8;
        iVar40 = uVar17 * 0x40;
        iVar1 = uVar17 * 0x100;
        HintPreloadData(iVar13 + iVar40);
        HintPreloadData(iVar21 + iVar1);
        HintPreloadData(iVar13 + iVar40 + 0x20);
        HintPreloadData(iVar21 + iVar1 + 0x40);
        *(uint *)(iVar27 + (uVar10 & 7) * 4) = uVar18;
        uVar17 = *(byte *)(iVar13 + uVar38 * 0x40) - 1 & 0x3f;
        if (uVar17 == 0) {
          uVar17 = 0x3f;
        }
        *(char *)(iVar13 + uVar38 * 0x40) = (char)uVar17;
        *(char *)(iVar13 + uVar38 * 0x40 + uVar17) = (char)uVar24;
        *(uint *)(iVar21 + (uVar17 + uVar38 * 0x40) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar37 != uVar10);
    }
    uVar10 = param_2[2];
    uVar38 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar37;
    lVar3 = (ulonglong)uVar10 * 0xbb000000;
    uVar15 = uVar15 ^ uVar38 * -0x45000000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
    uVar23 = ((uint)lVar3 ^ uVar23) >> (uVar16 & 0xff) | uVar15 << (local_170 & 0xff) |
             uVar15 >> (local_16c & 0xff);
    uVar15 = uVar23 >> 8;
    local_138 = *(uint *)(iVar27 + (uVar37 & 7) * 4);
    iVar25 = uVar15 * 0x40;
    iVar40 = uVar15 * 0x100;
    HintPreloadData(iVar33 + iVar40);
    HintPreloadData(iVar14 + iVar25);
    HintPreloadData(iVar33 + iVar40 + 0x40);
    HintPreloadData(iVar14 + iVar25 + 0x20);
    *(uint *)(iVar27 + (uVar37 & 7) * 4) = uVar23;
  }
  else {
    uVar10 = *param_2;
    uVar38 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar37;
    lVar3 = (ulonglong)uVar10 * 0xbb000000;
    uVar15 = uVar38 * -0x45000000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^ uVar15;
    local_138 = ((uint)lVar3 ^ uVar23) >> (uVar16 & 0xff) | uVar15 << (0x20 - uVar16 & 0xff) |
                uVar15 >> (iVar40 + 0x18U & 0xff);
  }
  uVar15 = local_138 >> 8;
  puVar19 = (uint *)(iVar33 + uVar15 * 0x100);
  iVar25 = iVar14 + uVar15 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar39 = (local_138 & 0xff) * 0x1010101;
  uVar16 = *(uint *)(iVar25 + 0x3c) ^ uVar39;
  uVar38 = *(uint *)(iVar25 + 0x38) ^ uVar39;
  uVar10 = *(uint *)(iVar25 + 0x34) ^ uVar39;
  uVar28 = *(uint *)(iVar25 + 0x30) ^ uVar39;
  uVar34 = *(uint *)(iVar25 + 0x18) ^ uVar39;
  uVar17 = *(uint *)(iVar25 + 0x2c) ^ uVar39;
  uVar29 = *(uint *)(iVar25 + 0x28) ^ uVar39;
  uVar18 = *(uint *)(iVar25 + 0x24) ^ uVar39;
  uVar30 = *(uint *)(iVar25 + 0x20) ^ uVar39;
  uVar24 = *(uint *)(iVar25 + 0x1c) ^ uVar39;
  uVar31 = *(uint *)(iVar25 + 0x14) ^ uVar39;
  uVar23 = *(uint *)(iVar25 + 0x10) ^ uVar39;
  uVar26 = *(uint *)(iVar25 + 0xc) ^ uVar39;
  uVar35 = *(uint *)(iVar25 + 4) ^ uVar39;
  uVar32 = *(uint *)(iVar25 + 8) ^ uVar39;
  uVar39 = *(uint *)(iVar14 + uVar15 * 0x40) ^ uVar39;
  uVar23 = (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar26 | 0x80808080) + 0xfefefeff | uVar26) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4;
  uVar16 = (((((((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c;
  uVar10 = (uint)*(byte *)(iVar14 + uVar15 * 0x40);
  uVar38 = (((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           uVar23 << 4;
  if (uVar16 == 0xffffffff && uVar38 == 0xffffffff) {
    iVar33 = 0;
  }
  else {
    uVar38 = ~uVar38;
    uVar18 = uVar10 & 0x3f;
    uVar16 = ~uVar16;
    uVar17 = -uVar18 & 0x3f;
    if (uVar9 < 6) {
      uVar23 = uVar9;
    }
    uVar24 = uVar38 >> uVar18 | uVar16 << (0x20 - uVar18 & 0xff) | uVar16 >> (uVar18 - 0x20 & 0xff)
             | uVar38 << uVar17;
    if (uVar9 >= 6) {
      uVar23 = 6;
    }
    uVar9 = uVar16 << uVar17 | uVar38 << (uVar17 - 0x20 & 0xff) | uVar38 >> (0x20 - uVar17 & 0xff) |
            uVar16 >> uVar18;
    iVar40 = 1 << (uVar23 & 0xff);
    iVar33 = 0;
    do {
      if (uVar24 == 0) {
        bVar4 = (byte)uVar9;
        bVar5 = (byte)(uVar9 >> 8);
        bVar6 = (byte)(uVar9 >> 0x10);
        bVar2 = (byte)(uVar9 >> 0x18);
        iVar13 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar24;
        bVar5 = (byte)(uVar24 >> 8);
        bVar6 = (byte)(uVar24 >> 0x10);
        bVar2 = (byte)(uVar24 >> 0x18);
        iVar13 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar23 = uVar18 + iVar13 & 0x3f;
      if (uVar23 == 0) {
        bVar42 = true;
        iVar13 = iVar33;
      }
      else {
        uVar23 = puVar19[uVar23];
        if (uVar23 < uVar12) break;
        HintPreloadData(iVar7 + uVar23);
        iVar13 = iVar33 + 1;
        local_12c[iVar33] = uVar23;
        bVar42 = iVar40 != 1;
        iVar40 = iVar40 + -1;
      }
      bVar43 = uVar24 == 0;
      uVar24 = uVar24 & uVar24 - 1;
      uVar9 = uVar9 & uVar9 - bVar43;
      if (uVar24 == 0 && uVar9 == 0) {
        bVar42 = false;
      }
      iVar33 = iVar13;
    } while (bVar42);
  }
  uVar12 = uVar10 - 1 & 0x3f;
  if (uVar12 == 0) {
    uVar12 = 0x3f;
  }
  *(char *)(iVar14 + uVar15 * 0x40) = (char)uVar12;
  *(char *)(iVar25 + uVar12) = (char)local_138;
  uVar15 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar15 + 1;
  puVar19[uVar12] = uVar15;
  if (iVar33 == 0) {
    puVar11 = (uint *)0x3;
  }
  else {
    piVar22 = &iStack_130;
    puVar36 = (uint *)((int)param_3 + -1);
    iVar14 = 0;
    puVar8 = (uint *)0x3;
    do {
      piVar22 = piVar22 + 1;
      iVar25 = *piVar22;
      puVar41 = (uint *)(iVar7 + iVar25);
      puVar19 = *(uint **)((int)puVar41 + (int)((int)puVar8 + -3));
      if (puVar19 != *(uint **)((int)param_2 + (int)puVar8 + -3)) goto LAB_017c7454;
      puVar11 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar7 + iVar25) == *param_2) {
          do {
            puVar11 = puVar11 + 1;
            puVar41 = puVar41 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar11) {
              if ((puVar36 <= puVar11) || ((ushort)*puVar41 != (ushort)*puVar11)) goto LAB_017c75e0;
              goto LAB_017c75d8;
            }
          } while (*puVar41 == *puVar11);
          uVar15 = *puVar41 ^ *puVar11;
          bVar4 = (byte)uVar15;
          bVar5 = (byte)(uVar15 >> 8);
          bVar6 = (byte)(uVar15 >> 0x10);
          bVar2 = (byte)(uVar15 >> 0x18);
          puVar11 = (uint *)((int)puVar11 +
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
                                            (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                              1 | bVar2 >> 2 & 1) << 1 |
                                                            bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                           << 1 | bVar2 >> 5 & 1) << 1 |
                                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3) -
                            (int)param_2));
        }
        else {
          uVar15 = *(uint *)(iVar7 + iVar25) ^ *param_2;
          bVar4 = (byte)uVar15;
          bVar5 = (byte)(uVar15 >> 8);
          bVar6 = (byte)(uVar15 >> 0x10);
          bVar2 = (byte)(uVar15 >> 0x18);
          puVar11 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
LAB_017c74e4:
        puVar19 = puVar11;
        if (puVar8 < puVar11) {
          *param_4 = uVar37 + (3 - iVar25);
          puVar8 = puVar11;
          if (param_3 == (uint *)((int)param_2 + (int)puVar11)) break;
        }
      }
      else {
        if (param_2 < puVar36) {
          if ((uint *)(uint)(ushort)*param_2 == (uint *)(uint)*(ushort *)(iVar7 + iVar25)) {
LAB_017c75d8:
            puVar11 = (uint *)((int)puVar11 + 2);
            puVar41 = (uint *)((int)puVar41 + 2);
LAB_017c75e0:
            if (puVar11 < param_3) goto LAB_017c74ac;
          }
          else {
            puVar19 = (uint *)(uint)*(ushort *)(iVar7 + iVar25);
            if (param_3 <= param_2) goto LAB_017c7454;
LAB_017c74ac:
            if ((byte)*puVar41 == (byte)*puVar11) goto LAB_017c759c;
          }
LAB_017c74bc:
          puVar11 = (uint *)((int)puVar11 - (int)param_2);
          goto LAB_017c74e4;
        }
        puVar19 = puVar36;
        if (param_2 < param_3) {
          puVar19 = (uint *)(uint)*(byte *)(iVar7 + iVar25);
          if ((uint *)(uint)(byte)*param_2 == puVar19) {
LAB_017c759c:
            puVar11 = (uint *)((int)puVar11 + 1);
            goto LAB_017c74bc;
          }
        }
      }
LAB_017c7454:
      puVar11 = puVar8;
      iVar14 = iVar14 + 1;
      puVar8 = puVar11;
    } while (iVar14 != iVar33);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(puVar11,puVar19,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

