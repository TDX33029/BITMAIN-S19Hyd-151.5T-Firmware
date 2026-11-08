// FUN_017e4b1c @ 017e4b1c size=4600 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint * FUN_017e4b1c(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  char *pcVar24;
  uint *puVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint unaff_r6;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  int *piVar51;
  bool bVar52;
  bool bVar53;
  uint local_188;
  uint local_184;
  int local_160;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint local_138;
  uint *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar44 = *(int *)(param_1 + 4);
  piVar28 = *(int **)(param_1 + 0xb4);
  uVar16 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar18 = *(int *)(param_1 + 0x5c);
  iVar19 = *(int *)(param_1 + 0x28);
  uVar8 = (int)param_2 - iVar44;
  uVar30 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar52 = uVar30 < uVar8 - uVar16;
  iVar11 = *(int *)(param_1 + 0xc);
  if (bVar52) {
    unaff_r6 = uVar8 - uVar30;
  }
  if (!bVar52) {
    unaff_r6 = uVar16;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r6 = uVar16;
  }
  iVar45 = *(int *)(param_1 + 0x24);
  uVar48 = *(uint *)(param_1 + 0xc4);
  lVar4 = (ulonglong)*param_2 * 0xbb000000;
  uVar16 = (uint)lVar4;
  uVar20 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20);
  iVar9 = piVar28[0x30];
  iVar50 = -iVar45;
  uVar39 = iVar50 + 0x38;
  uVar17 = uVar16 >> (0x42U - iVar9 & 0xff) | uVar20 << (iVar9 - 0x22U & 0xff) |
           uVar20 >> (0x22U - iVar9 & 0xff);
  uVar30 = uVar48;
  if (5 < uVar48) {
    uVar30 = 6;
  }
  uVar49 = uVar48;
  if (6 < uVar48) {
    uVar49 = uVar48 - 6;
  }
  iVar9 = uVar17 * 0x10;
  HintPreloadData(piVar28[0x17] + iVar9);
  local_160 = 1 << (uVar30 & 0xff);
  uVar30 = (uint)(6 < uVar48);
  if (6 < uVar48) {
    uVar30 = uVar30 << (uVar49 & 0xff);
  }
  uVar48 = *(uint *)(param_1 + 0x50);
  uVar49 = *(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar12 = iVar19;
    iVar27 = iVar18;
    local_138 = iVar44;
    if (uVar8 - uVar16 < 0x181) {
      local_184 = 0x20 - uVar39;
    }
    else {
      uVar20 = uVar16 + 0x60;
      if (uVar16 < uVar20) {
        local_184 = 0x20 - uVar39;
        uVar21 = uVar49;
        uVar22 = uVar48;
        while( true ) {
          uVar29 = *(uint *)(iVar32 + (uVar16 & 7) * 4);
          uVar40 = *(uint *)(uVar16 + iVar44 + 8);
          lVar4 = (ulonglong)uVar40 * 0xbb000000;
          uVar21 = *(int *)(uVar16 + iVar44 + 0xc) * -0x45000000 + uVar40 * -0x30e44324 +
                   (int)((ulonglong)lVar4 >> 0x20) ^ uVar21;
          uVar40 = uVar29 >> 8;
          uVar22 = ((uint)lVar4 ^ uVar22) >> (uVar39 & 0xff) | uVar21 << (local_184 & 0xff) |
                   uVar21 >> (iVar50 + 0x18U & 0xff);
          uVar21 = uVar22 >> 8;
          iVar45 = uVar21 * 0x40;
          iVar12 = uVar21 * 0x100;
          HintPreloadData(iVar19 + iVar45);
          HintPreloadData(iVar18 + iVar12);
          HintPreloadData(iVar19 + iVar45 + 0x20);
          HintPreloadData(iVar18 + iVar12 + 0x40);
          *(uint *)(iVar32 + (uVar16 & 7) * 4) = uVar22;
          uVar21 = *(byte *)(iVar19 + uVar40 * 0x40) - 1 & 0x3f;
          if (uVar21 == 0) {
            uVar21 = 0x3f;
          }
          *(char *)(iVar19 + uVar40 * 0x40) = (char)uVar21;
          *(char *)(iVar19 + uVar40 * 0x40 + uVar21) = (char)uVar29;
          *(uint *)(iVar18 + (uVar40 * 0x40 + uVar21) * 4) = uVar16;
          uVar16 = uVar16 + 1;
          if (uVar20 == uVar16) break;
          uVar22 = *(uint *)(param_1 + 0x50);
          uVar21 = *(uint *)(param_1 + 0x54);
        }
        iVar45 = *(int *)(param_1 + 0x24);
        iVar12 = *(int *)(param_1 + 0x28);
        iVar27 = *(int *)(param_1 + 0x5c);
        local_138 = *(int *)(param_1 + 4);
      }
      else {
        local_184 = 0x20 - uVar39;
      }
      uVar16 = uVar8 + -0x20;
      if ((char *)(uVar16 + iVar44) <= (char *)((int)param_2 + 1)) {
        pcVar10 = (char *)((int)param_2 + 1) + (1 - (int)(uVar16 + iVar44));
        if (pcVar10 < (char *)0x9) {
          uVar20 = uVar16 + (int)pcVar10;
        }
        else {
          uVar20 = uVar8 + -0x18;
        }
        if (uVar16 < uVar20) {
          uVar40 = *(uint *)(param_1 + 0x54);
          uVar22 = *(uint *)(param_1 + 0x50);
          uVar21 = uVar16;
          do {
            uVar33 = uVar21 & 7;
            piVar51 = (int *)(uVar21 + iVar44 + 4);
            puVar13 = (uint *)(uVar21 + iVar44);
            uVar21 = uVar21 + 1;
            lVar4 = (ulonglong)*puVar13 * 0xbb000000;
            uVar29 = *piVar51 * -0x45000000 + *puVar13 * -0x30e44324 +
                     (int)((ulonglong)lVar4 >> 0x20) ^ uVar40;
            uVar34 = ((uint)lVar4 ^ uVar22) >> (0x38U - iVar45 & 0xff) |
                     uVar29 << (iVar45 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar45 & 0xff);
            uVar29 = uVar34 >> 8;
            iVar1 = uVar29 * 0x40;
            iVar2 = uVar29 * 0x100;
            HintPreloadData(iVar12 + iVar1);
            HintPreloadData(iVar27 + iVar2);
            HintPreloadData(iVar12 + iVar1 + 0x20);
            HintPreloadData(iVar27 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar33 * 4 + 0x2c) = uVar34;
          } while (uVar21 < uVar20);
        }
      }
    }
    local_188 = iVar50 + 0x18;
    if (uVar16 < uVar8) {
      do {
        uVar40 = *(uint *)(iVar32 + (uVar16 & 7) * 4);
        uVar21 = *(uint *)(uVar16 + local_138 + 8);
        lVar4 = (ulonglong)uVar21 * 0xbb000000;
        uVar20 = uVar40 >> 8;
        uVar21 = *(int *)(uVar16 + local_138 + 0xc) * -0x45000000 + uVar21 * -0x30e44324 +
                 (int)((ulonglong)lVar4 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar22 = ((uint)lVar4 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar45 & 0xff) |
                 uVar21 << (iVar45 - 0x18U & 0xff) | uVar21 >> (0x18U - iVar45 & 0xff);
        uVar21 = uVar22 >> 8;
        iVar50 = uVar21 * 0x40;
        iVar1 = uVar21 * 0x100;
        HintPreloadData(iVar12 + iVar50);
        HintPreloadData(iVar27 + iVar1);
        HintPreloadData(iVar12 + iVar50 + 0x20);
        HintPreloadData(iVar27 + iVar1 + 0x40);
        *(uint *)(iVar32 + (uVar16 & 7) * 4) = uVar22;
        uVar21 = *(byte *)(iVar12 + uVar20 * 0x40) - 1 & 0x3f;
        if (uVar21 == 0) {
          uVar21 = 0x3f;
        }
        *(char *)(iVar12 + uVar20 * 0x40) = (char)uVar21;
        *(char *)(iVar12 + uVar20 * 0x40 + uVar21) = (char)uVar40;
        *(uint *)(iVar27 + (uVar21 + uVar20 * 0x40) * 4) = uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar8 != uVar16);
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    lVar4 = (ulonglong)param_2[2] * 0xbb000000;
    uVar49 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar4 >> 0x20) ^
             uVar49;
    uVar20 = ((uint)lVar4 ^ uVar48) >> (uVar39 & 0xff) | uVar49 << (local_184 & 0xff) |
             uVar49 >> (local_188 & 0xff);
    uVar16 = uVar20 >> 8;
    local_138 = *(uint *)(iVar32 + (uVar8 & 7) * 4);
    iVar50 = uVar16 * 0x40;
    iVar45 = uVar16 * 0x100;
    HintPreloadData(iVar19 + iVar50);
    HintPreloadData(iVar19 + iVar50 + 0x20);
    HintPreloadData(iVar18 + iVar45);
    HintPreloadData(iVar18 + iVar45 + 0x40);
    *(uint *)(iVar32 + (uVar8 & 7) * 4) = uVar20;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar8;
    local_138 = (uVar48 ^ uVar16) >> (uVar39 & 0xff) | (uVar49 ^ uVar20) << (0x20 - uVar39 & 0xff) |
                (uVar49 ^ uVar20) >> (iVar50 + 0x18U & 0xff);
  }
  uVar16 = local_138 >> 8;
  iVar18 = iVar18 + uVar16 * 0x100;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_138;
  iVar50 = iVar19 + uVar16 * 0x40;
  uVar20 = (local_138 & 0xff) * 0x1010101;
  uVar39 = *(uint *)(iVar50 + 0x3c) ^ uVar20;
  uVar48 = *(uint *)(iVar50 + 0x38) ^ uVar20;
  uVar46 = *(uint *)(iVar50 + 0x34) ^ uVar20;
  uVar33 = *(uint *)(iVar50 + 0x30) ^ uVar20;
  uVar41 = *(uint *)(iVar50 + 0x18) ^ uVar20;
  uVar21 = *(uint *)(iVar50 + 0x2c) ^ uVar20;
  uVar34 = *(uint *)(iVar50 + 0x28) ^ uVar20;
  uVar22 = *(uint *)(iVar50 + 0x24) ^ uVar20;
  uVar35 = *(uint *)(iVar50 + 0x20) ^ uVar20;
  uVar40 = *(uint *)(iVar50 + 0x1c) ^ uVar20;
  uVar36 = *(uint *)(iVar50 + 0x14) ^ uVar20;
  uVar49 = *(uint *)(iVar50 + 0x10) ^ uVar20;
  uVar29 = *(uint *)(iVar50 + 0xc) ^ uVar20;
  uVar42 = *(uint *)(iVar50 + 4) ^ uVar20;
  uVar37 = *(uint *)(iVar50 + 8) ^ uVar20;
  uVar20 = *(uint *)(iVar19 + uVar16 * 0x40) ^ uVar20;
  uVar39 = (((((((((uVar48 | 0x80808080) + 0xfefefeff | uVar48) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar46 | 0x80808080) + 0xfefefeff | uVar46) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar35 | 0x80808080) + 0xfefefeff | uVar35) & 0x80808080) * 0x204081 >> 0x1c;
  uVar48 = (uint)*(byte *)(iVar19 + uVar16 * 0x40);
  uVar20 = (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar29 | 0x80808080) + 0xfefefeff | uVar29) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar49 | 0x80808080) + 0xfefefeff | uVar49) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar36 | 0x80808080) + 0xfefefeff | uVar36) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar39 == 0xffffffff && uVar20 == 0xffffffff) {
    iVar45 = 0;
  }
  else {
    uVar20 = ~uVar20;
    uVar22 = uVar48 & 0x3f;
    uVar39 = ~uVar39;
    uVar49 = -uVar22 & 0x3f;
    uVar21 = uVar20 >> uVar22 | uVar39 << (0x20 - uVar22 & 0xff) | uVar39 >> (uVar22 - 0x20 & 0xff)
             | uVar20 << uVar49;
    uVar20 = uVar39 << uVar49 | uVar20 << (uVar49 - 0x20 & 0xff) | uVar20 >> (0x20 - uVar49 & 0xff)
             | uVar39 >> uVar22;
    iVar45 = 0;
    do {
      if (uVar21 == 0) {
        bVar5 = (byte)uVar20;
        bVar6 = (byte)(uVar20 >> 8);
        bVar7 = (byte)(uVar20 >> 0x10);
        bVar3 = (byte)(uVar20 >> 0x18);
        iVar12 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                 bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                             bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1
                                          ) << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) + 0x20;
      }
      else {
        bVar5 = (byte)uVar21;
        bVar6 = (byte)(uVar21 >> 8);
        bVar7 = (byte)(uVar21 >> 0x10);
        bVar3 = (byte)(uVar21 >> 0x18);
        iVar12 = LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                 bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                               bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                             bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1
                                          ) << 1 | bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 |
                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                         8 | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                              bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                            bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
      }
      uVar39 = uVar22 + iVar12 & 0x3f;
      if (uVar39 == 0) {
        bVar52 = true;
        iVar12 = iVar45;
      }
      else {
        uVar39 = *(uint *)(iVar18 + uVar39 * 4);
        if (uVar39 < unaff_r6) break;
        HintPreloadData(iVar44 + uVar39);
        iVar12 = iVar45 + 1;
        local_12c[iVar45] = uVar39;
        bVar52 = local_160 != 1;
        local_160 = local_160 + -1;
      }
      bVar53 = uVar21 == 0;
      uVar21 = uVar21 & uVar21 - 1;
      uVar20 = uVar20 & uVar20 - bVar53;
      if (uVar21 == 0 && uVar20 == 0) {
        bVar52 = false;
      }
      iVar45 = iVar12;
    } while (bVar52);
  }
  uVar20 = uVar48 - 1 & 0x3f;
  if (uVar20 == 0) {
    uVar20 = 0x3f;
  }
  *(char *)(iVar19 + uVar16 * 0x40) = (char)uVar20;
  *(char *)(iVar50 + uVar20) = (char)local_138;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar18 + uVar20 * 4) = iVar19;
  if (iVar45 == 0) {
    local_140 = (uint *)0x3;
  }
  else {
    piVar51 = &iStack_130;
    iVar19 = 0;
    puVar13 = (uint *)0x3;
    do {
      piVar51 = piVar51 + 1;
      iVar18 = *piVar51;
      puVar47 = (uint *)(iVar44 + iVar18);
      if (*(int *)((int)puVar47 + (int)((int)puVar13 + -3)) ==
          *(int *)((int)param_2 + (int)puVar13 + -3)) {
        local_140 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar44 + iVar18) == *param_2) {
            do {
              local_140 = local_140 + 1;
              puVar47 = puVar47 + 1;
              if ((uint *)((int)param_3 + -3) <= local_140) {
                if (((uint *)((int)param_3 + -1) <= local_140) ||
                   ((short)*puVar47 != (short)*local_140)) goto LAB_017e5a08;
                goto LAB_017e5a00;
              }
            } while (*puVar47 == *local_140);
            uVar16 = *puVar47 ^ *local_140;
            bVar5 = (byte)uVar16;
            bVar6 = (byte)(uVar16 >> 8);
            bVar7 = (byte)(uVar16 >> 0x10);
            bVar3 = (byte)(uVar16 >> 0x18);
            local_140 = (uint *)((int)local_140 +
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
                                                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1
                                                                  ) << 1 | bVar3 >> 2 & 1) << 1 |
                                                                bVar3 >> 3 & 1) << 1 |
                                                               bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1
                                                              ) << 1 | bVar3 >> 6 & 1) << 1 |
                                                            bVar3 >> 7)) >> 3) - (int)param_2));
          }
          else {
            uVar16 = *(uint *)(iVar44 + iVar18) ^ *param_2;
            bVar5 = (byte)uVar16;
            bVar6 = (byte)(uVar16 >> 8);
            bVar7 = (byte)(uVar16 >> 0x10);
            bVar3 = (byte)(uVar16 >> 0x18);
            local_140 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(iVar44 + iVar18) == (short)*param_2) {
LAB_017e5a00:
              local_140 = (uint *)((int)local_140 + 2);
              puVar47 = (uint *)((int)puVar47 + 2);
LAB_017e5a08:
              if (local_140 < param_3) goto LAB_017e52d4;
            }
            else {
              if (param_3 <= param_2) goto LAB_017e527c;
LAB_017e52d4:
              if ((char)*puVar47 == (char)*local_140) goto LAB_017e578c;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar44 + iVar18)))
            goto LAB_017e527c;
LAB_017e578c:
            local_140 = (uint *)((int)local_140 + 1);
          }
          local_140 = (uint *)((int)local_140 - (int)param_2);
        }
        if (puVar13 < local_140) {
          *param_4 = uVar8 + (3 - iVar18);
          puVar13 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017e527c:
      local_140 = puVar13;
      iVar19 = iVar19 + 1;
      puVar13 = local_140;
    } while (iVar19 != iVar45);
  }
  uVar30 = uVar30 + local_160;
  iVar19 = piVar28[0x17];
  iVar45 = piVar28[1];
  iVar18 = uVar17 * 4 + 0x40000003;
  iVar50 = piVar28[0x19];
  piVar51 = (int *)(iVar19 + iVar9);
  HintPreloadData(iVar45 + *piVar51);
  HintPreloadData(iVar50 + (*(uint *)(iVar19 + iVar18 * 4) >> 8) * 4);
  HintPreloadData(iVar45 + piVar51[1]);
  puVar13 = (uint *)piVar51[2];
  HintPreloadData((char *)(iVar45 + (int)puVar13));
  if (uVar30 != 0) {
    pcVar10 = (char *)*piVar28;
    puVar25 = (uint *)(iVar44 + iVar11);
    puVar47 = (uint *)((int)param_3 + -3);
    puVar38 = param_2 + 1;
    puVar13 = param_2;
    uVar16 = 0;
    uVar17 = uVar30;
    if (2 < uVar30) {
      uVar17 = 3;
    }
    do {
      while( true ) {
        uVar20 = uVar16;
        iVar44 = *piVar51;
        if (iVar44 == 0) {
          piVar28 = (int *)0x0;
          goto LAB_017e561c;
        }
        iVar9 = iVar45 + iVar44;
        if (*(uint *)(iVar45 + iVar44) == *param_2) break;
LAB_017e53fc:
        piVar51 = piVar51 + 1;
        uVar16 = uVar20 + 1;
        if (uVar17 <= uVar20 + 1) goto LAB_017e54c8;
      }
      puVar31 = (uint *)(iVar9 + 4);
      puVar13 = (uint *)((int)puVar38 + ((int)pcVar10 - (int)puVar31));
      if (param_3 < puVar13) {
        puVar13 = param_3;
      }
      puVar43 = (uint *)((int)puVar13 + -3);
      if (puVar38 < puVar43) {
        if (*(uint *)(iVar9 + 4) == param_2[1]) {
          puVar14 = param_2 + 2;
          local_144 = (uint *)(iVar9 + 8);
          if (puVar14 < puVar43) {
            do {
              if (*local_144 != *puVar14) {
                uVar16 = *local_144 ^ *puVar14;
                bVar5 = (byte)uVar16;
                bVar6 = (byte)(uVar16 >> 8);
                bVar7 = (byte)(uVar16 >> 0x10);
                bVar3 = (byte)(uVar16 >> 0x18);
                pcVar15 = (char *)((int)puVar14 +
                                  (((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                    bVar5 >> 1 & 1) << 1 |
                                                                   bVar5 >> 2 & 1) << 1 |
                                                                  bVar5 >> 3 & 1) << 1 |
                                                                 bVar5 >> 4 & 1) << 1 |
                                                                bVar5 >> 5 & 1) << 1 |
                                                               bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                                                  0x18 | (uint)(byte)((((((((bVar6 & 1) << 1 |
                                                                           bVar6 >> 1 & 1) << 1 |
                                                                          bVar6 >> 2 & 1) << 1 |
                                                                         bVar6 >> 3 & 1) << 1 |
                                                                        bVar6 >> 4 & 1) << 1 |
                                                                       bVar6 >> 5 & 1) << 1 |
                                                                      bVar6 >> 6 & 1) << 1 |
                                                                     bVar6 >> 7) << 0x10 |
                                                  (uint)(byte)((((((((bVar7 & 1) << 1 |
                                                                    bVar7 >> 1 & 1) << 1 |
                                                                   bVar7 >> 2 & 1) << 1 |
                                                                  bVar7 >> 3 & 1) << 1 |
                                                                 bVar7 >> 4 & 1) << 1 |
                                                                bVar7 >> 5 & 1) << 1 |
                                                               bVar7 >> 6 & 1) << 1 | bVar7 >> 7) <<
                                                  8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar38));
                goto joined_r0x017e56c8;
              }
              puVar14 = puVar14 + 1;
              local_144 = local_144 + 1;
            } while (puVar14 < puVar43);
          }
          goto LAB_017e5664;
        }
        uVar16 = *(uint *)(iVar9 + 4) ^ param_2[1];
        bVar5 = (byte)uVar16;
        bVar6 = (byte)(uVar16 >> 8);
        bVar7 = (byte)(uVar16 >> 0x10);
        bVar3 = (byte)(uVar16 >> 0x18);
        pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                          | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                         << 1 | bVar5 >> 4 & 1) << 1 |
                                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 |
                                                     bVar5 >> 7) << 0x18 |
                                         (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1
                                                          | bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1)
                                                         << 1 | bVar6 >> 4 & 1) << 1 |
                                                       bVar6 >> 5 & 1) << 1 | bVar6 >> 6 & 1) << 1 |
                                                     bVar6 >> 7) << 0x10 |
                                         (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1
                                                          | bVar7 >> 2 & 1) << 1 | bVar7 >> 3 & 1)
                                                         << 1 | bVar7 >> 4 & 1) << 1 |
                                                       bVar7 >> 5 & 1) << 1 | bVar7 >> 6 & 1) << 1 |
                                                     bVar7 >> 7) << 8 |
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7)) >> 3);
      }
      else {
        puVar14 = puVar38;
        local_144 = puVar31;
LAB_017e5664:
        if (puVar14 < (uint *)((int)puVar13 + -1)) {
          if ((short)*local_144 == (short)*puVar14) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar14 = (uint *)((int)puVar14 + 2);
          }
        }
        if ((puVar14 < puVar13) && ((char)*local_144 == (char)*puVar14)) {
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        pcVar15 = (char *)((int)puVar14 - (int)puVar38);
      }
joined_r0x017e56c8:
      if (pcVar10 == (char *)((int)puVar31 + (int)pcVar15)) {
        puVar13 = (uint *)((int)puVar38 + (int)pcVar15);
        if (puVar13 < puVar47) {
          if (*puVar25 == *(uint *)((int)puVar38 + (int)pcVar15)) {
            puVar31 = puVar13 + 1;
            local_144 = puVar25 + 1;
            if (puVar31 < puVar47) {
              do {
                if (*local_144 != *puVar31) {
                  uVar16 = *local_144 ^ *puVar31;
                  bVar5 = (byte)uVar16;
                  bVar6 = (byte)(uVar16 >> 8);
                  bVar7 = (byte)(uVar16 >> 0x10);
                  bVar3 = (byte)(uVar16 >> 0x18);
                  pcVar24 = (char *)((int)puVar31 +
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
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar13));
                  goto LAB_017e5828;
                }
                puVar31 = puVar31 + 1;
                local_144 = local_144 + 1;
              } while (puVar31 < puVar47);
            }
            goto LAB_017e57dc;
          }
          uVar16 = *puVar25 ^ *(uint *)((int)puVar38 + (int)pcVar15);
          bVar5 = (byte)uVar16;
          bVar6 = (byte)(uVar16 >> 8);
          bVar7 = (byte)(uVar16 >> 0x10);
          bVar3 = (byte)(uVar16 >> 0x18);
          pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
        else {
          puVar31 = puVar13;
          local_144 = puVar25;
LAB_017e57dc:
          if (puVar31 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_144 == (short)*puVar31) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar31 = (uint *)((int)puVar31 + 2);
            }
          }
          if ((puVar31 < param_3) && ((char)*local_144 == (char)*puVar31)) {
            puVar31 = (uint *)((int)puVar31 + 1);
          }
          pcVar24 = (char *)((int)puVar31 - (int)puVar13);
        }
LAB_017e5828:
        pcVar15 = pcVar15 + (int)pcVar24;
      }
      puVar13 = (uint *)(pcVar15 + 4);
      if (puVar13 <= local_140) goto LAB_017e53fc;
      piVar28 = (int *)(pcVar10 + uVar8 + (((3 - iVar11) - iVar45) - iVar44));
      *param_4 = (int)piVar28;
      if (param_3 == (uint *)((int)param_2 + (int)puVar13)) goto LAB_017e5ccc;
      piVar51 = piVar51 + 1;
      uVar16 = uVar20 + 1;
      local_140 = puVar13;
    } while (uVar20 + 1 < uVar17);
LAB_017e54c8:
    piVar28 = *(int **)(iVar19 + iVar18 * 4);
    uVar30 = uVar30 - (uVar20 + 1);
    if (((uint)piVar28 & 0xff) < uVar30) {
      uVar30 = (uint)piVar28 & 0xff;
    }
    if (uVar30 != 0) {
      piVar51 = (int *)(iVar50 + ((uint)piVar28 >> 8) * 4);
      piVar26 = (int *)(iVar50 + (((uint)piVar28 >> 8) + uVar30) * 4);
      piVar28 = piVar51;
      do {
        piVar23 = piVar28 + 1;
        HintPreloadData(iVar45 + *piVar28);
        piVar28 = piVar23;
      } while (piVar23 != piVar26);
      puVar38 = param_2 + 1;
      local_134 = local_140;
      puVar47 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar28 = piVar51;
          iVar18 = *piVar28;
          iVar19 = iVar45 + iVar18;
          puVar13 = *(uint **)(iVar45 + iVar18);
          if (puVar13 == (uint *)*param_2) break;
LAB_017e5564:
          piVar51 = piVar28 + 1;
          if (piVar28 + 1 == piVar26) goto LAB_017e5618;
        }
        puVar31 = (uint *)(iVar19 + 4);
        puVar13 = (uint *)((int)puVar38 + ((int)pcVar10 - (int)puVar31));
        if (param_3 < puVar13) {
          puVar13 = param_3;
        }
        puVar43 = (uint *)((int)puVar13 + -3);
        if (puVar38 < puVar43) {
          if (*(uint *)(iVar19 + 4) == param_2[1]) {
            puVar14 = param_2 + 2;
            local_13c = (uint *)(iVar19 + 8);
            if (puVar14 < puVar43) {
              do {
                if (*local_13c != *puVar14) {
                  uVar30 = *local_13c ^ *puVar14;
                  bVar5 = (byte)uVar30;
                  bVar6 = (byte)(uVar30 >> 8);
                  bVar7 = (byte)(uVar30 >> 0x10);
                  bVar3 = (byte)(uVar30 >> 0x18);
                  pcVar15 = (char *)((int)puVar14 +
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
                                                    << 8 | (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                             bVar3 >> 1 & 1) << 1 |
                                                                            bVar3 >> 2 & 1) << 1 |
                                                                           bVar3 >> 3 & 1) << 1 |
                                                                          bVar3 >> 4 & 1) << 1 |
                                                                         bVar3 >> 5 & 1) << 1 |
                                                                        bVar3 >> 6 & 1) << 1 |
                                                                       bVar3 >> 7)) >> 3) -
                                    (int)puVar38));
                  goto joined_r0x017e5918;
                }
                puVar14 = puVar14 + 1;
                local_13c = local_13c + 1;
              } while (puVar14 < puVar43);
            }
            goto LAB_017e58b4;
          }
          uVar30 = *(uint *)(iVar19 + 4) ^ param_2[1];
          bVar5 = (byte)uVar30;
          bVar6 = (byte)(uVar30 >> 8);
          bVar7 = (byte)(uVar30 >> 0x10);
          bVar3 = (byte)(uVar30 >> 0x18);
          pcVar15 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) <<
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
                                           (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                             1 | bVar3 >> 2 & 1) << 1 |
                                                           bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) <<
                                                          1 | bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1)
                                                        << 1 | bVar3 >> 7)) >> 3);
        }
        else {
          puVar14 = puVar38;
          local_13c = puVar31;
LAB_017e58b4:
          if (puVar14 < (uint *)((int)puVar13 + -1)) {
            if ((short)*local_13c == (short)*puVar14) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar14 = (uint *)((int)puVar14 + 2);
            }
          }
          if ((puVar14 < puVar13) && ((char)*local_13c == (char)*puVar14)) {
            puVar14 = (uint *)((int)puVar14 + 1);
          }
          pcVar15 = (char *)((int)puVar14 - (int)puVar38);
        }
joined_r0x017e5918:
        if (pcVar10 == (char *)((int)puVar31 + (int)pcVar15)) {
          puVar13 = (uint *)((int)puVar38 + (int)pcVar15);
          if (puVar13 < puVar47) {
            if (*puVar25 == *(uint *)((int)puVar38 + (int)pcVar15)) {
              puVar31 = puVar13 + 1;
              local_13c = puVar25 + 1;
              if (puVar31 < puVar47) {
                do {
                  if (*local_13c != *puVar31) {
                    uVar30 = *local_13c ^ *puVar31;
                    bVar5 = (byte)uVar30;
                    bVar6 = (byte)(uVar30 >> 8);
                    bVar7 = (byte)(uVar30 >> 0x10);
                    bVar3 = (byte)(uVar30 >> 0x18);
                    pcVar24 = (char *)((int)puVar31 +
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
                                                      (uint)(byte)((((((((bVar3 & 1) << 1 |
                                                                        bVar3 >> 1 & 1) << 1 |
                                                                       bVar3 >> 2 & 1) << 1 |
                                                                      bVar3 >> 3 & 1) << 1 |
                                                                     bVar3 >> 4 & 1) << 1 |
                                                                    bVar3 >> 5 & 1) << 1 |
                                                                   bVar3 >> 6 & 1) << 1 | bVar3 >> 7
                                                                  )) >> 3) - (int)puVar13));
                    goto LAB_017e5950;
                  }
                  puVar31 = puVar31 + 1;
                  local_13c = local_13c + 1;
                } while (puVar31 < puVar47);
              }
              goto LAB_017e59a0;
            }
            uVar30 = *puVar25 ^ *(uint *)((int)puVar38 + (int)pcVar15);
            bVar5 = (byte)uVar30;
            bVar6 = (byte)(uVar30 >> 8);
            bVar7 = (byte)(uVar30 >> 0x10);
            bVar3 = (byte)(uVar30 >> 0x18);
            pcVar24 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1)
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
                                             (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
                                                               << 1 | bVar3 >> 2 & 1) << 1 |
                                                             bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                            << 1 | bVar3 >> 5 & 1) << 1 |
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3);
          }
          else {
            puVar31 = puVar13;
            local_13c = puVar25;
LAB_017e59a0:
            if (puVar31 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar31) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar31 = (uint *)((int)puVar31 + 2);
              }
            }
            if ((puVar31 < param_3) && ((char)*local_13c == (char)*puVar31)) {
              puVar31 = (uint *)((int)puVar31 + 1);
            }
            pcVar24 = (char *)((int)puVar31 - (int)puVar13);
          }
LAB_017e5950:
          pcVar15 = pcVar15 + (int)pcVar24;
        }
        puVar13 = (uint *)(pcVar15 + 4);
        if (puVar13 <= local_134) goto LAB_017e5564;
        *param_4 = (int)(pcVar10 + uVar8 + (((3 - iVar11) - iVar45) - iVar18));
        if (param_3 == (uint *)((int)param_2 + (int)puVar13)) goto LAB_017e5ccc;
        piVar51 = piVar28 + 1;
        local_134 = puVar13;
      } while (piVar28 + 1 != piVar26);
LAB_017e5618:
      piVar28 = piVar28 + 1;
      local_140 = local_134;
    }
  }
LAB_017e561c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar28,puVar13,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017e5ccc:
  local_140 = puVar13;
  goto LAB_017e561c;
}

