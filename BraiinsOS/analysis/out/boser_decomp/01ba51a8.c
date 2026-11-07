// FUN_01ba51a8 @ 01ba51a8 size=2212 calls_out=4 calls_in=3
// strings: 

void FUN_01ba51a8(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r2;
  int extraout_r2_00;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_150;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar20 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar9 = *(int *)(param_1 + 0x28);
  iVar21 = -iVar7;
  uVar22 = iVar21 + 0x38;
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0xc);
  uVar12 = (int)param_2 - iVar10;
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar12 - uVar13) {
    local_150 = uVar12 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar13;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0x54);
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar15) {
    uVar15 = 5;
  }
  local_14c = 1 << (uVar15 & 0xff);
  piVar16 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar17 = (uint)lVar1;
  uVar23 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar26 = piVar16[9];
  uVar2 = uVar17 >> (0x38U - iVar26 & 0xff) | uVar23 << (iVar26 - 0x18U & 0xff) |
          uVar23 >> (0x18U - iVar26 & 0xff);
  uVar15 = uVar2 >> 8;
  iVar26 = piVar16[10];
  iVar3 = iVar26 + uVar15 * 0x20;
  iVar4 = piVar16[0x17] + uVar15 * 0x80;
  HintPreloadData(iVar4);
  HintPreloadData(piVar16[0x17] + uVar15 * 0x80 + 0x40);
  HintPreloadData(iVar3);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar18 = param_1 + 0x2c;
    uVar17 = *(uint *)(param_1 + 0x1c);
    if (uVar12 - uVar17 < 0x181) {
      iVar24 = iVar20;
      iVar25 = iVar9;
    }
    else {
      iVar7 = uVar17 - 1;
      if (uVar17 < 0xffffffa0) {
        iVar24 = 0x61;
      }
      else {
        iVar24 = 1;
      }
      for (; uVar17 != iVar24 + iVar7; uVar17 = uVar17 + 1) {
        uVar23 = *(uint *)(iVar10 + uVar17 + 8);
        lVar1 = (ulonglong)uVar23 * 0xbb000000;
        uVar23 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar17 + 0xc) * -0x45000000 + uVar23 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar27 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar22 & 0xff) |
                 uVar23 << (0x20 - uVar22 & 0xff) | uVar23 >> (iVar21 + 0x18U & 0xff);
        uVar23 = uVar27 >> 8;
        HintPreloadData(iVar20 + uVar23 * 0x80);
        HintPreloadData(iVar20 + uVar23 * 0x80 + 0x40);
        HintPreloadData(iVar9 + uVar23 * 0x20);
        uVar28 = *(uint *)(iVar18 + (uVar17 & 7) * 4);
        *(uint *)(iVar18 + (uVar17 & 7) * 4) = uVar27;
        uVar23 = uVar28 >> 8;
        uVar27 = *(byte *)(iVar9 + uVar23 * 0x20) - 1 & 0x1f;
        if (uVar27 == 0) {
          iVar25 = 0x1f;
        }
        else {
          iVar25 = 0;
        }
        iVar25 = uVar27 + iVar25;
        *(char *)(iVar9 + uVar23 * 0x20) = (char)iVar25;
        *(char *)(iVar9 + uVar23 * 0x20 + iVar25) = (char)uVar28;
        *(uint *)(iVar20 + (iVar25 + uVar23 * 0x20) * 4) = uVar17;
      }
      uVar17 = uVar12 - 0x20;
      iVar7 = *(int *)(param_1 + 0x24);
      iVar24 = *(int *)(param_1 + 0x5c);
      uVar23 = 0;
      if (iVar10 + uVar17 <= (int)param_2 + 1U) {
        uVar23 = (((int)param_2 + 1U) - (iVar10 + uVar17)) + 1;
      }
      iVar25 = *(int *)(param_1 + 0x28);
      if (uVar23 < 9) {
        uVar23 = uVar17 + uVar23;
      }
      else {
        uVar23 = uVar12 - 0x18;
      }
      for (uVar27 = uVar17; uVar27 < uVar23; uVar27 = uVar27 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar27) * 0xbb000000;
        uVar28 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar27 + 4) * -0x45000000 +
                 *(uint *)(iVar10 + uVar27) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar7 & 0xff) |
                uVar28 << (iVar7 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar7 & 0xff);
        uVar28 = uVar6 >> 8;
        HintPreloadData(iVar24 + uVar28 * 0x80);
        HintPreloadData(iVar25 + uVar28 * 0x20);
        HintPreloadData(iVar24 + uVar28 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar27 & 7) * 4 + 0x2c) = uVar6;
      }
    }
    iVar5 = *(int *)(param_1 + 4);
    for (; uVar17 < uVar12; uVar17 = uVar17 + 1) {
      iVar19 = iVar5 + uVar17;
      uVar23 = *(uint *)(iVar19 + 8);
      lVar1 = (ulonglong)uVar23 * 0xbb000000;
      uVar23 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar19 + 0xc) * -0x45000000 + uVar23 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar28 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar7 & 0xff) |
               uVar23 << (iVar7 - 0x18U & 0xff) | uVar23 >> (0x18U - iVar7 & 0xff);
      uVar23 = uVar28 >> 8;
      HintPreloadData(iVar24 + uVar23 * 0x80);
      HintPreloadData(iVar25 + uVar23 * 0x20);
      HintPreloadData(iVar24 + uVar23 * 0x80 + 0x40);
      uVar27 = *(uint *)(iVar18 + (uVar17 & 7) * 4);
      *(uint *)(iVar18 + (uVar17 & 7) * 4) = uVar28;
      uVar23 = uVar27 >> 8;
      uVar28 = *(byte *)(iVar25 + uVar23 * 0x20) - 1 & 0x1f;
      if (uVar28 == 0) {
        iVar19 = 0x1f;
      }
      else {
        iVar19 = 0;
      }
      iVar19 = uVar28 + iVar19;
      *(char *)(iVar25 + uVar23 * 0x20) = (char)iVar19;
      *(char *)(iVar25 + uVar23 * 0x20 + iVar19) = (char)uVar27;
      *(uint *)(iVar24 + (iVar19 + uVar23 * 0x20) * 4) = uVar17;
    }
    uVar23 = param_2[2];
    uVar17 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)uVar23 * 0xbb000000;
    uVar13 = uVar17 * -0x45000000 + uVar23 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar13;
    uVar22 = ((uint)lVar1 ^ uVar14) >> (uVar22 & 0xff) | uVar13 << (0x20 - uVar22 & 0xff) |
             uVar13 >> (iVar21 + 0x18U & 0xff);
    uVar13 = uVar22 >> 8;
    HintPreloadData(iVar20 + uVar13 * 0x80);
    HintPreloadData(iVar20 + uVar13 * 0x80 + 0x40);
    HintPreloadData(iVar9 + uVar13 * 0x20);
    uVar13 = *(uint *)(iVar18 + (uVar12 & 7) * 4);
    *(uint *)(iVar18 + (uVar12 & 7) * 4) = uVar22;
  }
  else {
    uVar13 = uVar13 ^ uVar23;
    uVar13 = (uVar14 ^ uVar17) >> (uVar22 & 0xff) | uVar13 << (0x20 - uVar22 & 0xff) |
             uVar13 >> (iVar21 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar22 = uVar13 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  iVar20 = iVar20 + uVar22 * 0x80;
  uVar17 = (uint)*(byte *)(iVar9 + uVar22 * 0x20);
  iVar7 = iVar9 + uVar22 * 0x20;
  uVar14 = 0;
  uVar23 = uVar17 & 0x1f;
  iVar21 = 0x1c;
  do {
    bVar29 = iVar21 != 0;
    uVar27 = *(uint *)(iVar7 + iVar21) ^ (uVar13 & 0xff) * 0x1010101;
    uVar14 = (((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c |
             uVar14 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  uVar14 = ~uVar14 >> uVar23 | ~uVar14 << 0x20 - uVar23;
  iVar21 = 0;
  while (uVar8 = (undefined1)uVar13, local_14c != 0 && uVar14 != 0) {
    iVar18 = FUN_01b9b85c(uVar14);
    uVar8 = (undefined1)extraout_r3;
    uVar13 = uVar23 + iVar18 & 0x1f;
    iVar18 = iVar21;
    if (uVar13 != 0) {
      uVar13 = *(uint *)(iVar20 + uVar13 * 4);
      if (uVar13 < local_150) break;
      HintPreloadData(iVar10 + uVar13);
      iVar18 = iVar21 + 1;
      local_12c[iVar21] = uVar13;
      local_14c = local_14c - 1;
    }
    uVar13 = extraout_r3;
    iVar21 = iVar18;
    uVar14 = extraout_r2 & extraout_r2 - 1;
  }
  uVar13 = uVar17 - 1 & 0x1f;
  if (uVar13 == 0) {
    iVar18 = 0x1f;
  }
  else {
    iVar18 = 0;
  }
  iVar18 = uVar13 + iVar18;
  *(char *)(iVar9 + uVar22 * 0x20) = (char)iVar18;
  *(undefined1 *)(iVar7 + iVar18) = uVar8;
  iVar7 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar7 + 1;
  *(int *)(iVar20 + iVar18 * 4) = iVar7;
  uVar13 = 3;
  for (iVar7 = 0; iVar21 != iVar7; iVar7 = iVar7 + 1) {
    uVar22 = local_12c[iVar7];
    iVar9 = iVar10 + uVar22;
    if ((*(int *)(iVar9 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) &&
       (uVar14 = FUN_01b9b884(param_2,iVar9,param_3), uVar13 < uVar14)) {
      *param_4 = (uVar12 + 3) - uVar22;
      if (param_3 == (int)param_2 + uVar14) goto LAB_01ba5584;
      uVar13 = uVar14;
    }
  }
  uVar14 = uVar13;
LAB_01ba5584:
  uVar13 = 0;
  uVar17 = piVar16[3];
  uVar22 = *(byte *)(iVar26 + uVar15 * 0x20) & 0x1f;
  iVar9 = *piVar16;
  iVar20 = piVar16[1];
  iVar7 = iVar9 - iVar20;
  iVar21 = 0x1c;
  do {
    bVar29 = iVar21 != 0;
    uVar15 = *(uint *)(iVar3 + iVar21) ^ (uVar2 & 0xff) * 0x1010101;
    uVar13 = (((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  iVar21 = 0;
  for (uVar13 = ~uVar13 >> uVar22 | ~uVar13 << 0x20 - uVar22; uVar22 = local_14c,
      local_14c != 0 && uVar13 != 0; uVar13 = uVar13 & uVar13 - 1) {
    iVar7 = FUN_01b9b85c(uVar13,0);
    uVar22 = extraout_r2_00 + iVar7 & 0x1f;
    iVar26 = iVar21;
    iVar7 = extraout_r3_00;
    if (uVar22 != 0) {
      uVar22 = *(uint *)(iVar4 + uVar22 * 4);
      if (uVar22 < uVar17) break;
      HintPreloadData(iVar20 + uVar22);
      iVar26 = iVar21 + 1;
      local_12c[iVar21] = uVar22;
      local_14c = local_14c - 1;
    }
    iVar21 = iVar26;
  }
  for (iVar26 = 0; iVar21 != iVar26; iVar26 = iVar26 + 1) {
    uVar13 = local_12c[iVar26];
    uVar22 = iVar20 + uVar13;
    if (*(uint *)(iVar20 + uVar13) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar22 + 4,param_3,iVar9,iVar10 + iVar11);
      uVar22 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar15 = (int)uVar30 + 4;
      if (uVar14 < uVar15) {
        *param_4 = ((3 - iVar11) + uVar12 + iVar7) - uVar13;
        if (param_3 == (int)param_2 + uVar15) goto LAB_01ba5a04;
        uVar14 = uVar15;
      }
    }
  }
  uVar15 = uVar14;
LAB_01ba5a04:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar15,uVar22,local_2c ^ DAT_01d53560,0);
  }
  return;
}

