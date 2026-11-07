// FUN_017c3d84 @ 017c3d84 size=2008 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c3d84(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  char *pcVar29;
  uint *puVar30;
  bool bVar31;
  uint local_148;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar22 = *(int *)(param_1 + 4);
  uVar26 = (int)param_2 - iVar22;
  iVar20 = *(int *)(param_1 + 0x24);
  uVar7 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar10 = *(int *)(param_1 + 0x28);
  uVar8 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar31 = uVar26 - uVar7 <= uVar8;
  uVar21 = uVar26;
  if (!bVar31) {
    uVar21 = uVar26 - uVar8;
  }
  if (bVar31) {
    uVar21 = uVar7;
  }
  iVar23 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar21 = uVar7;
  }
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0xc4);
  uVar7 = 0x18 - iVar20;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar9 = *(uint *)(param_1 + 0x1c);
    iVar17 = param_1 + 0x2c;
    iVar13 = iVar23;
    iVar15 = iVar22;
    iVar28 = iVar10;
    if (0x180 < uVar26 - uVar9) {
      uVar18 = uVar9 + 0x60;
      if (uVar9 < uVar18) {
        uVar12 = uVar8;
        while( true ) {
          uVar14 = (*(int *)(uVar9 + iVar22 + 8) * -0x61c8864f ^ uVar12) >> (uVar7 & 0xff);
          uVar24 = *(uint *)(iVar17 + (uVar9 & 7) * 4);
          uVar12 = uVar14 >> 8;
          HintPreloadData(iVar10 + uVar12 * 0x20);
          iVar20 = uVar12 * 0x80;
          HintPreloadData(iVar23 + iVar20);
          HintPreloadData(iVar23 + iVar20 + 0x40);
          uVar12 = uVar24 >> 8;
          *(uint *)(iVar17 + (uVar9 & 7) * 4) = uVar14;
          uVar14 = *(byte *)(iVar10 + uVar12 * 0x20) - 1 & 0x1f;
          if (uVar14 == 0) {
            uVar14 = 0x1f;
          }
          *(char *)(iVar10 + uVar12 * 0x20) = (char)uVar14;
          *(char *)(iVar10 + uVar12 * 0x20 + uVar14) = (char)uVar24;
          *(uint *)(iVar23 + (uVar12 * 0x20 + uVar14) * 4) = uVar9;
          uVar9 = uVar9 + 1;
          if (uVar18 == uVar9) break;
          uVar12 = *(uint *)(param_1 + 0x50);
        }
        iVar20 = *(int *)(param_1 + 0x24);
        iVar13 = *(int *)(param_1 + 0x5c);
        iVar15 = *(int *)(param_1 + 4);
        iVar28 = *(int *)(param_1 + 0x28);
      }
      uVar9 = uVar26 + -0x20;
      if ((char *)(uVar9 + iVar22) <= (char *)((int)param_2 + 1)) {
        pcVar29 = (char *)((int)param_2 + 1) + (1 - (int)(uVar9 + iVar22));
        if (pcVar29 < (char *)0x9) {
          uVar18 = uVar9 + (int)pcVar29;
        }
        else {
          uVar18 = uVar26 + -0x18;
        }
        if (uVar9 < uVar18) {
          uVar14 = *(uint *)(param_1 + 0x50);
          uVar12 = uVar9;
          do {
            piVar19 = (int *)(uVar12 + iVar22);
            uVar27 = uVar12 & 7;
            uVar12 = uVar12 + 1;
            uVar25 = (*piVar19 * -0x61c8864f ^ uVar14) >> (0x18U - iVar20 & 0xff);
            uVar24 = uVar25 >> 8;
            HintPreloadData(iVar28 + uVar24 * 0x20);
            iVar1 = uVar24 * 0x80;
            HintPreloadData(iVar13 + iVar1);
            HintPreloadData(iVar13 + iVar1 + 0x40);
            *(uint *)(param_1 + uVar27 * 4 + 0x2c) = uVar25;
          } while (uVar12 < uVar18);
        }
      }
    }
    if (uVar9 < uVar26) {
      do {
        uVar12 = (*(int *)(uVar9 + iVar15 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar20 & 0xff);
        uVar14 = *(uint *)(iVar17 + (uVar9 & 7) * 4);
        uVar18 = uVar12 >> 8;
        HintPreloadData(iVar28 + uVar18 * 0x20);
        iVar1 = uVar18 * 0x80;
        HintPreloadData(iVar13 + iVar1);
        HintPreloadData(iVar13 + iVar1 + 0x40);
        *(uint *)(iVar17 + (uVar9 & 7) * 4) = uVar12;
        uVar18 = uVar14 >> 8;
        uVar12 = *(byte *)(iVar28 + uVar18 * 0x20) - 1 & 0x1f;
        if (uVar12 == 0) {
          uVar12 = 0x1f;
        }
        *(char *)(iVar28 + uVar18 * 0x20) = (char)uVar12;
        *(char *)(iVar28 + uVar18 * 0x20 + uVar12) = (char)uVar14;
        *(uint *)(iVar13 + (uVar12 + uVar18 * 0x20) * 4) = uVar9;
        uVar9 = uVar9 + 1;
      } while (uVar26 != uVar9);
    }
    *(uint *)(param_1 + 0x1c) = uVar26;
    uVar7 = (param_2[2] * -0x61c8864f ^ uVar8) >> (uVar7 & 0xff);
    local_148 = *(uint *)(iVar17 + (uVar26 & 7) * 4);
    uVar8 = uVar7 >> 8;
    HintPreloadData(iVar10 + uVar8 * 0x20);
    iVar20 = uVar8 * 0x80;
    HintPreloadData(iVar23 + iVar20);
    HintPreloadData(iVar23 + iVar20 + 0x40);
    *(uint *)(iVar17 + (uVar26 & 7) * 4) = uVar7;
  }
  else {
    uVar9 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar26;
    local_148 = (uVar9 * -0x61c8864f ^ uVar8) >> (uVar7 & 0xff);
  }
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_148;
  uVar8 = local_148 >> 8;
  iVar23 = iVar23 + uVar8 * 0x80;
  iVar20 = iVar10 + uVar8 * 0x20;
  uVar9 = (local_148 & 0xff) * 0x1010101;
  uVar7 = *(uint *)(iVar20 + 0x1c) ^ uVar9;
  uVar27 = *(uint *)(iVar20 + 0x18) ^ uVar9;
  uVar18 = *(uint *)(iVar20 + 0x14) ^ uVar9;
  uVar24 = *(uint *)(iVar20 + 0x10) ^ uVar9;
  uVar12 = *(uint *)(iVar20 + 0xc) ^ uVar9;
  uVar25 = *(uint *)(iVar20 + 8) ^ uVar9;
  uVar14 = *(uint *)(iVar20 + 4) ^ uVar9;
  uVar9 = uVar9 ^ *(uint *)(iVar10 + uVar8 * 0x20);
  uVar7 = ~((((uVar9 | 0x80808080) + 0xfefefeff | uVar9) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar14 | 0x80808080) + 0xfefefeff | uVar14) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar12 | 0x80808080) + 0xfefefeff | uVar12) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c |
           ((((uVar7 | 0x80808080) + 0xfefefeff | uVar7) & 0x80808080) * 0x204081 >> 0x1c) << 4) <<
           4) << 4) << 4) << 4) << 4) << 4);
  uVar18 = (uint)*(byte *)(iVar10 + uVar8 * 0x20);
  uVar9 = uVar18 & 0x1f;
  uVar7 = uVar7 >> uVar9 | uVar7 << 0x20 - uVar9;
  if (uVar7 == 0) {
    iVar13 = 0;
  }
  else {
    if (4 < uVar11) {
      uVar11 = 5;
    }
    iVar15 = 1 << (uVar11 & 0xff);
    iVar13 = 0;
    do {
      if (uVar7 == 0) {
        iVar28 = 0;
      }
      else {
        bVar3 = (byte)uVar7;
        bVar4 = (byte)(uVar7 >> 8);
        bVar5 = (byte)(uVar7 >> 0x10);
        bVar2 = (byte)(uVar7 >> 0x18);
        iVar28 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
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
      uVar11 = iVar28 + uVar9 & 0x1f;
      if (uVar11 == 0) {
        bVar31 = true;
        iVar28 = iVar13;
      }
      else {
        uVar11 = *(uint *)(iVar23 + uVar11 * 4);
        if (uVar11 < uVar21) break;
        HintPreloadData(uVar11 + iVar22);
        iVar28 = iVar13 + 1;
        local_12c[iVar13] = uVar11;
        bVar31 = iVar15 != 1;
        iVar15 = iVar15 + -1;
      }
      uVar7 = uVar7 & uVar7 - 1;
      if (uVar7 == 0) {
        bVar31 = false;
      }
      iVar13 = iVar28;
    } while (bVar31);
  }
  uVar21 = uVar18 - 1 & 0x1f;
  if (uVar21 == 0) {
    uVar21 = 0x1f;
  }
  *(char *)(iVar10 + uVar8 * 0x20) = (char)uVar21;
  *(char *)(iVar20 + uVar21) = (char)local_148;
  iVar10 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar10 + 1;
  *(int *)(iVar23 + uVar21 * 4) = iVar10;
  if (iVar13 == 0) {
    pcVar29 = (char *)0x3;
  }
  else {
    piVar19 = &iStack_130;
    iVar10 = 0;
    pcVar6 = (char *)0x3;
    do {
      piVar19 = piVar19 + 1;
      iVar20 = *piVar19;
      puVar16 = (uint *)(iVar22 + iVar20);
      if (*(int *)((int)puVar16 + (int)(pcVar6 + -3)) == *(int *)((int)param_2 + (int)(pcVar6 + -3))
         ) {
        puVar30 = param_2;
        if (param_2 < (uint *)((int)param_3 + -3)) {
          if (*(uint *)(iVar22 + iVar20) == *param_2) {
            do {
              puVar30 = puVar30 + 1;
              puVar16 = puVar16 + 1;
              if ((uint *)((int)param_3 + -3) <= puVar30) {
                if (((uint *)((int)param_3 + -1) <= puVar30) || ((short)*puVar16 != (short)*puVar30)
                   ) goto LAB_017c43ac;
                goto LAB_017c43a4;
              }
            } while (*puVar16 == *puVar30);
            uVar8 = *puVar16 ^ *puVar30;
            bVar3 = (byte)uVar8;
            bVar4 = (byte)(uVar8 >> 8);
            bVar5 = (byte)(uVar8 >> 0x10);
            bVar2 = (byte)(uVar8 >> 0x18);
            pcVar29 = (char *)((int)puVar30 +
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
            uVar8 = *(uint *)(iVar22 + iVar20) ^ *param_2;
            bVar3 = (byte)uVar8;
            bVar4 = (byte)(uVar8 >> 8);
            bVar5 = (byte)(uVar8 >> 0x10);
            bVar2 = (byte)(uVar8 >> 0x18);
            pcVar29 = (char *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1)
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
            if ((short)*param_2 == *(short *)(iVar22 + iVar20)) {
LAB_017c43a4:
              puVar30 = (uint *)((int)puVar30 + 2);
              puVar16 = (uint *)((int)puVar16 + 2);
LAB_017c43ac:
              if (puVar30 < param_3) goto LAB_017c4248;
            }
            else {
              if (param_3 <= param_2) goto LAB_017c41f0;
LAB_017c4248:
              if ((char)*puVar16 == (char)*puVar30) goto LAB_017c4300;
            }
          }
          else {
            if ((param_3 <= param_2) || ((char)*param_2 != *(char *)(iVar22 + iVar20)))
            goto LAB_017c41f0;
LAB_017c4300:
            puVar30 = (uint *)((int)puVar30 + 1);
          }
          pcVar29 = (char *)((int)puVar30 - (int)param_2);
        }
        if (pcVar6 < pcVar29) {
          *param_4 = uVar26 + (3 - iVar20);
          pcVar6 = pcVar29;
          if (param_3 == (uint *)((int)param_2 + (int)pcVar29)) break;
        }
      }
LAB_017c41f0:
      pcVar29 = pcVar6;
      iVar10 = iVar10 + 1;
      pcVar6 = pcVar29;
    } while (iVar10 != iVar13);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(pcVar29,param_2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

