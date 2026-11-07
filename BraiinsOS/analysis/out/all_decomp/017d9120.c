// FUN_017d9120 @ 017d9120 size=3188 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017d9120(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  int iVar30;
  char *pcVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint *puVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  bool bVar50;
  bool bVar51;
  uint local_154;
  uint *local_148;
  uint uStack_130;
  uint local_12c [64];
  int local_2c;
  
  iVar46 = *(int *)(param_1 + 4);
  iVar30 = *(int *)(param_1 + 0x24);
  uVar32 = *(uint *)(param_1 + 0x50);
  local_2c = DAT_018ddaf8;
  iVar23 = *(int *)(param_1 + 0x5c);
  uVar17 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar24 = *(int *)(param_1 + 0x28);
  uVar25 = *(uint *)(param_1 + 0x10);
  uVar8 = (int)param_2 - iVar46;
  bVar50 = uVar17 < uVar8 - uVar25;
  iVar11 = *(int *)(param_1 + 8);
  if (bVar50) {
    uVar17 = uVar8 - uVar17;
  }
  uVar12 = *(uint *)(param_1 + 0xc);
  if (!bVar50) {
    uVar17 = uVar25;
  }
  uVar18 = 0x18 - iVar30;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar17 = uVar25;
  }
  uVar25 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar40 = param_1 + 0x2c;
    iVar9 = iVar24;
    iVar38 = iVar23;
    iVar14 = iVar46;
    if (0x180 < uVar8 - uVar13) {
      uVar28 = uVar13 + 0x60;
      if (uVar13 < uVar28) {
        uVar26 = uVar32;
        while( true ) {
          uVar34 = *(uint *)(iVar40 + (uVar13 & 7) * 4);
          uVar33 = (*(int *)(uVar13 + iVar46 + 8) * -0x61c8864f ^ uVar26) >> (uVar18 & 0xff);
          uVar26 = uVar33 >> 8;
          iVar30 = uVar26 * 0x40;
          iVar9 = uVar26 * 0x100;
          HintPreloadData(iVar24 + iVar30);
          HintPreloadData(iVar23 + iVar9);
          HintPreloadData(iVar24 + iVar30 + 0x20);
          uVar26 = uVar34 >> 8;
          HintPreloadData(iVar23 + iVar9 + 0x40);
          *(uint *)(iVar40 + (uVar13 & 7) * 4) = uVar33;
          uVar33 = *(byte *)(iVar24 + uVar26 * 0x40) - 1 & 0x3f;
          if (uVar33 == 0) {
            uVar33 = 0x3f;
          }
          *(char *)(iVar24 + uVar26 * 0x40) = (char)uVar33;
          *(char *)(iVar24 + uVar26 * 0x40 + uVar33) = (char)uVar34;
          *(uint *)(iVar23 + (uVar26 * 0x40 + uVar33) * 4) = uVar13;
          uVar13 = uVar13 + 1;
          if (uVar28 == uVar13) break;
          uVar26 = *(uint *)(param_1 + 0x50);
        }
        iVar30 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0x28);
        iVar38 = *(int *)(param_1 + 0x5c);
        iVar14 = *(int *)(param_1 + 4);
      }
      uVar13 = uVar8 + -0x20;
      if ((char *)(uVar13 + iVar46) <= (char *)((int)param_2 + 1)) {
        pcVar22 = (char *)((int)param_2 + 1) + (1 - (int)(uVar13 + iVar46));
        if (pcVar22 < (char *)0x9) {
          uVar28 = uVar13 + (int)pcVar22;
        }
        else {
          uVar28 = uVar8 + -0x18;
        }
        if (uVar13 < uVar28) {
          uVar33 = *(uint *)(param_1 + 0x50);
          uVar26 = uVar13;
          do {
            piVar3 = (int *)(uVar26 + iVar46);
            uVar36 = uVar26 & 7;
            uVar26 = uVar26 + 1;
            uVar35 = (*piVar3 * -0x61c8864f ^ uVar33) >> (0x18U - iVar30 & 0xff);
            uVar34 = uVar35 >> 8;
            iVar1 = uVar34 * 0x40;
            iVar2 = uVar34 * 0x100;
            HintPreloadData(iVar9 + iVar1);
            HintPreloadData(iVar38 + iVar2);
            HintPreloadData(iVar9 + iVar1 + 0x20);
            HintPreloadData(iVar38 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar36 * 4 + 0x2c) = uVar35;
          } while (uVar26 < uVar28);
        }
      }
    }
    if (uVar13 < uVar8) {
      do {
        uVar33 = *(uint *)(iVar40 + (uVar13 & 7) * 4);
        uVar26 = (*(int *)(uVar13 + iVar14 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar30 & 0xff);
        uVar28 = uVar26 >> 8;
        iVar1 = uVar28 * 0x40;
        iVar2 = uVar28 * 0x100;
        HintPreloadData(iVar38 + iVar2);
        HintPreloadData(iVar9 + iVar1);
        HintPreloadData(iVar38 + iVar2 + 0x40);
        uVar28 = uVar33 >> 8;
        HintPreloadData(iVar9 + iVar1 + 0x20);
        *(uint *)(iVar40 + (uVar13 & 7) * 4) = uVar26;
        uVar26 = *(byte *)(iVar9 + uVar28 * 0x40) - 1 & 0x3f;
        if (uVar26 == 0) {
          uVar26 = 0x3f;
        }
        *(char *)(iVar9 + uVar28 * 0x40) = (char)uVar26;
        *(char *)(iVar9 + uVar28 * 0x40 + uVar26) = (char)uVar33;
        *(uint *)(iVar38 + (uVar26 + uVar28 * 0x40) * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar8 != uVar13);
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    uVar18 = (param_2[2] * -0x61c8864f ^ uVar32) >> (uVar18 & 0xff);
    local_154 = *(uint *)(iVar40 + (uVar8 & 7) * 4);
    uVar32 = uVar18 >> 8;
    iVar30 = uVar32 * 0x40;
    iVar9 = uVar32 * 0x100;
    HintPreloadData(iVar24 + iVar30);
    HintPreloadData(iVar24 + iVar30 + 0x20);
    HintPreloadData(iVar23 + iVar9);
    HintPreloadData(iVar23 + iVar9 + 0x40);
    *(uint *)(iVar40 + (uVar8 & 7) * 4) = uVar18;
  }
  else {
    uVar13 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar8;
    local_154 = (uVar13 * -0x61c8864f ^ uVar32) >> (uVar18 & 0xff);
  }
  uVar32 = local_154 >> 8;
  iVar23 = iVar23 + uVar32 * 0x100;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_154;
  iVar30 = iVar24 + uVar32 * 0x40;
  uVar18 = (local_154 & 0xff) * 0x1010101;
  uVar13 = *(uint *)(iVar30 + 0x3c) ^ uVar18;
  uVar26 = *(uint *)(iVar30 + 0x38) ^ uVar18;
  uVar28 = *(uint *)(iVar30 + 0x34) ^ uVar18;
  uVar41 = *(uint *)(iVar30 + 0x30) ^ uVar18;
  uVar47 = *(uint *)(iVar30 + 0x18) ^ uVar18;
  uVar34 = *(uint *)(iVar30 + 0x2c) ^ uVar18;
  uVar42 = *(uint *)(iVar30 + 0x28) ^ uVar18;
  uVar35 = *(uint *)(iVar30 + 0x24) ^ uVar18;
  uVar43 = *(uint *)(iVar30 + 0x20) ^ uVar18;
  uVar36 = *(uint *)(iVar30 + 0x1c) ^ uVar18;
  uVar44 = *(uint *)(iVar30 + 0x14) ^ uVar18;
  uVar33 = *(uint *)(iVar30 + 0x10) ^ uVar18;
  uVar37 = *(uint *)(iVar30 + 0xc) ^ uVar18;
  uVar48 = *(uint *)(iVar30 + 4) ^ uVar18;
  uVar45 = *(uint *)(iVar30 + 8) ^ uVar18;
  uVar18 = *(uint *)(iVar24 + uVar32 * 0x40) ^ uVar18;
  uVar28 = (((((((((uVar26 | 0x80808080) + 0xfefefeff | uVar26) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar13 | 0x80808080) + 0xfefefeff | uVar13) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c;
  uVar13 = (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar45 | 0x80808080) + 0xfefefeff | uVar45) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar47 | 0x80808080) + 0xfefefeff | uVar47) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  uVar26 = (uint)*(byte *)(iVar24 + uVar32 * 0x40);
  if (uVar28 == 0xffffffff && uVar13 == 0xffffffff) {
    iVar9 = 0;
  }
  else {
    uVar13 = ~uVar13;
    uVar33 = uVar26 & 0x3f;
    uVar28 = ~uVar28;
    if (uVar25 < 6) {
      uVar18 = uVar25;
    }
    uVar34 = -uVar33 & 0x3f;
    uVar35 = uVar13 >> uVar33 | uVar28 << (0x20 - uVar33 & 0xff) | uVar28 >> (uVar33 - 0x20 & 0xff)
             | uVar13 << uVar34;
    if (uVar25 >= 6) {
      uVar18 = 6;
    }
    uVar25 = uVar28 << uVar34 | uVar13 << (uVar34 - 0x20 & 0xff) | uVar13 >> (0x20 - uVar34 & 0xff)
             | uVar28 >> uVar33;
    iVar38 = 1 << (uVar18 & 0xff);
    iVar9 = 0;
    do {
      if (uVar35 == 0) {
        bVar5 = (byte)uVar25;
        bVar6 = (byte)(uVar25 >> 8);
        bVar7 = (byte)(uVar25 >> 0x10);
        bVar4 = (byte)(uVar25 >> 0x18);
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
                         8 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7)) + 0x20;
      }
      else {
        bVar5 = (byte)uVar35;
        bVar6 = (byte)(uVar35 >> 8);
        bVar7 = (byte)(uVar35 >> 0x10);
        bVar4 = (byte)(uVar35 >> 0x18);
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
                         8 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7));
      }
      uVar18 = uVar33 + iVar14 & 0x3f;
      if (uVar18 == 0) {
        bVar50 = true;
        iVar14 = iVar9;
      }
      else {
        uVar18 = *(uint *)(iVar23 + uVar18 * 4);
        if (uVar18 < uVar17) break;
        if (uVar18 < uVar12) {
          iVar14 = iVar11;
        }
        else {
          iVar14 = iVar46;
        }
        HintPreloadData(iVar14 + uVar18);
        iVar14 = iVar9 + 1;
        local_12c[iVar9] = uVar18;
        bVar50 = iVar38 != 1;
        iVar38 = iVar38 + -1;
      }
      bVar51 = uVar35 == 0;
      uVar35 = uVar35 & uVar35 - 1;
      uVar25 = uVar25 & uVar25 - bVar51;
      if (uVar35 == 0 && uVar25 == 0) {
        bVar50 = false;
      }
      iVar9 = iVar14;
    } while (bVar50);
  }
  uVar17 = uVar26 - 1 & 0x3f;
  if (uVar17 == 0) {
    uVar17 = 0x3f;
  }
  *(char *)(iVar24 + uVar32 * 0x40) = (char)uVar17;
  *(char *)(iVar30 + uVar17) = (char)local_154;
  iVar24 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar24 + 1;
  *(int *)(iVar23 + uVar17 * 4) = iVar24;
  if (iVar9 == 0) {
    pcVar22 = (char *)0x3;
  }
  else {
    puVar29 = &uStack_130;
    iVar24 = 0;
    puVar27 = (uint *)(iVar46 + uVar12);
    puVar19 = (uint *)((int)param_3 + -3);
    puVar20 = param_2 + 1;
    pcVar31 = (char *)0x3;
    do {
      puVar29 = puVar29 + 1;
      uVar17 = *puVar29;
      if (uVar17 < uVar12) {
        iVar23 = iVar11 + uVar17;
        if (*(uint *)(iVar11 + uVar17) != *param_2) goto LAB_017d97a0;
        puVar10 = (uint *)(iVar23 + 4);
        puVar21 = (uint *)((int)puVar20 + ((int)(iVar11 + uVar12) - (int)puVar10));
        if (param_3 < puVar21) {
          puVar21 = param_3;
        }
        puVar39 = (uint *)((int)puVar21 + -3);
        if (puVar20 < puVar39) {
          if (*(uint *)(iVar23 + 4) == param_2[1]) {
            puVar49 = param_2 + 2;
            puVar16 = (uint *)(iVar23 + 8);
            if (puVar49 < puVar39) {
              do {
                if (*puVar16 != *puVar49) {
                  uVar25 = *puVar16 ^ *puVar49;
                  bVar5 = (byte)uVar25;
                  bVar6 = (byte)(uVar25 >> 8);
                  bVar7 = (byte)(uVar25 >> 0x10);
                  bVar4 = (byte)(uVar25 >> 0x18);
                  pcVar22 = (char *)((int)puVar49 +
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
                                                    << 8 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                             bVar4 >> 1 & 1) << 1 |
                                                                            bVar4 >> 2 & 1) << 1 |
                                                                           bVar4 >> 3 & 1) << 1 |
                                                                          bVar4 >> 4 & 1) << 1 |
                                                                         bVar4 >> 5 & 1) << 1 |
                                                                        bVar4 >> 6 & 1) << 1 |
                                                                       bVar4 >> 7)) >> 3) -
                                    (int)puVar20));
                  goto joined_r0x017d9950;
                }
                puVar49 = puVar49 + 1;
                puVar16 = puVar16 + 1;
              } while (puVar49 < puVar39);
            }
            goto LAB_017d98d4;
          }
          uVar25 = param_2[1] ^ *(uint *)(iVar23 + 4);
          bVar5 = (byte)uVar25;
          bVar6 = (byte)(uVar25 >> 8);
          bVar7 = (byte)(uVar25 >> 0x10);
          bVar4 = (byte)(uVar25 >> 0x18);
          pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7)) >> 3);
        }
        else {
          puVar16 = puVar10;
          puVar49 = puVar20;
LAB_017d98d4:
          if (puVar49 < (uint *)((int)puVar21 + -1)) {
            if ((short)*puVar16 == (short)*puVar49) {
              puVar16 = (uint *)((int)puVar16 + 2);
              puVar49 = (uint *)((int)puVar49 + 2);
            }
          }
          if ((puVar49 < puVar21) && ((char)*puVar16 == (char)*puVar49)) {
            puVar49 = (uint *)((int)puVar49 + 1);
          }
          pcVar22 = (char *)((int)puVar49 - (int)puVar20);
        }
joined_r0x017d9950:
        if ((char *)(iVar11 + uVar12) == (char *)((int)puVar10 + (int)pcVar22)) {
          puVar21 = (uint *)((int)puVar20 + (int)pcVar22);
          if (puVar21 < puVar19) {
            if (*puVar27 == *(uint *)((int)puVar20 + (int)pcVar22)) {
              puVar10 = puVar21 + 1;
              local_148 = puVar27 + 1;
              if (puVar10 < puVar19) {
                do {
                  if (*local_148 != *puVar10) {
                    uVar25 = *local_148 ^ *puVar10;
                    bVar5 = (byte)uVar25;
                    bVar6 = (byte)(uVar25 >> 8);
                    bVar7 = (byte)(uVar25 >> 0x10);
                    bVar4 = (byte)(uVar25 >> 0x18);
                    pcVar15 = (char *)((int)puVar10 +
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
                                                      (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                        bVar4 >> 1 & 1) << 1 |
                                                                       bVar4 >> 2 & 1) << 1 |
                                                                      bVar4 >> 3 & 1) << 1 |
                                                                     bVar4 >> 4 & 1) << 1 |
                                                                    bVar4 >> 5 & 1) << 1 |
                                                                   bVar4 >> 6 & 1) << 1 | bVar4 >> 7
                                                                  )) >> 3) - (int)puVar21));
                    goto LAB_017d9b18;
                  }
                  puVar10 = puVar10 + 1;
                  local_148 = local_148 + 1;
                } while (puVar10 < puVar19);
              }
              goto LAB_017d9abc;
            }
            uVar25 = *(uint *)((int)puVar20 + (int)pcVar22) ^ *puVar27;
            bVar5 = (byte)uVar25;
            bVar6 = (byte)(uVar25 >> 8);
            bVar7 = (byte)(uVar25 >> 0x10);
            bVar4 = (byte)(uVar25 >> 0x18);
            pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                               << 1 | bVar4 >> 2 & 1) << 1 |
                                                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                            << 1 | bVar4 >> 5 & 1) << 1 |
                                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7)) >> 3);
          }
          else {
            puVar10 = puVar21;
            local_148 = puVar27;
LAB_017d9abc:
            if (puVar10 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar10) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar10 = (uint *)((int)puVar10 + 2);
              }
            }
            if ((puVar10 < param_3) && ((char)*local_148 == (char)*puVar10)) {
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            pcVar15 = (char *)((int)puVar10 - (int)puVar21);
          }
LAB_017d9b18:
          pcVar22 = pcVar22 + (int)pcVar15;
        }
        pcVar22 = pcVar22 + 4;
LAB_017d9830:
        if (pcVar31 < pcVar22) {
          *param_4 = uVar8 + (3 - uVar17);
          pcVar31 = pcVar22;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar22)) break;
        }
      }
      else {
        puVar21 = (uint *)(iVar46 + uVar17);
        if (*(int *)((int)puVar21 + (int)(pcVar31 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar31 + -3))) {
          puVar10 = param_2;
          if (param_2 < puVar19) {
            if (*(uint *)(iVar46 + uVar17) == *param_2) {
              do {
                puVar10 = puVar10 + 1;
                puVar21 = puVar21 + 1;
                if (puVar19 <= puVar10) goto LAB_017d99d4;
              } while (*puVar21 == *puVar10);
              uVar25 = *puVar21 ^ *puVar10;
              bVar5 = (byte)uVar25;
              bVar6 = (byte)(uVar25 >> 8);
              bVar7 = (byte)(uVar25 >> 0x10);
              bVar4 = (byte)(uVar25 >> 0x18);
              pcVar22 = (char *)((int)puVar10 +
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
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar25 = *(uint *)(iVar46 + uVar17) ^ *param_2;
              bVar5 = (byte)uVar25;
              bVar6 = (byte)(uVar25 >> 8);
              bVar7 = (byte)(uVar25 >> 0x10);
              bVar4 = (byte)(uVar25 >> 0x18);
              pcVar22 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                   bVar4 >> 1 & 1) << 1 |
                                                                  bVar4 >> 2 & 1) << 1 |
                                                                 bVar4 >> 3 & 1) << 1 |
                                                                bVar4 >> 4 & 1) << 1 |
                                                               bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1
                                                              ) << 1 | bVar4 >> 7)) >> 3);
            }
          }
          else {
LAB_017d99d4:
            if (puVar10 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar21 == (short)*puVar10) {
                puVar21 = (uint *)((int)puVar21 + 2);
                puVar10 = (uint *)((int)puVar10 + 2);
              }
            }
            if ((puVar10 < param_3) && ((char)*puVar21 == (char)*puVar10)) {
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            pcVar22 = (char *)((int)puVar10 - (int)param_2);
          }
          goto LAB_017d9830;
        }
      }
LAB_017d97a0:
      pcVar22 = pcVar31;
      iVar24 = iVar24 + 1;
      pcVar31 = pcVar22;
    } while (iVar24 != iVar9);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar22;
}

