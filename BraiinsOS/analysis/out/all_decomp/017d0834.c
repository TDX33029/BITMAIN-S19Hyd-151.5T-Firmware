// FUN_017d0834 @ 017d0834 size=4708 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017d0834(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  char *pcVar28;
  uint uVar29;
  int *piVar30;
  uint *puVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  bool bVar53;
  bool bVar54;
  uint local_190;
  uint local_18c;
  uint local_15c;
  uint *local_140;
  char *local_13c;
  uint local_138;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar12 = *(int *)(param_1 + 4);
  uVar51 = *(uint *)(param_1 + 0x10);
  uVar7 = (int)param_2 - iVar12;
  local_2c = DAT_018ddaf8;
  iVar21 = *(int *)(param_1 + 0x5c);
  iVar22 = *(int *)(param_1 + 0x28);
  uVar29 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar53 = uVar29 < uVar7 - uVar51;
  iVar19 = *(int *)(param_1 + 0xc);
  if (bVar53) {
    local_15c = uVar7 - uVar29;
  }
  puVar13 = *(undefined4 **)(param_1 + 0xb4);
  iVar45 = puVar13[10];
  iVar8 = puVar13[9];
  uVar47 = *(uint *)(param_1 + 0xc4);
  lVar3 = (ulonglong)*param_2 * 0xbb000000;
  uVar29 = (uint)lVar3;
  if (!bVar53) {
    local_15c = uVar51;
  }
  uVar14 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
  iVar33 = *(int *)(param_1 + 0x24);
  uVar23 = uVar29 >> (0x38U - iVar8 & 0xff) | uVar14 << (iVar8 - 0x18U & 0xff) |
           uVar14 >> (0x18U - iVar8 & 0xff);
  uVar26 = uVar23 >> 8;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_15c = uVar51;
  }
  if (5 < uVar47) {
    uVar47 = 6;
  }
  iVar52 = iVar45 + uVar26 * 0x40;
  iVar9 = uVar26 * 0x40 + 0x20;
  HintPreloadData(iVar45 + iVar9);
  iVar10 = puVar13[0x17] + uVar26 * 0x100;
  HintPreloadData(iVar52);
  HintPreloadData(iVar10);
  HintPreloadData(puVar13[0x17] + uVar26 * 0x100 + 0x40);
  uVar51 = *(uint *)(param_1 + 0x54);
  iVar8 = 1 << (uVar47 & 0xff);
  iVar50 = -iVar33;
  uVar47 = iVar50 + 0x38;
  uVar48 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar29 = *(uint *)(param_1 + 0x1c);
    iVar42 = param_1 + 0x2c;
    iVar15 = iVar22;
    iVar32 = iVar21;
    local_138 = iVar12;
    if (uVar7 - uVar29 < 0x181) {
      local_190 = iVar33 - 0x18;
      local_18c = 0x18 - iVar33;
    }
    else {
      uVar14 = uVar29 + 0x60;
      if (uVar29 < uVar14) {
        local_190 = 0x20 - uVar47;
        local_18c = iVar50 + 0x18;
        uVar24 = uVar51;
        uVar25 = uVar48;
        while( true ) {
          uVar34 = *(uint *)(iVar42 + (uVar29 & 7) * 4);
          uVar35 = *(uint *)(uVar29 + iVar12 + 8);
          lVar3 = (ulonglong)uVar35 * 0xbb000000;
          uVar24 = *(int *)(uVar29 + iVar12 + 0xc) * -0x45000000 + uVar35 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar24;
          uVar35 = uVar34 >> 8;
          uVar25 = ((uint)lVar3 ^ uVar25) >> (uVar47 & 0xff) | uVar24 << (local_190 & 0xff) |
                   uVar24 >> (local_18c & 0xff);
          uVar24 = uVar25 >> 8;
          iVar33 = uVar24 * 0x40;
          iVar50 = uVar24 * 0x100;
          HintPreloadData(iVar22 + iVar33);
          HintPreloadData(iVar21 + iVar50);
          HintPreloadData(iVar22 + iVar33 + 0x20);
          HintPreloadData(iVar21 + iVar50 + 0x40);
          *(uint *)(iVar42 + (uVar29 & 7) * 4) = uVar25;
          uVar24 = *(byte *)(iVar22 + uVar35 * 0x40) - 1 & 0x3f;
          if (uVar24 == 0) {
            uVar24 = 0x3f;
          }
          *(char *)(iVar22 + uVar35 * 0x40) = (char)uVar24;
          *(char *)(iVar22 + uVar35 * 0x40 + uVar24) = (char)uVar34;
          *(uint *)(iVar21 + (uVar35 * 0x40 + uVar24) * 4) = uVar29;
          uVar29 = uVar29 + 1;
          if (uVar14 == uVar29) break;
          uVar25 = *(uint *)(param_1 + 0x50);
          uVar24 = *(uint *)(param_1 + 0x54);
        }
        iVar33 = *(int *)(param_1 + 0x24);
        iVar15 = *(int *)(param_1 + 0x28);
        iVar32 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_190 = iVar33 - 0x18;
        local_18c = 0x18 - iVar33;
      }
      uVar29 = uVar7 + -0x20;
      if ((char *)(uVar29 + iVar12) <= (char *)((int)param_2 + 1)) {
        pcVar16 = (char *)((int)param_2 + 1) + (1 - (int)(uVar29 + iVar12));
        if (pcVar16 < (char *)0x9) {
          uVar14 = uVar29 + (int)pcVar16;
        }
        else {
          uVar14 = uVar7 + -0x18;
        }
        if (uVar29 < uVar14) {
          uVar25 = *(uint *)(param_1 + 0x50);
          uVar35 = *(uint *)(param_1 + 0x54);
          uVar24 = uVar29;
          do {
            uVar36 = uVar24 & 7;
            piVar30 = (int *)(uVar24 + iVar12 + 4);
            puVar11 = (uint *)(uVar24 + iVar12);
            uVar24 = uVar24 + 1;
            lVar3 = (ulonglong)*puVar11 * 0xbb000000;
            uVar34 = *piVar30 * -0x45000000 + *puVar11 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar35;
            uVar37 = ((uint)lVar3 ^ uVar25) >> (0x38U - iVar33 & 0xff) |
                     uVar34 << (iVar33 - 0x18U & 0xff) | uVar34 >> (0x18U - iVar33 & 0xff);
            uVar34 = uVar37 >> 8;
            iVar50 = uVar34 * 0x40;
            iVar1 = uVar34 * 0x100;
            HintPreloadData(iVar15 + iVar50);
            HintPreloadData(iVar32 + iVar1);
            HintPreloadData(iVar15 + iVar50 + 0x20);
            HintPreloadData(iVar32 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar37;
          } while (uVar24 < uVar14);
        }
      }
    }
    if (uVar29 < uVar7) {
      do {
        uVar35 = *(uint *)(iVar42 + (uVar29 & 7) * 4);
        uVar24 = *(uint *)(uVar29 + local_138 + 8);
        lVar3 = (ulonglong)uVar24 * 0xbb000000;
        uVar14 = uVar35 >> 8;
        uVar24 = *(int *)(uVar29 + local_138 + 0xc) * -0x45000000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar25 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar33 & 0xff) |
                 uVar24 << (iVar33 - 0x18U & 0xff) | uVar24 >> (0x18U - iVar33 & 0xff);
        uVar24 = uVar25 >> 8;
        iVar50 = uVar24 * 0x40;
        iVar1 = uVar24 * 0x100;
        HintPreloadData(iVar15 + iVar50);
        HintPreloadData(iVar32 + iVar1);
        HintPreloadData(iVar15 + iVar50 + 0x20);
        HintPreloadData(iVar32 + iVar1 + 0x40);
        *(uint *)(iVar42 + (uVar29 & 7) * 4) = uVar25;
        uVar24 = *(byte *)(iVar15 + uVar14 * 0x40) - 1 & 0x3f;
        if (uVar24 == 0) {
          uVar24 = 0x3f;
        }
        *(char *)(iVar15 + uVar14 * 0x40) = (char)uVar24;
        *(char *)(iVar15 + uVar14 * 0x40 + uVar24) = (char)uVar35;
        *(uint *)(iVar32 + (uVar24 + uVar14 * 0x40) * 4) = uVar29;
        uVar29 = uVar29 + 1;
      } while (uVar7 != uVar29);
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    lVar3 = (ulonglong)param_2[2] * 0xbb000000;
    uVar51 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar51;
    uVar51 = ((uint)lVar3 ^ uVar48) >> (uVar47 & 0xff) | uVar51 << (local_190 & 0xff) |
             uVar51 >> (local_18c & 0xff);
    uVar29 = uVar51 >> 8;
    local_138 = *(uint *)(iVar42 + (uVar7 & 7) * 4);
    iVar33 = uVar29 * 0x40;
    iVar50 = uVar29 * 0x100;
    HintPreloadData(iVar22 + iVar33);
    HintPreloadData(iVar22 + iVar33 + 0x20);
    HintPreloadData(iVar21 + iVar50);
    HintPreloadData(iVar21 + iVar50 + 0x40);
    *(uint *)(iVar42 + (uVar7 & 7) * 4) = uVar51;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar7;
    local_138 = (uVar48 ^ uVar29) >> (uVar47 & 0xff) | (uVar14 ^ uVar51) << (0x20 - uVar47 & 0xff) |
                (uVar14 ^ uVar51) >> (iVar50 + 0x18U & 0xff);
  }
  uVar29 = local_138 >> 8;
  iVar21 = iVar21 + uVar29 * 0x100;
  iVar33 = iVar22 + uVar29 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar51 = (local_138 & 0xff) * 0x1010101;
  uVar47 = *(uint *)(iVar33 + 0x3c) ^ uVar51;
  uVar14 = *(uint *)(iVar33 + 0x38) ^ uVar51;
  uVar49 = *(uint *)(iVar33 + 0x34) ^ uVar51;
  uVar36 = *(uint *)(iVar33 + 0x30) ^ uVar51;
  uVar43 = *(uint *)(iVar33 + 0x18) ^ uVar51;
  uVar24 = *(uint *)(iVar33 + 0x2c) ^ uVar51;
  uVar37 = *(uint *)(iVar33 + 0x28) ^ uVar51;
  uVar25 = *(uint *)(iVar33 + 0x24) ^ uVar51;
  uVar38 = *(uint *)(iVar33 + 0x20) ^ uVar51;
  uVar35 = *(uint *)(iVar33 + 0x1c) ^ uVar51;
  uVar39 = *(uint *)(iVar33 + 0x14) ^ uVar51;
  uVar48 = *(uint *)(iVar33 + 0x10) ^ uVar51;
  uVar34 = *(uint *)(iVar33 + 0xc) ^ uVar51;
  uVar44 = *(uint *)(iVar33 + 4) ^ uVar51;
  uVar40 = *(uint *)(iVar33 + 8) ^ uVar51;
  uVar51 = *(uint *)(iVar22 + uVar29 * 0x40) ^ uVar51;
  uVar47 = (((((((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar47 | 0x80808080) + 0xfefefeff | uVar47) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c;
  uVar14 = (uint)*(byte *)(iVar22 + uVar29 * 0x40);
  uVar51 = (((uVar51 | 0x80808080) + 0xfefefeff | uVar51) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar47 == 0xffffffff && uVar51 == 0xffffffff) {
    bVar53 = true;
    iVar50 = 0;
  }
  else {
    uVar51 = ~uVar51;
    uVar25 = uVar14 & 0x3f;
    uVar47 = ~uVar47;
    uVar48 = -uVar25 & 0x3f;
    uVar24 = uVar51 >> uVar25 | uVar47 << (0x20 - uVar25 & 0xff) | uVar47 >> (uVar25 - 0x20 & 0xff)
             | uVar51 << uVar48;
    uVar51 = uVar47 << uVar48 | uVar51 << (uVar48 - 0x20 & 0xff) | uVar51 >> (0x20 - uVar48 & 0xff)
             | uVar47 >> uVar25;
    iVar50 = 0;
    do {
      if (uVar24 == 0) {
        bVar4 = (byte)uVar51;
        bVar5 = (byte)(uVar51 >> 8);
        bVar6 = (byte)(uVar51 >> 0x10);
        bVar2 = (byte)(uVar51 >> 0x18);
        iVar15 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar24;
        bVar5 = (byte)(uVar24 >> 8);
        bVar6 = (byte)(uVar24 >> 0x10);
        bVar2 = (byte)(uVar24 >> 0x18);
        iVar15 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar47 = uVar25 + iVar15 & 0x3f;
      if (uVar47 == 0) {
        bVar53 = true;
        iVar15 = iVar50;
      }
      else {
        uVar47 = *(uint *)(iVar21 + uVar47 * 4);
        if (uVar47 < local_15c) {
          bVar53 = true;
          break;
        }
        HintPreloadData(iVar12 + uVar47);
        iVar15 = iVar50 + 1;
        local_12c[iVar50] = uVar47;
        bVar53 = iVar8 != 1;
        iVar8 = iVar8 + -1;
      }
      bVar54 = uVar24 == 0;
      uVar24 = uVar24 & uVar24 - 1;
      uVar51 = uVar51 & uVar51 - bVar54;
      bVar54 = bVar53;
      if (uVar24 == 0 && uVar51 == 0) {
        bVar54 = false;
      }
      iVar50 = iVar15;
    } while (bVar54);
  }
  uVar51 = uVar14 - 1 & 0x3f;
  if (uVar51 == 0) {
    uVar51 = 0x3f;
  }
  *(char *)(iVar22 + uVar29 * 0x40) = (char)uVar51;
  *(char *)(iVar33 + uVar51) = (char)local_138;
  iVar22 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar22 + 1;
  *(int *)(iVar21 + uVar51 * 4) = iVar22;
  if (iVar50 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar30 = &iStack_130;
    iVar22 = 0;
    pcVar16 = (char *)0x3;
    do {
      while( true ) {
        piVar30 = piVar30 + 1;
        iVar21 = *piVar30;
        puVar11 = (uint *)(iVar12 + iVar21);
        if (*(int *)((int)puVar11 + (int)(pcVar16 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar16 + -3))) break;
LAB_017d0fc4:
        iVar22 = iVar22 + 1;
        if (iVar22 == iVar50) goto LAB_017d108c;
      }
      puVar20 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar12 + iVar21) == *param_2) {
          do {
            puVar20 = puVar20 + 1;
            puVar11 = puVar11 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar20) {
              if (((uint *)((int)param_3 + -1) <= puVar20) || ((short)*puVar11 != (short)*puVar20))
              goto LAB_017d17d4;
              goto LAB_017d17cc;
            }
          } while (*puVar11 == *puVar20);
          uVar29 = *puVar11 ^ *puVar20;
          bVar4 = (byte)uVar29;
          bVar5 = (byte)(uVar29 >> 8);
          bVar6 = (byte)(uVar29 >> 0x10);
          bVar2 = (byte)(uVar29 >> 0x18);
          local_13c = (char *)((int)puVar20 +
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
          uVar29 = *(uint *)(iVar12 + iVar21) ^ *param_2;
          bVar4 = (byte)uVar29;
          bVar5 = (byte)(uVar29 >> 8);
          bVar6 = (byte)(uVar29 >> 0x10);
          bVar2 = (byte)(uVar29 >> 0x18);
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
          if ((short)*param_2 == *(short *)(iVar12 + iVar21)) {
LAB_017d17cc:
            puVar20 = (uint *)((int)puVar20 + 2);
            puVar11 = (uint *)((int)puVar11 + 2);
LAB_017d17d4:
            if (puVar20 < param_3) goto LAB_017d101c;
          }
          else {
            if (param_3 <= param_2) goto LAB_017d0fc4;
LAB_017d101c:
            if ((char)*puVar11 == (char)*puVar20) goto LAB_017d146c;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar12 + iVar21)))
          goto LAB_017d0fc4;
LAB_017d146c:
          puVar20 = (uint *)((int)puVar20 + 1);
        }
        local_13c = (char *)((int)puVar20 - (int)param_2);
      }
      if (local_13c <= pcVar16) goto LAB_017d0fc4;
      *param_4 = uVar7 + (3 - iVar21);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017d1098;
      iVar22 = iVar22 + 1;
      pcVar16 = local_13c;
    } while (iVar22 != iVar50);
LAB_017d108c:
    local_13c = pcVar16;
  }
LAB_017d1098:
  uVar24 = (uVar23 & 0xff) * 0x1010101;
  uVar29 = *(uint *)(iVar52 + 0x3c) ^ uVar24;
  uVar51 = *(uint *)(iVar52 + 0x38) ^ uVar24;
  uVar43 = *(uint *)(iVar52 + 0x34) ^ uVar24;
  uVar36 = *(uint *)(iVar52 + 0x30) ^ uVar24;
  uVar23 = *(uint *)(iVar45 + iVar9) ^ uVar24;
  uVar25 = *(uint *)(iVar52 + 0x2c) ^ uVar24;
  uVar37 = *(uint *)(iVar52 + 0x28) ^ uVar24;
  uVar35 = *(uint *)(iVar52 + 0x24) ^ uVar24;
  uVar38 = *(uint *)(iVar52 + 0x18) ^ uVar24;
  uVar47 = *(uint *)(iVar52 + 0x1c) ^ uVar24;
  uVar14 = *(uint *)(iVar52 + 0x14) ^ uVar24;
  uVar48 = *(uint *)(iVar52 + 0x10) ^ uVar24;
  uVar40 = *(uint *)(iVar52 + 0xc) ^ uVar24;
  uVar39 = *(uint *)(iVar52 + 8) ^ uVar24;
  uVar34 = *(uint *)(iVar52 + 4) ^ uVar24;
  uVar24 = *(uint *)(iVar45 + uVar26 * 0x40) ^ uVar24;
  uVar51 = (((((((((uVar51 | 0x80808080) + 0xfefefeff | uVar51) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c;
  uVar29 = (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar47 | 0x80808080) + 0xfefefeff | uVar47) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if ((bool)(bVar53 & (uVar51 != 0xffffffff || uVar29 != 0xffffffff))) {
    uVar29 = ~uVar29;
    uVar51 = ~uVar51;
    uVar14 = *(byte *)(iVar45 + uVar26 * 0x40) & 0x3f;
    puVar11 = (uint *)(iVar12 + iVar19);
    uVar47 = -uVar14 & 0x3f;
    iVar22 = puVar13[1];
    uVar26 = uVar29 >> uVar14 | uVar51 << (0x20 - uVar14 & 0xff) | uVar51 >> (uVar14 - 0x20 & 0xff)
             | uVar29 << uVar47;
    pcVar16 = (char *)*puVar13;
    uVar29 = uVar51 << uVar47 | uVar29 << (uVar47 - 0x20 & 0xff) | uVar29 >> (0x20 - uVar47 & 0xff)
             | uVar51 >> uVar14;
    uVar51 = puVar13[3];
    iVar12 = 0;
    do {
      if (uVar26 == 0) {
        bVar4 = (byte)uVar29;
        bVar5 = (byte)(uVar29 >> 8);
        bVar6 = (byte)(uVar29 >> 0x10);
        bVar2 = (byte)(uVar29 >> 0x18);
        iVar21 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar26;
        bVar5 = (byte)(uVar26 >> 8);
        bVar6 = (byte)(uVar26 >> 0x10);
        bVar2 = (byte)(uVar26 >> 0x18);
        iVar21 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar47 = uVar14 + iVar21 & 0x3f;
      if (uVar47 == 0) {
        bVar53 = true;
        iVar21 = iVar12;
      }
      else {
        uVar47 = *(uint *)(iVar10 + uVar47 * 4);
        if (uVar47 < uVar51) break;
        HintPreloadData(iVar22 + uVar47);
        iVar21 = iVar12 + 1;
        local_12c[iVar12] = uVar47;
        bVar53 = iVar8 != 1;
        iVar8 = iVar8 + -1;
      }
      bVar54 = uVar26 == 0;
      uVar26 = uVar26 & uVar26 - 1;
      uVar29 = uVar29 & uVar29 - bVar54;
      if (uVar26 == 0 && uVar29 == 0) {
        bVar53 = false;
      }
      iVar12 = iVar21;
    } while (bVar53);
    if (iVar12 != 0) {
      piVar30 = &iStack_130;
      iVar21 = 0;
      puVar46 = param_2 + 1;
      puVar20 = (uint *)((int)param_3 + -3);
      do {
        piVar30 = piVar30 + 1;
        iVar8 = *piVar30;
        iVar45 = iVar22 + iVar8;
        if (*(uint *)(iVar22 + iVar8) == *param_2) {
          puVar31 = (uint *)(iVar45 + 4);
          puVar27 = (uint *)((int)puVar46 + ((int)pcVar16 - (int)puVar31));
          if (param_3 < puVar27) {
            puVar27 = param_3;
          }
          puVar41 = (uint *)((int)puVar27 + -3);
          if (puVar46 < puVar41) {
            if (*(uint *)(iVar45 + 4) == param_2[1]) {
              puVar18 = param_2 + 2;
              local_140 = (uint *)(iVar45 + 8);
              if (puVar18 < puVar41) {
                do {
                  if (*local_140 != *puVar18) {
                    uVar29 = *local_140 ^ *puVar18;
                    bVar4 = (byte)uVar29;
                    bVar5 = (byte)(uVar29 >> 8);
                    bVar6 = (byte)(uVar29 >> 0x10);
                    bVar2 = (byte)(uVar29 >> 0x18);
                    pcVar17 = (char *)((int)puVar18 +
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
                                                                  )) >> 3) - (int)puVar46));
                    goto joined_r0x017d1654;
                  }
                  puVar18 = puVar18 + 1;
                  local_140 = local_140 + 1;
                } while (puVar18 < puVar41);
              }
              goto LAB_017d15f0;
            }
            uVar29 = *(uint *)(iVar45 + 4) ^ param_2[1];
            bVar4 = (byte)uVar29;
            bVar5 = (byte)(uVar29 >> 8);
            bVar6 = (byte)(uVar29 >> 0x10);
            bVar2 = (byte)(uVar29 >> 0x18);
            pcVar17 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            puVar18 = puVar46;
            local_140 = puVar31;
LAB_017d15f0:
            if (puVar18 < (uint *)((int)puVar27 + -1)) {
              if ((short)*local_140 == (short)*puVar18) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar18 = (uint *)((int)puVar18 + 2);
              }
            }
            if ((puVar18 < puVar27) && ((char)*local_140 == (char)*puVar18)) {
              puVar18 = (uint *)((int)puVar18 + 1);
            }
            pcVar17 = (char *)((int)puVar18 - (int)puVar46);
          }
joined_r0x017d1654:
          if (pcVar16 == (char *)((int)puVar31 + (int)pcVar17)) {
            puVar27 = (uint *)((int)puVar46 + (int)pcVar17);
            if (puVar27 < puVar20) {
              if (*puVar11 == *(uint *)((int)puVar46 + (int)pcVar17)) {
                puVar31 = puVar27 + 1;
                local_140 = puVar11 + 1;
                if (puVar31 < puVar20) {
                  do {
                    if (*local_140 != *puVar31) {
                      uVar29 = *local_140 ^ *puVar31;
                      bVar4 = (byte)uVar29;
                      bVar5 = (byte)(uVar29 >> 8);
                      bVar6 = (byte)(uVar29 >> 0x10);
                      bVar2 = (byte)(uVar29 >> 0x18);
                      pcVar28 = (char *)((int)puVar31 +
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
                                        (int)puVar27));
                      goto LAB_017d168c;
                    }
                    puVar31 = puVar31 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar31 < puVar20);
                }
                goto LAB_017d16dc;
              }
              uVar29 = *puVar11 ^ *(uint *)((int)puVar46 + (int)pcVar17);
              bVar4 = (byte)uVar29;
              bVar5 = (byte)(uVar29 >> 8);
              bVar6 = (byte)(uVar29 >> 0x10);
              bVar2 = (byte)(uVar29 >> 0x18);
              pcVar28 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
              puVar31 = puVar27;
              local_140 = puVar11;
LAB_017d16dc:
              if (puVar31 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar31) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar31 = (uint *)((int)puVar31 + 2);
                }
              }
              if ((puVar31 < param_3) && ((char)*local_140 == (char)*puVar31)) {
                puVar31 = (uint *)((int)puVar31 + 1);
              }
              pcVar28 = (char *)((int)puVar31 - (int)puVar27);
            }
LAB_017d168c:
            pcVar17 = pcVar17 + (int)pcVar28;
          }
          pcVar17 = pcVar17 + 4;
          if (local_13c < pcVar17) {
            *param_4 = (int)(pcVar16 + uVar7 + (((3 - iVar19) - iVar22) - iVar8));
            local_13c = pcVar17;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar17)) break;
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 != iVar12);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

