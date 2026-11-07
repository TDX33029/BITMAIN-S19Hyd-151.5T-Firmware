// FUN_017cd3bc @ 017cd3bc size=3776 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017cd3bc(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  char *pcVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint *puVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  bool bVar46;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_154;
  uint local_148;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar37 = *(int *)(param_1 + 4);
  uVar28 = *(uint *)(param_1 + 0x10);
  uVar8 = (int)param_2 - iVar37;
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x28);
  uVar24 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar46 = uVar24 < uVar8 - uVar28;
  iVar15 = *(int *)(param_1 + 0xc);
  if (bVar46) {
    local_154 = uVar8 - uVar24;
  }
  puVar16 = *(undefined4 **)(param_1 + 0xb4);
  iVar9 = puVar16[9];
  iVar41 = puVar16[10];
  if (!bVar46) {
    local_154 = uVar28;
  }
  lVar2 = (ulonglong)*param_2 * 0xbb000000;
  uVar33 = (uint)lVar2;
  iVar35 = *(int *)(param_1 + 0x24);
  uVar17 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar42 = *(uint *)(param_1 + 0xc4);
  uVar21 = uVar33 >> (0x38U - iVar9 & 0xff) | uVar17 << (iVar9 - 0x18U & 0xff) |
           uVar17 >> (0x18U - iVar9 & 0xff);
  uVar24 = uVar21 >> 8;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar28;
  }
  if (4 < uVar42) {
    uVar42 = 5;
  }
  iVar10 = iVar41 + uVar24 * 0x20;
  HintPreloadData(iVar10);
  iVar11 = puVar16[0x17] + uVar24 * 0x80;
  HintPreloadData(iVar11);
  HintPreloadData(puVar16[0x17] + uVar24 * 0x80 + 0x40);
  iVar9 = 1 << (uVar42 & 0xff);
  uVar42 = *(uint *)(param_1 + 0x50);
  uVar28 = *(uint *)(param_1 + 0x54);
  iVar43 = -iVar35;
  uVar22 = iVar43 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    local_184 = *(uint *)(param_1 + 0x1c);
    iVar29 = param_1 + 0x2c;
    iVar12 = iVar20;
    iVar38 = iVar37;
    iVar44 = iVar19;
    if (uVar8 - local_184 < 0x181) {
      local_188 = iVar35 - 0x18;
      local_18c = 0x18 - iVar35;
    }
    else {
      uVar17 = local_184 + 0x60;
      if (local_184 < uVar17) {
        local_188 = 0x20 - uVar22;
        local_18c = iVar43 + 0x18;
        uVar33 = uVar28;
        uVar23 = uVar42;
        while( true ) {
          uVar39 = *(uint *)(iVar29 + (local_184 & 7) * 4);
          uVar32 = *(uint *)(local_184 + iVar37 + 8);
          lVar2 = (ulonglong)uVar32 * 0xbb000000;
          uVar33 = *(int *)(local_184 + iVar37 + 0xc) * -0x45000000 + uVar32 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar33;
          uVar32 = ((uint)lVar2 ^ uVar23) >> (uVar22 & 0xff) | uVar33 << (local_188 & 0xff) |
                   uVar33 >> (local_18c & 0xff);
          uVar33 = uVar39 >> 8;
          uVar23 = uVar32 >> 8;
          HintPreloadData(iVar20 + uVar23 * 0x20);
          iVar35 = uVar23 * 0x80;
          HintPreloadData(iVar19 + iVar35);
          HintPreloadData(iVar19 + iVar35 + 0x40);
          *(uint *)(iVar29 + (local_184 & 7) * 4) = uVar32;
          uVar23 = *(byte *)(iVar20 + uVar33 * 0x20) - 1 & 0x1f;
          if (uVar23 == 0) {
            uVar23 = 0x1f;
          }
          *(char *)(iVar20 + uVar33 * 0x20) = (char)uVar23;
          *(char *)(iVar20 + uVar33 * 0x20 + uVar23) = (char)uVar39;
          *(uint *)(iVar19 + (uVar33 * 0x20 + uVar23) * 4) = local_184;
          local_184 = local_184 + 1;
          if (uVar17 == local_184) break;
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar33 = *(uint *)(param_1 + 0x54);
        }
        iVar35 = *(int *)(param_1 + 0x24);
        iVar12 = *(int *)(param_1 + 0x28);
        iVar38 = *(int *)(param_1 + 4);
        iVar44 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_188 = iVar35 - 0x18;
        local_18c = 0x18 - iVar35;
      }
      local_184 = uVar8 + -0x20;
      if ((char *)(local_184 + iVar37) <= (char *)((int)param_2 + 1)) {
        pcVar36 = (char *)((int)param_2 + 1) + (1 - (int)(local_184 + iVar37));
        if (pcVar36 < (char *)0x9) {
          uVar17 = local_184 + (int)pcVar36;
        }
        else {
          uVar17 = uVar8 + -0x18;
        }
        if (local_184 < uVar17) {
          uVar32 = *(uint *)(param_1 + 0x54);
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar33 = local_184;
          do {
            uVar45 = uVar33 & 7;
            piVar30 = (int *)(uVar33 + iVar37 + 4);
            puVar7 = (uint *)(uVar33 + iVar37);
            uVar33 = uVar33 + 1;
            lVar2 = (ulonglong)*puVar7 * 0xbb000000;
            uVar39 = *piVar30 * -0x45000000 + *puVar7 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar32;
            uVar27 = ((uint)lVar2 ^ uVar23) >> (0x38U - iVar35 & 0xff) |
                     uVar39 << (iVar35 - 0x18U & 0xff) | uVar39 >> (0x18U - iVar35 & 0xff);
            uVar39 = uVar27 >> 8;
            HintPreloadData(iVar12 + uVar39 * 0x20);
            iVar43 = uVar39 * 0x80;
            HintPreloadData(iVar44 + iVar43);
            HintPreloadData(iVar44 + iVar43 + 0x40);
            *(uint *)(param_1 + uVar45 * 4 + 0x2c) = uVar27;
          } while (uVar33 < uVar17);
        }
      }
    }
    if (local_184 < uVar8) {
      do {
        uVar17 = *(uint *)(local_184 + iVar38 + 8);
        uVar32 = *(uint *)(iVar29 + (local_184 & 7) * 4);
        lVar2 = (ulonglong)uVar17 * 0xbb000000;
        uVar17 = *(int *)(local_184 + iVar38 + 0xc) * -0x45000000 + uVar17 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar23 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar35 & 0xff) |
                 uVar17 << (iVar35 - 0x18U & 0xff) | uVar17 >> (0x18U - iVar35 & 0xff);
        uVar17 = uVar32 >> 8;
        uVar33 = uVar23 >> 8;
        HintPreloadData(iVar12 + uVar33 * 0x20);
        iVar43 = uVar33 * 0x80;
        HintPreloadData(iVar44 + iVar43);
        HintPreloadData(iVar44 + iVar43 + 0x40);
        *(uint *)(iVar29 + (local_184 & 7) * 4) = uVar23;
        uVar33 = *(byte *)(iVar12 + uVar17 * 0x20) - 1 & 0x1f;
        if (uVar33 == 0) {
          uVar33 = 0x1f;
        }
        *(char *)(iVar12 + uVar17 * 0x20) = (char)uVar33;
        *(char *)(iVar12 + uVar17 * 0x20 + uVar33) = (char)uVar32;
        *(uint *)(iVar44 + (uVar33 + uVar17 * 0x20) * 4) = local_184;
        local_184 = local_184 + 1;
      } while (uVar8 != local_184);
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    lVar2 = (ulonglong)param_2[2] * 0xbb000000;
    uVar28 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^
             uVar28;
    uVar17 = ((uint)lVar2 ^ uVar42) >> (uVar22 & 0xff) | uVar28 << (local_188 & 0xff) |
             uVar28 >> (local_18c & 0xff);
    uVar28 = uVar17 >> 8;
    HintPreloadData(iVar20 + uVar28 * 0x20);
    iVar35 = uVar28 * 0x80;
    HintPreloadData(iVar19 + iVar35);
    HintPreloadData(iVar19 + iVar35 + 0x40);
    local_148 = *(uint *)(iVar29 + (uVar8 & 7) * 4);
    *(uint *)(iVar29 + (uVar8 & 7) * 4) = uVar17;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar8;
    local_148 = (uVar42 ^ uVar33) >> (uVar22 & 0xff) | (uVar28 ^ uVar17) << (0x20 - uVar22 & 0xff) |
                (uVar28 ^ uVar17) >> (iVar43 + 0x18U & 0xff);
  }
  uVar28 = local_148 >> 8;
  iVar19 = iVar19 + uVar28 * 0x80;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_148;
  uVar45 = (local_148 & 0xff) * 0x1010101;
  iVar35 = iVar20 + uVar28 * 0x20;
  uVar33 = *(uint *)(iVar35 + 0x1c) ^ uVar45;
  uVar17 = *(uint *)(iVar35 + 0x18) ^ uVar45;
  uVar42 = *(uint *)(iVar35 + 0x14) ^ uVar45;
  uVar32 = *(uint *)(iVar35 + 0x10) ^ uVar45;
  uVar22 = *(uint *)(iVar35 + 0xc) ^ uVar45;
  uVar39 = *(uint *)(iVar35 + 8) ^ uVar45;
  uVar23 = *(uint *)(iVar35 + 4) ^ uVar45;
  uVar45 = uVar45 ^ *(uint *)(iVar20 + uVar28 * 0x20);
  uVar17 = ~((((uVar45 | 0x80808080) + 0xfefefeff | uVar45) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar42 = (uint)*(byte *)(iVar20 + uVar28 * 0x20);
  uVar33 = uVar42 & 0x1f;
  uVar17 = uVar17 >> uVar33 | uVar17 << 0x20 - uVar33;
  if (uVar17 == 0) {
    bVar46 = true;
    iVar43 = 0;
  }
  else {
    iVar43 = 0;
    do {
      if (uVar17 == 0) {
        iVar12 = 0;
      }
      else {
        bVar3 = (byte)uVar17;
        bVar4 = (byte)(uVar17 >> 8);
        bVar5 = (byte)(uVar17 >> 0x10);
        bVar1 = (byte)(uVar17 >> 0x18);
        iVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      }
      uVar22 = iVar12 + uVar33 & 0x1f;
      if (uVar22 == 0) {
        bVar46 = true;
        iVar12 = iVar43;
      }
      else {
        uVar22 = *(uint *)(iVar19 + uVar22 * 4);
        if (uVar22 < local_154) {
          bVar46 = true;
          break;
        }
        HintPreloadData(iVar37 + uVar22);
        iVar12 = iVar43 + 1;
        local_12c[iVar43] = uVar22;
        bVar46 = iVar9 != 1;
        iVar9 = iVar9 + -1;
      }
      uVar17 = uVar17 & uVar17 - 1;
      bVar6 = bVar46;
      if (uVar17 == 0) {
        bVar6 = false;
      }
      iVar43 = iVar12;
    } while (bVar6);
  }
  uVar17 = uVar42 - 1 & 0x1f;
  if (uVar17 == 0) {
    uVar17 = 0x1f;
  }
  *(char *)(iVar20 + uVar28 * 0x20) = (char)uVar17;
  *(char *)(iVar35 + uVar17) = (char)local_148;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar19 + uVar17 * 4) = iVar20;
  if (iVar43 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar30 = &iStack_130;
    iVar19 = 0;
    pcVar36 = (char *)0x3;
    do {
      while( true ) {
        piVar30 = piVar30 + 1;
        iVar20 = *piVar30;
        puVar7 = (uint *)(iVar37 + iVar20);
        if (*(int *)((int)puVar7 + (int)(pcVar36 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar36 + -3))) break;
LAB_017cd988:
        iVar19 = iVar19 + 1;
        if (iVar19 == iVar43) goto LAB_017cda50;
      }
      puVar18 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar37 + iVar20) == *param_2) {
          do {
            puVar18 = puVar18 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar18) {
              if (((uint *)((int)param_3 + -1) <= puVar18) || ((short)*puVar7 != (short)*puVar18))
              goto LAB_017cdff0;
              goto LAB_017cdfe8;
            }
          } while (*puVar7 == *puVar18);
          uVar28 = *puVar7 ^ *puVar18;
          bVar3 = (byte)uVar28;
          bVar4 = (byte)(uVar28 >> 8);
          bVar5 = (byte)(uVar28 >> 0x10);
          bVar1 = (byte)(uVar28 >> 0x18);
          local_13c = (char *)((int)puVar18 +
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
          uVar28 = *(uint *)(iVar37 + iVar20) ^ *param_2;
          bVar3 = (byte)uVar28;
          bVar4 = (byte)(uVar28 >> 8);
          bVar5 = (byte)(uVar28 >> 0x10);
          bVar1 = (byte)(uVar28 >> 0x18);
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
          if ((short)*param_2 == *(short *)(iVar37 + iVar20)) {
LAB_017cdfe8:
            puVar18 = (uint *)((int)puVar18 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
LAB_017cdff0:
            if (puVar18 < param_3) goto LAB_017cd9e0;
          }
          else {
            if (param_3 <= param_2) goto LAB_017cd988;
LAB_017cd9e0:
            if ((char)*puVar7 == (char)*puVar18) goto LAB_017cdc88;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar37 + iVar20)))
          goto LAB_017cd988;
LAB_017cdc88:
          puVar18 = (uint *)((int)puVar18 + 1);
        }
        local_13c = (char *)((int)puVar18 - (int)param_2);
      }
      if (local_13c <= pcVar36) goto LAB_017cd988;
      *param_4 = uVar8 + (3 - iVar20);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017cda5c;
      iVar19 = iVar19 + 1;
      pcVar36 = local_13c;
    } while (iVar19 != iVar43);
LAB_017cda50:
    local_13c = pcVar36;
  }
LAB_017cda5c:
  uVar42 = (uVar21 & 0xff) * 0x1010101;
  uVar21 = *(uint *)(iVar10 + 0x1c) ^ uVar42;
  uVar28 = *(uint *)(iVar10 + 0x18) ^ uVar42;
  uVar33 = *(uint *)(iVar10 + 0x14) ^ uVar42;
  uVar17 = *(uint *)(iVar10 + 0x10) ^ uVar42;
  uVar23 = *(uint *)(iVar10 + 0xc) ^ uVar42;
  uVar32 = *(uint *)(iVar10 + 8) ^ uVar42;
  uVar22 = *(uint *)(iVar10 + 4) ^ uVar42;
  uVar42 = uVar42 ^ *(uint *)(iVar41 + uVar24 * 0x20);
  uVar39 = *(byte *)(iVar41 + uVar24 * 0x20) & 0x1f;
  uVar24 = ~((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar24 = uVar24 >> uVar39 | uVar24 << 0x20 - uVar39;
  if (uVar24 == 0) {
    bVar46 = false;
  }
  if (bVar46) {
    puVar7 = (uint *)(iVar37 + iVar15);
    pcVar36 = (char *)*puVar16;
    iVar20 = puVar16[1];
    uVar28 = puVar16[3];
    iVar19 = 0;
    do {
      if (uVar24 == 0) {
        iVar37 = 0;
      }
      else {
        bVar3 = (byte)uVar24;
        bVar4 = (byte)(uVar24 >> 8);
        bVar5 = (byte)(uVar24 >> 0x10);
        bVar1 = (byte)(uVar24 >> 0x18);
        iVar37 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                              bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                            bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      }
      uVar17 = iVar37 + uVar39 & 0x1f;
      if (uVar17 == 0) {
        bVar46 = true;
        iVar37 = iVar19;
      }
      else {
        uVar17 = *(uint *)(iVar11 + uVar17 * 4);
        if (uVar17 < uVar28) break;
        HintPreloadData(iVar20 + uVar17);
        iVar37 = iVar19 + 1;
        local_12c[iVar19] = uVar17;
        bVar46 = iVar9 != 1;
        iVar9 = iVar9 + -1;
      }
      uVar24 = uVar24 & uVar24 - 1;
      if (uVar24 == 0) {
        bVar46 = false;
      }
      iVar19 = iVar37;
    } while (bVar46);
    if (iVar19 != 0) {
      piVar30 = &iStack_130;
      iVar37 = 0;
      puVar40 = param_2 + 1;
      puVar18 = (uint *)((int)param_3 + -3);
      do {
        piVar30 = piVar30 + 1;
        iVar9 = *piVar30;
        iVar41 = iVar20 + iVar9;
        if (*(uint *)(iVar20 + iVar9) == *param_2) {
          puVar31 = (uint *)(iVar41 + 4);
          puVar25 = (uint *)((int)puVar40 + ((int)pcVar36 - (int)puVar31));
          if (param_3 < puVar25) {
            puVar25 = param_3;
          }
          puVar34 = (uint *)((int)puVar25 + -3);
          if (puVar40 < puVar34) {
            if (*(uint *)(iVar41 + 4) == param_2[1]) {
              puVar14 = param_2 + 2;
              local_140 = (uint *)(iVar41 + 8);
              if (puVar14 < puVar34) {
                do {
                  if (*local_140 != *puVar14) {
                    uVar24 = *local_140 ^ *puVar14;
                    bVar3 = (byte)uVar24;
                    bVar4 = (byte)(uVar24 >> 8);
                    bVar5 = (byte)(uVar24 >> 0x10);
                    bVar1 = (byte)(uVar24 >> 0x18);
                    pcVar13 = (char *)((int)puVar14 +
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
                    goto joined_r0x017cde70;
                  }
                  puVar14 = puVar14 + 1;
                  local_140 = local_140 + 1;
                } while (puVar14 < puVar34);
              }
              goto LAB_017cde0c;
            }
            uVar24 = *(uint *)(iVar41 + 4) ^ param_2[1];
            bVar3 = (byte)uVar24;
            bVar4 = (byte)(uVar24 >> 8);
            bVar5 = (byte)(uVar24 >> 0x10);
            bVar1 = (byte)(uVar24 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar14 = puVar40;
            local_140 = puVar31;
LAB_017cde0c:
            if (puVar14 < (uint *)((int)puVar25 + -1)) {
              if ((short)*local_140 == (short)*puVar14) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar14 = (uint *)((int)puVar14 + 2);
              }
            }
            if ((puVar14 < puVar25) && ((char)*local_140 == (char)*puVar14)) {
              puVar14 = (uint *)((int)puVar14 + 1);
            }
            pcVar13 = (char *)((int)puVar14 - (int)puVar40);
          }
joined_r0x017cde70:
          if (pcVar36 == (char *)((int)puVar31 + (int)pcVar13)) {
            puVar25 = (uint *)((int)puVar40 + (int)pcVar13);
            if (puVar25 < puVar18) {
              if (*puVar7 == *(uint *)((int)puVar40 + (int)pcVar13)) {
                puVar31 = puVar25 + 1;
                local_140 = puVar7 + 1;
                if (puVar31 < puVar18) {
                  do {
                    if (*local_140 != *puVar31) {
                      uVar24 = *local_140 ^ *puVar31;
                      bVar3 = (byte)uVar24;
                      bVar4 = (byte)(uVar24 >> 8);
                      bVar5 = (byte)(uVar24 >> 0x10);
                      bVar1 = (byte)(uVar24 >> 0x18);
                      pcVar26 = (char *)((int)puVar31 +
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
                      goto LAB_017cdea8;
                    }
                    puVar31 = puVar31 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar31 < puVar18);
                }
                goto LAB_017cdef8;
              }
              uVar24 = *puVar7 ^ *(uint *)((int)puVar40 + (int)pcVar13);
              bVar3 = (byte)uVar24;
              bVar4 = (byte)(uVar24 >> 8);
              bVar5 = (byte)(uVar24 >> 0x10);
              bVar1 = (byte)(uVar24 >> 0x18);
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
              puVar31 = puVar25;
              local_140 = puVar7;
LAB_017cdef8:
              if (puVar31 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar31) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar31 = (uint *)((int)puVar31 + 2);
                }
              }
              if ((puVar31 < param_3) && ((char)*local_140 == (char)*puVar31)) {
                puVar31 = (uint *)((int)puVar31 + 1);
              }
              pcVar26 = (char *)((int)puVar31 - (int)puVar25);
            }
LAB_017cdea8:
            pcVar13 = pcVar13 + (int)pcVar26;
          }
          pcVar13 = pcVar13 + 4;
          if (local_13c < pcVar13) {
            *param_4 = (int)(pcVar36 + uVar8 + (((3 - iVar15) - iVar20) - iVar9));
            local_13c = pcVar13;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) break;
          }
        }
        iVar37 = iVar37 + 1;
      } while (iVar37 != iVar19);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

