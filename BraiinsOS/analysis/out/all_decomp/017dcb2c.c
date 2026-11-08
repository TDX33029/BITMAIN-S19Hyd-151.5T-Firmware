// FUN_017dcb2c @ 017dcb2c size=3680 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017dcb2c(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint unaff_r6;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  int *piVar29;
  int iVar30;
  uint *puVar31;
  char *pcVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  int *piVar39;
  bool bVar40;
  uint local_150;
  uint *local_140;
  uint *local_13c;
  char *local_138;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  pcVar32 = *(char **)(param_1 + 4);
  uVar33 = (int)param_2 - (int)pcVar32;
  puVar24 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_1 + 0x5c);
  uVar13 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar18 = *(int *)(param_1 + 0x28);
  uVar19 = *(uint *)(param_1 + 0x10);
  bVar40 = uVar33 - uVar19 <= uVar13;
  if (!bVar40) {
    unaff_r6 = uVar33 - uVar13;
  }
  if (bVar40) {
    unaff_r6 = uVar19;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r6 = uVar19;
  }
  iVar11 = *(int *)(param_1 + 0xc);
  iVar30 = *(int *)(param_1 + 0x24);
  uVar13 = *param_2 * -0x61c8864f >> (0x22 - puVar24[0x30] & 0xff);
  uVar34 = *(uint *)(param_1 + 0xc4);
  HintPreloadData(puVar24[0x17] + uVar13 * 0x10);
  uVar19 = uVar34;
  if (3 < uVar34) {
    uVar19 = 4;
  }
  uVar35 = uVar34;
  if (4 < uVar34) {
    uVar35 = uVar34 - 4;
  }
  iVar9 = 1 << (uVar19 & 0xff);
  uVar19 = *(uint *)(param_1 + 0x50);
  if (uVar34 < 5) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1 << (uVar35 & 0xff);
  }
  uVar34 = 0x18 - iVar30;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar35 = *(uint *)(param_1 + 0x1c);
    iVar26 = param_1 + 0x2c;
    iVar37 = iVar17;
    pcVar8 = pcVar32;
    iVar7 = iVar18;
    if (0x180 < uVar33 - uVar35) {
      uVar20 = uVar35 + 0x60;
      uVar15 = uVar19;
      if (uVar35 < uVar20) {
        while( true ) {
          uVar38 = (uVar15 ^ *(int *)(pcVar32 + uVar35 + 8) * -0x61c8864f) >> (uVar34 & 0xff);
          uVar27 = *(uint *)(iVar26 + (uVar35 & 7) * 4);
          uVar15 = uVar38 >> 8;
          HintPreloadData(iVar17 + uVar15 * 0x40);
          HintPreloadData(iVar18 + uVar15 * 0x10);
          uVar15 = uVar27 >> 8;
          *(uint *)(iVar26 + (uVar35 & 7) * 4) = uVar38;
          uVar38 = *(byte *)(iVar18 + uVar15 * 0x10) - 1 & 0xf;
          if (uVar38 == 0) {
            uVar38 = 0xf;
          }
          *(char *)(iVar18 + uVar15 * 0x10) = (char)uVar38;
          *(char *)(iVar18 + uVar15 * 0x10 + uVar38) = (char)uVar27;
          *(uint *)(iVar17 + (uVar15 * 0x10 + uVar38) * 4) = uVar35;
          uVar35 = uVar35 + 1;
          if (uVar20 == uVar35) break;
          uVar15 = *(uint *)(param_1 + 0x50);
        }
        iVar30 = *(int *)(param_1 + 0x24);
        iVar37 = *(int *)(param_1 + 0x5c);
        pcVar8 = *(char **)(param_1 + 4);
        iVar7 = *(int *)(param_1 + 0x28);
      }
      uVar35 = uVar33 + -0x20;
      if (pcVar32 + uVar35 <= (char *)((int)param_2 + 1)) {
        pcVar23 = (char *)((int)param_2 + 1) + (1 - (int)(pcVar32 + uVar35));
        if (pcVar23 < (char *)0x9) {
          uVar15 = uVar35 + (int)pcVar23;
        }
        else {
          uVar15 = uVar33 + -0x18;
        }
        if (uVar35 < uVar15) {
          uVar38 = *(uint *)(param_1 + 0x50);
          uVar20 = uVar35;
          do {
            piVar10 = (int *)(pcVar32 + uVar20);
            uVar16 = uVar20 & 7;
            uVar20 = uVar20 + 1;
            uVar1 = (*piVar10 * -0x61c8864f ^ uVar38) >> (0x18U - iVar30 & 0xff);
            uVar27 = uVar1 >> 8;
            HintPreloadData(iVar37 + uVar27 * 0x40);
            HintPreloadData(iVar7 + uVar27 * 0x10);
            *(uint *)(param_1 + uVar16 * 4 + 0x2c) = uVar1;
          } while (uVar20 < uVar15);
        }
      }
    }
    if (uVar35 < uVar33) {
      do {
        uVar20 = (*(int *)(pcVar8 + uVar35 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar30 & 0xff);
        uVar38 = *(uint *)(iVar26 + (uVar35 & 7) * 4);
        uVar15 = uVar20 >> 8;
        HintPreloadData(iVar37 + uVar15 * 0x40);
        HintPreloadData(iVar7 + uVar15 * 0x10);
        *(uint *)(iVar26 + (uVar35 & 7) * 4) = uVar20;
        uVar15 = uVar38 >> 8;
        uVar20 = *(byte *)(iVar7 + uVar15 * 0x10) - 1 & 0xf;
        if (uVar20 == 0) {
          uVar20 = 0xf;
        }
        *(char *)(iVar7 + uVar15 * 0x10) = (char)uVar20;
        *(char *)(iVar7 + uVar15 * 0x10 + uVar20) = (char)uVar38;
        *(uint *)(iVar37 + (uVar20 + uVar15 * 0x10) * 4) = uVar35;
        uVar35 = uVar35 + 1;
      } while (uVar33 != uVar35);
    }
    *(uint *)(param_1 + 0x1c) = uVar33;
    uVar34 = (param_2[2] * -0x61c8864f ^ uVar19) >> (uVar34 & 0xff);
    local_150 = *(uint *)(iVar26 + (uVar33 & 7) * 4);
    uVar19 = uVar34 >> 8;
    HintPreloadData(iVar17 + uVar19 * 0x40);
    HintPreloadData(iVar18 + uVar19 * 0x10);
    *(uint *)(iVar26 + (uVar33 & 7) * 4) = uVar34;
  }
  else {
    local_150 = (*param_2 * -0x61c8864f ^ uVar19) >> (uVar34 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar33;
  }
  uVar19 = local_150 >> 8;
  iVar17 = iVar17 + uVar19 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  iVar30 = iVar18 + uVar19 * 0x10;
  uVar35 = (local_150 & 0xff) * 0x1010101;
  uVar15 = *(uint *)(iVar30 + 0xc) ^ uVar35;
  uVar34 = *(uint *)(iVar30 + 8) ^ uVar35;
  uVar38 = *(uint *)(iVar30 + 4) ^ uVar35;
  uVar35 = *(uint *)(iVar18 + uVar19 * 0x10) ^ uVar35;
  uVar27 = (uint)*(byte *)(iVar18 + uVar19 * 0x10);
  uVar20 = uVar27 & 0xf;
  uVar34 = (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4;
  uVar34 = (~uVar34 << (-uVar20 & 0xf) | (uVar34 ^ 0xffff) >> uVar20) & 0xffff;
  if (uVar34 == 0) {
    iVar37 = 0;
  }
  else {
    iVar37 = 0;
    do {
      if (uVar34 == 0) {
        iVar7 = 0;
      }
      else {
        bVar3 = (byte)uVar34;
        bVar2 = (byte)(uVar34 >> 8);
        iVar7 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                              bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar35 = iVar7 + uVar20 & 0xf;
      if (uVar35 == 0) {
        bVar40 = true;
        iVar7 = iVar37;
      }
      else {
        uVar35 = *(uint *)(iVar17 + uVar35 * 4);
        if (uVar35 < unaff_r6) break;
        HintPreloadData(pcVar32 + uVar35);
        iVar7 = iVar37 + 1;
        local_12c[iVar37] = uVar35;
        bVar40 = iVar9 != 1;
        iVar9 = iVar9 + -1;
      }
      uVar34 = uVar34 & uVar34 - 1;
      if (uVar34 == 0) {
        bVar40 = false;
      }
      iVar37 = iVar7;
    } while (bVar40);
  }
  uVar34 = uVar27 - 1 & 0xf;
  if (uVar34 == 0) {
    uVar34 = 0xf;
  }
  *(char *)(iVar18 + uVar19 * 0x10) = (char)uVar34;
  *(char *)(iVar30 + uVar34) = (char)local_150;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar17 + uVar34 * 4) = iVar18;
  if (iVar37 == 0) {
    local_13c = (uint *)0x3;
  }
  else {
    piVar10 = &iStack_130;
    iVar17 = 0;
    pcVar8 = (char *)0x3;
    do {
      while( true ) {
        piVar10 = piVar10 + 1;
        iVar18 = *piVar10;
        puVar36 = (uint *)(pcVar32 + iVar18);
        if (*(int *)((int)puVar36 + (int)(pcVar8 + -3)) ==
            *(int *)((int)param_2 + (int)(pcVar8 + -3))) break;
LAB_017dcf7c:
        iVar17 = iVar17 + 1;
        local_13c = (uint *)pcVar8;
        if (iVar17 == iVar37) goto LAB_017dd044;
      }
      local_13c = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(pcVar32 + iVar18) == *param_2) {
          do {
            local_13c = local_13c + 1;
            puVar36 = puVar36 + 1;
            if ((uint *)((int)param_3 + -3) <= local_13c) {
              if (((uint *)((int)param_3 + -1) <= local_13c) ||
                 ((short)*puVar36 != (short)*local_13c)) goto LAB_017dd724;
              goto LAB_017dd71c;
            }
          } while (*puVar36 == *local_13c);
          uVar19 = *puVar36 ^ *local_13c;
          bVar3 = (byte)uVar19;
          bVar4 = (byte)(uVar19 >> 8);
          bVar5 = (byte)(uVar19 >> 0x10);
          bVar2 = (byte)(uVar19 >> 0x18);
          local_13c = (uint *)((int)local_13c +
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
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3)
                              - (int)param_2));
        }
        else {
          uVar19 = *(uint *)(pcVar32 + iVar18) ^ *param_2;
          bVar3 = (byte)uVar19;
          bVar4 = (byte)(uVar19 >> 8);
          bVar5 = (byte)(uVar19 >> 0x10);
          bVar2 = (byte)(uVar19 >> 0x18);
          local_13c = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
        }
      }
      else {
        if (param_2 < (uint *)((int)param_3 + -1)) {
          if (*(short *)(pcVar32 + iVar18) == (short)*param_2) {
LAB_017dd71c:
            local_13c = (uint *)((int)local_13c + 2);
            puVar36 = (uint *)((int)puVar36 + 2);
LAB_017dd724:
            if (local_13c < param_3) goto LAB_017dcfd4;
          }
          else {
            if (param_3 <= param_2) goto LAB_017dcf7c;
LAB_017dcfd4:
            if ((char)*puVar36 == (char)*local_13c) goto LAB_017dd374;
          }
        }
        else {
          if ((param_3 <= param_2) || ((char)*param_2 != pcVar32[iVar18])) goto LAB_017dcf7c;
LAB_017dd374:
          local_13c = (uint *)((int)local_13c + 1);
        }
        local_13c = (uint *)((int)local_13c - (int)param_2);
      }
      if (local_13c <= pcVar8) goto LAB_017dcf7c;
      *param_4 = uVar33 + (3 - iVar18);
      if (param_3 == (uint *)((int)param_2 + (int)local_13c)) break;
      iVar17 = iVar17 + 1;
      pcVar8 = (char *)local_13c;
    } while (iVar17 != iVar37);
  }
LAB_017dd044:
  iVar17 = puVar24[0x17];
  iVar37 = puVar24[1];
  uVar19 = iVar6 + iVar9;
  piVar39 = (int *)(iVar17 + uVar13 * 0x10);
  iVar30 = puVar24[0x19];
  iVar18 = uVar13 * 4 + 0x40000003;
  HintPreloadData(iVar37 + *(int *)(iVar17 + uVar13 * 0x10));
  piVar10 = (int *)(*(uint *)(iVar17 + iVar18 * 4) >> 8);
  HintPreloadData(iVar37 + piVar39[1]);
  HintPreloadData(iVar30 + (int)piVar10 * 4);
  HintPreloadData(iVar37 + piVar39[2]);
  if (uVar19 != 0) {
    pcVar8 = (char *)*puVar24;
    puVar12 = (uint *)(pcVar32 + iVar11);
    puVar36 = (uint *)((int)param_3 + -3);
    uVar13 = uVar19;
    if (2 < uVar19) {
      uVar13 = 3;
    }
    puVar31 = param_2 + 1;
    pcVar32 = pcVar8 + uVar33 + ((3 - iVar11) - iVar37);
    uVar34 = 0;
    do {
      while( true ) {
        uVar35 = uVar34;
        iVar9 = *piVar39;
        if (iVar9 == 0) {
          piVar10 = (int *)0x0;
          goto LAB_017dd318;
        }
        iVar6 = iVar37 + iVar9;
        if (*(uint *)(iVar37 + iVar9) == *param_2) break;
LAB_017dd100:
        piVar39 = piVar39 + 1;
        uVar34 = uVar35 + 1;
        if (uVar13 <= uVar35 + 1) goto LAB_017dd1cc;
      }
      puVar25 = (uint *)(iVar6 + 4);
      puVar21 = (uint *)((int)puVar31 + ((int)pcVar8 - (int)puVar25));
      if (param_3 < puVar21) {
        puVar21 = param_3;
      }
      puVar28 = (uint *)((int)puVar21 + -3);
      if (puVar31 < puVar28) {
        if (*(uint *)(iVar6 + 4) == param_2[1]) {
          puVar14 = param_2 + 2;
          local_140 = (uint *)(iVar6 + 8);
          if (puVar14 < puVar28) {
            do {
              if (*local_140 != *puVar14) {
                uVar34 = *local_140 ^ *puVar14;
                bVar3 = (byte)uVar34;
                bVar4 = (byte)(uVar34 >> 8);
                bVar5 = (byte)(uVar34 >> 0x10);
                bVar2 = (byte)(uVar34 >> 0x18);
                pcVar32 = (char *)((int)puVar14 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                    bVar3 >> 1 & 1) << 1 |
                                                                   bVar3 >> 2 & 1) << 1 |
                                                                  bVar3 >> 3 & 1) << 1 |
                                                                 bVar3 >> 4 & 1) << 1 |
                                                                bVar3 >> 5 & 1) << 1 |
                                                               bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
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
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar31));
                goto joined_r0x017dd420;
              }
              puVar14 = puVar14 + 1;
              local_140 = local_140 + 1;
            } while (puVar14 < puVar28);
          }
          goto LAB_017dd3bc;
        }
        uVar34 = *(uint *)(iVar6 + 4) ^ param_2[1];
        bVar3 = (byte)uVar34;
        bVar4 = (byte)(uVar34 >> 8);
        bVar5 = (byte)(uVar34 >> 0x10);
        bVar2 = (byte)(uVar34 >> 0x18);
        pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7)) >> 3);
      }
      else {
        puVar14 = puVar31;
        local_140 = puVar25;
LAB_017dd3bc:
        if (puVar14 < (uint *)((int)puVar21 + -1)) {
          if ((short)*local_140 == (short)*puVar14) {
            local_140 = (uint *)((int)local_140 + 2);
            puVar14 = (uint *)((int)puVar14 + 2);
          }
        }
        if ((puVar14 < puVar21) && ((char)*local_140 == (char)*puVar14)) {
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        pcVar32 = (char *)((int)puVar14 - (int)puVar31);
      }
joined_r0x017dd420:
      if (pcVar8 == (char *)((int)puVar25 + (int)pcVar32)) {
        puVar21 = (uint *)((int)puVar31 + (int)pcVar32);
        if (puVar21 < puVar36) {
          if (*puVar12 == *(uint *)((int)puVar31 + (int)pcVar32)) {
            puVar25 = puVar21 + 1;
            local_140 = puVar12 + 1;
            if (puVar25 < puVar36) {
              do {
                if (*local_140 != *puVar25) {
                  uVar34 = *local_140 ^ *puVar25;
                  bVar3 = (byte)uVar34;
                  bVar4 = (byte)(uVar34 >> 8);
                  bVar5 = (byte)(uVar34 >> 0x10);
                  bVar2 = (byte)(uVar34 >> 0x18);
                  pcVar23 = (char *)((int)puVar25 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                      bVar3 >> 1 & 1) << 1 |
                                                                     bVar3 >> 2 & 1) << 1 |
                                                                    bVar3 >> 3 & 1) << 1 |
                                                                   bVar3 >> 4 & 1) << 1 |
                                                                  bVar3 >> 5 & 1) << 1 |
                                                                 bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar21));
                  goto LAB_017dd520;
                }
                puVar25 = puVar25 + 1;
                local_140 = local_140 + 1;
              } while (puVar25 < puVar36);
            }
            goto LAB_017dd4d4;
          }
          uVar34 = *puVar12 ^ *(uint *)((int)puVar31 + (int)pcVar32);
          bVar3 = (byte)uVar34;
          bVar4 = (byte)(uVar34 >> 8);
          bVar5 = (byte)(uVar34 >> 0x10);
          bVar2 = (byte)(uVar34 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar25 = puVar21;
          local_140 = puVar12;
LAB_017dd4d4:
          if (puVar25 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_140 == (short)*puVar25) {
              local_140 = (uint *)((int)local_140 + 2);
              puVar25 = (uint *)((int)puVar25 + 2);
            }
          }
          if ((puVar25 < param_3) && ((char)*local_140 == (char)*puVar25)) {
            puVar25 = (uint *)((int)puVar25 + 1);
          }
          pcVar23 = (char *)((int)puVar25 - (int)puVar21);
        }
LAB_017dd520:
        pcVar32 = pcVar32 + (int)pcVar23;
      }
      pcVar32 = pcVar32 + 4;
      if (pcVar32 <= local_13c) goto LAB_017dd100;
      piVar10 = (int *)(pcVar8 + uVar33 + ((3 - iVar11) - iVar37) + -iVar9);
      *param_4 = (uint)piVar10;
      if (param_3 == (uint *)((int)param_2 + (int)pcVar32)) goto LAB_017dd93c;
      piVar39 = piVar39 + 1;
      uVar34 = uVar35 + 1;
      local_13c = (uint *)pcVar32;
    } while (uVar35 + 1 < uVar13);
LAB_017dd1cc:
    piVar10 = *(int **)(iVar17 + iVar18 * 4);
    uVar19 = uVar19 - (uVar35 + 1);
    if (((uint)piVar10 & 0xff) < uVar19) {
      uVar19 = (uint)piVar10 & 0xff;
    }
    if (uVar19 != 0) {
      piVar39 = (int *)(iVar30 + ((uint)piVar10 >> 8) * 4);
      piVar29 = (int *)(iVar30 + (((uint)piVar10 >> 8) + uVar19) * 4);
      piVar10 = piVar39;
      do {
        piVar22 = piVar10 + 1;
        HintPreloadData(iVar37 + *piVar10);
        piVar10 = piVar22;
      } while (piVar22 != piVar29);
      puVar31 = param_2 + 1;
      local_138 = (char *)local_13c;
      puVar36 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar10 = piVar39;
          iVar18 = *piVar10;
          iVar17 = iVar37 + iVar18;
          pcVar32 = *(char **)(iVar37 + iVar18);
          if (pcVar32 == (char *)*param_2) break;
LAB_017dd260:
          piVar39 = piVar10 + 1;
          if (piVar10 + 1 == piVar29) goto LAB_017dd314;
        }
        puVar25 = (uint *)(iVar17 + 4);
        puVar21 = (uint *)((int)puVar31 + ((int)pcVar8 - (int)puVar25));
        if (param_3 < puVar21) {
          puVar21 = param_3;
        }
        puVar28 = (uint *)((int)puVar21 + -3);
        if (puVar31 < puVar28) {
          if (*(uint *)(iVar17 + 4) == param_2[1]) {
            puVar14 = param_2 + 2;
            local_13c = (uint *)(iVar17 + 8);
            if (puVar14 < puVar28) {
              do {
                if (*local_13c != *puVar14) {
                  uVar13 = *local_13c ^ *puVar14;
                  bVar3 = (byte)uVar13;
                  bVar4 = (byte)(uVar13 >> 8);
                  bVar5 = (byte)(uVar13 >> 0x10);
                  bVar2 = (byte)(uVar13 >> 0x18);
                  pcVar32 = (char *)((int)puVar14 +
                                    (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                      bVar3 >> 1 & 1) << 1 |
                                                                     bVar3 >> 2 & 1) << 1 |
                                                                    bVar3 >> 3 & 1) << 1 |
                                                                   bVar3 >> 4 & 1) << 1 |
                                                                  bVar3 >> 5 & 1) << 1 |
                                                                 bVar3 >> 6 & 1) << 1 | bVar3 >> 7)
                                                    << 0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                                bVar4 >> 1 & 1) << 1
                                                                               | bVar4 >> 2 & 1) <<
                                                                               1 | bVar4 >> 3 & 1)
                                                                              << 1 | bVar4 >> 4 & 1)
                                                                             << 1 | bVar4 >> 5 & 1)
                                                                            << 1 | bVar4 >> 6 & 1)
                                                                           << 1 | bVar4 >> 7) <<
                                                              0x10 |
                                                    (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                      bVar5 >> 1 & 1) << 1 |
                                                                     bVar5 >> 2 & 1) << 1 |
                                                                    bVar5 >> 3 & 1) << 1 |
                                                                   bVar5 >> 4 & 1) << 1 |
                                                                  bVar5 >> 5 & 1) << 1 |
                                                                 bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar31));
                  goto joined_r0x017dd634;
                }
                puVar14 = puVar14 + 1;
                local_13c = local_13c + 1;
              } while (puVar14 < puVar28);
            }
            goto LAB_017dd5d0;
          }
          uVar13 = *(uint *)(iVar17 + 4) ^ param_2[1];
          bVar3 = (byte)uVar13;
          bVar4 = (byte)(uVar13 >> 8);
          bVar5 = (byte)(uVar13 >> 0x10);
          bVar2 = (byte)(uVar13 >> 0x18);
          pcVar32 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7) << 0x18 |
                                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
                                                             1 | bVar4 >> 2 & 1) << 1 |
                                                           bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) <<
                                                          1 | bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1)
                                                        << 1 | bVar4 >> 7) << 0x10 |
                                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
                                                             1 | bVar5 >> 2 & 1) << 1 |
                                                           bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) <<
                                                          1 | bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1)
                                                        << 1 | bVar5 >> 7) << 8 |
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar14 = puVar31;
          local_13c = puVar25;
LAB_017dd5d0:
          if (puVar14 < (uint *)((int)puVar21 + -1)) {
            if ((short)*local_13c == (short)*puVar14) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar14 = (uint *)((int)puVar14 + 2);
            }
          }
          if ((puVar14 < puVar21) && ((char)*local_13c == (char)*puVar14)) {
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          pcVar32 = (char *)((int)puVar14 - (int)puVar31);
        }
joined_r0x017dd634:
        if (pcVar8 == (char *)((int)puVar25 + (int)pcVar32)) {
          puVar21 = (uint *)((int)puVar31 + (int)pcVar32);
          if (puVar21 < puVar36) {
            if (*puVar12 == *(uint *)((int)puVar31 + (int)pcVar32)) {
              puVar25 = puVar21 + 1;
              local_13c = puVar12 + 1;
              if (puVar25 < puVar36) {
                do {
                  if (*local_13c != *puVar25) {
                    uVar13 = *local_13c ^ *puVar25;
                    bVar3 = (byte)uVar13;
                    bVar4 = (byte)(uVar13 >> 8);
                    bVar5 = (byte)(uVar13 >> 0x10);
                    bVar2 = (byte)(uVar13 >> 0x18);
                    pcVar23 = (char *)((int)puVar25 +
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
                                                      (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar21));
                    goto LAB_017dd66c;
                  }
                  puVar25 = puVar25 + 1;
                  local_13c = local_13c + 1;
                } while (puVar25 < puVar36);
              }
              goto LAB_017dd6bc;
            }
            uVar13 = *puVar12 ^ *(uint *)((int)puVar31 + (int)pcVar32);
            bVar3 = (byte)uVar13;
            bVar4 = (byte)(uVar13 >> 8);
            bVar5 = (byte)(uVar13 >> 0x10);
            bVar2 = (byte)(uVar13 >> 0x18);
            pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                               << 1 | bVar2 >> 2 & 1) << 1 |
                                                             bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                            << 1 | bVar2 >> 5 & 1) << 1 |
                                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3);
          }
          else {
            puVar25 = puVar21;
            local_13c = puVar12;
LAB_017dd6bc:
            if (puVar25 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar25) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar25 = (uint *)((int)puVar25 + 2);
              }
            }
            if ((puVar25 < param_3) && ((char)*local_13c == (char)*puVar25)) {
              puVar25 = (uint *)((int)puVar25 + 1);
            }
            pcVar23 = (char *)((int)puVar25 - (int)puVar21);
          }
LAB_017dd66c:
          pcVar32 = pcVar32 + (int)pcVar23;
        }
        pcVar32 = pcVar32 + 4;
        if (pcVar32 <= local_138) goto LAB_017dd260;
        *param_4 = (uint)(pcVar8 + uVar33 + (((3 - iVar11) - iVar37) - iVar18));
        if (param_3 == (uint *)((int)param_2 + (int)pcVar32)) goto LAB_017dd93c;
        piVar39 = piVar10 + 1;
        local_138 = pcVar32;
      } while (piVar10 + 1 != piVar29);
LAB_017dd314:
      piVar10 = piVar10 + 1;
      local_13c = (uint *)local_138;
    }
  }
LAB_017dd318:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar10,pcVar32,local_2c ^ DAT_018ddaf8,0);
  }
  return (char *)local_13c;
LAB_017dd93c:
  local_13c = (uint *)pcVar32;
  goto LAB_017dd318;
}

