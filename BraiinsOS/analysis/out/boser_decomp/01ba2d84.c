// FUN_01ba2d84 @ 01ba2d84 size=2376 calls_out=4 calls_in=3
// strings: 

void FUN_01ba2d84(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  uint extraout_r3;
  int extraout_r3_00;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_154;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar22 = *(int *)(param_1 + 0x28);
  iVar21 = -iVar5;
  uVar19 = iVar21 + 0x38;
  local_2c = DAT_01d53560;
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0xc);
  uVar12 = (int)param_2 - iVar10;
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar12 - uVar13) {
    local_154 = uVar12 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_154 = uVar13;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0x54);
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar15) {
    uVar15 = 6;
  }
  local_14c = 1 << (uVar15 & 0xff);
  piVar16 = *(int **)(param_1 + 0xb4);
  iVar17 = piVar16[10];
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar7 = (uint)lVar1;
  uVar23 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar26 = piVar16[9];
  uVar2 = uVar7 >> (0x38U - iVar26 & 0xff) | uVar23 << (iVar26 - 0x18U & 0xff) |
          uVar23 >> (0x18U - iVar26 & 0xff);
  uVar15 = uVar2 >> 8;
  iVar26 = iVar17 + uVar15 * 0x40;
  iVar3 = piVar16[0x17] + uVar15 * 0x100;
  HintPreloadData(iVar3);
  HintPreloadData(piVar16[0x17] + uVar15 * 0x100 + 0x40);
  HintPreloadData(iVar26);
  HintPreloadData(iVar17 + uVar15 * 0x40 + 0x20);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar8 = param_1 + 0x2c;
    uVar7 = *(uint *)(param_1 + 0x1c);
    if (uVar12 - uVar7 < 0x181) {
      iVar27 = iVar9;
      iVar28 = iVar22;
    }
    else {
      iVar5 = uVar7 - 1;
      if (uVar7 < 0xffffffa0) {
        iVar27 = 0x61;
      }
      else {
        iVar27 = 1;
      }
      for (; uVar7 != iVar27 + iVar5; uVar7 = uVar7 + 1) {
        uVar23 = *(uint *)(iVar10 + uVar7 + 8);
        lVar1 = (ulonglong)uVar23 * 0xbf9b0000;
        uVar23 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar7 + 0xc) * -0x40650000 + uVar23 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar18 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar19 & 0xff) |
                 uVar23 << (0x20 - uVar19 & 0xff) | uVar23 >> (iVar21 + 0x18U & 0xff);
        uVar23 = uVar18 >> 8;
        HintPreloadData(iVar9 + uVar23 * 0x100);
        HintPreloadData(iVar22 + uVar23 * 0x40);
        HintPreloadData(iVar9 + uVar23 * 0x100 + 0x40);
        HintPreloadData(iVar22 + uVar23 * 0x40 + 0x20);
        uVar20 = *(uint *)(iVar8 + (uVar7 & 7) * 4);
        *(uint *)(iVar8 + (uVar7 & 7) * 4) = uVar18;
        uVar23 = uVar20 >> 8;
        uVar18 = *(byte *)(iVar22 + uVar23 * 0x40) - 1 & 0x3f;
        if (uVar18 == 0) {
          iVar28 = 0x3f;
        }
        else {
          iVar28 = 0;
        }
        iVar28 = uVar18 + iVar28;
        *(char *)(iVar22 + uVar23 * 0x40) = (char)iVar28;
        *(char *)(iVar22 + uVar23 * 0x40 + iVar28) = (char)uVar20;
        *(uint *)(iVar9 + (iVar28 + uVar23 * 0x40) * 4) = uVar7;
      }
      uVar7 = uVar12 - 0x20;
      iVar27 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x24);
      iVar28 = *(int *)(param_1 + 0x28);
      uVar23 = 0;
      if (iVar10 + uVar7 <= (int)param_2 + 1U) {
        uVar23 = (((int)param_2 + 1U) - (iVar10 + uVar7)) + 1;
      }
      if (uVar23 < 9) {
        uVar23 = uVar7 + uVar23;
      }
      else {
        uVar23 = uVar12 - 0x18;
      }
      for (uVar18 = uVar7; uVar18 < uVar23; uVar18 = uVar18 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar18) * 0xbf9b0000;
        uVar20 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar18 + 4) * -0x40650000 +
                 *(uint *)(iVar10 + uVar18) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar24 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                 uVar20 << (iVar5 - 0x18U & 0xff) | uVar20 >> (0x18U - iVar5 & 0xff);
        uVar20 = uVar24 >> 8;
        HintPreloadData(iVar27 + uVar20 * 0x100);
        HintPreloadData(iVar28 + uVar20 * 0x40);
        HintPreloadData(iVar27 + uVar20 * 0x100 + 0x40);
        HintPreloadData(iVar28 + uVar20 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar18 & 7) * 4 + 0x2c) = uVar24;
      }
    }
    iVar4 = *(int *)(param_1 + 4);
    for (; uVar7 < uVar12; uVar7 = uVar7 + 1) {
      iVar25 = iVar4 + uVar7;
      uVar23 = *(uint *)(iVar25 + 8);
      lVar1 = (ulonglong)uVar23 * 0xbf9b0000;
      uVar23 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar25 + 0xc) * -0x40650000 + uVar23 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar18 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar23 << (iVar5 - 0x18U & 0xff) | uVar23 >> (0x18U - iVar5 & 0xff);
      uVar23 = uVar18 >> 8;
      HintPreloadData(iVar27 + uVar23 * 0x100);
      HintPreloadData(iVar28 + uVar23 * 0x40);
      HintPreloadData(iVar27 + uVar23 * 0x100 + 0x40);
      HintPreloadData(iVar28 + uVar23 * 0x40 + 0x20);
      uVar20 = *(uint *)(iVar8 + (uVar7 & 7) * 4);
      *(uint *)(iVar8 + (uVar7 & 7) * 4) = uVar18;
      uVar23 = uVar20 >> 8;
      uVar18 = *(byte *)(iVar28 + uVar23 * 0x40) - 1 & 0x3f;
      if (uVar18 == 0) {
        iVar25 = 0x3f;
      }
      else {
        iVar25 = 0;
      }
      iVar25 = uVar18 + iVar25;
      *(char *)(iVar28 + uVar23 * 0x40) = (char)iVar25;
      *(char *)(iVar28 + uVar23 * 0x40 + iVar25) = (char)uVar20;
      *(uint *)(iVar27 + (iVar25 + uVar23 * 0x40) * 4) = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar13 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar13;
    uVar19 = ((uint)lVar1 ^ uVar14) >> (uVar19 & 0xff) | uVar13 << (0x20 - uVar19 & 0xff) |
             uVar13 >> (iVar21 + 0x18U & 0xff);
    uVar13 = uVar19 >> 8;
    HintPreloadData(iVar9 + uVar13 * 0x100);
    HintPreloadData(iVar22 + uVar13 * 0x40);
    HintPreloadData(iVar9 + uVar13 * 0x100 + 0x40);
    HintPreloadData(iVar22 + uVar13 * 0x40 + 0x20);
    uVar13 = *(uint *)(iVar8 + (uVar12 & 7) * 4);
    *(uint *)(iVar8 + (uVar12 & 7) * 4) = uVar19;
  }
  else {
    uVar13 = uVar13 ^ uVar23;
    uVar13 = (uVar14 ^ uVar7) >> (uVar19 & 0xff) | uVar13 << (0x20 - uVar19 & 0xff) |
             uVar13 >> (iVar21 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar19 = uVar13 >> 8;
  uVar7 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  uVar23 = (uint)*(byte *)(iVar22 + uVar19 * 0x40);
  uVar14 = 0;
  uVar18 = uVar23 & 0x3f;
  iVar9 = iVar9 + uVar19 * 0x100;
  iVar5 = iVar22 + uVar19 * 0x40;
  iVar21 = 0x3c;
  do {
    uVar14 = uVar14 << 4 | uVar7 >> 0x1c;
    bVar29 = iVar21 != 0;
    uVar20 = *(uint *)(iVar5 + iVar21) ^ (uVar13 & 0xff) * 0x1010101;
    uVar7 = (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
            uVar7 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  uVar7 = ~uVar7;
  uVar14 = ~uVar14;
  uVar24 = -uVar18 & 0x3f;
  uVar20 = uVar14 << uVar24 | uVar7 << (uVar24 - 0x20 & 0xff) | uVar7 >> (0x20 - uVar24 & 0xff) |
           uVar14 >> uVar18;
  uVar14 = uVar7 >> uVar18 | uVar14 << (0x20 - uVar18 & 0xff) | uVar14 >> (uVar18 - 0x20 & 0xff) |
           uVar7 << uVar24;
  iVar21 = 0;
  while (uVar6 = (undefined1)uVar13, local_14c != 0 && (uVar14 != 0 || uVar20 != 0)) {
    iVar8 = FUN_01b9b85c(uVar14,uVar20);
    uVar6 = (undefined1)extraout_r2;
    uVar13 = uVar18 + iVar8 & 0x3f;
    iVar8 = iVar21;
    if (uVar13 != 0) {
      uVar13 = *(uint *)(iVar9 + uVar13 * 4);
      if (uVar13 < local_154) break;
      HintPreloadData(iVar10 + uVar13);
      iVar8 = iVar21 + 1;
      local_12c[iVar21] = uVar13;
      local_14c = local_14c - 1;
    }
    uVar20 = uVar20 & uVar20 - (extraout_r3 == 0);
    uVar13 = extraout_r2;
    iVar21 = iVar8;
    uVar14 = extraout_r3 & extraout_r3 - 1;
  }
  iVar8 = 0;
  uVar13 = uVar23 - 1 & 0x3f;
  if (uVar13 == 0) {
    iVar27 = 0x3f;
  }
  else {
    iVar27 = 0;
  }
  iVar27 = uVar13 + iVar27;
  *(char *)(iVar22 + uVar19 * 0x40) = (char)iVar27;
  *(undefined1 *)(iVar5 + iVar27) = uVar6;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  uVar13 = 3;
  *(int *)(iVar9 + iVar27 * 4) = iVar5;
  for (; iVar21 != iVar8; iVar8 = iVar8 + 1) {
    uVar19 = local_12c[iVar8];
    iVar5 = iVar10 + uVar19;
    if ((*(int *)(iVar5 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) &&
       (uVar14 = FUN_01b9b884(param_2,iVar5,param_3), uVar13 < uVar14)) {
      *param_4 = (uVar12 + 3) - uVar19;
      if (param_3 == (int)param_2 + uVar14) goto LAB_01ba31c0;
      uVar13 = uVar14;
    }
  }
  uVar14 = uVar13;
LAB_01ba31c0:
  uVar13 = 0;
  uVar19 = 0;
  uVar7 = piVar16[3];
  uVar15 = *(byte *)(iVar17 + uVar15 * 0x40) & 0x3f;
  iVar9 = *piVar16;
  iVar22 = piVar16[1];
  iVar5 = iVar9 - iVar22;
  iVar21 = 0x3c;
  do {
    uVar19 = uVar19 << 4 | uVar13 >> 0x1c;
    bVar29 = iVar21 != 0;
    uVar23 = *(uint *)(iVar26 + iVar21) ^ (uVar2 & 0xff) * 0x1010101;
    uVar13 = (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  uVar13 = ~uVar13;
  uVar19 = ~uVar19;
  uVar23 = -uVar15 & 0x3f;
  uVar2 = uVar19 << uVar23 | uVar13 << (uVar23 - 0x20 & 0xff) | uVar13 >> (0x20 - uVar23 & 0xff) |
          uVar19 >> uVar15;
  uVar13 = uVar13 >> uVar15 | uVar19 << (0x20 - uVar15 & 0xff) | uVar19 >> (uVar15 - 0x20 & 0xff) |
           uVar13 << uVar23;
  iVar21 = 0;
  while (uVar19 = local_14c, local_14c != 0 && (uVar13 != 0 || uVar2 != 0)) {
    iVar5 = FUN_01b9b85c(uVar13,uVar2);
    uVar13 = uVar15 + iVar5 & 0x3f;
    iVar26 = iVar21;
    iVar5 = extraout_r3_00;
    if (uVar13 != 0) {
      uVar19 = *(uint *)(iVar3 + uVar13 * 4);
      if (uVar19 < uVar7) break;
      HintPreloadData(iVar22 + uVar19);
      iVar26 = iVar21 + 1;
      local_12c[iVar21] = uVar19;
      local_14c = local_14c - 1;
    }
    uVar2 = uVar2 & uVar2 - (extraout_r2_00 == 0);
    iVar21 = iVar26;
    uVar13 = extraout_r2_00 & extraout_r2_00 - 1;
  }
  for (iVar26 = 0; iVar21 != iVar26; iVar26 = iVar26 + 1) {
    uVar13 = local_12c[iVar26];
    uVar19 = iVar22 + uVar13;
    if (*(uint *)(iVar22 + uVar13) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar19 + 4,param_3,iVar9,iVar10 + iVar11);
      uVar19 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar15 = (int)uVar30 + 4;
      if (uVar14 < uVar15) {
        *param_4 = ((3 - iVar11) + uVar12 + iVar5) - uVar13;
        if (param_3 == (int)param_2 + uVar15) goto LAB_01ba3684;
        uVar14 = uVar15;
      }
    }
  }
  uVar15 = uVar14;
LAB_01ba3684:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar15,uVar19,local_2c ^ DAT_01d53560,0);
  }
  return;
}

