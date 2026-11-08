// FUN_017c4568 @ 017c4568 size=2392 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_017c4568(int param_1,uint *param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint *puVar34;
  bool bVar35;
  uint local_16c;
  uint local_168;
  uint local_140;
  int iStack_130;
  int local_12c [64];
  uint local_2c;
  
  iVar26 = *(int *)(param_1 + 4);
  uVar29 = (int)param_2 - iVar26;
  iVar25 = *(int *)(param_1 + 0x24);
  puVar9 = *(uint **)(param_1 + 0x10);
  local_2c = DAT_018ddaf8;
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 0x28);
  puVar8 = (uint *)(1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  puVar6 = (uint *)(uVar29 - (int)puVar9);
  bVar35 = puVar6 <= puVar8;
  if (!bVar35) {
    puVar6 = (uint *)(uVar29 - (int)puVar8);
  }
  if (bVar35) {
    puVar6 = puVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar6 = puVar9;
  }
  uVar14 = *(uint *)(param_1 + 0xc4);
  uVar15 = *(uint *)(param_1 + 0x50);
  uVar16 = *(uint *)(param_1 + 0x54);
  iVar30 = -iVar25;
  uVar17 = iVar30 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar27 = param_1 + 0x2c;
    iVar33 = iVar13;
    iVar7 = iVar26;
    iVar31 = iVar12;
    if (uVar29 - uVar10 < 0x181) {
      local_168 = iVar25 - 0x18;
      local_16c = 0x18 - iVar25;
    }
    else {
      uVar18 = uVar10 + 0x60;
      if (uVar10 < uVar18) {
        local_168 = 0x20 - uVar17;
        local_16c = iVar30 + 0x18;
        uVar20 = uVar15;
        uVar19 = uVar16;
        while( true ) {
          uVar32 = *(uint *)(iVar27 + (uVar10 & 7) * 4);
          uVar23 = *(uint *)(uVar10 + iVar26 + 8);
          lVar2 = (ulonglong)uVar23 * 0xbf9b0000;
          uVar19 = *(int *)(uVar10 + iVar26 + 0xc) * -0x40650000 + uVar23 * -0x30e44324 +
                   (int)((ulonglong)lVar2 >> 0x20) ^ uVar19;
          uVar23 = uVar32 >> 8;
          uVar19 = ((uint)lVar2 ^ uVar20) >> (uVar17 & 0xff) | uVar19 << (local_168 & 0xff) |
                   uVar19 >> (local_16c & 0xff);
          uVar20 = uVar19 >> 8;
          HintPreloadData(iVar13 + uVar20 * 0x20);
          iVar25 = uVar20 * 0x80;
          HintPreloadData(iVar12 + iVar25);
          HintPreloadData(iVar12 + iVar25 + 0x40);
          *(uint *)(iVar27 + (uVar10 & 7) * 4) = uVar19;
          uVar20 = *(byte *)(iVar13 + uVar23 * 0x20) - 1 & 0x1f;
          if (uVar20 == 0) {
            uVar20 = 0x1f;
          }
          *(char *)(iVar13 + uVar23 * 0x20) = (char)uVar20;
          *(char *)(iVar13 + uVar23 * 0x20 + uVar20) = (char)uVar32;
          *(uint *)(iVar12 + (uVar23 * 0x20 + uVar20) * 4) = uVar10;
          uVar10 = uVar10 + 1;
          if (uVar18 == uVar10) break;
          uVar20 = *(uint *)(param_1 + 0x50);
          uVar19 = *(uint *)(param_1 + 0x54);
        }
        iVar25 = *(int *)(param_1 + 0x24);
        iVar33 = *(int *)(param_1 + 0x28);
        iVar7 = *(int *)(param_1 + 4);
        iVar31 = *(int *)(param_1 + 0x5c);
      }
      else {
        local_168 = iVar25 - 0x18;
        local_16c = 0x18 - iVar25;
      }
      uVar10 = uVar29 + -0x20;
      if ((byte *)(uVar10 + iVar26) <= (byte *)((int)param_2 + 1)) {
        pbVar21 = (byte *)((int)param_2 + 1) + (1 - (int)(uVar10 + iVar26));
        if (pbVar21 < (byte *)0x9) {
          uVar18 = uVar10 + (int)pbVar21;
        }
        else {
          uVar18 = uVar29 + -0x18;
        }
        if (uVar10 < uVar18) {
          uVar19 = *(uint *)(param_1 + 0x50);
          uVar23 = *(uint *)(param_1 + 0x54);
          uVar20 = uVar10;
          do {
            uVar11 = uVar20 & 7;
            piVar24 = (int *)(uVar20 + iVar26 + 4);
            puVar8 = (uint *)(uVar20 + iVar26);
            uVar20 = uVar20 + 1;
            lVar2 = (ulonglong)*puVar8 * 0xbf9b0000;
            uVar32 = *piVar24 * -0x40650000 + *puVar8 * -0x30e44324 +
                     (int)((ulonglong)lVar2 >> 0x20) ^ uVar23;
            uVar22 = ((uint)lVar2 ^ uVar19) >> (0x38U - iVar25 & 0xff) |
                     uVar32 << (iVar25 - 0x18U & 0xff) | uVar32 >> (0x18U - iVar25 & 0xff);
            uVar32 = uVar22 >> 8;
            HintPreloadData(iVar33 + uVar32 * 0x20);
            iVar30 = uVar32 * 0x80;
            HintPreloadData(iVar31 + iVar30);
            HintPreloadData(iVar31 + iVar30 + 0x40);
            *(uint *)(param_1 + uVar11 * 4 + 0x2c) = uVar22;
          } while (uVar20 < uVar18);
        }
      }
    }
    if (uVar10 < uVar29) {
      do {
        uVar18 = *(uint *)(uVar10 + iVar7 + 8);
        uVar23 = *(uint *)(iVar27 + (uVar10 & 7) * 4);
        lVar2 = (ulonglong)uVar18 * 0xbf9b0000;
        uVar18 = *(int *)(uVar10 + iVar7 + 0xc) * -0x40650000 + uVar18 * -0x30e44324 +
                 (int)((ulonglong)lVar2 >> 0x20) ^ *(uint *)(param_1 + 0x54);
        uVar19 = ((uint)lVar2 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar25 & 0xff) |
                 uVar18 << (iVar25 - 0x18U & 0xff) | uVar18 >> (0x18U - iVar25 & 0xff);
        uVar18 = uVar23 >> 8;
        uVar20 = uVar19 >> 8;
        HintPreloadData(iVar33 + uVar20 * 0x20);
        iVar30 = uVar20 * 0x80;
        HintPreloadData(iVar31 + iVar30);
        HintPreloadData(iVar31 + iVar30 + 0x40);
        *(uint *)(iVar27 + (uVar10 & 7) * 4) = uVar19;
        uVar20 = *(byte *)(iVar33 + uVar18 * 0x20) - 1 & 0x1f;
        if (uVar20 == 0) {
          uVar20 = 0x1f;
        }
        *(char *)(iVar33 + uVar18 * 0x20) = (char)uVar20;
        *(char *)(iVar33 + uVar18 * 0x20 + uVar20) = (char)uVar23;
        *(uint *)(iVar31 + (uVar20 + uVar18 * 0x20) * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while (uVar29 != uVar10);
    }
    uVar10 = param_2[2];
    uVar18 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar29;
    lVar2 = (ulonglong)uVar10 * 0xbf9b0000;
    uVar16 = uVar18 * -0x40650000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^ uVar16;
    uVar15 = ((uint)lVar2 ^ uVar15) >> (uVar17 & 0xff) | uVar16 << (local_168 & 0xff) |
             uVar16 >> (local_16c & 0xff);
    uVar16 = uVar15 >> 8;
    HintPreloadData(iVar13 + uVar16 * 0x20);
    iVar25 = uVar16 * 0x80;
    HintPreloadData(iVar12 + iVar25);
    HintPreloadData(iVar12 + iVar25 + 0x40);
    local_140 = *(uint *)(iVar27 + (uVar29 & 7) * 4);
    *(uint *)(iVar27 + (uVar29 & 7) * 4) = uVar15;
  }
  else {
    uVar10 = *param_2;
    uVar18 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar29;
    lVar2 = (ulonglong)uVar10 * 0xbf9b0000;
    uVar16 = uVar18 * -0x40650000 + uVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20) ^ uVar16;
    local_140 = ((uint)lVar2 ^ uVar15) >> (uVar17 & 0xff) | uVar16 << (0x20 - uVar17 & 0xff) |
                uVar16 >> (iVar30 + 0x18U & 0xff);
  }
  uVar16 = local_140 >> 8;
  iVar12 = iVar12 + uVar16 * 0x80;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_140;
  uVar32 = (local_140 & 0xff) * 0x1010101;
  iVar25 = iVar13 + uVar16 * 0x20;
  uVar17 = *(uint *)(iVar25 + 0x1c) ^ uVar32;
  uVar15 = *(uint *)(iVar25 + 0x18) ^ uVar32;
  uVar10 = *(uint *)(iVar25 + 0x14) ^ uVar32;
  uVar19 = *(uint *)(iVar25 + 0x10) ^ uVar32;
  uVar18 = *(uint *)(iVar25 + 0xc) ^ uVar32;
  uVar23 = *(uint *)(iVar25 + 8) ^ uVar32;
  uVar20 = *(uint *)(iVar25 + 4) ^ uVar32;
  uVar32 = uVar32 ^ *(uint *)(iVar13 + uVar16 * 0x20);
  uVar15 = ~((((uVar32 | 0x80808080) + 0xfefefeff | uVar32) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar10 | 0x80808080) + 0xfefefeff | uVar10) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
            ((((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c) << 4)
            << 4) << 4) << 4) << 4) << 4) << 4);
  uVar10 = (uint)*(byte *)(iVar13 + uVar16 * 0x20);
  uVar17 = uVar10 & 0x1f;
  uVar15 = uVar15 >> uVar17 | uVar15 << 0x20 - uVar17;
  if (uVar15 == 0) {
    puVar8 = (uint *)0x0;
    iVar30 = 0;
  }
  else {
    if (4 < uVar14) {
      uVar14 = 5;
    }
    iVar33 = 1 << (uVar14 & 0xff);
    iVar30 = 0;
    do {
      if (uVar15 == 0) {
        iVar7 = 0;
      }
      else {
        bVar3 = (byte)uVar15;
        bVar4 = (byte)(uVar15 >> 8);
        bVar5 = (byte)(uVar15 >> 0x10);
        bVar1 = (byte)(uVar15 >> 0x18);
        iVar7 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                        | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 |
                                           bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1) << 1 |
                                         bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                                       bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
      }
      uVar14 = iVar7 + uVar17 & 0x1f;
      if (uVar14 == 0) {
        bVar35 = true;
        iVar7 = iVar30;
      }
      else {
        puVar8 = *(uint **)(iVar12 + uVar14 * 4);
        if (puVar8 < puVar6) break;
        HintPreloadData((byte *)(iVar26 + (int)puVar8));
        iVar7 = iVar30 + 1;
        local_12c[iVar30] = (int)puVar8;
        bVar35 = iVar33 != 1;
        iVar33 = iVar33 + -1;
      }
      uVar15 = uVar15 & uVar15 - 1;
      if (uVar15 == 0) {
        bVar35 = false;
      }
      puVar8 = (uint *)0x0;
      iVar30 = iVar7;
    } while (bVar35);
  }
  uVar14 = uVar10 - 1 & 0x1f;
  if (uVar14 == 0) {
    uVar14 = 0x1f;
  }
  *(char *)(iVar13 + uVar16 * 0x20) = (char)uVar14;
  *(char *)(iVar25 + uVar14) = (char)local_140;
  iVar13 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar13 + 1;
  *(int *)(iVar12 + uVar14 * 4) = iVar13;
  if (iVar30 == 0) {
    puVar6 = (uint *)0x3;
  }
  else {
    piVar24 = &iStack_130;
    puVar28 = (uint *)((int)param_3 + -1);
    iVar12 = 0;
    puVar9 = (uint *)0x3;
    do {
      piVar24 = piVar24 + 1;
      iVar13 = *piVar24;
      puVar34 = (uint *)(iVar26 + iVar13);
      puVar8 = *(uint **)((int)puVar34 + (int)((int)puVar9 + -3));
      if (puVar8 != *(uint **)((int)param_2 + (int)puVar9 + -3)) goto LAB_017c4ac8;
      puVar6 = param_2;
      if (param_2 < (uint *)((int)param_3 + -3)) {
        if (*(uint *)(iVar26 + iVar13) == *param_2) {
          do {
            puVar6 = puVar6 + 1;
            puVar34 = puVar34 + 1;
            if ((uint *)((int)param_3 + -3) <= puVar6) {
              if ((puVar28 <= puVar6) || ((ushort)*puVar34 != (ushort)*puVar6)) goto LAB_017c4c54;
              goto LAB_017c4c4c;
            }
          } while (*puVar34 == *puVar6);
          uVar14 = *puVar34 ^ *puVar6;
          bVar3 = (byte)uVar14;
          bVar4 = (byte)(uVar14 >> 8);
          bVar5 = (byte)(uVar14 >> 0x10);
          bVar1 = (byte)(uVar14 >> 0x18);
          puVar6 = (uint *)((int)puVar6 +
                           (((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) <<
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
                                                        << 1 | bVar1 >> 7)) >> 3) - (int)param_2));
        }
        else {
          uVar14 = *(uint *)(iVar26 + iVar13) ^ *param_2;
          bVar3 = (byte)uVar14;
          bVar4 = (byte)(uVar14 >> 8);
          bVar5 = (byte)(uVar14 >> 0x10);
          bVar1 = (byte)(uVar14 >> 0x18);
          puVar6 = (uint *)((uint)LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1
                                                           | bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1)
                                                          << 1 | bVar3 >> 4 & 1) << 1 |
                                                        bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1
                                                      | bVar3 >> 7) << 0x18 |
                                          (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1
                                                           | bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1)
                                                          << 1 | bVar4 >> 4 & 1) << 1 |
                                                        bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1
                                                      | bVar4 >> 7) << 0x10 |
                                          (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1
                                                           | bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1)
                                                          << 1 | bVar5 >> 4 & 1) << 1 |
                                                        bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1
                                                      | bVar5 >> 7) << 8 |
                                          (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1
                                                           | bVar1 >> 2 & 1) << 1 | bVar1 >> 3 & 1)
                                                          << 1 | bVar1 >> 4 & 1) << 1 |
                                                        bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1
                                                      | bVar1 >> 7)) >> 3);
        }
LAB_017c4b58:
        puVar8 = puVar6;
        if (puVar9 < puVar6) {
          *param_4 = uVar29 + (3 - iVar13);
          puVar9 = puVar6;
          if (param_3 == (uint *)((int)param_2 + (int)puVar6)) break;
        }
      }
      else {
        if (param_2 < puVar28) {
          if ((uint *)(uint)(ushort)*param_2 == (uint *)(uint)*(ushort *)(iVar26 + iVar13)) {
LAB_017c4c4c:
            puVar6 = (uint *)((int)puVar6 + 2);
            puVar34 = (uint *)((int)puVar34 + 2);
LAB_017c4c54:
            if (puVar6 < param_3) goto LAB_017c4b20;
          }
          else {
            puVar8 = (uint *)(uint)*(ushort *)(iVar26 + iVar13);
            if (param_3 <= param_2) goto LAB_017c4ac8;
LAB_017c4b20:
            if ((byte)*puVar34 == (byte)*puVar6) goto LAB_017c4c10;
          }
LAB_017c4b30:
          puVar6 = (uint *)((int)puVar6 - (int)param_2);
          goto LAB_017c4b58;
        }
        puVar8 = puVar28;
        if (param_2 < param_3) {
          puVar8 = (uint *)(uint)*(byte *)(iVar26 + iVar13);
          if ((uint *)(uint)(byte)*param_2 == puVar8) {
LAB_017c4c10:
            puVar6 = (uint *)((int)puVar6 + 1);
            goto LAB_017c4b30;
          }
        }
      }
LAB_017c4ac8:
      puVar6 = puVar9;
      iVar12 = iVar12 + 1;
      puVar9 = puVar6;
    } while (iVar12 != iVar30);
  }
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(puVar6,puVar8,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

