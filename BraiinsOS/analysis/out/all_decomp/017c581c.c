// FUN_017c581c @ 017c581c size=2492 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c581c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  char *pcVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  bool bVar40;
  bool bVar41;
  uint local_148;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar28 = *(int *)(param_1 + 4);
  uVar31 = *(uint *)(param_1 + 0x10);
  uVar12 = (int)param_2 - iVar28;
  iVar8 = *(int *)(param_1 + 0x28);
  local_2c = DAT_018ddaf8;
  iVar20 = *(int *)(param_1 + 0x24);
  iVar10 = *(int *)(param_1 + 0x5c);
  uVar9 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar38 = uVar12 - uVar31;
  bVar40 = uVar38 <= uVar9;
  if (!bVar40) {
    uVar38 = uVar12 - uVar9;
  }
  if (bVar40) {
    uVar38 = uVar31;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar38 = uVar31;
  }
  uVar31 = *(uint *)(param_1 + 0x50);
  uVar9 = *(uint *)(param_1 + 0xc4);
  uVar32 = 0x18 - iVar20;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar33 = *(uint *)(param_1 + 0x1c);
    iVar17 = param_1 + 0x2c;
    iVar14 = iVar10;
    iVar19 = iVar28;
    iVar35 = iVar8;
    if (0x180 < uVar12 - uVar33) {
      uVar18 = uVar33 + 0x60;
      if (uVar33 < uVar18) {
        uVar11 = uVar31;
        while( true ) {
          uVar21 = *(uint *)(iVar17 + (uVar33 & 7) * 4);
          uVar15 = (*(int *)(uVar33 + iVar28 + 8) * -0x61c8864f ^ uVar11) >> (uVar32 & 0xff);
          uVar11 = uVar15 >> 8;
          iVar20 = uVar11 * 0x40;
          iVar14 = uVar11 * 0x100;
          HintPreloadData(iVar8 + iVar20);
          HintPreloadData(iVar10 + iVar14);
          HintPreloadData(iVar8 + iVar20 + 0x20);
          uVar11 = uVar21 >> 8;
          HintPreloadData(iVar10 + iVar14 + 0x40);
          *(uint *)(iVar17 + (uVar33 & 7) * 4) = uVar15;
          uVar15 = *(byte *)(iVar8 + uVar11 * 0x40) - 1 & 0x3f;
          if (uVar15 == 0) {
            uVar15 = 0x3f;
          }
          *(char *)(iVar8 + uVar11 * 0x40) = (char)uVar15;
          *(char *)(iVar8 + uVar11 * 0x40 + uVar15) = (char)uVar21;
          *(uint *)(iVar10 + (uVar11 * 0x40 + uVar15) * 4) = uVar33;
          uVar33 = uVar33 + 1;
          if (uVar18 == uVar33) break;
          uVar11 = *(uint *)(param_1 + 0x50);
        }
        iVar20 = *(int *)(param_1 + 0x24);
        iVar14 = *(int *)(param_1 + 0x5c);
        iVar19 = *(int *)(param_1 + 4);
        iVar35 = *(int *)(param_1 + 0x28);
      }
      uVar33 = uVar12 + -0x20;
      if ((char *)(uVar33 + iVar28) <= (char *)((int)param_2 + 1)) {
        pcVar36 = (char *)((int)param_2 + 1) + (1 - (int)(uVar33 + iVar28));
        if (pcVar36 < (char *)0x9) {
          uVar18 = uVar33 + (int)pcVar36;
        }
        else {
          uVar18 = uVar12 + -0x18;
        }
        if (uVar33 < uVar18) {
          uVar15 = *(uint *)(param_1 + 0x50);
          uVar11 = uVar33;
          do {
            piVar16 = (int *)(uVar11 + iVar28);
            uVar39 = uVar11 & 7;
            uVar11 = uVar11 + 1;
            uVar22 = (*piVar16 * -0x61c8864f ^ uVar15) >> (0x18U - iVar20 & 0xff);
            uVar21 = uVar22 >> 8;
            iVar1 = uVar21 * 0x40;
            iVar2 = uVar21 * 0x100;
            HintPreloadData(iVar35 + iVar1);
            HintPreloadData(iVar14 + iVar2);
            HintPreloadData(iVar35 + iVar1 + 0x20);
            HintPreloadData(iVar14 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar39 * 4 + 0x2c) = uVar22;
          } while (uVar11 < uVar18);
        }
      }
    }
    if (uVar33 < uVar12) {
      do {
        uVar15 = *(uint *)(iVar17 + (uVar33 & 7) * 4);
        uVar11 = (*(int *)(uVar33 + iVar19 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar20 & 0xff);
        uVar18 = uVar11 >> 8;
        iVar1 = uVar18 * 0x40;
        iVar2 = uVar18 * 0x100;
        HintPreloadData(iVar14 + iVar2);
        HintPreloadData(iVar35 + iVar1);
        HintPreloadData(iVar14 + iVar2 + 0x40);
        uVar18 = uVar15 >> 8;
        HintPreloadData(iVar35 + iVar1 + 0x20);
        *(uint *)(iVar17 + (uVar33 & 7) * 4) = uVar11;
        uVar11 = *(byte *)(iVar35 + uVar18 * 0x40) - 1 & 0x3f;
        if (uVar11 == 0) {
          uVar11 = 0x3f;
        }
        *(char *)(iVar35 + uVar18 * 0x40) = (char)uVar11;
        *(char *)(iVar35 + uVar18 * 0x40 + uVar11) = (char)uVar15;
        *(uint *)(iVar14 + (uVar11 + uVar18 * 0x40) * 4) = uVar33;
        uVar33 = uVar33 + 1;
      } while (uVar12 != uVar33);
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    uVar32 = (param_2[2] * -0x61c8864f ^ uVar31) >> (uVar32 & 0xff);
    local_148 = *(uint *)(iVar17 + (uVar12 & 7) * 4);
    uVar31 = uVar32 >> 8;
    iVar20 = uVar31 * 0x40;
    iVar14 = uVar31 * 0x100;
    HintPreloadData(iVar8 + iVar20);
    HintPreloadData(iVar10 + iVar14);
    HintPreloadData(iVar8 + iVar20 + 0x20);
    HintPreloadData(iVar10 + iVar14 + 0x40);
    *(uint *)(iVar17 + (uVar12 & 7) * 4) = uVar32;
  }
  else {
    uVar33 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar12;
    local_148 = (uVar33 * -0x61c8864f ^ uVar31) >> (uVar32 & 0xff);
  }
  uVar31 = local_148 >> 8;
  iVar10 = iVar10 + uVar31 * 0x100;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_148;
  iVar20 = iVar8 + uVar31 * 0x40;
  uVar39 = (local_148 & 0xff) * 0x1010101;
  uVar34 = *(uint *)(iVar20 + 0x3c) ^ uVar39;
  uVar18 = *(uint *)(iVar20 + 0x38) ^ uVar39;
  uVar33 = *(uint *)(iVar20 + 0x34) ^ uVar39;
  uVar23 = *(uint *)(iVar20 + 0x30) ^ uVar39;
  uVar29 = *(uint *)(iVar20 + 0x18) ^ uVar39;
  uVar11 = *(uint *)(iVar20 + 0x2c) ^ uVar39;
  uVar24 = *(uint *)(iVar20 + 0x28) ^ uVar39;
  uVar15 = *(uint *)(iVar20 + 0x24) ^ uVar39;
  uVar25 = *(uint *)(iVar20 + 0x20) ^ uVar39;
  uVar21 = *(uint *)(iVar20 + 0x1c) ^ uVar39;
  uVar26 = *(uint *)(iVar20 + 0x14) ^ uVar39;
  uVar32 = *(uint *)(iVar20 + 0x10) ^ uVar39;
  uVar22 = *(uint *)(iVar20 + 0xc) ^ uVar39;
  uVar30 = *(uint *)(iVar20 + 4) ^ uVar39;
  uVar27 = *(uint *)(iVar20 + 8) ^ uVar39;
  uVar39 = *(uint *)(iVar8 + uVar31 * 0x40) ^ uVar39;
  uVar32 = (((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar26 | 0x80808080) + 0xfefefeff | uVar26) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4;
  uVar18 = (((((((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar11 | 0x80808080) + 0xfefefeff | uVar11) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c;
  uVar33 = (uint)*(byte *)(iVar8 + uVar31 * 0x40);
  uVar11 = (((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           uVar32 << 4;
  if (uVar18 == 0xffffffff && uVar11 == 0xffffffff) {
    iVar14 = 0;
  }
  else {
    uVar15 = uVar33 & 0x3f;
    uVar11 = ~uVar11;
    uVar18 = ~uVar18;
    if (uVar9 < 6) {
      uVar32 = uVar9;
    }
    uVar21 = -uVar15 & 0x3f;
    if (uVar9 >= 6) {
      uVar32 = 6;
    }
    uVar22 = uVar11 >> uVar15 | uVar18 << (0x20 - uVar15 & 0xff) | uVar18 >> (uVar15 - 0x20 & 0xff)
             | uVar11 << uVar21;
    uVar9 = uVar18 << uVar21 | uVar11 << (uVar21 - 0x20 & 0xff) | uVar11 >> (0x20 - uVar21 & 0xff) |
            uVar18 >> uVar15;
    iVar19 = 1 << (uVar32 & 0xff);
    iVar14 = 0;
    do {
      if (uVar22 == 0) {
        bVar4 = (byte)uVar9;
        bVar5 = (byte)(uVar9 >> 8);
        bVar6 = (byte)(uVar9 >> 0x10);
        bVar3 = (byte)(uVar9 >> 0x18);
        iVar35 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar22;
        bVar5 = (byte)(uVar22 >> 8);
        bVar6 = (byte)(uVar22 >> 0x10);
        bVar3 = (byte)(uVar22 >> 0x18);
        iVar35 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar32 = uVar15 + iVar35 & 0x3f;
      if (uVar32 == 0) {
        bVar40 = true;
        iVar35 = iVar14;
      }
      else {
        uVar32 = *(uint *)(iVar10 + uVar32 * 4);
        if (uVar32 < uVar38) break;
        HintPreloadData(iVar28 + uVar32);
        iVar35 = iVar14 + 1;
        local_12c[iVar14] = uVar32;
        bVar40 = iVar19 != 1;
        iVar19 = iVar19 + -1;
      }
      bVar41 = uVar22 == 0;
      uVar22 = uVar22 & uVar22 - 1;
      uVar9 = uVar9 & uVar9 - bVar41;
      if (uVar22 == 0 && uVar9 == 0) {
        bVar40 = false;
      }
      iVar14 = iVar35;
    } while (bVar40);
  }
  uVar9 = uVar33 - 1 & 0x3f;
  if (uVar9 == 0) {
    uVar9 = 0x3f;
  }
  *(char *)(iVar8 + uVar31 * 0x40) = (char)uVar9;
  *(char *)(iVar20 + uVar9) = (char)local_148;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar8 + 1;
  *(int *)(iVar10 + uVar9 * 4) = iVar8;
  if (iVar14 == 0) {
    pcVar36 = (char *)0x3;
  }
  else {
    piVar16 = &iStack_130;
    iVar8 = 0;
    pcVar7 = (char *)0x3;
    do {
      piVar16 = piVar16 + 1;
      iVar10 = *piVar16;
      puVar13 = (uint *)(iVar28 + iVar10);
      if (*(int *)((int)puVar13 + (int)(pcVar7 + -3)) == *(int *)((int)param_2 + (int)(pcVar7 + -3))
         ) {
        puVar37 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar28 + iVar10) == *param_2) {
            do {
              puVar37 = puVar37 + 1;
              puVar13 = puVar13 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar37) {
                if (((uint *)((int)param_3 + -1) <= puVar37) || ((short)*puVar13 != (short)*puVar37)
                   ) goto LAB_017c6008;
                goto LAB_017c6000;
              }
            } while (*puVar13 == *puVar37);
            uVar9 = *puVar13 ^ *puVar37;
            bVar4 = (byte)uVar9;
            bVar5 = (byte)(uVar9 >> 8);
            bVar6 = (byte)(uVar9 >> 0x10);
            bVar3 = (byte)(uVar9 >> 0x18);
            pcVar36 = (char *)((int)puVar37 +
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
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)param_2));
          }
          else {
            uVar9 = *(uint *)(iVar28 + iVar10) ^ *param_2;
            bVar4 = (byte)uVar9;
            bVar5 = (byte)(uVar9 >> 8);
            bVar6 = (byte)(uVar9 >> 0x10);
            bVar3 = (byte)(uVar9 >> 0x18);
            pcVar36 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if ((short)*param_2 == *(short *)(iVar28 + iVar10)) {
LAB_017c6000:
              puVar37 = (uint *)((int)puVar37 + 2);
              puVar13 = (uint *)((int)puVar13 + 2);
LAB_017c6008:
              if (puVar37 < param_3) goto LAB_017c5ea4;
            }
            else {
              if (param_3 <= param_2) goto LAB_017c5e4c;
LAB_017c5ea4:
              if ((char)*puVar13 == (char)*puVar37) goto LAB_017c5f5c;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar28 + iVar10)))
            goto LAB_017c5e4c;
LAB_017c5f5c:
            puVar37 = (uint *)((int)puVar37 + 1);
          }
          pcVar36 = (char *)((int)puVar37 - (int)param_2);
        }
        if (pcVar7 < pcVar36) {
          *param_4 = uVar12 + (3 - iVar10);
          pcVar7 = pcVar36;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar36)) break;
        }
      }
LAB_017c5e4c:
      pcVar36 = pcVar7;
      iVar8 = iVar8 + 1;
      pcVar7 = pcVar36;
    } while (iVar8 != iVar14);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar36,param_2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

