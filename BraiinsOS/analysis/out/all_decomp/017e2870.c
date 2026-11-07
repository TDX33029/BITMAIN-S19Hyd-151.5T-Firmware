// FUN_017e2870 @ 017e2870 size=4220 calls_out=1 calls_in=3
// strings: 

uint * FUN_017e2870(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort *puVar7;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  uint *puVar24;
  uint *puVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  uint *puVar30;
  uint uVar31;
  uint unaff_r7;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  uint *puVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  undefined4 *puVar49;
  uint uVar50;
  int *piVar51;
  bool bVar52;
  bool bVar53;
  uint local_154;
  uint local_150;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint *local_134;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar27 = *(int *)(param_1 + 4);
  puVar49 = *(undefined4 **)(param_1 + 0xb4);
  uVar46 = (int)param_2 - iVar27;
  local_2c = DAT_018ddaf8;
  iVar19 = *(int *)(param_1 + 0x28);
  uVar20 = *(uint *)(param_1 + 0x10);
  uVar15 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar36 = *(int *)(param_1 + 0x24);
  bVar52 = uVar15 < uVar46 - uVar20;
  iVar11 = *(int *)(param_1 + 0xc);
  if (bVar52) {
    unaff_r7 = uVar46 - uVar15;
  }
  if (!bVar52) {
    unaff_r7 = uVar20;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r7 = uVar20;
  }
  iVar44 = *(int *)(param_1 + 0x5c);
  uVar15 = *param_2 * -0x61c8864f >> (0x22 - puVar49[0x30] & 0xff);
  uVar12 = *(uint *)(param_1 + 0xc4);
  HintPreloadData(puVar49[0x17] + uVar15 * 0x10);
  uVar20 = uVar12;
  if (5 < uVar12) {
    uVar20 = 6;
  }
  if (uVar12 < 7) {
    iVar13 = 0;
  }
  else {
    iVar13 = 1 << (uVar12 - 6 & 0xff);
  }
  local_144 = (uint *)(1 << (uVar20 & 0xff));
  uVar12 = *(uint *)(param_1 + 0x50);
  uVar20 = 0x18 - iVar36;
  if (*(int *)(param_1 + 0xdc) == 0) {
    local_154 = *(uint *)(param_1 + 0x1c);
    iVar32 = param_1 + 0x2c;
    iVar18 = iVar44;
    iVar14 = iVar27;
    iVar48 = iVar19;
    if (0x180 < uVar46 - local_154) {
      uVar28 = local_154 + 0x60;
      if (local_154 < uVar28) {
        uVar21 = uVar12;
        while( true ) {
          uVar33 = *(uint *)(iVar32 + (local_154 & 7) * 4);
          uVar31 = (*(int *)(iVar27 + local_154 + 8) * -0x61c8864f ^ uVar21) >> (uVar20 & 0xff);
          uVar21 = uVar31 >> 8;
          iVar36 = uVar21 * 0x40;
          iVar18 = uVar21 * 0x100;
          HintPreloadData(iVar19 + iVar36);
          HintPreloadData(iVar44 + iVar18);
          HintPreloadData(iVar19 + iVar36 + 0x20);
          uVar21 = uVar33 >> 8;
          HintPreloadData(iVar44 + iVar18 + 0x40);
          *(uint *)(iVar32 + (local_154 & 7) * 4) = uVar31;
          uVar31 = *(byte *)(iVar19 + uVar21 * 0x40) - 1 & 0x3f;
          if (uVar31 == 0) {
            uVar31 = 0x3f;
          }
          *(char *)(iVar19 + uVar21 * 0x40) = (char)uVar31;
          *(char *)(iVar19 + uVar21 * 0x40 + uVar31) = (char)uVar33;
          *(uint *)(iVar44 + (uVar21 * 0x40 + uVar31) * 4) = local_154;
          local_154 = local_154 + 1;
          if (uVar28 == local_154) break;
          uVar21 = *(uint *)(param_1 + 0x50);
        }
        iVar36 = *(int *)(param_1 + 0x24);
        iVar18 = *(int *)(param_1 + 0x5c);
        iVar14 = *(int *)(param_1 + 4);
        iVar48 = *(int *)(param_1 + 0x28);
      }
      local_154 = uVar46 - 0x20;
      if (iVar27 + local_154 <= (int)param_2 + 1U) {
        uVar28 = (((int)param_2 + 1U) - (iVar27 + local_154)) + 1;
        if (uVar28 < 9) {
          uVar28 = local_154 + uVar28;
        }
        else {
          uVar28 = uVar46 - 0x18;
        }
        if (local_154 < uVar28) {
          uVar31 = *(uint *)(param_1 + 0x50);
          uVar21 = local_154;
          do {
            piVar8 = (int *)(iVar27 + uVar21);
            uVar47 = uVar21 & 7;
            uVar21 = uVar21 + 1;
            uVar34 = (*piVar8 * -0x61c8864f ^ uVar31) >> (0x18U - iVar36 & 0xff);
            uVar33 = uVar34 >> 8;
            iVar1 = uVar33 * 0x40;
            iVar2 = uVar33 * 0x100;
            HintPreloadData(iVar48 + iVar1);
            HintPreloadData(iVar18 + iVar2);
            HintPreloadData(iVar48 + iVar1 + 0x20);
            HintPreloadData(iVar18 + iVar2 + 0x40);
            *(uint *)(param_1 + uVar47 * 4 + 0x2c) = uVar34;
          } while (uVar21 < uVar28);
        }
      }
    }
    if (local_154 < uVar46) {
      do {
        uVar31 = *(uint *)(iVar32 + (local_154 & 7) * 4);
        uVar21 = (*(int *)(iVar14 + local_154 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar36 & 0xff);
        uVar28 = uVar21 >> 8;
        iVar1 = uVar28 * 0x40;
        iVar2 = uVar28 * 0x100;
        HintPreloadData(iVar18 + iVar2);
        HintPreloadData(iVar48 + iVar1);
        HintPreloadData(iVar18 + iVar2 + 0x40);
        uVar28 = uVar31 >> 8;
        HintPreloadData(iVar48 + iVar1 + 0x20);
        *(uint *)(iVar32 + (local_154 & 7) * 4) = uVar21;
        uVar21 = *(byte *)(iVar48 + uVar28 * 0x40) - 1 & 0x3f;
        if (uVar21 == 0) {
          uVar21 = 0x3f;
        }
        *(char *)(iVar48 + uVar28 * 0x40) = (char)uVar21;
        *(char *)(iVar48 + uVar28 * 0x40 + uVar21) = (char)uVar31;
        *(uint *)(iVar18 + (uVar21 + uVar28 * 0x40) * 4) = local_154;
        local_154 = local_154 + 1;
      } while (uVar46 != local_154);
    }
    *(uint *)(param_1 + 0x1c) = uVar46;
    uVar12 = (param_2[2] * -0x61c8864f ^ uVar12) >> (uVar20 & 0xff);
    local_150 = *(uint *)(iVar32 + (uVar46 & 7) * 4);
    uVar20 = uVar12 >> 8;
    iVar36 = uVar20 * 0x40;
    iVar18 = uVar20 * 0x100;
    HintPreloadData(iVar19 + iVar36);
    HintPreloadData(iVar44 + iVar18);
    HintPreloadData(iVar19 + iVar36 + 0x20);
    HintPreloadData(iVar44 + iVar18 + 0x40);
    *(uint *)(iVar32 + (uVar46 & 7) * 4) = uVar12;
  }
  else {
    local_150 = (*param_2 * -0x61c8864f ^ uVar12) >> (uVar20 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar46;
  }
  puVar22 = (uint *)(local_150 >> 8);
  iVar44 = iVar44 + (int)puVar22 * 0x100;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_150;
  iVar36 = iVar19 + (int)puVar22 * 0x40;
  uVar47 = (local_150 & 0xff) * 0x1010101;
  uVar20 = *(uint *)(iVar36 + 0x3c) ^ uVar47;
  uVar12 = *(uint *)(iVar36 + 0x38) ^ uVar47;
  uVar50 = *(uint *)(iVar36 + 0x34) ^ uVar47;
  uVar37 = *(uint *)(iVar36 + 0x30) ^ uVar47;
  uVar42 = *(uint *)(iVar36 + 0x18) ^ uVar47;
  uVar21 = *(uint *)(iVar36 + 0x2c) ^ uVar47;
  uVar38 = *(uint *)(iVar36 + 0x28) ^ uVar47;
  uVar31 = *(uint *)(iVar36 + 0x24) ^ uVar47;
  uVar39 = *(uint *)(iVar36 + 0x20) ^ uVar47;
  uVar33 = *(uint *)(iVar36 + 0x1c) ^ uVar47;
  uVar40 = *(uint *)(iVar36 + 0x14) ^ uVar47;
  uVar28 = *(uint *)(iVar36 + 0x10) ^ uVar47;
  uVar34 = *(uint *)(iVar36 + 0xc) ^ uVar47;
  uVar43 = *(uint *)(iVar36 + 4) ^ uVar47;
  uVar41 = *(uint *)(iVar36 + 8) ^ uVar47;
  uVar47 = *(uint *)(iVar19 + (int)puVar22 * 0x40) ^ uVar47;
  uVar20 = (((((((((uVar12 | 0x80808080) + 0xfefefeff | uVar12) & 0x80808080) * 0x204081 >> 0x1c |
                ((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c) <<
                4) << 4 |
               (((uVar50 | 0x80808080) + 0xfefefeff | uVar50) & 0x80808080) * 0x204081 >> 0x1c) << 4
              | (((uVar37 | 0x80808080) + 0xfefefeff | uVar37) & 0x80808080) * 0x204081 >> 0x1c) <<
              4 | (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c)
             << 4 | (((uVar38 | 0x80808080) + 0xfefefeff | uVar38) & 0x80808080) * 0x204081 >> 0x1c)
            << 4 | (((uVar31 | 0x80808080) + 0xfefefeff | uVar31) & 0x80808080) * 0x204081 >> 0x1c)
           << 4 | (((uVar39 | 0x80808080) + 0xfefefeff | uVar39) & 0x80808080) * 0x204081 >> 0x1c;
  uVar12 = (uint)*(byte *)(iVar19 + (int)puVar22 * 0x40);
  uVar28 = (((uVar47 | 0x80808080) + 0xfefefeff | uVar47) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar43 | 0x80808080) + 0xfefefeff | uVar43) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar41 | 0x80808080) + 0xfefefeff | uVar41) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar34 | 0x80808080) + 0xfefefeff | uVar34) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar40 | 0x80808080) + 0xfefefeff | uVar40) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar42 | 0x80808080) + 0xfefefeff | uVar42) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar33 | 0x80808080) + 0xfefefeff | uVar33) & 0x80808080) * 0x204081 >> 0x1c) << 4)
           << 4) << 4) << 4) << 4) << 4) << 4;
  if (uVar20 == 0xffffffff && uVar28 == 0xffffffff) {
    iVar18 = 0;
    puVar45 = puVar22;
  }
  else {
    uVar28 = ~uVar28;
    uVar33 = uVar12 & 0x3f;
    uVar20 = ~uVar20;
    uVar21 = -uVar33 & 0x3f;
    puVar45 = (uint *)(uVar21 - 0x20);
    uVar31 = uVar28 >> uVar33 | uVar20 << (0x20 - uVar33 & 0xff) | uVar20 >> (uVar33 - 0x20 & 0xff)
             | uVar28 << uVar21;
    uVar20 = uVar20 << uVar21 | uVar28 << ((uint)puVar45 & 0xff) | uVar28 >> (0x20 - uVar21 & 0xff)
             | uVar20 >> uVar33;
    iVar18 = 0;
    do {
      if (uVar31 == 0) {
        bVar4 = (byte)uVar20;
        bVar5 = (byte)(uVar20 >> 8);
        bVar6 = (byte)(uVar20 >> 0x10);
        bVar3 = (byte)(uVar20 >> 0x18);
        iVar14 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
        bVar4 = (byte)uVar31;
        bVar5 = (byte)(uVar31 >> 8);
        bVar6 = (byte)(uVar31 >> 0x10);
        bVar3 = (byte)(uVar31 >> 0x18);
        iVar14 = LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1
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
      uVar28 = uVar33 + iVar14 & 0x3f;
      if (uVar28 == 0) {
        bVar52 = true;
        iVar14 = iVar18;
      }
      else {
        uVar28 = *(uint *)(iVar44 + uVar28 * 4);
        if (uVar28 < unaff_r7) break;
        HintPreloadData(iVar27 + uVar28);
        iVar14 = iVar18 + 1;
        local_12c[iVar18] = uVar28;
        bVar52 = local_144 != (uint *)0x1;
        local_144 = (uint *)((int)local_144 + -1);
      }
      bVar53 = uVar31 == 0;
      uVar31 = uVar31 & uVar31 - 1;
      uVar20 = uVar20 & uVar20 - bVar53;
      puVar45 = (uint *)(uVar31 | uVar20);
      if (puVar45 == (uint *)0x0) {
        bVar52 = false;
      }
      iVar18 = iVar14;
    } while (bVar52);
  }
  uVar20 = uVar12 - 1 & 0x3f;
  if (uVar20 == 0) {
    uVar20 = 0x3f;
  }
  *(char *)(iVar19 + (int)puVar22 * 0x40) = (char)uVar20;
  *(char *)(iVar36 + uVar20) = (char)local_150;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar44 + uVar20 * 4) = iVar19;
  if (iVar18 == 0) {
    local_140 = (uint *)0x3;
  }
  else {
    piVar8 = &iStack_130;
    iVar19 = 0;
    puVar22 = (uint *)0x3;
    puVar45 = param_2 + 1;
    do {
      piVar8 = piVar8 + 1;
      iVar36 = *piVar8;
      puVar7 = (ushort *)(iVar27 + iVar36);
      if (*(int *)((int)puVar7 + (int)puVar22 + -3) == *(int *)((int)param_2 + (int)puVar22 + -3)) {
        if (param_2 < (uint *)((int)param_3 + -3)) {
          local_140 = param_2 + 1;
          if (*(uint *)(iVar27 + iVar36) == *param_2) {
            for (; puVar7 = puVar7 + 2, local_140 < (uint *)((int)param_3 + -3);
                local_140 = local_140 + 1) {
              puVar45 = (uint *)*local_140;
              if (*(uint **)puVar7 != puVar45) {
                uVar20 = (uint)*(uint **)puVar7 ^ (uint)puVar45;
                bVar4 = (byte)uVar20;
                bVar5 = (byte)(uVar20 >> 8);
                bVar6 = (byte)(uVar20 >> 0x10);
                bVar3 = (byte)(uVar20 >> 0x18);
                local_140 = (uint *)((int)local_140 +
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
                                    (int)param_2));
                goto LAB_017e2f80;
              }
            }
            if ((local_140 < (uint *)((int)param_3 + -1)) &&
               (puVar45 = (uint *)(uint)*puVar7, puVar45 == (uint *)(uint)(ushort)*local_140))
            goto LAB_017e3690;
LAB_017e3698:
            if (local_140 < param_3) goto LAB_017e2f48;
            goto LAB_017e2f58;
          }
          uVar20 = *(uint *)(iVar27 + iVar36) ^ *param_2;
          bVar4 = (byte)uVar20;
          bVar5 = (byte)(uVar20 >> 8);
          bVar6 = (byte)(uVar20 >> 0x10);
          bVar3 = (byte)(uVar20 >> 0x18);
          local_140 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
          local_140 = param_2;
          if (param_2 < (uint *)((int)param_3 + -1)) {
            if (*(short *)(iVar27 + iVar36) == (short)*param_2) {
LAB_017e3690:
              local_140 = (uint *)((int)local_140 + 2);
              puVar7 = puVar7 + 1;
              goto LAB_017e3698;
            }
            if (param_3 <= param_2) goto LAB_017e2ef0;
LAB_017e2f48:
            if ((char)*puVar7 != (char)*local_140) goto LAB_017e2f58;
          }
          else if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar27 + iVar36)))
          goto LAB_017e2ef0;
          local_140 = (uint *)((int)local_140 + 1);
LAB_017e2f58:
          local_140 = (uint *)((int)local_140 - (int)param_2);
        }
LAB_017e2f80:
        if (puVar22 < local_140) {
          *param_4 = (uVar46 + 3) - iVar36;
          puVar22 = local_140;
          if (param_3 == (uint *)((int)param_2 + (int)local_140)) break;
        }
      }
LAB_017e2ef0:
      local_140 = puVar22;
      iVar19 = iVar19 + 1;
      puVar22 = local_140;
    } while (iVar19 != iVar18);
  }
  puVar29 = (uint *)(iVar13 + (int)local_144);
  iVar19 = puVar49[0x17];
  iVar13 = puVar49[1];
  piVar51 = (int *)(iVar19 + uVar15 * 0x10);
  iVar44 = puVar49[0x19];
  iVar36 = uVar15 * 4 + 0x40000003;
  HintPreloadData(iVar13 + *(int *)(iVar19 + uVar15 * 0x10));
  puVar22 = (uint *)(*(uint *)(iVar19 + iVar36 * 4) >> 8);
  HintPreloadData(iVar13 + piVar51[1]);
  piVar8 = (int *)piVar51[2];
  HintPreloadData(iVar44 + (int)puVar22 * 4);
  HintPreloadData((char *)(iVar13 + (int)piVar8));
  if (puVar29 != (uint *)0x0) {
    pcVar9 = (char *)*puVar49;
    if (puVar29 < (uint *)0x3) {
      puVar45 = puVar29;
    }
    puVar24 = (uint *)(iVar27 + iVar11);
    puVar10 = (uint *)((int)param_3 + -3);
    if (puVar29 >= (uint *)0x3) {
      puVar45 = (uint *)0x3;
    }
    puVar17 = param_2 + 1;
    puVar22 = param_2;
    puVar30 = (uint *)0x0;
    do {
      while( true ) {
        puVar25 = puVar30;
        iVar27 = *piVar51;
        if (iVar27 == 0) {
          piVar8 = (int *)0x0;
          goto LAB_017e3290;
        }
        iVar18 = iVar13 + iVar27;
        if (*(uint *)(iVar13 + iVar27) == *param_2) break;
LAB_017e3074:
        piVar51 = piVar51 + 1;
        puVar30 = (uint *)((int)puVar25 + 1);
        if (puVar45 <= (uint *)((int)puVar25 + 1)) goto LAB_017e3140;
      }
      puVar30 = (uint *)(iVar18 + 4);
      puVar22 = (uint *)((int)puVar17 + ((int)pcVar9 - (int)puVar30));
      if (param_3 < puVar22) {
        puVar22 = param_3;
      }
      puVar35 = (uint *)((int)puVar22 + -3);
      if (puVar17 < puVar35) {
        if (*(uint *)(iVar18 + 4) == param_2[1]) {
          puVar16 = param_2 + 2;
          local_144 = (uint *)(iVar18 + 8);
          if (puVar16 < puVar35) {
            do {
              if (*local_144 != *puVar16) {
                uVar15 = *local_144 ^ *puVar16;
                bVar4 = (byte)uVar15;
                bVar5 = (byte)(uVar15 >> 8);
                bVar6 = (byte)(uVar15 >> 0x10);
                bVar3 = (byte)(uVar15 >> 0x18);
                uVar15 = (int)puVar16 +
                         (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
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
                                         (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                          | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                         << 1 | bVar3 >> 4 & 1) << 1 |
                                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 |
                                                     bVar3 >> 7)) >> 3) - (int)puVar17);
                goto joined_r0x017e333c;
              }
              puVar16 = puVar16 + 1;
              local_144 = local_144 + 1;
            } while (puVar16 < puVar35);
          }
          goto LAB_017e32d8;
        }
        uVar15 = *(uint *)(iVar18 + 4) ^ param_2[1];
        bVar4 = (byte)uVar15;
        bVar5 = (byte)(uVar15 >> 8);
        bVar6 = (byte)(uVar15 >> 0x10);
        bVar3 = (byte)(uVar15 >> 0x18);
        uVar15 = (uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                               (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                              bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                            bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                               (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                              bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                            bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                               (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                              bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                            bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3;
      }
      else {
        puVar16 = puVar17;
        local_144 = puVar30;
LAB_017e32d8:
        if (puVar16 < (uint *)((int)puVar22 + -1)) {
          if ((short)*local_144 == (short)*puVar16) {
            local_144 = (uint *)((int)local_144 + 2);
            puVar16 = (uint *)((int)puVar16 + 2);
          }
        }
        if ((puVar16 < puVar22) && ((char)*local_144 == (char)*puVar16)) {
          puVar16 = (uint *)((int)puVar16 + 1);
        }
        uVar15 = (int)puVar16 - (int)puVar17;
      }
joined_r0x017e333c:
      if (pcVar9 == (char *)((int)puVar30 + uVar15)) {
        puVar22 = (uint *)((int)puVar17 + uVar15);
        if (puVar22 < puVar10) {
          if (*puVar24 == *(uint *)((int)puVar17 + uVar15)) {
            puVar30 = puVar22 + 1;
            local_144 = puVar24 + 1;
            if (puVar30 < puVar10) {
              do {
                if (*local_144 != *puVar30) {
                  uVar20 = *local_144 ^ *puVar30;
                  bVar4 = (byte)uVar20;
                  bVar5 = (byte)(uVar20 >> 8);
                  bVar6 = (byte)(uVar20 >> 0x10);
                  bVar3 = (byte)(uVar20 >> 0x18);
                  uVar20 = (int)puVar30 +
                           (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
                                                        << 1 | bVar3 >> 7)) >> 3) - (int)puVar22);
                  goto LAB_017e349c;
                }
                puVar30 = puVar30 + 1;
                local_144 = local_144 + 1;
              } while (puVar30 < puVar10);
            }
            goto LAB_017e3450;
          }
          uVar20 = *puVar24 ^ *(uint *)((int)puVar17 + uVar15);
          bVar4 = (byte)uVar20;
          bVar5 = (byte)(uVar20 >> 8);
          bVar6 = (byte)(uVar20 >> 0x10);
          bVar3 = (byte)(uVar20 >> 0x18);
          uVar20 = (uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                  bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                              bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                 (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                  bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                              bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                 (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                  bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                              bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                  bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                              bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3;
        }
        else {
          puVar30 = puVar22;
          local_144 = puVar24;
LAB_017e3450:
          if (puVar30 < (uint *)((int)param_3 + -1)) {
            if ((short)*local_144 == (short)*puVar30) {
              local_144 = (uint *)((int)local_144 + 2);
              puVar30 = (uint *)((int)puVar30 + 2);
            }
          }
          if ((puVar30 < param_3) && ((char)*local_144 == (char)*puVar30)) {
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          uVar20 = (int)puVar30 - (int)puVar22;
        }
LAB_017e349c:
        uVar15 = uVar15 + uVar20;
      }
      puVar22 = (uint *)(uVar15 + 4);
      if (puVar22 <= local_140) goto LAB_017e3074;
      piVar8 = (int *)(pcVar9 + ((((3 - iVar11) + uVar46) - iVar13) - iVar27));
      *param_4 = (int)piVar8;
      if (param_3 == (uint *)((int)param_2 + (int)puVar22)) goto LAB_017e38b4;
      piVar51 = piVar51 + 1;
      puVar30 = (uint *)((int)puVar25 + 1);
      local_140 = puVar22;
    } while ((uint *)((int)puVar25 + 1) < puVar45);
LAB_017e3140:
    piVar8 = *(int **)(iVar19 + iVar36 * 4);
    uVar15 = (int)puVar29 - ((int)puVar25 + 1);
    if (((uint)piVar8 & 0xff) < uVar15) {
      uVar15 = (uint)piVar8 & 0xff;
    }
    if (uVar15 != 0) {
      piVar51 = (int *)(iVar44 + ((uint)piVar8 >> 8) * 4);
      piVar26 = (int *)(iVar44 + (((uint)piVar8 >> 8) + uVar15) * 4);
      piVar8 = piVar51;
      do {
        piVar23 = piVar8 + 1;
        HintPreloadData(iVar13 + *piVar8);
        piVar8 = piVar23;
      } while (piVar23 != piVar26);
      local_134 = local_140;
      puVar29 = param_2 + 1;
      puVar45 = (uint *)((int)param_3 + -3);
      do {
        while( true ) {
          piVar8 = piVar51;
          iVar27 = *piVar8;
          iVar19 = iVar13 + iVar27;
          puVar22 = *(uint **)(iVar13 + iVar27);
          if (puVar22 == (uint *)*param_2) break;
LAB_017e31d8:
          piVar51 = piVar8 + 1;
          if (piVar8 + 1 == piVar26) goto LAB_017e328c;
        }
        puVar10 = (uint *)(iVar19 + 4);
        puVar22 = (uint *)((int)puVar29 + ((int)pcVar9 - (int)puVar10));
        if (param_3 < puVar22) {
          puVar22 = param_3;
        }
        puVar30 = (uint *)((int)puVar22 + -3);
        if (puVar29 < puVar30) {
          if (*(uint *)(iVar19 + 4) == param_2[1]) {
            puVar17 = param_2 + 2;
            local_13c = (uint *)(iVar19 + 8);
            if (puVar17 < puVar30) {
              do {
                if (*local_13c != *puVar17) {
                  uVar15 = *local_13c ^ *puVar17;
                  bVar4 = (byte)uVar15;
                  bVar5 = (byte)(uVar15 >> 8);
                  bVar6 = (byte)(uVar15 >> 0x10);
                  bVar3 = (byte)(uVar15 >> 0x18);
                  uVar15 = (int)puVar17 +
                           (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) <<
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
                                                        << 1 | bVar3 >> 7)) >> 3) - (int)puVar29);
                  goto joined_r0x017e35a8;
                }
                puVar17 = puVar17 + 1;
                local_13c = local_13c + 1;
              } while (puVar17 < puVar30);
            }
            goto LAB_017e3544;
          }
          uVar15 = *(uint *)(iVar19 + 4) ^ param_2[1];
          bVar4 = (byte)uVar15;
          bVar5 = (byte)(uVar15 >> 8);
          bVar6 = (byte)(uVar15 >> 0x10);
          bVar3 = (byte)(uVar15 >> 0x18);
          uVar15 = (uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                  bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                              bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                 (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                  bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                              bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                 (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                  bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                              bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                  bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                              bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3;
        }
        else {
          puVar17 = puVar29;
          local_13c = puVar10;
LAB_017e3544:
          if (puVar17 < (uint *)((int)puVar22 + -1)) {
            if ((short)*local_13c == (short)*puVar17) {
              local_13c = (uint *)((int)local_13c + 2);
              puVar17 = (uint *)((int)puVar17 + 2);
            }
          }
          if ((puVar17 < puVar22) && ((char)*local_13c == (char)*puVar17)) {
            puVar17 = (uint *)((int)puVar17 + 1);
          }
          uVar15 = (int)puVar17 - (int)puVar29;
        }
joined_r0x017e35a8:
        if (pcVar9 == (char *)((int)puVar10 + uVar15)) {
          puVar22 = (uint *)((int)puVar29 + uVar15);
          if (puVar22 < puVar45) {
            if (*puVar24 == *(uint *)((int)puVar29 + uVar15)) {
              puVar10 = puVar22 + 1;
              local_13c = puVar24 + 1;
              if (puVar10 < puVar45) {
                do {
                  if (*local_13c != *puVar10) {
                    uVar20 = *local_13c ^ *puVar10;
                    bVar4 = (byte)uVar20;
                    bVar5 = (byte)(uVar20 >> 8);
                    bVar6 = (byte)(uVar20 >> 0x10);
                    bVar3 = (byte)(uVar20 >> 0x18);
                    uVar20 = (int)puVar10 +
                             (((uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
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
                                                          bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3)
                             - (int)puVar22);
                    goto LAB_017e35e0;
                  }
                  puVar10 = puVar10 + 1;
                  local_13c = local_13c + 1;
                } while (puVar10 < puVar45);
              }
              goto LAB_017e3630;
            }
            uVar20 = *puVar24 ^ *(uint *)((int)puVar29 + uVar15);
            bVar4 = (byte)uVar20;
            bVar5 = (byte)(uVar20 >> 8);
            bVar6 = (byte)(uVar20 >> 0x10);
            bVar3 = (byte)(uVar20 >> 0x18);
            uVar20 = (uint)LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                    bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                                  bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                                bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                                   (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                                    bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                                  bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                                bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                                   (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 |
                                                    bVar6 >> 2 & 1) << 1 | bVar6 >> 3 & 1) << 1 |
                                                  bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                                                bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                                   (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                                    bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                                  bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                                bVar3 >> 6 & 1) << 1 | bVar3 >> 7)) >> 3;
          }
          else {
            puVar10 = puVar22;
            local_13c = puVar24;
LAB_017e3630:
            if (puVar10 < (uint *)((int)param_3 + -1)) {
              if ((short)*local_13c == (short)*puVar10) {
                local_13c = (uint *)((int)local_13c + 2);
                puVar10 = (uint *)((int)puVar10 + 2);
              }
            }
            if ((puVar10 < param_3) && ((char)*local_13c == (char)*puVar10)) {
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            uVar20 = (int)puVar10 - (int)puVar22;
          }
LAB_017e35e0:
          uVar15 = uVar15 + uVar20;
        }
        puVar22 = (uint *)(uVar15 + 4);
        if (puVar22 <= local_134) goto LAB_017e31d8;
        *param_4 = (int)(pcVar9 + ((((3 - iVar11) + uVar46) - iVar13) - iVar27));
        if (param_3 == (uint *)((int)param_2 + (int)puVar22)) goto LAB_017e38b4;
        piVar51 = piVar8 + 1;
        local_134 = puVar22;
      } while (piVar8 + 1 != piVar26);
LAB_017e328c:
      piVar8 = piVar8 + 1;
      local_140 = local_134;
    }
  }
LAB_017e3290:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(piVar8,puVar22,local_2c ^ DAT_018ddaf8,0);
  }
  return local_140;
LAB_017e38b4:
  local_140 = puVar22;
  goto LAB_017e3290;
}

