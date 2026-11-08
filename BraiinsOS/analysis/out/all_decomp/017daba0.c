// FUN_017daba0 @ 017daba0 size=3544 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017daba0(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;
  uint local_178;
  uint local_174;
  uint *local_148;
  uint local_140;
  uint uStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar39 = *(int *)(param_1 + 0x5c);
  iVar29 = *(int *)(param_1 + 0x24);
  uVar48 = *(uint *)(param_1 + 0x54);
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 4);
  uVar45 = (int)param_2 - iVar8;
  pcVar20 = *(char **)(param_1 + 0x10);
  pcVar16 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  bVar50 = pcVar16 < (char *)(uVar45 - (int)pcVar20);
  iVar11 = *(int *)(param_1 + 8);
  if (bVar50) {
    pcVar16 = (char *)(uVar45 - (int)pcVar16);
  }
  pcVar12 = *(char **)(param_1 + 0xc);
  if (!bVar50) {
    pcVar16 = pcVar20;
  }
  uVar46 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar16 = pcVar20;
  }
  uVar21 = *(uint *)(param_1 + 0xc4);
  iVar27 = -iVar29;
  uVar22 = iVar27 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar9 = iVar19;
    iVar14 = iVar39;
    local_140 = iVar8;
    if (uVar45 - uVar13 < 0x181) {
      local_178 = iVar29 - 0x18;
      local_174 = 0x18 - iVar29;
    }
    else {
      uVar26 = uVar13 + 0x60;
      if (uVar13 < uVar26) {
        local_178 = 0x20 - uVar22;
        local_174 = iVar27 + 0x18;
        uVar23 = uVar48;
        uVar24 = uVar46;
        while( true ) {
          uVar30 = *(uint *)(iVar32 + (uVar13 & 7) * 4);
          uVar40 = *(uint *)(uVar13 + iVar8 + 8);
          lVar4 = (ulonglong)uVar40 * 0xbb000000;
          uVar23 = *(int *)(uVar13 + iVar8 + 0xc) * -0x45000000 + uVar40 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar23;
          uVar40 = uVar30 >> 8;
          uVar24 = ((uint)lVar4 ^ uVar24) >> (uVar22 & 0xff) | uVar23 << (local_178 & 0xff) |
                   uVar23 >> (local_174 & 0xff);
          uVar23 = uVar24 >> 8;
          iVar29 = uVar23 * 0x40;
          iVar27 = uVar23 * 0x100;
          HintPreloadData(iVar19 + iVar29);
          HintPreloadData(iVar39 + iVar27);
          HintPreloadData(iVar19 + iVar29 + 0x20);
          HintPreloadData(iVar39 + iVar27 + 0x40);
          *(uint *)(iVar32 + (uVar13 & 7) * 4) = uVar24;
          uVar23 = *(byte *)(iVar19 + uVar40 * 0x40) - 1 & 0x3f;
          if (uVar23 == 0) {
            uVar23 = 0x3f;
          }
          *(char *)(iVar19 + uVar40 * 0x40) = (char)uVar23;
          *(char *)(iVar19 + uVar40 * 0x40 + uVar23) = (char)uVar30;
          *(uint *)(iVar39 + (uVar40 * 0x40 + uVar23) * 4) = uVar13;
          uVar13 = uVar13 + 1;
          if (uVar26 == uVar13) break;
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x54);
        }
        iVar29 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0x28);
        iVar14 = *(int *)(param_1 + 0x5c);
        local_140 = *(int *)(param_1 + 4);
      }
      else {
        local_178 = iVar29 - 0x18;
        local_174 = 0x18 - iVar29;
      }
      uVar13 = uVar45 + -0x20;
      if ((char *)(uVar13 + iVar8) <= (char *)((int)param_2 + 1)) {
        pcVar20 = (char *)((int)param_2 + 1) + (1 - (int)(uVar13 + iVar8));
        if (pcVar20 < (char *)0x9) {
          uVar26 = uVar13 + (int)pcVar20;
        }
        else {
          uVar26 = uVar45 + -0x18;
        }
        if (uVar13 < uVar26) {
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar40 = *(uint *)(param_1 + 0x54);
          uVar23 = uVar13;
          do {
            uVar33 = uVar23 & 7;
            piVar2 = (int *)(uVar23 + iVar8 + 4);
            puVar17 = (uint *)(uVar23 + iVar8);
            uVar23 = uVar23 + 1;
            lVar4 = (ulonglong)*puVar17 * 0xbb000000;
            uVar30 = *piVar2 * -0x45000000 + *puVar17 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
            uVar34 = ((uint)lVar4 ^ uVar24) >> (0x38U - iVar29 & 0xff) |
                     uVar30 << (iVar29 - 0x18U & 0xff) | uVar30 >> (0x18U - iVar29 & 0xff);
            uVar30 = uVar34 >> 8;
            iVar27 = uVar30 * 0x40;
            iVar1 = uVar30 * 0x100;
            HintPreloadData(iVar9 + iVar27);
            HintPreloadData(iVar14 + iVar1);
            HintPreloadData(iVar9 + iVar27 + 0x20);
            HintPreloadData(iVar14 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar34;
          } while (uVar23 < uVar26);
        }
      }
    }
    if (uVar13 < uVar45) {
      do {
        uVar40 = *(uint *)(iVar32 + (uVar13 & 7) * 4);
        uVar23 = *(uint *)(uVar13 + local_140 + 8);
        lVar4 = (ulonglong)uVar23 * 0xbb000000;
        uVar26 = uVar40 >> 8;
        uVar23 = *(int *)(uVar13 + local_140 + 0xc) * -0x45000000 + uVar23 * -0x30e44324 +
                 (int)((ulonglong)lVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar24 = ((uint)lVar4 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar29 & 0xff) |
                 uVar23 << (iVar29 - 0x18U & 0xff) | uVar23 >> (0x18U - iVar29 & 0xff);
        uVar23 = uVar24 >> 8;
        iVar27 = uVar23 * 0x40;
        iVar1 = uVar23 * 0x100;
        HintPreloadData(iVar9 + iVar27);
        HintPreloadData(iVar14 + iVar1);
        HintPreloadData(iVar9 + iVar27 + 0x20);
        HintPreloadData(iVar14 + iVar1 + 0x40);
        *(uint *)(iVar32 + (uVar13 & 7) * 4) = uVar24;
        uVar23 = *(byte *)(iVar9 + uVar26 * 0x40) - 1 & 0x3f;
        if (uVar23 == 0) {
          uVar23 = 0x3f;
        }
        *(char *)(iVar9 + uVar26 * 0x40) = (char)uVar23;
        *(char *)(iVar9 + uVar26 * 0x40 + uVar23) = (char)uVar40;
        *(uint *)(iVar14 + (uVar23 + uVar26 * 0x40) * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar45 != uVar13);
    }
    *(uint *)(param_1 + 0x1c) = uVar45;
    lVar4 = (ulonglong)param_2[2] * 0xbb000000;
    uVar48 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^
             uVar48;
    uVar46 = ((uint)lVar4 ^ uVar46) >> (uVar22 & 0xff) | uVar48 << (local_178 & 0xff) |
             uVar48 >> (local_174 & 0xff);
    uVar48 = uVar46 >> 8;
    local_140 = *(uint *)(iVar32 + (uVar45 & 7) * 4);
    iVar29 = uVar48 * 0x40;
    iVar27 = uVar48 * 0x100;
    HintPreloadData(iVar19 + iVar29);
    HintPreloadData(iVar39 + iVar27);
    HintPreloadData(iVar19 + iVar29 + 0x20);
    HintPreloadData(iVar39 + iVar27 + 0x40);
    *(uint *)(iVar32 + (uVar45 & 7) * 4) = uVar46;
  }
  else {
    uVar26 = *param_2;
    uVar13 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar45;
    lVar4 = (ulonglong)uVar26 * 0xbb000000;
    uVar48 = uVar13 * -0x45000000 + uVar26 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar48;
    local_140 = ((uint)lVar4 ^ uVar46) >> (uVar22 & 0xff) | uVar48 << (0x20 - uVar22 & 0xff) |
                uVar48 >> (iVar27 + 0x18U & 0xff);
  }
  uVar48 = local_140 >> 8;
  iVar39 = iVar39 + uVar48 * 0x100;
  iVar29 = iVar19 + uVar48 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_140;
  uVar22 = (local_140 & 0xff) * 0x1010101;
  uVar13 = *(uint *)(iVar29 + 0x3c) ^ uVar22;
  uVar26 = *(uint *)(iVar29 + 0x38) ^ uVar22;
  uVar49 = *(uint *)(iVar29 + 0x34) ^ uVar22;
  uVar33 = *(uint *)(iVar29 + 0x30) ^ uVar22;
  uVar41 = *(uint *)(iVar29 + 0x18) ^ uVar22;
  uVar23 = *(uint *)(iVar29 + 0x2c) ^ uVar22;
  uVar34 = *(uint *)(iVar29 + 0x28) ^ uVar22;
  uVar24 = *(uint *)(iVar29 + 0x24) ^ uVar22;
  uVar35 = *(uint *)(iVar29 + 0x20) ^ uVar22;
  uVar40 = *(uint *)(iVar29 + 0x1c) ^ uVar22;
  uVar36 = *(uint *)(iVar29 + 0x14) ^ uVar22;
  uVar46 = *(uint *)(iVar29 + 0x10) ^ uVar22;
  uVar30 = *(uint *)(iVar29 + 0xc) ^ uVar22;
  uVar42 = *(uint *)(iVar29 + 4) ^ uVar22;
  uVar37 = *(uint *)(iVar29 + 8) ^ uVar22;
  uVar22 = *(uint *)(iVar19 + uVar48 * 0x40) ^ uVar22;
  uVar46 = (((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar46 | 0x80808080) + 0xfefefeff | uVar46) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4;
  pcVar20 = (char *)((((((((((uVar26 | 0x80808080) + 0xfefefeff | uVar26) & 0x80808080) * 0x204081
                           >> 0x1c |
                          ((((uVar13 | 0x80808080) + 0xfefefeff | uVar13) & 0x80808080) * 0x204081
                          >> 0x1c) << 4) << 4 |
                         (((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >>
                         0x1c) << 4 |
                        (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >>
                        0x1c) << 4 |
                       (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >>
                       0x1c) << 4 |
                      (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >>
                      0x1c) << 4 |
                     (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c
                     ) << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) *
                              0x204081 >> 0x1c);
  uVar13 = (uint)*(byte *)(iVar19 + uVar48 * 0x40);
  uVar22 = (((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
           uVar46 << 4;
  if (pcVar20 == (char *)0xffffffff && uVar22 == 0xffffffff) {
    iVar27 = 0;
  }
  else {
    uVar22 = ~uVar22;
    uVar23 = uVar13 & 0x3f;
    uVar26 = ~(uint)pcVar20;
    if (uVar21 < 6) {
      uVar46 = uVar21;
    }
    uVar24 = -uVar23 & 0x3f;
    uVar40 = uVar22 >> uVar23 | uVar26 << (0x20 - uVar23 & 0xff) | uVar26 >> (uVar23 - 0x20 & 0xff)
             | uVar22 << uVar24;
    if (uVar21 >= 6) {
      uVar46 = 6;
    }
    uVar21 = uVar26 << uVar24 | uVar22 << (uVar24 - 0x20 & 0xff) | uVar22 >> (0x20 - uVar24 & 0xff)
             | uVar26 >> uVar23;
    iVar9 = 1 << (uVar46 & 0xff);
    iVar27 = 0;
    do {
      if (uVar40 == 0) {
        bVar5 = (byte)uVar21;
        bVar6 = (byte)(uVar21 >> 8);
        bVar7 = (byte)(uVar21 >> 0x10);
        bVar3 = (byte)(uVar21 >> 0x18);
        iVar14 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                 bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                             bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1
                                          ) << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar5 = (byte)uVar40;
        bVar6 = (byte)(uVar40 >> 8);
        bVar7 = (byte)(uVar40 >> 0x10);
        bVar3 = (byte)(uVar40 >> 0x18);
        iVar14 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                 bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                             bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1
                                          ) << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar46 = uVar23 + iVar14 & 0x3f;
      if (uVar46 == 0) {
        bVar50 = true;
        iVar14 = iVar27;
      }
      else {
        pcVar20 = *(char **)(iVar39 + uVar46 * 4);
        if (pcVar20 < pcVar16) break;
        if (pcVar20 < pcVar12) {
          iVar14 = iVar11;
        }
        else {
          iVar14 = iVar8;
        }
        HintPreloadData(pcVar20 + iVar14);
        iVar14 = iVar27 + 1;
        local_12c[iVar27] = (uint)pcVar20;
        bVar50 = iVar9 != 1;
        iVar9 = iVar9 + -1;
      }
      bVar51 = uVar40 == 0;
      uVar40 = uVar40 & uVar40 - 1;
      uVar21 = uVar21 & uVar21 - bVar51;
      if (uVar40 == 0 && uVar21 == 0) {
        bVar50 = false;
      }
      pcVar20 = (char *)0x0;
      iVar27 = iVar14;
    } while (bVar50);
  }
  uVar46 = uVar13 - 1 & 0x3f;
  if (uVar46 == 0) {
    uVar46 = 0x3f;
  }
  *(char *)(iVar19 + uVar48 * 0x40) = (char)uVar46;
  *(char *)(iVar29 + uVar46) = (char)local_140;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar39 + uVar46 * 4) = iVar19;
  if (iVar27 == 0) {
    pcVar16 = (char *)0x3;
  }
  else {
    puVar31 = &uStack_130;
    iVar19 = 0;
    puVar17 = (uint *)(pcVar12 + iVar8);
    puVar18 = (uint *)((int)param_3 + -3);
    puVar44 = param_2 + 1;
    pcVar10 = (char *)0x3;
    do {
      puVar31 = puVar31 + 1;
      pcVar25 = (char *)*puVar31;
      if (pcVar25 < pcVar12) {
        pcVar20 = (char *)*param_2;
        if (*(char **)(pcVar25 + iVar11) != (char *)*param_2) goto LAB_017db308;
        puVar28 = (uint *)(pcVar25 + iVar11 + 4);
        puVar15 = (uint *)((int)puVar44 + ((int)(pcVar12 + iVar11) - (int)puVar28));
        if (param_3 < puVar15) {
          puVar15 = param_3;
        }
        puVar43 = (uint *)((int)puVar15 + -3);
        if (puVar44 < puVar43) {
          if (*(uint *)(pcVar25 + iVar11 + 4) == param_2[1]) {
            puVar38 = param_2 + 2;
            puVar47 = (uint *)(pcVar25 + iVar11 + 8);
            if (puVar38 < puVar43) {
              do {
                if (*puVar47 != *puVar38) {
                  uVar48 = *puVar47 ^ *puVar38;
                  bVar5 = (byte)uVar48;
                  bVar6 = (byte)(uVar48 >> 8);
                  bVar7 = (byte)(uVar48 >> 0x10);
                  bVar3 = (byte)(uVar48 >> 0x18);
                  pcVar16 = (char *)((int)puVar38 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                                bVar6 >> 1 & 1) << 1
                                                                               | bVar6 >> 2 & 1) <<
                                                                               1 | bVar6 >> 3 & 1)
                                                                              << 1 | bVar6 >> 4 & 1)
                                                                             << 1 | bVar6 >> 5 & 1)
                                                                            << 1 | bVar6 >> 6 & 1)
                                                                           << 1 | bVar6 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                      bVar7 >> 1 & 1) << 1 |
                                                                     bVar7 >> 2 & 1) << 1 |
                                                                    bVar7 >> 3 & 1) << 1 |
                                                                   bVar7 >> 4 & 1) << 1 |
                                                                  bVar7 >> 5 & 1) << 1 |
                                                                 bVar7 >> 6 & 1) << 1 | bVar7 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar44));
                  goto joined_r0x017db4b4;
                }
                puVar38 = puVar38 + 1;
                puVar47 = puVar47 + 1;
              } while (puVar38 < puVar43);
            }
            goto LAB_017db438;
          }
          uVar48 = param_2[1] ^ *(uint *)(pcVar25 + iVar11 + 4);
          bVar5 = (byte)uVar48;
          bVar6 = (byte)(uVar48 >> 8);
          bVar7 = (byte)(uVar48 >> 0x10);
          bVar3 = (byte)(uVar48 >> 0x18);
          pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) <<
                                                             1 | bVar7 >> 2 & 1) << 1 |
                                                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) <<
                                                          1 | bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1)
                                                        << 1 | bVar7 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
        else {
          puVar38 = puVar44;
          puVar47 = puVar28;
LAB_017db438:
          if (puVar38 < (uint *)((int)puVar15 + -1)) {
            if ((short)*puVar47 == (short)*puVar38) {
              puVar38 = (uint *)((int)puVar38 + 2);
              puVar47 = (uint *)((int)puVar47 + 2);
            }
          }
          if ((puVar38 < puVar15) && ((char)*puVar47 == (char)*puVar38)) {
            puVar38 = (uint *)((int)puVar38 + 1);
          }
          pcVar16 = (char *)((int)puVar38 - (int)puVar44);
        }
joined_r0x017db4b4:
        if (pcVar12 + iVar11 == (char *)((int)puVar28 + (int)pcVar16)) {
          puVar15 = (uint *)((int)puVar44 + (int)pcVar16);
          if (puVar15 < puVar18) {
            if (*puVar17 == *(uint *)((int)puVar44 + (int)pcVar16)) {
              puVar28 = puVar15 + 1;
              local_148 = puVar17 + 1;
              if (puVar28 < puVar18) {
                do {
                  if (*local_148 != *puVar28) {
                    uVar48 = *local_148 ^ *puVar28;
                    bVar5 = (byte)uVar48;
                    bVar6 = (byte)(uVar48 >> 8);
                    bVar7 = (byte)(uVar48 >> 0x10);
                    bVar3 = (byte)(uVar48 >> 0x18);
                    pcVar20 = (char *)((int)puVar28 +
                                      (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                        bVar5 >> 1 & 1) << 1 |
                                                                       bVar5 >> 2 & 1) << 1 |
                                                                      bVar5 >> 3 & 1) << 1 |
                                                                     bVar5 >> 4 & 1) << 1 |
                                                                    bVar5 >> 5 & 1) << 1 |
                                                                   bVar5 >> 6 & 1) << 1 | bVar5 >> 7
                                                                  ) << 0x18 |
                                                      (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                                      (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                        bVar7 >> 1 & 1) << 1 |
                                                                       bVar7 >> 2 & 1) << 1 |
                                                                      bVar7 >> 3 & 1) << 1 |
                                                                     bVar7 >> 4 & 1) << 1 |
                                                                    bVar7 >> 5 & 1) << 1 |
                                                                   bVar7 >> 6 & 1) << 1 | bVar7 >> 7
                                                                  ) << 8 |
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar15));
                    goto LAB_017db67c;
                  }
                  puVar28 = puVar28 + 1;
                  local_148 = local_148 + 1;
                } while (puVar28 < puVar18);
              }
              goto LAB_017db620;
            }
            uVar48 = *(uint *)((int)puVar44 + (int)pcVar16) ^ *puVar17;
            bVar5 = (byte)uVar48;
            bVar6 = (byte)(uVar48 >> 8);
            bVar7 = (byte)(uVar48 >> 0x10);
            bVar3 = (byte)(uVar48 >> 0x18);
            pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
          else {
            puVar28 = puVar15;
            local_148 = puVar17;
LAB_017db620:
            if (puVar28 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar28) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < param_3) && ((char)*local_148 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar20 = (char *)((int)puVar28 - (int)puVar15);
          }
LAB_017db67c:
          pcVar16 = pcVar16 + (int)pcVar20;
        }
        pcVar16 = pcVar16 + 4;
LAB_017db398:
        pcVar20 = pcVar16;
        if (pcVar10 < pcVar16) {
          *param_4 = uVar45 + (3 - (int)pcVar25);
          pcVar10 = pcVar16;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar16)) break;
        }
      }
      else {
        puVar15 = (uint *)(pcVar25 + iVar8);
        pcVar20 = *(char **)((int)puVar15 + (int)(pcVar10 + -3));
        if (pcVar20 == *(char **)((int)param_2 + (int)(pcVar10 + -3))) {
          puVar28 = param_2;
          if (param_2 < puVar18) {
            if (*(uint *)(pcVar25 + iVar8) == *param_2) {
              do {
                puVar28 = puVar28 + 1;
                puVar15 = puVar15 + 1;
                if (puVar18 <= puVar28) goto LAB_017db538;
              } while (*puVar15 == *puVar28);
              uVar48 = *puVar15 ^ *puVar28;
              bVar5 = (byte)uVar48;
              bVar6 = (byte)(uVar48 >> 8);
              bVar7 = (byte)(uVar48 >> 0x10);
              bVar3 = (byte)(uVar48 >> 0x18);
              pcVar16 = (char *)((int)puVar28 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1
                                                                  ) << 1 | bVar7 >> 2 & 1) << 1 |
                                                                bVar7 >> 3 & 1) << 1 |
                                                               bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1
                                                              ) << 1 | bVar7 >> 6 & 1) << 1 |
                                                            bVar7 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar48 = *(uint *)(pcVar25 + iVar8) ^ *param_2;
              bVar5 = (byte)uVar48;
              bVar6 = (byte)(uVar48 >> 8);
              bVar7 = (byte)(uVar48 >> 0x10);
              bVar3 = (byte)(uVar48 >> 0x18);
              pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                 << 1 | bVar5 >> 2 & 1) << 1 |
                                                               bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1
                                                              ) << 1 | bVar5 >> 5 & 1) << 1 |
                                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                               0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                        bVar6 >> 1 & 1) << 1 |
                                                                       bVar6 >> 2 & 1) << 1 |
                                                                      bVar6 >> 3 & 1) << 1 |
                                                                     bVar6 >> 4 & 1) << 1 |
                                                                    bVar6 >> 5 & 1) << 1 |
                                                                   bVar6 >> 6 & 1) << 1 | bVar6 >> 7
                                                                  ) << 0x10 |
                                               (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                 << 1 | bVar7 >> 2 & 1) << 1 |
                                                               bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1
                                                              ) << 1 | bVar7 >> 5 & 1) << 1 |
                                                            bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8
                                               | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
            }
          }
          else {
LAB_017db538:
            if (puVar28 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar15 == (short)*puVar28) {
                puVar28 = (uint *)((int)puVar28 + 2);
                puVar15 = (uint *)((int)puVar15 + 2);
              }
            }
            if ((puVar28 < param_3) && ((char)*puVar15 == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar16 = (char *)((int)puVar28 - (int)param_2);
          }
          goto LAB_017db398;
        }
      }
LAB_017db308:
      pcVar16 = pcVar10;
      iVar19 = iVar19 + 1;
      pcVar10 = pcVar16;
    } while (iVar19 != iVar27);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar16,pcVar20,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

