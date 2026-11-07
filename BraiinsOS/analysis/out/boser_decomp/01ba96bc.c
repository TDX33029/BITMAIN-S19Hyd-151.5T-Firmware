// FUN_01ba96bc @ 01ba96bc size=1764 calls_out=4 calls_in=3
// strings: 

void FUN_01ba96bc(int param_1,uint *param_2,int param_3,int *param_4)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint extraout_r3;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar19 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
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
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar13 = *(uint *)(param_1 + 0x54);
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar15) {
    uVar15 = 5;
  }
  local_154 = 1 << (uVar15 & 0xff);
  iVar6 = -iVar5;
  uVar15 = iVar6 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar16 = param_1 + 0x2c;
    uVar17 = *(uint *)(param_1 + 0x1c);
    if (uVar12 - uVar17 < 0x181) {
      iVar20 = iVar8;
      iVar21 = iVar19;
    }
    else {
      iVar5 = uVar17 - 1;
      if (uVar17 < 0xffffffa0) {
        iVar20 = 0x61;
      }
      else {
        iVar20 = 1;
      }
      for (; uVar17 != iVar20 + iVar5; uVar17 = uVar17 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar17 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbb000000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar17 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar22 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar15 & 0xff) |
                 uVar2 << (0x20 - uVar15 & 0xff) | uVar2 >> (iVar6 + 0x18U & 0xff);
        uVar2 = uVar22 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x80);
        HintPreloadData(iVar19 + uVar2 * 0x20);
        HintPreloadData(iVar8 + uVar2 * 0x80 + 0x40);
        uVar23 = *(uint *)(iVar16 + (uVar17 & 7) * 4);
        *(uint *)(iVar16 + (uVar17 & 7) * 4) = uVar22;
        uVar2 = uVar23 >> 8;
        uVar22 = *(byte *)(iVar19 + uVar2 * 0x20) - 1 & 0x1f;
        if (uVar22 == 0) {
          iVar21 = 0x1f;
        }
        else {
          iVar21 = 0;
        }
        iVar21 = uVar22 + iVar21;
        *(char *)(iVar19 + uVar2 * 0x20) = (char)iVar21;
        *(char *)(iVar19 + uVar2 * 0x20 + iVar21) = (char)uVar23;
        *(uint *)(iVar8 + (iVar21 + uVar2 * 0x20) * 4) = uVar17;
      }
      uVar17 = uVar12 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar20 = *(int *)(param_1 + 0x5c);
      iVar21 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar9 + uVar17 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar9 + uVar17)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar17 + uVar2;
      }
      else {
        uVar2 = uVar12 - 0x18;
      }
      for (uVar22 = uVar17; uVar22 < uVar2; uVar22 = uVar22 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar22) * 0xbb000000;
        uVar23 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar9 + uVar22 + 4) * -0x45000000 +
                 *(uint *)(iVar9 + uVar22) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar23 << (iVar5 - 0x18U & 0xff) | uVar23 >> (0x18U - iVar5 & 0xff);
        uVar23 = uVar4 >> 8;
        HintPreloadData(iVar20 + uVar23 * 0x80);
        HintPreloadData(iVar21 + uVar23 * 0x20);
        HintPreloadData(iVar20 + uVar23 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar22 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar17 < uVar12; uVar17 = uVar17 + 1) {
      iVar18 = iVar3 + uVar17;
      uVar2 = *(uint *)(iVar18 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbb000000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar18 + 0xc) * -0x45000000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar23 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar2 << (iVar5 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar5 & 0xff);
      uVar2 = uVar23 >> 8;
      HintPreloadData(iVar20 + uVar2 * 0x80);
      HintPreloadData(iVar21 + uVar2 * 0x20);
      HintPreloadData(iVar20 + uVar2 * 0x80 + 0x40);
      uVar22 = *(uint *)(iVar16 + (uVar17 & 7) * 4);
      *(uint *)(iVar16 + (uVar17 & 7) * 4) = uVar23;
      uVar2 = uVar22 >> 8;
      uVar23 = *(byte *)(iVar21 + uVar2 * 0x20) - 1 & 0x1f;
      if (uVar23 == 0) {
        iVar18 = 0x1f;
      }
      else {
        iVar18 = 0;
      }
      iVar18 = uVar23 + iVar18;
      *(char *)(iVar21 + uVar2 * 0x20) = (char)iVar18;
      *(char *)(iVar21 + uVar2 * 0x20 + iVar18) = (char)uVar22;
      *(uint *)(iVar20 + (iVar18 + uVar2 * 0x20) * 4) = uVar17;
    }
    uVar2 = param_2[2];
    uVar17 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)uVar2 * 0xbb000000;
    uVar13 = uVar17 * -0x45000000 + uVar2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar13;
    uVar14 = ((uint)lVar1 ^ uVar14) >> (uVar15 & 0xff) | uVar13 << (0x20 - uVar15 & 0xff) |
             uVar13 >> (iVar6 + 0x18U & 0xff);
    uVar13 = uVar14 >> 8;
    HintPreloadData(iVar8 + uVar13 * 0x80);
    HintPreloadData(iVar19 + uVar13 * 0x20);
    HintPreloadData(iVar8 + uVar13 * 0x80 + 0x40);
    uVar13 = *(uint *)(iVar16 + (uVar12 & 7) * 4);
    *(uint *)(iVar16 + (uVar12 & 7) * 4) = uVar14;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbb000000;
    uVar13 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar13;
    uVar13 = ((uint)lVar1 ^ uVar14) >> (uVar15 & 0xff) | uVar13 << (0x20 - uVar15 & 0xff) |
             uVar13 >> (iVar6 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar14 = uVar13 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  uVar2 = (uint)*(byte *)(iVar19 + uVar14 * 0x20);
  uVar15 = 0;
  iVar8 = iVar8 + uVar14 * 0x80;
  iVar6 = iVar19 + uVar14 * 0x20;
  uVar17 = uVar2 & 0x1f;
  iVar5 = 0x1c;
  do {
    bVar24 = iVar5 != 0;
    uVar22 = *(uint *)(iVar6 + iVar5) ^ (uVar13 & 0xff) * 0x1010101;
    uVar15 = (((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
             uVar15 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar24);
  uVar15 = ~uVar15 >> uVar17 | ~uVar15 << 0x20 - uVar17;
  iVar5 = 0;
  while (uVar7 = (undefined1)uVar13, local_154 != 0 && uVar15 != 0) {
    iVar16 = FUN_01b9b85c(uVar15,0);
    uVar7 = (undefined1)extraout_r3;
    uVar13 = uVar17 + iVar16 & 0x1f;
    iVar16 = iVar5;
    if (uVar13 != 0) {
      uVar15 = *(uint *)(iVar8 + uVar13 * 4);
      if (uVar15 < local_150) break;
      if (uVar15 < uVar11) {
        iVar16 = iVar10;
      }
      else {
        iVar16 = iVar9;
      }
      HintPreloadData(iVar16 + uVar15);
      iVar16 = iVar5 + 1;
      local_12c[iVar5] = uVar15;
      local_154 = local_154 + -1;
    }
    uVar13 = extraout_r3;
    iVar5 = iVar16;
    uVar15 = extraout_r2 & extraout_r2 - 1;
  }
  uVar13 = uVar2 - 1 & 0x1f;
  if (uVar13 == 0) {
    iVar16 = 0x1f;
  }
  else {
    iVar16 = 0;
  }
  iVar16 = uVar13 + iVar16;
  *(char *)(iVar19 + uVar14 * 0x20) = (char)iVar16;
  uVar13 = 3;
  *(undefined1 *)(iVar6 + iVar16) = uVar7;
  iVar19 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar19 + 1;
  *(int *)(iVar8 + iVar16 * 4) = iVar19;
  for (iVar8 = 0; uVar25 = CONCAT44(uVar15,uVar13), iVar5 != iVar8; iVar8 = iVar8 + 1) {
    uVar14 = local_12c[iVar8];
    if (uVar14 < uVar11) {
      uVar15 = iVar10 + uVar14;
      if (*(uint *)(iVar10 + uVar14) == *param_2) {
        uVar25 = FUN_01b9b970(param_2 + 1,uVar15 + 4,param_3,iVar10 + uVar11,iVar9 + uVar11);
        uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),(int)uVar25 + 4);
        goto LAB_01ba9d1c;
      }
    }
    else {
      uVar15 = iVar9 + uVar14;
      if (*(int *)(uVar15 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) {
        uVar25 = FUN_01b9b884(param_2,uVar15,param_3);
LAB_01ba9d1c:
        uVar15 = (uint)((ulonglong)uVar25 >> 0x20);
        uVar17 = (uint)uVar25;
        if (uVar13 < uVar17) {
          *param_4 = (uVar12 + 3) - uVar14;
          if (param_3 == (int)param_2 + uVar17) break;
          uVar13 = uVar17;
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

