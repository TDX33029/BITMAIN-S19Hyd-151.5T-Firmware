// FUN_01ba5a60 @ 01ba5a60 size=2208 calls_out=4 calls_in=3
// strings: 

void FUN_01ba5a60(int param_1,uint *param_2,int param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_150;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar9 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar11 = *(int *)(param_1 + 0x28);
  iVar12 = *(int *)(param_1 + 4);
  iVar13 = *(int *)(param_1 + 0xc);
  uVar14 = (int)param_2 - iVar12;
  uVar15 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar14 - uVar15) {
    local_150 = uVar14 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar15;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar15;
  }
  uVar16 = *(uint *)(param_1 + 0x50);
  uVar15 = *(uint *)(param_1 + 0x54);
  uVar17 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar17) {
    uVar17 = 4;
  }
  local_148 = 1 << (uVar17 & 0xff);
  piVar18 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar19 = (uint)lVar1;
  uVar26 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar24 = piVar18[9];
  uVar2 = uVar19 >> (0x38U - iVar24 & 0xff) | uVar26 << (iVar24 - 0x18U & 0xff) |
          uVar26 >> (0x18U - iVar24 & 0xff);
  uVar17 = uVar2 >> 8;
  iVar3 = piVar18[10];
  iVar4 = iVar3 + uVar17 * 0x10;
  iVar5 = piVar18[0x17] + uVar17 * 0x40;
  iVar24 = -iVar9;
  uVar25 = iVar24 + 0x38;
  HintPreloadData(iVar5);
  HintPreloadData(iVar4);
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar19 = *(uint *)(param_1 + 0x1c);
    iVar23 = param_1 + 0x2c;
    if (uVar14 - uVar19 < 0x181) {
      iVar20 = iVar10;
      iVar27 = iVar11;
    }
    else {
      iVar9 = uVar19 - 1;
      if (uVar19 < 0xffffffa0) {
        iVar20 = 0x61;
      }
      else {
        iVar20 = 1;
      }
      for (; uVar19 != iVar20 + iVar9; uVar19 = uVar19 + 1) {
        uVar26 = *(uint *)(iVar12 + uVar19 + 8);
        lVar1 = (ulonglong)uVar26 * 0xbb000000;
        uVar26 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar12 + uVar19 + 0xc) * -0x45000000 + uVar26 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar25 & 0xff) |
                 uVar26 << (0x20 - uVar25 & 0xff) | uVar26 >> (iVar24 + 0x18U & 0xff);
        uVar26 = uVar28 >> 8;
        HintPreloadData(iVar10 + uVar26 * 0x40);
        HintPreloadData(iVar11 + uVar26 * 0x10);
        uVar22 = *(uint *)(iVar23 + (uVar19 & 7) * 4);
        *(uint *)(iVar23 + (uVar19 & 7) * 4) = uVar28;
        uVar26 = uVar22 >> 8;
        uVar28 = *(byte *)(iVar11 + uVar26 * 0x10) - 1 & 0xf;
        if (uVar28 == 0) {
          iVar27 = 0xf;
        }
        else {
          iVar27 = 0;
        }
        iVar27 = uVar28 + iVar27;
        *(char *)(iVar11 + uVar26 * 0x10) = (char)iVar27;
        *(char *)(iVar11 + uVar26 * 0x10 + iVar27) = (char)uVar22;
        *(uint *)(iVar10 + (iVar27 + uVar26 * 0x10) * 4) = uVar19;
      }
      uVar19 = uVar14 - 0x20;
      iVar9 = *(int *)(param_1 + 0x24);
      iVar20 = *(int *)(param_1 + 0x5c);
      iVar27 = *(int *)(param_1 + 0x28);
      uVar26 = 0;
      if (iVar12 + uVar19 <= (int)param_2 + 1U) {
        uVar26 = (((int)param_2 + 1U) - (iVar12 + uVar19)) + 1;
      }
      if (uVar26 < 9) {
        uVar26 = uVar19 + uVar26;
      }
      else {
        uVar26 = uVar14 - 0x18;
      }
      for (uVar28 = uVar19; uVar28 < uVar26; uVar28 = uVar28 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar12 + uVar28) * 0xbb000000;
        uVar22 = *(int *)(iVar12 + uVar28 + 4) * -0x45000000 +
                 *(uint *)(iVar12 + uVar28) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar7 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar9 & 0xff) |
                uVar22 << (iVar9 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar9 & 0xff);
        uVar22 = uVar7 >> 8;
        HintPreloadData(iVar20 + uVar22 * 0x40);
        HintPreloadData(iVar27 + uVar22 * 0x10);
        *(uint *)(param_1 + (uVar28 & 7) * 4 + 0x2c) = uVar7;
      }
    }
    iVar6 = *(int *)(param_1 + 4);
    for (; uVar19 < uVar14; uVar19 = uVar19 + 1) {
      iVar21 = iVar6 + uVar19;
      uVar26 = *(uint *)(iVar21 + 8);
      lVar1 = (ulonglong)uVar26 * 0xbb000000;
      uVar26 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar21 + 0xc) * -0x45000000 + uVar26 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar28 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar9 & 0xff) |
               uVar26 << (iVar9 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar9 & 0xff);
      uVar26 = uVar28 >> 8;
      HintPreloadData(iVar20 + uVar26 * 0x40);
      HintPreloadData(iVar27 + uVar26 * 0x10);
      uVar22 = *(uint *)(iVar23 + (uVar19 & 7) * 4);
      *(uint *)(iVar23 + (uVar19 & 7) * 4) = uVar28;
      uVar26 = uVar22 >> 8;
      uVar28 = *(byte *)(iVar27 + uVar26 * 0x10) - 1 & 0xf;
      if (uVar28 == 0) {
        iVar21 = 0xf;
      }
      else {
        iVar21 = 0;
      }
      iVar21 = uVar28 + iVar21;
      *(char *)(iVar27 + uVar26 * 0x10) = (char)iVar21;
      *(char *)(iVar27 + uVar26 * 0x10 + iVar21) = (char)uVar22;
      *(uint *)(iVar20 + (iVar21 + uVar26 * 0x10) * 4) = uVar19;
    }
    *(uint *)(param_1 + 0x1c) = uVar14;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar15 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar15;
    uVar16 = ((uint)lVar1 ^ uVar16) >> (uVar25 & 0xff) | uVar15 << (0x20 - uVar25 & 0xff) |
             uVar15 >> (iVar24 + 0x18U & 0xff);
    uVar15 = uVar16 >> 8;
    HintPreloadData(iVar10 + uVar15 * 0x40);
    HintPreloadData(iVar11 + uVar15 * 0x10);
    uVar15 = *(uint *)(iVar23 + (uVar14 & 7) * 4);
    *(uint *)(iVar23 + (uVar14 & 7) * 4) = uVar16;
  }
  else {
    uVar15 = uVar15 ^ uVar26;
    uVar15 = (uVar16 ^ uVar19) >> (uVar25 & 0xff) | uVar15 << (0x20 - uVar25 & 0xff) |
             uVar15 >> (iVar24 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar14;
  }
  uVar16 = uVar15 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar15;
  iVar10 = iVar10 + uVar16 * 0x40;
  uVar25 = (uint)*(byte *)(iVar11 + uVar16 * 0x10);
  iVar24 = iVar11 + uVar16 * 0x10;
  uVar19 = 0;
  uVar26 = uVar25 & 0xf;
  iVar9 = 0xc;
  do {
    bVar29 = iVar9 != 0;
    uVar28 = *(uint *)(iVar24 + iVar9) ^ (uVar15 & 0xff) * 0x1010101;
    uVar19 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
             uVar19 << 4;
    iVar9 = iVar9 + -4;
  } while (bVar29);
  uVar19 = (~uVar19 << (-uVar26 & 0xf) | (~uVar19 & 0xffff) >> uVar26) & 0xffff;
  iVar9 = 0;
  while (uVar8 = (undefined1)uVar15, local_148 != 0 && uVar19 != 0) {
    iVar23 = FUN_01b9b85c(uVar19);
    uVar8 = (undefined1)extraout_r2;
    uVar15 = uVar26 + iVar23 & 0xf;
    iVar23 = iVar9;
    if (uVar15 != 0) {
      uVar15 = *(uint *)(iVar10 + uVar15 * 4);
      if (uVar15 < local_150) break;
      HintPreloadData(iVar12 + uVar15);
      iVar23 = iVar9 + 1;
      local_12c[iVar9] = uVar15;
      local_148 = local_148 - 1;
    }
    uVar15 = extraout_r2;
    iVar9 = iVar23;
    uVar19 = extraout_r3 & extraout_r3 - 1;
  }
  uVar15 = uVar25 - 1 & 0xf;
  if (uVar15 == 0) {
    iVar23 = 0xf;
  }
  else {
    iVar23 = 0;
  }
  iVar23 = uVar15 + iVar23;
  *(char *)(iVar11 + uVar16 * 0x10) = (char)iVar23;
  *(undefined1 *)(iVar24 + iVar23) = uVar8;
  iVar11 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar11 + 1;
  *(int *)(iVar10 + iVar23 * 4) = iVar11;
  uVar15 = 3;
  for (iVar10 = 0; iVar9 != iVar10; iVar10 = iVar10 + 1) {
    uVar16 = local_12c[iVar10];
    iVar11 = iVar12 + uVar16;
    if ((*(int *)(iVar11 + (uVar15 - 3)) == *(int *)((int)param_2 + (uVar15 - 3))) &&
       (uVar19 = FUN_01b9b884(param_2,iVar11,param_3), uVar15 < uVar19)) {
      *param_4 = (uVar14 + 3) - uVar16;
      if (param_3 == (int)param_2 + uVar19) goto LAB_01ba5e50;
      uVar15 = uVar19;
    }
  }
  uVar19 = uVar15;
LAB_01ba5e50:
  uVar16 = 0;
  uVar15 = *(byte *)(iVar3 + uVar17 * 0x10) & 0xf;
  iVar11 = *piVar18;
  iVar24 = piVar18[1];
  iVar10 = iVar11 - iVar24;
  iVar9 = 0xc;
  do {
    bVar29 = iVar9 != 0;
    uVar17 = *(uint *)(iVar4 + iVar9) ^ (uVar2 & 0xff) * 0x1010101;
    uVar16 = (((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar9 = iVar9 + -4;
  } while (bVar29);
  iVar9 = 0;
  for (uVar16 = (~uVar16 << (-uVar15 & 0xf) | (~uVar16 & 0xffff) >> uVar15) & 0xffff;
      uVar17 = local_148, local_148 != 0 && uVar16 != 0; uVar16 = uVar16 & uVar16 - 1) {
    iVar10 = FUN_01b9b85c(uVar16,0);
    uVar17 = uVar15 + iVar10 & 0xf;
    iVar3 = iVar9;
    iVar10 = extraout_r3_00;
    if (uVar17 != 0) {
      uVar17 = *(uint *)(iVar5 + uVar17 * 4);
      if (uVar17 < extraout_r2_00) break;
      HintPreloadData(iVar24 + uVar17);
      iVar3 = iVar9 + 1;
      local_12c[iVar9] = uVar17;
      local_148 = local_148 - 1;
    }
    iVar9 = iVar3;
  }
  for (iVar3 = 0; iVar9 != iVar3; iVar3 = iVar3 + 1) {
    uVar15 = local_12c[iVar3];
    uVar17 = iVar24 + uVar15;
    if (*(uint *)(iVar24 + uVar15) == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,uVar17 + 4,param_3,iVar11,iVar12 + iVar13);
      uVar17 = (uint)((ulonglong)uVar30 >> 0x20);
      uVar16 = (int)uVar30 + 4;
      if (uVar19 < uVar16) {
        *param_4 = ((3 - iVar13) + uVar14 + iVar10) - uVar15;
        if (param_3 == (int)param_2 + uVar16) goto LAB_01ba62b8;
        uVar19 = uVar16;
      }
    }
  }
  uVar16 = uVar19;
LAB_01ba62b8:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar16,uVar17,local_2c ^ DAT_01d53560,0);
  }
  return;
}

