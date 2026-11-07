// FUN_017e38f8 @ 017e38f8 size=4632 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint * FUN_017e38f8(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  char *pcVar25;
  uint *puVar26;
  int *piVar27;
  int iVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint *puVar44;
  int iVar45;
  uint uVar46;
  uint *puVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int *piVar52;
  bool bVar53;
  bool bVar54;
  uint local_18c;
  uint local_188;
  int local_164;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint local_138;
  uint *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  piVar29 = *(int **)(param_1 + 0xb4);
  uVar17 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 4);
  uVar49 = (int)param_2 - iVar8;
  uVar31 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar11 = *(int *)(param_1 + 0xc);
  if (uVar31 < uVar49 - uVar17) {
    uVar31 = uVar49 - uVar31;
  }
  else {
    uVar31 = uVar17;
  }
  iVar45 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar31 = uVar17;
  }
  lVar4 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar12 = (uint)lVar4;
  uVar50 = *(uint *)(param_1 + 0xc4);
  iVar48 = -iVar45;
  uVar40 = iVar48 + 0x38;
  uVar21 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20);
  iVar9 = piVar29[0x30];
  uVar18 = uVar12 >> (0x42U - iVar9 & 0xff) | uVar21 << (iVar9 - 0x22U & 0xff) |
           uVar21 >> (0x22U - iVar9 & 0xff);
  uVar17 = uVar50;
  if (5 < uVar50) {
    uVar17 = 6;
  }
  uVar51 = uVar50;
  if (6 < uVar50) {
    uVar51 = uVar50 - 6;
  }
  iVar9 = uVar18 * 0x10;
  HintPreloadData(piVar29[0x17] + iVar9);
  local_164 = 1 << (uVar17 & 0xff);
  uVar17 = (uint)(6 < uVar50);
  if (6 < uVar50) {
    uVar17 = uVar17 << (uVar51 & 0xff);
  }
  uVar50 = *(uint *)(param_1 + 0x50);
  uVar51 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar12 = *(uint *)(param_1 + 0x1c);
    iVar33 = param_1 + 0x2c;
    iVar13 = iVar20;
    iVar28 = iVar19;
    local_138 = iVar8;
    if (uVar49 - uVar12 < 0x181) {
      local_188 = 0x20 - uVar40;
    }
    else {
      uVar21 = uVar12 + 0x60;
      if (uVar12 < uVar21) {
        local_188 = 0x20 - uVar40;
        uVar22 = uVar51;
        uVar23 = uVar50;
        while( true ) {
          uVar30 = *(uint *)(iVar33 + (uVar12 & 7) * 4);
          uVar41 = *(uint *)(uVar12 + iVar8 + 8);
          lVar4 = (ulonglong)uVar41 * 0xbf9b0000;
          uVar22 = *(int *)(uVar12 + iVar8 + 0xc) * -0x40650000 + uVar41 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar22;
          uVar41 = uVar30 >> 8;
          uVar23 = ((uint)lVar4 ^ uVar23) >> (uVar40 & 0xff) | uVar22 << (local_188 & 0xff) |
                   uVar22 >> (iVar48 + 0x18U & 0xff);
          uVar22 = uVar23 >> 8;
          iVar45 = uVar22 * 0x40;
          iVar13 = uVar22 * 0x100;
          HintPreloadData(iVar20 + iVar45);
          HintPreloadData(iVar19 + iVar13);
          HintPreloadData(iVar20 + iVar45 + 0x20);
          HintPreloadData(iVar19 + iVar13 + 0x40);
          *(uint *)(iVar33 + (uVar12 & 7) * 4) = uVar23;
          uVar22 = *(byte *)(iVar20 + uVar41 * 0x40) - 1 & 0x3f;
          if (uVar22 == 0) {
            uVar22 = 0x3f;
          }
          *(char *)(iVar20 + uVar41 * 0x40) = (char)uVar22;
          *(char *)(iVar20 + uVar41 * 0x40 + uVar22) = (char)uVar30;
          *(uint *)(iVar19 + (uVar41 * 0x40 + uVar22) * 4) = uVar12;
          uVar12 = uVar12 + 1;
          if (uVar21 == uVar12) break;
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar22 = *(uint *)(param_1 + 0x54);
        }
        iVar45 = *(int *)(param_1 + 0x24);
        iVar13 = *(int *)(param_1 + 0x28);
        iVar28 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_188 = 0x20 - uVar40;
      }
      uVar12 = uVar49 + -0x20;
      if ((char *)(uVar12 + iVar8) <= (char *)((int)param_2 + 1)) {
        pcVar10 = (char *)((int)param_2 + 1) + (1 - (int)(uVar12 + iVar8));
        if (pcVar10 < (char *)0x9) {
          uVar21 = uVar12 + (int)pcVar10;
        }
        else {
          uVar21 = uVar49 + -0x18;
        }
        if (uVar12 < uVar21) {
          uVar23 = *(uint *)(param_1 + 0x50);
          uVar41 = *(uint *)(param_1 + 0x54);
          uVar22 = uVar12;
          do {
            uVar34 = uVar22 & 7;
            piVar52 = (int *)(uVar22 + iVar8 + 4);
            puVar14 = (uint *)(uVar22 + iVar8);
            uVar22 = uVar22 + 1;
            lVar4 = (ulonglong)*puVar14 * 0xbf9b0000;
            uVar30 = *piVar52 * -0x40650000 + *puVar14 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar41;
            uVar35 = ((uint)lVar4 ^ uVar23) >> (0x38U - iVar45 & 0xff) |
                     uVar30 << (iVar45 - 0x18U & 0xff) | uVar30 >> (0x18U - iVar45 & 0xff);
            uVar30 = uVar35 >> 8;
            iVar1 = uVar30 * 0x40;
            iVar2 = uVar30 * 0x100;
            HintPreloadData(iVar13 + iVar1);
            HintPreloadData(iVar28 + iVar2);
            HintPreloadData(iVar13 + iVar1 + 0x20);
            HintPreloadData(iVar28 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar34 * 4 + 0x2c) = uVar35;
          } while (uVar22 < uVar21);
        }
      }
    }
    local_18c = iVar48 + 0x18;
    if (uVar12 < uVar49) {
      do {
        uVar41 = *(uint *)(iVar33 + (uVar12 & 7) * 4);
        uVar22 = *(uint *)(uVar12 + local_138 + 8);
        lVar4 = (ulonglong)uVar22 * 0xbf9b0000;
        uVar21 = uVar41 >> 8;
        uVar22 = *(int *)(uVar12 + local_138 + 0xc) * -0x40650000 + uVar22 * -0x30e44324 +
                 (int)((ulonglong)lVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar23 = ((uint)lVar4 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar45 & 0xff) |
                 uVar22 << (iVar45 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar45 & 0xff);
        uVar22 = uVar23 >> 8;
        iVar48 = uVar22 * 0x40;
        iVar1 = uVar22 * 0x100;
        HintPreloadData(iVar13 + iVar48);
        HintPreloadData(iVar28 + iVar1);
        HintPreloadData(iVar13 + iVar48 + 0x20);
        HintPreloadData(iVar28 + iVar1 + 0x40);
        *(uint *)(iVar33 + (uVar12 & 7) * 4) = uVar23;
        uVar22 = *(byte *)(iVar13 + uVar21 * 0x40) - 1 & 0x3f;
        if (uVar22 == 0) {
          uVar22 = 0x3f;
        }
        *(char *)(iVar13 + uVar21 * 0x40) = (char)uVar22;
        *(char *)(iVar13 + uVar21 * 0x40 + uVar22) = (char)uVar41;
        *(uint *)(iVar28 + (uVar22 + uVar21 * 0x40) * 4) = uVar12;
        uVar12 = uVar12 + 1;
      } while (uVar49 != uVar12);
    }
    *(uint *)(param_1 + 0x1c) = uVar49;
    lVar4 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar51 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^
             uVar51;
    uVar21 = ((uint)lVar4 ^ uVar50) >> (uVar40 & 0xff) | uVar51 << (local_188 & 0xff) |
             uVar51 >> (local_18c & 0xff);
    uVar12 = uVar21 >> 8;
    local_138 = *(uint *)(iVar33 + (uVar49 & 7) * 4);
    iVar45 = uVar12 * 0x40;
    iVar48 = uVar12 * 0x100;
    HintPreloadData(iVar20 + iVar45);
    HintPreloadData(iVar20 + iVar45 + 0x20);
    HintPreloadData(iVar19 + iVar48);
    HintPreloadData(iVar19 + iVar48 + 0x40);
    *(uint *)(iVar33 + (uVar49 & 7) * 4) = uVar21;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar49;
    local_138 = (uVar50 ^ uVar12) >> (uVar40 & 0xff) | (uVar51 ^ uVar21) << (0x20 - uVar40 & 0xff) |
                (uVar51 ^ uVar21) >> (iVar48 + 0x18U & 0xff);
  }
  uVar12 = local_138 >> 8;
  iVar19 = iVar19 + uVar12 * 0x100;
  iVar45 = iVar20 + uVar12 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar21 = (local_138 & 0xff) * 0x1010101;
  uVar40 = *(uint *)(iVar45 + 0x3c) ^ uVar21;
  uVar50 = *(uint *)(iVar45 + 0x38) ^ uVar21;
  uVar46 = *(uint *)(iVar45 + 0x34) ^ uVar21;
  uVar34 = *(uint *)(iVar45 + 0x30) ^ uVar21;
  uVar42 = *(uint *)(iVar45 + 0x18) ^ uVar21;
  uVar22 = *(uint *)(iVar45 + 0x2c) ^ uVar21;
  uVar35 = *(uint *)(iVar45 + 0x28) ^ uVar21;
  uVar23 = *(uint *)(iVar45 + 0x24) ^ uVar21;
  uVar36 = *(uint *)(iVar45 + 0x20) ^ uVar21;
  uVar41 = *(uint *)(iVar45 + 0x1c) ^ uVar21;
  uVar37 = *(uint *)(iVar45 + 0x14) ^ uVar21;
  uVar51 = *(uint *)(iVar45 + 0x10) ^ uVar21;
  uVar30 = *(uint *)(iVar45 + 0xc) ^ uVar21;
  uVar43 = *(uint *)(iVar45 + 4) ^ uVar21;
  uVar38 = *(uint *)(iVar45 + 8) ^ uVar21;
  uVar21 = *(uint *)(iVar20 + uVar12 * 0x40) ^ uVar21;
  uVar40 = (((((((((uVar50 | 0x80808080) + 0xfefefeff | uVar50) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar46 | 0x80808080) + 0xfefefeff | uVar46) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c;
  uVar50 = (uint)*(byte *)(iVar20 + uVar12 * 0x40);
  uVar21 = (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar51 | 0x80808080) + 0xfefefeff | uVar51) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar40 == 0xffffffff && uVar21 == 0xffffffff) {
    iVar48 = 0;
  }
  else {
    uVar21 = ~uVar21;
    uVar23 = uVar50 & 0x3f;
    uVar40 = ~uVar40;
    uVar51 = -uVar23 & 0x3f;
    uVar22 = uVar21 >> uVar23 | uVar40 << (0x20 - uVar23 & 0xff) | uVar40 >> (uVar23 - 0x20 & 0xff)
             | uVar21 << uVar51;
    uVar21 = uVar40 << uVar51 | uVar21 << (uVar51 - 0x20 & 0xff) | uVar21 >> (0x20 - uVar51 & 0xff)
             | uVar40 >> uVar23;
    iVar48 = 0;
    do {
      if (uVar22 == 0) {
        bVar5 = (byte)uVar21;
        bVar6 = (byte)(uVar21 >> 8);
        bVar7 = (byte)(uVar21 >> 0x10);
        bVar3 = (byte)(uVar21 >> 0x18);
        iVar13 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
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
        bVar5 = (byte)uVar22;
        bVar6 = (byte)(uVar22 >> 8);
        bVar7 = (byte)(uVar22 >> 0x10);
        bVar3 = (byte)(uVar22 >> 0x18);
        iVar13 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
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
      uVar40 = uVar23 + iVar13 & 0x3f;
      if (uVar40 == 0) {
        bVar53 = true;
        iVar13 = iVar48;
      }
      else {
        uVar40 = *(uint *)(iVar19 + uVar40 * 4);
        if (uVar40 < uVar31) break;
        HintPreloadData(iVar8 + uVar40);
        iVar13 = iVar48 + 1;
        local_12c[iVar48] = uVar40;
        bVar53 = local_164 != 1;
        local_164 = local_164 + -1;
      }
      bVar54 = uVar22 == 0;
      uVar22 = uVar22 & uVar22 - 1;
      uVar21 = uVar21 & uVar21 - bVar54;
      if (uVar22 == 0 && uVar21 == 0) {
        bVar53 = false;
      }
      iVar48 = iVar13;
    } while (bVar53);
  }
  uVar31 = uVar50 - 1 & 0x3f;
  if (uVar31 == 0) {
    uVar31 = 0x3f;
  }
  *(char *)(iVar20 + uVar12 * 0x40) = (char)uVar31;
  *(char *)(iVar45 + uVar31) = (char)local_138;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar19 + uVar31 * 4) = iVar20;
  if (iVar48 == 0) {
    local_140 = (uint *)0x3;
  }
  else {
    piVar52 = &iStack_130;
    iVar19 = 0;
    puVar14 = (uint *)0x3;
    do {
      piVar52 = piVar52 + 1;
      iVar20 = *piVar52;
      puVar47 = (uint *)(iVar8 + iVar20);
      if (*(int *)((int)puVar47 + (int)((int)puVar14 + -3)) ==
          *(int *)((int)param_2 + (int)puVar14 + -3)) {
        local_140 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar8 + iVar20) == *param_2) {
            do {
              local_140 = local_140 + 1;
              puVar47 = puVar47 + 1;
              if ((uint *)((int)param_3 + -3) <= local_140) {
                if (((uint *)((int)param_3 + -1) <= local_140) ||
                   ((short)*puVar47 != (short)*local_140)) goto LAB_017e47f0;
                goto LAB_017e47e8;
              }
            } while (*puVar47 == *local_140);
            uVar31 = *puVar47 ^ *local_140;
            bVar5 = (byte)uVar31;
            bVar6 = (byte)(uVar31 >> 8);
            bVar7 = (byte)(uVar31 >> 0x10);
            bVar3 = (byte)(uVar31 >> 0x18);
            local_140 = (uint *)((int)local_140 +
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
            uVar31 = *(uint *)(iVar8 + iVar20) ^ *param_2;
            bVar5 = (byte)uVar31;
            bVar6 = (byte)(uVar31 >> 8);
            bVar7 = (byte)(uVar31 >> 0x10);
            bVar3 = (byte)(uVar31 >> 0x18);
            local_140 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(iVar8 + iVar20) == (short)*param_2) {
LAB_017e47e8:
              local_140 = (uint *)((int)local_140 + 2);
              puVar47 = (uint *)((int)puVar47 + 2);
LAB_017e47f0:
              if (local_140 < param_3) goto LAB_017e40b8;
            }
            else {
              if (param_3 <= param_2) goto LAB_017e4060;
LAB_017e40b8:
              if ((char)*puVar47 == (char)*local_140) goto LAB_017e4574;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar8 + iVar20)))
            goto LAB_017e4060;
LAB_017e4574:
            local_140 = (uint *)((int)local_140 + 1);
          }
          local_140 = (uint *)((int)local_140 - (int)param_2);
        }
        if (puVar14 < local_140) {
          *param_4 = uVar49 + (3 - iVar20);
          puVar14 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017e4060:
      local_140 = puVar14;
      iVar19 = iVar19 + 1;
      puVar14 = local_140;
    } while (iVar19 != iVar48);
  }
  uVar17 = uVar17 + local_164;
  iVar19 = piVar29[0x17];
  iVar48 = piVar29[1];
  iVar20 = uVar18 * 4 + 0x40000003;
  iVar45 = piVar29[0x19];
  piVar52 = (int *)(iVar19 + iVar9);
  HintPreloadData(iVar48 + *piVar52);
  HintPreloadData(iVar45 + (*(uint *)(iVar19 + iVar20 * 4) >> 8) * 4);
  HintPreloadData(iVar48 + piVar52[1]);
  puVar14 = (uint *)piVar52[2];
  HintPreloadData((char *)(iVar48 + (int)puVar14));
  if (uVar17 != 0) {
    pcVar10 = (char *)*piVar29;
    puVar26 = (uint *)(iVar8 + iVar11);
    puVar47 = (uint *)((int)param_3 + -3);
    puVar39 = param_2 + 1;
    puVar14 = param_2;
    uVar31 = 0;
    uVar12 = uVar17;
    if (2 < uVar17) {
      uVar12 = 3;
    }
    do {
      while( true ) {
        uVar18 = uVar31;
        iVar8 = *piVar52;
        if (iVar8 == 0) {
          piVar29 = (int *)0x0;
          goto LAB_017e4404;
        }
        iVar9 = iVar48 + iVar8;
        if (*(uint *)(iVar48 + iVar8) == *param_2) break;
LAB_017e41e4:
        piVar52 = piVar52 + 1;
        uVar31 = uVar18 + 1;
        if (uVar12 <= uVar18 + 1) goto LAB_017e42b0;
      }
      puVar32 = (uint *)(iVar9 + 4);
      puVar14 = (uint *)((int)puVar39 + ((int)pcVar10 - (int)puVar32));
      if (param_3 < puVar14) {
        puVar14 = param_3;
      }
      puVar44 = (uint *)((int)puVar14 + -3);
      if (puVar39 < puVar44) {
        if (*(uint *)(iVar9 + 4) == param_2[1]) {
          puVar15 = param_2 + 2;
          local_144 = (uint *)(iVar9 + 8);
          if (puVar15 < puVar44) {
            do {
              if (*local_144 != *puVar15) {
                uVar31 = *local_144 ^ *puVar15;
                bVar5 = (byte)uVar31;
                bVar6 = (byte)(uVar31 >> 8);
                bVar7 = (byte)(uVar31 >> 0x10);
                bVar3 = (byte)(uVar31 >> 0x18);
                pcVar16 = (char *)((int)puVar15 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                           bVar6 >> 1 & 1) << 1 |
                                                                          bVar6 >> 2 & 1) << 1 |
                                                                         bVar6 >> 3 & 1) << 1 |
                                                                        bVar6 >> 4 & 1) << 1 |
                                                                       bVar6 >> 5 & 1) << 1 |
                                                                      bVar6 >> 6 & 1) << 1 |
                                                                     bVar6 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                    bVar7 >> 1 & 1) << 1 |
                                                                   bVar7 >> 2 & 1) << 1 |
                                                                  bVar7 >> 3 & 1) << 1 |
                                                                 bVar7 >> 4 & 1) << 1 |
                                                                bVar7 >> 5 & 1) << 1 |
                                                               bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar39));
                goto joined_r0x017e44b0;
              }
              puVar15 = puVar15 + 1;
              local_144 = local_144 + 1;
            } while (puVar15 < puVar44);
          }
          goto LAB_017e444c;
        }
        uVar31 = *(uint *)(iVar9 + 4) ^ param_2[1];
        bVar5 = (byte)uVar31;
        bVar6 = (byte)(uVar31 >> 8);
        bVar7 = (byte)(uVar31 >> 0x10);
        bVar3 = (byte)(uVar31 >> 0x18);
        pcVar16 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7)) >> 3);
      }
      else {
        puVar15 = puVar39;
        local_144 = puVar32;
LAB_017e444c:
        if (puVar15 < (uint *)((int)puVar14 + -1)) {
          if ((short)*local_144 == (short)*puVar15) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar15 = (uint *)((int)puVar15 + 2);
          }
        }
        if ((puVar15 < puVar14) && ((char)*local_144 == (char)*puVar15)) {
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        pcVar16 = (char *)((int)puVar15 - (int)puVar39);
      }
joined_r0x017e44b0:
      if (pcVar10 == (char *)((int)puVar32 + (int)pcVar16)) {
        puVar14 = (uint *)((int)puVar39 + (int)pcVar16);
        if (puVar14 < puVar47) {
          if (*puVar26 == *(uint *)((int)puVar39 + (int)pcVar16)) {
            puVar32 = puVar14 + 1;
            local_144 = puVar26 + 1;
            if (puVar32 < puVar47) {
              do {
                if (*local_144 != *puVar32) {
                  uVar31 = *local_144 ^ *puVar32;
                  bVar5 = (byte)uVar31;
                  bVar6 = (byte)(uVar31 >> 8);
                  bVar7 = (byte)(uVar31 >> 0x10);
                  bVar3 = (byte)(uVar31 >> 0x18);
                  pcVar25 = (char *)((int)puVar32 +
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
                                    (int)puVar14));
                  goto LAB_017e4610;
                }
                puVar32 = puVar32 + 1;
                local_144 = local_144 + 1;
              } while (puVar32 < puVar47);
            }
            goto LAB_017e45c4;
          }
          uVar31 = *puVar26 ^ *(uint *)((int)puVar39 + (int)pcVar16);
          bVar5 = (byte)uVar31;
          bVar6 = (byte)(uVar31 >> 8);
          bVar7 = (byte)(uVar31 >> 0x10);
          bVar3 = (byte)(uVar31 >> 0x18);
          pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
          puVar32 = puVar14;
          local_144 = puVar26;
LAB_017e45c4:
          if (puVar32 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_144 == (short)*puVar32) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar32 = (uint *)((int)puVar32 + 2);
            }
          }
          if ((puVar32 < param_3) && ((char)*local_144 == (char)*puVar32)) {
            puVar32 = (uint *)((int)puVar32 + 1);
          }
          pcVar25 = (char *)((int)puVar32 - (int)puVar14);
        }
LAB_017e4610:
        pcVar16 = pcVar16 + (int)pcVar25;
      }
      puVar14 = (uint *)(pcVar16 + 4);
      if (puVar14 <= local_140) goto LAB_017e41e4;
      piVar29 = (int *)(pcVar10 + uVar49 + (((3 - iVar11) - iVar48) - iVar8));
      *param_4 = (int)piVar29;
      if (param_3 == (uint *)((int)param_2 + (int)puVar14)) goto LAB_017e4ac8;
      piVar52 = piVar52 + 1;
      uVar31 = uVar18 + 1;
      local_140 = puVar14;
    } while (uVar18 + 1 < uVar12);
LAB_017e42b0:
    piVar29 = *(int **)(iVar19 + iVar20 * 4);
    uVar17 = uVar17 - (uVar18 + 1);
    if (((uint)piVar29 & 0xff) < uVar17) {
      uVar17 = (uint)piVar29 & 0xff;
    }
    if (uVar17 != 0) {
      piVar52 = (int *)(iVar45 + ((uint)piVar29 >> 8) * 4);
      piVar27 = (int *)(iVar45 + (((uint)piVar29 >> 8) + uVar17) * 4);
      piVar29 = piVar52;
      do {
        piVar24 = piVar29 + 1;
        HintPreloadData(iVar48 + *piVar29);
        piVar29 = piVar24;
      } while (piVar24 != piVar27);
      puVar39 = param_2 + 1;
      local_134 = local_140;
      puVar47 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar29 = piVar52;
          iVar19 = *piVar29;
          iVar8 = iVar48 + iVar19;
          puVar14 = *(uint **)(iVar48 + iVar19);
          if (puVar14 == (uint *)*param_2) break;
LAB_017e434c:
          piVar52 = piVar29 + 1;
          if (piVar29 + 1 == piVar27) goto LAB_017e4400;
        }
        puVar32 = (uint *)(iVar8 + 4);
        puVar14 = (uint *)((int)puVar39 + ((int)pcVar10 - (int)puVar32));
        if (param_3 < puVar14) {
          puVar14 = param_3;
        }
        puVar44 = (uint *)((int)puVar14 + -3);
        if (puVar39 < puVar44) {
          if (*(uint *)(iVar8 + 4) == param_2[1]) {
            puVar15 = param_2 + 2;
            local_13c = (uint *)(iVar8 + 8);
            if (puVar15 < puVar44) {
              do {
                if (*local_13c != *puVar15) {
                  uVar31 = *local_13c ^ *puVar15;
                  bVar5 = (byte)uVar31;
                  bVar6 = (byte)(uVar31 >> 8);
                  bVar7 = (byte)(uVar31 >> 0x10);
                  bVar3 = (byte)(uVar31 >> 0x18);
                  pcVar16 = (char *)((int)puVar15 +
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
                                    (int)puVar39));
                  goto joined_r0x017e4700;
                }
                puVar15 = puVar15 + 1;
                local_13c = local_13c + 1;
              } while (puVar15 < puVar44);
            }
            goto LAB_017e469c;
          }
          uVar31 = *(uint *)(iVar8 + 4) ^ param_2[1];
          bVar5 = (byte)uVar31;
          bVar6 = (byte)(uVar31 >> 8);
          bVar7 = (byte)(uVar31 >> 0x10);
          bVar3 = (byte)(uVar31 >> 0x18);
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
          puVar15 = puVar39;
          local_13c = puVar32;
LAB_017e469c:
          if (puVar15 < (uint *)((int)puVar14 + -1)) {
            if ((short)*local_13c == (short)*puVar15) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar15 = (uint *)((int)puVar15 + 2);
            }
          }
          if ((puVar15 < puVar14) && ((char)*local_13c == (char)*puVar15)) {
            puVar15 = (uint *)((int)puVar15 + 1);
          }
          pcVar16 = (char *)((int)puVar15 - (int)puVar39);
        }
joined_r0x017e4700:
        if (pcVar10 == (char *)((int)puVar32 + (int)pcVar16)) {
          puVar14 = (uint *)((int)puVar39 + (int)pcVar16);
          if (puVar14 < puVar47) {
            if (*puVar26 == *(uint *)((int)puVar39 + (int)pcVar16)) {
              puVar32 = puVar14 + 1;
              local_13c = puVar26 + 1;
              if (puVar32 < puVar47) {
                do {
                  if (*local_13c != *puVar32) {
                    uVar31 = *local_13c ^ *puVar32;
                    bVar5 = (byte)uVar31;
                    bVar6 = (byte)(uVar31 >> 8);
                    bVar7 = (byte)(uVar31 >> 0x10);
                    bVar3 = (byte)(uVar31 >> 0x18);
                    pcVar25 = (char *)((int)puVar32 +
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
                                                                  )) >> 3) - (int)puVar14));
                    goto LAB_017e4738;
                  }
                  puVar32 = puVar32 + 1;
                  local_13c = local_13c + 1;
                } while (puVar32 < puVar47);
              }
              goto LAB_017e4788;
            }
            uVar31 = *puVar26 ^ *(uint *)((int)puVar39 + (int)pcVar16);
            bVar5 = (byte)uVar31;
            bVar6 = (byte)(uVar31 >> 8);
            bVar7 = (byte)(uVar31 >> 0x10);
            bVar3 = (byte)(uVar31 >> 0x18);
            pcVar25 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
            puVar32 = puVar14;
            local_13c = puVar26;
LAB_017e4788:
            if (puVar32 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar32) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar32 = (uint *)((int)puVar32 + 2);
              }
            }
            if ((puVar32 < param_3) && ((char)*local_13c == (char)*puVar32)) {
              puVar32 = (uint *)((int)puVar32 + 1);
            }
            pcVar25 = (char *)((int)puVar32 - (int)puVar14);
          }
LAB_017e4738:
          pcVar16 = pcVar16 + (int)pcVar25;
        }
        puVar14 = (uint *)(pcVar16 + 4);
        if (puVar14 <= local_134) goto LAB_017e434c;
        *param_4 = (int)(pcVar10 + uVar49 + (((3 - iVar11) - iVar48) - iVar19));
        if (param_3 == (uint *)((int)param_2 + (int)puVar14)) goto LAB_017e4ac8;
        piVar52 = piVar29 + 1;
        local_134 = puVar14;
      } while (piVar29 + 1 != piVar27);
LAB_017e4400:
      piVar29 = piVar29 + 1;
      local_140 = local_134;
    }
  }
LAB_017e4404:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar29,puVar14,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017e4ac8:
  local_140 = puVar14;
  goto LAB_017e4404;
}

