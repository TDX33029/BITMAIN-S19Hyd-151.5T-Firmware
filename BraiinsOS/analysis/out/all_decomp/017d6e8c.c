// FUN_017d6e8c @ 017d6e8c size=2708 calls_out=1 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017d6e8c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  char *pcVar28;
  int iVar29;
  uint *puVar30;
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
  int iVar41;
  bool bVar42;
  uint local_150;
  uint *local_148;
  uint uStack_130;
  uint local_12c [64];
  int local_2c;
  
  uVar31 = *(uint *)(param_1 + 4);
  iVar26 = *(int *)(param_1 + 0x5c);
  iVar33 = *(int *)(param_1 + 0x24);
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x28);
  uVar7 = (int)param_2 - uVar31;
  uVar20 = *(uint *)(param_1 + 0x10);
  uVar21 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar38 = *(uint *)(param_1 + 0xc);
  uVar36 = *(uint *)(param_1 + 0x50);
  bVar42 = uVar21 < uVar7 - uVar20;
  uVar11 = *(uint *)(param_1 + 8);
  uVar15 = uVar11;
  if (bVar42) {
    uVar15 = uVar7 - uVar21;
  }
  if (!bVar42) {
    uVar15 = uVar20;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar15 = uVar20;
  }
  uVar20 = 0x18 - iVar33;
  uVar21 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
    iVar29 = param_1 + 0x2c;
    iVar8 = iVar19;
    uVar17 = uVar31;
    iVar41 = iVar26;
    if (0x180 < uVar7 - uVar16) {
      uVar24 = uVar16 + 0x60;
      if (uVar16 < uVar24) {
        uVar17 = uVar36;
        while( true ) {
          uVar22 = (*(int *)(uVar16 + uVar31 + 8) * -0x61c8864f ^ uVar17) >> (uVar20 & 0xff);
          uVar37 = *(uint *)(iVar29 + (uVar16 & 7) * 4);
          uVar17 = uVar22 >> 8;
          HintPreloadData(iVar19 + uVar17 * 0x20);
          iVar33 = uVar17 * 0x80;
          HintPreloadData(iVar26 + iVar33);
          HintPreloadData(iVar26 + iVar33 + 0x40);
          uVar17 = uVar37 >> 8;
          *(uint *)(iVar29 + (uVar16 & 7) * 4) = uVar22;
          uVar22 = *(byte *)(iVar19 + uVar17 * 0x20) - 1 & 0x1f;
          if (uVar22 == 0) {
            uVar22 = 0x1f;
          }
          *(char *)(iVar19 + uVar17 * 0x20) = (char)uVar22;
          *(char *)(iVar19 + uVar17 * 0x20 + uVar22) = (char)uVar37;
          *(uint *)(iVar26 + (uVar17 * 0x20 + uVar22) * 4) = uVar16;
          uVar16 = uVar16 + 1;
          if (uVar24 == uVar16) break;
          uVar17 = *(uint *)(param_1 + 0x50);
        }
        iVar33 = *(int *)(param_1 + 0x24);
        iVar8 = *(int *)(param_1 + 0x28);
        uVar17 = *(uint *)(param_1 + 4);
        iVar41 = *(int *)(param_1 + 0x5c);
      }
      uVar16 = uVar7 + -0x20;
      if ((char *)(uVar16 + uVar31) <= (char *)((int)param_2 + 1)) {
        pcVar14 = (char *)((int)param_2 + 1) + (1 - (int)(uVar16 + uVar31));
        if (pcVar14 < (char *)0x9) {
          uVar24 = uVar16 + (int)pcVar14;
        }
        else {
          uVar24 = uVar7 + -0x18;
        }
        if (uVar16 < uVar24) {
          uVar37 = *(uint *)(param_1 + 0x50);
          uVar22 = uVar16;
          do {
            piVar2 = (int *)(uVar22 + uVar31);
            uVar35 = uVar22 & 7;
            uVar22 = uVar22 + 1;
            uVar34 = (*piVar2 * -0x61c8864f ^ uVar37) >> (0x18U - iVar33 & 0xff);
            uVar27 = uVar34 >> 8;
            HintPreloadData(iVar8 + uVar27 * 0x20);
            iVar1 = uVar27 * 0x80;
            HintPreloadData(iVar41 + iVar1);
            HintPreloadData(iVar41 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar35 * 4 + 0x2c) = uVar34;
          } while (uVar22 < uVar24);
        }
      }
    }
    if (uVar16 < uVar7) {
      do {
        uVar22 = (*(int *)(uVar16 + uVar17 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar33 & 0xff);
        uVar37 = *(uint *)(iVar29 + (uVar16 & 7) * 4);
        uVar24 = uVar22 >> 8;
        HintPreloadData(iVar8 + uVar24 * 0x20);
        iVar1 = uVar24 * 0x80;
        HintPreloadData(iVar41 + iVar1);
        HintPreloadData(iVar41 + iVar1 + 0x40);
        *(uint *)(iVar29 + (uVar16 & 7) * 4) = uVar22;
        uVar24 = uVar37 >> 8;
        uVar22 = *(byte *)(iVar8 + uVar24 * 0x20) - 1 & 0x1f;
        if (uVar22 == 0) {
          uVar22 = 0x1f;
        }
        *(char *)(iVar8 + uVar24 * 0x20) = (char)uVar22;
        *(char *)(iVar8 + uVar24 * 0x20 + uVar22) = (char)uVar37;
        *(uint *)(iVar41 + (uVar22 + uVar24 * 0x20) * 4) = uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    uVar36 = (param_2[2] * -0x61c8864f ^ uVar36) >> (uVar20 & 0xff);
    local_150 = *(uint *)(iVar29 + (uVar7 & 7) * 4);
    uVar20 = uVar36 >> 8;
    HintPreloadData(iVar19 + uVar20 * 0x20);
    iVar33 = uVar20 * 0x80;
    HintPreloadData(iVar26 + iVar33);
    HintPreloadData(iVar26 + iVar33 + 0x40);
    *(uint *)(iVar29 + (uVar7 & 7) * 4) = uVar36;
  }
  else {
    uVar17 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar7;
    local_150 = (uVar17 * -0x61c8864f ^ uVar36) >> (uVar20 & 0xff);
  }
  uVar20 = local_150 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  iVar33 = iVar19 + uVar20 * 0x20;
  uVar40 = (local_150 & 0xff) * 0x1010101;
  iVar26 = iVar26 + uVar20 * 0x80;
  uVar17 = *(uint *)(iVar33 + 0x1c) ^ uVar40;
  uVar36 = *(uint *)(iVar33 + 0x18) ^ uVar40;
  uVar16 = *(uint *)(iVar33 + 0x14) ^ uVar40;
  uVar34 = *(uint *)(iVar33 + 0x10) ^ uVar40;
  uVar22 = *(uint *)(iVar33 + 0xc) ^ uVar40;
  uVar35 = *(uint *)(iVar33 + 8) ^ uVar40;
  uVar37 = *(uint *)(iVar33 + 4) ^ uVar40;
  uVar40 = uVar40 ^ *(uint *)(iVar19 + uVar20 * 0x20);
  uVar27 = (uint)*(byte *)(iVar19 + uVar20 * 0x20);
  uVar24 = uVar27 & 0x1f;
  uVar36 = ~((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar36 = uVar36 >> uVar24 | uVar36 << 0x20 - uVar24;
  if (uVar36 == 0) {
    iVar8 = 0;
  }
  else {
    if (4 < uVar21) {
      uVar21 = 5;
    }
    iVar41 = 1 << (uVar21 & 0xff);
    iVar8 = 0;
    do {
      if (uVar36 == 0) {
        iVar29 = 0;
      }
      else {
        bVar4 = (byte)uVar36;
        bVar5 = (byte)(uVar36 >> 8);
        bVar6 = (byte)(uVar36 >> 0x10);
        bVar3 = (byte)(uVar36 >> 0x18);
        iVar29 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar21 = iVar29 + uVar24 & 0x1f;
      if (uVar21 == 0) {
        bVar42 = true;
        iVar29 = iVar8;
      }
      else {
        uVar21 = *(uint *)(iVar26 + uVar21 * 4);
        if (uVar21 < uVar15) break;
        if (uVar21 < uVar38) {
          uVar17 = uVar11;
        }
        else {
          uVar17 = uVar31;
        }
        HintPreloadData(uVar17 + uVar21);
        iVar29 = iVar8 + 1;
        local_12c[iVar8] = uVar21;
        bVar42 = iVar41 != 1;
        iVar41 = iVar41 + -1;
      }
      uVar36 = uVar36 & uVar36 - 1;
      if (uVar36 == 0) {
        bVar42 = false;
      }
      iVar8 = iVar29;
    } while (bVar42);
  }
  uVar21 = uVar27 - 1 & 0x1f;
  if (uVar21 == 0) {
    uVar21 = 0x1f;
  }
  *(char *)(iVar19 + uVar20 * 0x20) = (char)uVar21;
  *(char *)(iVar33 + uVar21) = (char)local_150;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar26 + uVar21 * 4) = iVar19;
  if (iVar8 == 0) {
    pcVar14 = (char *)0x3;
  }
  else {
    puVar25 = &uStack_130;
    iVar19 = 0;
    puVar23 = (uint *)(uVar31 + uVar38);
    puVar18 = (uint *)((int)param_3 + -3);
    puVar12 = param_2 + 1;
    pcVar28 = (char *)0x3;
    do {
      puVar25 = puVar25 + 1;
      uVar21 = *puVar25;
      if (uVar21 < uVar38) {
        iVar26 = uVar11 + uVar21;
        if (*(uint *)(uVar11 + uVar21) != *param_2) goto LAB_017d733c;
        puVar39 = (uint *)(iVar26 + 4);
        puVar13 = (uint *)((int)puVar12 + ((int)(uVar11 + uVar38) - (int)puVar39));
        if (param_3 < puVar13) {
          puVar13 = param_3;
        }
        puVar32 = (uint *)((int)puVar13 + -3);
        if (puVar12 < puVar32) {
          if (*(uint *)(iVar26 + 4) == param_2[1]) {
            puVar30 = param_2 + 2;
            puVar10 = (uint *)(iVar26 + 8);
            if (puVar30 < puVar32) {
              do {
                if (*puVar10 != *puVar30) {
                  uVar15 = *puVar10 ^ *puVar30;
                  bVar4 = (byte)uVar15;
                  bVar5 = (byte)(uVar15 >> 8);
                  bVar6 = (byte)(uVar15 >> 0x10);
                  bVar3 = (byte)(uVar15 >> 0x18);
                  pcVar14 = (char *)((int)puVar30 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                      bVar4 >> 1 & 1) << 1 |
                                                                     bVar4 >> 2 & 1) << 1 |
                                                                    bVar4 >> 3 & 1) << 1 |
                                                                   bVar4 >> 4 & 1) << 1 |
                                                                  bVar4 >> 5 & 1) << 1 |
                                                                 bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                bVar5 >> 1 & 1) << 1
                                                                               | bVar5 >> 2 & 1) <<
                                                                               1 | bVar5 >> 3 & 1)
                                                                              << 1 | bVar5 >> 4 & 1)
                                                                             << 1 | bVar5 >> 5 & 1)
                                                                            << 1 | bVar5 >> 6 & 1)
                                                                           << 1 | bVar5 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                      bVar6 >> 1 & 1) << 1 |
                                                                     bVar6 >> 2 & 1) << 1 |
                                                                    bVar6 >> 3 & 1) << 1 |
                                                                   bVar6 >> 4 & 1) << 1 |
                                                                  bVar6 >> 5 & 1) << 1 |
                                                                 bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar12));
                  goto joined_r0x017d74ec;
                }
                puVar30 = puVar30 + 1;
                puVar10 = puVar10 + 1;
              } while (puVar30 < puVar32);
            }
            goto LAB_017d7470;
          }
          uVar15 = param_2[1] ^ *(uint *)(iVar26 + 4);
          bVar4 = (byte)uVar15;
          bVar5 = (byte)(uVar15 >> 8);
          bVar6 = (byte)(uVar15 >> 0x10);
          bVar3 = (byte)(uVar15 >> 0x18);
          pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) <<
                                                             1 | bVar6 >> 2 & 1) << 1 |
                                                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) <<
                                                          1 | bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1)
                                                        << 1 | bVar6 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
        else {
          puVar10 = puVar39;
          puVar30 = puVar12;
LAB_017d7470:
          if (puVar30 < (uint *)((int)puVar13 + -1)) {
            if ((short)*puVar10 == (short)*puVar30) {
              puVar10 = (uint *)((int)puVar10 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < puVar13) && ((char)*puVar10 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar14 = (char *)((int)puVar30 - (int)puVar12);
        }
joined_r0x017d74ec:
        if ((char *)(uVar11 + uVar38) == (char *)((int)puVar39 + (int)pcVar14)) {
          puVar13 = (uint *)((int)puVar12 + (int)pcVar14);
          if (puVar13 < puVar18) {
            if (*puVar23 == *(uint *)((int)puVar12 + (int)pcVar14)) {
              puVar39 = puVar13 + 1;
              local_148 = puVar23 + 1;
              if (puVar39 < puVar18) {
                do {
                  if (*local_148 != *puVar39) {
                    uVar15 = *local_148 ^ *puVar39;
                    bVar4 = (byte)uVar15;
                    bVar5 = (byte)(uVar15 >> 8);
                    bVar6 = (byte)(uVar15 >> 0x10);
                    bVar3 = (byte)(uVar15 >> 0x18);
                    pcVar9 = (char *)((int)puVar39 +
                                     (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                       bVar4 >> 1 & 1) << 1 |
                                                                      bVar4 >> 2 & 1) << 1 |
                                                                     bVar4 >> 3 & 1) << 1 |
                                                                    bVar4 >> 4 & 1) << 1 |
                                                                   bVar4 >> 5 & 1) << 1 |
                                                                  bVar4 >> 6 & 1) << 1 | bVar4 >> 7)
                                                     << 0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                                 bVar5 >> 1 & 1) <<
                                                                                 1 | bVar5 >> 2 & 1)
                                                                                << 1 | bVar5 >> 3 &
                                                                                       1) << 1 |
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
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                              bVar3 >> 1 & 1) << 1 |
                                                                             bVar3 >> 2 & 1) << 1 |
                                                                            bVar3 >> 3 & 1) << 1 |
                                                                           bVar3 >> 4 & 1) << 1 |
                                                                          bVar3 >> 5 & 1) << 1 |
                                                                         bVar3 >> 6 & 1) << 1 |
                                                                        bVar3 >> 7)) >> 3) -
                                     (int)puVar13));
                    goto LAB_017d76b4;
                  }
                  puVar39 = puVar39 + 1;
                  local_148 = local_148 + 1;
                } while (puVar39 < puVar18);
              }
              goto LAB_017d7658;
            }
            uVar15 = *(uint *)((int)puVar12 + (int)pcVar14) ^ *puVar23;
            bVar4 = (byte)uVar15;
            bVar5 = (byte)(uVar15 >> 8);
            bVar6 = (byte)(uVar15 >> 0x10);
            bVar3 = (byte)(uVar15 >> 0x18);
            pcVar9 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                              1 | bVar4 >> 2 & 1) << 1 |
                                                            bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                           << 1 | bVar4 >> 5 & 1) << 1 |
                                                         bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
                                                                << 1 | bVar5 >> 2 & 1) << 1 |
                                                              bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1)
                                                             << 1 | bVar5 >> 5 & 1) << 1 |
                                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                       bVar6 >> 1 & 1) << 1 |
                                                                      bVar6 >> 2 & 1) << 1 |
                                                                     bVar6 >> 3 & 1) << 1 |
                                                                    bVar6 >> 4 & 1) << 1 |
                                                                   bVar6 >> 5 & 1) << 1 |
                                                                  bVar6 >> 6 & 1) << 1 | bVar6 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                              1 | bVar3 >> 2 & 1) << 1 |
                                                            bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                           << 1 | bVar3 >> 5 & 1) << 1 |
                                                         bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
          else {
            puVar39 = puVar13;
            local_148 = puVar23;
LAB_017d7658:
            if (puVar39 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_148 == (short)*puVar39) {
                local_148 = (uint *)((int)local_148 + 2);
                puVar39 = (uint *)((int)puVar39 + 2);
              }
            }
            if ((puVar39 < param_3) && ((char)*local_148 == (char)*puVar39)) {
              puVar39 = (uint *)((int)puVar39 + 1);
            }
            pcVar9 = (char *)((int)puVar39 - (int)puVar13);
          }
LAB_017d76b4:
          pcVar14 = pcVar14 + (int)pcVar9;
        }
        pcVar14 = pcVar14 + 4;
LAB_017d73cc:
        if (pcVar28 < pcVar14) {
          *param_4 = uVar7 + (3 - uVar21);
          pcVar28 = pcVar14;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar14)) break;
        }
      }
      else {
        puVar13 = (uint *)(uVar31 + uVar21);
        if (*(int *)((int)puVar13 + (int)(pcVar28 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar28 + -3))) {
          puVar39 = param_2;
          if (param_2 < puVar18) {
            if (*(uint *)(uVar31 + uVar21) == *param_2) {
              do {
                puVar39 = puVar39 + 1;
                puVar13 = puVar13 + 1;
                if (puVar18 <= puVar39) goto LAB_017d7570;
              } while (*puVar13 == *puVar39);
              uVar15 = *puVar13 ^ *puVar39;
              bVar4 = (byte)uVar15;
              bVar5 = (byte)(uVar15 >> 8);
              bVar6 = (byte)(uVar15 >> 0x10);
              bVar3 = (byte)(uVar15 >> 0x18);
              pcVar14 = (char *)((int)puVar39 +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1
                                                                  ) << 1 | bVar6 >> 2 & 1) << 1 |
                                                                bVar6 >> 3 & 1) << 1 |
                                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1
                                                              ) << 1 | bVar6 >> 6 & 1) << 1 |
                                                            bVar6 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7)) >> 3) - (int)param_2));
            }
            else {
              uVar15 = *(uint *)(uVar31 + uVar21) ^ *param_2;
              bVar4 = (byte)uVar15;
              bVar5 = (byte)(uVar15 >> 8);
              bVar6 = (byte)(uVar15 >> 0x10);
              bVar3 = (byte)(uVar15 >> 0x18);
              pcVar14 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
          }
          else {
LAB_017d7570:
            if (puVar39 < (uint *)((int)param_3 + -1)) {
              if ((short)*puVar13 == (short)*puVar39) {
                puVar13 = (uint *)((int)puVar13 + 2);
                puVar39 = (uint *)((int)puVar39 + 2);
              }
            }
            if ((puVar39 < param_3) && ((char)*puVar13 == (char)*puVar39)) {
              puVar39 = (uint *)((int)puVar39 + 1);
            }
            pcVar14 = (char *)((int)puVar39 - (int)param_2);
          }
          goto LAB_017d73cc;
        }
      }
LAB_017d733c:
      pcVar14 = pcVar28;
      iVar19 = iVar19 + 1;
      pcVar28 = pcVar14;
    } while (iVar19 != iVar8);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return pcVar14;
}

