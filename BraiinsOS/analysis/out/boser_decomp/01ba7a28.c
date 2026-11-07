// FUN_01ba7a28 @ 01ba7a28 size=1852 calls_out=4 calls_in=3
// strings: 

void FUN_01ba7a28(int param_1,uint *param_2,int param_3,int *param_4)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint extraout_r3;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar18 = *(int *)(param_1 + 0x28);
  iVar17 = -iVar4;
  uVar16 = iVar17 + 0x38;
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
  uVar13 = *(uint *)(param_1 + 0x50);
  uVar14 = *(uint *)(param_1 + 0x54);
  uVar15 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar15) {
    uVar15 = 6;
  }
  local_154 = 1 << (uVar15 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar5 = param_1 + 0x2c;
    uVar15 = *(uint *)(param_1 + 0x1c);
    if (uVar12 - uVar15 < 0x181) {
      iVar22 = iVar8;
      iVar23 = iVar18;
    }
    else {
      iVar4 = uVar15 - 1;
      if (uVar15 < 0xffffffa0) {
        iVar22 = 0x61;
      }
      else {
        iVar22 = 1;
      }
      for (; uVar15 != iVar22 + iVar4; uVar15 = uVar15 + 1) {
        uVar2 = *(uint *)(iVar9 + uVar15 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar15 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar16 & 0xff) |
                 uVar2 << (0x20 - uVar16 & 0xff) | uVar2 >> (iVar17 + 0x18U & 0xff);
        uVar2 = uVar19 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x100);
        HintPreloadData(iVar18 + uVar2 * 0x40);
        HintPreloadData(iVar8 + uVar2 * 0x100 + 0x40);
        HintPreloadData(iVar18 + uVar2 * 0x40 + 0x20);
        uVar6 = *(uint *)(iVar5 + (uVar15 & 7) * 4);
        *(uint *)(iVar5 + (uVar15 & 7) * 4) = uVar19;
        uVar2 = uVar6 >> 8;
        uVar19 = *(byte *)(iVar18 + uVar2 * 0x40) - 1 & 0x3f;
        if (uVar19 == 0) {
          iVar23 = 0x3f;
        }
        else {
          iVar23 = 0;
        }
        iVar23 = uVar19 + iVar23;
        *(char *)(iVar18 + uVar2 * 0x40) = (char)iVar23;
        *(char *)(iVar18 + uVar2 * 0x40 + iVar23) = (char)uVar6;
        *(uint *)(iVar8 + (iVar23 + uVar2 * 0x40) * 4) = uVar15;
      }
      uVar15 = uVar12 - 0x20;
      iVar22 = *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x24);
      iVar23 = *(int *)(param_1 + 0x28);
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
      for (uVar19 = uVar15; uVar19 < uVar2; uVar19 = uVar19 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar9 + uVar19) * 0xbf9b0000;
        uVar6 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar9 + uVar19 + 4) * -0x40650000 + *(uint *)(iVar9 + uVar19) * -0x30e44324
                + (int)((ulonglong)lVar1 >> 0x20);
        uVar20 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
                 uVar6 << (iVar4 - 0x18U & 0xff) | uVar6 >> (0x18U - iVar4 & 0xff);
        uVar6 = uVar20 >> 8;
        HintPreloadData(iVar22 + uVar6 * 0x100);
        HintPreloadData(iVar23 + uVar6 * 0x40);
        HintPreloadData(iVar22 + uVar6 * 0x100 + 0x40);
        HintPreloadData(iVar23 + uVar6 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar19 & 7) * 4 + 0x2c) = uVar20;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar15 < uVar12; uVar15 = uVar15 + 1) {
      iVar21 = iVar3 + uVar15;
      uVar2 = *(uint *)(iVar21 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar21 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar19 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
               uVar2 << (iVar4 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar4 & 0xff);
      uVar2 = uVar19 >> 8;
      HintPreloadData(iVar22 + uVar2 * 0x100);
      HintPreloadData(iVar23 + uVar2 * 0x40);
      HintPreloadData(iVar22 + uVar2 * 0x100 + 0x40);
      HintPreloadData(iVar23 + uVar2 * 0x40 + 0x20);
      uVar6 = *(uint *)(iVar5 + (uVar15 & 7) * 4);
      *(uint *)(iVar5 + (uVar15 & 7) * 4) = uVar19;
      uVar2 = uVar6 >> 8;
      uVar19 = *(byte *)(iVar23 + uVar2 * 0x40) - 1 & 0x3f;
      if (uVar19 == 0) {
        iVar21 = 0x3f;
      }
      else {
        iVar21 = 0;
      }
      iVar21 = uVar19 + iVar21;
      *(char *)(iVar23 + uVar2 * 0x40) = (char)iVar21;
      *(char *)(iVar23 + uVar2 * 0x40 + iVar21) = (char)uVar6;
      *(uint *)(iVar22 + (iVar21 + uVar2 * 0x40) * 4) = uVar15;
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar14 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar14;
    uVar16 = ((uint)lVar1 ^ uVar13) >> (uVar16 & 0xff) | uVar14 << (0x20 - uVar16 & 0xff) |
             uVar14 >> (iVar17 + 0x18U & 0xff);
    uVar13 = uVar16 >> 8;
    HintPreloadData(iVar8 + uVar13 * 0x100);
    HintPreloadData(iVar18 + uVar13 * 0x40);
    HintPreloadData(iVar8 + uVar13 * 0x100 + 0x40);
    HintPreloadData(iVar18 + uVar13 * 0x40 + 0x20);
    uVar13 = *(uint *)(iVar5 + (uVar12 & 7) * 4);
    *(uint *)(iVar5 + (uVar12 & 7) * 4) = uVar16;
  }
  else {
    lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
    uVar14 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar14;
    uVar13 = ((uint)lVar1 ^ uVar13) >> (uVar16 & 0xff) | uVar14 << (0x20 - uVar16 & 0xff) |
             uVar14 >> (iVar17 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar16 = uVar13 >> 8;
  uVar15 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  uVar19 = (uint)*(byte *)(iVar18 + uVar16 * 0x40);
  uVar14 = 0;
  uVar2 = uVar19 & 0x3f;
  iVar8 = iVar8 + uVar16 * 0x100;
  iVar4 = iVar18 + uVar16 * 0x40;
  iVar17 = 0x3c;
  do {
    uVar14 = uVar14 << 4 | uVar15 >> 0x1c;
    bVar24 = iVar17 != 0;
    uVar6 = *(uint *)(iVar4 + iVar17) ^ (uVar13 & 0xff) * 0x1010101;
    uVar15 = (((uVar6 | 0x80808080) + 0xfefefeff | uVar6) & 0x80808080) * 0x204081 >> 0x1c |
             uVar15 << 4;
    iVar17 = iVar17 + -4;
  } while (bVar24);
  uVar15 = ~uVar15;
  uVar14 = ~uVar14;
  uVar20 = -uVar2 & 0x3f;
  uVar6 = uVar15 >> uVar2 | uVar14 << (0x20 - uVar2 & 0xff) | uVar14 >> (uVar2 - 0x20 & 0xff) |
          uVar15 << uVar20;
  uVar15 = uVar14 << uVar20 | uVar15 << (uVar20 - 0x20 & 0xff) | uVar15 >> (0x20 - uVar20 & 0xff) |
           uVar14 >> uVar2;
  iVar17 = 0;
  while( true ) {
    uVar7 = (undefined1)uVar13;
    uVar13 = uVar6 | uVar15;
    if (local_154 == 0 || uVar13 == 0) break;
    iVar5 = FUN_01b9b85c(uVar6,uVar15);
    uVar7 = (undefined1)extraout_r3;
    uVar13 = uVar2 + iVar5 & 0x3f;
    iVar5 = iVar17;
    if (uVar13 != 0) {
      uVar13 = *(uint *)(iVar8 + uVar13 * 4);
      if (uVar13 < local_150) break;
      if (uVar13 < uVar11) {
        iVar5 = iVar10;
      }
      else {
        iVar5 = iVar9;
      }
      HintPreloadData(iVar5 + uVar13);
      iVar5 = iVar17 + 1;
      local_12c[iVar17] = uVar13;
      local_154 = local_154 + -1;
    }
    uVar6 = extraout_r2 & extraout_r2 - 1;
    uVar15 = uVar15 & uVar15 - (extraout_r2 == 0);
    uVar13 = extraout_r3;
    iVar17 = iVar5;
  }
  iVar5 = 0;
  uVar15 = uVar19 - 1 & 0x3f;
  if (uVar15 == 0) {
    iVar22 = 0x3f;
  }
  else {
    iVar22 = 0;
  }
  iVar22 = uVar15 + iVar22;
  *(char *)(iVar18 + uVar16 * 0x40) = (char)iVar22;
  uVar16 = 3;
  *(undefined1 *)(iVar4 + iVar22) = uVar7;
  iVar4 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  *(int *)(iVar8 + iVar22 * 4) = iVar4;
  for (; uVar25 = CONCAT44(uVar13,uVar16), iVar17 != iVar5; iVar5 = iVar5 + 1) {
    uVar15 = local_12c[iVar5];
    if (uVar15 < uVar11) {
      uVar13 = iVar10 + uVar15;
      if (*(uint *)(iVar10 + uVar15) == *param_2) {
        uVar25 = FUN_01b9b970(param_2 + 1,uVar13 + 4,param_3,iVar10 + uVar11,iVar9 + uVar11);
        uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),(int)uVar25 + 4);
        goto LAB_01ba80d8;
      }
    }
    else {
      uVar13 = iVar9 + uVar15;
      if (*(int *)(uVar13 + (uVar16 - 3)) == *(int *)((int)param_2 + (uVar16 - 3))) {
        uVar25 = FUN_01b9b884(param_2,uVar13,param_3);
LAB_01ba80d8:
        uVar13 = (uint)((ulonglong)uVar25 >> 0x20);
        uVar14 = (uint)uVar25;
        if (uVar16 < uVar14) {
          *param_4 = (uVar12 + 3) - uVar15;
          if (param_3 == (int)param_2 + uVar14) break;
          uVar16 = uVar14;
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

