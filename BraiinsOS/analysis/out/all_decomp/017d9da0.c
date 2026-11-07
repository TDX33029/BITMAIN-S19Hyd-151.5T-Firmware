// FUN_017d9da0 @ 017d9da0 size=3572 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017d9da0(int param_1,uint *param_2,uint *param_3,int *param_4)

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
  int iVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  uint *puVar44;
  int iVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  bool bVar50;
  bool bVar51;
  uint local_17c;
  uint local_178;
  uint *local_148;
  uint local_140;
  uint uStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar45 = *(int *)(param_1 + 0x24);
  uVar39 = *(uint *)(param_1 + 0x50);
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 4);
  uVar47 = (int)param_2 - iVar8;
  pcVar21 = *(char **)(param_1 + 0x10);
  pcVar16 = (char *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  bVar50 = pcVar16 < (char *)(uVar47 - (int)pcVar21);
  iVar11 = *(int *)(param_1 + 8);
  if (bVar50) {
    pcVar16 = (char *)(uVar47 - (int)pcVar16);
  }
  pcVar12 = *(char **)(param_1 + 0xc);
  if (!bVar50) {
    pcVar16 = pcVar21;
  }
  uVar48 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar16 = pcVar21;
  }
  uVar22 = *(uint *)(param_1 + 0xc4);
  iVar28 = -iVar45;
  uVar23 = iVar28 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar9 = iVar20;
    iVar14 = iVar19;
    local_140 = iVar8;
    if (uVar47 - uVar13 < 0x181) {
      local_17c = iVar45 - 0x18;
      local_178 = 0x18 - iVar45;
    }
    else {
      uVar27 = uVar13 + 0x60;
      if (uVar13 < uVar27) {
        local_17c = 0x20 - uVar23;
        local_178 = iVar28 + 0x18;
        uVar24 = uVar48;
        uVar25 = uVar39;
        while( true ) {
          uVar30 = *(uint *)(iVar32 + (uVar13 & 7) * 4);
          uVar40 = *(uint *)(uVar13 + iVar8 + 8);
          lVar4 = (ulonglong)uVar40 * 0xbf9b0000;
          uVar24 = *(int *)(uVar13 + iVar8 + 0xc) * -0x40650000 + uVar40 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar24;
          uVar40 = uVar30 >> 8;
          uVar25 = ((uint)lVar4 ^ uVar25) >> (uVar23 & 0xff) | uVar24 << (local_17c & 0xff) |
                   uVar24 >> (local_178 & 0xff);
          uVar24 = uVar25 >> 8;
          iVar45 = uVar24 * 0x40;
          iVar28 = uVar24 * 0x100;
          HintPreloadData(iVar20 + iVar45);
          HintPreloadData(iVar19 + iVar28);
          HintPreloadData(iVar20 + iVar45 + 0x20);
          HintPreloadData(iVar19 + iVar28 + 0x40);
          *(uint *)(iVar32 + (uVar13 & 7) * 4) = uVar25;
          uVar24 = *(byte *)(iVar20 + uVar40 * 0x40) - 1 & 0x3f;
          if (uVar24 == 0) {
            uVar24 = 0x3f;
          }
          *(char *)(iVar20 + uVar40 * 0x40) = (char)uVar24;
          *(char *)(iVar20 + uVar40 * 0x40 + uVar24) = (char)uVar30;
          *(uint *)(iVar19 + (uVar40 * 0x40 + uVar24) * 4) = uVar13;
          uVar13 = uVar13 + 1;
          if (uVar27 == uVar13) break;
          uVar25 = *(uint *)(param_1 + 0x50);
          uVar24 = *(uint *)(param_1 + 0x54);
        }
        iVar45 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0x28);
        iVar14 = *(int *)(param_1 + 0x5c);
        local_140 = *(int *)(param_1 + 4);
      }
      else {
        local_17c = iVar45 - 0x18;
        local_178 = 0x18 - iVar45;
      }
      uVar13 = uVar47 + -0x20;
      if ((char *)(uVar13 + iVar8) <= (char *)((int)param_2 + 1)) {
        pcVar21 = (char *)((int)param_2 + 1) + (1 - (int)(uVar13 + iVar8));
        if (pcVar21 < (char *)0x9) {
          uVar27 = uVar13 + (int)pcVar21;
        }
        else {
          uVar27 = uVar47 + -0x18;
        }
        if (uVar13 < uVar27) {
          uVar25 = *(uint *)(param_1 + 0x50);
          uVar40 = *(uint *)(param_1 + 0x54);
          uVar24 = uVar13;
          do {
            uVar33 = uVar24 & 7;
            piVar2 = (int *)(uVar24 + iVar8 + 4);
            puVar17 = (uint *)(uVar24 + iVar8);
            uVar24 = uVar24 + 1;
            lVar4 = (ulonglong)*puVar17 * 0xbf9b0000;
            uVar30 = *piVar2 * -0x40650000 + *puVar17 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
            uVar34 = ((uint)lVar4 ^ uVar25) >> (0x38U - iVar45 & 0xff) |
                     uVar30 << (iVar45 - 0x18U & 0xff) | uVar30 >> (0x18U - iVar45 & 0xff);
            uVar30 = uVar34 >> 8;
            iVar28 = uVar30 * 0x40;
            iVar1 = uVar30 * 0x100;
            HintPreloadData(iVar9 + iVar28);
            HintPreloadData(iVar14 + iVar1);
            HintPreloadData(iVar9 + iVar28 + 0x20);
            HintPreloadData(iVar14 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar34;
          } while (uVar24 < uVar27);
        }
      }
    }
    if (uVar13 < uVar47) {
      do {
        uVar40 = *(uint *)(iVar32 + (uVar13 & 7) * 4);
        uVar24 = *(uint *)(uVar13 + local_140 + 8);
        lVar4 = (ulonglong)uVar24 * 0xbf9b0000;
        uVar27 = uVar40 >> 8;
        uVar24 = *(int *)(uVar13 + local_140 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)lVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar25 = ((uint)lVar4 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar45 & 0xff) |
                 uVar24 << (iVar45 - 0x18U & 0xff) | uVar24 >> (0x18U - iVar45 & 0xff);
        uVar24 = uVar25 >> 8;
        iVar28 = uVar24 * 0x40;
        iVar1 = uVar24 * 0x100;
        HintPreloadData(iVar9 + iVar28);
        HintPreloadData(iVar14 + iVar1);
        HintPreloadData(iVar9 + iVar28 + 0x20);
        HintPreloadData(iVar14 + iVar1 + 0x40);
        *(uint *)(iVar32 + (uVar13 & 7) * 4) = uVar25;
        uVar24 = *(byte *)(iVar9 + uVar27 * 0x40) - 1 & 0x3f;
        if (uVar24 == 0) {
          uVar24 = 0x3f;
        }
        *(char *)(iVar9 + uVar27 * 0x40) = (char)uVar24;
        *(char *)(iVar9 + uVar27 * 0x40 + uVar24) = (char)uVar40;
        *(uint *)(iVar14 + (uVar24 + uVar27 * 0x40) * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar47 != uVar13);
    }
    *(uint *)(param_1 + 0x1c) = uVar47;
    lVar4 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar48 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^
             uVar48;
    uVar48 = ((uint)lVar4 ^ uVar39) >> (uVar23 & 0xff) | uVar48 << (local_17c & 0xff) |
             uVar48 >> (local_178 & 0xff);
    uVar39 = uVar48 >> 8;
    local_140 = *(uint *)(iVar32 + (uVar47 & 7) * 4);
    iVar45 = uVar39 * 0x40;
    iVar28 = uVar39 * 0x100;
    HintPreloadData(iVar20 + iVar45);
    HintPreloadData(iVar20 + iVar45 + 0x20);
    HintPreloadData(iVar19 + iVar28);
    HintPreloadData(iVar19 + iVar28 + 0x40);
    *(uint *)(iVar32 + (uVar47 & 7) * 4) = uVar48;
  }
  else {
    uVar27 = *param_2;
    uVar13 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar47;
    lVar4 = (ulonglong)uVar27 * 0xbf9b0000;
    uVar48 = uVar13 * -0x40650000 + uVar27 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^ uVar48;
    local_140 = ((uint)lVar4 ^ uVar39) >> (uVar23 & 0xff) | uVar48 << (0x20 - uVar23 & 0xff) |
                uVar48 >> (iVar28 + 0x18U & 0xff);
  }
  uVar39 = local_140 >> 8;
  iVar19 = iVar19 + uVar39 * 0x100;
  iVar45 = iVar20 + uVar39 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_140;
  uVar23 = (local_140 & 0xff) * 0x1010101;
  uVar13 = *(uint *)(iVar45 + 0x3c) ^ uVar23;
  uVar27 = *(uint *)(iVar45 + 0x38) ^ uVar23;
  uVar49 = *(uint *)(iVar45 + 0x34) ^ uVar23;
  uVar33 = *(uint *)(iVar45 + 0x30) ^ uVar23;
  uVar41 = *(uint *)(iVar45 + 0x18) ^ uVar23;
  uVar24 = *(uint *)(iVar45 + 0x2c) ^ uVar23;
  uVar34 = *(uint *)(iVar45 + 0x28) ^ uVar23;
  uVar25 = *(uint *)(iVar45 + 0x24) ^ uVar23;
  uVar35 = *(uint *)(iVar45 + 0x20) ^ uVar23;
  uVar40 = *(uint *)(iVar45 + 0x1c) ^ uVar23;
  uVar36 = *(uint *)(iVar45 + 0x14) ^ uVar23;
  uVar48 = *(uint *)(iVar45 + 0x10) ^ uVar23;
  uVar30 = *(uint *)(iVar45 + 0xc) ^ uVar23;
  uVar42 = *(uint *)(iVar45 + 4) ^ uVar23;
  uVar37 = *(uint *)(iVar45 + 8) ^ uVar23;
  uVar23 = *(uint *)(iVar20 + uVar39 * 0x40) ^ uVar23;
  uVar48 = (((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4;
  pcVar21 = (char *)((((((((((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081
                           >> 0x1c |
                          ((((uVar13 | 0x80808080) + 0xfefefeff | uVar13) & 0x80808080) * 0x204081
                          >> 0x1c) << 4) << 4 |
                         (((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >>
                         0x1c) << 4 |
                        (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >>
                        0x1c) << 4 |
                       (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >>
                       0x1c) << 4 |
                      (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >>
                      0x1c) << 4 |
                     (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c
                     ) << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) *
                              0x204081 >> 0x1c);
  uVar13 = (uint)*(byte *)(iVar20 + uVar39 * 0x40);
  uVar23 = (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
           uVar48 << 4;
  if (pcVar21 == (char *)0xffffffff && uVar23 == 0xffffffff) {
    iVar28 = 0;
  }
  else {
    uVar23 = ~uVar23;
    uVar24 = uVar13 & 0x3f;
    uVar27 = ~(uint)pcVar21;
    if (uVar22 < 6) {
      uVar48 = uVar22;
    }
    uVar25 = -uVar24 & 0x3f;
    uVar40 = uVar23 >> uVar24 | uVar27 << (0x20 - uVar24 & 0xff) | uVar27 >> (uVar24 - 0x20 & 0xff)
             | uVar23 << uVar25;
    if (uVar22 >= 6) {
      uVar48 = 6;
    }
    uVar22 = uVar27 << uVar25 | uVar23 << (uVar25 - 0x20 & 0xff) | uVar23 >> (0x20 - uVar25 & 0xff)
             | uVar27 >> uVar24;
    iVar9 = 1 << (uVar48 & 0xff);
    iVar28 = 0;
    do {
      if (uVar40 == 0) {
        bVar5 = (byte)uVar22;
        bVar6 = (byte)(uVar22 >> 8);
        bVar7 = (byte)(uVar22 >> 0x10);
        bVar3 = (byte)(uVar22 >> 0x18);
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
      uVar48 = uVar24 + iVar14 & 0x3f;
      if (uVar48 == 0) {
        bVar50 = true;
        iVar14 = iVar28;
      }
      else {
        pcVar21 = *(char **)(iVar19 + uVar48 * 4);
        if (pcVar21 < pcVar16) break;
        if (pcVar21 < pcVar12) {
          iVar14 = iVar11;
        }
        else {
          iVar14 = iVar8;
        }
        HintPreloadData(pcVar21 + iVar14);
        iVar14 = iVar28 + 1;
        local_12c[iVar28] = (uint)pcVar21;
        bVar50 = iVar9 != 1;
        iVar9 = iVar9 + -1;
      }
      bVar51 = uVar40 == 0;
      uVar40 = uVar40 & uVar40 - 1;
      uVar22 = uVar22 & uVar22 - bVar51;
      if (uVar40 == 0 && uVar22 == 0) {
        bVar50 = false;
      }
      pcVar21 = (char *)0x0;
      iVar28 = iVar14;
    } while (bVar50);
  }
  uVar48 = uVar13 - 1 & 0x3f;
  if (uVar48 == 0) {
    uVar48 = 0x3f;
  }
  *(char *)(iVar20 + uVar39 * 0x40) = (char)uVar48;
  *(char *)(iVar45 + uVar48) = (char)local_140;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar19 + uVar48 * 4) = iVar20;
  if (iVar28 == 0) {
    pcVar16 = (char *)0x3;
  }
  else {
    puVar31 = &uStack_130;
    iVar20 = 0;
    puVar17 = (uint *)(pcVar12 + iVar8);
    puVar18 = (uint *)((int)param_3 + -3);
    puVar44 = param_2 + 1;
    pcVar10 = (char *)0x3;
    do {
      puVar31 = puVar31 + 1;
      pcVar26 = (char *)*puVar31;
      if (pcVar26 < pcVar12) {
        pcVar21 = (char *)*param_2;
        if (*(char **)(pcVar26 + iVar11) != (char *)*param_2) goto LAB_017da514;
        puVar29 = (uint *)(pcVar26 + iVar11 + 4);
        puVar15 = (uint *)((int)puVar44 + ((int)(pcVar12 + iVar11) - (int)puVar29));
        if (param_3 < puVar15) {
          puVar15 = param_3;
        }
        puVar43 = (uint *)((int)puVar15 + -3);
        if (puVar44 < puVar43) {
          if (*(uint *)(pcVar26 + iVar11 + 4) == param_2[1]) {
            puVar38 = param_2 + 2;
            puVar46 = (uint *)(pcVar26 + iVar11 + 8);
            if (puVar38 < puVar43) {
              do {
                if (*puVar46 != *puVar38) {
                  uVar39 = *puVar46 ^ *puVar38;
                  bVar5 = (byte)uVar39;
                  bVar6 = (byte)(uVar39 >> 8);
                  bVar7 = (byte)(uVar39 >> 0x10);
                  bVar3 = (byte)(uVar39 >> 0x18);
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
                  goto joined_r0x017da6c0;
                }
                puVar38 = puVar38 + 1;
                puVar46 = puVar46 + 1;
              } while (puVar38 < puVar43);
            }
            goto LAB_017da644;
          }
          uVar39 = param_2[1] ^ *(uint *)(pcVar26 + iVar11 + 4);
          bVar5 = (byte)uVar39;
          bVar6 = (byte)(uVar39 >> 8);
          bVar7 = (byte)(uVar39 >> 0x10);
          bVar3 = (byte)(uVar39 >> 0x18);
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
          puVar46 = puVar29;
LAB_017da644:
          if (puVar38 < (uint *)((int)puVar15 + -1)) {
            if ((short)*puVar46 == (short)*puVar38) {
              puVar38 = (uint *)((int)puVar38 + 2);
              puVar46 = (uint *)((int)puVar46 + 2);
            }
          }
          if ((puVar38 < puVar15) && ((char)*puVar46 == (char)*puVar38)) {
            puVar38 = (uint *)((int)puVar38 + 1);
          }
          pcVar16 = (char *)((int)puVar38 - (int)puVar44);
        }
joined_r0x017da6c0:
        if (pcVar12 + iVar11 == (char *)((int)puVar29 + (int)pcVar16)) {
          puVar15 = (uint *)((int)puVar44 + (int)pcVar16);
          if (puVar15 < puVar18) {
            if (*puVar17 == *(uint *)((int)puVar44 + (int)pcVar16)) {
              puVar29 = puVar15 + 1;
              local_148 = puVar17 + 1;
              if (puVar29 < puVar18) {
                do {
                  if (*local_148 != *puVar29) {
                    uVar39 = *local_148 ^ *puVar29;
                    bVar5 = (byte)uVar39;
                    bVar6 = (byte)(uVar39 >> 8);
                    bVar7 = (byte)(uVar39 >> 0x10);
                    bVar3 = (byte)(uVar39 >> 0x18);
                    pcVar21 = (char *)((int)puVar29 +
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
                    goto LAB_017da888;
                  }
                  puVar29 = puVar29 + 1;
                  local_148 = local_148 + 1;
                } while (puVar29 < puVar18);
              }
              goto LAB_017da82c;
            }
            uVar39 = *(uint *)((int)puVar44 + (int)pcVar16) ^ *puVar17;
            bVar5 = (byte)uVar39;
            bVar6 = (byte)(uVar39 >> 8);
            bVar7 = (byte)(uVar39 >> 0x10);
            bVar3 = (byte)(uVar39 >> 0x18);
            pcVar21 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
            puVar29 = puVar15;
            local_148 = puVar17;
LAB_017da82c:
            if (puVar29 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar29) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar29 = (uint *)((int)puVar29 + 2);
              }
            }
            if ((puVar29 < param_3) && ((char)*local_148 == (char)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pcVar21 = (char *)((int)puVar29 - (int)puVar15);
          }
LAB_017da888:
          pcVar16 = pcVar16 + (int)pcVar21;
        }
        pcVar16 = pcVar16 + 4;
LAB_017da5a4:
        pcVar21 = pcVar16;
        if (pcVar10 < pcVar16) {
          *param_4 = uVar47 + (3 - (int)pcVar26);
          pcVar10 = pcVar16;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar16)) break;
        }
      }
      else {
        puVar15 = (uint *)(pcVar26 + iVar8);
        pcVar21 = *(char **)((int)puVar15 + (int)(pcVar10 + -3));
        if (pcVar21 == *(char **)((int)param_2 + (int)(pcVar10 + -3))) {
          puVar29 = param_2;
          if (param_2 < puVar18) {
            if (*(uint *)(pcVar26 + iVar8) == *param_2) {
              do {
                puVar29 = puVar29 + 1;
                puVar15 = puVar15 + 1;
                if (puVar18 <= puVar29) goto LAB_017da744;
              } while (*puVar15 == *puVar29);
              uVar39 = *puVar15 ^ *puVar29;
              bVar5 = (byte)uVar39;
              bVar6 = (byte)(uVar39 >> 8);
              bVar7 = (byte)(uVar39 >> 0x10);
              bVar3 = (byte)(uVar39 >> 0x18);
              pcVar16 = (char *)((int)puVar29 +
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
              uVar39 = *(uint *)(pcVar26 + iVar8) ^ *param_2;
              bVar5 = (byte)uVar39;
              bVar6 = (byte)(uVar39 >> 8);
              bVar7 = (byte)(uVar39 >> 0x10);
              bVar3 = (byte)(uVar39 >> 0x18);
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
LAB_017da744:
            if (puVar29 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar15 == (short)*puVar29) {
                puVar29 = (uint *)((int)puVar29 + 2);
                puVar15 = (uint *)((int)puVar15 + 2);
              }
            }
            if ((puVar29 < param_3) && ((char)*puVar15 == (char)*puVar29)) {
              puVar29 = (uint *)((int)puVar29 + 1);
            }
            pcVar16 = (char *)((int)puVar29 - (int)param_2);
          }
          goto LAB_017da5a4;
        }
      }
LAB_017da514:
      pcVar16 = pcVar10;
      iVar20 = iVar20 + 1;
      pcVar10 = pcVar16;
    } while (iVar20 != iVar28);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar16,pcVar21,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

