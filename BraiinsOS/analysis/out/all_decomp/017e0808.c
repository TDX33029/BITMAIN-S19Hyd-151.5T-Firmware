// FUN_017e0808 @ 017e0808 size=4164 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

char * FUN_017e0808(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint *puVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  int iVar33;
  uint *puVar34;
  int *piVar35;
  uint unaff_r9;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int *piVar46;
  bool bVar47;
  uint local_184;
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
  
  iVar32 = *(int *)(param_1 + 4);
  iVar37 = *(int *)(param_1 + 0xc);
  piVar28 = *(int **)(param_1 + 0xb4);
  local_2c = DAT_018ddaf8;
  iVar17 = *(int *)(param_1 + 0x5c);
  iVar18 = *(int *)(param_1 + 0x28);
  uVar7 = (int)param_2 - iVar32;
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar26 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar47 = uVar26 < uVar7 - uVar9;
  if (bVar47) {
    unaff_r9 = uVar7 - uVar26;
  }
  if (!bVar47) {
    unaff_r9 = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r9 = uVar9;
  }
  lVar3 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar9 = (uint)lVar3;
  uVar42 = *(uint *)(param_1 + 0xc4);
  uVar16 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20);
  iVar38 = piVar28[0x30];
  iVar19 = *(int *)(param_1 + 0x24);
  iVar30 = -iVar19;
  uVar36 = iVar30 + 0x38;
  uVar10 = uVar9 >> (0x42U - iVar38 & 0xff) | uVar16 << (iVar38 - 0x22U & 0xff) |
           uVar16 >> (0x22U - iVar38 & 0xff);
  uVar26 = uVar42;
  if (4 < uVar42) {
    uVar26 = 5;
  }
  uVar43 = uVar42;
  if (5 < uVar42) {
    uVar43 = uVar42 - 5;
  }
  iVar38 = uVar10 * 0x10;
  HintPreloadData(piVar28[0x17] + iVar38);
  local_158 = 1 << (uVar26 & 0xff);
  uVar26 = (uint)(5 < uVar42);
  if (5 < uVar42) {
    uVar26 = uVar26 << (uVar43 & 0xff);
  }
  uVar43 = *(uint *)(param_1 + 0x50);
  uVar42 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0xdc) == 0) {
    local_17c = *(uint *)(param_1 + 0x1c);
    iVar29 = param_1 + 0x2c;
    iVar11 = iVar17;
    iVar15 = iVar18;
    iVar33 = iVar32;
    if (uVar7 - local_17c < 0x181) {
      local_180 = 0x20 - uVar36;
    }
    else {
      uVar9 = local_17c + 0x60;
      if (local_17c < uVar9) {
        local_180 = 0x20 - uVar36;
        uVar16 = uVar42;
        uVar20 = uVar43;
        while( true ) {
          uVar39 = *(uint *)(iVar29 + (local_17c & 7) * 4);
          uVar24 = *(uint *)(local_17c + iVar32 + 8);
          lVar3 = (ulonglong)uVar24 * 0xbf9b0000;
          uVar16 = *(int *)(local_17c + iVar32 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
                   (int)((ulonglong)lVar3 >> 0x20) ^ uVar16;
          uVar24 = ((uint)lVar3 ^ uVar20) >> (uVar36 & 0xff) | uVar16 << (local_180 & 0xff) |
                   uVar16 >> (iVar30 + 0x18U & 0xff);
          uVar16 = uVar39 >> 8;
          uVar20 = uVar24 >> 8;
          HintPreloadData(iVar18 + uVar20 * 0x20);
          iVar19 = uVar20 * 0x80;
          HintPreloadData(iVar17 + iVar19);
          HintPreloadData(iVar17 + iVar19 + 0x40);
          *(uint *)(iVar29 + (local_17c & 7) * 4) = uVar24;
          uVar20 = *(byte *)(iVar18 + uVar16 * 0x20) - 1 & 0x1f;
          if (uVar20 == 0) {
            uVar20 = 0x1f;
          }
          *(char *)(iVar18 + uVar16 * 0x20) = (char)uVar20;
          *(char *)(iVar18 + uVar16 * 0x20 + uVar20) = (char)uVar39;
          *(uint *)(iVar17 + (uVar16 * 0x20 + uVar20) * 4) = local_17c;
          local_17c = local_17c + 1;
          if (uVar9 == local_17c) break;
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar16 = *(uint *)(param_1 + 0x54);
        }
        iVar19 = *(int *)(param_1 + 0x24);
        iVar11 = *(int *)(param_1 + 0x5c);
        iVar15 = *(int *)(param_1 + 0x28);
        iVar33 = *(int *)(param_1 + 4);
      }
      else {
        local_180 = 0x20 - uVar36;
      }
      local_17c = uVar7 + -0x20;
      if ((char *)(local_17c + iVar32) <= (char *)((int)param_2 + 1)) {
        pcVar12 = (char *)((int)param_2 + 1) + (1 - (int)(local_17c + iVar32));
        if (pcVar12 < (char *)0x9) {
          uVar9 = local_17c + (int)pcVar12;
        }
        else {
          uVar9 = uVar7 + -0x18;
        }
        if (local_17c < uVar9) {
          uVar24 = *(uint *)(param_1 + 0x54);
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar16 = local_17c;
          do {
            uVar40 = uVar16 & 7;
            piVar46 = (int *)(uVar16 + iVar32 + 4);
            puVar41 = (uint *)(uVar16 + iVar32);
            uVar16 = uVar16 + 1;
            lVar3 = (ulonglong)*puVar41 * 0xbf9b0000;
            uVar39 = *piVar46 * -0x40650000 + *puVar41 * -0x30e44324 +
                     (int)((ulonglong)lVar3 >> 0x20) ^ uVar24;
            uVar44 = ((uint)lVar3 ^ uVar20) >> (0x38U - iVar19 & 0xff) |
                     uVar39 << (iVar19 - 0x18U & 0xff) | uVar39 >> (0x18U - iVar19 & 0xff);
            uVar39 = uVar44 >> 8;
            HintPreloadData(iVar15 + uVar39 * 0x20);
            iVar1 = uVar39 * 0x80;
            HintPreloadData(iVar11 + iVar1);
            HintPreloadData(iVar11 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar40 * 4 + 0x2c) = uVar44;
          } while (uVar16 < uVar9);
        }
      }
    }
    local_184 = iVar30 + 0x18;
    if (local_17c < uVar7) {
      do {
        uVar9 = *(uint *)(local_17c + iVar33 + 8);
        uVar24 = *(uint *)(iVar29 + (local_17c & 7) * 4);
        lVar3 = (ulonglong)uVar9 * 0xbf9b0000;
        uVar9 = *(int *)(local_17c + iVar33 + 0xc) * -0x40650000 + uVar9 * -0x30e44324 +
                (int)((ulonglong)lVar3 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar20 = ((uint)lVar3 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar19 & 0xff) |
                 uVar9 << (iVar19 - 0x18U & 0xff) | uVar9 >> (0x18U - iVar19 & 0xff);
        uVar9 = uVar24 >> 8;
        uVar16 = uVar20 >> 8;
        HintPreloadData(iVar15 + uVar16 * 0x20);
        iVar30 = uVar16 * 0x80;
        HintPreloadData(iVar11 + iVar30);
        HintPreloadData(iVar11 + iVar30 + 0x40);
        *(uint *)(iVar29 + (local_17c & 7) * 4) = uVar20;
        uVar16 = *(byte *)(iVar15 + uVar9 * 0x20) - 1 & 0x1f;
        if (uVar16 == 0) {
          uVar16 = 0x1f;
        }
        *(char *)(iVar15 + uVar9 * 0x20) = (char)uVar16;
        *(char *)(iVar15 + uVar9 * 0x20 + uVar16) = (char)uVar24;
        *(uint *)(iVar11 + (uVar16 + uVar9 * 0x20) * 4) = local_17c;
        local_17c = local_17c + 1;
      } while (uVar7 != local_17c);
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    lVar3 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar42 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar3 >> 0x20) ^
             uVar42;
    uVar16 = ((uint)lVar3 ^ uVar43) >> (uVar36 & 0xff) | uVar42 << (local_180 & 0xff) |
             uVar42 >> (local_184 & 0xff);
    uVar9 = uVar16 >> 8;
    HintPreloadData(iVar18 + uVar9 * 0x20);
    iVar30 = uVar9 * 0x80;
    HintPreloadData(iVar17 + iVar30);
    HintPreloadData(iVar17 + iVar30 + 0x40);
    local_140 = *(char **)(iVar29 + (uVar7 & 7) * 4);
    *(uint *)(iVar29 + (uVar7 & 7) * 4) = uVar16;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar7;
    local_140 = (char *)((uVar43 ^ uVar9) >> (uVar36 & 0xff) |
                         (uVar42 ^ uVar16) << (0x20 - uVar36 & 0xff) |
                        (uVar42 ^ uVar16) >> (iVar30 + 0x18U & 0xff));
  }
  uVar9 = (uint)local_140 >> 8;
  iVar17 = iVar17 + uVar9 * 0x80;
  iVar30 = iVar18 + uVar9 * 0x20;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)local_140;
  uVar39 = ((uint)local_140 & 0xff) * 0x1010101;
  uVar36 = *(uint *)(iVar30 + 0x1c) ^ uVar39;
  uVar16 = *(uint *)(iVar30 + 0x18) ^ uVar39;
  uVar44 = *(uint *)(iVar30 + 0x14) ^ uVar39;
  uVar42 = *(uint *)(iVar30 + 0x10) ^ uVar39;
  uVar20 = *(uint *)(iVar30 + 0xc) ^ uVar39;
  uVar43 = *(uint *)(iVar30 + 8) ^ uVar39;
  uVar24 = *(uint *)(iVar30 + 4) ^ uVar39;
  uVar39 = uVar39 ^ *(uint *)(iVar18 + uVar9 * 0x20);
  uVar45 = (uint)*(byte *)(iVar18 + uVar9 * 0x20);
  uVar40 = uVar45 & 0x1f;
  uVar16 = ~((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar44 | 0x80808080) + 0xfefefeff | uVar44) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar16 = uVar16 >> uVar40 | uVar16 << 0x20 - uVar40;
  if (uVar16 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    do {
      if (uVar16 == 0) {
        iVar11 = 0;
      }
      else {
        bVar4 = (byte)uVar16;
        bVar5 = (byte)(uVar16 >> 8);
        bVar6 = (byte)(uVar16 >> 0x10);
        bVar2 = (byte)(uVar16 >> 0x18);
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
      uVar36 = iVar11 + uVar40 & 0x1f;
      if (uVar36 == 0) {
        bVar47 = true;
        iVar11 = iVar19;
      }
      else {
        uVar36 = *(uint *)(iVar17 + uVar36 * 4);
        if (uVar36 < unaff_r9) break;
        HintPreloadData(iVar32 + uVar36);
        iVar11 = iVar19 + 1;
        local_12c[iVar19] = uVar36;
        bVar47 = local_158 != 1;
        local_158 = local_158 + -1;
      }
      uVar16 = uVar16 & uVar16 - 1;
      if (uVar16 == 0) {
        bVar47 = false;
      }
      iVar19 = iVar11;
    } while (bVar47);
  }
  uVar16 = uVar45 - 1 & 0x1f;
  if (uVar16 == 0) {
    uVar16 = 0x1f;
  }
  *(char *)(iVar18 + uVar9 * 0x20) = (char)uVar16;
  *(char *)(iVar30 + uVar16) = (char)local_140;
  iVar18 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar18 + 1;
  *(int *)(iVar17 + uVar16 * 4) = iVar18;
  if (iVar19 == 0) {
    local_140 = (char *)0x3;
  }
  else {
    piVar46 = &iStack_130;
    iVar17 = 0;
    pcVar12 = (char *)0x3;
    do {
      piVar46 = piVar46 + 1;
      iVar18 = *piVar46;
      puVar41 = (uint *)(iVar32 + iVar18);
      if (*(int *)((int)puVar41 + (int)(pcVar12 + -3)) ==
          *(int *)((int)param_2 + (int)(pcVar12 + -3))) {
        puVar25 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar32 + iVar18) == *param_2) {
            do {
              puVar25 = puVar25 + 1;
              puVar41 = puVar41 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar25) {
                if (((uint *)((int)param_3 + -1) <= puVar25) || ((short)*puVar41 != (short)*puVar25)
                   ) goto LAB_017e1544;
                goto LAB_017e153c;
              }
            } while (*puVar41 == *puVar25);
            uVar9 = *puVar41 ^ *puVar25;
            bVar4 = (byte)uVar9;
            bVar5 = (byte)(uVar9 >> 8);
            bVar6 = (byte)(uVar9 >> 0x10);
            bVar2 = (byte)(uVar9 >> 0x18);
            local_140 = (char *)((int)puVar25 +
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
            uVar9 = *(uint *)(iVar32 + iVar18) ^ *param_2;
            bVar4 = (byte)uVar9;
            bVar5 = (byte)(uVar9 >> 8);
            bVar6 = (byte)(uVar9 >> 0x10);
            bVar2 = (byte)(uVar9 >> 0x18);
            local_140 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
            if (*(short *)(iVar32 + iVar18) == (short)*param_2) {
LAB_017e153c:
              puVar25 = (uint *)((int)puVar25 + 2);
              puVar41 = (uint *)((int)puVar41 + 2);
LAB_017e1544:
              if (puVar25 < param_3) goto LAB_017e0e14;
            }
            else {
              if (param_3 <= param_2) goto LAB_017e0dbc;
LAB_017e0e14:
              if ((char)*puVar41 == (char)*puVar25) goto LAB_017e12c8;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar32 + iVar18)))
            goto LAB_017e0dbc;
LAB_017e12c8:
            puVar25 = (uint *)((int)puVar25 + 1);
          }
          local_140 = (char *)((int)puVar25 - (int)param_2);
        }
        if (pcVar12 < local_140) {
          *param_4 = uVar7 + (3 - iVar18);
          pcVar12 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017e0dbc:
      local_140 = pcVar12;
      iVar17 = iVar17 + 1;
      pcVar12 = local_140;
    } while (iVar17 != iVar19);
  }
  uVar26 = uVar26 + local_158;
  iVar17 = piVar28[0x17];
  iVar19 = piVar28[1];
  iVar18 = uVar10 * 4 + 0x40000003;
  iVar30 = piVar28[0x19];
  piVar46 = (int *)(iVar17 + iVar38);
  HintPreloadData(iVar19 + *piVar46);
  HintPreloadData(iVar30 + (*(uint *)(iVar17 + iVar18 * 4) >> 8) * 4);
  HintPreloadData(iVar19 + piVar46[1]);
  pcVar12 = (char *)piVar46[2];
  HintPreloadData(pcVar12 + iVar19);
  if (uVar26 != 0) {
    pcVar8 = (char *)*piVar28;
    puVar25 = (uint *)(iVar32 + iVar37);
    pcVar13 = pcVar8 + uVar7 + ((3 - iVar37) - iVar19);
    puVar41 = (uint *)((int)param_3 + -3);
    puVar31 = param_2 + 1;
    pcVar12 = pcVar13;
    uVar9 = 0;
    uVar10 = uVar26;
    if (2 < uVar26) {
      uVar10 = 3;
    }
    do {
      while( true ) {
        uVar16 = uVar9;
        iVar32 = *piVar46;
        if (iVar32 == 0) {
          piVar28 = (int *)0x0;
          goto LAB_017e1158;
        }
        iVar38 = iVar19 + iVar32;
        if (*(uint *)(iVar19 + iVar32) == *param_2) break;
LAB_017e0f38:
        piVar46 = piVar46 + 1;
        uVar9 = uVar16 + 1;
        if (uVar10 <= uVar16 + 1) goto LAB_017e1004;
      }
      puVar27 = (uint *)(iVar38 + 4);
      puVar21 = (uint *)((int)puVar31 + ((int)pcVar8 - (int)puVar27));
      if (param_3 < puVar21) {
        puVar21 = param_3;
      }
      puVar34 = (uint *)((int)puVar21 + -3);
      if (puVar31 < puVar34) {
        if (*(uint *)(iVar38 + 4) == param_2[1]) {
          puVar14 = param_2 + 2;
          local_144 = (uint *)(iVar38 + 8);
          if (puVar14 < puVar34) {
            do {
              if (*local_144 != *puVar14) {
                uVar9 = *local_144 ^ *puVar14;
                bVar4 = (byte)uVar9;
                bVar5 = (byte)(uVar9 >> 8);
                bVar6 = (byte)(uVar9 >> 0x10);
                bVar2 = (byte)(uVar9 >> 0x18);
                pcVar12 = (char *)((int)puVar14 +
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
                                                                  )) >> 3) - (int)puVar31));
                goto joined_r0x017e1204;
              }
              puVar14 = puVar14 + 1;
              local_144 = local_144 + 1;
            } while (puVar14 < puVar34);
          }
          goto LAB_017e11a0;
        }
        uVar9 = *(uint *)(iVar38 + 4) ^ param_2[1];
        bVar4 = (byte)uVar9;
        bVar5 = (byte)(uVar9 >> 8);
        bVar6 = (byte)(uVar9 >> 0x10);
        bVar2 = (byte)(uVar9 >> 0x18);
        pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
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
        puVar14 = puVar31;
        local_144 = puVar27;
LAB_017e11a0:
        if (puVar14 < (uint *)((int)puVar21 + -1)) {
          if ((short)*local_144 == (short)*puVar14) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar14 = (uint *)((int)puVar14 + 2);
          }
        }
        if ((puVar14 < puVar21) && ((char)*local_144 == (char)*puVar14)) {
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        pcVar12 = (char *)((int)puVar14 - (int)puVar31);
      }
joined_r0x017e1204:
      if (pcVar8 == (char *)((int)puVar27 + (int)pcVar12)) {
        puVar21 = (uint *)((int)puVar31 + (int)pcVar12);
        if (puVar21 < puVar41) {
          if (*puVar25 == *(uint *)((int)puVar31 + (int)pcVar12)) {
            puVar27 = puVar21 + 1;
            local_144 = puVar25 + 1;
            if (puVar27 < puVar41) {
              do {
                if (*local_144 != *puVar27) {
                  uVar9 = *local_144 ^ *puVar27;
                  bVar4 = (byte)uVar9;
                  bVar5 = (byte)(uVar9 >> 8);
                  bVar6 = (byte)(uVar9 >> 0x10);
                  bVar2 = (byte)(uVar9 >> 0x18);
                  pcVar23 = (char *)((int)puVar27 +
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
                                    (int)puVar21));
                  goto LAB_017e1364;
                }
                puVar27 = puVar27 + 1;
                local_144 = local_144 + 1;
              } while (puVar27 < puVar41);
            }
            goto LAB_017e1318;
          }
          uVar9 = *puVar25 ^ *(uint *)((int)puVar31 + (int)pcVar12);
          bVar4 = (byte)uVar9;
          bVar5 = (byte)(uVar9 >> 8);
          bVar6 = (byte)(uVar9 >> 0x10);
          bVar2 = (byte)(uVar9 >> 0x18);
          pcVar23 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar27 = puVar21;
          local_144 = puVar25;
LAB_017e1318:
          if (puVar27 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_144 == (short)*puVar27) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar27 = (uint *)((int)puVar27 + 2);
            }
          }
          if ((puVar27 < param_3) && ((char)*local_144 == (char)*puVar27)) {
            puVar27 = (uint *)((int)puVar27 + 1);
          }
          pcVar23 = (char *)((int)puVar27 - (int)puVar21);
        }
LAB_017e1364:
        pcVar12 = pcVar12 + (int)pcVar23;
      }
      pcVar12 = pcVar12 + 4;
      if (pcVar12 <= local_140) goto LAB_017e0f38;
      piVar28 = (int *)(pcVar13 + -iVar32);
      *param_4 = (int)piVar28;
      if (param_3 == (uint *)((int)param_2 + (int)pcVar12)) goto LAB_017e17f8;
      piVar46 = piVar46 + 1;
      uVar9 = uVar16 + 1;
      local_140 = pcVar12;
    } while (uVar16 + 1 < uVar10);
LAB_017e1004:
    piVar28 = *(int **)(iVar17 + iVar18 * 4);
    uVar26 = uVar26 - (uVar16 + 1);
    if (((uint)piVar28 & 0xff) < uVar26) {
      uVar26 = (uint)piVar28 & 0xff;
    }
    if (uVar26 != 0) {
      piVar46 = (int *)(iVar30 + ((uint)piVar28 >> 8) * 4);
      piVar35 = (int *)(iVar30 + (((uint)piVar28 >> 8) + uVar26) * 4);
      piVar28 = piVar46;
      do {
        piVar22 = piVar28 + 1;
        HintPreloadData(iVar19 + *piVar28);
        piVar28 = piVar22;
      } while (piVar22 != piVar35);
      puVar31 = param_2 + 1;
      local_134 = local_140;
      puVar41 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar28 = piVar46;
          iVar18 = *piVar28;
          iVar17 = iVar19 + iVar18;
          pcVar12 = *(char **)(iVar19 + iVar18);
          if (pcVar12 == (char *)*param_2) break;
LAB_017e10a0:
          piVar46 = piVar28 + 1;
          if (piVar28 + 1 == piVar35) goto LAB_017e1154;
        }
        puVar27 = (uint *)(iVar17 + 4);
        puVar21 = (uint *)((int)puVar31 + ((int)pcVar8 - (int)puVar27));
        if (param_3 < puVar21) {
          puVar21 = param_3;
        }
        puVar34 = (uint *)((int)puVar21 + -3);
        if (puVar31 < puVar34) {
          if (*(uint *)(iVar17 + 4) == param_2[1]) {
            puVar14 = param_2 + 2;
            local_13c = (uint *)(iVar17 + 8);
            if (puVar14 < puVar34) {
              do {
                if (*local_13c != *puVar14) {
                  uVar26 = *local_13c ^ *puVar14;
                  bVar4 = (byte)uVar26;
                  bVar5 = (byte)(uVar26 >> 8);
                  bVar6 = (byte)(uVar26 >> 0x10);
                  bVar2 = (byte)(uVar26 >> 0x18);
                  pcVar12 = (char *)((int)puVar14 +
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
                                    (int)puVar31));
                  goto joined_r0x017e1454;
                }
                puVar14 = puVar14 + 1;
                local_13c = local_13c + 1;
              } while (puVar14 < puVar34);
            }
            goto LAB_017e13f0;
          }
          uVar26 = *(uint *)(iVar17 + 4) ^ param_2[1];
          bVar4 = (byte)uVar26;
          bVar5 = (byte)(uVar26 >> 8);
          bVar6 = (byte)(uVar26 >> 0x10);
          bVar2 = (byte)(uVar26 >> 0x18);
          pcVar12 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
          puVar14 = puVar31;
          local_13c = puVar27;
LAB_017e13f0:
          if (puVar14 < (uint *)((int)puVar21 + -1)) {
            if ((short)*local_13c == (short)*puVar14) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar14 = (uint *)((int)puVar14 + 2);
            }
          }
          if ((puVar14 < puVar21) && ((char)*local_13c == (char)*puVar14)) {
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          pcVar12 = (char *)((int)puVar14 - (int)puVar31);
        }
joined_r0x017e1454:
        if (pcVar8 == (char *)((int)puVar27 + (int)pcVar12)) {
          puVar21 = (uint *)((int)puVar31 + (int)pcVar12);
          if (puVar21 < puVar41) {
            if (*puVar25 == *(uint *)((int)puVar31 + (int)pcVar12)) {
              puVar27 = puVar21 + 1;
              local_13c = puVar25 + 1;
              if (puVar27 < puVar41) {
                do {
                  if (*local_13c != *puVar27) {
                    uVar26 = *local_13c ^ *puVar27;
                    bVar4 = (byte)uVar26;
                    bVar5 = (byte)(uVar26 >> 8);
                    bVar6 = (byte)(uVar26 >> 0x10);
                    bVar2 = (byte)(uVar26 >> 0x18);
                    pcVar13 = (char *)((int)puVar27 +
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
                                                                  )) >> 3) - (int)puVar21));
                    goto LAB_017e148c;
                  }
                  puVar27 = puVar27 + 1;
                  local_13c = local_13c + 1;
                } while (puVar27 < puVar41);
              }
              goto LAB_017e14dc;
            }
            uVar26 = *puVar25 ^ *(uint *)((int)puVar31 + (int)pcVar12);
            bVar4 = (byte)uVar26;
            bVar5 = (byte)(uVar26 >> 8);
            bVar6 = (byte)(uVar26 >> 0x10);
            bVar2 = (byte)(uVar26 >> 0x18);
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
            puVar27 = puVar21;
            local_13c = puVar25;
LAB_017e14dc:
            if (puVar27 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar27) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar27 = (uint *)((int)puVar27 + 2);
              }
            }
            if ((puVar27 < param_3) && ((char)*local_13c == (char)*puVar27)) {
              puVar27 = (uint *)((int)puVar27 + 1);
            }
            pcVar13 = (char *)((int)puVar27 - (int)puVar21);
          }
LAB_017e148c:
          pcVar12 = pcVar12 + (int)pcVar13;
        }
        pcVar12 = pcVar12 + 4;
        if (pcVar12 <= local_134) goto LAB_017e10a0;
        *param_4 = (int)(pcVar8 + uVar7 + (((3 - iVar37) - iVar19) - iVar18));
        if (param_3 == (uint *)((int)param_2 + (int)pcVar12)) goto LAB_017e17f8;
        piVar46 = piVar28 + 1;
        local_134 = pcVar12;
      } while (piVar28 + 1 != piVar35);
LAB_017e1154:
      piVar28 = piVar28 + 1;
      local_140 = local_134;
    }
  }
LAB_017e1158:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar28,pcVar12,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017e17f8:
  local_140 = pcVar12;
  goto LAB_017e1158;
}

