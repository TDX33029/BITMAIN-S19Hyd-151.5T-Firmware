// FUN_017cc4f0 @ 017cc4f0 size=3776 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017cc4f0(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  char *pcVar25;
  uint uVar26;
  int *piVar27;
  uint *puVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  char *pcVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  undefined4 *puVar40;
  uint *puVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  uint uVar45;
  bool bVar46;
  uint local_18c;
  uint local_188;
  int local_158;
  uint local_154;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar37 = *(int *)(param_1 + 4);
  uVar29 = *(uint *)(param_1 + 0x10);
  uVar9 = (int)param_2 - iVar37;
  local_2c = DAT_018ddaf8;
  iVar20 = *(int *)(param_1 + 0x5c);
  iVar21 = *(int *)(param_1 + 0x28);
  puVar40 = *(undefined4 **)(param_1 + 0xb4);
  uVar10 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar46 = uVar10 < uVar9 - uVar29;
  local_13c = *(char **)(param_1 + 0x24);
  if (bVar46) {
    local_154 = uVar9 - uVar10;
  }
  iVar15 = *(int *)(param_1 + 0xc);
  iVar42 = puVar40[9];
  iVar35 = puVar40[10];
  lVar3 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar33 = (uint)lVar3;
  uVar44 = *(uint *)(param_1 + 0xc4);
  uVar10 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
  if (!bVar46) {
    local_154 = uVar29;
  }
  uVar16 = uVar33 >> (0x38U - iVar42 & 0xff) | uVar10 << (iVar42 - 0x18U & 0xff) |
           uVar10 >> (0x18U - iVar42 & 0xff);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar29;
  }
  uVar29 = uVar16 >> 8;
  if (4 < uVar44) {
    uVar44 = 5;
  }
  iVar30 = iVar35 + uVar29 * 0x20;
  HintPreloadData(iVar30);
  iVar31 = puVar40[0x17] + uVar29 * 0x80;
  HintPreloadData(iVar31);
  HintPreloadData(puVar40[0x17] + uVar29 * 0x80 + 0x40);
  local_158 = 1 << (uVar44 & 0xff);
  uVar44 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x54);
  iVar42 = -(int)local_13c;
  uVar18 = iVar42 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar36 = param_1 + 0x2c;
    iVar14 = iVar21;
    iVar11 = iVar37;
    iVar43 = iVar20;
    if (uVar9 - uVar10 < 0x181) {
      local_188 = 0x20 - uVar18;
    }
    else {
      uVar33 = uVar10 + 0x60;
      if (uVar10 < uVar33) {
        local_188 = 0x20 - uVar18;
        uVar23 = uVar44;
        uVar22 = uVar17;
        while( true ) {
          uVar38 = *(uint *)(iVar36 + (uVar10 & 7) * 4);
          uVar26 = *(uint *)(uVar10 + iVar37 + 8);
          lVar3 = (ulonglong)uVar26 * 0xbf9b0000;
          uVar22 = *(int *)(uVar10 + iVar37 + 0xc) * -0x40650000 + uVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar22;
          uVar26 = ((uint)lVar3 ^ uVar23) >> (uVar18 & 0xff) | uVar22 << (local_188 & 0xff) |
                   uVar22 >> (iVar42 + 0x18U & 0xff);
          uVar23 = uVar38 >> 8;
          uVar22 = uVar26 >> 8;
          HintPreloadData(iVar21 + uVar22 * 0x20);
          iVar14 = uVar22 * 0x80;
          HintPreloadData(iVar20 + iVar14);
          HintPreloadData(iVar20 + iVar14 + 0x40);
          *(uint *)(iVar36 + (uVar10 & 7) * 4) = uVar26;
          uVar22 = *(byte *)(iVar21 + uVar23 * 0x20) - 1 & 0x1f;
          if (uVar22 == 0) {
            uVar22 = 0x1f;
          }
          *(char *)(iVar21 + uVar23 * 0x20) = (char)uVar22;
          *(char *)(iVar21 + uVar23 * 0x20 + uVar22) = (char)uVar38;
          *(uint *)(iVar20 + (uVar23 * 0x20 + uVar22) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar33 == uVar10) break;
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar22 = *(uint *)(param_1 + 0x54);
        }
        local_13c = *(char **)(param_1 + 0x24);
        iVar14 = *(int *)(param_1 + 0x28);
        iVar11 = *(int *)(param_1 + 4);
        iVar43 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_188 = 0x20 - uVar18;
      }
      uVar10 = uVar9 + -0x20;
      if ((char *)(uVar10 + iVar37) <= (char *)((int)param_2 + 1)) {
        pcVar32 = (char *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar37));
        if (pcVar32 < (char *)0x9) {
          uVar33 = uVar10 + (int)pcVar32;
        }
        else {
          uVar33 = uVar9 + -0x18;
        }
        if (uVar10 < uVar33) {
          uVar22 = *(uint *)(param_1 + 0x50);
          uVar26 = *(uint *)(param_1 + 0x54);
          uVar23 = uVar10;
          do {
            uVar39 = uVar23 & 7;
            piVar27 = (int *)(uVar23 + iVar37 + 4);
            puVar8 = (uint *)(uVar23 + iVar37);
            uVar23 = uVar23 + 1;
            lVar3 = (ulonglong)*puVar8 * 0xbf9b0000;
            uVar38 = *piVar27 * -0x40650000 + *puVar8 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar26;
            uVar45 = ((uint)lVar3 ^ uVar22) >> (0x38U - (int)local_13c & 0xff) |
                     uVar38 << ((int)local_13c - 0x18U & 0xff) |
                     uVar38 >> (0x18U - (int)local_13c & 0xff);
            uVar38 = uVar45 >> 8;
            HintPreloadData(iVar14 + uVar38 * 0x20);
            iVar1 = uVar38 * 0x80;
            HintPreloadData(iVar43 + iVar1);
            HintPreloadData(iVar43 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar39 * 4 + 0x2c) = uVar45;
          } while (uVar23 < uVar33);
        }
      }
    }
    local_18c = iVar42 + 0x18;
    if (uVar10 < uVar9) {
      do {
        uVar33 = *(uint *)(uVar10 + iVar11 + 8);
        uVar26 = *(uint *)(iVar36 + (uVar10 & 7) * 4);
        lVar3 = (ulonglong)uVar33 * 0xbf9b0000;
        uVar33 = *(int *)(uVar10 + iVar11 + 0xc) * -0x40650000 + uVar33 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar22 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - (int)local_13c & 0xff) |
                 uVar33 << ((int)local_13c - 0x18U & 0xff) |
                 uVar33 >> (0x18U - (int)local_13c & 0xff);
        uVar33 = uVar26 >> 8;
        uVar23 = uVar22 >> 8;
        HintPreloadData(iVar14 + uVar23 * 0x20);
        iVar42 = uVar23 * 0x80;
        HintPreloadData(iVar43 + iVar42);
        HintPreloadData(iVar43 + iVar42 + 0x40);
        *(uint *)(iVar36 + (uVar10 & 7) * 4) = uVar22;
        uVar23 = *(byte *)(iVar14 + uVar33 * 0x20) - 1 & 0x1f;
        if (uVar23 == 0) {
          uVar23 = 0x1f;
        }
        *(char *)(iVar14 + uVar33 * 0x20) = (char)uVar23;
        *(char *)(iVar14 + uVar33 * 0x20 + uVar23) = (char)uVar26;
        *(uint *)(iVar43 + (uVar23 + uVar33 * 0x20) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
    }
    *(uint *)(param_1 + 0x1c) = uVar9;
    lVar3 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar17 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar17;
    uVar33 = ((uint)lVar3 ^ uVar44) >> (uVar18 & 0xff) | uVar17 << (local_188 & 0xff) |
             uVar17 >> (local_18c & 0xff);
    uVar10 = uVar33 >> 8;
    HintPreloadData(iVar21 + uVar10 * 0x20);
    iVar42 = uVar10 * 0x80;
    HintPreloadData(iVar20 + iVar42);
    HintPreloadData(iVar20 + iVar42 + 0x40);
    local_13c = *(char **)(iVar36 + (uVar9 & 7) * 4);
    *(uint *)(iVar36 + (uVar9 & 7) * 4) = uVar33;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar9;
    local_13c = (char *)((uVar44 ^ uVar33) >> (uVar18 & 0xff) |
                         (uVar17 ^ uVar10) << (0x20 - uVar18 & 0xff) |
                        (uVar17 ^ uVar10) >> (iVar42 + 0x18U & 0xff));
  }
  uVar10 = (uint)local_13c >> 8;
  iVar20 = iVar20 + uVar10 * 0x80;
  iVar42 = iVar21 + uVar10 * 0x20;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)local_13c;
  uVar45 = ((uint)local_13c & 0xff) * 0x1010101;
  uVar44 = *(uint *)(iVar42 + 0x1c) ^ uVar45;
  uVar33 = *(uint *)(iVar42 + 0x18) ^ uVar45;
  uVar18 = *(uint *)(iVar42 + 0x14) ^ uVar45;
  uVar23 = *(uint *)(iVar42 + 0x10) ^ uVar45;
  uVar26 = *(uint *)(iVar42 + 0xc) ^ uVar45;
  uVar22 = *(uint *)(iVar42 + 8) ^ uVar45;
  uVar38 = *(uint *)(iVar42 + 4) ^ uVar45;
  uVar45 = uVar45 ^ *(uint *)(iVar21 + uVar10 * 0x20);
  uVar39 = (uint)*(byte *)(iVar21 + uVar10 * 0x20);
  uVar17 = uVar39 & 0x1f;
  uVar33 = ~((((uVar45 | 0x80808080) + 0xfefefeff | uVar45) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar26 | 0x80808080) + 0xfefefeff | uVar26) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar33 = uVar33 >> uVar17 | uVar33 << 0x20 - uVar17;
  if (uVar33 == 0) {
    bVar46 = true;
    iVar14 = 0;
  }
  else {
    iVar14 = 0;
    do {
      if (uVar33 == 0) {
        iVar11 = 0;
      }
      else {
        bVar4 = (byte)uVar33;
        bVar5 = (byte)(uVar33 >> 8);
        bVar6 = (byte)(uVar33 >> 0x10);
        bVar2 = (byte)(uVar33 >> 0x18);
        iVar11 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar44 = iVar11 + uVar17 & 0x1f;
      if (uVar44 == 0) {
        bVar46 = true;
        iVar11 = iVar14;
      }
      else {
        uVar44 = *(uint *)(iVar20 + uVar44 * 4);
        if (uVar44 < local_154) {
          bVar46 = true;
          break;
        }
        HintPreloadData(iVar37 + uVar44);
        iVar11 = iVar14 + 1;
        local_12c[iVar14] = uVar44;
        bVar46 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar33 = uVar33 & uVar33 - 1;
      bVar7 = bVar46;
      if (uVar33 == 0) {
        bVar7 = false;
      }
      iVar14 = iVar11;
    } while (bVar7);
  }
  uVar33 = uVar39 - 1 & 0x1f;
  if (uVar33 == 0) {
    uVar33 = 0x1f;
  }
  *(char *)(iVar21 + uVar10 * 0x20) = (char)uVar33;
  *(char *)(iVar42 + uVar33) = (char)local_13c;
  iVar21 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar21 + 1;
  *(int *)(iVar20 + uVar33 * 4) = iVar21;
  if (iVar14 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar27 = &iStack_130;
    iVar20 = 0;
    pcVar32 = (char *)0x3;
    do {
      while( true ) {
        piVar27 = piVar27 + 1;
        iVar21 = *piVar27;
        puVar8 = (uint *)(iVar37 + iVar21);
        if (*(int *)((int)puVar8 + (int)(pcVar32 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar32 + -3))) break;
LAB_017ccac4:
        iVar20 = iVar20 + 1;
        if (iVar20 == iVar14) goto LAB_017ccb8c;
      }
      puVar19 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar37 + iVar21) == *param_2) {
          do {
            puVar19 = puVar19 + 1;
            puVar8 = puVar8 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar19) {
              if (((uint *)((int)param_3 + -1) <= puVar19) || ((short)*puVar8 != (short)*puVar19))
              goto LAB_017cd128;
              goto LAB_017cd120;
            }
          } while (*puVar8 == *puVar19);
          uVar10 = *puVar8 ^ *puVar19;
          bVar4 = (byte)uVar10;
          bVar5 = (byte)(uVar10 >> 8);
          bVar6 = (byte)(uVar10 >> 0x10);
          bVar2 = (byte)(uVar10 >> 0x18);
          local_13c = (char *)((int)puVar19 +
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
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)param_2));
        }
        else {
          uVar10 = *(uint *)(iVar37 + iVar21) ^ *param_2;
          bVar4 = (byte)uVar10;
          bVar5 = (byte)(uVar10 >> 8);
          bVar6 = (byte)(uVar10 >> 0x10);
          bVar2 = (byte)(uVar10 >> 0x18);
          local_13c = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
      }
      else {
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if ((short)*param_2 == *(short *)(iVar37 + iVar21)) {
LAB_017cd120:
            puVar19 = (uint *)((int)puVar19 + 2);
            puVar8 = (uint *)((int)puVar8 + 2);
LAB_017cd128:
            if (puVar19 < param_3) goto LAB_017ccb1c;
          }
          else {
            if (param_3 <= param_2) goto LAB_017ccac4;
LAB_017ccb1c:
            if ((char)*puVar8 == (char)*puVar19) goto LAB_017ccdc0;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar37 + iVar21)))
          goto LAB_017ccac4;
LAB_017ccdc0:
          puVar19 = (uint *)((int)puVar19 + 1);
        }
        local_13c = (char *)((int)puVar19 - (int)param_2);
      }
      if (local_13c <= pcVar32) goto LAB_017ccac4;
      *param_4 = uVar9 + (3 - iVar21);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017ccb94;
      iVar20 = iVar20 + 1;
      pcVar32 = local_13c;
    } while (iVar20 != iVar14);
LAB_017ccb8c:
    local_13c = pcVar32;
  }
LAB_017ccb94:
  uVar18 = (uVar16 & 0xff) * 0x1010101;
  uVar44 = *(uint *)(iVar30 + 0x1c) ^ uVar18;
  uVar10 = *(uint *)(iVar30 + 0x18) ^ uVar18;
  uVar16 = *(uint *)(iVar30 + 0x14) ^ uVar18;
  uVar33 = *(uint *)(iVar30 + 0x10) ^ uVar18;
  uVar23 = *(uint *)(iVar30 + 0xc) ^ uVar18;
  uVar17 = *(uint *)(iVar30 + 4) ^ uVar18;
  uVar22 = *(uint *)(iVar30 + 8) ^ uVar18;
  uVar18 = uVar18 ^ *(uint *)(iVar35 + uVar29 * 0x20);
  uVar29 = *(byte *)(iVar35 + uVar29 * 0x20) & 0x1f;
  uVar10 = ~((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar10 = uVar10 >> uVar29 | uVar10 << 0x20 - uVar29;
  if (uVar10 == 0) {
    bVar46 = false;
  }
  if (bVar46) {
    puVar8 = (uint *)(iVar37 + iVar15);
    pcVar32 = (char *)*puVar40;
    iVar21 = puVar40[1];
    uVar33 = puVar40[3];
    iVar20 = 0;
    do {
      if (uVar10 == 0) {
        iVar37 = 0;
      }
      else {
        bVar4 = (byte)uVar10;
        bVar5 = (byte)(uVar10 >> 8);
        bVar6 = (byte)(uVar10 >> 0x10);
        bVar2 = (byte)(uVar10 >> 0x18);
        iVar37 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar44 = iVar37 + uVar29 & 0x1f;
      if (uVar44 == 0) {
        bVar46 = true;
        iVar37 = iVar20;
      }
      else {
        uVar44 = *(uint *)(iVar31 + uVar44 * 4);
        if (uVar44 < uVar33) break;
        HintPreloadData(iVar21 + uVar44);
        iVar37 = iVar20 + 1;
        local_12c[iVar20] = uVar44;
        bVar46 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar10 = uVar10 & uVar10 - 1;
      if (uVar10 == 0) {
        bVar46 = false;
      }
      iVar20 = iVar37;
    } while (bVar46);
    if (iVar20 != 0) {
      piVar27 = &iStack_130;
      iVar37 = 0;
      puVar41 = param_2 + 1;
      puVar19 = (uint *)((int)param_3 + -3);
      do {
        piVar27 = piVar27 + 1;
        iVar35 = *piVar27;
        iVar42 = iVar21 + iVar35;
        if (*(uint *)(iVar21 + iVar35) == *param_2) {
          puVar28 = (uint *)(iVar42 + 4);
          puVar24 = (uint *)((int)puVar41 + ((int)pcVar32 - (int)puVar28));
          if (param_3 < puVar24) {
            puVar24 = param_3;
          }
          puVar34 = (uint *)((int)puVar24 + -3);
          if (puVar41 < puVar34) {
            if (*(uint *)(iVar42 + 4) == param_2[1]) {
              puVar13 = param_2 + 2;
              local_140 = (uint *)(iVar42 + 8);
              if (puVar13 < puVar34) {
                do {
                  if (*local_140 != *puVar13) {
                    uVar10 = *local_140 ^ *puVar13;
                    bVar4 = (byte)uVar10;
                    bVar5 = (byte)(uVar10 >> 8);
                    bVar6 = (byte)(uVar10 >> 0x10);
                    bVar2 = (byte)(uVar10 >> 0x18);
                    pcVar12 = (char *)((int)puVar13 +
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
                                                                  )) >> 3) - (int)puVar41));
                    goto joined_r0x017ccfa8;
                  }
                  puVar13 = puVar13 + 1;
                  local_140 = local_140 + 1;
                } while (puVar13 < puVar34);
              }
              goto LAB_017ccf44;
            }
            uVar10 = *(uint *)(iVar42 + 4) ^ param_2[1];
            bVar4 = (byte)uVar10;
            bVar5 = (byte)(uVar10 >> 8);
            bVar6 = (byte)(uVar10 >> 0x10);
            bVar2 = (byte)(uVar10 >> 0x18);
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
            puVar13 = puVar41;
            local_140 = puVar28;
LAB_017ccf44:
            if (puVar13 < (uint *)((int)puVar24 + -1)) {
              if ((short)*local_140 == (short)*puVar13) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar13 = (uint *)((int)puVar13 + 2);
              }
            }
            if ((puVar13 < puVar24) && ((char)*local_140 == (char)*puVar13)) {
              puVar13 = (uint *)((int)puVar13 + 1);
            }
            pcVar12 = (char *)((int)puVar13 - (int)puVar41);
          }
joined_r0x017ccfa8:
          if (pcVar32 == (char *)((int)puVar28 + (int)pcVar12)) {
            puVar24 = (uint *)((int)puVar41 + (int)pcVar12);
            if (puVar24 < puVar19) {
              if (*puVar8 == *(uint *)((int)puVar41 + (int)pcVar12)) {
                puVar28 = puVar24 + 1;
                local_140 = puVar8 + 1;
                if (puVar28 < puVar19) {
                  do {
                    if (*local_140 != *puVar28) {
                      uVar10 = *local_140 ^ *puVar28;
                      bVar4 = (byte)uVar10;
                      bVar5 = (byte)(uVar10 >> 8);
                      bVar6 = (byte)(uVar10 >> 0x10);
                      bVar2 = (byte)(uVar10 >> 0x18);
                      pcVar25 = (char *)((int)puVar28 +
                                        (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                          bVar4 >> 1 & 1) << 1 |
                                                                         bVar4 >> 2 & 1) << 1 |
                                                                        bVar4 >> 3 & 1) << 1 |
                                                                       bVar4 >> 4 & 1) << 1 |
                                                                      bVar4 >> 5 & 1) << 1 |
                                                                     bVar4 >> 6 & 1) << 1 |
                                                                    bVar4 >> 7) << 0x18 |
                                                        (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                          bVar5 >> 1 & 1) << 1 |
                                                                         bVar5 >> 2 & 1) << 1 |
                                                                        bVar5 >> 3 & 1) << 1 |
                                                                       bVar5 >> 4 & 1) << 1 |
                                                                      bVar5 >> 5 & 1) << 1 |
                                                                     bVar5 >> 6 & 1) << 1 |
                                                                    bVar5 >> 7) << 0x10 |
                                                        (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                          bVar6 >> 1 & 1) << 1 |
                                                                         bVar6 >> 2 & 1) << 1 |
                                                                        bVar6 >> 3 & 1) << 1 |
                                                                       bVar6 >> 4 & 1) << 1 |
                                                                      bVar6 >> 5 & 1) << 1 |
                                                                     bVar6 >> 6 & 1) << 1 |
                                                                    bVar6 >> 7) << 8 |
                                                        (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                          bVar2 >> 1 & 1) << 1 |
                                                                         bVar2 >> 2 & 1) << 1 |
                                                                        bVar2 >> 3 & 1) << 1 |
                                                                       bVar2 >> 4 & 1) << 1 |
                                                                      bVar2 >> 5 & 1) << 1 |
                                                                     bVar2 >> 6 & 1) << 1 |
                                                                    bVar2 >> 7)) >> 3) -
                                        (int)puVar24));
                      goto LAB_017ccfe0;
                    }
                    puVar28 = puVar28 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar28 < puVar19);
                }
                goto LAB_017cd030;
              }
              uVar10 = *puVar8 ^ *(uint *)((int)puVar41 + (int)pcVar12);
              bVar4 = (byte)uVar10;
              bVar5 = (byte)(uVar10 >> 8);
              bVar6 = (byte)(uVar10 >> 0x10);
              bVar2 = (byte)(uVar10 >> 0x18);
              pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            else {
              puVar28 = puVar24;
              local_140 = puVar8;
LAB_017cd030:
              if (puVar28 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar28) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar28 = (uint *)((int)puVar28 + 2);
                }
              }
              if ((puVar28 < param_3) && ((char)*local_140 == (char)*puVar28)) {
                puVar28 = (uint *)((int)puVar28 + 1);
              }
              pcVar25 = (char *)((int)puVar28 - (int)puVar24);
            }
LAB_017ccfe0:
            pcVar12 = pcVar12 + (int)pcVar25;
          }
          pcVar12 = pcVar12 + 4;
          if (local_13c < pcVar12) {
            *param_4 = (int)(pcVar32 + uVar9 + (((3 - iVar15) - iVar21) - iVar35));
            local_13c = pcVar12;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar12)) break;
          }
        }
        iVar37 = iVar37 + 1;
      } while (iVar37 != iVar20);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

