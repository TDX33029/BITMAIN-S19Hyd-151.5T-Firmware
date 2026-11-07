// FUN_01bac370 @ 01bac370 size=1596 calls_out=3 calls_in=3
// strings: 

void FUN_01bac370(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint extraout_r2;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint extraout_r3;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_150;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 4);
  uVar11 = (int)param_2 - iVar10;
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar13 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar11 - uVar12 <= uVar13) {
    local_14c = uVar12;
  }
  iVar17 = -iVar5;
  uVar20 = iVar17 + 0x38;
  if (uVar13 < uVar11 - uVar12) {
    local_14c = uVar11 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar12;
  }
  uVar13 = *(uint *)(param_1 + 0x50);
  uVar14 = *(uint *)(param_1 + 0x54);
  uVar12 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar12) {
    uVar12 = 4;
  }
  local_150 = 1 << (uVar12 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar7 = param_1 + 0x2c;
    uVar12 = *(uint *)(param_1 + 0x1c);
    if (uVar11 - uVar12 < 0x181) {
      iVar15 = iVar9;
      iVar18 = iVar8;
    }
    else {
      iVar5 = uVar12 - 1;
      if (uVar12 < 0xffffffa0) {
        iVar15 = 0x61;
      }
      else {
        iVar15 = 1;
      }
      for (; uVar12 != iVar15 + iVar5; uVar12 = uVar12 + 1) {
        uVar2 = *(uint *)(iVar10 + uVar12 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar10 + uVar12 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar21 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar20 & 0xff) |
                 uVar2 << (0x20 - uVar20 & 0xff) | uVar2 >> (iVar17 + 0x18U & 0xff);
        uVar2 = uVar21 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x40);
        HintPreloadData(iVar9 + uVar2 * 0x10);
        uVar16 = *(uint *)(iVar7 + (uVar12 & 7) * 4);
        *(uint *)(iVar7 + (uVar12 & 7) * 4) = uVar21;
        uVar2 = uVar16 >> 8;
        uVar21 = *(byte *)(iVar9 + uVar2 * 0x10) - 1 & 0xf;
        if (uVar21 == 0) {
          iVar18 = 0xf;
        }
        else {
          iVar18 = 0;
        }
        iVar18 = uVar21 + iVar18;
        *(char *)(iVar9 + uVar2 * 0x10) = (char)iVar18;
        *(char *)(iVar9 + uVar2 * 0x10 + iVar18) = (char)uVar16;
        *(uint *)(iVar8 + (iVar18 + uVar2 * 0x10) * 4) = uVar12;
      }
      uVar12 = uVar11 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar18 = *(int *)(param_1 + 0x5c);
      iVar15 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar10 + uVar12 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar10 + uVar12)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar12 + uVar2;
      }
      else {
        uVar2 = uVar11 - 0x18;
      }
      for (uVar21 = uVar12; uVar21 < uVar2; uVar21 = uVar21 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar21) * 0xbf9b0000;
        uVar16 = *(int *)(iVar10 + uVar21 + 4) * -0x40650000 +
                 *(uint *)(iVar10 + uVar21) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar4 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar5 & 0xff) |
                uVar16 << (iVar5 - 0x18U & 0xff) | uVar16 >> (0x18U - iVar5 & 0xff);
        uVar16 = uVar4 >> 8;
        HintPreloadData(iVar18 + uVar16 * 0x40);
        HintPreloadData(iVar15 + uVar16 * 0x10);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar12 < uVar11; uVar12 = uVar12 + 1) {
      iVar19 = iVar3 + uVar12;
      uVar2 = *(uint *)(iVar19 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar19 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar21 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar5 & 0xff) |
               uVar2 << (iVar5 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar5 & 0xff);
      uVar2 = uVar21 >> 8;
      HintPreloadData(iVar18 + uVar2 * 0x40);
      HintPreloadData(iVar15 + uVar2 * 0x10);
      uVar16 = *(uint *)(iVar7 + (uVar12 & 7) * 4);
      *(uint *)(iVar7 + (uVar12 & 7) * 4) = uVar21;
      uVar2 = uVar16 >> 8;
      uVar21 = *(byte *)(iVar15 + uVar2 * 0x10) - 1 & 0xf;
      if (uVar21 == 0) {
        iVar19 = 0xf;
      }
      else {
        iVar19 = 0;
      }
      iVar19 = uVar21 + iVar19;
      *(char *)(iVar15 + uVar2 * 0x10) = (char)iVar19;
      *(char *)(iVar15 + uVar2 * 0x10 + iVar19) = (char)uVar16;
      *(uint *)(iVar18 + (iVar19 + uVar2 * 0x10) * 4) = uVar12;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar14 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar14;
    uVar12 = ((uint)lVar1 ^ uVar13) >> (uVar20 & 0xff) | uVar14 << (0x20 - uVar20 & 0xff) |
             uVar14 >> (iVar17 + 0x18U & 0xff);
    uVar13 = uVar12 >> 8;
    HintPreloadData(iVar8 + uVar13 * 0x40);
    HintPreloadData(iVar9 + uVar13 * 0x10);
    uVar13 = *(uint *)(iVar7 + (uVar11 & 7) * 4);
    *(uint *)(iVar7 + (uVar11 & 7) * 4) = uVar12;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
    uVar14 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar14;
    uVar13 = ((uint)lVar1 ^ uVar13) >> (uVar20 & 0xff) | uVar14 << (0x20 - uVar20 & 0xff) |
             uVar14 >> (iVar17 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar11;
  }
  uVar12 = uVar13 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  iVar8 = iVar8 + uVar12 * 0x40;
  uVar14 = (uint)*(byte *)(iVar9 + uVar12 * 0x10);
  iVar17 = iVar9 + uVar12 * 0x10;
  uVar20 = 0;
  uVar2 = uVar14 & 0xf;
  iVar5 = 0xc;
  do {
    bVar22 = iVar5 != 0;
    uVar21 = *(uint *)(iVar17 + iVar5) ^ (uVar13 & 0xff) * 0x1010101;
    uVar20 = (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
             uVar20 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar22);
  uVar20 = (~uVar20 << (-uVar2 & 0xf) | (~uVar20 & 0xffff) >> uVar2) & 0xffff;
  iVar5 = 0;
  while (uVar6 = (undefined1)uVar13, local_150 != 0 && uVar20 != 0) {
    iVar7 = FUN_01b9b85c(uVar20,0);
    uVar6 = (undefined1)extraout_r2;
    uVar13 = uVar2 + iVar7 & 0xf;
    iVar7 = iVar5;
    if (uVar13 != 0) {
      uVar20 = *(uint *)(iVar8 + uVar13 * 4);
      if (uVar20 < local_14c) break;
      HintPreloadData(iVar10 + uVar20);
      iVar7 = iVar5 + 1;
      local_12c[iVar5] = uVar20;
      local_150 = local_150 + -1;
    }
    uVar13 = extraout_r2;
    iVar5 = iVar7;
    uVar20 = extraout_r3 & extraout_r3 - 1;
  }
  uVar13 = uVar14 - 1 & 0xf;
  if (uVar13 == 0) {
    iVar7 = 0xf;
  }
  else {
    iVar7 = 0;
  }
  iVar7 = uVar13 + iVar7;
  *(char *)(iVar9 + uVar12 * 0x10) = (char)iVar7;
  *(undefined1 *)(iVar17 + iVar7) = uVar6;
  iVar9 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar9 + 1;
  *(int *)(iVar8 + iVar7 * 4) = iVar9;
  uVar13 = 3;
  for (iVar9 = 0; uVar23 = CONCAT44(uVar20,uVar13), iVar5 != iVar9; iVar9 = iVar9 + 1) {
    uVar12 = local_12c[iVar9];
    uVar20 = iVar10 + uVar12;
    if (*(int *)(uVar20 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar20,param_3);
      uVar20 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar14 = (uint)uVar23;
      if (uVar13 < uVar14) {
        *param_4 = (uVar11 + 3) - uVar12;
        if (param_3 == (int)param_2 + uVar14) break;
        uVar13 = uVar14;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

