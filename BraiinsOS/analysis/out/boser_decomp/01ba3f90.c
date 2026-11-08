// FUN_01ba3f90 @ 01ba3f90 size=2200 calls_out=4 calls_in=3
// strings: 

void FUN_01ba3f90(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_154;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar8 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 0x28);
  iVar14 = *(int *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0xc);
  uVar16 = (int)param_2 - iVar14;
  uVar17 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar16 - uVar17) {
    local_154 = uVar16 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_154 = uVar17;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar17;
  }
  uVar18 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x54);
  uVar19 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar19) {
    uVar19 = 4;
  }
  local_14c = 1 << (uVar19 & 0xff);
  piVar20 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar10 = (uint)lVar1;
  uVar24 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar26 = piVar20[9];
  uVar2 = uVar10 >> (0x38U - iVar26 & 0xff) | uVar24 << (iVar26 - 0x18U & 0xff) |
          uVar24 >> (0x18U - iVar26 & 0xff);
  uVar19 = uVar2 >> 8;
  iVar3 = piVar20[10];
  iVar4 = iVar3 + uVar19 * 0x10;
  iVar5 = piVar20[0x17] + uVar19 * 0x40;
  iVar26 = -iVar8;
  uVar27 = iVar26 + 0x38;
  HintPreloadData(iVar5);
  HintPreloadData(iVar4);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar11 = param_1 + 0x2c;
    uVar10 = *(uint *)(param_1 + 0x1c);
    if (uVar16 - uVar10 < 0x181) {
      iVar21 = iVar13;
      iVar23 = iVar12;
    }
    else {
      iVar8 = uVar10 - 1;
      if (uVar10 < 0xffffffa0) {
        iVar21 = 0x61;
      }
      else {
        iVar21 = 1;
      }
      for (; uVar10 != iVar21 + iVar8; uVar10 = uVar10 + 1) {
        uVar24 = *(uint *)(iVar14 + uVar10 + 8);
        lVar1 = (ulonglong)uVar24 * 0xbf9b0000;
        uVar24 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar14 + uVar10 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar27 & 0xff) |
                 uVar24 << (0x20 - uVar27 & 0xff) | uVar24 >> (iVar26 + 0x18U & 0xff);
        uVar24 = uVar28 >> 8;
        HintPreloadData(iVar12 + uVar24 * 0x40);
        HintPreloadData(iVar13 + uVar24 * 0x10);
        uVar22 = *(uint *)(iVar11 + (uVar10 & 7) * 4);
        *(uint *)(iVar11 + (uVar10 & 7) * 4) = uVar28;
        uVar24 = uVar22 >> 8;
        uVar28 = *(byte *)(iVar13 + uVar24 * 0x10) - 1 & 0xf;
        if (uVar28 == 0) {
          iVar23 = 0xf;
        }
        else {
          iVar23 = 0;
        }
        iVar23 = uVar28 + iVar23;
        *(char *)(iVar13 + uVar24 * 0x10) = (char)iVar23;
        *(char *)(iVar13 + uVar24 * 0x10 + iVar23) = (char)uVar22;
        *(uint *)(iVar12 + (iVar23 + uVar24 * 0x10) * 4) = uVar10;
      }
      uVar10 = uVar16 - 0x20;
      iVar8 = *(int *)(param_1 + 0x24);
      iVar23 = *(int *)(param_1 + 0x5c);
      iVar21 = *(int *)(param_1 + 0x28);
      uVar24 = 0;
      if (iVar14 + uVar10 <= (int)param_2 + 1U) {
        uVar24 = (((int)param_2 + 1U) - (iVar14 + uVar10)) + 1;
      }
      if (uVar24 < 9) {
        uVar24 = uVar10 + uVar24;
      }
      else {
        uVar24 = uVar16 - 0x18;
      }
      for (uVar28 = uVar10; uVar28 < uVar24; uVar28 = uVar28 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar14 + uVar28) * 0xbf9b0000;
        uVar22 = *(int *)(iVar14 + uVar28 + 4) * -0x40650000 +
                 *(uint *)(iVar14 + uVar28) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar7 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar8 & 0xff) |
                uVar22 << (iVar8 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar8 & 0xff);
        uVar22 = uVar7 >> 8;
        HintPreloadData(iVar23 + uVar22 * 0x40);
        HintPreloadData(iVar21 + uVar22 * 0x10);
        *(uint *)(param_1 + (uVar28 & 7) * 4 + 0x2c) = uVar7;
      }
    }
    iVar6 = *(int *)(param_1 + 4);
    for (; uVar10 < uVar16; uVar10 = uVar10 + 1) {
      iVar25 = iVar6 + uVar10;
      uVar24 = *(uint *)(iVar25 + 8);
      lVar1 = (ulonglong)uVar24 * 0xbf9b0000;
      uVar24 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar25 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar28 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar8 & 0xff) |
               uVar24 << (iVar8 - 0x18U & 0xff) | uVar24 >> (0x18U - iVar8 & 0xff);
      uVar24 = uVar28 >> 8;
      HintPreloadData(iVar23 + uVar24 * 0x40);
      HintPreloadData(iVar21 + uVar24 * 0x10);
      uVar22 = *(uint *)(iVar11 + (uVar10 & 7) * 4);
      *(uint *)(iVar11 + (uVar10 & 7) * 4) = uVar28;
      uVar24 = uVar22 >> 8;
      uVar28 = *(byte *)(iVar21 + uVar24 * 0x10) - 1 & 0xf;
      if (uVar28 == 0) {
        iVar25 = 0xf;
      }
      else {
        iVar25 = 0;
      }
      iVar25 = uVar28 + iVar25;
      *(char *)(iVar21 + uVar24 * 0x10) = (char)iVar25;
      *(char *)(iVar21 + uVar24 * 0x10 + iVar25) = (char)uVar22;
      *(uint *)(iVar23 + (iVar25 + uVar24 * 0x10) * 4) = uVar10;
    }
    *(uint *)(param_1 + 0x1c) = uVar16;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar17 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar17;
    uVar18 = ((uint)lVar1 ^ uVar18) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar26 + 0x18U & 0xff);
    uVar17 = uVar18 >> 8;
    HintPreloadData(iVar12 + uVar17 * 0x40);
    HintPreloadData(iVar13 + uVar17 * 0x10);
    uVar17 = *(uint *)(iVar11 + (uVar16 & 7) * 4);
    *(uint *)(iVar11 + (uVar16 & 7) * 4) = uVar18;
  }
  else {
    uVar17 = uVar17 ^ uVar24;
    uVar17 = (uVar18 ^ uVar10) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar26 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar16;
  }
  uVar18 = uVar17 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar17;
  iVar12 = iVar12 + uVar18 * 0x40;
  uVar24 = (uint)*(byte *)(iVar13 + uVar18 * 0x10);
  iVar26 = iVar13 + uVar18 * 0x10;
  uVar10 = 0;
  uVar27 = uVar24 & 0xf;
  iVar8 = 0xc;
  do {
    bVar29 = iVar8 != 0;
    uVar28 = *(uint *)(iVar26 + iVar8) ^ (uVar17 & 0xff) * 0x1010101;
    uVar10 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
             uVar10 << 4;
    iVar8 = iVar8 + -4;
  } while (bVar29);
  uVar10 = (~uVar10 << (-uVar27 & 0xf) | (~uVar10 & 0xffff) >> uVar27) & 0xffff;
  iVar8 = 0;
  while (uVar9 = (undefined1)uVar17, local_14c != 0 && uVar10 != 0) {
    iVar11 = FUN_01b9b85c(uVar10);
    uVar9 = (undefined1)extraout_r2;
    uVar17 = uVar27 + iVar11 & 0xf;
    iVar11 = iVar8;
    if (uVar17 != 0) {
      uVar17 = *(uint *)(iVar12 + uVar17 * 4);
      if (uVar17 < local_154) break;
      HintPreloadData(iVar14 + uVar17);
      iVar11 = iVar8 + 1;
      local_12c[iVar8] = uVar17;
      local_14c = local_14c - 1;
    }
    uVar17 = extraout_r2;
    iVar8 = iVar11;
    uVar10 = extraout_r3 & extraout_r3 - 1;
  }
  uVar17 = uVar24 - 1 & 0xf;
  if (uVar17 == 0) {
    iVar11 = 0xf;
  }
  else {
    iVar11 = 0;
  }
  iVar11 = uVar17 + iVar11;
  *(char *)(iVar13 + uVar18 * 0x10) = (char)iVar11;
  *(undefined1 *)(iVar26 + iVar11) = uVar9;
  iVar13 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar13 + 1;
  *(int *)(iVar12 + iVar11 * 4) = iVar13;
  uVar17 = 3;
  for (iVar12 = 0; iVar8 != iVar12; iVar12 = iVar12 + 1) {
    uVar18 = local_12c[iVar12];
    iVar13 = iVar14 + uVar18;
    if ((*(int *)(iVar13 + (uVar17 - 3)) == *(int *)((int)param_2 + (uVar17 - 3))) &&
       (uVar10 = FUN_01b9b884(param_2,iVar13,param_3), uVar17 < uVar10)) {
      *param_4 = (uVar16 + 3) - uVar18;
      if (param_3 == (int)param_2 + uVar10) goto LAB_01ba4374;
      uVar17 = uVar10;
    }
  }
  uVar10 = uVar17;
LAB_01ba4374:
  uVar18 = 0;
  uVar17 = *(byte *)(iVar3 + uVar19 * 0x10) & 0xf;
  iVar13 = *piVar20;
  iVar26 = piVar20[1];
  iVar12 = iVar13 - iVar26;
  iVar8 = 0xc;
  do {
    bVar29 = iVar8 != 0;
    uVar19 = *(uint *)(iVar4 + iVar8) ^ (uVar2 & 0xff) * 0x1010101;
    uVar18 = (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
             uVar18 << 4;
    iVar8 = iVar8 + -4;
  } while (bVar29);
  iVar8 = 0;
  for (uVar18 = (~uVar18 << (-uVar17 & 0xf) | (~uVar18 & 0xffff) >> uVar17) & 0xffff;
      uVar19 = local_14c, local_14c != 0 && uVar18 != 0; uVar18 = uVar18 & uVar18 - 1) {
    iVar12 = FUN_01b9b85c(uVar18,0);
    uVar19 = uVar17 + iVar12 & 0xf;
    iVar3 = iVar8;
    iVar12 = extraout_r3_00;
    if (uVar19 != 0) {
      uVar19 = *(uint *)(iVar5 + uVar19 * 4);
      if (uVar19 < extraout_r2_00) break;
      HintPreloadData(iVar26 + uVar19);
      iVar3 = iVar8 + 1;
      local_12c[iVar8] = uVar19;
      local_14c = local_14c - 1;
    }
    iVar8 = iVar3;
  }
  for (iVar3 = 0; iVar8 != iVar3; iVar3 = iVar3 + 1) {
    uVar17 = local_12c[iVar3];
    uVar19 = iVar26 + uVar17;
    if (*(uint *)(iVar26 + uVar17) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar19 + 4,param_3,iVar13,iVar14 + iVar15);
      uVar19 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar18 = (int)uVar30 + 4;
      if (uVar10 < uVar18) {
        *param_4 = ((3 - iVar15) + uVar16 + iVar12) - uVar17;
        if (param_3 == (int)param_2 + uVar18) goto LAB_01ba47e0;
        uVar10 = uVar18;
      }
    }
  }
  uVar18 = uVar10;
LAB_01ba47e0:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar18,uVar19,local_2c ^ DAT_01d53560,0);
  }
  return;
}

