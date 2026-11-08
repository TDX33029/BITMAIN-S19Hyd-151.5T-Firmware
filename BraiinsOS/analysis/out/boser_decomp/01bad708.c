// FUN_01bad708 @ 01bad708 size=1600 calls_out=3 calls_in=3
// strings: 

void FUN_01bad708(int param_1,uint *param_2,int param_3,int *param_4)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_r3;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar6 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar8 = *(int *)(param_1 + 0x28);
  iVar9 = *(int *)(param_1 + 4);
  uVar10 = (int)param_2 - iVar9;
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar10 - uVar11) {
    local_148 = uVar10 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar11;
  }
  iVar17 = -iVar6;
  uVar18 = iVar17 + 0x38;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0x50);
  uVar11 = *(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar13) {
    uVar13 = 4;
  }
  local_14c = 1 << (uVar13 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar16 = param_1 + 0x2c;
    if (uVar10 - uVar13 < 0x181) {
      iVar19 = iVar7;
      iVar20 = iVar8;
    }
    else {
      iVar6 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar19 = 0x61;
      }
      else {
        iVar19 = 1;
      }
      for (; uVar13 != iVar19 + iVar6; uVar13 = uVar13 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar13 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbb000000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar13 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar21 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar18 & 0xff) |
                 uVar2 << (0x20 - uVar18 & 0xff) | uVar2 >> (iVar17 + 0x18U & 0xff);
        uVar2 = uVar21 >> 8;
        HintPreloadData(iVar7 + uVar2 * 0x40);
        HintPreloadData(iVar8 + uVar2 * 0x10);
        uVar15 = *(uint *)(iVar16 + (uVar13 & 7) * 4);
        *(uint *)(iVar16 + (uVar13 & 7) * 4) = uVar21;
        uVar2 = uVar15 >> 8;
        uVar21 = *(byte *)(iVar8 + uVar2 * 0x10) - 1 & 0xf;
        if (uVar21 == 0) {
          iVar20 = 0xf;
        }
        else {
          iVar20 = 0;
        }
        iVar20 = uVar21 + iVar20;
        *(char *)(iVar8 + uVar2 * 0x10) = (char)iVar20;
        *(char *)(iVar8 + uVar2 * 0x10 + iVar20) = (char)uVar15;
        *(uint *)(iVar7 + (iVar20 + uVar2 * 0x10) * 4) = uVar13;
      }
      uVar13 = uVar10 - 0x20;
      iVar6 = *(int *)(param_1 + 0x24);
      iVar19 = *(int *)(param_1 + 0x5c);
      iVar20 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar9 + uVar13 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar9 + uVar13)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar13 + uVar2;
      }
      else {
        uVar2 = uVar10 - 0x18;
      }
      for (uVar21 = uVar13; uVar21 < uVar2; uVar21 = uVar21 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar21) * 0xbb000000;
        uVar15 = *(int *)(iVar9 + uVar21 + 4) * -0x45000000 +
                 *(uint *)(iVar9 + uVar21) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar4 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar6 & 0xff) |
                uVar15 << (iVar6 - 0x18U & 0xff) | uVar15 >> (0x18U - iVar6 & 0xff);
        uVar15 = uVar4 >> 8;
        HintPreloadData(iVar19 + uVar15 * 0x40);
        HintPreloadData(iVar20 + uVar15 * 0x10);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar10; uVar13 = uVar13 + 1) {
      iVar14 = iVar3 + uVar13;
      uVar2 = *(uint *)(iVar14 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbb000000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar14 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar21 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar6 & 0xff) |
               uVar2 << (iVar6 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar6 & 0xff);
      uVar2 = uVar21 >> 8;
      HintPreloadData(iVar19 + uVar2 * 0x40);
      HintPreloadData(iVar20 + uVar2 * 0x10);
      uVar15 = *(uint *)(iVar16 + (uVar13 & 7) * 4);
      *(uint *)(iVar16 + (uVar13 & 7) * 4) = uVar21;
      uVar2 = uVar15 >> 8;
      uVar21 = *(byte *)(iVar20 + uVar2 * 0x10) - 1 & 0xf;
      if (uVar21 == 0) {
        iVar14 = 0xf;
      }
      else {
        iVar14 = 0;
      }
      iVar14 = uVar21 + iVar14;
      *(char *)(iVar20 + uVar2 * 0x10) = (char)iVar14;
      *(char *)(iVar20 + uVar2 * 0x10 + iVar14) = (char)uVar15;
      *(uint *)(iVar19 + (iVar14 + uVar2 * 0x10) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar10;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar11 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar11;
    uVar18 = ((uint)lVar1 ^ uVar12) >> (uVar18 & 0xff) | uVar11 << (0x20 - uVar18 & 0xff) |
             uVar11 >> (iVar17 + 0x18U & 0xff);
    uVar11 = uVar18 >> 8;
    HintPreloadData(iVar7 + uVar11 * 0x40);
    HintPreloadData(iVar8 + uVar11 * 0x10);
    uVar11 = *(uint *)(iVar16 + (uVar10 & 7) * 4);
    *(uint *)(iVar16 + (uVar10 & 7) * 4) = uVar18;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar11 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar11;
    uVar11 = ((uint)lVar1 ^ uVar12) >> (uVar18 & 0xff) | uVar11 << (0x20 - uVar18 & 0xff) |
             uVar11 >> (iVar17 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar10;
  }
  uVar18 = uVar11 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  iVar7 = iVar7 + uVar18 * 0x40;
  uVar13 = (uint)*(byte *)(iVar8 + uVar18 * 0x10);
  iVar17 = iVar8 + uVar18 * 0x10;
  uVar12 = 0;
  uVar2 = uVar13 & 0xf;
  iVar6 = 0xc;
  do {
    bVar22 = iVar6 != 0;
    uVar21 = *(uint *)(iVar17 + iVar6) ^ (uVar11 & 0xff) * 0x1010101;
    uVar12 = (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
             uVar12 << 4;
    iVar6 = iVar6 + -4;
  } while (bVar22);
  uVar12 = (~uVar12 << (-uVar2 & 0xf) | (~uVar12 & 0xffff) >> uVar2) & 0xffff;
  iVar6 = 0;
  while (uVar5 = (undefined1)uVar11, local_14c != 0 && uVar12 != 0) {
    iVar16 = FUN_01b9b85c(uVar12,0);
    uVar5 = (undefined1)extraout_r2;
    uVar11 = uVar2 + iVar16 & 0xf;
    iVar16 = iVar6;
    if (uVar11 != 0) {
      uVar12 = *(uint *)(iVar7 + uVar11 * 4);
      if (uVar12 < local_148) break;
      HintPreloadData(iVar9 + uVar12);
      iVar16 = iVar6 + 1;
      local_12c[iVar6] = uVar12;
      local_14c = local_14c + -1;
    }
    uVar11 = extraout_r2;
    iVar6 = iVar16;
    uVar12 = extraout_r3 & extraout_r3 - 1;
  }
  uVar11 = uVar13 - 1 & 0xf;
  if (uVar11 == 0) {
    iVar16 = 0xf;
  }
  else {
    iVar16 = 0;
  }
  iVar16 = uVar11 + iVar16;
  *(char *)(iVar8 + uVar18 * 0x10) = (char)iVar16;
  *(undefined1 *)(iVar17 + iVar16) = uVar5;
  iVar8 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar8 + 1;
  *(int *)(iVar7 + iVar16 * 4) = iVar8;
  uVar11 = 3;
  for (iVar8 = 0; uVar23 = CONCAT44(uVar12,uVar11), iVar6 != iVar8; iVar8 = iVar8 + 1) {
    uVar18 = local_12c[iVar8];
    uVar12 = iVar9 + uVar18;
    if (*(int *)(uVar12 + (uVar11 - 3)) == *(int *)((int)param_2 + (uVar11 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar12,param_3);
      uVar12 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar13 = (uint)uVar23;
      if (uVar11 < uVar13) {
        *param_4 = (uVar10 + 3) - uVar18;
        if (param_3 == (int)param_2 + uVar13) break;
        uVar11 = uVar13;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

