// FUN_01bab640 @ 01bab640 size=1712 calls_out=3 calls_in=3
// strings: 

void FUN_01bab640(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
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
  uint extraout_r3;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar16 = *(int *)(param_1 + 0x28);
  iVar15 = -iVar4;
  uVar14 = iVar15 + 0x38;
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
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
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar12 = *(uint *)(param_1 + 0x54);
  uVar13 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar13) {
    uVar13 = 6;
  }
  local_14c = 1 << (uVar13 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar5 = param_1 + 0x2c;
    uVar13 = *(uint *)(param_1 + 0x1c);
    if (uVar10 - uVar13 < 0x181) {
      iVar18 = iVar8;
      iVar21 = iVar16;
    }
    else {
      iVar4 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar18 = 0x61;
      }
      else {
        iVar18 = 1;
      }
      for (; uVar13 != iVar18 + iVar4; uVar13 = uVar13 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar13 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar13 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar17 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar14 & 0xff) |
                 uVar2 << (0x20 - uVar14 & 0xff) | uVar2 >> (iVar15 + 0x18U & 0xff);
        uVar2 = uVar17 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x100);
        HintPreloadData(iVar16 + uVar2 * 0x40);
        HintPreloadData(iVar8 + uVar2 * 0x100 + 0x40);
        HintPreloadData(iVar16 + uVar2 * 0x40 + 0x20);
        uVar6 = *(uint *)(iVar5 + (uVar13 & 7) * 4);
        *(uint *)(iVar5 + (uVar13 & 7) * 4) = uVar17;
        uVar2 = uVar6 >> 8;
        uVar17 = *(byte *)(iVar16 + uVar2 * 0x40) - 1 & 0x3f;
        if (uVar17 == 0) {
          iVar21 = 0x3f;
        }
        else {
          iVar21 = 0;
        }
        iVar21 = uVar17 + iVar21;
        *(char *)(iVar16 + uVar2 * 0x40) = (char)iVar21;
        *(char *)(iVar16 + uVar2 * 0x40 + iVar21) = (char)uVar6;
        *(uint *)(iVar8 + (iVar21 + uVar2 * 0x40) * 4) = uVar13;
      }
      uVar13 = uVar10 - 0x20;
      iVar18 = *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x24);
      iVar21 = *(int *)(param_1 + 0x28);
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
      for (uVar17 = uVar13; uVar17 < uVar2; uVar17 = uVar17 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar17) * 0xbf9b0000;
        uVar6 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar17 + 4) * -0x40650000 + *(uint *)(iVar9 + uVar17) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
                 uVar6 << (iVar4 - 0x18U & 0xff) | uVar6 >> (0x18U - iVar4 & 0xff);
        uVar6 = uVar19 >> 8;
        HintPreloadData(iVar18 + uVar6 * 0x100);
        HintPreloadData(iVar21 + uVar6 * 0x40);
        HintPreloadData(iVar18 + uVar6 * 0x100 + 0x40);
        HintPreloadData(iVar21 + uVar6 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar17 & 7) * 4 + 0x2c) = uVar19;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar10; uVar13 = uVar13 + 1) {
      iVar20 = iVar3 + uVar13;
      uVar2 = *(uint *)(iVar20 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar20 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar17 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
               uVar2 << (iVar4 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar4 & 0xff);
      uVar2 = uVar17 >> 8;
      HintPreloadData(iVar18 + uVar2 * 0x100);
      HintPreloadData(iVar21 + uVar2 * 0x40);
      HintPreloadData(iVar18 + uVar2 * 0x100 + 0x40);
      HintPreloadData(iVar21 + uVar2 * 0x40 + 0x20);
      uVar6 = *(uint *)(iVar5 + (uVar13 & 7) * 4);
      *(uint *)(iVar5 + (uVar13 & 7) * 4) = uVar17;
      uVar2 = uVar6 >> 8;
      uVar17 = *(byte *)(iVar21 + uVar2 * 0x40) - 1 & 0x3f;
      if (uVar17 == 0) {
        iVar20 = 0x3f;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = uVar17 + iVar20;
      *(char *)(iVar21 + uVar2 * 0x40) = (char)iVar20;
      *(char *)(iVar21 + uVar2 * 0x40 + iVar20) = (char)uVar6;
      *(uint *)(iVar18 + (iVar20 + uVar2 * 0x40) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar10;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar12 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar12;
    uVar14 = ((uint)lVar1 ^ uVar11) >> (uVar14 & 0xff) | uVar12 << (0x20 - uVar14 & 0xff) |
             uVar12 >> (iVar15 + 0x18U & 0xff);
    uVar11 = uVar14 >> 8;
    HintPreloadData(iVar8 + uVar11 * 0x100);
    HintPreloadData(iVar16 + uVar11 * 0x40);
    HintPreloadData(iVar8 + uVar11 * 0x100 + 0x40);
    HintPreloadData(iVar16 + uVar11 * 0x40 + 0x20);
    uVar11 = *(uint *)(iVar5 + (uVar10 & 7) * 4);
    *(uint *)(iVar5 + (uVar10 & 7) * 4) = uVar14;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
    uVar12 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar12;
    uVar11 = ((uint)lVar1 ^ uVar11) >> (uVar14 & 0xff) | uVar12 << (0x20 - uVar14 & 0xff) |
             uVar12 >> (iVar15 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar10;
  }
  uVar14 = uVar11 >> 8;
  uVar13 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  uVar17 = (uint)*(byte *)(iVar16 + uVar14 * 0x40);
  uVar12 = 0;
  uVar2 = uVar17 & 0x3f;
  iVar8 = iVar8 + uVar14 * 0x100;
  iVar4 = iVar16 + uVar14 * 0x40;
  iVar15 = 0x3c;
  do {
    uVar12 = uVar12 << 4 | uVar13 >> 0x1c;
    bVar22 = iVar15 != 0;
    uVar6 = *(uint *)(iVar4 + iVar15) ^ (uVar11 & 0xff) * 0x1010101;
    uVar13 = (((uVar6 | 0x80808080) + 0xfefefeff | uVar6) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar15 = iVar15 + -4;
  } while (bVar22);
  uVar13 = ~uVar13;
  uVar12 = ~uVar12;
  uVar19 = -uVar2 & 0x3f;
  uVar6 = uVar13 >> uVar2 | uVar12 << (0x20 - uVar2 & 0xff) | uVar12 >> (uVar2 - 0x20 & 0xff) |
          uVar13 << uVar19;
  uVar13 = uVar12 << uVar19 | uVar13 << (uVar19 - 0x20 & 0xff) | uVar13 >> (0x20 - uVar19 & 0xff) |
           uVar12 >> uVar2;
  iVar15 = 0;
  while( true ) {
    uVar7 = (undefined1)uVar11;
    uVar11 = uVar6 | uVar13;
    if (local_14c == 0 || uVar11 == 0) break;
    iVar5 = FUN_01b9b85c(uVar6,uVar13);
    uVar7 = (undefined1)extraout_r3;
    uVar11 = uVar2 + iVar5 & 0x3f;
    iVar5 = iVar15;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar8 + uVar11 * 4);
      if (uVar11 < local_148) break;
      HintPreloadData(iVar9 + uVar11);
      iVar5 = iVar15 + 1;
      local_12c[iVar15] = uVar11;
      local_14c = local_14c + -1;
    }
    uVar6 = extraout_r2 & extraout_r2 - 1;
    uVar13 = uVar13 & uVar13 - (extraout_r2 == 0);
    uVar11 = extraout_r3;
    iVar15 = iVar5;
  }
  iVar5 = 0;
  uVar13 = uVar17 - 1 & 0x3f;
  if (uVar13 == 0) {
    iVar18 = 0x3f;
  }
  else {
    iVar18 = 0;
  }
  iVar18 = uVar13 + iVar18;
  *(char *)(iVar16 + uVar14 * 0x40) = (char)iVar18;
  uVar14 = 3;
  *(undefined1 *)(iVar4 + iVar18) = uVar7;
  iVar4 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  *(int *)(iVar8 + iVar18 * 4) = iVar4;
  for (; uVar23 = CONCAT44(uVar11,uVar14), iVar15 != iVar5; iVar5 = iVar5 + 1) {
    uVar13 = local_12c[iVar5];
    uVar11 = iVar9 + uVar13;
    if (*(int *)(uVar11 + (uVar14 - 3)) == *(int *)((int)param_2 + (uVar14 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar11,param_3);
      uVar11 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar12 = (uint)uVar23;
      if (uVar14 < uVar12) {
        *param_4 = (uVar10 + 3) - uVar13;
        if (param_3 == (int)param_2 + uVar12) break;
        uVar14 = uVar12;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

