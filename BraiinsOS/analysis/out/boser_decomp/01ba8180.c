// FUN_01ba8180 @ 01ba8180 size=1756 calls_out=4 calls_in=3
// strings: 

void FUN_01ba8180(int param_1,uint *param_2,int param_3,int *param_4)

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
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint extraout_r3;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar20 = -iVar5;
  uVar19 = iVar20 + 0x38;
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0xc);
  uVar13 = (int)param_2 - iVar10;
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar13 - uVar14) {
    local_150 = uVar13 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar14;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar14;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar15 = *(uint *)(param_1 + 0x54);
  uVar16 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar16) {
    uVar16 = 5;
  }
  local_154 = 1 << (uVar16 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar6 = param_1 + 0x2c;
    uVar16 = *(uint *)(param_1 + 0x1c);
    if (uVar13 - uVar16 < 0x181) {
      iVar21 = iVar8;
      iVar22 = iVar9;
    }
    else {
      iVar5 = uVar16 - 1;
      if (uVar16 < 0xffffffa0) {
        iVar21 = 0x61;
      }
      else {
        iVar21 = 1;
      }
      for (; uVar16 != iVar21 + iVar5; uVar16 = uVar16 + 1) {
        uVar2 = *(uint *)(iVar10 + uVar16 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar10 + uVar16 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar23 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar19 & 0xff) |
                 uVar2 << (0x20 - uVar19 & 0xff) | uVar2 >> (iVar20 + 0x18U & 0xff);
        uVar2 = uVar23 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x80);
        HintPreloadData(iVar8 + uVar2 * 0x80 + 0x40);
        HintPreloadData(iVar9 + uVar2 * 0x20);
        uVar18 = *(uint *)(iVar6 + (uVar16 & 7) * 4);
        *(uint *)(iVar6 + (uVar16 & 7) * 4) = uVar23;
        uVar2 = uVar18 >> 8;
        uVar23 = *(byte *)(iVar9 + uVar2 * 0x20) - 1 & 0x1f;
        if (uVar23 == 0) {
          iVar22 = 0x1f;
        }
        else {
          iVar22 = 0;
        }
        iVar22 = uVar23 + iVar22;
        *(char *)(iVar9 + uVar2 * 0x20) = (char)iVar22;
        *(char *)(iVar9 + uVar2 * 0x20 + iVar22) = (char)uVar18;
        *(uint *)(iVar8 + (iVar22 + uVar2 * 0x20) * 4) = uVar16;
      }
      uVar16 = uVar13 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar21 = *(int *)(param_1 + 0x5c);
      iVar22 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar10 + uVar16 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar10 + uVar16)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar16 + uVar2;
      }
      else {
        uVar2 = uVar13 - 0x18;
      }
      for (uVar23 = uVar16; uVar23 < uVar2; uVar23 = uVar23 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar23) * 0xbf9b0000;
        uVar18 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar23 + 4) * -0x40650000 +
                 *(uint *)(iVar10 + uVar23) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar18 << (iVar5 - 0x18U & 0xff) | uVar18 >> (0x18U - iVar5 & 0xff);
        uVar18 = uVar4 >> 8;
        HintPreloadData(iVar21 + uVar18 * 0x80);
        HintPreloadData(iVar22 + uVar18 * 0x20);
        HintPreloadData(iVar21 + uVar18 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar23 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar16 < uVar13; uVar16 = uVar16 + 1) {
      iVar17 = iVar3 + uVar16;
      uVar2 = *(uint *)(iVar17 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar17 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar23 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar2 << (iVar5 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar5 & 0xff);
      uVar2 = uVar23 >> 8;
      HintPreloadData(iVar21 + uVar2 * 0x80);
      HintPreloadData(iVar22 + uVar2 * 0x20);
      HintPreloadData(iVar21 + uVar2 * 0x80 + 0x40);
      uVar18 = *(uint *)(iVar6 + (uVar16 & 7) * 4);
      *(uint *)(iVar6 + (uVar16 & 7) * 4) = uVar23;
      uVar2 = uVar18 >> 8;
      uVar23 = *(byte *)(iVar22 + uVar2 * 0x20) - 1 & 0x1f;
      if (uVar23 == 0) {
        iVar17 = 0x1f;
      }
      else {
        iVar17 = 0;
      }
      iVar17 = uVar23 + iVar17;
      *(char *)(iVar22 + uVar2 * 0x20) = (char)iVar17;
      *(char *)(iVar22 + uVar2 * 0x20 + iVar17) = (char)uVar18;
      *(uint *)(iVar21 + (iVar17 + uVar2 * 0x20) * 4) = uVar16;
    }
    uVar16 = param_2[2];
    *(uint *)(param_1 + 0x1c) = uVar13;
    lVar1 = (ulonglong)uVar16 * 0xbf9b0000;
    uVar15 = param_2[3] * -0x40650000 + uVar16 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar15;
    uVar19 = ((uint)lVar1 ^ uVar14) >> (uVar19 & 0xff) | uVar15 << (0x20 - uVar19 & 0xff) |
             uVar15 >> (iVar20 + 0x18U & 0xff);
    uVar14 = uVar19 >> 8;
    HintPreloadData(iVar8 + uVar14 * 0x80);
    HintPreloadData(iVar8 + uVar14 * 0x80 + 0x40);
    HintPreloadData(iVar9 + uVar14 * 0x20);
    uVar14 = *(uint *)(iVar6 + (uVar13 & 7) * 4);
    *(uint *)(iVar6 + (uVar13 & 7) * 4) = uVar19;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
    uVar15 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar15;
    uVar14 = ((uint)lVar1 ^ uVar14) >> (uVar19 & 0xff) | uVar15 << (0x20 - uVar19 & 0xff) |
             uVar15 >> (iVar20 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar13;
  }
  uVar19 = uVar14 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar14;
  uVar16 = 0;
  iVar8 = iVar8 + uVar19 * 0x80;
  uVar2 = (uint)*(byte *)(iVar9 + uVar19 * 0x20);
  iVar5 = iVar9 + uVar19 * 0x20;
  uVar15 = uVar2 & 0x1f;
  iVar20 = 0x1c;
  do {
    bVar24 = iVar20 != 0;
    uVar23 = *(uint *)(iVar5 + iVar20) ^ (uVar14 & 0xff) * 0x1010101;
    uVar16 = (((uVar23 | 0x80808080) + 0xfefefeff | uVar23) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar20 = iVar20 + -4;
  } while (bVar24);
  uVar16 = ~uVar16 >> uVar15 | ~uVar16 << 0x20 - uVar15;
  iVar20 = 0;
  while (uVar7 = (undefined1)uVar14, local_154 != 0 && uVar16 != 0) {
    iVar6 = FUN_01b9b85c(uVar16,0);
    uVar7 = (undefined1)extraout_r3;
    uVar14 = uVar15 + iVar6 & 0x1f;
    iVar6 = iVar20;
    if (uVar14 != 0) {
      uVar16 = *(uint *)(iVar8 + uVar14 * 4);
      if (uVar16 < local_150) break;
      if (uVar16 < uVar12) {
        iVar6 = iVar11;
      }
      else {
        iVar6 = iVar10;
      }
      HintPreloadData(iVar6 + uVar16);
      iVar6 = iVar20 + 1;
      local_12c[iVar20] = uVar16;
      local_154 = local_154 + -1;
    }
    uVar14 = extraout_r3;
    iVar20 = iVar6;
    uVar16 = extraout_r2 & extraout_r2 - 1;
  }
  uVar14 = uVar2 - 1 & 0x1f;
  if (uVar14 == 0) {
    iVar6 = 0x1f;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = uVar14 + iVar6;
  *(char *)(iVar9 + uVar19 * 0x20) = (char)iVar6;
  uVar14 = 3;
  *(undefined1 *)(iVar5 + iVar6) = uVar7;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar8 + iVar6 * 4) = iVar5;
  for (iVar5 = 0; uVar25 = CONCAT44(uVar16,uVar14), iVar20 != iVar5; iVar5 = iVar5 + 1) {
    uVar19 = local_12c[iVar5];
    if (uVar19 < uVar12) {
      uVar16 = iVar11 + uVar19;
      if (*(uint *)(iVar11 + uVar19) == *param_2) {
        uVar25 = FUN_01b9b970(param_2 + 1,uVar16 + 4,param_3,iVar11 + uVar12,iVar10 + uVar12);
        uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),(int)uVar25 + 4);
        goto LAB_01ba87d8;
      }
    }
    else {
      uVar16 = iVar10 + uVar19;
      if (*(int *)(uVar16 + (uVar14 - 3)) == *(int *)((int)param_2 + (uVar14 - 3))) {
        uVar25 = FUN_01b9b884(param_2,uVar16,param_3);
LAB_01ba87d8:
        uVar16 = (uint)((ulonglong)uVar25 >> 0x20);
        uVar15 = (uint)uVar25;
        if (uVar14 < uVar15) {
          *param_4 = (uVar13 + 3) - uVar19;
          if (param_3 == (int)param_2 + uVar15) break;
          uVar14 = uVar15;
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

