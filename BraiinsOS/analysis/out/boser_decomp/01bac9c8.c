// FUN_01bac9c8 @ 01bac9c8 size=1724 calls_out=3 calls_in=3
// strings: 

void FUN_01bac9c8(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint extraout_r3;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar18 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar16 = -iVar5;
  uVar17 = iVar16 + 0x38;
  iVar9 = *(int *)(param_1 + 4);
  uVar10 = (int)param_2 - iVar9;
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar10 - uVar11) {
    local_148 = uVar10 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar11;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar13) {
    uVar13 = 6;
  }
  local_14c = 1 << (uVar13 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar14 = param_1 + 0x2c;
    uVar13 = *(uint *)(param_1 + 0x1c);
    if (uVar10 - uVar13 < 0x181) {
      iVar2 = iVar18;
      iVar21 = iVar8;
    }
    else {
      iVar5 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar2 = 0x61;
      }
      else {
        iVar2 = 1;
      }
      for (; uVar13 != iVar2 + iVar5; uVar13 = uVar13 + 1) {
        uVar3 = *(uint *)(iVar9 + uVar13 + 8);
        lVar1 = (ulonglong)uVar3 * 0xbb000000;
        uVar3 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar13 + 0xc) * -0x45000000 + uVar3 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar17 & 0xff) |
                 uVar3 << (0x20 - uVar17 & 0xff) | uVar3 >> (iVar16 + 0x18U & 0xff);
        uVar3 = uVar19 >> 8;
        HintPreloadData(iVar8 + uVar3 * 0x100);
        HintPreloadData(iVar18 + uVar3 * 0x40);
        HintPreloadData(iVar8 + uVar3 * 0x100 + 0x40);
        HintPreloadData(iVar18 + uVar3 * 0x40 + 0x20);
        uVar6 = *(uint *)(iVar14 + (uVar13 & 7) * 4);
        *(uint *)(iVar14 + (uVar13 & 7) * 4) = uVar19;
        uVar3 = uVar6 >> 8;
        uVar19 = *(byte *)(iVar18 + uVar3 * 0x40) - 1 & 0x3f;
        if (uVar19 == 0) {
          iVar21 = 0x3f;
        }
        else {
          iVar21 = 0;
        }
        iVar21 = uVar19 + iVar21;
        *(char *)(iVar18 + uVar3 * 0x40) = (char)iVar21;
        *(char *)(iVar18 + uVar3 * 0x40 + iVar21) = (char)uVar6;
        *(uint *)(iVar8 + (iVar21 + uVar3 * 0x40) * 4) = uVar13;
      }
      uVar13 = uVar10 - 0x20;
      iVar21 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x24);
      iVar2 = *(int *)(param_1 + 0x28);
      uVar3 = 0;
      if (iVar9 + uVar13 <= (int)param_2 + 1U) {
        uVar3 = (((int)param_2 + 1U) - (iVar9 + uVar13)) + 1;
      }
      if (uVar3 < 9) {
        uVar3 = uVar13 + uVar3;
      }
      else {
        uVar3 = uVar10 - 0x18;
      }
      for (uVar19 = uVar13; uVar19 < uVar3; uVar19 = uVar19 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar19) * 0xbb000000;
        uVar6 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar19 + 4) * -0x45000000 + *(uint *)(iVar9 + uVar19) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                 uVar6 << (iVar5 - 0x18U & 0xff) | uVar6 >> (0x18U - iVar5 & 0xff);
        uVar6 = uVar20 >> 8;
        HintPreloadData(iVar21 + uVar6 * 0x100);
        HintPreloadData(iVar2 + uVar6 * 0x40);
        HintPreloadData(iVar21 + uVar6 * 0x100 + 0x40);
        HintPreloadData(iVar2 + uVar6 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar19 & 7) * 4 + 0x2c) = uVar20;
      }
    }
    iVar4 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar10; uVar13 = uVar13 + 1) {
      iVar15 = iVar4 + uVar13;
      uVar3 = *(uint *)(iVar15 + 8);
      lVar1 = (ulonglong)uVar3 * 0xbb000000;
      uVar3 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar15 + 0xc) * -0x45000000 + uVar3 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar3 << (iVar5 - 0x18U & 0xff) | uVar3 >> (0x18U - iVar5 & 0xff);
      uVar3 = uVar19 >> 8;
      HintPreloadData(iVar21 + uVar3 * 0x100);
      HintPreloadData(iVar2 + uVar3 * 0x40);
      HintPreloadData(iVar21 + uVar3 * 0x100 + 0x40);
      HintPreloadData(iVar2 + uVar3 * 0x40 + 0x20);
      uVar6 = *(uint *)(iVar14 + (uVar13 & 7) * 4);
      *(uint *)(iVar14 + (uVar13 & 7) * 4) = uVar19;
      uVar3 = uVar6 >> 8;
      uVar19 = *(byte *)(iVar2 + uVar3 * 0x40) - 1 & 0x3f;
      if (uVar19 == 0) {
        iVar15 = 0x3f;
      }
      else {
        iVar15 = 0;
      }
      iVar15 = uVar19 + iVar15;
      *(char *)(iVar2 + uVar3 * 0x40) = (char)iVar15;
      *(char *)(iVar2 + uVar3 * 0x40 + iVar15) = (char)uVar6;
      *(uint *)(iVar21 + (iVar15 + uVar3 * 0x40) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar10;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar11 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar11;
    uVar17 = ((uint)lVar1 ^ uVar12) >> (uVar17 & 0xff) | uVar11 << (0x20 - uVar17 & 0xff) |
             uVar11 >> (iVar16 + 0x18U & 0xff);
    uVar11 = uVar17 >> 8;
    HintPreloadData(iVar8 + uVar11 * 0x100);
    HintPreloadData(iVar18 + uVar11 * 0x40);
    HintPreloadData(iVar8 + uVar11 * 0x100 + 0x40);
    HintPreloadData(iVar18 + uVar11 * 0x40 + 0x20);
    uVar11 = *(uint *)(iVar14 + (uVar10 & 7) * 4);
    *(uint *)(iVar14 + (uVar10 & 7) * 4) = uVar17;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar11 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar11;
    uVar11 = ((uint)lVar1 ^ uVar12) >> (uVar17 & 0xff) | uVar11 << (0x20 - uVar17 & 0xff) |
             uVar11 >> (iVar16 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar10;
  }
  uVar17 = uVar11 >> 8;
  uVar12 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  uVar19 = (uint)*(byte *)(iVar18 + uVar17 * 0x40);
  uVar13 = 0;
  uVar3 = uVar19 & 0x3f;
  iVar8 = iVar8 + uVar17 * 0x100;
  iVar5 = iVar18 + uVar17 * 0x40;
  iVar16 = 0x3c;
  do {
    uVar13 = uVar13 << 4 | uVar12 >> 0x1c;
    bVar22 = iVar16 != 0;
    uVar6 = *(uint *)(iVar5 + iVar16) ^ (uVar11 & 0xff) * 0x1010101;
    uVar12 = (((uVar6 | 0x80808080) + 0xfefefeff | uVar6) & 0x80808080) * 0x204081 >> 0x1c |
             uVar12 << 4;
    iVar16 = iVar16 + -4;
  } while (bVar22);
  uVar12 = ~uVar12;
  uVar13 = ~uVar13;
  uVar20 = -uVar3 & 0x3f;
  uVar6 = uVar12 >> uVar3 | uVar13 << (0x20 - uVar3 & 0xff) | uVar13 >> (uVar3 - 0x20 & 0xff) |
          uVar12 << uVar20;
  uVar12 = uVar13 << uVar20 | uVar12 << (uVar20 - 0x20 & 0xff) | uVar12 >> (0x20 - uVar20 & 0xff) |
           uVar13 >> uVar3;
  iVar16 = 0;
  while( true ) {
    uVar7 = (undefined1)uVar11;
    uVar11 = uVar6 | uVar12;
    if (local_14c == 0 || uVar11 == 0) break;
    iVar14 = FUN_01b9b85c(uVar6,uVar12);
    uVar7 = (undefined1)extraout_r3;
    uVar11 = uVar3 + iVar14 & 0x3f;
    iVar14 = iVar16;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar8 + uVar11 * 4);
      if (uVar11 < local_148) break;
      HintPreloadData(iVar9 + uVar11);
      iVar14 = iVar16 + 1;
      local_12c[iVar16] = uVar11;
      local_14c = local_14c + -1;
    }
    uVar6 = extraout_r2 & extraout_r2 - 1;
    uVar12 = uVar12 & uVar12 - (extraout_r2 == 0);
    uVar11 = extraout_r3;
    iVar16 = iVar14;
  }
  iVar14 = 0;
  uVar12 = uVar19 - 1 & 0x3f;
  if (uVar12 == 0) {
    iVar2 = 0x3f;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = uVar12 + iVar2;
  *(char *)(iVar18 + uVar17 * 0x40) = (char)iVar2;
  uVar17 = 3;
  *(undefined1 *)(iVar5 + iVar2) = uVar7;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar8 + iVar2 * 4) = iVar5;
  for (; uVar23 = CONCAT44(uVar11,uVar17), iVar16 != iVar14; iVar14 = iVar14 + 1) {
    uVar12 = local_12c[iVar14];
    uVar11 = iVar9 + uVar12;
    if (*(int *)(uVar11 + (uVar17 - 3)) == *(int *)((int)param_2 + (uVar17 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar11,param_3);
      uVar11 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar13 = (uint)uVar23;
      if (uVar17 < uVar13) {
        *param_4 = (uVar10 + 3) - uVar12;
        if (param_3 == (int)param_2 + uVar13) break;
        uVar17 = uVar13;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

