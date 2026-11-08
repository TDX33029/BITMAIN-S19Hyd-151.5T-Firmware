// FUN_017e1858 @ 017e1858 size=4108 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint * FUN_017e1858(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  int *piVar30;
  int iVar31;
  uint *puVar32;
  int *piVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  int *piVar45;
  bool bVar46;
  uint local_180;
  uint local_17c;
  int local_158;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint local_138;
  uint *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar21 = *(int *)(param_1 + 4);
  iVar41 = *(int *)(param_1 + 0xc);
  uVar38 = (int)param_2 - iVar21;
  uVar9 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar15 = *(int *)(param_1 + 0x5c);
  iVar16 = *(int *)(param_1 + 0x28);
  uVar27 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  piVar30 = *(int **)(param_1 + 0xb4);
  uVar26 = uVar9;
  if (uVar27 < uVar38 - uVar9) {
    uVar26 = uVar38 - uVar27;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar26 = uVar9;
  }
  iVar17 = *(int *)(param_1 + 0x24);
  uVar24 = *(uint *)(param_1 + 0xc4);
  lVar3 = (ulonglong)*param_2 * 0xbb000000;
  uVar39 = (uint)lVar3;
  iVar31 = -iVar17;
  uVar35 = iVar31 + 0x38;
  uVar14 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
  iVar42 = piVar30[0x30];
  uVar9 = uVar39 >> (0x42U - iVar42 & 0xff) | uVar14 << (iVar42 - 0x22U & 0xff) |
          uVar14 >> (0x22U - iVar42 & 0xff);
  uVar27 = uVar24;
  if (4 < uVar24) {
    uVar27 = 5;
  }
  uVar25 = uVar24;
  if (5 < uVar24) {
    uVar25 = uVar24 - 5;
  }
  iVar42 = uVar9 * 0x10;
  HintPreloadData(piVar30[0x17] + iVar42);
  local_158 = 1 << (uVar27 & 0xff);
  uVar27 = (uint)(5 < uVar24);
  if (5 < uVar24) {
    uVar27 = uVar27 << (uVar25 & 0xff);
  }
  uVar25 = *(uint *)(param_1 + 0x50);
  uVar24 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar14 = *(uint *)(param_1 + 0x1c);
    iVar34 = param_1 + 0x2c;
    iVar10 = iVar16;
    iVar40 = iVar15;
    local_138 = iVar21;
    if (uVar38 - uVar14 < 0x181) {
      local_17c = 0x20 - uVar35;
    }
    else {
      uVar39 = uVar14 + 0x60;
      if (uVar14 < uVar39) {
        local_17c = 0x20 - uVar35;
        uVar36 = uVar25;
        uVar18 = uVar24;
        while( true ) {
          uVar37 = *(uint *)(iVar34 + (uVar14 & 7) * 4);
          uVar22 = *(uint *)(uVar14 + iVar21 + 8);
          lVar3 = (ulonglong)uVar22 * 0xbb000000;
          uVar18 = *(int *)(uVar14 + iVar21 + 0xc) * -0x45000000 + uVar22 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar18;
          uVar22 = uVar37 >> 8;
          uVar18 = ((uint)lVar3 ^ uVar36) >> (uVar35 & 0xff) | uVar18 << (local_17c & 0xff) |
                   uVar18 >> (iVar31 + 0x18U & 0xff);
          uVar36 = uVar18 >> 8;
          HintPreloadData(iVar16 + uVar36 * 0x20);
          iVar17 = uVar36 * 0x80;
          HintPreloadData(iVar15 + iVar17);
          HintPreloadData(iVar15 + iVar17 + 0x40);
          *(uint *)(iVar34 + (uVar14 & 7) * 4) = uVar18;
          uVar36 = *(byte *)(iVar16 + uVar22 * 0x20) - 1 & 0x1f;
          if (uVar36 == 0) {
            uVar36 = 0x1f;
          }
          *(char *)(iVar16 + uVar22 * 0x20) = (char)uVar36;
          *(char *)(iVar16 + uVar22 * 0x20 + uVar36) = (char)uVar37;
          *(uint *)(iVar15 + (uVar22 * 0x20 + uVar36) * 4) = uVar14;
          uVar14 = uVar14 + 1;
          if (uVar39 == uVar14) break;
          uVar36 = *(uint *)(param_1 + 0x50);
          uVar18 = *(uint *)(param_1 + 0x54);
        }
        iVar17 = *(int *)(param_1 + 0x24);
        iVar10 = *(int *)(param_1 + 0x28);
        iVar40 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_17c = 0x20 - uVar35;
      }
      uVar14 = uVar38 + -0x20;
      if ((char *)(uVar14 + iVar21) <= (char *)((int)param_2 + 1)) {
        pcVar8 = (char *)((int)param_2 + 1) + (1 - (int)(uVar14 + iVar21));
        if (pcVar8 < (char *)0x9) {
          uVar39 = uVar14 + (int)pcVar8;
        }
        else {
          uVar39 = uVar38 + -0x18;
        }
        if (uVar14 < uVar39) {
          uVar22 = *(uint *)(param_1 + 0x50);
          uVar18 = *(uint *)(param_1 + 0x54);
          uVar36 = uVar14;
          do {
            uVar43 = uVar36 & 7;
            piVar45 = (int *)(uVar36 + iVar21 + 4);
            puVar11 = (uint *)(uVar36 + iVar21);
            uVar36 = uVar36 + 1;
            lVar3 = (ulonglong)*puVar11 * 0xbb000000;
            uVar37 = *piVar45 * -0x45000000 + *puVar11 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar18;
            uVar44 = ((uint)lVar3 ^ uVar22) >> (0x38U - iVar17 & 0xff) |
                     uVar37 << (iVar17 - 0x18U & 0xff) | uVar37 >> (0x18U - iVar17 & 0xff);
            uVar37 = uVar44 >> 8;
            HintPreloadData(iVar10 + uVar37 * 0x20);
            iVar1 = uVar37 * 0x80;
            HintPreloadData(iVar40 + iVar1);
            HintPreloadData(iVar40 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar43 * 4 + 0x2c) = uVar44;
          } while (uVar36 < uVar39);
        }
      }
    }
    local_180 = iVar31 + 0x18;
    if (uVar14 < uVar38) {
      do {
        uVar39 = *(uint *)(uVar14 + local_138 + 8);
        uVar22 = *(uint *)(iVar34 + (uVar14 & 7) * 4);
        lVar3 = (ulonglong)uVar39 * 0xbb000000;
        uVar36 = *(int *)(uVar14 + local_138 + 0xc) * -0x45000000 + uVar39 * -0x30e44324 +
                 (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar39 = uVar22 >> 8;
        uVar18 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar17 & 0xff) |
                 uVar36 << (iVar17 - 0x18U & 0xff) | uVar36 >> (0x18U - iVar17 & 0xff);
        uVar36 = uVar18 >> 8;
        HintPreloadData(iVar10 + uVar36 * 0x20);
        iVar31 = uVar36 * 0x80;
        HintPreloadData(iVar40 + iVar31);
        HintPreloadData(iVar40 + iVar31 + 0x40);
        *(uint *)(iVar34 + (uVar14 & 7) * 4) = uVar18;
        uVar36 = *(byte *)(iVar10 + uVar39 * 0x20) - 1 & 0x1f;
        if (uVar36 == 0) {
          uVar36 = 0x1f;
        }
        *(char *)(iVar10 + uVar39 * 0x20) = (char)uVar36;
        *(char *)(iVar10 + uVar39 * 0x20 + uVar36) = (char)uVar22;
        *(uint *)(iVar40 + (uVar36 + uVar39 * 0x20) * 4) = uVar14;
        uVar14 = uVar14 + 1;
      } while (uVar38 != uVar14);
    }
    *(uint *)(param_1 + 0x1c) = uVar38;
    lVar3 = (ulonglong)param_2[2] * 0xbb000000;
    uVar24 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar24;
    uVar24 = ((uint)lVar3 ^ uVar25) >> (uVar35 & 0xff) | uVar24 << (local_17c & 0xff) |
             uVar24 >> (local_180 & 0xff);
    uVar14 = uVar24 >> 8;
    HintPreloadData(iVar16 + uVar14 * 0x20);
    iVar31 = uVar14 * 0x80;
    HintPreloadData(iVar15 + iVar31);
    HintPreloadData(iVar15 + iVar31 + 0x40);
    local_138 = *(uint *)(iVar34 + (uVar38 & 7) * 4);
    *(uint *)(iVar34 + (uVar38 & 7) * 4) = uVar24;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar38;
    local_138 = (uVar25 ^ uVar39) >> (uVar35 & 0xff) | (uVar24 ^ uVar14) << (0x20 - uVar35 & 0xff) |
                (uVar24 ^ uVar14) >> (iVar31 + 0x18U & 0xff);
  }
  uVar14 = local_138 >> 8;
  iVar15 = iVar15 + uVar14 * 0x80;
  iVar31 = iVar16 + uVar14 * 0x20;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  uVar43 = (local_138 & 0xff) * 0x1010101;
  uVar35 = *(uint *)(iVar31 + 0x1c) ^ uVar43;
  uVar24 = *(uint *)(iVar31 + 0x18) ^ uVar43;
  uVar39 = *(uint *)(iVar31 + 0x14) ^ uVar43;
  uVar22 = *(uint *)(iVar31 + 0x10) ^ uVar43;
  uVar36 = *(uint *)(iVar31 + 0xc) ^ uVar43;
  uVar37 = *(uint *)(iVar31 + 8) ^ uVar43;
  uVar18 = *(uint *)(iVar31 + 4) ^ uVar43;
  uVar43 = uVar43 ^ *(uint *)(iVar16 + uVar14 * 0x20);
  uVar25 = (uint)*(byte *)(iVar16 + uVar14 * 0x20);
  uVar44 = uVar25 & 0x1f;
  uVar24 = ~((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar24 = uVar24 >> uVar44 | uVar24 << 0x20 - uVar44;
  uVar35 = uVar14;
  if (uVar24 == 0) {
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    do {
      if (uVar24 == 0) {
        iVar10 = 0;
      }
      else {
        bVar4 = (byte)uVar24;
        bVar5 = (byte)(uVar24 >> 8);
        bVar6 = (byte)(uVar24 >> 0x10);
        bVar2 = (byte)(uVar24 >> 0x18);
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
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      }
      uVar39 = iVar10 + uVar44 & 0x1f;
      if (uVar39 == 0) {
        bVar46 = true;
        iVar10 = iVar17;
      }
      else {
        uVar39 = *(uint *)(iVar15 + uVar39 * 4);
        if (uVar39 < uVar26) break;
        HintPreloadData(iVar21 + uVar39);
        iVar10 = iVar17 + 1;
        local_12c[iVar17] = uVar39;
        bVar46 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar24 = uVar24 & uVar24 + -1;
      if (uVar24 == 0) {
        bVar46 = false;
      }
      uVar35 = uVar24;
      iVar17 = iVar10;
    } while (bVar46);
  }
  uVar26 = uVar25 - 1 & 0x1f;
  if (uVar26 == 0) {
    uVar26 = 0x1f;
  }
  *(char *)(iVar16 + uVar14 * 0x20) = (char)uVar26;
  *(char *)(iVar31 + uVar26) = (char)local_138;
  iVar16 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar16 + 1;
  *(int *)(iVar15 + uVar26 * 4) = iVar16;
  if (iVar17 == 0) {
    local_140 = (uint *)0x3;
  }
  else {
    piVar45 = &iStack_130;
    iVar15 = 0;
    puVar11 = (uint *)0x3;
    uVar35 = uVar38 + 3;
    do {
      piVar45 = piVar45 + 1;
      iVar16 = *piVar45;
      puVar7 = (uint *)(iVar21 + iVar16);
      if (*(int *)((int)puVar7 + (int)((int)puVar11 + -3)) ==
          *(int *)((int)param_2 + (int)puVar11 + -3)) {
        local_140 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar21 + iVar16) == *param_2) {
            do {
              local_140 = local_140 + 1;
              puVar7 = puVar7 + 1;
              if ((uint *)((int)param_3 + -3) <= local_140) {
                if (((uint *)((int)param_3 + -1) <= local_140) ||
                   (uVar35 = (uint)(ushort)*puVar7, uVar35 != (ushort)*local_140))
                goto LAB_017e2574;
                goto LAB_017e256c;
              }
              uVar35 = *local_140;
            } while (*puVar7 == uVar35);
            uVar26 = *puVar7 ^ uVar35;
            bVar4 = (byte)uVar26;
            bVar5 = (byte)(uVar26 >> 8);
            bVar6 = (byte)(uVar26 >> 0x10);
            bVar2 = (byte)(uVar26 >> 0x18);
            local_140 = (uint *)((int)local_140 +
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
                                                (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1
                                                                  ) << 1 | bVar2 >> 2 & 1) << 1 |
                                                                bVar2 >> 3 & 1) << 1 |
                                                               bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1
                                                              ) << 1 | bVar2 >> 6 & 1) << 1 |
                                                            bVar2 >> 7)) >> 3) - (int)param_2));
          }
          else {
            uVar26 = *(uint *)(iVar21 + iVar16) ^ *param_2;
            bVar4 = (byte)uVar26;
            bVar5 = (byte)(uVar26 >> 8);
            bVar6 = (byte)(uVar26 >> 0x10);
            bVar2 = (byte)(uVar26 >> 0x18);
            local_140 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
        }
        else {
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(ushort *)(iVar21 + iVar16) == (ushort)*param_2) {
LAB_017e256c:
              local_140 = (uint *)((int)local_140 + 2);
              puVar7 = (uint *)((int)puVar7 + 2);
LAB_017e2574:
              if (local_140 < param_3) goto LAB_017e1e44;
            }
            else {
              if (param_3 <= param_2) goto LAB_017e1dec;
LAB_017e1e44:
              if ((char)*puVar7 == (char)*local_140) goto LAB_017e22f8;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar21 + iVar16)))
            goto LAB_017e1dec;
LAB_017e22f8:
            local_140 = (uint *)((int)local_140 + 1);
          }
          local_140 = (uint *)((int)local_140 - (int)param_2);
        }
        if (puVar11 < local_140) {
          *param_4 = (uVar38 + 3) - iVar16;
          puVar11 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017e1dec:
      local_140 = puVar11;
      iVar15 = iVar15 + 1;
      puVar11 = local_140;
    } while (iVar15 != iVar17);
  }
  uVar27 = uVar27 + local_158;
  iVar15 = piVar30[0x17];
  iVar17 = piVar30[1];
  iVar16 = uVar9 * 4 + 0x40000003;
  iVar31 = piVar30[0x19];
  piVar45 = (int *)(iVar15 + iVar42);
  HintPreloadData(iVar17 + *piVar45);
  HintPreloadData(iVar31 + (*(uint *)(iVar15 + iVar16 * 4) >> 8) * 4);
  HintPreloadData(iVar17 + piVar45[1]);
  puVar11 = (uint *)piVar45[2];
  HintPreloadData((char *)(iVar17 + (int)puVar11));
  if (uVar27 != 0) {
    pcVar8 = (char *)*piVar30;
    if (uVar27 < 3) {
      uVar35 = uVar27;
    }
    puVar23 = (uint *)(iVar21 + iVar41);
    puVar7 = (uint *)((int)param_3 + -3);
    if (uVar27 >= 3) {
      uVar35 = 3;
    }
    puVar29 = param_2 + 1;
    puVar11 = param_2;
    uVar26 = 0;
    do {
      while( true ) {
        uVar9 = uVar26;
        iVar21 = *piVar45;
        if (iVar21 == 0) {
          piVar30 = (int *)0x0;
          goto LAB_017e2188;
        }
        iVar42 = iVar17 + iVar21;
        if (*(uint *)(iVar17 + iVar21) == *param_2) break;
LAB_017e1f6c:
        piVar45 = piVar45 + 1;
        uVar26 = uVar9 + 1;
        if (uVar35 <= uVar9 + 1) goto LAB_017e2038;
      }
      puVar28 = (uint *)(iVar42 + 4);
      puVar11 = (uint *)((int)puVar29 + ((int)pcVar8 - (int)puVar28));
      if (param_3 < puVar11) {
        puVar11 = param_3;
      }
      puVar32 = (uint *)((int)puVar11 + -3);
      if (puVar29 < puVar32) {
        if (*(uint *)(iVar42 + 4) == param_2[1]) {
          puVar12 = param_2 + 2;
          local_144 = (uint *)(iVar42 + 8);
          if (puVar12 < puVar32) {
            do {
              if (*local_144 != *puVar12) {
                uVar26 = *local_144 ^ *puVar12;
                bVar4 = (byte)uVar26;
                bVar5 = (byte)(uVar26 >> 8);
                bVar6 = (byte)(uVar26 >> 0x10);
                bVar2 = (byte)(uVar26 >> 0x18);
                pcVar13 = (char *)((int)puVar12 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 |
                                                                    bVar4 >> 1 & 1) << 1 |
                                                                   bVar4 >> 2 & 1) << 1 |
                                                                  bVar4 >> 3 & 1) << 1 |
                                                                 bVar4 >> 4 & 1) << 1 |
                                                                bVar4 >> 5 & 1) << 1 |
                                                               bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
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
                                                               bVar6 >> 6 & 1) << 1 | bVar6 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                        bVar2 >> 1 & 1) << 1 |
                                                                       bVar2 >> 2 & 1) << 1 |
                                                                      bVar2 >> 3 & 1) << 1 |
                                                                     bVar2 >> 4 & 1) << 1 |
                                                                    bVar2 >> 5 & 1) << 1 |
                                                                   bVar2 >> 6 & 1) << 1 | bVar2 >> 7
                                                                  )) >> 3) - (int)puVar29));
                goto joined_r0x017e2234;
              }
              puVar12 = puVar12 + 1;
              local_144 = local_144 + 1;
            } while (puVar12 < puVar32);
          }
          goto LAB_017e21d0;
        }
        uVar26 = *(uint *)(iVar42 + 4) ^ param_2[1];
        bVar4 = (byte)uVar26;
        bVar5 = (byte)(uVar26 >> 8);
        bVar6 = (byte)(uVar26 >> 0x10);
        bVar2 = (byte)(uVar26 >> 0x18);
        pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                          | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                         << 1 | bVar4 >> 4 & 1) << 1 |
                                                       bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 |
                                                     bVar4 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1
                                                          | bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1)
                                                         << 1 | bVar2 >> 4 & 1) << 1 |
                                                       bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 |
                                                     bVar2 >> 7)) >> 3);
      }
      else {
        puVar12 = puVar29;
        local_144 = puVar28;
LAB_017e21d0:
        if (puVar12 < (uint *)((int)puVar11 + -1)) {
          if ((ushort)*local_144 == (ushort)*puVar12) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar12 = (uint *)((int)puVar12 + 2);
          }
        }
        if ((puVar12 < puVar11) && ((char)*local_144 == (char)*puVar12)) {
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        pcVar13 = (char *)((int)puVar12 - (int)puVar29);
      }
joined_r0x017e2234:
      if (pcVar8 == (char *)((int)puVar28 + (int)pcVar13)) {
        puVar11 = (uint *)((int)puVar29 + (int)pcVar13);
        if (puVar11 < puVar7) {
          if (*puVar23 == *(uint *)((int)puVar29 + (int)pcVar13)) {
            puVar28 = puVar11 + 1;
            local_144 = puVar23 + 1;
            if (puVar28 < puVar7) {
              do {
                if (*local_144 != *puVar28) {
                  uVar26 = *local_144 ^ *puVar28;
                  bVar4 = (byte)uVar26;
                  bVar5 = (byte)(uVar26 >> 8);
                  bVar6 = (byte)(uVar26 >> 0x10);
                  bVar2 = (byte)(uVar26 >> 0x18);
                  pcVar20 = (char *)((int)puVar28 +
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
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar11));
                  goto LAB_017e2394;
                }
                puVar28 = puVar28 + 1;
                local_144 = local_144 + 1;
              } while (puVar28 < puVar7);
            }
            goto LAB_017e2348;
          }
          uVar26 = *puVar23 ^ *(uint *)((int)puVar29 + (int)pcVar13);
          bVar4 = (byte)uVar26;
          bVar5 = (byte)(uVar26 >> 8);
          bVar6 = (byte)(uVar26 >> 0x10);
          bVar2 = (byte)(uVar26 >> 0x18);
          pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar28 = puVar11;
          local_144 = puVar23;
LAB_017e2348:
          if (puVar28 < (uint *)((int)param_3 + -1)) {
            if ((ushort)*local_144 == (ushort)*puVar28) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar28 = (uint *)((int)puVar28 + 2);
            }
          }
          if ((puVar28 < param_3) && ((char)*local_144 == (char)*puVar28)) {
            puVar28 = (uint *)((int)puVar28 + 1);
          }
          pcVar20 = (char *)((int)puVar28 - (int)puVar11);
        }
LAB_017e2394:
        pcVar13 = pcVar13 + (int)pcVar20;
      }
      puVar11 = (uint *)(pcVar13 + 4);
      if (puVar11 <= local_140) goto LAB_017e1f6c;
      piVar30 = (int *)(pcVar8 + uVar38 + (((3 - iVar41) - iVar17) - iVar21));
      *param_4 = (int)piVar30;
      if (param_3 == (uint *)((int)param_2 + (int)puVar11)) goto LAB_017e2810;
      piVar45 = piVar45 + 1;
      uVar26 = uVar9 + 1;
      local_140 = puVar11;
    } while (uVar9 + 1 < uVar35);
LAB_017e2038:
    piVar30 = *(int **)(iVar15 + iVar16 * 4);
    uVar27 = uVar27 - (uVar9 + 1);
    if (((uint)piVar30 & 0xff) < uVar27) {
      uVar27 = (uint)piVar30 & 0xff;
    }
    if (uVar27 != 0) {
      piVar45 = (int *)(iVar31 + ((uint)piVar30 >> 8) * 4);
      piVar33 = (int *)(iVar31 + (((uint)piVar30 >> 8) + uVar27) * 4);
      piVar30 = piVar45;
      do {
        piVar19 = piVar30 + 1;
        HintPreloadData(iVar17 + *piVar30);
        piVar30 = piVar19;
      } while (piVar19 != piVar33);
      local_134 = local_140;
      puVar29 = param_2 + 1;
      puVar7 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar30 = piVar45;
          iVar16 = *piVar30;
          iVar15 = iVar17 + iVar16;
          puVar11 = *(uint **)(iVar17 + iVar16);
          if (puVar11 == (uint *)*param_2) break;
LAB_017e20d0:
          piVar45 = piVar30 + 1;
          if (piVar30 + 1 == piVar33) goto LAB_017e2184;
        }
        puVar28 = (uint *)(iVar15 + 4);
        puVar11 = (uint *)((int)puVar29 + ((int)pcVar8 - (int)puVar28));
        if (param_3 < puVar11) {
          puVar11 = param_3;
        }
        puVar32 = (uint *)((int)puVar11 + -3);
        if (puVar29 < puVar32) {
          if (*(uint *)(iVar15 + 4) == param_2[1]) {
            puVar12 = param_2 + 2;
            local_13c = (uint *)(iVar15 + 8);
            if (puVar12 < puVar32) {
              do {
                if (*local_13c != *puVar12) {
                  uVar27 = *local_13c ^ *puVar12;
                  bVar4 = (byte)uVar27;
                  bVar5 = (byte)(uVar27 >> 8);
                  bVar6 = (byte)(uVar27 >> 0x10);
                  bVar2 = (byte)(uVar27 >> 0x18);
                  pcVar13 = (char *)((int)puVar12 +
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
                                                    << 8 | (uint)(byte)((((((((bVar2 & 1) << 1 |
                                                                             bVar2 >> 1 & 1) << 1 |
                                                                            bVar2 >> 2 & 1) << 1 |
                                                                           bVar2 >> 3 & 1) << 1 |
                                                                          bVar2 >> 4 & 1) << 1 |
                                                                         bVar2 >> 5 & 1) << 1 |
                                                                        bVar2 >> 6 & 1) << 1 |
                                                                       bVar2 >> 7)) >> 3) -
                                    (int)puVar29));
                  goto joined_r0x017e2484;
                }
                puVar12 = puVar12 + 1;
                local_13c = local_13c + 1;
              } while (puVar12 < puVar32);
            }
            goto LAB_017e2420;
          }
          uVar27 = *(uint *)(iVar15 + 4) ^ param_2[1];
          bVar4 = (byte)uVar27;
          bVar5 = (byte)(uVar27 >> 8);
          bVar6 = (byte)(uVar27 >> 0x10);
          bVar2 = (byte)(uVar27 >> 0x18);
          pcVar13 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                             1 | bVar2 >> 2 & 1) << 1 |
                                                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) <<
                                                          1 | bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1)
                                                        << 1 | bVar2 >> 7)) >> 3);
        }
        else {
          puVar12 = puVar29;
          local_13c = puVar28;
LAB_017e2420:
          if (puVar12 < (uint *)((int)puVar11 + -1)) {
            if ((ushort)*local_13c == (ushort)*puVar12) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar12 = (uint *)((int)puVar12 + 2);
            }
          }
          if ((puVar12 < puVar11) && ((char)*local_13c == (char)*puVar12)) {
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          pcVar13 = (char *)((int)puVar12 - (int)puVar29);
        }
joined_r0x017e2484:
        if (pcVar8 == (char *)((int)puVar28 + (int)pcVar13)) {
          puVar11 = (uint *)((int)puVar29 + (int)pcVar13);
          if (puVar11 < puVar7) {
            if (*puVar23 == *(uint *)((int)puVar29 + (int)pcVar13)) {
              puVar28 = puVar11 + 1;
              local_13c = puVar23 + 1;
              if (puVar28 < puVar7) {
                do {
                  if (*local_13c != *puVar28) {
                    uVar27 = *local_13c ^ *puVar28;
                    bVar4 = (byte)uVar27;
                    bVar5 = (byte)(uVar27 >> 8);
                    bVar6 = (byte)(uVar27 >> 0x10);
                    bVar2 = (byte)(uVar27 >> 0x18);
                    pcVar20 = (char *)((int)puVar28 +
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
                                                                  )) >> 3) - (int)puVar11));
                    goto LAB_017e24bc;
                  }
                  puVar28 = puVar28 + 1;
                  local_13c = local_13c + 1;
                } while (puVar28 < puVar7);
              }
              goto LAB_017e250c;
            }
            uVar27 = *puVar23 ^ *(uint *)((int)puVar29 + (int)pcVar13);
            bVar4 = (byte)uVar27;
            bVar5 = (byte)(uVar27 >> 8);
            bVar6 = (byte)(uVar27 >> 0x10);
            bVar2 = (byte)(uVar27 >> 0x18);
            pcVar20 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            puVar28 = puVar11;
            local_13c = puVar23;
LAB_017e250c:
            if (puVar28 < (uint *)((int)param_3 + -1)) {
              if ((ushort)*local_13c == (ushort)*puVar28) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar28 = (uint *)((int)puVar28 + 2);
              }
            }
            if ((puVar28 < param_3) && ((char)*local_13c == (char)*puVar28)) {
              puVar28 = (uint *)((int)puVar28 + 1);
            }
            pcVar20 = (char *)((int)puVar28 - (int)puVar11);
          }
LAB_017e24bc:
          pcVar13 = pcVar13 + (int)pcVar20;
        }
        puVar11 = (uint *)(pcVar13 + 4);
        if (puVar11 <= local_134) goto LAB_017e20d0;
        *param_4 = (int)(pcVar8 + uVar38 + (((3 - iVar41) - iVar17) - iVar16));
        if (param_3 == (uint *)((int)param_2 + (int)puVar11)) goto LAB_017e2810;
        piVar45 = piVar30 + 1;
        local_134 = puVar11;
      } while (piVar30 + 1 != piVar33);
LAB_017e2184:
      piVar30 = piVar30 + 1;
      local_140 = local_134;
    }
  }
LAB_017e2188:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar30,puVar11,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017e2810:
  local_140 = puVar11;
  goto LAB_017e2188;
}

