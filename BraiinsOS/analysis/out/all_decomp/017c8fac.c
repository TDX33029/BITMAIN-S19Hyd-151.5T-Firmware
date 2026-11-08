// FUN_017c8fac @ 017c8fac size=3108 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017c8fac(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  int iVar39;
  undefined4 *puVar40;
  uint uVar41;
  bool bVar42;
  uint local_150;
  int local_148;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar35 = *(int *)(param_1 + 4);
  uVar38 = (int)param_2 - iVar35;
  puVar40 = *(undefined4 **)(param_1 + 0xb4);
  uVar12 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar16 = *(int *)(param_1 + 0x5c);
  iVar17 = *(int *)(param_1 + 0x28);
  uVar18 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar42 = uVar18 < uVar38 - uVar12;
  iVar9 = *(int *)(param_1 + 0xc);
  if (bVar42) {
    uVar18 = uVar38 - uVar18;
  }
  if (bVar42) {
    local_13c = (char *)uVar18;
  }
  iVar33 = puVar40[10];
  if (!bVar42) {
    local_13c = (char *)uVar12;
  }
  uVar23 = *param_2 * -0x61c8864f >> (0x18 - puVar40[9] & 0xff);
  iVar30 = *(int *)(param_1 + 0x24);
  uVar18 = uVar23 >> 8;
  iVar19 = puVar40[0x17] + uVar18 * 0x40;
  uVar41 = *(uint *)(param_1 + 0xc4);
  HintPreloadData(iVar19);
  iVar20 = iVar33 + uVar18 * 0x10;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_13c = (char *)uVar12;
  }
  HintPreloadData(iVar20);
  if (3 < uVar41) {
    uVar41 = 4;
  }
  uVar21 = *(uint *)(param_1 + 0x50);
  local_148 = 1 << (uVar41 & 0xff);
  uVar12 = 0x18 - iVar30;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar41 = *(uint *)(param_1 + 0x1c);
    iVar31 = param_1 + 0x2c;
    iVar34 = iVar16;
    iVar13 = iVar35;
    iVar39 = iVar17;
    if (0x180 < uVar38 - uVar41) {
      uVar22 = uVar41 + 0x60;
      uVar27 = uVar21;
      if (uVar41 < uVar22) {
        while( true ) {
          uVar26 = (uVar27 ^ *(int *)(uVar41 + iVar35 + 8) * -0x61c8864f) >> (uVar12 & 0xff);
          uVar36 = *(uint *)(iVar31 + (uVar41 & 7) * 4);
          uVar27 = uVar26 >> 8;
          HintPreloadData(iVar16 + uVar27 * 0x40);
          HintPreloadData(iVar17 + uVar27 * 0x10);
          uVar27 = uVar36 >> 8;
          *(uint *)(iVar31 + (uVar41 & 7) * 4) = uVar26;
          uVar26 = *(byte *)(iVar17 + uVar27 * 0x10) - 1 & 0xf;
          if (uVar26 == 0) {
            uVar26 = 0xf;
          }
          *(char *)(iVar17 + uVar27 * 0x10) = (char)uVar26;
          *(char *)(iVar17 + uVar27 * 0x10 + uVar26) = (char)uVar36;
          *(uint *)(iVar16 + (uVar27 * 0x10 + uVar26) * 4) = uVar41;
          uVar41 = uVar41 + 1;
          if (uVar22 == uVar41) break;
          uVar27 = *(uint *)(param_1 + 0x50);
        }
        iVar30 = *(int *)(param_1 + 0x24);
        iVar34 = *(int *)(param_1 + 0x5c);
        iVar13 = *(int *)(param_1 + 4);
        iVar39 = *(int *)(param_1 + 0x28);
      }
      uVar41 = uVar38 + -0x20;
      if ((char *)(uVar41 + iVar35) <= (char *)((int)param_2 + 1)) {
        pcVar8 = (char *)((int)param_2 + 1) + (1 - (int)(uVar41 + iVar35));
        if (pcVar8 < (char *)0x9) {
          uVar27 = uVar41 + (int)pcVar8;
        }
        else {
          uVar27 = uVar38 + -0x18;
        }
        if (uVar41 < uVar27) {
          uVar26 = *(uint *)(param_1 + 0x50);
          uVar22 = uVar41;
          do {
            piVar28 = (int *)(uVar22 + iVar35);
            uVar15 = uVar22 & 7;
            uVar22 = uVar22 + 1;
            uVar1 = (*piVar28 * -0x61c8864f ^ uVar26) >> (0x18U - iVar30 & 0xff);
            uVar36 = uVar1 >> 8;
            HintPreloadData(iVar34 + uVar36 * 0x40);
            HintPreloadData(iVar39 + uVar36 * 0x10);
            *(uint *)(param_1 + uVar15 * 4 + 0x2c) = uVar1;
          } while (uVar22 < uVar27);
        }
      }
    }
    if (uVar41 < uVar38) {
      do {
        uVar22 = (*(int *)(uVar41 + iVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar30 & 0xff);
        uVar26 = *(uint *)(iVar31 + (uVar41 & 7) * 4);
        uVar27 = uVar22 >> 8;
        HintPreloadData(iVar34 + uVar27 * 0x40);
        HintPreloadData(iVar39 + uVar27 * 0x10);
        *(uint *)(iVar31 + (uVar41 & 7) * 4) = uVar22;
        uVar27 = uVar26 >> 8;
        uVar22 = *(byte *)(iVar39 + uVar27 * 0x10) - 1 & 0xf;
        if (uVar22 == 0) {
          uVar22 = 0xf;
        }
        *(char *)(iVar39 + uVar27 * 0x10) = (char)uVar22;
        *(char *)(iVar39 + uVar27 * 0x10 + uVar22) = (char)uVar26;
        *(uint *)(iVar34 + (uVar22 + uVar27 * 0x10) * 4) = uVar41;
        uVar41 = uVar41 + 1;
      } while (uVar38 != uVar41);
    }
    *(uint *)(param_1 + 0x1c) = uVar38;
    uVar41 = (param_2[2] * -0x61c8864f ^ uVar21) >> (uVar12 & 0xff);
    local_150 = *(uint *)(iVar31 + (uVar38 & 7) * 4);
    uVar12 = uVar41 >> 8;
    HintPreloadData(iVar16 + uVar12 * 0x40);
    HintPreloadData(iVar17 + uVar12 * 0x10);
    *(uint *)(iVar31 + (uVar38 & 7) * 4) = uVar41;
  }
  else {
    local_150 = (*param_2 * -0x61c8864f ^ uVar21) >> (uVar12 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar38;
  }
  uVar12 = local_150 >> 8;
  iVar16 = iVar16 + uVar12 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  iVar30 = iVar17 + uVar12 * 0x10;
  uVar21 = (local_150 & 0xff) * 0x1010101;
  uVar41 = *(uint *)(iVar30 + 0xc) ^ uVar21;
  uVar36 = *(uint *)(iVar30 + 8) ^ uVar21;
  uVar22 = *(uint *)(iVar30 + 4) ^ uVar21;
  uVar21 = *(uint *)(iVar17 + uVar12 * 0x10) ^ uVar21;
  uVar26 = (uint)*(byte *)(iVar17 + uVar12 * 0x10);
  uVar27 = uVar26 & 0xf;
  uVar41 = (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar41 = (~uVar41 << (-uVar27 & 0xf) | (uVar41 ^ 0xffff) >> uVar27) & 0xffff;
  if (uVar41 == 0) {
    bVar42 = true;
    iVar34 = 0;
  }
  else {
    iVar34 = 0;
    do {
      if (uVar41 == 0) {
        iVar13 = 0;
      }
      else {
        bVar3 = (byte)uVar41;
        bVar2 = (byte)(uVar41 >> 8);
        iVar13 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                 bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar21 = iVar13 + uVar27 & 0xf;
      if (uVar21 == 0) {
        bVar42 = true;
        iVar13 = iVar34;
      }
      else {
        uVar21 = *(uint *)(iVar16 + uVar21 * 4);
        if (uVar21 < local_13c) {
          bVar42 = true;
          break;
        }
        HintPreloadData(iVar35 + uVar21);
        iVar13 = iVar34 + 1;
        local_12c[iVar34] = uVar21;
        bVar42 = local_148 != 1;
        local_148 = local_148 + -1;
      }
      uVar41 = uVar41 & uVar41 - 1;
      bVar6 = bVar42;
      if (uVar41 == 0) {
        bVar6 = false;
      }
      iVar34 = iVar13;
    } while (bVar6);
  }
  uVar41 = uVar26 - 1 & 0xf;
  if (uVar41 == 0) {
    uVar41 = 0xf;
  }
  *(char *)(iVar17 + uVar12 * 0x10) = (char)uVar41;
  *(char *)(iVar30 + uVar41) = (char)local_150;
  iVar17 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar17 + 1;
  *(int *)(iVar16 + uVar41 * 4) = iVar17;
  if (iVar34 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar28 = &iStack_130;
    iVar16 = 0;
    pcVar8 = (char *)0x3;
    do {
      while( true ) {
        piVar28 = piVar28 + 1;
        iVar17 = *piVar28;
        puVar7 = (uint *)(iVar35 + iVar17);
        if (*(int *)((int)puVar7 + (int)(pcVar8 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar8 + -3))) break;
LAB_017c93ec:
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar34) goto LAB_017c94b4;
      }
      puVar14 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar35 + iVar17) == *param_2) {
          do {
            puVar14 = puVar14 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar14) {
              if (((uint *)((int)param_3 + -1) <= puVar14) || ((short)*puVar7 != (short)*puVar14))
              goto LAB_017c99f4;
              goto LAB_017c99ec;
            }
          } while (*puVar7 == *puVar14);
          uVar12 = *puVar7 ^ *puVar14;
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar2 = (byte)(uVar12 >> 0x18);
          local_13c = (char *)((int)puVar14 +
                              (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)param_2));
        }
        else {
          uVar12 = *(uint *)(iVar35 + iVar17) ^ *param_2;
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar2 = (byte)(uVar12 >> 0x18);
          local_13c = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
        }
      }
      else {
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if ((short)*param_2 == *(short *)(iVar35 + iVar17)) {
LAB_017c99ec:
            puVar14 = (uint *)((int)puVar14 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
LAB_017c99f4:
            if (puVar14 < param_3) goto LAB_017c9444;
          }
          else {
            if (param_3 <= param_2) goto LAB_017c93ec;
LAB_017c9444:
            if ((char)*puVar7 == (char)*puVar14) goto LAB_017c9674;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar35 + iVar17)))
          goto LAB_017c93ec;
LAB_017c9674:
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        local_13c = (char *)((int)puVar14 - (int)param_2);
      }
      if (local_13c <= pcVar8) goto LAB_017c93ec;
      *param_4 = uVar38 + (3 - iVar17);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017c94bc;
      iVar16 = iVar16 + 1;
      pcVar8 = local_13c;
    } while (iVar16 != iVar34);
LAB_017c94b4:
    local_13c = pcVar8;
  }
LAB_017c94bc:
  uVar23 = (uVar23 & 0xff) * 0x1010101;
  uVar12 = *(uint *)(iVar20 + 0xc) ^ uVar23;
  uVar21 = *(uint *)(iVar20 + 8) ^ uVar23;
  uVar41 = *(uint *)(iVar20 + 4) ^ uVar23;
  uVar23 = *(uint *)(iVar33 + uVar18 * 0x10) ^ uVar23;
  uVar27 = *(byte *)(iVar33 + uVar18 * 0x10) & 0xf;
  uVar18 = (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar12 | 0x80808080) + 0xfefefeff | uVar12) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar18 = (~uVar18 << (-uVar27 & 0xf) | (uVar18 ^ 0xffff) >> uVar27) & 0xffff;
  if (uVar18 == 0) {
    bVar42 = false;
  }
  if (bVar42) {
    puVar7 = (uint *)(iVar35 + iVar9);
    pcVar8 = (char *)*puVar40;
    iVar17 = puVar40[1];
    uVar12 = puVar40[3];
    iVar16 = 0;
    do {
      if (uVar18 == 0) {
        iVar35 = 0;
      }
      else {
        bVar3 = (byte)uVar18;
        bVar2 = (byte)(uVar18 >> 8);
        iVar35 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                 bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar23 = iVar35 + uVar27 & 0xf;
      if (uVar23 == 0) {
        bVar42 = true;
        iVar35 = iVar16;
      }
      else {
        uVar23 = *(uint *)(iVar19 + uVar23 * 4);
        if (uVar23 < uVar12) break;
        HintPreloadData(iVar17 + uVar23);
        iVar35 = iVar16 + 1;
        local_12c[iVar16] = uVar23;
        bVar42 = local_148 != 1;
        local_148 = local_148 + -1;
      }
      uVar18 = uVar18 & uVar18 - 1;
      if (uVar18 == 0) {
        bVar42 = false;
      }
      iVar16 = iVar35;
    } while (bVar42);
    if (iVar16 != 0) {
      piVar28 = &iStack_130;
      iVar35 = 0;
      puVar37 = param_2 + 1;
      puVar14 = (uint *)((int)param_3 + -3);
      do {
        piVar28 = piVar28 + 1;
        iVar33 = *piVar28;
        iVar19 = iVar17 + iVar33;
        if (*(uint *)(iVar17 + iVar33) == *param_2) {
          puVar29 = (uint *)(iVar19 + 4);
          puVar24 = (uint *)((int)puVar37 + ((int)pcVar8 - (int)puVar29));
          if (param_3 < puVar24) {
            puVar24 = param_3;
          }
          puVar32 = (uint *)((int)puVar24 + -3);
          if (puVar37 < puVar32) {
            if (*(uint *)(iVar19 + 4) == param_2[1]) {
              puVar11 = param_2 + 2;
              local_140 = (uint *)(iVar19 + 8);
              if (puVar11 < puVar32) {
                do {
                  if (*local_140 != *puVar11) {
                    uVar18 = *local_140 ^ *puVar11;
                    bVar3 = (byte)uVar18;
                    bVar4 = (byte)(uVar18 >> 8);
                    bVar5 = (byte)(uVar18 >> 0x10);
                    bVar2 = (byte)(uVar18 >> 0x18);
                    pcVar10 = (char *)((int)puVar11 +
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
                                                      (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar37));
                    goto joined_r0x017c9858;
                  }
                  puVar11 = puVar11 + 1;
                  local_140 = local_140 + 1;
                } while (puVar11 < puVar32);
              }
              goto LAB_017c97f4;
            }
            uVar18 = *(uint *)(iVar19 + 4) ^ param_2[1];
            bVar3 = (byte)uVar18;
            bVar4 = (byte)(uVar18 >> 8);
            bVar5 = (byte)(uVar18 >> 0x10);
            bVar2 = (byte)(uVar18 >> 0x18);
            pcVar10 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
          else {
            puVar11 = puVar37;
            local_140 = puVar29;
LAB_017c97f4:
            if (puVar11 < (uint *)((int)puVar24 + -1)) {
              if ((short)*local_140 == (short)*puVar11) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar11 = (uint *)((int)puVar11 + 2);
              }
            }
            if ((puVar11 < puVar24) && ((char)*local_140 == (char)*puVar11)) {
              puVar11 = (uint *)((int)puVar11 + 1);
            }
            pcVar10 = (char *)((int)puVar11 - (int)puVar37);
          }
joined_r0x017c9858:
          if (pcVar8 == (char *)((int)puVar29 + (int)pcVar10)) {
            puVar24 = (uint *)((int)puVar37 + (int)pcVar10);
            if (puVar24 < puVar14) {
              if (*puVar7 == *(uint *)((int)puVar37 + (int)pcVar10)) {
                puVar29 = puVar24 + 1;
                local_140 = puVar7 + 1;
                if (puVar29 < puVar14) {
                  do {
                    if (*local_140 != *puVar29) {
                      uVar18 = *local_140 ^ *puVar29;
                      bVar3 = (byte)uVar18;
                      bVar4 = (byte)(uVar18 >> 8);
                      bVar5 = (byte)(uVar18 >> 0x10);
                      bVar2 = (byte)(uVar18 >> 0x18);
                      pcVar25 = (char *)((int)puVar29 +
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
                                                        (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                          bVar2 >> 1 & 1) << 1 |
                                                                         bVar2 >> 2 & 1) << 1 |
                                                                        bVar2 >> 3 & 1) << 1 |
                                                                       bVar2 >> 4 & 1) << 1 |
                                                                      bVar2 >> 5 & 1) << 1 |
                                                                     bVar2 >> 6 & 1) << 1 |
                                                                    bVar2 >> 7)) >> 3) -
                                        (int)puVar24));
                      goto LAB_017c9890;
                    }
                    puVar29 = puVar29 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar29 < puVar14);
                }
                goto LAB_017c98e0;
              }
              uVar18 = *puVar7 ^ *(uint *)((int)puVar37 + (int)pcVar10);
              bVar3 = (byte)uVar18;
              bVar4 = (byte)(uVar18 >> 8);
              bVar5 = (byte)(uVar18 >> 0x10);
              bVar2 = (byte)(uVar18 >> 0x18);
              pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
            }
            else {
              puVar29 = puVar24;
              local_140 = puVar7;
LAB_017c98e0:
              if (puVar29 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar29) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar29 = (uint *)((int)puVar29 + 2);
                }
              }
              if ((puVar29 < param_3) && ((char)*local_140 == (char)*puVar29)) {
                puVar29 = (uint *)((int)puVar29 + 1);
              }
              pcVar25 = (char *)((int)puVar29 - (int)puVar24);
            }
LAB_017c9890:
            pcVar10 = pcVar10 + (int)pcVar25;
          }
          pcVar10 = pcVar10 + 4;
          if (local_13c < pcVar10) {
            *param_4 = (int)(pcVar8 + uVar38 + (((3 - iVar9) - iVar17) - iVar33));
            local_13c = pcVar10;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar10)) break;
          }
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 != iVar16);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

