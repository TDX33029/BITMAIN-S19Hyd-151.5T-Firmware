// FUN_017ce4b8 @ 017ce4b8 size=4356 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017ce4b8(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  char *pcVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  undefined4 *puVar51;
  uint uVar52;
  bool bVar53;
  bool bVar54;
  uint local_154;
  uint local_14c;
  uint *local_140;
  char *local_13c;
  int iStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar41 = *(int *)(param_1 + 4);
  uVar21 = *(uint *)(param_1 + 0x10);
  uVar8 = (int)param_2 - iVar41;
  puVar51 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  iVar16 = *(int *)(param_1 + 0x28);
  uVar17 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar53 = uVar17 < uVar8 - uVar21;
  iVar14 = *(int *)(param_1 + 0xc);
  if (bVar53) {
    uVar17 = uVar8 - uVar17;
  }
  if (bVar53) {
    local_14c = uVar17;
  }
  if (!bVar53) {
    local_14c = uVar21;
  }
  iVar34 = puVar51[10];
  uVar48 = *(uint *)(param_1 + 0xc4);
  uVar25 = *param_2 * -0x61c8864f >> (0x18 - puVar51[9] & 0xff);
  iVar27 = *(int *)(param_1 + 0x24);
  uVar17 = uVar25 >> 8;
  iVar30 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar21;
  }
  iVar45 = iVar34 + uVar17 * 0x40;
  iVar22 = uVar17 * 0x40 + 0x20;
  HintPreloadData(iVar34 + iVar22);
  iVar23 = puVar51[0x17] + uVar17 * 0x100;
  if (5 < uVar48) {
    uVar48 = 6;
  }
  HintPreloadData(iVar45);
  HintPreloadData(iVar23);
  HintPreloadData(puVar51[0x17] + uVar17 * 0x100 + 0x40);
  uVar21 = *(uint *)(param_1 + 0x50);
  iVar46 = 1 << (uVar48 & 0xff);
  uVar48 = 0x18 - iVar27;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar9 = *(uint *)(param_1 + 0x1c);
    iVar35 = param_1 + 0x2c;
    iVar10 = iVar30;
    iVar42 = iVar41;
    iVar50 = iVar16;
    if (0x180 < uVar8 - uVar9) {
      uVar29 = uVar9 + 0x60;
      if (uVar9 < uVar29) {
        uVar18 = uVar21;
        while( true ) {
          uVar31 = *(uint *)(iVar35 + (uVar9 & 7) * 4);
          uVar28 = (*(int *)(uVar9 + iVar41 + 8) * -0x61c8864f ^ uVar18) >> (uVar48 & 0xff);
          uVar18 = uVar28 >> 8;
          iVar27 = uVar18 * 0x40;
          iVar10 = uVar18 * 0x100;
          HintPreloadData(iVar16 + iVar27);
          HintPreloadData(iVar30 + iVar10);
          HintPreloadData(iVar16 + iVar27 + 0x20);
          uVar18 = uVar31 >> 8;
          HintPreloadData(iVar30 + iVar10 + 0x40);
          *(uint *)(iVar35 + (uVar9 & 7) * 4) = uVar28;
          uVar28 = *(byte *)(iVar16 + uVar18 * 0x40) - 1 & 0x3f;
          if (uVar28 == 0) {
            uVar28 = 0x3f;
          }
          *(char *)(iVar16 + uVar18 * 0x40) = (char)uVar28;
          *(char *)(iVar16 + uVar18 * 0x40 + uVar28) = (char)uVar31;
          *(uint *)(iVar30 + (uVar18 * 0x40 + uVar28) * 4) = uVar9;
          uVar9 = uVar9 + 1;
          if (uVar29 == uVar9) break;
          uVar18 = *(uint *)(param_1 + 0x50);
        }
        iVar27 = *(int *)(param_1 + 0x24);
        iVar10 = *(int *)(param_1 + 0x5c);
        iVar42 = *(int *)(param_1 + 4);
        iVar50 = *(int *)(param_1 + 0x28);
      }
      uVar9 = uVar8 + -0x20;
      if ((char *)(uVar9 + iVar41) <= (char *)((int)param_2 + 1)) {
        pcVar11 = (char *)((int)param_2 + 1) + (1 - (int)(uVar9 + iVar41));
        if (pcVar11 < (char *)0x9) {
          uVar29 = uVar9 + (int)pcVar11;
        }
        else {
          uVar29 = uVar8 + -0x18;
        }
        if (uVar9 < uVar29) {
          uVar28 = *(uint *)(param_1 + 0x50);
          uVar18 = uVar9;
          do {
            piVar24 = (int *)(uVar18 + iVar41);
            uVar49 = uVar18 & 7;
            uVar18 = uVar18 + 1;
            uVar32 = (*piVar24 * -0x61c8864f ^ uVar28) >> (0x18U - iVar27 & 0xff);
            uVar31 = uVar32 >> 8;
            iVar1 = uVar31 * 0x40;
            iVar2 = uVar31 * 0x100;
            HintPreloadData(iVar50 + iVar1);
            HintPreloadData(iVar10 + iVar2);
            HintPreloadData(iVar50 + iVar1 + 0x20);
            HintPreloadData(iVar10 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar49 * 4 + 0x2c) = uVar32;
          } while (uVar18 < uVar29);
        }
      }
    }
    if (uVar9 < uVar8) {
      do {
        uVar28 = *(uint *)(iVar35 + (uVar9 & 7) * 4);
        uVar18 = (*(int *)(uVar9 + iVar42 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar27 & 0xff);
        uVar29 = uVar18 >> 8;
        iVar1 = uVar29 * 0x40;
        iVar2 = uVar29 * 0x100;
        HintPreloadData(iVar10 + iVar2);
        HintPreloadData(iVar50 + iVar1);
        HintPreloadData(iVar10 + iVar2 + 0x40);
        uVar29 = uVar28 >> 8;
        HintPreloadData(iVar50 + iVar1 + 0x20);
        *(uint *)(iVar35 + (uVar9 & 7) * 4) = uVar18;
        uVar18 = *(byte *)(iVar50 + uVar29 * 0x40) - 1 & 0x3f;
        if (uVar18 == 0) {
          uVar18 = 0x3f;
        }
        *(char *)(iVar50 + uVar29 * 0x40) = (char)uVar18;
        *(char *)(iVar50 + uVar29 * 0x40 + uVar18) = (char)uVar28;
        *(uint *)(iVar10 + (uVar18 + uVar29 * 0x40) * 4) = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    uVar48 = (param_2[2] * -0x61c8864f ^ uVar21) >> (uVar48 & 0xff);
    local_154 = *(uint *)(iVar35 + (uVar8 & 7) * 4);
    uVar21 = uVar48 >> 8;
    iVar27 = uVar21 * 0x40;
    iVar10 = uVar21 * 0x100;
    HintPreloadData(iVar16 + iVar27);
    HintPreloadData(iVar30 + iVar10);
    HintPreloadData(iVar16 + iVar27 + 0x20);
    HintPreloadData(iVar30 + iVar10 + 0x40);
    *(uint *)(iVar35 + (uVar8 & 7) * 4) = uVar48;
  }
  else {
    local_154 = (*param_2 * -0x61c8864f ^ uVar21) >> (uVar48 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar8;
  }
  uVar21 = local_154 >> 8;
  iVar30 = iVar30 + uVar21 * 0x100;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_154;
  iVar27 = iVar16 + uVar21 * 0x40;
  uVar49 = (local_154 & 0xff) * 0x1010101;
  uVar48 = *(uint *)(iVar27 + 0x3c) ^ uVar49;
  uVar9 = *(uint *)(iVar27 + 0x38) ^ uVar49;
  uVar52 = *(uint *)(iVar27 + 0x34) ^ uVar49;
  uVar36 = *(uint *)(iVar27 + 0x30) ^ uVar49;
  uVar43 = *(uint *)(iVar27 + 0x18) ^ uVar49;
  uVar18 = *(uint *)(iVar27 + 0x2c) ^ uVar49;
  uVar37 = *(uint *)(iVar27 + 0x28) ^ uVar49;
  uVar28 = *(uint *)(iVar27 + 0x24) ^ uVar49;
  uVar38 = *(uint *)(iVar27 + 0x20) ^ uVar49;
  uVar31 = *(uint *)(iVar27 + 0x1c) ^ uVar49;
  uVar39 = *(uint *)(iVar27 + 0x14) ^ uVar49;
  uVar29 = *(uint *)(iVar27 + 0x10) ^ uVar49;
  uVar32 = *(uint *)(iVar27 + 0xc) ^ uVar49;
  uVar44 = *(uint *)(iVar27 + 4) ^ uVar49;
  uVar40 = *(uint *)(iVar27 + 8) ^ uVar49;
  uVar49 = *(uint *)(iVar16 + uVar21 * 0x40) ^ uVar49;
  uVar48 = (((((((((uVar9 | 0x80808080) + 0xfefefeff | uVar9) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar52 | 0x80808080) + 0xfefefeff | uVar52) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c;
  uVar9 = (uint)*(byte *)(iVar16 + uVar21 * 0x40);
  uVar29 = (((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar48 == 0xffffffff && uVar29 == 0xffffffff) {
    bVar53 = true;
    iVar10 = 0;
  }
  else {
    uVar31 = uVar9 & 0x3f;
    uVar29 = ~uVar29;
    uVar48 = ~uVar48;
    uVar18 = -uVar31 & 0x3f;
    uVar28 = uVar29 >> uVar31 | uVar48 << (0x20 - uVar31 & 0xff) | uVar48 >> (uVar31 - 0x20 & 0xff)
             | uVar29 << uVar18;
    uVar48 = uVar48 << uVar18 | uVar29 << (uVar18 - 0x20 & 0xff) | uVar29 >> (0x20 - uVar18 & 0xff)
             | uVar48 >> uVar31;
    iVar42 = 0;
    do {
      if (uVar28 == 0) {
        bVar4 = (byte)uVar48;
        bVar5 = (byte)(uVar48 >> 8);
        bVar6 = (byte)(uVar48 >> 0x10);
        bVar3 = (byte)(uVar48 >> 0x18);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar28;
        bVar5 = (byte)(uVar28 >> 8);
        bVar6 = (byte)(uVar28 >> 0x10);
        bVar3 = (byte)(uVar28 >> 0x18);
        iVar10 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar29 = uVar31 + iVar10 & 0x3f;
      iVar10 = iVar42;
      if (uVar29 == 0) {
        bVar53 = true;
      }
      else {
        uVar29 = *(uint *)(iVar30 + uVar29 * 4);
        if (uVar29 < local_14c) {
          bVar53 = true;
          break;
        }
        HintPreloadData(iVar41 + uVar29);
        iVar10 = iVar42 + 1;
        local_12c[iVar42] = uVar29;
        bVar53 = iVar46 != 1;
        iVar46 = iVar46 + -1;
      }
      bVar54 = uVar28 == 0;
      uVar28 = uVar28 & uVar28 - 1;
      uVar48 = uVar48 & uVar48 - bVar54;
      bVar54 = bVar53;
      if (uVar28 == 0 && uVar48 == 0) {
        bVar54 = false;
      }
      iVar42 = iVar10;
    } while (bVar54);
  }
  uVar48 = uVar9 - 1 & 0x3f;
  if (uVar48 == 0) {
    uVar48 = 0x3f;
  }
  *(char *)(iVar16 + uVar21 * 0x40) = (char)uVar48;
  *(char *)(iVar27 + uVar48) = (char)local_154;
  iVar16 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar16 + 1;
  *(int *)(iVar30 + uVar48 * 4) = iVar16;
  if (iVar10 == 0) {
    local_13c = (char *)0x3;
  }
  else {
    piVar24 = &iStack_130;
    iVar16 = 0;
    pcVar11 = (char *)0x3;
    do {
      while( true ) {
        piVar24 = piVar24 + 1;
        iVar30 = *piVar24;
        puVar7 = (uint *)(iVar41 + iVar30);
        if (*(int *)((int)puVar7 + (int)(pcVar11 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar11 + -3))) break;
LAB_017ceb6c:
        iVar16 = iVar16 + 1;
        if (iVar16 == iVar10) goto LAB_017cec34;
      }
      puVar15 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar41 + iVar30) == *param_2) {
          do {
            puVar15 = puVar15 + 1;
            puVar7 = puVar7 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar15) {
              if (((uint *)((int)param_3 + -1) <= puVar15) || ((short)*puVar7 != (short)*puVar15))
              goto LAB_017cf398;
              goto LAB_017cf390;
            }
          } while (*puVar7 == *puVar15);
          uVar21 = *puVar7 ^ *puVar15;
          bVar4 = (byte)uVar21;
          bVar5 = (byte)(uVar21 >> 8);
          bVar6 = (byte)(uVar21 >> 0x10);
          bVar3 = (byte)(uVar21 >> 0x18);
          local_13c = (char *)((int)puVar15 +
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
                                              (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                                << 1 | bVar3 >> 2 & 1) << 1 |
                                                              bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                             << 1 | bVar3 >> 5 & 1) << 1 |
                                                           bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                              - (int)param_2));
        }
        else {
          uVar21 = *(uint *)(iVar41 + iVar30) ^ *param_2;
          bVar4 = (byte)uVar21;
          bVar5 = (byte)(uVar21 >> 8);
          bVar6 = (byte)(uVar21 >> 0x10);
          bVar3 = (byte)(uVar21 >> 0x18);
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
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
        }
      }
      else {
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if ((short)*param_2 == *(short *)(iVar41 + iVar30)) {
LAB_017cf390:
            puVar15 = (uint *)((int)puVar15 + 2);
            puVar7 = (uint *)((int)puVar7 + 2);
LAB_017cf398:
            if (puVar15 < param_3) goto LAB_017cebc4;
          }
          else {
            if (param_3 <= param_2) goto LAB_017ceb6c;
LAB_017cebc4:
            if ((char)*puVar7 == (char)*puVar15) goto LAB_017cf018;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar41 + iVar30)))
          goto LAB_017ceb6c;
LAB_017cf018:
          puVar15 = (uint *)((int)puVar15 + 1);
        }
        local_13c = (char *)((int)puVar15 - (int)param_2);
      }
      if (local_13c <= pcVar11) goto LAB_017ceb6c;
      *param_4 = uVar8 + (3 - iVar30);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) goto LAB_017cec40;
      iVar16 = iVar16 + 1;
      pcVar11 = local_13c;
    } while (iVar16 != iVar10);
LAB_017cec34:
    local_13c = pcVar11;
  }
LAB_017cec40:
  uVar28 = (uVar25 & 0xff) * 0x1010101;
  uVar21 = *(uint *)(iVar45 + 0x3c) ^ uVar28;
  uVar25 = *(uint *)(iVar45 + 0x38) ^ uVar28;
  uVar43 = *(uint *)(iVar45 + 0x34) ^ uVar28;
  uVar36 = *(uint *)(iVar45 + 0x30) ^ uVar28;
  uVar29 = *(uint *)(iVar34 + iVar22) ^ uVar28;
  uVar31 = *(uint *)(iVar45 + 0x2c) ^ uVar28;
  uVar37 = *(uint *)(iVar45 + 0x28) ^ uVar28;
  uVar32 = *(uint *)(iVar45 + 0x24) ^ uVar28;
  uVar38 = *(uint *)(iVar45 + 0x18) ^ uVar28;
  uVar48 = *(uint *)(iVar45 + 0x1c) ^ uVar28;
  uVar9 = *(uint *)(iVar45 + 0x14) ^ uVar28;
  uVar18 = *(uint *)(iVar45 + 0x10) ^ uVar28;
  uVar40 = *(uint *)(iVar45 + 0xc) ^ uVar28;
  uVar39 = *(uint *)(iVar45 + 8) ^ uVar28;
  uVar49 = *(uint *)(iVar45 + 4) ^ uVar28;
  uVar28 = *(uint *)(iVar34 + uVar17 * 0x40) ^ uVar28;
  uVar25 = (((((((((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c;
  uVar21 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar9 | 0x80808080) + 0xfefefeff | uVar9) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if ((bool)(bVar53 & (uVar25 != 0xffffffff || uVar21 != 0xffffffff))) {
    uVar21 = ~uVar21;
    uVar25 = ~uVar25;
    uVar9 = *(byte *)(iVar34 + uVar17 * 0x40) & 0x3f;
    puVar7 = (uint *)(iVar41 + iVar14);
    uVar17 = -uVar9 & 0x3f;
    iVar41 = puVar51[1];
    uVar48 = uVar21 >> uVar9 | uVar25 << (0x20 - uVar9 & 0xff) | uVar25 >> (uVar9 - 0x20 & 0xff) |
             uVar21 << uVar17;
    pcVar11 = (char *)*puVar51;
    uVar17 = uVar25 << uVar17 | uVar21 << (uVar17 - 0x20 & 0xff) | uVar21 >> (0x20 - uVar17 & 0xff)
             | uVar25 >> uVar9;
    uVar21 = puVar51[3];
    iVar16 = 0;
    do {
      if (uVar48 == 0) {
        bVar4 = (byte)uVar17;
        bVar5 = (byte)(uVar17 >> 8);
        bVar6 = (byte)(uVar17 >> 0x10);
        bVar3 = (byte)(uVar17 >> 0x18);
        iVar30 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar4 = (byte)uVar48;
        bVar5 = (byte)(uVar48 >> 8);
        bVar6 = (byte)(uVar48 >> 0x10);
        bVar3 = (byte)(uVar48 >> 0x18);
        iVar30 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
                                          ) << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                 bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1
                                          ) << 1 | bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 |
                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar25 = uVar9 + iVar30 & 0x3f;
      if (uVar25 == 0) {
        bVar53 = true;
        iVar30 = iVar16;
      }
      else {
        uVar25 = *(uint *)(iVar23 + uVar25 * 4);
        if (uVar25 < uVar21) break;
        HintPreloadData(iVar41 + uVar25);
        iVar30 = iVar16 + 1;
        local_12c[iVar16] = uVar25;
        bVar53 = iVar46 != 1;
        iVar46 = iVar46 + -1;
      }
      bVar54 = uVar48 == 0;
      uVar48 = uVar48 & uVar48 - 1;
      uVar17 = uVar17 & uVar17 - bVar54;
      if (uVar48 == 0 && uVar17 == 0) {
        bVar53 = false;
      }
      iVar16 = iVar30;
    } while (bVar53);
    if (iVar16 != 0) {
      piVar24 = &iStack_130;
      iVar30 = 0;
      puVar47 = param_2 + 1;
      puVar15 = (uint *)((int)param_3 + -3);
      do {
        piVar24 = piVar24 + 1;
        iVar27 = *piVar24;
        iVar34 = iVar41 + iVar27;
        if (*(uint *)(iVar41 + iVar27) == *param_2) {
          puVar26 = (uint *)(iVar34 + 4);
          puVar19 = (uint *)((int)puVar47 + ((int)pcVar11 - (int)puVar26));
          if (param_3 < puVar19) {
            puVar19 = param_3;
          }
          puVar33 = (uint *)((int)puVar19 + -3);
          if (puVar47 < puVar33) {
            if (*(uint *)(iVar34 + 4) == param_2[1]) {
              puVar13 = param_2 + 2;
              local_140 = (uint *)(iVar34 + 8);
              if (puVar13 < puVar33) {
                do {
                  if (*local_140 != *puVar13) {
                    uVar17 = *local_140 ^ *puVar13;
                    bVar4 = (byte)uVar17;
                    bVar5 = (byte)(uVar17 >> 8);
                    bVar6 = (byte)(uVar17 >> 0x10);
                    bVar3 = (byte)(uVar17 >> 0x18);
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
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar47));
                    goto joined_r0x017cf1fc;
                  }
                  puVar13 = puVar13 + 1;
                  local_140 = local_140 + 1;
                } while (puVar13 < puVar33);
              }
              goto LAB_017cf198;
            }
            uVar17 = *(uint *)(iVar34 + 4) ^ param_2[1];
            bVar4 = (byte)uVar17;
            bVar5 = (byte)(uVar17 >> 8);
            bVar6 = (byte)(uVar17 >> 0x10);
            bVar3 = (byte)(uVar17 >> 0x18);
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
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
          else {
            puVar13 = puVar47;
            local_140 = puVar26;
LAB_017cf198:
            if (puVar13 < (uint *)((int)puVar19 + -1)) {
              if ((short)*local_140 == (short)*puVar13) {
                local_140 = (uint *)((int)local_140 + 2);
                puVar13 = (uint *)((int)puVar13 + 2);
              }
            }
            if ((puVar13 < puVar19) && ((char)*local_140 == (char)*puVar13)) {
              puVar13 = (uint *)((int)puVar13 + 1);
            }
            pcVar12 = (char *)((int)puVar13 - (int)puVar47);
          }
joined_r0x017cf1fc:
          if (pcVar11 == (char *)((int)puVar26 + (int)pcVar12)) {
            puVar19 = (uint *)((int)puVar47 + (int)pcVar12);
            if (puVar19 < puVar15) {
              if (*puVar7 == *(uint *)((int)puVar47 + (int)pcVar12)) {
                puVar26 = puVar19 + 1;
                local_140 = puVar7 + 1;
                if (puVar26 < puVar15) {
                  do {
                    if (*local_140 != *puVar26) {
                      uVar17 = *local_140 ^ *puVar26;
                      bVar4 = (byte)uVar17;
                      bVar5 = (byte)(uVar17 >> 8);
                      bVar6 = (byte)(uVar17 >> 0x10);
                      bVar3 = (byte)(uVar17 >> 0x18);
                      pcVar20 = (char *)((int)puVar26 +
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
                                                        (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                          bVar3 >> 1 & 1) << 1 |
                                                                         bVar3 >> 2 & 1) << 1 |
                                                                        bVar3 >> 3 & 1) << 1 |
                                                                       bVar3 >> 4 & 1) << 1 |
                                                                      bVar3 >> 5 & 1) << 1 |
                                                                     bVar3 >> 6 & 1) << 1 |
                                                                    bVar3 >> 7)) >> 3) -
                                        (int)puVar19));
                      goto LAB_017cf234;
                    }
                    puVar26 = puVar26 + 1;
                    local_140 = local_140 + 1;
                  } while (puVar26 < puVar15);
                }
                goto LAB_017cf284;
              }
              uVar17 = *puVar7 ^ *(uint *)((int)puVar47 + (int)pcVar12);
              bVar4 = (byte)uVar17;
              bVar5 = (byte)(uVar17 >> 8);
              bVar6 = (byte)(uVar17 >> 0x10);
              bVar3 = (byte)(uVar17 >> 0x18);
              pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                   bVar3 >> 1 & 1) << 1 |
                                                                  bVar3 >> 2 & 1) << 1 |
                                                                 bVar3 >> 3 & 1) << 1 |
                                                                bVar3 >> 4 & 1) << 1 |
                                                               bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1
                                                              ) << 1 | bVar3 >> 7)) >> 3);
            }
            else {
              puVar26 = puVar19;
              local_140 = puVar7;
LAB_017cf284:
              if (puVar26 < (uint *)((int)param_3 + -1)) {
                if ((short)*local_140 == (short)*puVar26) {
                  local_140 = (uint *)((int)local_140 + 2);
                  puVar26 = (uint *)((int)puVar26 + 2);
                }
              }
              if ((puVar26 < param_3) && ((char)*local_140 == (char)*puVar26)) {
                puVar26 = (uint *)((int)puVar26 + 1);
              }
              pcVar20 = (char *)((int)puVar26 - (int)puVar19);
            }
LAB_017cf234:
            pcVar12 = pcVar12 + (int)pcVar20;
          }
          pcVar12 = pcVar12 + 4;
          if (local_13c < pcVar12) {
            *param_4 = (int)(pcVar11 + uVar8 + (((3 - iVar14) - iVar41) - iVar27));
            local_13c = pcVar12;
            if (param_3 == (uint *)((int)param_2 + (int)pcVar12)) break;
          }
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 != iVar16);
    }
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return local_13c;
}

