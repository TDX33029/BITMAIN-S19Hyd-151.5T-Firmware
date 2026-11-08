// FUN_01ba8f5c @ 01ba8f5c size=1864 calls_out=4 calls_in=3
// strings: 

void FUN_01ba8f5c(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r2;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint extraout_r3;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar19 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar17 = -iVar4;
  uVar18 = iVar17 + 0x38;
  iVar8 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0xc);
  uVar11 = (int)param_2 - iVar8;
  uVar12 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar11 - uVar12) {
    local_150 = uVar11 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar12;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar12;
  }
  uVar13 = *(uint *)(param_1 + 0x50);
  uVar12 = *(uint *)(param_1 + 0x54);
  uVar14 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar14) {
    uVar14 = 6;
  }
  local_154 = 1 << (uVar14 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar15 = param_1 + 0x2c;
    uVar14 = *(uint *)(param_1 + 0x1c);
    if (uVar11 - uVar14 < 0x181) {
      iVar21 = iVar19;
      iVar23 = iVar7;
    }
    else {
      iVar4 = uVar14 - 1;
      if (uVar14 < 0xffffffa0) {
        iVar21 = 0x61;
      }
      else {
        iVar21 = 1;
      }
      for (; uVar14 != iVar21 + iVar4; uVar14 = uVar14 + 1) {
        uVar2 = *(uint *)(iVar8 + uVar14 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbb000000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar8 + uVar14 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar18 & 0xff) |
                 uVar2 << (0x20 - uVar18 & 0xff) | uVar2 >> (iVar17 + 0x18U & 0xff);
        uVar2 = uVar20 >> 8;
        HintPreloadData(iVar7 + uVar2 * 0x100);
        HintPreloadData(iVar19 + uVar2 * 0x40);
        HintPreloadData(iVar7 + uVar2 * 0x100 + 0x40);
        HintPreloadData(iVar19 + uVar2 * 0x40 + 0x20);
        uVar5 = *(uint *)(iVar15 + (uVar14 & 7) * 4);
        *(uint *)(iVar15 + (uVar14 & 7) * 4) = uVar20;
        uVar2 = uVar5 >> 8;
        uVar20 = *(byte *)(iVar19 + uVar2 * 0x40) - 1 & 0x3f;
        if (uVar20 == 0) {
          iVar23 = 0x3f;
        }
        else {
          iVar23 = 0;
        }
        iVar23 = uVar20 + iVar23;
        *(char *)(iVar19 + uVar2 * 0x40) = (char)iVar23;
        *(char *)(iVar19 + uVar2 * 0x40 + iVar23) = (char)uVar5;
        *(uint *)(iVar7 + (iVar23 + uVar2 * 0x40) * 4) = uVar14;
      }
      uVar14 = uVar11 - 0x20;
      iVar23 = *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x24);
      iVar21 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar8 + uVar14 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar8 + uVar14)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar14 + uVar2;
      }
      else {
        uVar2 = uVar11 - 0x18;
      }
      for (uVar20 = uVar14; uVar20 < uVar2; uVar20 = uVar20 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar8 + uVar20) * 0xbb000000;
        uVar5 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar8 + uVar20 + 4) * -0x45000000 + *(uint *)(iVar8 + uVar20) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar22 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
                 uVar5 << (iVar4 - 0x18U & 0xff) | uVar5 >> (0x18U - iVar4 & 0xff);
        uVar5 = uVar22 >> 8;
        HintPreloadData(iVar23 + uVar5 * 0x100);
        HintPreloadData(iVar21 + uVar5 * 0x40);
        HintPreloadData(iVar23 + uVar5 * 0x100 + 0x40);
        HintPreloadData(iVar21 + uVar5 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar20 & 7) * 4 + 0x2c) = uVar22;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar14 < uVar11; uVar14 = uVar14 + 1) {
      iVar16 = iVar3 + uVar14;
      uVar2 = *(uint *)(iVar16 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbb000000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar16 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar20 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
               uVar2 << (iVar4 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar4 & 0xff);
      uVar2 = uVar20 >> 8;
      HintPreloadData(iVar23 + uVar2 * 0x100);
      HintPreloadData(iVar21 + uVar2 * 0x40);
      HintPreloadData(iVar23 + uVar2 * 0x100 + 0x40);
      HintPreloadData(iVar21 + uVar2 * 0x40 + 0x20);
      uVar5 = *(uint *)(iVar15 + (uVar14 & 7) * 4);
      *(uint *)(iVar15 + (uVar14 & 7) * 4) = uVar20;
      uVar2 = uVar5 >> 8;
      uVar20 = *(byte *)(iVar21 + uVar2 * 0x40) - 1 & 0x3f;
      if (uVar20 == 0) {
        iVar16 = 0x3f;
      }
      else {
        iVar16 = 0;
      }
      iVar16 = uVar20 + iVar16;
      *(char *)(iVar21 + uVar2 * 0x40) = (char)iVar16;
      *(char *)(iVar21 + uVar2 * 0x40 + iVar16) = (char)uVar5;
      *(uint *)(iVar23 + (iVar16 + uVar2 * 0x40) * 4) = uVar14;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar12 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar12;
    uVar18 = ((uint)lVar1 ^ uVar13) >> (uVar18 & 0xff) | uVar12 << (0x20 - uVar18 & 0xff) |
             uVar12 >> (iVar17 + 0x18U & 0xff);
    uVar12 = uVar18 >> 8;
    HintPreloadData(iVar7 + uVar12 * 0x100);
    HintPreloadData(iVar19 + uVar12 * 0x40);
    HintPreloadData(iVar7 + uVar12 * 0x100 + 0x40);
    HintPreloadData(iVar19 + uVar12 * 0x40 + 0x20);
    uVar12 = *(uint *)(iVar15 + (uVar11 & 7) * 4);
    *(uint *)(iVar15 + (uVar11 & 7) * 4) = uVar18;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar12 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar12;
    uVar12 = ((uint)lVar1 ^ uVar13) >> (uVar18 & 0xff) | uVar12 << (0x20 - uVar18 & 0xff) |
             uVar12 >> (iVar17 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar11;
  }
  uVar18 = uVar12 >> 8;
  uVar13 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar12;
  uVar20 = (uint)*(byte *)(iVar19 + uVar18 * 0x40);
  uVar14 = 0;
  uVar2 = uVar20 & 0x3f;
  iVar7 = iVar7 + uVar18 * 0x100;
  iVar4 = iVar19 + uVar18 * 0x40;
  iVar17 = 0x3c;
  do {
    uVar14 = uVar14 << 4 | uVar13 >> 0x1c;
    bVar24 = iVar17 != 0;
    uVar5 = *(uint *)(iVar4 + iVar17) ^ (uVar12 & 0xff) * 0x1010101;
    uVar13 = (((uVar5 | 0x80808080) + 0xfefefeff | uVar5) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar17 = iVar17 + -4;
  } while (bVar24);
  uVar13 = ~uVar13;
  uVar14 = ~uVar14;
  uVar22 = -uVar2 & 0x3f;
  uVar5 = uVar13 >> uVar2 | uVar14 << (0x20 - uVar2 & 0xff) | uVar14 >> (uVar2 - 0x20 & 0xff) |
          uVar13 << uVar22;
  uVar13 = uVar14 << uVar22 | uVar13 << (uVar22 - 0x20 & 0xff) | uVar13 >> (0x20 - uVar22 & 0xff) |
           uVar14 >> uVar2;
  iVar17 = 0;
  while( true ) {
    uVar6 = (undefined1)uVar12;
    uVar12 = uVar5 | uVar13;
    if (local_154 == 0 || uVar12 == 0) break;
    iVar15 = FUN_01b9b85c(uVar5,uVar13);
    uVar6 = (undefined1)extraout_r3;
    uVar12 = uVar2 + iVar15 & 0x3f;
    iVar15 = iVar17;
    if (uVar12 != 0) {
      uVar12 = *(uint *)(iVar7 + uVar12 * 4);
      if (uVar12 < local_150) break;
      if (uVar12 < uVar10) {
        iVar15 = iVar9;
      }
      else {
        iVar15 = iVar8;
      }
      HintPreloadData(iVar15 + uVar12);
      iVar15 = iVar17 + 1;
      local_12c[iVar17] = uVar12;
      local_154 = local_154 + -1;
    }
    uVar5 = extraout_r2 & extraout_r2 - 1;
    uVar13 = uVar13 & uVar13 - (extraout_r2 == 0);
    uVar12 = extraout_r3;
    iVar17 = iVar15;
  }
  iVar15 = 0;
  uVar13 = uVar20 - 1 & 0x3f;
  if (uVar13 == 0) {
    iVar21 = 0x3f;
  }
  else {
    iVar21 = 0;
  }
  iVar21 = uVar13 + iVar21;
  *(char *)(iVar19 + uVar18 * 0x40) = (char)iVar21;
  uVar18 = 3;
  *(undefined1 *)(iVar4 + iVar21) = uVar6;
  iVar4 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  *(int *)(iVar7 + iVar21 * 4) = iVar4;
  for (; uVar25 = CONCAT44(uVar12,uVar18), iVar17 != iVar15; iVar15 = iVar15 + 1) {
    uVar13 = local_12c[iVar15];
    if (uVar13 < uVar10) {
      uVar12 = iVar9 + uVar13;
      if (*(uint *)(iVar9 + uVar13) == *param_2) {
        uVar25 = FUN_01b9b970(param_2 + 1,uVar12 + 4,param_3,iVar9 + uVar10,iVar8 + uVar10);
        uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),(int)uVar25 + 4);
        goto LAB_01ba9618;
      }
    }
    else {
      uVar12 = iVar8 + uVar13;
      if (*(int *)(uVar12 + (uVar18 - 3)) == *(int *)((int)param_2 + (uVar18 - 3))) {
        uVar25 = FUN_01b9b884(param_2,uVar12,param_3);
LAB_01ba9618:
        uVar12 = (uint)((ulonglong)uVar25 >> 0x20);
        uVar14 = (uint)uVar25;
        if (uVar18 < uVar14) {
          *param_4 = (uVar11 + 3) - uVar13;
          if (param_3 == (int)param_2 + uVar14) break;
          uVar18 = uVar14;
        }
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

