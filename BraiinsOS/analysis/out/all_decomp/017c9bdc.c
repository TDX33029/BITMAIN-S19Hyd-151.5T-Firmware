// FUN_017c9bdc @ 017c9bdc size=3572 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017c9bdc(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  char *pcVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  char *pcVar37;
  int iVar38;
  uint uVar39;
  uint *puVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  bool bVar46;
  uint local_180;
  uint local_17c;
  int local_148;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 4);
  uVar30 = *(uint *)(param_1 + 0x10);
  uVar41 = (int)param_2 - iVar8;
  local_2c = DAT_018ddaf8;
  iVar20 = *(int *)(param_1 + 0x5c);
  iVar21 = *(int *)(param_1 + 0x28);
  uVar22 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar46 = uVar22 < uVar41 - uVar30;
  local_148 = *(int *)(param_1 + 0x24);
  if (bVar46) {
    uVar22 = uVar41 - uVar22;
  }
  iVar17 = *(int *)(param_1 + 0xc);
  if (bVar46) {
  }
  else {
    uVar22 = uVar30;
  }
  puVar9 = *(undefined4 **)(param_1 + 0xb4);
  iVar38 = puVar9[10];
  iVar42 = puVar9[9];
  lVar2 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar45 = (uint)lVar2;
  uVar10 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar18 = uVar45 >> (0x38U - iVar42 & 0xff) | uVar10 << (iVar42 - 0x18U & 0xff) |
           uVar10 >> (0x18U - iVar42 & 0xff);
  uVar43 = *(uint *)(param_1 + 0xc4);
  uVar34 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar22 = uVar30;
  }
  uVar30 = uVar18 >> 8;
  iVar31 = puVar9[0x17] + uVar30 * 0x40;
  iVar42 = iVar38 + uVar30 * 0x10;
  if (3 < uVar43) {
    uVar43 = 4;
  }
  uVar39 = *(uint *)(param_1 + 0x54);
  HintPreloadData(iVar31);
  HintPreloadData(iVar42);
  iVar44 = 1 << (uVar43 & 0xff);
  iVar11 = -local_148;
  uVar43 = iVar11 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar16 = iVar21;
    local_140 = (uint *)iVar8;
    iVar12 = iVar20;
    if (uVar41 - uVar10 < 0x181) {
      local_180 = 0x20 - uVar43;
    }
    else {
      uVar45 = uVar10 + 0x60;
      if (uVar10 < uVar45) {
        local_180 = 0x20 - uVar43;
        uVar24 = uVar34;
        uVar23 = uVar39;
        while( true ) {
          uVar29 = *(uint *)(iVar32 + (uVar10 & 7) * 4);
          uVar35 = *(uint *)(uVar10 + iVar8 + 8);
          lVar2 = (ulonglong)uVar35 * 0xbf9b0000;
          uVar23 = *(int *)(uVar10 + iVar8 + 0xc) * -0x40650000 + uVar35 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar23;
          uVar35 = ((uint)lVar2 ^ uVar24) >> (uVar43 & 0xff) | uVar23 << (local_180 & 0xff) |
                   uVar23 >> (iVar11 + 0x18U & 0xff);
          uVar24 = uVar29 >> 8;
          uVar23 = uVar35 >> 8;
          HintPreloadData(iVar20 + uVar23 * 0x40);
          HintPreloadData(iVar21 + uVar23 * 0x10);
          *(uint *)(iVar32 + (uVar10 & 7) * 4) = uVar35;
          uVar23 = *(byte *)(iVar21 + uVar24 * 0x10) - 1 & 0xf;
          if (uVar23 == 0) {
            uVar23 = 0xf;
          }
          *(char *)(iVar21 + uVar24 * 0x10) = (char)uVar23;
          *(char *)(iVar21 + uVar24 * 0x10 + uVar23) = (char)uVar29;
          *(uint *)(iVar20 + (uVar24 * 0x10 + uVar23) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar45 == uVar10) break;
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x54);
        }
        local_148 = *(int *)(param_1 + 0x24);
        iVar16 = *(int *)(param_1 + 0x28);
        iVar12 = *(int *)(param_1 + 0x5c);
        local_140 = (uint *)*(int *)(param_1 + 4);
      }
      else {
        local_180 = 0x20 - uVar43;
      }
      uVar10 = uVar41 + -0x20;
      if ((char *)(uVar10 + iVar8) <= (char *)((int)param_2 + 1)) {
        pcVar14 = (char *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar8));
        if (pcVar14 < (char *)0x9) {
          uVar45 = uVar10 + (int)pcVar14;
        }
        else {
          uVar45 = uVar41 + -0x18;
        }
        if (uVar10 < uVar45) {
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar35 = *(uint *)(param_1 + 0x54);
          uVar24 = uVar10;
          do {
            uVar19 = uVar24 & 7;
            piVar33 = (int *)(uVar24 + iVar8 + 4);
            puVar7 = (uint *)(uVar24 + iVar8);
            uVar24 = uVar24 + 1;
            lVar2 = (ulonglong)*puVar7 * 0xbf9b0000;
            uVar29 = *piVar33 * -0x40650000 + *puVar7 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar35;
            uVar27 = ((uint)lVar2 ^ uVar23) >> (0x38U - local_148 & 0xff) |
                     uVar29 << (local_148 - 0x18U & 0xff) | uVar29 >> (0x18U - local_148 & 0xff);
            uVar29 = uVar27 >> 8;
            HintPreloadData(iVar12 + uVar29 * 0x40);
            HintPreloadData(iVar16 + uVar29 * 0x10);
            *(uint *)(param_1 + uVar19 * 4 + 0x2c) = uVar27;
          } while (uVar24 < uVar45);
        }
      }
    }
    local_17c = iVar11 + 0x18;
    if (uVar10 < uVar41) {
      do {
        uVar35 = *(uint *)(iVar32 + (uVar10 & 7) * 4);
        uVar45 = *(uint *)(uVar10 + (int)local_140 + 8);
        lVar2 = (ulonglong)uVar45 * 0xbf9b0000;
        uVar45 = *(int *)(uVar10 + (int)local_140 + 0xc) * -0x40650000 + uVar45 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar23 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - local_148 & 0xff) |
                 uVar45 << (local_148 - 0x18U & 0xff) | uVar45 >> (0x18U - local_148 & 0xff);
        uVar45 = uVar35 >> 8;
        uVar24 = uVar23 >> 8;
        HintPreloadData(iVar12 + uVar24 * 0x40);
        HintPreloadData(iVar16 + uVar24 * 0x10);
        *(uint *)(iVar32 + (uVar10 & 7) * 4) = uVar23;
        uVar24 = *(byte *)(iVar16 + uVar45 * 0x10) - 1 & 0xf;
        if (uVar24 == 0) {
          uVar24 = 0xf;
        }
        *(char *)(iVar16 + uVar45 * 0x10) = (char)uVar24;
        *(char *)(iVar16 + uVar45 * 0x10 + uVar24) = (char)uVar35;
        *(uint *)(iVar12 + (uVar24 + uVar45 * 0x10) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar41 != uVar10);
    }
    uVar10 = param_2[2];
    uVar45 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar41;
    lVar2 = (ulonglong)uVar10 * 0xbf9b0000;
    uVar39 = uVar45 * -0x40650000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^ uVar39;
    uVar43 = ((uint)lVar2 ^ uVar34) >> (uVar43 & 0xff) | uVar39 << (local_180 & 0xff) |
             uVar39 >> (local_17c & 0xff);
    uVar34 = uVar43 >> 8;
    uVar10 = *(uint *)(iVar32 + (uVar41 & 7) * 4);
    HintPreloadData(iVar20 + uVar34 * 0x40);
    HintPreloadData(iVar21 + uVar34 * 0x10);
    *(uint *)(iVar32 + (uVar41 & 7) * 4) = uVar43;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar41;
    uVar10 = (uVar34 ^ uVar45) >> (uVar43 & 0xff) | (uVar10 ^ uVar39) << (0x20 - uVar43 & 0xff) |
             (uVar10 ^ uVar39) >> (iVar11 + 0x18U & 0xff);
  }
  uVar34 = uVar10 >> 8;
  iVar20 = iVar20 + uVar34 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar10;
  iVar11 = iVar21 + uVar34 * 0x10;
  uVar45 = (uVar10 & 0xff) * 0x1010101;
  uVar43 = *(uint *)(iVar11 + 0xc) ^ uVar45;
  uVar23 = *(uint *)(iVar11 + 8) ^ uVar45;
  uVar39 = *(uint *)(iVar11 + 4) ^ uVar45;
  uVar45 = *(uint *)(iVar21 + uVar34 * 0x10) ^ uVar45;
  uVar35 = (uint)*(byte *)(iVar21 + uVar34 * 0x10);
  uVar24 = uVar35 & 0xf;
  uVar43 = (((uVar45 | 0x80808080) + 0xfefefeff | uVar45) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar43 = (~uVar43 << (-uVar24 & 0xf) | (uVar43 ^ 0xffff) >> uVar24) & 0xffff;
  if (uVar43 == 0) {
    bVar46 = true;
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    do {
      if (uVar43 == 0) {
        iVar12 = 0;
      }
      else {
        bVar3 = (byte)uVar43;
        bVar1 = (byte)(uVar43 >> 8);
        iVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                 bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar45 = iVar12 + uVar24 & 0xf;
      if (uVar45 == 0) {
        bVar46 = true;
        iVar12 = iVar16;
      }
      else {
        uVar45 = *(uint *)(iVar20 + uVar45 * 4);
        if (uVar45 < uVar22) {
          bVar46 = true;
          break;
        }
        HintPreloadData(iVar8 + uVar45);
        iVar12 = iVar16 + 1;
        local_12c[iVar16] = uVar45;
        bVar46 = iVar44 != 1;
        iVar44 = iVar44 + -1;
      }
      uVar43 = uVar43 & uVar43 - 1;
      bVar6 = bVar46;
      if (uVar43 == 0) {
        bVar6 = false;
      }
      iVar16 = iVar12;
    } while (bVar6);
  }
  uVar22 = uVar35 - 1 & 0xf;
  if (uVar22 == 0) {
    uVar22 = 0xf;
  }
  *(char *)(iVar21 + uVar34 * 0x10) = (char)uVar22;
  *(char *)(iVar11 + uVar22) = (char)uVar10;
  iVar21 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar21 + 1;
  *(int *)(iVar20 + uVar22 * 4) = iVar21;
  if (iVar16 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar33 = &iStack_130;
    iVar20 = 0;
    pcVar14 = (char *)0x3;
    do {
      while( true ) {
        piVar33 = piVar33 + 1;
        iVar21 = *piVar33;
        puVar7 = (uint *)(iVar8 + iVar21);
        if (*(int *)((int)puVar7 + (int)(pcVar14 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar14 + -3))) break;
LAB_017ca10c:
        iVar20 = iVar20 + 1;
        local_13c = pcVar14;
        if (iVar20 == iVar16) goto LAB_017ca1e0;
      }
      puVar13 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar8 + iVar21) == *param_2) {
          do {
            puVar13 = puVar13 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar13) {
              if (((uint *)((int)param_3 + -1) <= puVar13) || ((short)*puVar7 != (short)*puVar13))
              goto LAB_017ca714;
              goto LAB_017ca70c;
            }
          } while (*puVar7 == *puVar13);
          uVar22 = *puVar7 ^ *puVar13;
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
          local_13c = (char *)((int)puVar13 +
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
          uVar22 = *(uint *)(iVar8 + iVar21) ^ *param_2;
          bVar3 = (byte)uVar22;
          bVar4 = (byte)(uVar22 >> 8);
          bVar5 = (byte)(uVar22 >> 0x10);
          bVar1 = (byte)(uVar22 >> 0x18);
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
          if ((short)*param_2 == *(short *)(iVar8 + iVar21)) {
LAB_017ca70c:
            puVar13 = (uint *)((int)puVar13 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
LAB_017ca714:
            if (puVar13 < param_3) goto LAB_017ca168;
          }
          else {
            if (param_3 <= param_2) goto LAB_017ca10c;
LAB_017ca168:
            if ((char)*puVar7 == (char)*puVar13) goto LAB_017ca39c;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar8 + iVar21)))
          goto LAB_017ca10c;
LAB_017ca39c:
          puVar13 = (uint *)((int)puVar13 + 1);
        }
        local_13c = (char *)((int)puVar13 - (int)param_2);
      }
      if (local_13c <= pcVar14) goto LAB_017ca10c;
      *param_4 = uVar41 + (3 - iVar21);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) break;
      iVar20 = iVar20 + 1;
      pcVar14 = local_13c;
    } while (iVar20 != iVar16);
  }
LAB_017ca1e0:
  uVar10 = (uVar18 & 0xff) * 0x1010101;
  uVar34 = *(uint *)(iVar42 + 8) ^ uVar10;
  uVar22 = *(uint *)(iVar42 + 0xc) ^ uVar10;
  uVar18 = *(uint *)(iVar42 + 4) ^ uVar10;
  uVar10 = *(uint *)(iVar38 + uVar30 * 0x10) ^ uVar10;
  uVar30 = *(byte *)(iVar38 + uVar30 * 0x10) & 0xf;
  uVar22 = (((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar22 = (~uVar22 << (-uVar30 & 0xf) | (uVar22 ^ 0xffff) >> uVar30) & 0xffff;
  if (uVar22 == 0) {
    bVar46 = false;
  }
  pcVar14 = local_13c;
  if (bVar46) {
    puVar7 = (uint *)(iVar8 + iVar17);
    pcVar37 = (char *)*puVar9;
    iVar20 = puVar9[1];
    uVar10 = puVar9[3];
    iVar8 = 0;
    do {
      if (uVar22 == 0) {
        iVar21 = 0;
      }
      else {
        bVar3 = (byte)uVar22;
        bVar1 = (byte)(uVar22 >> 8);
        iVar21 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                 bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar18 = iVar21 + uVar30 & 0xf;
      if (uVar18 == 0) {
        bVar46 = true;
        iVar21 = iVar8;
      }
      else {
        uVar18 = *(uint *)(iVar31 + uVar18 * 4);
        if (uVar18 < uVar10) break;
        HintPreloadData(iVar20 + uVar18);
        iVar21 = iVar8 + 1;
        local_12c[iVar8] = uVar18;
        bVar46 = iVar44 != 1;
        iVar44 = iVar44 + -1;
      }
      uVar22 = uVar22 & uVar22 - 1;
      if (uVar22 == 0) {
        bVar46 = false;
      }
      iVar8 = iVar21;
    } while (bVar46);
    if (iVar8 != 0) {
      piVar33 = &iStack_130;
      iVar21 = 0;
      puVar40 = param_2 + 1;
      puVar13 = (uint *)((int)param_3 + -3);
      do {
        piVar33 = piVar33 + 1;
        iVar38 = *piVar33;
        iVar42 = iVar20 + iVar38;
        if (*(uint *)(iVar20 + iVar38) == *param_2) {
          puVar28 = (uint *)(iVar42 + 4);
          puVar25 = (uint *)((int)puVar40 + ((int)pcVar37 - (int)puVar28));
          if (param_3 < puVar25) {
            puVar25 = param_3;
          }
          puVar36 = (uint *)((int)puVar25 + -3);
          if (puVar40 < puVar36) {
            if (*(uint *)(iVar42 + 4) == param_2[1]) {
              puVar15 = param_2 + 2;
              local_140 = (uint *)(iVar42 + 8);
              if (puVar15 < puVar36) {
                do {
                  if (*local_140 != *puVar15) {
                    uVar22 = *local_140 ^ *puVar15;
                    bVar3 = (byte)uVar22;
                    bVar4 = (byte)(uVar22 >> 8);
                    bVar5 = (byte)(uVar22 >> 0x10);
                    bVar1 = (byte)(uVar22 >> 0x18);
                    pcVar14 = (char *)((int)puVar15 +
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
                                                                  )) >> 3) - (int)puVar40));
                    goto joined_r0x017ca590;
                  }
                  puVar15 = puVar15 + 1;
                  local_140 = local_140 + 1;
                } while (puVar15 < puVar36);
              }
              goto LAB_017ca52c;
            }
            uVar22 = *(uint *)(iVar42 + 4) ^ param_2[1];
            bVar3 = (byte)uVar22;
            bVar4 = (byte)(uVar22 >> 8);
            bVar5 = (byte)(uVar22 >> 0x10);
            bVar1 = (byte)(uVar22 >> 0x18);
            pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar15 = puVar40;
            local_140 = puVar28;
LAB_017ca52c:
            if (puVar15 < (uint *)((int)puVar25 + -1)) {
              if ((short)*local_140 == (short)*puVar15) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar15 = (uint *)((int)puVar15 + 2);
              }
            }
            if ((puVar15 < puVar25) && ((char)*local_140 == (char)*puVar15)) {
              puVar15 = (uint *)((int)puVar15 + 1);
            }
            pcVar14 = (char *)((int)puVar15 - (int)puVar40);
          }
joined_r0x017ca590:
          if (pcVar37 == (char *)((int)puVar28 + (int)pcVar14)) {
            puVar25 = (uint *)((int)puVar40 + (int)pcVar14);
            if (puVar25 < puVar13) {
              if (*puVar7 == *(uint *)((int)puVar40 + (int)pcVar14)) {
                puVar28 = puVar25 + 1;
                local_140 = puVar7 + 1;
                if (puVar28 < puVar13) {
                  do {
                    if (*local_140 != *puVar28) {
                      uVar22 = *local_140 ^ *puVar28;
                      bVar3 = (byte)uVar22;
                      bVar4 = (byte)(uVar22 >> 8);
                      bVar5 = (byte)(uVar22 >> 0x10);
                      bVar1 = (byte)(uVar22 >> 0x18);
                      pcVar26 = (char *)((int)puVar28 +
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
                      goto LAB_017ca5c8;
                    }
                    puVar28 = puVar28 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar28 < puVar13);
                }
                goto LAB_017ca618;
              }
              uVar22 = *puVar7 ^ *(uint *)((int)puVar40 + (int)pcVar14);
              bVar3 = (byte)uVar22;
              bVar4 = (byte)(uVar22 >> 8);
              bVar5 = (byte)(uVar22 >> 0x10);
              bVar1 = (byte)(uVar22 >> 0x18);
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
              puVar28 = puVar25;
              local_140 = puVar7;
LAB_017ca618:
              if (puVar28 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar28) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar28 = (uint *)((int)puVar28 + 2);
                }
              }
              if ((puVar28 < param_3) && ((char)*local_140 == (char)*puVar28)) {
                puVar28 = (uint *)((int)puVar28 + 1);
              }
              pcVar26 = (char *)((int)puVar28 - (int)puVar25);
            }
LAB_017ca5c8:
            pcVar14 = pcVar14 + (int)pcVar26;
          }
          pcVar14 = pcVar14 + 4;
          if (local_13c < pcVar14) {
            *param_4 = (int)(pcVar37 + uVar41 + (((3 - iVar17) - iVar20) - iVar38));
            if (param_3 == (uint *)((int)param_2 + (int)pcVar14)) goto LAB_017ca3e0;
            local_13c = pcVar14;
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != iVar8);
      pcVar14 = local_13c;
    }
  }
LAB_017ca3e0:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar14;
}

