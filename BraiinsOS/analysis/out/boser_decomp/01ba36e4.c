// FUN_01ba36e4 @ 01ba36e4 size=2196 calls_out=4 calls_in=3
// strings: 

void FUN_01ba36e4(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 0x24);
  iVar22 = -iVar7;
  uVar23 = iVar22 + 0x38;
  local_2c = DAT_01d53560;
  iVar11 = *(int *)(param_1 + 0x5c);
  iVar12 = *(int *)(param_1 + 0x28);
  iVar13 = *(int *)(param_1 + 4);
  iVar14 = *(int *)(param_1 + 0xc);
  uVar15 = (int)param_2 - iVar13;
  uVar16 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar15 - uVar16) {
    local_154 = uVar15 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_154 = uVar16;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar16;
  }
  uVar17 = *(uint *)(param_1 + 0x50);
  uVar16 = *(uint *)(param_1 + 0x54);
  uVar18 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar18) {
    uVar18 = 5;
  }
  local_150 = 1 << (uVar18 & 0xff);
  piVar19 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar9 = (uint)lVar1;
  uVar24 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar25 = piVar19[9];
  uVar2 = uVar9 >> (0x38U - iVar25 & 0xff) | uVar24 << (iVar25 - 0x18U & 0xff) |
          uVar24 >> (0x18U - iVar25 & 0xff);
  uVar18 = uVar2 >> 8;
  iVar25 = piVar19[10];
  iVar3 = iVar25 + uVar18 * 0x20;
  iVar4 = piVar19[0x17] + uVar18 * 0x80;
  HintPreloadData(iVar4);
  HintPreloadData(piVar19[0x17] + uVar18 * 0x80 + 0x40);
  HintPreloadData(iVar3);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar10 = param_1 + 0x2c;
    uVar9 = *(uint *)(param_1 + 0x1c);
    if (uVar15 - uVar9 < 0x181) {
      iVar26 = iVar11;
      iVar27 = iVar12;
    }
    else {
      iVar7 = uVar9 - 1;
      if (uVar9 < 0xffffffa0) {
        iVar26 = 0x61;
      }
      else {
        iVar26 = 1;
      }
      for (; uVar9 != iVar26 + iVar7; uVar9 = uVar9 + 1) {
        uVar24 = *(uint *)(iVar13 + uVar9 + 8);
        lVar1 = (ulonglong)uVar24 * 0xbf9b0000;
        uVar24 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar13 + uVar9 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar23 & 0xff) |
                 uVar24 << (0x20 - uVar23 & 0xff) | uVar24 >> (iVar22 + 0x18U & 0xff);
        uVar24 = uVar28 >> 8;
        HintPreloadData(iVar11 + uVar24 * 0x80);
        HintPreloadData(iVar11 + uVar24 * 0x80 + 0x40);
        HintPreloadData(iVar12 + uVar24 * 0x20);
        uVar21 = *(uint *)(iVar10 + (uVar9 & 7) * 4);
        *(uint *)(iVar10 + (uVar9 & 7) * 4) = uVar28;
        uVar24 = uVar21 >> 8;
        uVar28 = *(byte *)(iVar12 + uVar24 * 0x20) - 1 & 0x1f;
        if (uVar28 == 0) {
          iVar27 = 0x1f;
        }
        else {
          iVar27 = 0;
        }
        iVar27 = uVar28 + iVar27;
        *(char *)(iVar12 + uVar24 * 0x20) = (char)iVar27;
        *(char *)(iVar12 + uVar24 * 0x20 + iVar27) = (char)uVar21;
        *(uint *)(iVar11 + (iVar27 + uVar24 * 0x20) * 4) = uVar9;
      }
      uVar9 = uVar15 - 0x20;
      iVar7 = *(int *)(param_1 + 0x24);
      iVar26 = *(int *)(param_1 + 0x5c);
      iVar27 = *(int *)(param_1 + 0x28);
      uVar24 = 0;
      if (iVar13 + uVar9 <= (int)param_2 + 1U) {
        uVar24 = (((int)param_2 + 1U) - (iVar13 + uVar9)) + 1;
      }
      if (uVar24 < 9) {
        uVar24 = uVar9 + uVar24;
      }
      else {
        uVar24 = uVar15 - 0x18;
      }
      for (uVar28 = uVar9; uVar28 < uVar24; uVar28 = uVar28 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar13 + uVar28) * 0xbf9b0000;
        uVar21 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar13 + uVar28 + 4) * -0x40650000 +
                 *(uint *)(iVar13 + uVar28) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar7 & 0xff) |
                uVar21 << (iVar7 - 0x18U & 0xff) | uVar21 >> (0x18U - iVar7 & 0xff);
        uVar21 = uVar6 >> 8;
        HintPreloadData(iVar26 + uVar21 * 0x80);
        HintPreloadData(iVar27 + uVar21 * 0x20);
        HintPreloadData(iVar26 + uVar21 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar28 & 7) * 4 + 0x2c) = uVar6;
      }
    }
    iVar5 = *(int *)(param_1 + 4);
    for (; uVar9 < uVar15; uVar9 = uVar9 + 1) {
      iVar20 = iVar5 + uVar9;
      uVar24 = *(uint *)(iVar20 + 8);
      lVar1 = (ulonglong)uVar24 * 0xbf9b0000;
      uVar24 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar20 + 0xc) * -0x40650000 + uVar24 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar28 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar7 & 0xff) |
               uVar24 << (iVar7 - 0x18U & 0xff) | uVar24 >> (0x18U - iVar7 & 0xff);
      uVar24 = uVar28 >> 8;
      HintPreloadData(iVar26 + uVar24 * 0x80);
      HintPreloadData(iVar27 + uVar24 * 0x20);
      HintPreloadData(iVar26 + uVar24 * 0x80 + 0x40);
      uVar21 = *(uint *)(iVar10 + (uVar9 & 7) * 4);
      *(uint *)(iVar10 + (uVar9 & 7) * 4) = uVar28;
      uVar24 = uVar21 >> 8;
      uVar28 = *(byte *)(iVar27 + uVar24 * 0x20) - 1 & 0x1f;
      if (uVar28 == 0) {
        iVar20 = 0x1f;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = uVar28 + iVar20;
      *(char *)(iVar27 + uVar24 * 0x20) = (char)iVar20;
      *(char *)(iVar27 + uVar24 * 0x20 + iVar20) = (char)uVar21;
      *(uint *)(iVar26 + (iVar20 + uVar24 * 0x20) * 4) = uVar9;
    }
    *(uint *)(param_1 + 0x1c) = uVar15;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar16 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar16;
    uVar23 = ((uint)lVar1 ^ uVar17) >> (uVar23 & 0xff) | uVar16 << (0x20 - uVar23 & 0xff) |
             uVar16 >> (iVar22 + 0x18U & 0xff);
    uVar16 = uVar23 >> 8;
    HintPreloadData(iVar11 + uVar16 * 0x80);
    HintPreloadData(iVar11 + uVar16 * 0x80 + 0x40);
    HintPreloadData(iVar12 + uVar16 * 0x20);
    uVar16 = *(uint *)(iVar10 + (uVar15 & 7) * 4);
    *(uint *)(iVar10 + (uVar15 & 7) * 4) = uVar23;
  }
  else {
    uVar16 = uVar16 ^ uVar24;
    uVar16 = (uVar17 ^ uVar9) >> (uVar23 & 0xff) | uVar16 << (0x20 - uVar23 & 0xff) |
             uVar16 >> (iVar22 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar15;
  }
  uVar23 = uVar16 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar16;
  iVar11 = iVar11 + uVar23 * 0x80;
  uVar9 = (uint)*(byte *)(iVar12 + uVar23 * 0x20);
  iVar7 = iVar12 + uVar23 * 0x20;
  uVar17 = 0;
  uVar24 = uVar9 & 0x1f;
  iVar22 = 0x1c;
  do {
    bVar29 = iVar22 != 0;
    uVar28 = *(uint *)(iVar7 + iVar22) ^ (uVar16 & 0xff) * 0x1010101;
    uVar17 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
             uVar17 << 4;
    iVar22 = iVar22 + -4;
  } while (bVar29);
  uVar17 = ~uVar17 >> uVar24 | ~uVar17 << 0x20 - uVar24;
  iVar22 = 0;
  while (uVar8 = (undefined1)uVar16, local_150 != 0 && uVar17 != 0) {
    iVar10 = FUN_01b9b85c(uVar17);
    uVar8 = (undefined1)extraout_r2;
    uVar16 = uVar24 + iVar10 & 0x1f;
    iVar10 = iVar22;
    if (uVar16 != 0) {
      uVar16 = *(uint *)(iVar11 + uVar16 * 4);
      if (uVar16 < local_154) break;
      HintPreloadData(iVar13 + uVar16);
      iVar10 = iVar22 + 1;
      local_12c[iVar22] = uVar16;
      local_150 = local_150 - 1;
    }
    uVar16 = extraout_r2;
    iVar22 = iVar10;
    uVar17 = extraout_r3 & extraout_r3 - 1;
  }
  uVar16 = uVar9 - 1 & 0x1f;
  if (uVar16 == 0) {
    iVar10 = 0x1f;
  }
  else {
    iVar10 = 0;
  }
  iVar10 = uVar16 + iVar10;
  *(char *)(iVar12 + uVar23 * 0x20) = (char)iVar10;
  *(undefined1 *)(iVar7 + iVar10) = uVar8;
  iVar7 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar7 + 1;
  *(int *)(iVar11 + iVar10 * 4) = iVar7;
  uVar16 = 3;
  for (iVar7 = 0; iVar22 != iVar7; iVar7 = iVar7 + 1) {
    uVar23 = local_12c[iVar7];
    iVar11 = iVar13 + uVar23;
    if ((*(int *)(iVar11 + (uVar16 - 3)) == *(int *)((int)param_2 + (uVar16 - 3))) &&
       (uVar17 = FUN_01b9b884(param_2,iVar11,param_3), uVar16 < uVar17)) {
      *param_4 = (uVar15 + 3) - uVar23;
      if (param_3 == (int)param_2 + uVar17) goto LAB_01ba3abc;
      uVar16 = uVar17;
    }
  }
  uVar17 = uVar16;
LAB_01ba3abc:
  uVar16 = 0;
  uVar9 = piVar19[3];
  uVar23 = *(byte *)(iVar25 + uVar18 * 0x20) & 0x1f;
  iVar11 = *piVar19;
  iVar12 = piVar19[1];
  iVar7 = iVar11 - iVar12;
  iVar22 = 0x1c;
  do {
    bVar29 = iVar22 != 0;
    uVar18 = *(uint *)(iVar3 + iVar22) ^ (uVar2 & 0xff) * 0x1010101;
    uVar16 = (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar22 = iVar22 + -4;
  } while (bVar29);
  iVar22 = 0;
  for (uVar16 = ~uVar16 >> uVar23 | ~uVar16 << 0x20 - uVar23; uVar23 = local_150,
      local_150 != 0 && uVar16 != 0; uVar16 = uVar16 & uVar16 - 1) {
    iVar7 = FUN_01b9b85c(uVar16,0);
    uVar23 = extraout_r2_00 + iVar7 & 0x1f;
    iVar25 = iVar22;
    iVar7 = extraout_r3_00;
    if (uVar23 != 0) {
      uVar23 = *(uint *)(iVar4 + uVar23 * 4);
      if (uVar23 < uVar9) break;
      HintPreloadData(iVar12 + uVar23);
      iVar25 = iVar22 + 1;
      local_12c[iVar22] = uVar23;
      local_150 = local_150 - 1;
    }
    iVar22 = iVar25;
  }
  for (iVar25 = 0; iVar22 != iVar25; iVar25 = iVar25 + 1) {
    uVar16 = local_12c[iVar25];
    uVar23 = iVar12 + uVar16;
    if (*(uint *)(iVar12 + uVar16) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar23 + 4,param_3,iVar11,iVar13 + iVar14);
      uVar23 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar18 = (int)uVar30 + 4;
      if (uVar17 < uVar18) {
        *param_4 = ((3 - iVar14) + uVar15 + iVar7) - uVar16;
        if (param_3 == (int)param_2 + uVar18) goto LAB_01ba3f30;
        uVar17 = uVar18;
      }
    }
  }
  uVar18 = uVar17;
LAB_01ba3f30:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar18,uVar23,local_2c ^ DAT_01d53560,0);
  }
  return;
}

