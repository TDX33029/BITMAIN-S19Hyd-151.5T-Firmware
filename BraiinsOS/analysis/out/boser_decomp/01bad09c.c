// FUN_01bad09c @ 01bad09c size=1620 calls_out=3 calls_in=3
// strings: 

void FUN_01bad09c(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint extraout_r2;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint extraout_r3;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar16 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 4);
  uVar17 = (int)param_2 - iVar9;
  uVar10 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar17 - uVar10) {
    local_148 = uVar17 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar10;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar10;
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar10 = *(uint *)(param_1 + 0x54);
  uVar12 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar12) {
    uVar12 = 5;
  }
  local_14c = 1 << (uVar12 & 0xff);
  iVar6 = -iVar5;
  uVar12 = iVar6 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar13 = param_1 + 0x2c;
    uVar14 = *(uint *)(param_1 + 0x1c);
    if (uVar17 - uVar14 < 0x181) {
      iVar18 = iVar8;
      iVar19 = iVar16;
    }
    else {
      iVar5 = uVar14 - 1;
      if (uVar14 < 0xffffffa0) {
        iVar18 = 0x61;
      }
      else {
        iVar18 = 1;
      }
      for (; uVar14 != iVar18 + iVar5; uVar14 = uVar14 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar14 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbb000000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar14 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar12 & 0xff) |
                 uVar2 << (0x20 - uVar12 & 0xff) | uVar2 >> (iVar6 + 0x18U & 0xff);
        uVar2 = uVar20 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x80);
        HintPreloadData(iVar16 + uVar2 * 0x20);
        HintPreloadData(iVar8 + uVar2 * 0x80 + 0x40);
        uVar21 = *(uint *)(iVar13 + (uVar14 & 7) * 4);
        *(uint *)(iVar13 + (uVar14 & 7) * 4) = uVar20;
        uVar2 = uVar21 >> 8;
        uVar20 = *(byte *)(iVar16 + uVar2 * 0x20) - 1 & 0x1f;
        if (uVar20 == 0) {
          iVar19 = 0x1f;
        }
        else {
          iVar19 = 0;
        }
        iVar19 = uVar20 + iVar19;
        *(char *)(iVar16 + uVar2 * 0x20) = (char)iVar19;
        *(char *)(iVar16 + uVar2 * 0x20 + iVar19) = (char)uVar21;
        *(uint *)(iVar8 + (iVar19 + uVar2 * 0x20) * 4) = uVar14;
      }
      uVar14 = uVar17 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar18 = *(int *)(param_1 + 0x5c);
      iVar19 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar9 + uVar14 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar9 + uVar14)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar14 + uVar2;
      }
      else {
        uVar2 = uVar17 - 0x18;
      }
      for (uVar20 = uVar14; uVar20 < uVar2; uVar20 = uVar20 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar20) * 0xbb000000;
        uVar21 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar9 + uVar20 + 4) * -0x45000000 +
                 *(uint *)(iVar9 + uVar20) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar21 << (iVar5 - 0x18U & 0xff) | uVar21 >> (0x18U - iVar5 & 0xff);
        uVar21 = uVar4 >> 8;
        HintPreloadData(iVar18 + uVar21 * 0x80);
        HintPreloadData(iVar19 + uVar21 * 0x20);
        HintPreloadData(iVar18 + uVar21 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar20 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
      iVar15 = iVar3 + uVar14;
      uVar2 = *(uint *)(iVar15 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbb000000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar15 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar21 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar2 << (iVar5 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar5 & 0xff);
      uVar2 = uVar21 >> 8;
      HintPreloadData(iVar18 + uVar2 * 0x80);
      HintPreloadData(iVar19 + uVar2 * 0x20);
      HintPreloadData(iVar18 + uVar2 * 0x80 + 0x40);
      uVar20 = *(uint *)(iVar13 + (uVar14 & 7) * 4);
      *(uint *)(iVar13 + (uVar14 & 7) * 4) = uVar21;
      uVar2 = uVar20 >> 8;
      uVar21 = *(byte *)(iVar19 + uVar2 * 0x20) - 1 & 0x1f;
      if (uVar21 == 0) {
        iVar15 = 0x1f;
      }
      else {
        iVar15 = 0;
      }
      iVar15 = uVar21 + iVar15;
      *(char *)(iVar19 + uVar2 * 0x20) = (char)iVar15;
      *(char *)(iVar19 + uVar2 * 0x20 + iVar15) = (char)uVar20;
      *(uint *)(iVar18 + (iVar15 + uVar2 * 0x20) * 4) = uVar14;
    }
    uVar2 = param_2[2];
    uVar14 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar17;
    lVar1 = (ulonglong)uVar2 * 0xbb000000;
    uVar10 = uVar14 * -0x45000000 + uVar2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar10;
    uVar11 = ((uint)lVar1 ^ uVar11) >> (uVar12 & 0xff) | uVar10 << (0x20 - uVar12 & 0xff) |
             uVar10 >> (iVar6 + 0x18U & 0xff);
    uVar10 = uVar11 >> 8;
    HintPreloadData(iVar8 + uVar10 * 0x80);
    HintPreloadData(iVar16 + uVar10 * 0x20);
    HintPreloadData(iVar8 + uVar10 * 0x80 + 0x40);
    uVar10 = *(uint *)(iVar13 + (uVar17 & 7) * 4);
    *(uint *)(iVar13 + (uVar17 & 7) * 4) = uVar11;
  }
  else {
    uVar2 = *param_2;
    uVar14 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar17;
    lVar1 = (ulonglong)uVar2 * 0xbb000000;
    uVar10 = uVar14 * -0x45000000 + uVar2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar10;
    uVar10 = ((uint)lVar1 ^ uVar11) >> (uVar12 & 0xff) | uVar10 << (0x20 - uVar12 & 0xff) |
             uVar10 >> (iVar6 + 0x18U & 0xff);
  }
  uVar11 = uVar10 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar10;
  uVar2 = (uint)*(byte *)(iVar16 + uVar11 * 0x20);
  uVar12 = 0;
  iVar8 = iVar8 + uVar11 * 0x80;
  iVar6 = iVar16 + uVar11 * 0x20;
  uVar14 = uVar2 & 0x1f;
  iVar5 = 0x1c;
  do {
    bVar22 = iVar5 != 0;
    uVar20 = *(uint *)(iVar6 + iVar5) ^ (uVar10 & 0xff) * 0x1010101;
    uVar12 = (((uVar20 | 0x80808080) + 0xfefefeff | uVar20) & 0x80808080) * 0x204081 >> 0x1c |
             uVar12 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar22);
  uVar12 = ~uVar12 >> uVar14 | ~uVar12 << 0x20 - uVar14;
  iVar5 = 0;
  while (uVar7 = (undefined1)uVar10, local_14c != 0 && uVar12 != 0) {
    iVar13 = FUN_01b9b85c(uVar12,0);
    uVar7 = (undefined1)extraout_r3;
    uVar10 = uVar14 + iVar13 & 0x1f;
    iVar13 = iVar5;
    if (uVar10 != 0) {
      uVar12 = *(uint *)(iVar8 + uVar10 * 4);
      if (uVar12 < local_148) break;
      HintPreloadData(iVar9 + uVar12);
      iVar13 = iVar5 + 1;
      local_12c[iVar5] = uVar12;
      local_14c = local_14c + -1;
    }
    uVar10 = extraout_r3;
    iVar5 = iVar13;
    uVar12 = extraout_r2 & extraout_r2 - 1;
  }
  uVar10 = uVar2 - 1 & 0x1f;
  if (uVar10 == 0) {
    iVar13 = 0x1f;
  }
  else {
    iVar13 = 0;
  }
  iVar13 = uVar10 + iVar13;
  *(char *)(iVar16 + uVar11 * 0x20) = (char)iVar13;
  *(undefined1 *)(iVar6 + iVar13) = uVar7;
  iVar16 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar16 + 1;
  *(int *)(iVar8 + iVar13 * 4) = iVar16;
  uVar10 = 3;
  for (iVar8 = 0; uVar23 = CONCAT44(uVar12,uVar10), iVar5 != iVar8; iVar8 = iVar8 + 1) {
    uVar11 = local_12c[iVar8];
    uVar12 = iVar9 + uVar11;
    if (*(int *)(uVar12 + (uVar10 - 3)) == *(int *)((int)param_2 + (uVar10 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar12,param_3);
      uVar12 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar14 = (uint)uVar23;
      if (uVar10 < uVar14) {
        *param_4 = (uVar17 + 3) - uVar11;
        if (param_3 == (int)param_2 + uVar14) break;
        uVar10 = uVar14;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

