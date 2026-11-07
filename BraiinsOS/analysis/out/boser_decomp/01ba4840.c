// FUN_01ba4840 @ 01ba4840 size=2388 calls_out=4 calls_in=3
// strings: 

void FUN_01ba4840(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_154;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar22 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar21 = -iVar5;
  uVar23 = iVar21 + 0x38;
  iVar8 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 0xc);
  uVar10 = (int)param_2 - iVar8;
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar10 - uVar11) {
    local_154 = uVar10 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_154 = uVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar13) {
    uVar13 = 6;
  }
  local_14c = 1 << (uVar13 & 0xff);
  piVar14 = *(int **)(param_1 + 0xb4);
  iVar15 = piVar14[10];
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar16 = (uint)lVar1;
  uVar24 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar26 = piVar14[9];
  uVar2 = uVar16 >> (0x38U - iVar26 & 0xff) | uVar24 << (iVar26 - 0x18U & 0xff) |
          uVar24 >> (0x18U - iVar26 & 0xff);
  uVar13 = uVar2 >> 8;
  iVar26 = iVar15 + uVar13 * 0x40;
  iVar3 = piVar14[0x17] + uVar13 * 0x100;
  HintPreloadData(iVar3);
  HintPreloadData(piVar14[0x17] + uVar13 * 0x100 + 0x40);
  HintPreloadData(iVar26);
  HintPreloadData(iVar15 + uVar13 * 0x40 + 0x20);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar17 = param_1 + 0x2c;
    uVar16 = *(uint *)(param_1 + 0x1c);
    if (uVar10 - uVar16 < 0x181) {
      iVar27 = iVar22;
      iVar28 = iVar7;
    }
    else {
      iVar5 = uVar16 - 1;
      if (uVar16 < 0xffffffa0) {
        iVar27 = 0x61;
      }
      else {
        iVar27 = 1;
      }
      for (; uVar16 != iVar27 + iVar5; uVar16 = uVar16 + 1) {
        uVar24 = *(uint *)(iVar8 + uVar16 + 8);
        lVar1 = (ulonglong)uVar24 * 0xbb000000;
        uVar24 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar8 + uVar16 + 0xc) * -0x45000000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar23 & 0xff) |
                 uVar24 << (0x20 - uVar23 & 0xff) | uVar24 >> (iVar21 + 0x18U & 0xff);
        uVar24 = uVar19 >> 8;
        HintPreloadData(iVar7 + uVar24 * 0x100);
        HintPreloadData(iVar22 + uVar24 * 0x40);
        HintPreloadData(iVar7 + uVar24 * 0x100 + 0x40);
        HintPreloadData(iVar22 + uVar24 * 0x40 + 0x20);
        uVar20 = *(uint *)(iVar17 + (uVar16 & 7) * 4);
        *(uint *)(iVar17 + (uVar16 & 7) * 4) = uVar19;
        uVar24 = uVar20 >> 8;
        uVar19 = *(byte *)(iVar22 + uVar24 * 0x40) - 1 & 0x3f;
        if (uVar19 == 0) {
          iVar28 = 0x3f;
        }
        else {
          iVar28 = 0;
        }
        iVar28 = uVar19 + iVar28;
        *(char *)(iVar22 + uVar24 * 0x40) = (char)iVar28;
        *(char *)(iVar22 + uVar24 * 0x40 + iVar28) = (char)uVar20;
        *(uint *)(iVar7 + (iVar28 + uVar24 * 0x40) * 4) = uVar16;
      }
      uVar16 = uVar10 - 0x20;
      iVar28 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x24);
      iVar27 = *(int *)(param_1 + 0x28);
      uVar24 = 0;
      if (iVar8 + uVar16 <= (int)param_2 + 1U) {
        uVar24 = (((int)param_2 + 1U) - (iVar8 + uVar16)) + 1;
      }
      if (uVar24 < 9) {
        uVar24 = uVar16 + uVar24;
      }
      else {
        uVar24 = uVar10 - 0x18;
      }
      for (uVar19 = uVar16; uVar19 < uVar24; uVar19 = uVar19 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar8 + uVar19) * 0xbb000000;
        uVar20 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar8 + uVar19 + 4) * -0x45000000 +
                 *(uint *)(iVar8 + uVar19) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar25 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                 uVar20 << (iVar5 - 0x18U & 0xff) | uVar20 >> (0x18U - iVar5 & 0xff);
        uVar20 = uVar25 >> 8;
        HintPreloadData(iVar28 + uVar20 * 0x100);
        HintPreloadData(iVar27 + uVar20 * 0x40);
        HintPreloadData(iVar28 + uVar20 * 0x100 + 0x40);
        HintPreloadData(iVar27 + uVar20 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar19 & 7) * 4 + 0x2c) = uVar25;
      }
    }
    iVar4 = *(int *)(param_1 + 4);
    for (; uVar16 < uVar10; uVar16 = uVar16 + 1) {
      iVar18 = iVar4 + uVar16;
      uVar24 = *(uint *)(iVar18 + 8);
      lVar1 = (ulonglong)uVar24 * 0xbb000000;
      uVar24 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar18 + 0xc) * -0x45000000 + uVar24 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar24 << (iVar5 - 0x18U & 0xff) | uVar24 >> (0x18U - iVar5 & 0xff);
      uVar24 = uVar19 >> 8;
      HintPreloadData(iVar28 + uVar24 * 0x100);
      HintPreloadData(iVar27 + uVar24 * 0x40);
      HintPreloadData(iVar28 + uVar24 * 0x100 + 0x40);
      HintPreloadData(iVar27 + uVar24 * 0x40 + 0x20);
      uVar20 = *(uint *)(iVar17 + (uVar16 & 7) * 4);
      *(uint *)(iVar17 + (uVar16 & 7) * 4) = uVar19;
      uVar24 = uVar20 >> 8;
      uVar19 = *(byte *)(iVar27 + uVar24 * 0x40) - 1 & 0x3f;
      if (uVar19 == 0) {
        iVar18 = 0x3f;
      }
      else {
        iVar18 = 0;
      }
      iVar18 = uVar19 + iVar18;
      *(char *)(iVar27 + uVar24 * 0x40) = (char)iVar18;
      *(char *)(iVar27 + uVar24 * 0x40 + iVar18) = (char)uVar20;
      *(uint *)(iVar28 + (iVar18 + uVar24 * 0x40) * 4) = uVar16;
    }
    *(uint *)(param_1 + 0x1c) = uVar10;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar11 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar11;
    uVar23 = ((uint)lVar1 ^ uVar12) >> (uVar23 & 0xff) | uVar11 << (0x20 - uVar23 & 0xff) |
             uVar11 >> (iVar21 + 0x18U & 0xff);
    uVar11 = uVar23 >> 8;
    HintPreloadData(iVar7 + uVar11 * 0x100);
    HintPreloadData(iVar22 + uVar11 * 0x40);
    HintPreloadData(iVar7 + uVar11 * 0x100 + 0x40);
    HintPreloadData(iVar22 + uVar11 * 0x40 + 0x20);
    uVar11 = *(uint *)(iVar17 + (uVar10 & 7) * 4);
    *(uint *)(iVar17 + (uVar10 & 7) * 4) = uVar23;
  }
  else {
    uVar11 = uVar11 ^ uVar24;
    uVar11 = (uVar12 ^ uVar16) >> (uVar23 & 0xff) | uVar11 << (0x20 - uVar23 & 0xff) |
             uVar11 >> (iVar21 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar10;
  }
  uVar23 = uVar11 >> 8;
  uVar16 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  uVar24 = (uint)*(byte *)(iVar22 + uVar23 * 0x40);
  uVar12 = 0;
  uVar19 = uVar24 & 0x3f;
  iVar7 = iVar7 + uVar23 * 0x100;
  iVar5 = iVar22 + uVar23 * 0x40;
  iVar21 = 0x3c;
  do {
    uVar12 = uVar12 << 4 | uVar16 >> 0x1c;
    bVar29 = iVar21 != 0;
    uVar20 = *(uint *)(iVar5 + iVar21) ^ (uVar11 & 0xff) * 0x1010101;
    uVar16 = (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  uVar16 = ~uVar16;
  uVar12 = ~uVar12;
  uVar25 = -uVar19 & 0x3f;
  uVar20 = uVar12 << uVar25 | uVar16 << (uVar25 - 0x20 & 0xff) | uVar16 >> (0x20 - uVar25 & 0xff) |
           uVar12 >> uVar19;
  uVar12 = uVar16 >> uVar19 | uVar12 << (0x20 - uVar19 & 0xff) | uVar12 >> (uVar19 - 0x20 & 0xff) |
           uVar16 << uVar25;
  iVar21 = 0;
  while (uVar6 = (undefined1)uVar11, local_14c != 0 && (uVar12 != 0 || uVar20 != 0)) {
    iVar17 = FUN_01b9b85c(uVar12,uVar20);
    uVar6 = (undefined1)extraout_r3;
    uVar11 = uVar19 + iVar17 & 0x3f;
    iVar17 = iVar21;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar7 + uVar11 * 4);
      if (uVar11 < local_154) break;
      HintPreloadData(iVar8 + uVar11);
      iVar17 = iVar21 + 1;
      local_12c[iVar21] = uVar11;
      local_14c = local_14c - 1;
    }
    uVar20 = uVar20 & uVar20 - (extraout_r2 == 0);
    uVar11 = extraout_r3;
    iVar21 = iVar17;
    uVar12 = extraout_r2 & extraout_r2 - 1;
  }
  iVar17 = 0;
  uVar11 = uVar24 - 1 & 0x3f;
  if (uVar11 == 0) {
    iVar27 = 0x3f;
  }
  else {
    iVar27 = 0;
  }
  iVar27 = uVar11 + iVar27;
  *(char *)(iVar22 + uVar23 * 0x40) = (char)iVar27;
  *(undefined1 *)(iVar5 + iVar27) = uVar6;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  uVar11 = 3;
  *(int *)(iVar7 + iVar27 * 4) = iVar5;
  for (; iVar21 != iVar17; iVar17 = iVar17 + 1) {
    uVar23 = local_12c[iVar17];
    iVar5 = iVar8 + uVar23;
    if ((*(int *)(iVar5 + (uVar11 - 3)) == *(int *)((int)param_2 + (uVar11 - 3))) &&
       (uVar12 = FUN_01b9b884(param_2,iVar5,param_3), uVar11 < uVar12)) {
      *param_4 = (uVar10 + 3) - uVar23;
      if (param_3 == (int)param_2 + uVar12) goto LAB_01ba4c88;
      uVar11 = uVar12;
    }
  }
  uVar12 = uVar11;
LAB_01ba4c88:
  uVar11 = 0;
  uVar23 = 0;
  uVar16 = piVar14[3];
  uVar13 = *(byte *)(iVar15 + uVar13 * 0x40) & 0x3f;
  iVar7 = *piVar14;
  iVar22 = piVar14[1];
  iVar5 = iVar7 - iVar22;
  iVar21 = 0x3c;
  do {
    uVar23 = uVar23 << 4 | uVar11 >> 0x1c;
    bVar29 = iVar21 != 0;
    uVar24 = *(uint *)(iVar26 + iVar21) ^ (uVar2 & 0xff) * 0x1010101;
    uVar11 = (((uVar24 | 0x80808080) + 0xfefefeff | uVar24) & 0x80808080) * 0x204081 >> 0x1c |
             uVar11 << 4;
    iVar21 = iVar21 + -4;
  } while (bVar29);
  uVar11 = ~uVar11;
  uVar23 = ~uVar23;
  uVar24 = -uVar13 & 0x3f;
  uVar2 = uVar23 << uVar24 | uVar11 << (uVar24 - 0x20 & 0xff) | uVar11 >> (0x20 - uVar24 & 0xff) |
          uVar23 >> uVar13;
  uVar11 = uVar11 >> uVar13 | uVar23 << (0x20 - uVar13 & 0xff) | uVar23 >> (uVar13 - 0x20 & 0xff) |
           uVar11 << uVar24;
  iVar21 = 0;
  while (uVar23 = local_14c, local_14c != 0 && (uVar11 != 0 || uVar2 != 0)) {
    iVar5 = FUN_01b9b85c(uVar11,uVar2);
    uVar11 = uVar13 + iVar5 & 0x3f;
    iVar26 = iVar21;
    iVar5 = extraout_r3_00;
    if (uVar11 != 0) {
      uVar23 = *(uint *)(iVar3 + uVar11 * 4);
      if (uVar23 < uVar16) break;
      HintPreloadData(iVar22 + uVar23);
      iVar26 = iVar21 + 1;
      local_12c[iVar21] = uVar23;
      local_14c = local_14c - 1;
    }
    uVar2 = uVar2 & uVar2 - (extraout_r2_00 == 0);
    iVar21 = iVar26;
    uVar11 = extraout_r2_00 & extraout_r2_00 - 1;
  }
  for (iVar26 = 0; iVar21 != iVar26; iVar26 = iVar26 + 1) {
    uVar11 = local_12c[iVar26];
    uVar23 = iVar22 + uVar11;
    if (*(uint *)(iVar22 + uVar11) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar23 + 4,param_3,iVar7,iVar8 + iVar9);
      uVar23 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar13 = (int)uVar30 + 4;
      if (uVar12 < uVar13) {
        *param_4 = ((3 - iVar9) + uVar10 + iVar5) - uVar11;
        if (param_3 == (int)param_2 + uVar13) goto LAB_01ba514c;
        uVar12 = uVar13;
      }
    }
  }
  uVar13 = uVar12;
LAB_01ba514c:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar13,uVar23,local_2c ^ DAT_01d53560,0);
  }
  return;
}

