// FUN_01babd0c @ 01babd0c size=1608 calls_out=3 calls_in=3
// strings: 

void FUN_01babd0c(int param_1,uint *param_2,int param_3,int *param_4)

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
  uint extraout_r3;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar18 = -iVar5;
  uVar16 = iVar18 + 0x38;
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 4);
  uVar17 = (int)param_2 - iVar10;
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar17 - uVar11) {
    local_148 = uVar17 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
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
  if (4 < uVar13) {
    uVar13 = 5;
  }
  local_14c = 1 << (uVar13 & 0xff);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar6 = param_1 + 0x2c;
    uVar13 = *(uint *)(param_1 + 0x1c);
    if (uVar17 - uVar13 < 0x181) {
      iVar19 = iVar8;
      iVar20 = iVar9;
    }
    else {
      iVar5 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar19 = 0x61;
      }
      else {
        iVar19 = 1;
      }
      for (; uVar13 != iVar19 + iVar5; uVar13 = uVar13 + 1) {
        uVar2 = *(uint *)(iVar10 + uVar13 + 8);
        lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
        uVar2 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar10 + uVar13 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar21 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar16 & 0xff) |
                 uVar2 << (0x20 - uVar16 & 0xff) | uVar2 >> (iVar18 + 0x18U & 0xff);
        uVar2 = uVar21 >> 8;
        HintPreloadData(iVar8 + uVar2 * 0x80);
        HintPreloadData(iVar8 + uVar2 * 0x80 + 0x40);
        HintPreloadData(iVar9 + uVar2 * 0x20);
        uVar15 = *(uint *)(iVar6 + (uVar13 & 7) * 4);
        *(uint *)(iVar6 + (uVar13 & 7) * 4) = uVar21;
        uVar2 = uVar15 >> 8;
        uVar21 = *(byte *)(iVar9 + uVar2 * 0x20) - 1 & 0x1f;
        if (uVar21 == 0) {
          iVar20 = 0x1f;
        }
        else {
          iVar20 = 0;
        }
        iVar20 = uVar21 + iVar20;
        *(char *)(iVar9 + uVar2 * 0x20) = (char)iVar20;
        *(char *)(iVar9 + uVar2 * 0x20 + iVar20) = (char)uVar15;
        *(uint *)(iVar8 + (iVar20 + uVar2 * 0x20) * 4) = uVar13;
      }
      uVar13 = uVar17 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar19 = *(int *)(param_1 + 0x5c);
      iVar20 = *(int *)(param_1 + 0x28);
      uVar2 = 0;
      if (iVar10 + uVar13 <= (int)param_2 + 1U) {
        uVar2 = (((int)param_2 + 1U) - (iVar10 + uVar13)) + 1;
      }
      if (uVar2 < 9) {
        uVar2 = uVar13 + uVar2;
      }
      else {
        uVar2 = uVar17 - 0x18;
      }
      for (uVar21 = uVar13; uVar21 < uVar2; uVar21 = uVar21 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar21) * 0xbf9b0000;
        uVar15 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar21 + 4) * -0x40650000 +
                 *(uint *)(iVar10 + uVar21) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar15 << (iVar5 - 0x18U & 0xff) | uVar15 >> (0x18U - iVar5 & 0xff);
        uVar15 = uVar4 >> 8;
        HintPreloadData(iVar19 + uVar15 * 0x80);
        HintPreloadData(iVar20 + uVar15 * 0x20);
        HintPreloadData(iVar19 + uVar15 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar17; uVar13 = uVar13 + 1) {
      iVar14 = iVar3 + uVar13;
      uVar2 = *(uint *)(iVar14 + 8);
      lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
      uVar2 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar14 + 0xc) * -0x40650000 + uVar2 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar21 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar2 << (iVar5 - 0x18U & 0xff) | uVar2 >> (0x18U - iVar5 & 0xff);
      uVar2 = uVar21 >> 8;
      HintPreloadData(iVar19 + uVar2 * 0x80);
      HintPreloadData(iVar20 + uVar2 * 0x20);
      HintPreloadData(iVar19 + uVar2 * 0x80 + 0x40);
      uVar15 = *(uint *)(iVar6 + (uVar13 & 7) * 4);
      *(uint *)(iVar6 + (uVar13 & 7) * 4) = uVar21;
      uVar2 = uVar15 >> 8;
      uVar21 = *(byte *)(iVar20 + uVar2 * 0x20) - 1 & 0x1f;
      if (uVar21 == 0) {
        iVar14 = 0x1f;
      }
      else {
        iVar14 = 0;
      }
      iVar14 = uVar21 + iVar14;
      *(char *)(iVar20 + uVar2 * 0x20) = (char)iVar14;
      *(char *)(iVar20 + uVar2 * 0x20 + iVar14) = (char)uVar15;
      *(uint *)(iVar19 + (iVar14 + uVar2 * 0x20) * 4) = uVar13;
    }
    uVar2 = param_2[2];
    uVar13 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar17;
    lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
    uVar12 = uVar13 * -0x40650000 + uVar2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar12;
    uVar16 = ((uint)lVar1 ^ uVar11) >> (uVar16 & 0xff) | uVar12 << (0x20 - uVar16 & 0xff) |
             uVar12 >> (iVar18 + 0x18U & 0xff);
    uVar11 = uVar16 >> 8;
    HintPreloadData(iVar8 + uVar11 * 0x80);
    HintPreloadData(iVar8 + uVar11 * 0x80 + 0x40);
    HintPreloadData(iVar9 + uVar11 * 0x20);
    uVar11 = *(uint *)(iVar6 + (uVar17 & 7) * 4);
    *(uint *)(iVar6 + (uVar17 & 7) * 4) = uVar16;
  }
  else {
    uVar2 = *param_2;
    uVar13 = param_2[1];
    *(uint *)(param_1 + 0x1c) = uVar17;
    lVar1 = (ulonglong)uVar2 * 0xbf9b0000;
    uVar12 = uVar13 * -0x40650000 + uVar2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar12;
    uVar11 = ((uint)lVar1 ^ uVar11) >> (uVar16 & 0xff) | uVar12 << (0x20 - uVar16 & 0xff) |
             uVar12 >> (iVar18 + 0x18U & 0xff);
  }
  uVar16 = uVar11 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  uVar13 = 0;
  iVar8 = iVar8 + uVar16 * 0x80;
  uVar2 = (uint)*(byte *)(iVar9 + uVar16 * 0x20);
  iVar5 = iVar9 + uVar16 * 0x20;
  uVar12 = uVar2 & 0x1f;
  iVar18 = 0x1c;
  do {
    bVar22 = iVar18 != 0;
    uVar21 = *(uint *)(iVar5 + iVar18) ^ (uVar11 & 0xff) * 0x1010101;
    uVar13 = (((uVar21 | 0x80808080) + 0xfefefeff | uVar21) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar18 = iVar18 + -4;
  } while (bVar22);
  uVar13 = ~uVar13 >> uVar12 | ~uVar13 << 0x20 - uVar12;
  iVar18 = 0;
  while (uVar7 = (undefined1)uVar11, local_14c != 0 && uVar13 != 0) {
    iVar6 = FUN_01b9b85c(uVar13,0);
    uVar7 = (undefined1)extraout_r3;
    uVar11 = uVar12 + iVar6 & 0x1f;
    iVar6 = iVar18;
    if (uVar11 != 0) {
      uVar13 = *(uint *)(iVar8 + uVar11 * 4);
      if (uVar13 < local_148) break;
      HintPreloadData(iVar10 + uVar13);
      iVar6 = iVar18 + 1;
      local_12c[iVar18] = uVar13;
      local_14c = local_14c + -1;
    }
    uVar11 = extraout_r3;
    iVar18 = iVar6;
    uVar13 = extraout_r2 & extraout_r2 - 1;
  }
  uVar11 = uVar2 - 1 & 0x1f;
  if (uVar11 == 0) {
    iVar6 = 0x1f;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = uVar11 + iVar6;
  *(char *)(iVar9 + uVar16 * 0x20) = (char)iVar6;
  *(undefined1 *)(iVar5 + iVar6) = uVar7;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar8 + iVar6 * 4) = iVar5;
  uVar11 = 3;
  for (iVar5 = 0; uVar23 = CONCAT44(uVar13,uVar11), iVar18 != iVar5; iVar5 = iVar5 + 1) {
    uVar16 = local_12c[iVar5];
    uVar13 = iVar10 + uVar16;
    if (*(int *)(uVar13 + (uVar11 - 3)) == *(int *)((int)param_2 + (uVar11 - 3))) {
      uVar23 = FUN_01b9b884(param_2,uVar13,param_3);
      uVar13 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar12 = (uint)uVar23;
      if (uVar11 < uVar12) {
        *param_4 = (uVar17 + 3) - uVar16;
        if (param_3 == (int)param_2 + uVar12) break;
        uVar11 = uVar12;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

