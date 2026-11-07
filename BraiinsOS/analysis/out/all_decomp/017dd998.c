// FUN_017dd998 @ 017dd998 size=4036 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017dd998(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  int iVar32;
  uint *puVar33;
  int *piVar34;
  int *piVar35;
  int iVar36;
  int iVar37;
  uint *puVar38;
  uint unaff_r10;
  int iVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  int *piVar44;
  bool bVar45;
  uint local_180;
  uint local_17c;
  int local_158;
  uint *local_144;
  char *local_140;
  uint *local_13c;
  char *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar36 = *(int *)(param_1 + 4);
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar40 = (int)param_2 - iVar36;
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_1 + 0x5c);
  iVar18 = *(int *)(param_1 + 0x28);
  uVar15 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar45 = uVar15 < uVar40 - uVar9;
  iVar19 = *(int *)(param_1 + 0x24);
  if (bVar45) {
    uVar15 = uVar40 - uVar15;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (bVar45) {
    unaff_r10 = uVar15;
  }
  if (!bVar45) {
    unaff_r10 = uVar9;
  }
  piVar34 = *(int **)(param_1 + 0xb4);
  lVar2 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar42 = (uint)lVar2;
  uVar29 = *(uint *)(param_1 + 0xc4);
  uVar15 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  iVar41 = piVar34[0x30];
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r10 = uVar9;
  }
  uVar10 = uVar42 >> (0x42U - iVar41 & 0xff) | uVar15 << (iVar41 - 0x22U & 0xff) |
           uVar15 >> (0x22U - iVar41 & 0xff);
  uVar9 = uVar29;
  if (3 < uVar29) {
    uVar9 = 4;
  }
  iVar41 = uVar10 * 0x10;
  uVar30 = uVar29;
  if (4 < uVar29) {
    uVar30 = uVar29 - 4;
  }
  HintPreloadData(piVar34[0x17] + iVar41);
  local_158 = 1 << (uVar9 & 0xff);
  if (uVar29 < 5) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1 << (uVar30 & 0xff);
  }
  uVar9 = *(uint *)(param_1 + 0x50);
  uVar30 = *(uint *)(param_1 + 0x54);
  iVar43 = -iVar19;
  uVar29 = iVar43 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar15 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar12 = iVar18;
    iVar37 = iVar36;
    iVar39 = iVar17;
    if (uVar40 - uVar15 < 0x181) {
      local_180 = iVar19 - 0x18;
      local_17c = 0x18 - iVar19;
    }
    else {
      uVar42 = uVar15 + 0x60;
      if (uVar15 < uVar42) {
        local_180 = 0x20 - uVar29;
        local_17c = iVar43 + 0x18;
        uVar21 = uVar9;
        uVar20 = uVar30;
        while( true ) {
          uVar28 = *(uint *)(iVar32 + (uVar15 & 7) * 4);
          uVar26 = *(uint *)(uVar15 + iVar36 + 8);
          lVar2 = (ulonglong)uVar26 * 0xbf9b0000;
          uVar20 = *(int *)(uVar15 + iVar36 + 0xc) * -0x40650000 + uVar26 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar20;
          uVar26 = ((uint)lVar2 ^ uVar21) >> (uVar29 & 0xff) | uVar20 << (local_180 & 0xff) |
                   uVar20 >> (local_17c & 0xff);
          uVar21 = uVar28 >> 8;
          uVar20 = uVar26 >> 8;
          HintPreloadData(iVar17 + uVar20 * 0x40);
          HintPreloadData(iVar18 + uVar20 * 0x10);
          *(uint *)(iVar32 + (uVar15 & 7) * 4) = uVar26;
          uVar20 = *(byte *)(iVar18 + uVar21 * 0x10) - 1 & 0xf;
          if (uVar20 == 0) {
            uVar20 = 0xf;
          }
          *(char *)(iVar18 + uVar21 * 0x10) = (char)uVar20;
          *(char *)(iVar18 + uVar21 * 0x10 + uVar20) = (char)uVar28;
          *(uint *)(iVar17 + (uVar21 * 0x10 + uVar20) * 4) = uVar15;
          uVar15 = uVar15 + 1;
          if (uVar42 == uVar15) break;
          uVar21 = *(uint *)(param_1 + 0x50);
          uVar20 = *(uint *)(param_1 + 0x54);
        }
        iVar19 = *(int *)(param_1 + 0x24);
        iVar12 = *(int *)(param_1 + 0x28);
        iVar37 = *(int *)(param_1 + 4);
        iVar39 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_180 = iVar19 - 0x18;
        local_17c = 0x18 - iVar19;
      }
      uVar15 = uVar40 + -0x20;
      if ((char *)(uVar15 + iVar36) <= (char *)((int)param_2 + 1)) {
        pcVar13 = (char *)((int)param_2 + 1) + (1 - (int)(uVar15 + iVar36));
        if (pcVar13 < (char *)0x9) {
          uVar42 = uVar15 + (int)pcVar13;
        }
        else {
          uVar42 = uVar40 + -0x18;
        }
        if (uVar15 < uVar42) {
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar26 = *(uint *)(param_1 + 0x54);
          uVar21 = uVar15;
          do {
            uVar16 = uVar21 & 7;
            piVar44 = (int *)(uVar21 + iVar36 + 4);
            puVar7 = (uint *)(uVar21 + iVar36);
            uVar21 = uVar21 + 1;
            lVar2 = (ulonglong)*puVar7 * 0xbf9b0000;
            uVar28 = *piVar44 * -0x40650000 + *puVar7 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar26;
            uVar25 = ((uint)lVar2 ^ uVar20) >> (0x38U - iVar19 & 0xff) |
                     uVar28 << (iVar19 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar19 & 0xff);
            uVar28 = uVar25 >> 8;
            HintPreloadData(iVar39 + uVar28 * 0x40);
            HintPreloadData(iVar12 + uVar28 * 0x10);
            *(uint *)(param_1 + uVar16 * 4 + 0x2c) = uVar25;
          } while (uVar21 < uVar42);
        }
      }
    }
    if (uVar15 < uVar40) {
      do {
        uVar42 = *(uint *)(uVar15 + iVar37 + 8);
        uVar26 = *(uint *)(iVar32 + (uVar15 & 7) * 4);
        lVar2 = (ulonglong)uVar42 * 0xbf9b0000;
        uVar42 = *(int *)(uVar15 + iVar37 + 0xc) * -0x40650000 + uVar42 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar20 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar19 & 0xff) |
                 uVar42 << (iVar19 - 0x18U & 0xff) | uVar42 >> (0x18U - iVar19 & 0xff);
        uVar42 = uVar26 >> 8;
        uVar21 = uVar20 >> 8;
        HintPreloadData(iVar39 + uVar21 * 0x40);
        HintPreloadData(iVar12 + uVar21 * 0x10);
        *(uint *)(iVar32 + (uVar15 & 7) * 4) = uVar20;
        uVar21 = *(byte *)(iVar12 + uVar42 * 0x10) - 1 & 0xf;
        if (uVar21 == 0) {
          uVar21 = 0xf;
        }
        *(char *)(iVar12 + uVar42 * 0x10) = (char)uVar21;
        *(char *)(iVar12 + uVar42 * 0x10 + uVar21) = (char)uVar26;
        *(uint *)(iVar39 + (uVar21 + uVar42 * 0x10) * 4) = uVar15;
        uVar15 = uVar15 + 1;
      } while (uVar40 != uVar15);
    }
    uVar15 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar40;
    lVar2 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar30 = uVar15 * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^
             uVar30;
    uVar9 = ((uint)lVar2 ^ uVar9) >> (uVar29 & 0xff) | uVar30 << (local_180 & 0xff) |
            uVar30 >> (local_17c & 0xff);
    uVar15 = uVar9 >> 8;
    HintPreloadData(iVar17 + uVar15 * 0x40);
    HintPreloadData(iVar18 + uVar15 * 0x10);
    local_140 = *(char **)(iVar32 + (uVar40 & 7) * 4);
    *(uint *)(iVar32 + (uVar40 & 7) * 4) = uVar9;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar40;
    local_140 = (char *)((uVar9 ^ uVar42) >> (uVar29 & 0xff) |
                         (uVar30 ^ uVar15) << (0x20 - uVar29 & 0xff) |
                        (uVar30 ^ uVar15) >> (iVar43 + 0x18U & 0xff));
  }
  uVar15 = (uint)local_140 >> 8;
  iVar17 = iVar17 + uVar15 * 0x40;
  iVar19 = iVar18 + uVar15 * 0x10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)local_140;
  uVar29 = ((uint)local_140 & 0xff) * 0x1010101;
  uVar42 = *(uint *)(iVar19 + 0xc) ^ uVar29;
  uVar9 = *(uint *)(iVar19 + 8) ^ uVar29;
  uVar21 = *(uint *)(iVar19 + 4) ^ uVar29;
  uVar29 = *(uint *)(iVar18 + uVar15 * 0x10) ^ uVar29;
  uVar20 = (uint)*(byte *)(iVar18 + uVar15 * 0x10);
  uVar30 = uVar20 & 0xf;
  uVar9 = (((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c |
          ((((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
          ((((uVar9 | 0x80808080) + 0xfefefeff | uVar9) & 0x80808080) * 0x204081 >> 0x1c |
          ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c) << 4) <<
          4) << 4;
  uVar9 = (~uVar9 << (-uVar30 & 0xf) | (uVar9 ^ 0xffff) >> uVar30) & 0xffff;
  if (uVar9 == 0) {
    iVar43 = 0;
  }
  else {
    iVar43 = 0;
    do {
      if (uVar9 == 0) {
        iVar12 = 0;
      }
      else {
        bVar3 = (byte)uVar9;
        bVar1 = (byte)(uVar9 >> 8);
        iVar12 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                                 bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x10);
      }
      uVar29 = iVar12 + uVar30 & 0xf;
      if (uVar29 == 0) {
        bVar45 = true;
        iVar12 = iVar43;
      }
      else {
        uVar29 = *(uint *)(iVar17 + uVar29 * 4);
        if (uVar29 < unaff_r10) break;
        HintPreloadData(iVar36 + uVar29);
        iVar12 = iVar43 + 1;
        local_12c[iVar43] = uVar29;
        bVar45 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar9 = uVar9 & uVar9 - 1;
      if (uVar9 == 0) {
        bVar45 = false;
      }
      iVar43 = iVar12;
    } while (bVar45);
  }
  uVar9 = uVar20 - 1 & 0xf;
  if (uVar9 == 0) {
    uVar9 = 0xf;
  }
  *(char *)(iVar18 + uVar15 * 0x10) = (char)uVar9;
  *(char *)(iVar19 + uVar9) = (char)local_140;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar17 + uVar9 * 4) = iVar18;
  if (iVar43 == 0) {
    local_140 = (char *)0x3;
  }
  else {
    piVar44 = &iStack_130;
    iVar17 = 0;
    pcVar13 = (char *)0x3;
    do {
      piVar44 = piVar44 + 1;
      iVar18 = *piVar44;
      puVar7 = (uint *)(iVar36 + iVar18);
      if (*(int *)((int)puVar7 + (int)(pcVar13 + -3)) ==
          *(int *)((int)param_2 + (int)(pcVar13 + -3))) {
        puVar27 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar36 + iVar18) == *param_2) {
            do {
              puVar27 = puVar27 + 1;
              puVar7 = puVar7 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar27) {
                if (((uint *)((int)param_3 + -1) <= puVar27) || ((short)*puVar7 != (short)*puVar27))
                goto LAB_017de64c;
                goto LAB_017de644;
              }
            } while (*puVar7 == *puVar27);
            uVar15 = *puVar7 ^ *puVar27;
            bVar3 = (byte)uVar15;
            bVar4 = (byte)(uVar15 >> 8);
            bVar5 = (byte)(uVar15 >> 0x10);
            bVar1 = (byte)(uVar15 >> 0x18);
            local_140 = (char *)((int)puVar27 +
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
                                                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1
                                                                  ) << 1 | bVar1 >> 2 & 1) << 1 |
                                                                bVar1 >> 3 & 1) << 1 |
                                                               bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1
                                                              ) << 1 | bVar1 >> 6 & 1) << 1 |
                                                            bVar1 >> 7)) >> 3) - (int)param_2));
          }
          else {
            uVar15 = *(uint *)(iVar36 + iVar18) ^ *param_2;
            bVar3 = (byte)uVar15;
            bVar4 = (byte)(uVar15 >> 8);
            bVar5 = (byte)(uVar15 >> 0x10);
            bVar1 = (byte)(uVar15 >> 0x18);
            local_140 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                               | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                   bVar1 >> 1 & 1) << 1 |
                                                                  bVar1 >> 2 & 1) << 1 |
                                                                 bVar1 >> 3 & 1) << 1 |
                                                                bVar1 >> 4 & 1) << 1 |
                                                               bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1
                                                              ) << 1 | bVar1 >> 7)) >> 3);
          }
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(iVar36 + iVar18) == (short)*param_2) {
LAB_017de644:
              puVar27 = (uint *)((int)puVar27 + 2);
              puVar7 = (uint *)((int)puVar7 + 2);
LAB_017de64c:
              if (puVar27 < param_3) goto LAB_017ddf28;
            }
            else {
              if (param_3 <= param_2) goto LAB_017ddecc;
LAB_017ddf28:
              if ((char)*puVar7 == (char)*puVar27) goto LAB_017de3cc;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar36 + iVar18)))
            goto LAB_017ddecc;
LAB_017de3cc:
            puVar27 = (uint *)((int)puVar27 + 1);
          }
          local_140 = (char *)((int)puVar27 - (int)param_2);
        }
        if (pcVar13 < local_140) {
          *param_4 = uVar40 + (3 - iVar18);
          pcVar13 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017ddecc:
      local_140 = pcVar13;
      iVar17 = iVar17 + 1;
      pcVar13 = local_140;
    } while (iVar17 != iVar43);
  }
  uVar15 = iVar11 + local_158;
  iVar17 = piVar34[0x17];
  iVar11 = piVar34[1];
  iVar18 = uVar10 * 4 + 0x40000003;
  iVar19 = piVar34[0x19];
  piVar44 = (int *)(iVar17 + iVar41);
  HintPreloadData(iVar11 + *piVar44);
  HintPreloadData(iVar19 + (*(uint *)(iVar17 + iVar18 * 4) >> 8) * 4);
  HintPreloadData(iVar11 + piVar44[1]);
  pcVar13 = (char *)piVar44[2];
  HintPreloadData(pcVar13 + iVar11);
  if (uVar15 != 0) {
    pcVar8 = (char *)*piVar34;
    puVar27 = (uint *)(iVar36 + iVar6);
    puVar7 = (uint *)((int)param_3 + -3);
    uVar9 = uVar15;
    if (2 < uVar15) {
      uVar9 = 3;
    }
    puVar38 = param_2 + 1;
    pcVar13 = pcVar8 + uVar40 + ((3 - iVar6) - iVar11);
    uVar29 = 0;
    do {
      while( true ) {
        uVar42 = uVar29;
        iVar36 = *piVar44;
        if (iVar36 == 0) {
          piVar34 = (int *)0x0;
          goto LAB_017de25c;
        }
        iVar41 = iVar11 + iVar36;
        if (*(uint *)(iVar11 + iVar36) == *param_2) break;
LAB_017de044:
        piVar44 = piVar44 + 1;
        uVar29 = uVar42 + 1;
        if (uVar9 <= uVar42 + 1) goto LAB_017de110;
      }
      puVar31 = (uint *)(iVar41 + 4);
      puVar22 = (uint *)((int)puVar38 + ((int)pcVar8 - (int)puVar31));
      if (param_3 < puVar22) {
        puVar22 = param_3;
      }
      puVar33 = (uint *)((int)puVar22 + -3);
      if (puVar38 < puVar33) {
        if (*(uint *)(iVar41 + 4) == param_2[1]) {
          puVar14 = param_2 + 2;
          local_144 = (uint *)(iVar41 + 8);
          if (puVar14 < puVar33) {
            do {
              if (*local_144 != *puVar14) {
                uVar29 = *local_144 ^ *puVar14;
                bVar3 = (byte)uVar29;
                bVar4 = (byte)(uVar29 >> 8);
                bVar5 = (byte)(uVar29 >> 0x10);
                bVar1 = (byte)(uVar29 >> 0x18);
                pcVar13 = (char *)((int)puVar14 +
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
                                                  8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar38));
                goto joined_r0x017de308;
              }
              puVar14 = puVar14 + 1;
              local_144 = local_144 + 1;
            } while (puVar14 < puVar33);
          }
          goto LAB_017de2a4;
        }
        uVar29 = *(uint *)(iVar41 + 4) ^ param_2[1];
        bVar3 = (byte)uVar29;
        bVar4 = (byte)(uVar29 >> 8);
        bVar5 = (byte)(uVar29 >> 0x10);
        bVar1 = (byte)(uVar29 >> 0x18);
        pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
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
                                         (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                          | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                         << 1 | bVar1 >> 4 & 1) << 1 |
                                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 |
                                                     bVar1 >> 7)) >> 3);
      }
      else {
        puVar14 = puVar38;
        local_144 = puVar31;
LAB_017de2a4:
        if (puVar14 < (uint *)((int)puVar22 + -1)) {
          if ((short)*local_144 == (short)*puVar14) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar14 = (uint *)((int)puVar14 + 2);
          }
        }
        if ((puVar14 < puVar22) && ((char)*local_144 == (char)*puVar14)) {
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        pcVar13 = (char *)((int)puVar14 - (int)puVar38);
      }
joined_r0x017de308:
      if (pcVar8 == (char *)((int)puVar31 + (int)pcVar13)) {
        puVar22 = (uint *)((int)puVar38 + (int)pcVar13);
        if (puVar22 < puVar7) {
          if (*puVar27 == *(uint *)((int)puVar38 + (int)pcVar13)) {
            puVar31 = puVar22 + 1;
            local_144 = puVar27 + 1;
            if (puVar31 < puVar7) {
              do {
                if (*local_144 != *puVar31) {
                  uVar29 = *local_144 ^ *puVar31;
                  bVar3 = (byte)uVar29;
                  bVar4 = (byte)(uVar29 >> 8);
                  bVar5 = (byte)(uVar29 >> 0x10);
                  bVar1 = (byte)(uVar29 >> 0x18);
                  pcVar24 = (char *)((int)puVar31 +
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
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar22));
                  goto LAB_017de468;
                }
                puVar31 = puVar31 + 1;
                local_144 = local_144 + 1;
              } while (puVar31 < puVar7);
            }
            goto LAB_017de41c;
          }
          uVar29 = *puVar27 ^ *(uint *)((int)puVar38 + (int)pcVar13);
          bVar3 = (byte)uVar29;
          bVar4 = (byte)(uVar29 >> 8);
          bVar5 = (byte)(uVar29 >> 0x10);
          bVar1 = (byte)(uVar29 >> 0x18);
          pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar31 = puVar22;
          local_144 = puVar27;
LAB_017de41c:
          if (puVar31 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_144 == (short)*puVar31) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar31 = (uint *)((int)puVar31 + 2);
            }
          }
          if ((puVar31 < param_3) && ((char)*local_144 == (char)*puVar31)) {
            puVar31 = (uint *)((int)puVar31 + 1);
          }
          pcVar24 = (char *)((int)puVar31 - (int)puVar22);
        }
LAB_017de468:
        pcVar13 = pcVar13 + (int)pcVar24;
      }
      pcVar13 = pcVar13 + 4;
      if (pcVar13 <= local_140) goto LAB_017de044;
      piVar34 = (int *)(pcVar8 + uVar40 + ((3 - iVar6) - iVar11) + -iVar36);
      *param_4 = (int)piVar34;
      if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) goto LAB_017de908;
      piVar44 = piVar44 + 1;
      uVar29 = uVar42 + 1;
      local_140 = pcVar13;
    } while (uVar42 + 1 < uVar9);
LAB_017de110:
    piVar34 = *(int **)(iVar17 + iVar18 * 4);
    uVar15 = uVar15 - (uVar42 + 1);
    if (((uint)piVar34 & 0xff) < uVar15) {
      uVar15 = (uint)piVar34 & 0xff;
    }
    if (uVar15 != 0) {
      piVar44 = (int *)(iVar19 + ((uint)piVar34 >> 8) * 4);
      piVar35 = (int *)(iVar19 + (((uint)piVar34 >> 8) + uVar15) * 4);
      piVar34 = piVar44;
      do {
        piVar23 = piVar34 + 1;
        HintPreloadData(iVar11 + *piVar34);
        piVar34 = piVar23;
      } while (piVar23 != piVar35);
      puVar38 = param_2 + 1;
      local_134 = local_140;
      puVar7 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar34 = piVar44;
          iVar18 = *piVar34;
          iVar17 = iVar11 + iVar18;
          pcVar13 = *(char **)(iVar11 + iVar18);
          if (pcVar13 == (char *)*param_2) break;
LAB_017de1a4:
          piVar44 = piVar34 + 1;
          if (piVar34 + 1 == piVar35) goto LAB_017de258;
        }
        puVar31 = (uint *)(iVar17 + 4);
        puVar22 = (uint *)((int)puVar38 + ((int)pcVar8 - (int)puVar31));
        if (param_3 < puVar22) {
          puVar22 = param_3;
        }
        puVar33 = (uint *)((int)puVar22 + -3);
        if (puVar38 < puVar33) {
          if (*(uint *)(iVar17 + 4) == param_2[1]) {
            puVar14 = param_2 + 2;
            local_13c = (uint *)(iVar17 + 8);
            if (puVar14 < puVar33) {
              do {
                if (*local_13c != *puVar14) {
                  uVar15 = *local_13c ^ *puVar14;
                  bVar3 = (byte)uVar15;
                  bVar4 = (byte)(uVar15 >> 8);
                  bVar5 = (byte)(uVar15 >> 0x10);
                  bVar1 = (byte)(uVar15 >> 0x18);
                  pcVar13 = (char *)((int)puVar14 +
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
                                                    << 8 | (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                             bVar1 >> 1 & 1) << 1 |
                                                                            bVar1 >> 2 & 1) << 1 |
                                                                           bVar1 >> 3 & 1) << 1 |
                                                                          bVar1 >> 4 & 1) << 1 |
                                                                         bVar1 >> 5 & 1) << 1 |
                                                                        bVar1 >> 6 & 1) << 1 |
                                                                       bVar1 >> 7)) >> 3) -
                                    (int)puVar38));
                  goto joined_r0x017de55c;
                }
                puVar14 = puVar14 + 1;
                local_13c = local_13c + 1;
              } while (puVar14 < puVar33);
            }
            goto LAB_017de4f8;
          }
          uVar15 = *(uint *)(iVar17 + 4) ^ param_2[1];
          bVar3 = (byte)uVar15;
          bVar4 = (byte)(uVar15 >> 8);
          bVar5 = (byte)(uVar15 >> 0x10);
          bVar1 = (byte)(uVar15 >> 0x18);
          pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) <<
                                                             1 | bVar1 >> 2 & 1) << 1 |
                                                           bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) <<
                                                          1 | bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1)
                                                        << 1 | bVar1 >> 7)) >> 3);
        }
        else {
          puVar14 = puVar38;
          local_13c = puVar31;
LAB_017de4f8:
          if (puVar14 < (uint *)((int)puVar22 + -1)) {
            if ((short)*local_13c == (short)*puVar14) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar14 = (uint *)((int)puVar14 + 2);
            }
          }
          if ((puVar14 < puVar22) && ((char)*local_13c == (char)*puVar14)) {
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          pcVar13 = (char *)((int)puVar14 - (int)puVar38);
        }
joined_r0x017de55c:
        if (pcVar8 == (char *)((int)puVar31 + (int)pcVar13)) {
          puVar22 = (uint *)((int)puVar38 + (int)pcVar13);
          if (puVar22 < puVar7) {
            if (*puVar27 == *(uint *)((int)puVar38 + (int)pcVar13)) {
              puVar31 = puVar22 + 1;
              local_13c = puVar27 + 1;
              if (puVar31 < puVar7) {
                do {
                  if (*local_13c != *puVar31) {
                    uVar15 = *local_13c ^ *puVar31;
                    bVar3 = (byte)uVar15;
                    bVar4 = (byte)(uVar15 >> 8);
                    bVar5 = (byte)(uVar15 >> 0x10);
                    bVar1 = (byte)(uVar15 >> 0x18);
                    pcVar24 = (char *)((int)puVar31 +
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
                                                      (uint)(byte)((((((((bVar1 & 1) << 1 |
                                                                        bVar1 >> 1 & 1) << 1 |
                                                                       bVar1 >> 2 & 1) << 1 |
                                                                      bVar1 >> 3 & 1) << 1 |
                                                                     bVar1 >> 4 & 1) << 1 |
                                                                    bVar1 >> 5 & 1) << 1 |
                                                                   bVar1 >> 6 & 1) << 1 | bVar1 >> 7
                                                                  )) >> 3) - (int)puVar22));
                    goto LAB_017de594;
                  }
                  puVar31 = puVar31 + 1;
                  local_13c = local_13c + 1;
                } while (puVar31 < puVar7);
              }
              goto LAB_017de5e4;
            }
            uVar15 = *puVar27 ^ *(uint *)((int)puVar38 + (int)pcVar13);
            bVar3 = (byte)uVar15;
            bVar4 = (byte)(uVar15 >> 8);
            bVar5 = (byte)(uVar15 >> 0x10);
            bVar1 = (byte)(uVar15 >> 0x18);
            pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1)
                                                               << 1 | bVar1 >> 2 & 1) << 1 |
                                                             bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1)
                                                            << 1 | bVar1 >> 5 & 1) << 1 |
                                                          bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) >> 3);
          }
          else {
            puVar31 = puVar22;
            local_13c = puVar27;
LAB_017de5e4:
            if (puVar31 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar31) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar31 = (uint *)((int)puVar31 + 2);
              }
            }
            if ((puVar31 < param_3) && ((char)*local_13c == (char)*puVar31)) {
              puVar31 = (uint *)((int)puVar31 + 1);
            }
            pcVar24 = (char *)((int)puVar31 - (int)puVar22);
          }
LAB_017de594:
          pcVar13 = pcVar13 + (int)pcVar24;
        }
        pcVar13 = pcVar13 + 4;
        if (pcVar13 <= local_134) goto LAB_017de1a4;
        *param_4 = (int)(pcVar8 + uVar40 + (((3 - iVar6) - iVar11) - iVar18));
        if (param_3 == (uint *)((int)param_2 + (int)pcVar13)) goto LAB_017de908;
        piVar44 = piVar34 + 1;
        local_134 = pcVar13;
      } while (piVar34 + 1 != piVar35);
LAB_017de258:
      piVar34 = piVar34 + 1;
      local_140 = local_134;
    }
  }
LAB_017de25c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar34,pcVar13,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017de908:
  local_140 = pcVar13;
  goto LAB_017de25c;
}

