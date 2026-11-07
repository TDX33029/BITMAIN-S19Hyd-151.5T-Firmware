// FUN_017ca9dc @ 017ca9dc size=3512 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017ca9dc(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  char *pcVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  int iVar37;
  int iVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  char *pcVar42;
  uint uVar43;
  bool bVar44;
  uint local_188;
  uint local_184;
  int local_158;
  uint local_150;
  int local_148;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 4);
  uVar43 = *(uint *)(param_1 + 0x10);
  uVar40 = (int)param_2 - iVar8;
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x28);
  uVar31 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar44 = uVar31 < uVar40 - uVar43;
  local_148 = *(int *)(param_1 + 0x24);
  if (bVar44) {
    local_150 = uVar40 - uVar31;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  puVar16 = *(undefined4 **)(param_1 + 0xb4);
  iVar9 = puVar16[9];
  iVar37 = puVar16[10];
  lVar2 = (ulonglong)*param_2 * 0xbb000000;
  uVar31 = (uint)lVar2;
  if (!bVar44) {
    local_150 = uVar43;
  }
  uVar17 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar41 = *(uint *)(param_1 + 0xc4);
  uVar21 = uVar31 >> (0x38U - iVar9 & 0xff) | uVar17 << (iVar9 - 0x18U & 0xff) |
           uVar17 >> (0x18U - iVar9 & 0xff);
  uVar35 = uVar21 >> 8;
  iVar9 = puVar16[0x17] + uVar35 * 0x40;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar43;
  }
  iVar22 = iVar37 + uVar35 * 0x10;
  if (3 < uVar41) {
    uVar41 = 4;
  }
  HintPreloadData(iVar9);
  HintPreloadData(iVar22);
  uVar33 = *(uint *)(param_1 + 0x50);
  local_158 = 1 << (uVar41 & 0xff);
  uVar43 = *(uint *)(param_1 + 0x54);
  iVar38 = -local_148;
  uVar41 = iVar38 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar31 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar14 = iVar20;
    local_140 = (uint *)iVar8;
    iVar10 = iVar19;
    if (uVar40 - uVar31 < 0x181) {
      local_188 = 0x20 - uVar41;
    }
    else {
      uVar17 = uVar31 + 0x60;
      if (uVar31 < uVar17) {
        local_188 = 0x20 - uVar41;
        uVar24 = uVar43;
        uVar23 = uVar33;
        while( true ) {
          uVar30 = *(uint *)(iVar32 + (uVar31 & 7) * 4);
          uVar34 = *(uint *)(uVar31 + iVar8 + 8);
          lVar2 = (ulonglong)uVar34 * 0xbb000000;
          uVar24 = *(int *)(uVar31 + iVar8 + 0xc) * -0x45000000 + uVar34 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar24;
          uVar34 = ((uint)lVar2 ^ uVar23) >> (uVar41 & 0xff) | uVar24 << (local_188 & 0xff) |
                   uVar24 >> (iVar38 + 0x18U & 0xff);
          uVar24 = uVar30 >> 8;
          uVar23 = uVar34 >> 8;
          HintPreloadData(iVar19 + uVar23 * 0x40);
          HintPreloadData(iVar20 + uVar23 * 0x10);
          *(uint *)(iVar32 + (uVar31 & 7) * 4) = uVar34;
          uVar23 = *(byte *)(iVar20 + uVar24 * 0x10) - 1 & 0xf;
          if (uVar23 == 0) {
            uVar23 = 0xf;
          }
          *(char *)(iVar20 + uVar24 * 0x10) = (char)uVar23;
          *(char *)(iVar20 + uVar24 * 0x10 + uVar23) = (char)uVar30;
          *(uint *)(iVar19 + (uVar24 * 0x10 + uVar23) * 4) = uVar31;
          uVar31 = uVar31 + 1;
          if (uVar17 == uVar31) break;
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar24 = *(uint *)(param_1 + 0x54);
        }
        local_148 = *(int *)(param_1 + 0x24);
        iVar14 = *(int *)(param_1 + 0x28);
        iVar10 = *(int *)(param_1 + 0x5c);
        local_140 = (uint *)*(int *)(param_1 + 4);
      }
      else {
        local_188 = 0x20 - uVar41;
      }
      uVar31 = uVar40 + -0x20;
      if ((char *)(uVar31 + iVar8) <= (char *)((int)param_2 + 1)) {
        pcVar12 = (char *)((int)param_2 + 1) + (1 - (int)(uVar31 + iVar8));
        if (pcVar12 < (char *)0x9) {
          uVar17 = uVar31 + (int)pcVar12;
        }
        else {
          uVar17 = uVar40 + -0x18;
        }
        if (uVar31 < uVar17) {
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar34 = *(uint *)(param_1 + 0x54);
          uVar24 = uVar31;
          do {
            uVar18 = uVar24 & 7;
            piVar28 = (int *)(uVar24 + iVar8 + 4);
            puVar7 = (uint *)(uVar24 + iVar8);
            uVar24 = uVar24 + 1;
            lVar2 = (ulonglong)*puVar7 * 0xbb000000;
            uVar30 = *piVar28 * -0x45000000 + *puVar7 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar34;
            uVar27 = ((uint)lVar2 ^ uVar23) >> (0x38U - local_148 & 0xff) |
                     uVar30 << (local_148 - 0x18U & 0xff) | uVar30 >> (0x18U - local_148 & 0xff);
            uVar30 = uVar27 >> 8;
            HintPreloadData(iVar10 + uVar30 * 0x40);
            HintPreloadData(iVar14 + uVar30 * 0x10);
            *(uint *)(param_1 + uVar18 * 4 + 0x2c) = uVar27;
          } while (uVar24 < uVar17);
        }
      }
    }
    local_184 = iVar38 + 0x18;
    if (uVar31 < uVar40) {
      do {
        uVar34 = *(uint *)(iVar32 + (uVar31 & 7) * 4);
        uVar17 = *(uint *)(uVar31 + (int)local_140 + 8);
        lVar2 = (ulonglong)uVar17 * 0xbb000000;
        uVar17 = *(int *)(uVar31 + (int)local_140 + 0xc) * -0x45000000 + uVar17 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar23 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - local_148 & 0xff) |
                 uVar17 << (local_148 - 0x18U & 0xff) | uVar17 >> (0x18U - local_148 & 0xff);
        uVar17 = uVar34 >> 8;
        uVar24 = uVar23 >> 8;
        HintPreloadData(iVar10 + uVar24 * 0x40);
        HintPreloadData(iVar14 + uVar24 * 0x10);
        *(uint *)(iVar32 + (uVar31 & 7) * 4) = uVar23;
        uVar24 = *(byte *)(iVar14 + uVar17 * 0x10) - 1 & 0xf;
        if (uVar24 == 0) {
          uVar24 = 0xf;
        }
        *(char *)(iVar14 + uVar17 * 0x10) = (char)uVar24;
        *(char *)(iVar14 + uVar17 * 0x10 + uVar24) = (char)uVar34;
        *(uint *)(iVar10 + (uVar24 + uVar17 * 0x10) * 4) = uVar31;
        uVar31 = uVar31 + 1;
      } while (uVar40 != uVar31);
    }
    uVar31 = param_2[2];
    uVar17 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar40;
    lVar2 = (ulonglong)uVar31 * 0xbb000000;
    uVar43 = uVar17 * -0x45000000 + uVar31 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^ uVar43;
    uVar43 = ((uint)lVar2 ^ uVar33) >> (uVar41 & 0xff) | uVar43 << (local_188 & 0xff) |
             uVar43 >> (local_184 & 0xff);
    uVar31 = uVar43 >> 8;
    HintPreloadData(iVar19 + uVar31 * 0x40);
    HintPreloadData(iVar20 + uVar31 * 0x10);
    uVar31 = *(uint *)(iVar32 + (uVar40 & 7) * 4);
    *(uint *)(iVar32 + (uVar40 & 7) * 4) = uVar43;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar40;
    uVar31 = (uVar33 ^ uVar31) >> (uVar41 & 0xff) | (uVar43 ^ uVar17) << (0x20 - uVar41 & 0xff) |
             (uVar43 ^ uVar17) >> (iVar38 + 0x18U & 0xff);
  }
  uVar43 = uVar31 >> 8;
  iVar19 = iVar19 + uVar43 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar31;
  iVar38 = iVar20 + uVar43 * 0x10;
  uVar41 = (uVar31 & 0xff) * 0x1010101;
  uVar17 = *(uint *)(iVar38 + 0xc) ^ uVar41;
  uVar23 = *(uint *)(iVar38 + 8) ^ uVar41;
  uVar24 = *(uint *)(iVar38 + 4) ^ uVar41;
  uVar41 = *(uint *)(iVar20 + uVar43 * 0x10) ^ uVar41;
  uVar34 = (uint)*(byte *)(iVar20 + uVar43 * 0x10);
  uVar33 = uVar34 & 0xf;
  uVar17 = (((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar17 = (~uVar17 << (-uVar33 & 0xf) | (uVar17 ^ 0xffff) >> uVar33) & 0xffff;
  if (uVar17 == 0) {
    bVar44 = true;
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    do {
      if (uVar17 == 0) {
        iVar10 = 0;
      }
      else {
        bVar3 = (byte)uVar17;
        bVar1 = (byte)(uVar17 >> 8);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                 bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar41 = iVar10 + uVar33 & 0xf;
      if (uVar41 == 0) {
        bVar44 = true;
        iVar10 = iVar14;
      }
      else {
        uVar41 = *(uint *)(iVar19 + uVar41 * 4);
        if (uVar41 < local_150) {
          bVar44 = true;
          break;
        }
        HintPreloadData(iVar8 + uVar41);
        iVar10 = iVar14 + 1;
        local_12c[iVar14] = uVar41;
        bVar44 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar17 = uVar17 & uVar17 - 1;
      bVar6 = bVar44;
      if (uVar17 == 0) {
        bVar6 = false;
      }
      iVar14 = iVar10;
    } while (bVar6);
  }
  uVar17 = uVar34 - 1 & 0xf;
  if (uVar17 == 0) {
    uVar17 = 0xf;
  }
  *(char *)(iVar20 + uVar43 * 0x10) = (char)uVar17;
  *(char *)(iVar38 + uVar17) = (char)uVar31;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar19 + uVar17 * 4) = iVar20;
  if (iVar14 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar28 = &iStack_130;
    iVar19 = 0;
    pcVar12 = (char *)0x3;
    do {
      while( true ) {
        piVar28 = piVar28 + 1;
        iVar20 = *piVar28;
        puVar7 = (uint *)(iVar8 + iVar20);
        if (*(int *)((int)puVar7 + (int)(pcVar12 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar12 + -3))) break;
LAB_017caf00:
        iVar19 = iVar19 + 1;
        local_13c = pcVar12;
        if (iVar19 == iVar14) goto LAB_017cafcc;
      }
      puVar11 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar8 + iVar20) == *param_2) {
          do {
            puVar11 = puVar11 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar11) {
              if (((uint *)((int)param_3 + -1) <= puVar11) || ((short)*puVar7 != (short)*puVar11))
              goto LAB_017cb504;
              goto LAB_017cb4fc;
            }
          } while (*puVar7 == *puVar11);
          uVar31 = *puVar7 ^ *puVar11;
          bVar3 = (byte)uVar31;
          bVar4 = (byte)(uVar31 >> 8);
          bVar5 = (byte)(uVar31 >> 0x10);
          bVar1 = (byte)(uVar31 >> 0x18);
          local_13c = (char *)((int)puVar11 +
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
                                              (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                                << 1 | bVar1 >> 2 & 1) << 1 |
                                                              bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                             << 1 | bVar1 >> 5 & 1) << 1 |
                                                           bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3)
                              - (int)param_2));
        }
        else {
          uVar31 = *(uint *)(iVar8 + iVar20) ^ *param_2;
          bVar3 = (byte)uVar31;
          bVar4 = (byte)(uVar31 >> 8);
          bVar5 = (byte)(uVar31 >> 0x10);
          bVar1 = (byte)(uVar31 >> 0x18);
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
        }
      }
      else {
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if ((short)*param_2 == *(short *)(iVar8 + iVar20)) {
LAB_017cb4fc:
            puVar11 = (uint *)((int)puVar11 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
LAB_017cb504:
            if (puVar11 < param_3) goto LAB_017caf5c;
          }
          else {
            if (param_3 <= param_2) goto LAB_017caf00;
LAB_017caf5c:
            if ((char)*puVar7 == (char)*puVar11) goto LAB_017cb18c;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar8 + iVar20)))
          goto LAB_017caf00;
LAB_017cb18c:
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        local_13c = (char *)((int)puVar11 - (int)param_2);
      }
      if (local_13c <= pcVar12) goto LAB_017caf00;
      *param_4 = uVar40 + (3 - iVar20);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) break;
      iVar19 = iVar19 + 1;
      pcVar12 = local_13c;
    } while (iVar19 != iVar14);
  }
LAB_017cafcc:
  uVar17 = (uVar21 & 0xff) * 0x1010101;
  uVar41 = *(uint *)(iVar22 + 8) ^ uVar17;
  uVar43 = *(uint *)(iVar22 + 0xc) ^ uVar17;
  uVar21 = *(uint *)(iVar22 + 4) ^ uVar17;
  uVar17 = *(uint *)(iVar37 + uVar35 * 0x10) ^ uVar17;
  uVar31 = *(byte *)(iVar37 + uVar35 * 0x10) & 0xf;
  uVar43 = (((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar43 = (~uVar43 << (-uVar31 & 0xf) | (uVar43 ^ 0xffff) >> uVar31) & 0xffff;
  if (uVar43 == 0) {
    bVar44 = false;
  }
  pcVar12 = local_13c;
  if (bVar44) {
    puVar7 = (uint *)(iVar8 + iVar15);
    pcVar42 = (char *)*puVar16;
    iVar19 = puVar16[1];
    uVar35 = puVar16[3];
    iVar8 = 0;
    do {
      if (uVar43 == 0) {
        iVar20 = 0;
      }
      else {
        bVar3 = (byte)uVar43;
        bVar1 = (byte)(uVar43 >> 8);
        iVar20 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                 bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar17 = iVar20 + uVar31 & 0xf;
      if (uVar17 == 0) {
        bVar44 = true;
        iVar20 = iVar8;
      }
      else {
        uVar17 = *(uint *)(iVar9 + uVar17 * 4);
        if (uVar17 < uVar35) break;
        HintPreloadData(iVar19 + uVar17);
        iVar20 = iVar8 + 1;
        local_12c[iVar8] = uVar17;
        bVar44 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar43 = uVar43 & uVar43 - 1;
      if (uVar43 == 0) {
        bVar44 = false;
      }
      iVar8 = iVar20;
    } while (bVar44);
    if (iVar8 != 0) {
      piVar28 = &iStack_130;
      iVar20 = 0;
      puVar39 = param_2 + 1;
      puVar11 = (uint *)((int)param_3 + -3);
      do {
        piVar28 = piVar28 + 1;
        iVar9 = *piVar28;
        iVar37 = iVar19 + iVar9;
        if (*(uint *)(iVar19 + iVar9) == *param_2) {
          puVar29 = (uint *)(iVar37 + 4);
          puVar25 = (uint *)((int)puVar39 + ((int)pcVar42 - (int)puVar29));
          if (param_3 < puVar25) {
            puVar25 = param_3;
          }
          puVar36 = (uint *)((int)puVar25 + -3);
          if (puVar39 < puVar36) {
            if (*(uint *)(iVar37 + 4) == param_2[1]) {
              puVar13 = param_2 + 2;
              local_140 = (uint *)(iVar37 + 8);
              if (puVar13 < puVar36) {
                do {
                  if (*local_140 != *puVar13) {
                    uVar31 = *local_140 ^ *puVar13;
                    bVar3 = (byte)uVar31;
                    bVar4 = (byte)(uVar31 >> 8);
                    bVar5 = (byte)(uVar31 >> 0x10);
                    bVar1 = (byte)(uVar31 >> 0x18);
                    pcVar12 = (char *)((int)puVar13 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar39));
                    goto joined_r0x017cb380;
                  }
                  puVar13 = puVar13 + 1;
                  local_140 = local_140 + 1;
                } while (puVar13 < puVar36);
              }
              goto LAB_017cb31c;
            }
            uVar31 = *(uint *)(iVar37 + 4) ^ param_2[1];
            bVar3 = (byte)uVar31;
            bVar4 = (byte)(uVar31 >> 8);
            bVar5 = (byte)(uVar31 >> 0x10);
            bVar1 = (byte)(uVar31 >> 0x18);
            pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar13 = puVar39;
            local_140 = puVar29;
LAB_017cb31c:
            if (puVar13 < (uint *)((int)puVar25 + -1)) {
              if ((short)*local_140 == (short)*puVar13) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar13 = (uint *)((int)puVar13 + 2);
              }
            }
            if ((puVar13 < puVar25) && ((char)*local_140 == (char)*puVar13)) {
              puVar13 = (uint *)((int)puVar13 + 1);
            }
            pcVar12 = (char *)((int)puVar13 - (int)puVar39);
          }
joined_r0x017cb380:
          if (pcVar42 == (char *)((int)puVar29 + (int)pcVar12)) {
            puVar25 = (uint *)((int)puVar39 + (int)pcVar12);
            if (puVar25 < puVar11) {
              if (*puVar7 == *(uint *)((int)puVar39 + (int)pcVar12)) {
                puVar29 = puVar25 + 1;
                local_140 = puVar7 + 1;
                if (puVar29 < puVar11) {
                  do {
                    if (*local_140 != *puVar29) {
                      uVar31 = *local_140 ^ *puVar29;
                      bVar3 = (byte)uVar31;
                      bVar4 = (byte)(uVar31 >> 8);
                      bVar5 = (byte)(uVar31 >> 0x10);
                      bVar1 = (byte)(uVar31 >> 0x18);
                      pcVar26 = (char *)((int)puVar29 +
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
                                                        (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                          bVar1 >> 1 & 1) << 1 |
                                                                         bVar1 >> 2 & 1) << 1 |
                                                                        bVar1 >> 3 & 1) << 1 |
                                                                       bVar1 >> 4 & 1) << 1 |
                                                                      bVar1 >> 5 & 1) << 1 |
                                                                     bVar1 >> 6 & 1) << 1 |
                                                                    bVar1 >> 7)) >> 3) -
                                        (int)puVar25));
                      goto LAB_017cb3b8;
                    }
                    puVar29 = puVar29 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar29 < puVar11);
                }
                goto LAB_017cb408;
              }
              uVar31 = *puVar7 ^ *(uint *)((int)puVar39 + (int)pcVar12);
              bVar3 = (byte)uVar31;
              bVar4 = (byte)(uVar31 >> 8);
              bVar5 = (byte)(uVar31 >> 0x10);
              bVar1 = (byte)(uVar31 >> 0x18);
              pcVar26 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
            }
            else {
              puVar29 = puVar25;
              local_140 = puVar7;
LAB_017cb408:
              if (puVar29 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar29) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar29 = (uint *)((int)puVar29 + 2);
                }
              }
              if ((puVar29 < param_3) && ((char)*local_140 == (char)*puVar29)) {
                puVar29 = (uint *)((int)puVar29 + 1);
              }
              pcVar26 = (char *)((int)puVar29 - (int)puVar25);
            }
LAB_017cb3b8:
            pcVar12 = pcVar12 + (int)pcVar26;
          }
          pcVar12 = pcVar12 + 4;
          if (local_13c < pcVar12) {
            *param_4 = (int)(pcVar42 + uVar40 + (((3 - iVar15) - iVar19) - iVar9));
            if (param_3 == (uint *)((int)param_2 + (int)pcVar12)) goto LAB_017cb1d0;
            local_13c = pcVar12;
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar8);
      pcVar12 = local_13c;
    }
  }
LAB_017cb1d0:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar12;
}

