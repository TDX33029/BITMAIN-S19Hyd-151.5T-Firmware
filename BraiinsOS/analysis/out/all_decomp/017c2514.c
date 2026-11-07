// FUN_017c2514 @ 017c2514 size=1820 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c2514(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint unaff_r10;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  bool bVar31;
  uint local_144;
  int iStack_130;
  uint local_12c [64];
  uint local_2c;
  
  iVar27 = *(int *)(param_1 + 4);
  uVar7 = (int)param_2 - iVar27;
  uVar11 = *(uint *)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar15 = *(int *)(param_1 + 0x5c);
  iVar16 = *(int *)(param_1 + 0x28);
  iVar26 = *(int *)(param_1 + 0x24);
  uVar12 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  bVar31 = uVar12 < uVar7 - uVar11;
  if (bVar31) {
    unaff_r10 = uVar7 - uVar12;
  }
  if (!bVar31) {
    unaff_r10 = uVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r10 = uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0xc4);
  uVar11 = 0x18 - iVar26;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar21 = param_1 + 0x2c;
    iVar22 = iVar15;
    iVar9 = iVar27;
    iVar30 = iVar16;
    if (0x180 < uVar7 - uVar13) {
      uVar25 = uVar13 + 0x60;
      if (uVar13 < uVar25) {
        uVar18 = uVar12;
        while( true ) {
          uVar20 = (*(int *)(uVar13 + iVar27 + 8) * -0x61c8864f ^ uVar18) >> (uVar11 & 0xff);
          uVar24 = *(uint *)(iVar21 + (uVar13 & 7) * 4);
          uVar18 = uVar20 >> 8;
          HintPreloadData(iVar15 + uVar18 * 0x40);
          HintPreloadData(iVar16 + uVar18 * 0x10);
          uVar18 = uVar24 >> 8;
          *(uint *)(iVar21 + (uVar13 & 7) * 4) = uVar20;
          uVar20 = *(byte *)(iVar16 + uVar18 * 0x10) - 1 & 0xf;
          if (uVar20 == 0) {
            uVar20 = 0xf;
          }
          *(char *)(iVar16 + uVar18 * 0x10) = (char)uVar20;
          *(char *)(iVar16 + uVar18 * 0x10 + uVar20) = (char)uVar24;
          *(uint *)(iVar15 + (uVar18 * 0x10 + uVar20) * 4) = uVar13;
          uVar13 = uVar13 + 1;
          if (uVar25 == uVar13) break;
          uVar18 = *(uint *)(param_1 + 0x50);
        }
        iVar26 = *(int *)(param_1 + 0x24);
        iVar22 = *(int *)(param_1 + 0x5c);
        iVar9 = *(int *)(param_1 + 4);
        iVar30 = *(int *)(param_1 + 0x28);
      }
      uVar13 = uVar7 + -0x20;
      if ((byte *)(uVar13 + iVar27) <= (byte *)((int)param_2 + 1)) {
        pbVar19 = (byte *)((int)param_2 + 1) + (1 - (int)(uVar13 + iVar27));
        if (pbVar19 < (byte *)0x9) {
          uVar25 = uVar13 + (int)pbVar19;
        }
        else {
          uVar25 = uVar7 + -0x18;
        }
        if (uVar13 < uVar25) {
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar18 = uVar13;
          do {
            piVar23 = (int *)(uVar18 + iVar27);
            uVar14 = uVar18 & 7;
            uVar18 = uVar18 + 1;
            uVar1 = (*piVar23 * -0x61c8864f ^ uVar20) >> (0x18U - iVar26 & 0xff);
            uVar24 = uVar1 >> 8;
            HintPreloadData(iVar22 + uVar24 * 0x40);
            HintPreloadData(iVar30 + uVar24 * 0x10);
            *(uint *)(param_1 + uVar14 * 4 + 0x2c) = uVar1;
          } while (uVar18 < uVar25);
        }
      }
    }
    if (uVar13 < uVar7) {
      do {
        uVar18 = (*(int *)(uVar13 + iVar9 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar26 & 0xff);
        uVar20 = *(uint *)(iVar21 + (uVar13 & 7) * 4);
        uVar25 = uVar18 >> 8;
        HintPreloadData(iVar22 + uVar25 * 0x40);
        HintPreloadData(iVar30 + uVar25 * 0x10);
        *(uint *)(iVar21 + (uVar13 & 7) * 4) = uVar18;
        uVar25 = uVar20 >> 8;
        uVar18 = *(byte *)(iVar30 + uVar25 * 0x10) - 1 & 0xf;
        if (uVar18 == 0) {
          uVar18 = 0xf;
        }
        *(char *)(iVar30 + uVar25 * 0x10) = (char)uVar18;
        *(char *)(iVar30 + uVar25 * 0x10 + uVar18) = (char)uVar20;
        *(uint *)(iVar22 + (uVar18 + uVar25 * 0x10) * 4) = uVar13;
        uVar13 = uVar13 + 1;
      } while (uVar7 != uVar13);
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    uVar11 = (param_2[2] * -0x61c8864f ^ uVar12) >> (uVar11 & 0xff);
    local_144 = *(uint *)(iVar21 + (uVar7 & 7) * 4);
    uVar12 = uVar11 >> 8;
    HintPreloadData(iVar15 + uVar12 * 0x40);
    HintPreloadData(iVar16 + uVar12 * 0x10);
    *(uint *)(iVar21 + (uVar7 & 7) * 4) = uVar11;
  }
  else {
    uVar13 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar7;
    local_144 = (uVar13 * -0x61c8864f ^ uVar12) >> (uVar11 & 0xff);
  }
  uVar12 = local_144 >> 8;
  iVar15 = iVar15 + uVar12 * 0x40;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_144;
  puVar8 = (uint *)(iVar16 + uVar12 * 0x10);
  uVar11 = (local_144 & 0xff) * 0x1010101;
  uVar25 = *(uint *)(iVar16 + uVar12 * 0x10) ^ uVar11;
  uVar18 = (uint)*(byte *)(iVar16 + uVar12 * 0x10);
  uVar13 = uVar18 & 0xf;
  uVar11 = (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
           ((((puVar8[1] ^ uVar11 | 0x80808080) + 0xfefefeff | puVar8[1] ^ uVar11) & 0x80808080) *
            0x204081 >> 0x1c |
           ((((puVar8[2] ^ uVar11 | 0x80808080) + 0xfefefeff | puVar8[2] ^ uVar11) & 0x80808080) *
            0x204081 >> 0x1c |
           ((((puVar8[3] ^ uVar11 | 0x80808080) + 0xfefefeff | puVar8[3] ^ uVar11) & 0x80808080) *
            0x204081 >> 0x1c) << 4) << 4) << 4;
  uVar11 = (~uVar11 << (-uVar13 & 0xf) | (uVar11 ^ 0xffff) >> uVar13) & 0xffff;
  if (uVar11 == 0) {
    iVar26 = 0;
  }
  else {
    if (3 < uVar17) {
      uVar17 = 4;
    }
    iVar22 = 1 << (uVar17 & 0xff);
    iVar26 = 0;
    do {
      if (uVar11 == 0) {
        iVar9 = 0;
      }
      else {
        bVar3 = (byte)uVar11;
        bVar2 = (byte)(uVar11 >> 8);
        iVar9 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                                bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                              bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                            bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x10);
      }
      uVar17 = iVar9 + uVar13 & 0xf;
      if (uVar17 == 0) {
        bVar31 = true;
        iVar9 = iVar26;
      }
      else {
        uVar17 = *(uint *)(iVar15 + uVar17 * 4);
        if (uVar17 < unaff_r10) break;
        HintPreloadData(iVar27 + uVar17);
        iVar9 = iVar26 + 1;
        local_12c[iVar26] = uVar17;
        bVar31 = iVar22 != 1;
        iVar22 = iVar22 + -1;
      }
      uVar11 = uVar11 & uVar11 - 1;
      if (uVar11 == 0) {
        bVar31 = false;
      }
      iVar26 = iVar9;
    } while (bVar31);
  }
  uVar11 = uVar18 - 1 & 0xf;
  if (uVar11 == 0) {
    uVar11 = 0xf;
  }
  *(char *)(iVar16 + uVar12 * 0x10) = (char)uVar11;
  *(byte *)((int)puVar8 + uVar11) = (byte)local_144;
  iVar16 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar16 + 1;
  *(int *)(iVar15 + uVar11 * 4) = iVar16;
  if (iVar26 == 0) {
    puVar10 = (uint *)0x3;
  }
  else {
    piVar23 = &iStack_130;
    puVar28 = (uint *)((int)param_3 + -1);
    iVar15 = 0;
    puVar6 = (uint *)0x3;
    do {
      piVar23 = piVar23 + 1;
      iVar16 = *piVar23;
      puVar29 = (uint *)(iVar27 + iVar16);
      puVar8 = *(uint **)((int)puVar29 + (int)((int)puVar6 + -3));
      if (puVar8 != *(uint **)((int)param_2 + (int)puVar6 + -3)) goto LAB_017c28e0;
      puVar10 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar27 + iVar16) == *param_2) {
          do {
            puVar10 = puVar10 + 1;
            puVar29 = puVar29 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar10) {
              if ((puVar28 <= puVar10) || ((ushort)*puVar29 != (ushort)*puVar10)) goto LAB_017c2aa0;
              goto LAB_017c2a98;
            }
          } while (*puVar29 == *puVar10);
          uVar12 = *puVar29 ^ *puVar10;
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar2 = (byte)(uVar12 >> 0x18);
          puVar10 = (uint *)((int)puVar10 +
                            (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
                                                              1 | bVar3 >> 2 & 1) << 1 |
                                                            bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1)
                                                           << 1 | bVar3 >> 5 & 1) << 1 |
                                                         bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                                            | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 8 |
                                            (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) <<
                                                              1 | bVar2 >> 2 & 1) << 1 |
                                                            bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                           << 1 | bVar2 >> 5 & 1) << 1 |
                                                         bVar2 >> 6 & 1) << 1 | bVar2 >> 7)) >> 3) -
                            (int)param_2));
        }
        else {
          uVar12 = *(uint *)(iVar27 + iVar16) ^ *param_2;
          bVar3 = (byte)uVar12;
          bVar4 = (byte)(uVar12 >> 8);
          bVar5 = (byte)(uVar12 >> 0x10);
          bVar2 = (byte)(uVar12 >> 0x18);
          puVar10 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
LAB_017c2970:
        puVar8 = puVar10;
        if (puVar6 < puVar10) {
          *param_4 = uVar7 + (3 - iVar16);
          puVar6 = puVar10;
          if (param_3 == (uint *)((int)param_2 + (int)puVar10)) break;
        }
      }
      else {
        if (param_2 < puVar28) {
          if ((uint *)(uint)(ushort)*param_2 == (uint *)(uint)*(ushort *)(iVar27 + iVar16)) {
LAB_017c2a98:
            puVar10 = (uint *)((int)puVar10 + 2);
            puVar29 = (uint *)((int)puVar29 + 2);
LAB_017c2aa0:
            if (puVar10 < param_3) goto LAB_017c2938;
          }
          else {
            puVar8 = (uint *)(uint)*(ushort *)(iVar27 + iVar16);
            if (param_3 <= param_2) goto LAB_017c28e0;
LAB_017c2938:
            if ((byte)*puVar29 == (byte)*puVar10) goto LAB_017c29f0;
          }
LAB_017c2948:
          puVar10 = (uint *)((int)puVar10 - (int)param_2);
          goto LAB_017c2970;
        }
        puVar8 = puVar28;
        if (param_2 < param_3) {
          puVar8 = (uint *)(uint)(byte)*param_2;
          if ((uint *)(uint)*(byte *)(iVar27 + iVar16) == puVar8) {
LAB_017c29f0:
            puVar10 = (uint *)((int)puVar10 + 1);
            goto LAB_017c2948;
          }
        }
      }
LAB_017c28e0:
      puVar10 = puVar6;
      iVar15 = iVar15 + 1;
      puVar6 = puVar10;
    } while (iVar15 != iVar26);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(puVar10,puVar8,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

