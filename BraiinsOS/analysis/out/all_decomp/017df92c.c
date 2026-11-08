// FUN_017df92c @ 017df92c size=3792 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017df92c(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  char *pcVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  int iVar27;
  uint *puVar28;
  uint unaff_r9;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  char *pcVar38;
  int *piVar39;
  bool bVar40;
  uint local_150;
  int local_14c;
  uint *local_140;
  uint *local_13c;
  char *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  pcVar38 = *(char **)(param_1 + 4);
  uVar32 = (int)param_2 - (int)pcVar38;
  puVar20 = *(undefined4 **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  iVar14 = *(int *)(param_1 + 0x28);
  uVar11 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  uVar15 = *(uint *)(param_1 + 0x10);
  iVar27 = *(int *)(param_1 + 0x24);
  bVar40 = uVar32 - uVar15 <= uVar11;
  if (!bVar40) {
    unaff_r9 = uVar32 - uVar11;
  }
  if (bVar40) {
    unaff_r9 = uVar15;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r9 = uVar15;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  uVar11 = *param_2 * -0x61c8864f >> (0x22 - puVar20[0x30] & 0xff);
  uVar33 = *(uint *)(param_1 + 0xc4);
  iVar23 = *(int *)(param_1 + 0x5c);
  HintPreloadData(puVar20[0x17] + uVar11 * 0x10);
  uVar15 = uVar33;
  if (4 < uVar33) {
    uVar15 = 5;
  }
  if (uVar33 < 6) {
    iVar34 = 0;
  }
  else {
    iVar34 = 1 << (uVar33 - 5 & 0xff);
  }
  local_14c = 1 << (uVar15 & 0xff);
  uVar15 = *(uint *)(param_1 + 0x50);
  uVar33 = 0x18 - iVar27;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar29 = param_1 + 0x2c;
    iVar7 = iVar23;
    iVar36 = iVar14;
    pcVar6 = pcVar38;
    if (0x180 < uVar32 - uVar13) {
      uVar16 = uVar13 + 0x60;
      uVar21 = uVar15;
      if (uVar13 < uVar16) {
        while( true ) {
          uVar24 = (uVar21 ^ *(int *)(pcVar38 + uVar13 + 8) * -0x61c8864f) >> (uVar33 & 0xff);
          uVar30 = *(uint *)(iVar29 + (uVar13 & 7) * 4);
          uVar21 = uVar24 >> 8;
          HintPreloadData(iVar14 + uVar21 * 0x20);
          iVar27 = uVar21 * 0x80;
          HintPreloadData(iVar23 + iVar27);
          HintPreloadData(iVar23 + iVar27 + 0x40);
          uVar21 = uVar30 >> 8;
          *(uint *)(iVar29 + (uVar13 & 7) * 4) = uVar24;
          uVar24 = *(byte *)(iVar14 + uVar21 * 0x20) - 1 & 0x1f;
          if (uVar24 == 0) {
            uVar24 = 0x1f;
          }
          *(char *)(iVar14 + uVar21 * 0x20) = (char)uVar24;
          *(char *)(iVar14 + uVar21 * 0x20 + uVar24) = (char)uVar30;
          *(uint *)(iVar23 + (uVar21 * 0x20 + uVar24) * 4) = uVar13;
          uVar13 = uVar13 + 1;
          if (uVar16 == uVar13) break;
          uVar21 = *(uint *)(param_1 + 0x50);
        }
        iVar27 = *(int *)(param_1 + 0x24);
        iVar7 = *(int *)(param_1 + 0x5c);
        iVar36 = *(int *)(param_1 + 0x28);
        pcVar6 = *(char **)(param_1 + 4);
      }
      uVar13 = uVar32 + -0x20;
      if (pcVar38 + uVar13 <= (char *)((int)param_2 + 1)) {
        pcVar19 = (char *)((int)param_2 + 1) + (1 - (int)(pcVar38 + uVar13));
        if (pcVar19 < (char *)0x9) {
          uVar21 = uVar13 + (int)pcVar19;
        }
        else {
          uVar21 = uVar32 + -0x18;
        }
        if (uVar13 < uVar21) {
          uVar24 = *(uint *)(param_1 + 0x50);
          uVar16 = uVar13;
          do {
            piVar8 = (int *)(pcVar38 + uVar16);
            uVar35 = uVar16 & 7;
            uVar16 = uVar16 + 1;
            uVar31 = (*piVar8 * -0x61c8864f ^ uVar24) >> (0x18U - iVar27 & 0xff);
            uVar30 = uVar31 >> 8;
            HintPreloadData(iVar36 + uVar30 * 0x20);
            iVar1 = uVar30 * 0x80;
            HintPreloadData(iVar7 + iVar1);
            HintPreloadData(iVar7 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar35 * 4 + 0x2c) = uVar31;
          } while (uVar16 < uVar21);
        }
      }
    }
    if (uVar13 < uVar32) {
      do {
        uVar16 = (*(int *)(pcVar6 + uVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar27 & 0xff);
        uVar24 = *(uint *)(iVar29 + (uVar13 & 7) * 4);
        uVar21 = uVar16 >> 8;
        HintPreloadData(iVar36 + uVar21 * 0x20);
        iVar1 = uVar21 * 0x80;
        HintPreloadData(iVar7 + iVar1);
        HintPreloadData(iVar7 + iVar1 + 0x40);
        *(uint *)(iVar29 + (uVar13 & 7) * 4) = uVar16;
        uVar21 = uVar24 >> 8;
        uVar16 = *(byte *)(iVar36 + uVar21 * 0x20) - 1 & 0x1f;
        if (uVar16 == 0) {
          uVar16 = 0x1f;
        }
        *(char *)(iVar36 + uVar21 * 0x20) = (char)uVar16;
        *(char *)(iVar36 + uVar21 * 0x20 + uVar16) = (char)uVar24;
        *(uint *)(iVar7 + (uVar16 + uVar21 * 0x20) * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar32 != uVar13);
    }
    *(uint *)(param_1 + 0x1c) = uVar32;
    uVar33 = (param_2[2] * -0x61c8864f ^ uVar15) >> (uVar33 & 0xff);
    local_150 = *(uint *)(iVar29 + (uVar32 & 7) * 4);
    uVar15 = uVar33 >> 8;
    HintPreloadData(iVar14 + uVar15 * 0x20);
    iVar27 = uVar15 * 0x80;
    HintPreloadData(iVar23 + iVar27);
    HintPreloadData(iVar23 + iVar27 + 0x40);
    *(uint *)(iVar29 + (uVar32 & 7) * 4) = uVar33;
  }
  else {
    local_150 = (*param_2 * -0x61c8864f ^ uVar15) >> (uVar33 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar32;
  }
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  uVar15 = local_150 >> 8;
  iVar23 = iVar23 + uVar15 * 0x80;
  iVar27 = iVar14 + uVar15 * 0x20;
  uVar13 = (local_150 & 0xff) * 0x1010101;
  uVar33 = *(uint *)(iVar27 + 0x1c) ^ uVar13;
  uVar35 = *(uint *)(iVar27 + 0x18) ^ uVar13;
  uVar21 = *(uint *)(iVar27 + 0x14) ^ uVar13;
  uVar30 = *(uint *)(iVar27 + 0x10) ^ uVar13;
  uVar16 = *(uint *)(iVar27 + 0xc) ^ uVar13;
  uVar31 = *(uint *)(iVar27 + 8) ^ uVar13;
  uVar24 = *(uint *)(iVar27 + 4) ^ uVar13;
  uVar13 = uVar13 ^ *(uint *)(iVar14 + uVar15 * 0x20);
  uVar33 = ~((((uVar13 | 0x80808080) + 0xfefefeff | uVar13) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar30 | 0x80808080) + 0xfefefeff | uVar30) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar21 = (uint)*(byte *)(iVar14 + uVar15 * 0x20);
  uVar13 = uVar21 & 0x1f;
  uVar33 = uVar33 >> uVar13 | uVar33 << 0x20 - uVar13;
  if (uVar33 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      if (uVar33 == 0) {
        iVar36 = 0;
      }
      else {
        bVar3 = (byte)uVar33;
        bVar4 = (byte)(uVar33 >> 8);
        bVar5 = (byte)(uVar33 >> 0x10);
        bVar2 = (byte)(uVar33 >> 0x18);
        iVar36 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar16 = iVar36 + uVar13 & 0x1f;
      if (uVar16 == 0) {
        bVar40 = true;
        iVar36 = iVar7;
      }
      else {
        uVar16 = *(uint *)(iVar23 + uVar16 * 4);
        if (uVar16 < unaff_r9) break;
        HintPreloadData(pcVar38 + uVar16);
        iVar36 = iVar7 + 1;
        local_12c[iVar7] = uVar16;
        bVar40 = local_14c != 1;
        local_14c = local_14c + -1;
      }
      uVar33 = uVar33 & uVar33 - 1;
      if (uVar33 == 0) {
        bVar40 = false;
      }
      iVar7 = iVar36;
    } while (bVar40);
  }
  uVar33 = uVar21 - 1 & 0x1f;
  if (uVar33 == 0) {
    uVar33 = 0x1f;
  }
  *(char *)(iVar14 + uVar15 * 0x20) = (char)uVar33;
  *(char *)(iVar27 + uVar33) = (char)local_150;
  iVar14 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar14 + 1;
  *(int *)(iVar23 + uVar33 * 4) = iVar14;
  if (iVar7 == 0) {
    local_13c = (uint *)0x3;
  }
  else {
    piVar8 = &iStack_130;
    iVar14 = 0;
    pcVar6 = (char *)0x3;
    do {
      piVar8 = piVar8 + 1;
      iVar27 = *piVar8;
      puVar37 = (uint *)(pcVar38 + iVar27);
      if (*(int *)((int)puVar37 + (int)(pcVar6 + -3)) == *(int *)((int)param_2 + (int)(pcVar6 + -3))
         ) {
        local_13c = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(pcVar38 + iVar27) == *param_2) {
            do {
              local_13c = local_13c + 1;
              puVar37 = puVar37 + 1;
              if ((uint *)((int)param_3 + -3) <= local_13c) {
                if (((uint *)((int)param_3 + -1) <= local_13c) ||
                   ((short)*puVar37 != (short)*local_13c)) goto LAB_017e0598;
                goto LAB_017e0590;
              }
            } while (*puVar37 == *local_13c);
            uVar15 = *puVar37 ^ *local_13c;
            bVar3 = (byte)uVar15;
            bVar4 = (byte)(uVar15 >> 8);
            bVar5 = (byte)(uVar15 >> 0x10);
            bVar2 = (byte)(uVar15 >> 0x18);
            local_13c = (uint *)((int)local_13c +
                                (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7) << 0x18 |
                                                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1
                                                                  ) << 1 | bVar4 >> 2 & 1) << 1 |
                                                                bVar4 >> 3 & 1) << 1 |
                                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1
                                                              ) << 1 | bVar4 >> 6 & 1) << 1 |
                                                            bVar4 >> 7) << 0x10 |
                                                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1
                                                                  ) << 1 | bVar5 >> 2 & 1) << 1 |
                                                                bVar5 >> 3 & 1) << 1 |
                                                               bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1
                                                              ) << 1 | bVar5 >> 6 & 1) << 1 |
                                                            bVar5 >> 7) << 8 |
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)param_2));
          }
          else {
            uVar15 = *(uint *)(pcVar38 + iVar27) ^ *param_2;
            bVar3 = (byte)uVar15;
            bVar4 = (byte)(uVar15 >> 8);
            bVar5 = (byte)(uVar15 >> 0x10);
            bVar2 = (byte)(uVar15 >> 0x18);
            local_13c = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                   bVar2 >> 1 & 1) << 1 |
                                                                  bVar2 >> 2 & 1) << 1 |
                                                                 bVar2 >> 3 & 1) << 1 |
                                                                bVar2 >> 4 & 1) << 1 |
                                                               bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1
                                                              ) << 1 | bVar2 >> 7)) >> 3);
          }
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(pcVar38 + iVar27) == (short)*param_2) {
LAB_017e0590:
              local_13c = (uint *)((int)local_13c + 2);
              puVar37 = (uint *)((int)puVar37 + 2);
LAB_017e0598:
              if (local_13c < param_3) goto LAB_017dfe50;
            }
            else {
              if (param_3 <= param_2) goto LAB_017dfdf8;
LAB_017dfe50:
              if ((char)*puVar37 == (char)*local_13c) goto LAB_017e02c8;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != pcVar38[iVar27])) goto LAB_017dfdf8;
LAB_017e02c8:
            local_13c = (uint *)((int)local_13c + 1);
          }
          local_13c = (uint *)((int)local_13c - (int)param_2);
        }
        if (pcVar6 < local_13c) {
          *param_4 = uVar32 + (3 - iVar27);
          pcVar6 = (char *)local_13c;
          if (param_3 == (uint *)((int)param_2 + (int)local_13c)) break;
        }
      }
LAB_017dfdf8:
      local_13c = (uint *)pcVar6;
      iVar14 = iVar14 + 1;
      pcVar6 = (char *)local_13c;
    } while (iVar14 != iVar7);
  }
  uVar15 = iVar34 + local_14c;
  iVar14 = puVar20[0x17];
  iVar34 = puVar20[1];
  piVar39 = (int *)(iVar14 + uVar11 * 0x10);
  iVar23 = puVar20[0x19];
  iVar27 = uVar11 * 4 + 0x40000003;
  HintPreloadData(iVar34 + *(int *)(iVar14 + uVar11 * 0x10));
  piVar8 = (int *)(*(uint *)(iVar14 + iVar27 * 4) >> 8);
  HintPreloadData(iVar34 + piVar39[1]);
  HintPreloadData(iVar23 + (int)piVar8 * 4);
  HintPreloadData(iVar34 + piVar39[2]);
  if (uVar15 != 0) {
    pcVar6 = (char *)*puVar20;
    puVar10 = (uint *)(pcVar38 + iVar9);
    puVar37 = (uint *)((int)param_3 + -3);
    uVar11 = uVar15;
    if (2 < uVar15) {
      uVar11 = 3;
    }
    puVar28 = param_2 + 1;
    pcVar38 = pcVar6 + uVar32 + ((3 - iVar9) - iVar34);
    uVar33 = 0;
    do {
      while( true ) {
        uVar13 = uVar33;
        iVar7 = *piVar39;
        if (iVar7 == 0) {
          piVar8 = (int *)0x0;
          goto LAB_017e0190;
        }
        iVar36 = iVar34 + iVar7;
        if (*(uint *)(iVar34 + iVar7) == *param_2) break;
LAB_017dff74:
        piVar39 = piVar39 + 1;
        uVar33 = uVar13 + 1;
        if (uVar11 <= uVar13 + 1) goto LAB_017e0040;
      }
      puVar22 = (uint *)(iVar36 + 4);
      puVar17 = (uint *)((int)puVar28 + ((int)pcVar6 - (int)puVar22));
      if (param_3 < puVar17) {
        puVar17 = param_3;
      }
      puVar25 = (uint *)((int)puVar17 + -3);
      if (puVar28 < puVar25) {
        if (*(uint *)(iVar36 + 4) == param_2[1]) {
          puVar12 = param_2 + 2;
          local_140 = (uint *)(iVar36 + 8);
          if (puVar12 < puVar25) {
            do {
              if (*local_140 != *puVar12) {
                uVar33 = *local_140 ^ *puVar12;
                bVar3 = (byte)uVar33;
                bVar4 = (byte)(uVar33 >> 8);
                bVar5 = (byte)(uVar33 >> 0x10);
                bVar2 = (byte)(uVar33 >> 0x18);
                pcVar38 = (char *)((int)puVar12 +
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
                                                                  )) >> 3) - (int)puVar28));
                goto joined_r0x017e023c;
              }
              puVar12 = puVar12 + 1;
              local_140 = local_140 + 1;
            } while (puVar12 < puVar25);
          }
          goto LAB_017e01d8;
        }
        uVar33 = *(uint *)(iVar36 + 4) ^ param_2[1];
        bVar3 = (byte)uVar33;
        bVar4 = (byte)(uVar33 >> 8);
        bVar5 = (byte)(uVar33 >> 0x10);
        bVar2 = (byte)(uVar33 >> 0x18);
        pcVar38 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
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
        puVar12 = puVar28;
        local_140 = puVar22;
LAB_017e01d8:
        if (puVar12 < (uint *)((int)puVar17 + -1)) {
          if ((short)*local_140 == (short)*puVar12) {
            local_140 = (uint *)((int)local_140 + 2);
            puVar12 = (uint *)((int)puVar12 + 2);
          }
        }
        if ((puVar12 < puVar17) && ((char)*local_140 == (char)*puVar12)) {
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        pcVar38 = (char *)((int)puVar12 - (int)puVar28);
      }
joined_r0x017e023c:
      if (pcVar6 == (char *)((int)puVar22 + (int)pcVar38)) {
        puVar17 = (uint *)((int)puVar28 + (int)pcVar38);
        if (puVar17 < puVar37) {
          if (*puVar10 == *(uint *)((int)puVar28 + (int)pcVar38)) {
            puVar22 = puVar17 + 1;
            local_140 = puVar10 + 1;
            if (puVar22 < puVar37) {
              do {
                if (*local_140 != *puVar22) {
                  uVar33 = *local_140 ^ *puVar22;
                  bVar3 = (byte)uVar33;
                  bVar4 = (byte)(uVar33 >> 8);
                  bVar5 = (byte)(uVar33 >> 0x10);
                  bVar2 = (byte)(uVar33 >> 0x18);
                  pcVar19 = (char *)((int)puVar22 +
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
                                    (int)puVar17));
                  goto LAB_017e039c;
                }
                puVar22 = puVar22 + 1;
                local_140 = local_140 + 1;
              } while (puVar22 < puVar37);
            }
            goto LAB_017e0350;
          }
          uVar33 = *puVar10 ^ *(uint *)((int)puVar28 + (int)pcVar38);
          bVar3 = (byte)uVar33;
          bVar4 = (byte)(uVar33 >> 8);
          bVar5 = (byte)(uVar33 >> 0x10);
          bVar2 = (byte)(uVar33 >> 0x18);
          pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar22 = puVar17;
          local_140 = puVar10;
LAB_017e0350:
          if (puVar22 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_140 == (short)*puVar22) {
              local_140 = (uint *)((int)local_140 + 2);
              puVar22 = (uint *)((int)puVar22 + 2);
            }
          }
          if ((puVar22 < param_3) && ((char)*local_140 == (char)*puVar22)) {
            puVar22 = (uint *)((int)puVar22 + 1);
          }
          pcVar19 = (char *)((int)puVar22 - (int)puVar17);
        }
LAB_017e039c:
        pcVar38 = pcVar38 + (int)pcVar19;
      }
      pcVar38 = pcVar38 + 4;
      if (pcVar38 <= local_13c) goto LAB_017dff74;
      piVar8 = (int *)(pcVar6 + uVar32 + ((3 - iVar9) - iVar34) + -iVar7);
      *param_4 = (uint)piVar8;
      if (param_3 == (uint *)((int)param_2 + (int)pcVar38)) goto LAB_017e07b8;
      piVar39 = piVar39 + 1;
      uVar33 = uVar13 + 1;
      local_13c = (uint *)pcVar38;
    } while (uVar13 + 1 < uVar11);
LAB_017e0040:
    piVar8 = *(int **)(iVar14 + iVar27 * 4);
    uVar15 = uVar15 - (uVar13 + 1);
    if (((uint)piVar8 & 0xff) < uVar15) {
      uVar15 = (uint)piVar8 & 0xff;
    }
    if (uVar15 != 0) {
      piVar39 = (int *)(iVar23 + ((uint)piVar8 >> 8) * 4);
      piVar26 = (int *)(iVar23 + (((uint)piVar8 >> 8) + uVar15) * 4);
      piVar8 = piVar39;
      do {
        piVar18 = piVar8 + 1;
        HintPreloadData(iVar34 + *piVar8);
        piVar8 = piVar18;
      } while (piVar18 != piVar26);
      puVar28 = param_2 + 1;
      local_134 = (char *)local_13c;
      puVar37 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar8 = piVar39;
          iVar27 = *piVar8;
          iVar14 = iVar34 + iVar27;
          pcVar38 = *(char **)(iVar34 + iVar27);
          if (pcVar38 == (char *)*param_2) break;
LAB_017e00d8:
          piVar39 = piVar8 + 1;
          if (piVar8 + 1 == piVar26) goto LAB_017e018c;
        }
        puVar22 = (uint *)(iVar14 + 4);
        puVar17 = (uint *)((int)puVar28 + ((int)pcVar6 - (int)puVar22));
        if (param_3 < puVar17) {
          puVar17 = param_3;
        }
        puVar25 = (uint *)((int)puVar17 + -3);
        if (puVar28 < puVar25) {
          if (*(uint *)(iVar14 + 4) == param_2[1]) {
            puVar12 = param_2 + 2;
            local_13c = (uint *)(iVar14 + 8);
            if (puVar12 < puVar25) {
              do {
                if (*local_13c != *puVar12) {
                  uVar11 = *local_13c ^ *puVar12;
                  bVar3 = (byte)uVar11;
                  bVar4 = (byte)(uVar11 >> 8);
                  bVar5 = (byte)(uVar11 >> 0x10);
                  bVar2 = (byte)(uVar11 >> 0x18);
                  pcVar38 = (char *)((int)puVar12 +
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
                                    (int)puVar28));
                  goto joined_r0x017e04a8;
                }
                puVar12 = puVar12 + 1;
                local_13c = local_13c + 1;
              } while (puVar12 < puVar25);
            }
            goto LAB_017e0444;
          }
          uVar11 = *(uint *)(iVar14 + 4) ^ param_2[1];
          bVar3 = (byte)uVar11;
          bVar4 = (byte)(uVar11 >> 8);
          bVar5 = (byte)(uVar11 >> 0x10);
          bVar2 = (byte)(uVar11 >> 0x18);
          pcVar38 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
          puVar12 = puVar28;
          local_13c = puVar22;
LAB_017e0444:
          if (puVar12 < (uint *)((int)puVar17 + -1)) {
            if ((short)*local_13c == (short)*puVar12) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar12 = (uint *)((int)puVar12 + 2);
            }
          }
          if ((puVar12 < puVar17) && ((char)*local_13c == (char)*puVar12)) {
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          pcVar38 = (char *)((int)puVar12 - (int)puVar28);
        }
joined_r0x017e04a8:
        if (pcVar6 == (char *)((int)puVar22 + (int)pcVar38)) {
          puVar17 = (uint *)((int)puVar28 + (int)pcVar38);
          if (puVar17 < puVar37) {
            if (*puVar10 == *(uint *)((int)puVar28 + (int)pcVar38)) {
              puVar22 = puVar17 + 1;
              local_13c = puVar10 + 1;
              if (puVar22 < puVar37) {
                do {
                  if (*local_13c != *puVar22) {
                    uVar11 = *local_13c ^ *puVar22;
                    bVar3 = (byte)uVar11;
                    bVar4 = (byte)(uVar11 >> 8);
                    bVar5 = (byte)(uVar11 >> 0x10);
                    bVar2 = (byte)(uVar11 >> 0x18);
                    pcVar19 = (char *)((int)puVar22 +
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
                                                                  )) >> 3) - (int)puVar17));
                    goto LAB_017e04e0;
                  }
                  puVar22 = puVar22 + 1;
                  local_13c = local_13c + 1;
                } while (puVar22 < puVar37);
              }
              goto LAB_017e0530;
            }
            uVar11 = *puVar10 ^ *(uint *)((int)puVar28 + (int)pcVar38);
            bVar3 = (byte)uVar11;
            bVar4 = (byte)(uVar11 >> 8);
            bVar5 = (byte)(uVar11 >> 0x10);
            bVar2 = (byte)(uVar11 >> 0x18);
            pcVar19 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            puVar22 = puVar17;
            local_13c = puVar10;
LAB_017e0530:
            if (puVar22 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar22) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar22 = (uint *)((int)puVar22 + 2);
              }
            }
            if ((puVar22 < param_3) && ((char)*local_13c == (char)*puVar22)) {
              puVar22 = (uint *)((int)puVar22 + 1);
            }
            pcVar19 = (char *)((int)puVar22 - (int)puVar17);
          }
LAB_017e04e0:
          pcVar38 = pcVar38 + (int)pcVar19;
        }
        pcVar38 = pcVar38 + 4;
        if (pcVar38 <= local_134) goto LAB_017e00d8;
        *param_4 = (uint)(pcVar6 + uVar32 + (((3 - iVar9) - iVar34) - iVar27));
        if (param_3 == (uint *)((int)param_2 + (int)pcVar38)) goto LAB_017e07b8;
        piVar39 = piVar8 + 1;
        local_134 = pcVar38;
      } while (piVar8 + 1 != piVar26);
LAB_017e018c:
      piVar8 = piVar8 + 1;
      local_13c = (uint *)local_134;
    }
  }
LAB_017e0190:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar8,pcVar38,local_2c ^ DAT_018ddaf8,0);
  }
  return (char *)local_13c;
LAB_017e07b8:
  local_13c = (uint *)pcVar38;
  goto LAB_017e0190;
}

