// FUN_017cf5c8 @ 017cf5c8 size=4704 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017cf5c8(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  char *pcVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint *puVar42;
  undefined4 *puVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  bool bVar52;
  bool bVar53;
  uint local_194;
  uint local_190;
  int local_164;
  uint local_15c;
  uint *local_140;
  char *local_13c;
  uint local_138;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar9 = *(int *)(param_1 + 4);
  uVar24 = *(uint *)(param_1 + 0x10);
  uVar7 = (int)param_2 - iVar9;
  local_2c = DAT_018ddaf8;
  iVar18 = *(int *)(param_1 + 0x5c);
  iVar19 = *(int *)(param_1 + 0x28);
  uVar10 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar52 = uVar10 < uVar7 - uVar24;
  iVar15 = *(int *)(param_1 + 0xc);
  if (bVar52) {
    local_15c = uVar7 - uVar10;
  }
  puVar43 = *(undefined4 **)(param_1 + 0xb4);
  iVar44 = puVar43[9];
  uVar50 = *(uint *)(param_1 + 0xc4);
  lVar3 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar29 = (uint)lVar3;
  uVar10 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
  if (!bVar52) {
    local_15c = uVar24;
  }
  iVar31 = *(int *)(param_1 + 0x24);
  iVar41 = puVar43[10];
  uVar16 = uVar29 >> (0x38U - iVar44 & 0xff) | uVar10 << (iVar44 - 0x18U & 0xff) |
           uVar10 >> (0x18U - iVar44 & 0xff);
  uVar49 = uVar16 >> 8;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_15c = uVar24;
  }
  if (5 < uVar50) {
    uVar50 = 6;
  }
  iVar25 = iVar41 + uVar49 * 0x40;
  iVar45 = uVar49 * 0x40 + 0x20;
  HintPreloadData(iVar41 + iVar45);
  iVar46 = puVar43[0x17] + uVar49 * 0x100;
  HintPreloadData(iVar25);
  HintPreloadData(iVar46);
  HintPreloadData(puVar43[0x17] + uVar49 * 0x100 + 0x40);
  uVar24 = *(uint *)(param_1 + 0x54);
  local_164 = 1 << (uVar50 & 0xff);
  iVar44 = -iVar31;
  uVar50 = iVar44 + 0x38;
  uVar51 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar47 = param_1 + 0x2c;
    iVar11 = iVar19;
    iVar28 = iVar18;
    local_138 = iVar9;
    if (uVar7 - uVar10 < 0x181) {
      local_194 = iVar31 - 0x18;
      local_190 = 0x18 - iVar31;
    }
    else {
      uVar29 = uVar10 + 0x60;
      if (uVar10 < uVar29) {
        local_194 = 0x20 - uVar50;
        local_190 = iVar44 + 0x18;
        uVar20 = uVar51;
        uVar21 = uVar24;
        while( true ) {
          uVar30 = *(uint *)(iVar47 + (uVar10 & 7) * 4);
          uVar38 = *(uint *)(uVar10 + iVar9 + 8);
          lVar3 = (ulonglong)uVar38 * 0xbf9b0000;
          uVar21 = *(int *)(uVar10 + iVar9 + 0xc) * -0x40650000 + uVar38 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar21;
          uVar38 = uVar30 >> 8;
          uVar21 = ((uint)lVar3 ^ uVar20) >> (uVar50 & 0xff) | uVar21 << (local_194 & 0xff) |
                   uVar21 >> (local_190 & 0xff);
          uVar20 = uVar21 >> 8;
          iVar44 = uVar20 * 0x40;
          iVar31 = uVar20 * 0x100;
          HintPreloadData(iVar19 + iVar44);
          HintPreloadData(iVar18 + iVar31);
          HintPreloadData(iVar19 + iVar44 + 0x20);
          HintPreloadData(iVar18 + iVar31 + 0x40);
          *(uint *)(iVar47 + (uVar10 & 7) * 4) = uVar21;
          uVar20 = *(byte *)(iVar19 + uVar38 * 0x40) - 1 & 0x3f;
          if (uVar20 == 0) {
            uVar20 = 0x3f;
          }
          *(char *)(iVar19 + uVar38 * 0x40) = (char)uVar20;
          *(char *)(iVar19 + uVar38 * 0x40 + uVar20) = (char)uVar30;
          *(uint *)(iVar18 + (uVar38 * 0x40 + uVar20) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar29 == uVar10) break;
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar21 = *(uint *)(param_1 + 0x54);
        }
        iVar31 = *(int *)(param_1 + 0x24);
        iVar11 = *(int *)(param_1 + 0x28);
        iVar28 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_194 = iVar31 - 0x18;
        local_190 = 0x18 - iVar31;
      }
      uVar10 = uVar7 + -0x20;
      if ((char *)(uVar10 + iVar9) <= (char *)((int)param_2 + 1)) {
        pcVar12 = (char *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar9));
        if (pcVar12 < (char *)0x9) {
          uVar29 = uVar10 + (int)pcVar12;
        }
        else {
          uVar29 = uVar7 + -0x18;
        }
        if (uVar10 < uVar29) {
          uVar21 = *(uint *)(param_1 + 0x50);
          uVar38 = *(uint *)(param_1 + 0x54);
          uVar20 = uVar10;
          do {
            uVar32 = uVar20 & 7;
            piVar26 = (int *)(uVar20 + iVar9 + 4);
            puVar8 = (uint *)(uVar20 + iVar9);
            uVar20 = uVar20 + 1;
            lVar3 = (ulonglong)*puVar8 * 0xbf9b0000;
            uVar30 = *piVar26 * -0x40650000 + *puVar8 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar38;
            uVar33 = ((uint)lVar3 ^ uVar21) >> (0x38U - iVar31 & 0xff) |
                     uVar30 << (iVar31 - 0x18U & 0xff) | uVar30 >> (0x18U - iVar31 & 0xff);
            uVar30 = uVar33 >> 8;
            iVar44 = uVar30 * 0x40;
            iVar1 = uVar30 * 0x100;
            HintPreloadData(iVar11 + iVar44);
            HintPreloadData(iVar28 + iVar1);
            HintPreloadData(iVar11 + iVar44 + 0x20);
            HintPreloadData(iVar28 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar32 * 4 + 0x2c) = uVar33;
          } while (uVar20 < uVar29);
        }
      }
    }
    if (uVar10 < uVar7) {
      do {
        uVar38 = *(uint *)(iVar47 + (uVar10 & 7) * 4);
        uVar20 = *(uint *)(uVar10 + local_138 + 8);
        lVar3 = (ulonglong)uVar20 * 0xbf9b0000;
        uVar29 = uVar38 >> 8;
        uVar20 = *(int *)(uVar10 + local_138 + 0xc) * -0x40650000 + uVar20 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar21 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar31 & 0xff) |
                 uVar20 << (iVar31 - 0x18U & 0xff) | uVar20 >> (0x18U - iVar31 & 0xff);
        uVar20 = uVar21 >> 8;
        iVar44 = uVar20 * 0x40;
        iVar1 = uVar20 * 0x100;
        HintPreloadData(iVar11 + iVar44);
        HintPreloadData(iVar28 + iVar1);
        HintPreloadData(iVar11 + iVar44 + 0x20);
        HintPreloadData(iVar28 + iVar1 + 0x40);
        *(uint *)(iVar47 + (uVar10 & 7) * 4) = uVar21;
        uVar20 = *(byte *)(iVar11 + uVar29 * 0x40) - 1 & 0x3f;
        if (uVar20 == 0) {
          uVar20 = 0x3f;
        }
        *(char *)(iVar11 + uVar29 * 0x40) = (char)uVar20;
        *(char *)(iVar11 + uVar29 * 0x40 + uVar20) = (char)uVar38;
        *(uint *)(iVar28 + (uVar20 + uVar29 * 0x40) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    lVar3 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar24 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar24;
    uVar24 = ((uint)lVar3 ^ uVar51) >> (uVar50 & 0xff) | uVar24 << (local_194 & 0xff) |
             uVar24 >> (local_190 & 0xff);
    uVar10 = uVar24 >> 8;
    local_138 = *(uint *)(iVar47 + (uVar7 & 7) * 4);
    iVar44 = uVar10 * 0x40;
    iVar31 = uVar10 * 0x100;
    HintPreloadData(iVar19 + iVar44);
    HintPreloadData(iVar19 + iVar44 + 0x20);
    HintPreloadData(iVar18 + iVar31);
    HintPreloadData(iVar18 + iVar31 + 0x40);
    *(uint *)(iVar47 + (uVar7 & 7) * 4) = uVar24;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar7;
    local_138 = (uVar51 ^ uVar29) >> (uVar50 & 0xff) | (uVar10 ^ uVar24) << (0x20 - uVar50 & 0xff) |
                (uVar10 ^ uVar24) >> (iVar44 + 0x18U & 0xff);
  }
  uVar10 = local_138 >> 8;
  iVar18 = iVar18 + uVar10 * 0x100;
  iVar44 = iVar19 + uVar10 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar24 = (local_138 & 0xff) * 0x1010101;
  uVar29 = *(uint *)(iVar44 + 0x3c) ^ uVar24;
  uVar50 = *(uint *)(iVar44 + 0x38) ^ uVar24;
  uVar48 = *(uint *)(iVar44 + 0x34) ^ uVar24;
  uVar32 = *(uint *)(iVar44 + 0x30) ^ uVar24;
  uVar39 = *(uint *)(iVar44 + 0x18) ^ uVar24;
  uVar20 = *(uint *)(iVar44 + 0x2c) ^ uVar24;
  uVar33 = *(uint *)(iVar44 + 0x28) ^ uVar24;
  uVar21 = *(uint *)(iVar44 + 0x24) ^ uVar24;
  uVar34 = *(uint *)(iVar44 + 0x20) ^ uVar24;
  uVar38 = *(uint *)(iVar44 + 0x1c) ^ uVar24;
  uVar35 = *(uint *)(iVar44 + 0x14) ^ uVar24;
  uVar51 = *(uint *)(iVar44 + 0x10) ^ uVar24;
  uVar30 = *(uint *)(iVar44 + 0xc) ^ uVar24;
  uVar40 = *(uint *)(iVar44 + 4) ^ uVar24;
  uVar36 = *(uint *)(iVar44 + 8) ^ uVar24;
  uVar24 = *(uint *)(iVar19 + uVar10 * 0x40) ^ uVar24;
  uVar29 = (((((((((uVar50 | 0x80808080) + 0xfefefeff | uVar50) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c;
  uVar50 = (uint)*(byte *)(iVar19 + uVar10 * 0x40);
  uVar24 = (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar51 | 0x80808080) + 0xfefefeff | uVar51) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar29 == 0xffffffff && uVar24 == 0xffffffff) {
    bVar52 = true;
    iVar31 = 0;
  }
  else {
    uVar24 = ~uVar24;
    uVar21 = uVar50 & 0x3f;
    uVar29 = ~uVar29;
    uVar51 = -uVar21 & 0x3f;
    uVar20 = uVar24 >> uVar21 | uVar29 << (0x20 - uVar21 & 0xff) | uVar29 >> (uVar21 - 0x20 & 0xff)
             | uVar24 << uVar51;
    uVar24 = uVar29 << uVar51 | uVar24 << (uVar51 - 0x20 & 0xff) | uVar24 >> (0x20 - uVar51 & 0xff)
             | uVar29 >> uVar21;
    iVar31 = 0;
    do {
      if (uVar20 == 0) {
        bVar4 = (byte)uVar24;
        bVar5 = (byte)(uVar24 >> 8);
        bVar6 = (byte)(uVar24 >> 0x10);
        bVar2 = (byte)(uVar24 >> 0x18);
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
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar20;
        bVar5 = (byte)(uVar20 >> 8);
        bVar6 = (byte)(uVar20 >> 0x10);
        bVar2 = (byte)(uVar20 >> 0x18);
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
      uVar29 = uVar21 + iVar11 & 0x3f;
      if (uVar29 == 0) {
        bVar52 = true;
        iVar11 = iVar31;
      }
      else {
        uVar29 = *(uint *)(iVar18 + uVar29 * 4);
        if (uVar29 < local_15c) {
          bVar52 = true;
          break;
        }
        HintPreloadData(iVar9 + uVar29);
        iVar11 = iVar31 + 1;
        local_12c[iVar31] = uVar29;
        bVar52 = local_164 != 1;
        local_164 = local_164 + -1;
      }
      bVar53 = uVar20 == 0;
      uVar20 = uVar20 & uVar20 - 1;
      uVar24 = uVar24 & uVar24 - bVar53;
      bVar53 = bVar52;
      if (uVar20 == 0 && uVar24 == 0) {
        bVar53 = false;
      }
      iVar31 = iVar11;
    } while (bVar53);
  }
  uVar24 = uVar50 - 1 & 0x3f;
  if (uVar24 == 0) {
    uVar24 = 0x3f;
  }
  *(char *)(iVar19 + uVar10 * 0x40) = (char)uVar24;
  *(char *)(iVar44 + uVar24) = (char)local_138;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar18 + uVar24 * 4) = iVar19;
  if (iVar31 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar26 = &iStack_130;
    iVar18 = 0;
    pcVar12 = (char *)0x3;
    do {
      while( true ) {
        piVar26 = piVar26 + 1;
        iVar19 = *piVar26;
        puVar8 = (uint *)(iVar9 + iVar19);
        if (*(int *)((int)puVar8 + (int)(pcVar12 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar12 + -3))) break;
LAB_017cfd58:
        iVar18 = iVar18 + 1;
        if (iVar18 == iVar31) goto LAB_017cfe20;
      }
      puVar17 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar9 + iVar19) == *param_2) {
          do {
            puVar17 = puVar17 + 1;
            puVar8 = puVar8 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar17) {
              if (((uint *)((int)param_3 + -1) <= puVar17) || ((short)*puVar8 != (short)*puVar17))
              goto LAB_017d0568;
              goto LAB_017d0560;
            }
          } while (*puVar8 == *puVar17);
          uVar10 = *puVar8 ^ *puVar17;
          bVar4 = (byte)uVar10;
          bVar5 = (byte)(uVar10 >> 8);
          bVar6 = (byte)(uVar10 >> 0x10);
          bVar2 = (byte)(uVar10 >> 0x18);
          local_13c = (char *)((int)puVar17 +
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
          uVar10 = *(uint *)(iVar9 + iVar19) ^ *param_2;
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
          if ((short)*param_2 == *(short *)(iVar9 + iVar19)) {
LAB_017d0560:
            puVar17 = (uint *)((int)puVar17 + 2);
            puVar8 = (uint *)((int)puVar8 + 2);
LAB_017d0568:
            if (puVar17 < param_3) goto LAB_017cfdb0;
          }
          else {
            if (param_3 <= param_2) goto LAB_017cfd58;
LAB_017cfdb0:
            if ((char)*puVar8 == (char)*puVar17) goto LAB_017d0200;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar9 + iVar19)))
          goto LAB_017cfd58;
LAB_017d0200:
          puVar17 = (uint *)((int)puVar17 + 1);
        }
        local_13c = (char *)((int)puVar17 - (int)param_2);
      }
      if (local_13c <= pcVar12) goto LAB_017cfd58;
      *param_4 = uVar7 + (3 - iVar19);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017cfe28;
      iVar18 = iVar18 + 1;
      pcVar12 = local_13c;
    } while (iVar18 != iVar31);
LAB_017cfe20:
    local_13c = pcVar12;
  }
LAB_017cfe28:
  uVar20 = (uVar16 & 0xff) * 0x1010101;
  uVar10 = *(uint *)(iVar25 + 0x3c) ^ uVar20;
  uVar24 = *(uint *)(iVar25 + 0x38) ^ uVar20;
  uVar39 = *(uint *)(iVar25 + 0x34) ^ uVar20;
  uVar32 = *(uint *)(iVar25 + 0x30) ^ uVar20;
  uVar16 = *(uint *)(iVar41 + iVar45) ^ uVar20;
  uVar21 = *(uint *)(iVar25 + 0x2c) ^ uVar20;
  uVar33 = *(uint *)(iVar25 + 0x28) ^ uVar20;
  uVar38 = *(uint *)(iVar25 + 0x24) ^ uVar20;
  uVar34 = *(uint *)(iVar25 + 0x18) ^ uVar20;
  uVar29 = *(uint *)(iVar25 + 0x1c) ^ uVar20;
  uVar50 = *(uint *)(iVar25 + 0x14) ^ uVar20;
  uVar51 = *(uint *)(iVar25 + 0x10) ^ uVar20;
  uVar36 = *(uint *)(iVar25 + 0xc) ^ uVar20;
  uVar35 = *(uint *)(iVar25 + 8) ^ uVar20;
  uVar30 = *(uint *)(iVar25 + 4) ^ uVar20;
  uVar20 = *(uint *)(iVar41 + uVar49 * 0x40) ^ uVar20;
  uVar24 = (((((((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c;
  uVar10 = (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar51 | 0x80808080) + 0xfefefeff | uVar51) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar50 | 0x80808080) + 0xfefefeff | uVar50) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if ((bool)(bVar52 & (uVar24 != 0xffffffff || uVar10 != 0xffffffff))) {
    uVar10 = ~uVar10;
    uVar24 = ~uVar24;
    uVar49 = *(byte *)(iVar41 + uVar49 * 0x40) & 0x3f;
    puVar8 = (uint *)(iVar9 + iVar15);
    uVar29 = -uVar49 & 0x3f;
    iVar18 = puVar43[1];
    uVar50 = uVar10 >> uVar49 | uVar24 << (0x20 - uVar49 & 0xff) | uVar24 >> (uVar49 - 0x20 & 0xff)
             | uVar10 << uVar29;
    pcVar12 = (char *)*puVar43;
    uVar10 = uVar24 << uVar29 | uVar10 << (uVar29 - 0x20 & 0xff) | uVar10 >> (0x20 - uVar29 & 0xff)
             | uVar24 >> uVar49;
    uVar24 = puVar43[3];
    iVar9 = 0;
    do {
      if (uVar50 == 0) {
        bVar4 = (byte)uVar10;
        bVar5 = (byte)(uVar10 >> 8);
        bVar6 = (byte)(uVar10 >> 0x10);
        bVar2 = (byte)(uVar10 >> 0x18);
        iVar19 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
        bVar4 = (byte)uVar50;
        bVar5 = (byte)(uVar50 >> 8);
        bVar6 = (byte)(uVar50 >> 0x10);
        bVar2 = (byte)(uVar50 >> 0x18);
        iVar19 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar29 = uVar49 + iVar19 & 0x3f;
      if (uVar29 == 0) {
        bVar52 = true;
        iVar19 = iVar9;
      }
      else {
        uVar29 = *(uint *)(iVar46 + uVar29 * 4);
        if (uVar29 < uVar24) break;
        HintPreloadData(iVar18 + uVar29);
        iVar19 = iVar9 + 1;
        local_12c[iVar9] = uVar29;
        bVar52 = local_164 != 1;
        local_164 = local_164 + -1;
      }
      bVar53 = uVar50 == 0;
      uVar50 = uVar50 & uVar50 - 1;
      uVar10 = uVar10 & uVar10 - bVar53;
      if (uVar50 == 0 && uVar10 == 0) {
        bVar52 = false;
      }
      iVar9 = iVar19;
    } while (bVar52);
    if (iVar9 != 0) {
      piVar26 = &iStack_130;
      iVar19 = 0;
      puVar42 = param_2 + 1;
      puVar17 = (uint *)((int)param_3 + -3);
      do {
        piVar26 = piVar26 + 1;
        iVar44 = *piVar26;
        iVar31 = iVar18 + iVar44;
        if (*(uint *)(iVar18 + iVar44) == *param_2) {
          puVar27 = (uint *)(iVar31 + 4);
          puVar22 = (uint *)((int)puVar42 + ((int)pcVar12 - (int)puVar27));
          if (param_3 < puVar22) {
            puVar22 = param_3;
          }
          puVar37 = (uint *)((int)puVar22 + -3);
          if (puVar42 < puVar37) {
            if (*(uint *)(iVar31 + 4) == param_2[1]) {
              puVar14 = param_2 + 2;
              local_140 = (uint *)(iVar31 + 8);
              if (puVar14 < puVar37) {
                do {
                  if (*local_140 != *puVar14) {
                    uVar10 = *local_140 ^ *puVar14;
                    bVar4 = (byte)uVar10;
                    bVar5 = (byte)(uVar10 >> 8);
                    bVar6 = (byte)(uVar10 >> 0x10);
                    bVar2 = (byte)(uVar10 >> 0x18);
                    pcVar13 = (char *)((int)puVar14 +
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
                                                                  )) >> 3) - (int)puVar42));
                    goto joined_r0x017d03e8;
                  }
                  puVar14 = puVar14 + 1;
                  local_140 = local_140 + 1;
                } while (puVar14 < puVar37);
              }
              goto LAB_017d0384;
            }
            uVar10 = *(uint *)(iVar31 + 4) ^ param_2[1];
            bVar4 = (byte)uVar10;
            bVar5 = (byte)(uVar10 >> 8);
            bVar6 = (byte)(uVar10 >> 0x10);
            bVar2 = (byte)(uVar10 >> 0x18);
            pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            puVar14 = puVar42;
            local_140 = puVar27;
LAB_017d0384:
            if (puVar14 < (uint *)((int)puVar22 + -1)) {
              if ((short)*local_140 == (short)*puVar14) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar14 = (uint *)((int)puVar14 + 2);
              }
            }
            if ((puVar14 < puVar22) && ((char)*local_140 == (char)*puVar14)) {
              puVar14 = (uint *)((int)puVar14 + 1);
            }
            pcVar13 = (char *)((int)puVar14 - (int)puVar42);
          }
joined_r0x017d03e8:
          if (pcVar12 == (char *)((int)puVar27 + (int)pcVar13)) {
            puVar22 = (uint *)((int)puVar42 + (int)pcVar13);
            if (puVar22 < puVar17) {
              if (*puVar8 == *(uint *)((int)puVar42 + (int)pcVar13)) {
                puVar27 = puVar22 + 1;
                local_140 = puVar8 + 1;
                if (puVar27 < puVar17) {
                  do {
                    if (*local_140 != *puVar27) {
                      uVar10 = *local_140 ^ *puVar27;
                      bVar4 = (byte)uVar10;
                      bVar5 = (byte)(uVar10 >> 8);
                      bVar6 = (byte)(uVar10 >> 0x10);
                      bVar2 = (byte)(uVar10 >> 0x18);
                      pcVar23 = (char *)((int)puVar27 +
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
                                        (int)puVar22));
                      goto LAB_017d0420;
                    }
                    puVar27 = puVar27 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar27 < puVar17);
                }
                goto LAB_017d0470;
              }
              uVar10 = *puVar8 ^ *(uint *)((int)puVar42 + (int)pcVar13);
              bVar4 = (byte)uVar10;
              bVar5 = (byte)(uVar10 >> 8);
              bVar6 = (byte)(uVar10 >> 0x10);
              bVar2 = (byte)(uVar10 >> 0x18);
              pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
              puVar27 = puVar22;
              local_140 = puVar8;
LAB_017d0470:
              if (puVar27 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar27) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar27 = (uint *)((int)puVar27 + 2);
                }
              }
              if ((puVar27 < param_3) && ((char)*local_140 == (char)*puVar27)) {
                puVar27 = (uint *)((int)puVar27 + 1);
              }
              pcVar23 = (char *)((int)puVar27 - (int)puVar22);
            }
LAB_017d0420:
            pcVar13 = pcVar13 + (int)pcVar23;
          }
          pcVar13 = pcVar13 + 4;
          if (local_13c < pcVar13) {
            *param_4 = (int)(pcVar12 + uVar7 + (((3 - iVar15) - iVar18) - iVar44));
            local_13c = pcVar13;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) break;
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != iVar9);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

