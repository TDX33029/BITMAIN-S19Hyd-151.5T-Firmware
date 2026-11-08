// FUN_01ba9db8 @ 01ba9db8 size=1740 calls_out=4 calls_in=3
// strings: 

void FUN_01ba9db8(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  uint extraout_r2;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint extraout_r3;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar6 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar12 = (int)param_2 - iVar9;
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar12 - uVar13) {
    local_150 = uVar12 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar13;
  }
  iVar19 = -iVar6;
  uVar20 = iVar19 + 0x38;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0x54);
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar15) {
    uVar15 = 4;
  }
  local_154 = 1 << (uVar15 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar15 = *(uint *)(param_1 + 0x1c);
    iVar18 = param_1 + 0x2c;
    if (uVar12 - uVar15 < 0x181) {
      iVar21 = iVar7;
      iVar22 = iVar8;
    }
    else {
      iVar6 = uVar15 - 1;
      if (uVar15 < 0xffffffa0) {
        iVar21 = 0x61;
      }
      else {
        iVar21 = 1;
      }
      for (; uVar15 != iVar21 + iVar6; uVar15 = uVar15 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar15 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbb000000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar15 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar23 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar20 & 0xff) |
                 uVar2 << (0x20 - uVar20 & 0xff) | uVar2 >> (iVar19 + 0x18U & 0xff);
        uVar2 = uVar23 >> 8;
        HintPreloadData(iVar7 + uVar2 * 0x40);
        HintPreloadData(iVar8 + uVar2 * 0x10);
        uVar17 = *(uint *)(iVar18 + (uVar15 & 7) * 4);
        *(uint *)(iVar18 + (uVar15 & 7) * 4) = uVar23;
        uVar2 = uVar17 >> 8;
        uVar23 = *(byte *)(iVar8 + uVar2 * 0x10) - 1 & 0xf;
        if (uVar23 == 0) {
          iVar22 = 0xf;
        }
        else {
          iVar22 = 0;
        }
        iVar22 = uVar23 + iVar22;
        *(char *)(iVar8 + uVar2 * 0x10) = (char)iVar22;
        *(char *)(iVar8 + uVar2 * 0x10 + iVar22) = (char)uVar17;
        *(uint *)(iVar7 + (iVar22 + uVar2 * 0x10) * 4) = uVar15;
      }
      uVar15 = uVar12 - 0x20;
      iVar6 = *(int *)(param_1 + 0x24);
      iVar21 = *(int *)(param_1 + 0x5c);
      iVar22 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar9 + uVar15 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar9 + uVar15)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar15 + uVar2;
      }
      else {
        uVar2 = uVar12 - 0x18;
      }
      for (uVar23 = uVar15; uVar23 < uVar2; uVar23 = uVar23 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar23) * 0xbb000000;
        uVar17 = *(int *)(iVar9 + uVar23 + 4) * -0x45000000 +
                 *(uint *)(iVar9 + uVar23) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar4 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar6 & 0xff) |
                uVar17 << (iVar6 - 0x18U & 0xff) | uVar17 >> (0x18U - iVar6 & 0xff);
        uVar17 = uVar4 >> 8;
        HintPreloadData(iVar21 + uVar17 * 0x40);
        HintPreloadData(iVar22 + uVar17 * 0x10);
        *(uint *)(param_1 + (uVar23 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar15 < uVar12; uVar15 = uVar15 + 1) {
      iVar16 = iVar3 + uVar15;
      uVar2 = *(uint *)(iVar16 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbb000000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar16 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar23 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar6 & 0xff) |
               uVar2 << (iVar6 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar6 & 0xff);
      uVar2 = uVar23 >> 8;
      HintPreloadData(iVar21 + uVar2 * 0x40);
      HintPreloadData(iVar22 + uVar2 * 0x10);
      uVar17 = *(uint *)(iVar18 + (uVar15 & 7) * 4);
      *(uint *)(iVar18 + (uVar15 & 7) * 4) = uVar23;
      uVar2 = uVar17 >> 8;
      uVar23 = *(byte *)(iVar22 + uVar2 * 0x10) - 1 & 0xf;
      if (uVar23 == 0) {
        iVar16 = 0xf;
      }
      else {
        iVar16 = 0;
      }
      iVar16 = uVar23 + iVar16;
      *(char *)(iVar22 + uVar2 * 0x10) = (char)iVar16;
      *(char *)(iVar22 + uVar2 * 0x10 + iVar16) = (char)uVar17;
      *(uint *)(iVar21 + (iVar16 + uVar2 * 0x10) * 4) = uVar15;
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar13 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar13;
    uVar20 = ((uint)lVar1 ^ uVar14) >> (uVar20 & 0xff) | uVar13 << (0x20 - uVar20 & 0xff) |
             uVar13 >> (iVar19 + 0x18U & 0xff);
    uVar13 = uVar20 >> 8;
    HintPreloadData(iVar7 + uVar13 * 0x40);
    HintPreloadData(iVar8 + uVar13 * 0x10);
    uVar13 = *(uint *)(iVar18 + (uVar12 & 7) * 4);
    *(uint *)(iVar18 + (uVar12 & 7) * 4) = uVar20;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar13 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar13;
    uVar13 = ((uint)lVar1 ^ uVar14) >> (uVar20 & 0xff) | uVar13 << (0x20 - uVar20 & 0xff) |
             uVar13 >> (iVar19 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar20 = uVar13 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  iVar7 = iVar7 + uVar20 * 0x40;
  uVar15 = (uint)*(byte *)(iVar8 + uVar20 * 0x10);
  iVar19 = iVar8 + uVar20 * 0x10;
  uVar14 = 0;
  uVar2 = uVar15 & 0xf;
  iVar6 = 0xc;
  do {
    bVar24 = iVar6 != 0;
    uVar23 = *(uint *)(iVar19 + iVar6) ^ (uVar13 & 0xff) * 0x1010101;
    uVar14 = (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
             uVar14 << 4;
    iVar6 = iVar6 + -4;
  } while (bVar24);
  uVar14 = (~uVar14 << (-uVar2 & 0xf) | (~uVar14 & 0xffff) >> uVar2) & 0xffff;
  iVar6 = 0;
  while (uVar5 = (undefined1)uVar13, local_154 != 0 && uVar14 != 0) {
    iVar18 = FUN_01b9b85c(uVar14,0);
    uVar5 = (undefined1)extraout_r2;
    uVar13 = uVar2 + iVar18 & 0xf;
    iVar18 = iVar6;
    if (uVar13 != 0) {
      uVar14 = *(uint *)(iVar7 + uVar13 * 4);
      if (uVar14 < local_150) break;
      if (uVar14 < uVar11) {
        iVar18 = iVar10;
      }
      else {
        iVar18 = iVar9;
      }
      HintPreloadData(iVar18 + uVar14);
      iVar18 = iVar6 + 1;
      local_12c[iVar6] = uVar14;
      local_154 = local_154 + -1;
    }
    uVar13 = extraout_r2;
    iVar6 = iVar18;
    uVar14 = extraout_r3 & extraout_r3 - 1;
  }
  iVar18 = 0;
  uVar13 = uVar15 - 1 & 0xf;
  if (uVar13 == 0) {
    iVar21 = 0xf;
  }
  else {
    iVar21 = 0;
  }
  iVar21 = uVar13 + iVar21;
  *(char *)(iVar8 + uVar20 * 0x10) = (char)iVar21;
  uVar13 = 3;
  *(undefined1 *)(iVar19 + iVar21) = uVar5;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar8 + 1;
  *(int *)(iVar7 + iVar21 * 4) = iVar8;
  for (; uVar25 = CONCAT44(uVar14,uVar13), iVar6 != iVar18; iVar18 = iVar18 + 1) {
    uVar20 = local_12c[iVar18];
    if (uVar20 < uVar11) {
      uVar14 = iVar10 + uVar20;
      if (*(uint *)(iVar10 + uVar20) == *param_2) {
        uVar25 = FUN_01b9b970(param_2 + 1,uVar14 + 4,param_3,iVar10 + uVar11,iVar9 + uVar11);
        uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),(int)uVar25 + 4);
        goto LAB_01baa3f8;
      }
    }
    else {
      uVar14 = iVar9 + uVar20;
      if (*(int *)(uVar14 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) {
        uVar25 = FUN_01b9b884(param_2,uVar14,param_3);
LAB_01baa3f8:
        uVar14 = (uint)((ulonglong)uVar25 >> 0x20);
        uVar15 = (uint)uVar25;
        if (uVar13 < uVar15) {
          *param_4 = (uVar12 + 3) - uVar20;
          if (param_3 == (int)param_2 + uVar15) break;
          uVar13 = uVar15;
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

