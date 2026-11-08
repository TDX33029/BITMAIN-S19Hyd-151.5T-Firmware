// FUN_017cb7a0 @ 017cb7a0 size=3396 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017cb7a0(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  char *pcVar22;
  int *piVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint *puVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  bool bVar42;
  int local_150;
  uint local_14c;
  uint local_148;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar35 = *(int *)(param_1 + 4);
  uVar39 = *(uint *)(param_1 + 0x10);
  uVar9 = (int)param_2 - iVar35;
  iVar32 = *(int *)(param_1 + 0x24);
  local_2c = DAT_018ddaf8;
  iVar18 = *(int *)(param_1 + 0x28);
  local_148 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar42 = local_148 < uVar9 - uVar39;
  iVar12 = *(int *)(param_1 + 0xc);
  if (bVar42) {
    local_148 = uVar9 - local_148;
  }
  puVar13 = *(undefined4 **)(param_1 + 0xb4);
  if (bVar42) {
  }
  else {
    local_148 = uVar39;
  }
  iVar30 = puVar13[10];
  uVar14 = *(uint *)(param_1 + 0xc4);
  uVar7 = *param_2 * -0x61c8864f >> (0x18 - puVar13[9] & 0xff);
  iVar27 = *(int *)(param_1 + 0x5c);
  uVar26 = uVar7 >> 8;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar39;
  }
  iVar40 = iVar30 + uVar26 * 0x20;
  HintPreloadData(iVar40);
  iVar41 = puVar13[0x17] + uVar26 * 0x80;
  HintPreloadData(iVar41);
  if (4 < uVar14) {
    uVar14 = 5;
  }
  HintPreloadData(puVar13[0x17] + uVar26 * 0x80 + 0x40);
  uVar19 = *(uint *)(param_1 + 0x50);
  local_150 = 1 << (uVar14 & 0xff);
  uVar39 = 0x18 - iVar32;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar14 = *(uint *)(param_1 + 0x1c);
    iVar31 = param_1 + 0x2c;
    iVar25 = iVar27;
    iVar16 = iVar18;
    local_14c = iVar35;
    if (0x180 < uVar9 - uVar14) {
      uVar15 = uVar14 + 0x60;
      if (uVar14 < uVar15) {
        uVar20 = uVar19;
        while( true ) {
          uVar28 = (*(int *)(uVar14 + iVar35 + 8) * -0x61c8864f ^ uVar20) >> (uVar39 & 0xff);
          uVar33 = *(uint *)(iVar31 + (uVar14 & 7) * 4);
          uVar20 = uVar28 >> 8;
          HintPreloadData(iVar18 + uVar20 * 0x20);
          iVar32 = uVar20 * 0x80;
          HintPreloadData(iVar27 + iVar32);
          HintPreloadData(iVar27 + iVar32 + 0x40);
          uVar20 = uVar33 >> 8;
          *(uint *)(iVar31 + (uVar14 & 7) * 4) = uVar28;
          uVar28 = *(byte *)(iVar18 + uVar20 * 0x20) - 1 & 0x1f;
          if (uVar28 == 0) {
            uVar28 = 0x1f;
          }
          *(char *)(iVar18 + uVar20 * 0x20) = (char)uVar28;
          *(char *)(iVar18 + uVar20 * 0x20 + uVar28) = (char)uVar33;
          *(uint *)(iVar27 + (uVar20 * 0x20 + uVar28) * 4) = uVar14;
          uVar14 = uVar14 + 1;
          if (uVar15 == uVar14) break;
          uVar20 = *(uint *)(param_1 + 0x50);
        }
        iVar32 = *(int *)(param_1 + 0x24);
        iVar25 = *(int *)(param_1 + 0x5c);
        iVar16 = *(int *)(param_1 + 0x28);
        local_14c = *(int *)(param_1 + 4);
      }
      uVar14 = uVar9 + -0x20;
      if ((char *)(uVar14 + iVar35) <= (char *)((int)param_2 + 1)) {
        pcVar8 = (char *)((int)param_2 + 1) + (1 - (int)(uVar14 + iVar35));
        if (pcVar8 < (char *)0x9) {
          uVar15 = uVar14 + (int)pcVar8;
        }
        else {
          uVar15 = uVar9 + -0x18;
        }
        if (uVar14 < uVar15) {
          uVar28 = *(uint *)(param_1 + 0x50);
          uVar20 = uVar14;
          do {
            piVar23 = (int *)(uVar20 + iVar35);
            uVar37 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            uVar34 = (*piVar23 * -0x61c8864f ^ uVar28) >> (0x18U - iVar32 & 0xff);
            uVar33 = uVar34 >> 8;
            HintPreloadData(iVar16 + uVar33 * 0x20);
            iVar1 = uVar33 * 0x80;
            HintPreloadData(iVar25 + iVar1);
            HintPreloadData(iVar25 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar37 * 4 + 0x2c) = uVar34;
          } while (uVar20 < uVar15);
        }
      }
    }
    if (uVar14 < uVar9) {
      do {
        uVar20 = (*(int *)(uVar14 + local_14c + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar32 & 0xff);
        uVar28 = *(uint *)(iVar31 + (uVar14 & 7) * 4);
        uVar15 = uVar20 >> 8;
        HintPreloadData(iVar16 + uVar15 * 0x20);
        iVar1 = uVar15 * 0x80;
        HintPreloadData(iVar25 + iVar1);
        HintPreloadData(iVar25 + iVar1 + 0x40);
        *(uint *)(iVar31 + (uVar14 & 7) * 4) = uVar20;
        uVar15 = uVar28 >> 8;
        uVar20 = *(byte *)(iVar16 + uVar15 * 0x20) - 1 & 0x1f;
        if (uVar20 == 0) {
          uVar20 = 0x1f;
        }
        *(char *)(iVar16 + uVar15 * 0x20) = (char)uVar20;
        *(char *)(iVar16 + uVar15 * 0x20 + uVar20) = (char)uVar28;
        *(uint *)(iVar25 + (uVar20 + uVar15 * 0x20) * 4) = uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar9 != uVar14);
    }
    *(uint *)(param_1 + 0x1c) = uVar9;
    uVar14 = (param_2[2] * -0x61c8864f ^ uVar19) >> (uVar39 & 0xff);
    local_14c = *(uint *)(iVar31 + (uVar9 & 7) * 4);
    uVar39 = uVar14 >> 8;
    HintPreloadData(iVar18 + uVar39 * 0x20);
    iVar32 = uVar39 * 0x80;
    HintPreloadData(iVar27 + iVar32);
    HintPreloadData(iVar27 + iVar32 + 0x40);
    *(uint *)(iVar31 + (uVar9 & 7) * 4) = uVar14;
  }
  else {
    local_14c = (*param_2 * -0x61c8864f ^ uVar19) >> (uVar39 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar9;
  }
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_14c;
  uVar39 = local_14c >> 8;
  iVar27 = iVar27 + uVar39 * 0x80;
  iVar32 = iVar18 + uVar39 * 0x20;
  uVar20 = (local_14c & 0xff) * 0x1010101;
  uVar14 = *(uint *)(iVar32 + 0x1c) ^ uVar20;
  uVar37 = *(uint *)(iVar32 + 0x18) ^ uVar20;
  uVar28 = *(uint *)(iVar32 + 0x14) ^ uVar20;
  uVar19 = *(uint *)(iVar32 + 0x10) ^ uVar20;
  uVar33 = *(uint *)(iVar32 + 0xc) ^ uVar20;
  uVar15 = *(uint *)(iVar32 + 8) ^ uVar20;
  uVar34 = *(uint *)(iVar32 + 4) ^ uVar20;
  uVar20 = uVar20 ^ *(uint *)(iVar18 + uVar39 * 0x20);
  uVar14 = ~((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar19 = (uint)*(byte *)(iVar18 + uVar39 * 0x20);
  uVar15 = uVar19 & 0x1f;
  uVar14 = uVar14 >> uVar15 | uVar14 << 0x20 - uVar15;
  if (uVar14 == 0) {
    bVar42 = true;
    iVar25 = 0;
  }
  else {
    iVar25 = 0;
    do {
      if (uVar14 == 0) {
        iVar16 = 0;
      }
      else {
        bVar3 = (byte)uVar14;
        bVar4 = (byte)(uVar14 >> 8);
        bVar5 = (byte)(uVar14 >> 0x10);
        bVar2 = (byte)(uVar14 >> 0x18);
        iVar16 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar20 = iVar16 + uVar15 & 0x1f;
      if (uVar20 == 0) {
        bVar42 = true;
        iVar16 = iVar25;
      }
      else {
        uVar20 = *(uint *)(iVar27 + uVar20 * 4);
        if (uVar20 < local_148) {
          bVar42 = true;
          break;
        }
        HintPreloadData(iVar35 + uVar20);
        iVar16 = iVar25 + 1;
        local_12c[iVar25] = uVar20;
        bVar42 = local_150 != 1;
        local_150 = local_150 + -1;
      }
      uVar14 = uVar14 & uVar14 - 1;
      bVar6 = bVar42;
      if (uVar14 == 0) {
        bVar6 = false;
      }
      iVar25 = iVar16;
    } while (bVar6);
  }
  uVar14 = uVar19 - 1 & 0x1f;
  if (uVar14 == 0) {
    uVar14 = 0x1f;
  }
  *(char *)(iVar18 + uVar39 * 0x20) = (char)uVar14;
  *(char *)(iVar32 + uVar14) = (char)local_14c;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar27 + uVar14 * 4) = iVar18;
  if (iVar25 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar23 = &iStack_130;
    iVar18 = 0;
    pcVar8 = (char *)0x3;
    do {
      while( true ) {
        piVar23 = piVar23 + 1;
        iVar32 = *piVar23;
        puVar38 = (uint *)(iVar35 + iVar32);
        if (*(int *)((int)puVar38 + (int)(pcVar8 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar8 + -3))) break;
LAB_017cbc84:
        iVar18 = iVar18 + 1;
        if (iVar18 == iVar25) goto LAB_017cbd4c;
      }
      puVar17 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar35 + iVar32) == *param_2) {
          do {
            puVar17 = puVar17 + 1;
            puVar38 = puVar38 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar17) {
              if (((uint *)((int)param_3 + -1) <= puVar17) || ((short)*puVar38 != (short)*puVar17))
              goto LAB_017cc300;
              goto LAB_017cc2f8;
            }
          } while (*puVar38 == *puVar17);
          uVar39 = *puVar38 ^ *puVar17;
          bVar3 = (byte)uVar39;
          bVar4 = (byte)(uVar39 >> 8);
          bVar5 = (byte)(uVar39 >> 0x10);
          bVar2 = (byte)(uVar39 >> 0x18);
          local_13c = (char *)((int)puVar17 +
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
          uVar39 = *(uint *)(iVar35 + iVar32) ^ *param_2;
          bVar3 = (byte)uVar39;
          bVar4 = (byte)(uVar39 >> 8);
          bVar5 = (byte)(uVar39 >> 0x10);
          bVar2 = (byte)(uVar39 >> 0x18);
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
          if ((short)*param_2 == *(short *)(iVar35 + iVar32)) {
LAB_017cc2f8:
            puVar17 = (uint *)((int)puVar17 + 2);
            puVar38 = (uint *)((int)puVar38 + 2);
LAB_017cc300:
            if (puVar17 < param_3) goto LAB_017cbcdc;
          }
          else {
            if (param_3 <= param_2) goto LAB_017cbc84;
LAB_017cbcdc:
            if ((char)*puVar38 == (char)*puVar17) goto LAB_017cbf80;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar35 + iVar32)))
          goto LAB_017cbc84;
LAB_017cbf80:
          puVar17 = (uint *)((int)puVar17 + 1);
        }
        local_13c = (char *)((int)puVar17 - (int)param_2);
      }
      if (local_13c <= pcVar8) goto LAB_017cbc84;
      *param_4 = uVar9 + (3 - iVar32);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017cbd54;
      iVar18 = iVar18 + 1;
      pcVar8 = local_13c;
    } while (iVar18 != iVar25);
LAB_017cbd4c:
    local_13c = pcVar8;
  }
LAB_017cbd54:
  uVar20 = (uVar7 & 0xff) * 0x1010101;
  uVar14 = *(uint *)(iVar40 + 0x1c) ^ uVar20;
  uVar39 = *(uint *)(iVar40 + 0x18) ^ uVar20;
  uVar19 = *(uint *)(iVar40 + 0x14) ^ uVar20;
  uVar7 = *(uint *)(iVar40 + 0x10) ^ uVar20;
  uVar33 = *(uint *)(iVar40 + 0xc) ^ uVar20;
  uVar28 = *(uint *)(iVar40 + 4) ^ uVar20;
  uVar15 = *(uint *)(iVar40 + 8) ^ uVar20;
  uVar20 = uVar20 ^ *(uint *)(iVar30 + uVar26 * 0x20);
  uVar26 = *(byte *)(iVar30 + uVar26 * 0x20) & 0x1f;
  uVar39 = ~((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar7 | 0x80808080) + 0xfefefeff | uVar7) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar39 = uVar39 >> uVar26 | uVar39 << 0x20 - uVar26;
  if (uVar39 == 0) {
    bVar42 = false;
  }
  if (bVar42) {
    puVar38 = (uint *)(iVar35 + iVar12);
    pcVar8 = (char *)*puVar13;
    iVar32 = puVar13[1];
    uVar7 = puVar13[3];
    iVar18 = 0;
    do {
      if (uVar39 == 0) {
        iVar35 = 0;
      }
      else {
        bVar3 = (byte)uVar39;
        bVar4 = (byte)(uVar39 >> 8);
        bVar5 = (byte)(uVar39 >> 0x10);
        bVar2 = (byte)(uVar39 >> 0x18);
        iVar35 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar14 = iVar35 + uVar26 & 0x1f;
      if (uVar14 == 0) {
        bVar42 = true;
        iVar35 = iVar18;
      }
      else {
        uVar14 = *(uint *)(iVar41 + uVar14 * 4);
        if (uVar14 < uVar7) break;
        HintPreloadData(iVar32 + uVar14);
        iVar35 = iVar18 + 1;
        local_12c[iVar18] = uVar14;
        bVar42 = local_150 != 1;
        local_150 = local_150 + -1;
      }
      uVar39 = uVar39 & uVar39 - 1;
      if (uVar39 == 0) {
        bVar42 = false;
      }
      iVar18 = iVar35;
    } while (bVar42);
    if (iVar18 != 0) {
      piVar23 = &iStack_130;
      iVar35 = 0;
      puVar36 = param_2 + 1;
      puVar17 = (uint *)((int)param_3 + -3);
      do {
        piVar23 = piVar23 + 1;
        iVar27 = *piVar23;
        iVar30 = iVar32 + iVar27;
        if (*(uint *)(iVar32 + iVar27) == *param_2) {
          puVar24 = (uint *)(iVar30 + 4);
          puVar21 = (uint *)((int)puVar36 + ((int)pcVar8 - (int)puVar24));
          if (param_3 < puVar21) {
            puVar21 = param_3;
          }
          puVar29 = (uint *)((int)puVar21 + -3);
          if (puVar36 < puVar29) {
            if (*(uint *)(iVar30 + 4) == param_2[1]) {
              puVar11 = param_2 + 2;
              local_140 = (uint *)(iVar30 + 8);
              if (puVar11 < puVar29) {
                do {
                  if (*local_140 != *puVar11) {
                    uVar39 = *local_140 ^ *puVar11;
                    bVar3 = (byte)uVar39;
                    bVar4 = (byte)(uVar39 >> 8);
                    bVar5 = (byte)(uVar39 >> 0x10);
                    bVar2 = (byte)(uVar39 >> 0x18);
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
                                                                  )) >> 3) - (int)puVar36));
                    goto joined_r0x017cc164;
                  }
                  puVar11 = puVar11 + 1;
                  local_140 = local_140 + 1;
                } while (puVar11 < puVar29);
              }
              goto LAB_017cc100;
            }
            uVar39 = *(uint *)(iVar30 + 4) ^ param_2[1];
            bVar3 = (byte)uVar39;
            bVar4 = (byte)(uVar39 >> 8);
            bVar5 = (byte)(uVar39 >> 0x10);
            bVar2 = (byte)(uVar39 >> 0x18);
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
            puVar11 = puVar36;
            local_140 = puVar24;
LAB_017cc100:
            if (puVar11 < (uint *)((int)puVar21 + -1)) {
              if ((short)*local_140 == (short)*puVar11) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar11 = (uint *)((int)puVar11 + 2);
              }
            }
            if ((puVar11 < puVar21) && ((char)*local_140 == (char)*puVar11)) {
              puVar11 = (uint *)((int)puVar11 + 1);
            }
            pcVar10 = (char *)((int)puVar11 - (int)puVar36);
          }
joined_r0x017cc164:
          if (pcVar8 == (char *)((int)puVar24 + (int)pcVar10)) {
            puVar21 = (uint *)((int)puVar36 + (int)pcVar10);
            if (puVar21 < puVar17) {
              if (*puVar38 == *(uint *)((int)puVar36 + (int)pcVar10)) {
                puVar24 = puVar21 + 1;
                local_140 = puVar38 + 1;
                if (puVar24 < puVar17) {
                  do {
                    if (*local_140 != *puVar24) {
                      uVar39 = *local_140 ^ *puVar24;
                      bVar3 = (byte)uVar39;
                      bVar4 = (byte)(uVar39 >> 8);
                      bVar5 = (byte)(uVar39 >> 0x10);
                      bVar2 = (byte)(uVar39 >> 0x18);
                      pcVar22 = (char *)((int)puVar24 +
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
                                        (int)puVar21));
                      goto LAB_017cc19c;
                    }
                    puVar24 = puVar24 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar24 < puVar17);
                }
                goto LAB_017cc1ec;
              }
              uVar39 = *puVar38 ^ *(uint *)((int)puVar36 + (int)pcVar10);
              bVar3 = (byte)uVar39;
              bVar4 = (byte)(uVar39 >> 8);
              bVar5 = (byte)(uVar39 >> 0x10);
              bVar2 = (byte)(uVar39 >> 0x18);
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
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
            }
            else {
              puVar24 = puVar21;
              local_140 = puVar38;
LAB_017cc1ec:
              if (puVar24 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar24) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar24 = (uint *)((int)puVar24 + 2);
                }
              }
              if ((puVar24 < param_3) && ((char)*local_140 == (char)*puVar24)) {
                puVar24 = (uint *)((int)puVar24 + 1);
              }
              pcVar22 = (char *)((int)puVar24 - (int)puVar21);
            }
LAB_017cc19c:
            pcVar10 = pcVar10 + (int)pcVar22;
          }
          pcVar10 = pcVar10 + 4;
          if (local_13c < pcVar10) {
            *param_4 = (int)(pcVar8 + uVar9 + (((3 - iVar12) - iVar32) - iVar27));
            local_13c = pcVar10;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar10)) break;
          }
        }
        iVar35 = iVar35 + 1;
      } while (iVar35 != iVar18);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

