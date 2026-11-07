// FUN_01ba03a8 @ 01ba03a8 size=2292 calls_out=4 calls_in=3
// strings: 

uint FUN_01ba03a8(int param_1,uint *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar8;
  uint *puVar7;
  uint extraout_r2;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint extraout_r3;
  int iVar21;
  int *piVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar23 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar20 = -iVar5;
  uVar24 = iVar20 + 0x38;
  iVar11 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 0xc);
  uVar13 = (int)param_2 - iVar11;
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar13 - uVar14) {
    local_150 = uVar13 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar14;
  }
  uVar27 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar14;
  }
  uVar15 = *(uint *)(param_1 + 0x50);
  uVar16 = *(uint *)(param_1 + 0x54);
  uVar14 = uVar27;
  if (4 < uVar27) {
    uVar14 = 5;
  }
  uVar28 = uVar27;
  if (5 < uVar27) {
    uVar28 = uVar27 - 5;
  }
  local_154 = 1 << (uVar14 & 0xff);
  piVar17 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar18 = (uint)lVar1;
  uVar14 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar31 = piVar17[0x30];
  uVar2 = uVar18 >> (0x42U - iVar31 & 0xff) | uVar14 << (iVar31 - 0x22U & 0xff) |
          uVar14 >> (0x22U - iVar31 & 0xff);
  HintPreloadData(piVar17[0x17] + uVar2 * 0x10);
  if (uVar27 < 6) {
    iVar31 = 0;
  }
  else {
    iVar31 = 1 << (uVar28 & 0xff);
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar19 = param_1 + 0x2c;
    uVar14 = *(uint *)(param_1 + 0x1c);
    if (uVar13 - uVar14 < 0x181) {
      iVar29 = iVar10;
      iVar30 = iVar23;
    }
    else {
      iVar5 = uVar14 - 1;
      if (uVar14 < 0xffffffa0) {
        iVar29 = 0x61;
      }
      else {
        iVar29 = 1;
      }
      for (; uVar14 != iVar29 + iVar5; uVar14 = uVar14 + 1) {
        uVar27 = *(uint *)(iVar11 + uVar14 + 8);
        lVar1 = (ulonglong)uVar27 * 0xbb000000;
        uVar27 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar11 + uVar14 + 0xc) * -0x45000000 + uVar27 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar28 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar24 & 0xff) |
                 uVar27 << (0x20 - uVar24 & 0xff) | uVar27 >> (iVar20 + 0x18U & 0xff);
        uVar27 = uVar28 >> 8;
        HintPreloadData(iVar10 + uVar27 * 0x80);
        HintPreloadData(iVar23 + uVar27 * 0x20);
        HintPreloadData(iVar10 + uVar27 * 0x80 + 0x40);
        uVar18 = *(uint *)(iVar19 + (uVar14 & 7) * 4);
        *(uint *)(iVar19 + (uVar14 & 7) * 4) = uVar28;
        uVar27 = uVar18 >> 8;
        uVar28 = *(byte *)(iVar23 + uVar27 * 0x20) - 1 & 0x1f;
        if (uVar28 == 0) {
          iVar30 = 0x1f;
        }
        else {
          iVar30 = 0;
        }
        iVar30 = uVar28 + iVar30;
        *(char *)(iVar23 + uVar27 * 0x20) = (char)iVar30;
        *(char *)(iVar23 + uVar27 * 0x20 + iVar30) = (char)uVar18;
        *(uint *)(iVar10 + (iVar30 + uVar27 * 0x20) * 4) = uVar14;
      }
      uVar14 = uVar13 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar29 = *(int *)(param_1 + 0x5c);
      iVar30 = *(int *)(param_1 + 0x28);
      uVar27 = 0;
      if (iVar11 + uVar14 <= (int)param_2 + 1U) {
        uVar27 = (((int)param_2 + 1U) - (iVar11 + uVar14)) + 1;
      }
      if (uVar27 < 9) {
        uVar27 = uVar14 + uVar27;
      }
      else {
        uVar27 = uVar13 - 0x18;
      }
      for (uVar28 = uVar14; uVar28 < uVar27; uVar28 = uVar28 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar11 + uVar28) * 0xbb000000;
        uVar18 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar11 + uVar28 + 4) * -0x45000000 +
                 *(uint *)(iVar11 + uVar28) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar18 << (iVar5 - 0x18U & 0xff) | uVar18 >> (0x18U - iVar5 & 0xff);
        uVar18 = uVar4 >> 8;
        HintPreloadData(iVar29 + uVar18 * 0x80);
        HintPreloadData(iVar30 + uVar18 * 0x20);
        HintPreloadData(iVar29 + uVar18 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar28 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar14 < uVar13; uVar14 = uVar14 + 1) {
      iVar21 = iVar3 + uVar14;
      uVar27 = *(uint *)(iVar21 + 8);
      lVar1 = (ulonglong)uVar27 * 0xbb000000;
      uVar27 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar21 + 0xc) * -0x45000000 + uVar27 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar18 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
               uVar27 << (iVar5 - 0x18U & 0xff) | uVar27 >> (0x18U - iVar5 & 0xff);
      uVar27 = uVar18 >> 8;
      HintPreloadData(iVar29 + uVar27 * 0x80);
      HintPreloadData(iVar30 + uVar27 * 0x20);
      HintPreloadData(iVar29 + uVar27 * 0x80 + 0x40);
      uVar28 = *(uint *)(iVar19 + (uVar14 & 7) * 4);
      *(uint *)(iVar19 + (uVar14 & 7) * 4) = uVar18;
      uVar27 = uVar28 >> 8;
      uVar18 = *(byte *)(iVar30 + uVar27 * 0x20) - 1 & 0x1f;
      if (uVar18 == 0) {
        iVar21 = 0x1f;
      }
      else {
        iVar21 = 0;
      }
      iVar21 = uVar18 + iVar21;
      *(char *)(iVar30 + uVar27 * 0x20) = (char)iVar21;
      *(char *)(iVar30 + uVar27 * 0x20 + iVar21) = (char)uVar28;
      *(uint *)(iVar29 + (iVar21 + uVar27 * 0x20) * 4) = uVar14;
    }
    uVar27 = param_2[2];
    uVar14 = param_2[3];
    *(uint *)(param_1 + 0x1c) = uVar13;
    lVar1 = (ulonglong)uVar27 * 0xbb000000;
    uVar16 = uVar14 * -0x45000000 + uVar27 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^ uVar16;
    uVar24 = ((uint)lVar1 ^ uVar15) >> (uVar24 & 0xff) | uVar16 << (0x20 - uVar24 & 0xff) |
             uVar16 >> (iVar20 + 0x18U & 0xff);
    uVar14 = uVar24 >> 8;
    HintPreloadData(iVar10 + uVar14 * 0x80);
    HintPreloadData(iVar23 + uVar14 * 0x20);
    HintPreloadData(iVar10 + uVar14 * 0x80 + 0x40);
    uVar14 = *(uint *)(iVar19 + (uVar13 & 7) * 4);
    *(uint *)(iVar19 + (uVar13 & 7) * 4) = uVar24;
  }
  else {
    uVar16 = uVar16 ^ uVar14;
    uVar14 = (uVar15 ^ uVar18) >> (uVar24 & 0xff) | uVar16 << (0x20 - uVar24 & 0xff) |
             uVar16 >> (iVar20 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar13;
  }
  uVar24 = uVar14 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar14;
  uVar16 = (uint)*(byte *)(iVar23 + uVar24 * 0x20);
  uVar27 = 0;
  uVar15 = uVar16 & 0x1f;
  iVar10 = iVar10 + uVar24 * 0x80;
  iVar5 = iVar23 + uVar24 * 0x20;
  iVar20 = 0x1c;
  do {
    bVar32 = iVar20 != 0;
    uVar28 = *(uint *)(iVar5 + iVar20) ^ (uVar14 & 0xff) * 0x1010101;
    uVar27 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
             uVar27 << 4;
    iVar20 = iVar20 + -4;
  } while (bVar32);
  uVar27 = ~uVar27 >> uVar15 | ~uVar27 << 0x20 - uVar15;
  iVar20 = 0;
  while (uVar9 = (undefined1)uVar14, local_154 != 0 && uVar27 != 0) {
    iVar19 = FUN_01b9b85c(uVar27,0);
    uVar9 = (undefined1)extraout_r3;
    uVar14 = uVar15 + iVar19 & 0x1f;
    iVar19 = iVar20;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(iVar10 + uVar14 * 4);
      if (uVar14 < local_150) break;
      HintPreloadData(iVar11 + uVar14);
      iVar19 = iVar20 + 1;
      local_12c[iVar20] = uVar14;
      local_154 = local_154 + -1;
    }
    uVar14 = extraout_r3;
    iVar20 = iVar19;
    uVar27 = extraout_r2 & extraout_r2 - 1;
  }
  uVar14 = uVar16 - 1 & 0x1f;
  if (uVar14 == 0) {
    iVar19 = 0x1f;
  }
  else {
    iVar19 = 0;
  }
  iVar19 = uVar14 + iVar19;
  *(char *)(iVar23 + uVar24 * 0x20) = (char)iVar19;
  *(undefined1 *)(iVar5 + iVar19) = uVar9;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar10 + iVar19 * 4) = iVar5;
  uVar14 = 3;
  for (iVar5 = 0; iVar20 != iVar5; iVar5 = iVar5 + 1) {
    uVar24 = local_12c[iVar5];
    iVar10 = iVar11 + uVar24;
    if ((*(int *)(iVar10 + (uVar14 - 3)) == *(int *)((int)param_2 + (uVar14 - 3))) &&
       (uVar27 = FUN_01b9b884(param_2,iVar10,param_3), uVar14 < uVar27)) {
      *param_4 = (uVar13 + 3) - uVar24;
      if (param_3 == (int *)((int)param_2 + uVar27)) goto LAB_01ba076c;
      uVar14 = uVar27;
    }
  }
  uVar27 = uVar14;
LAB_01ba076c:
  uVar24 = local_154 + iVar31;
  iVar20 = *piVar17;
  iVar5 = piVar17[1];
  piVar6 = (int *)(iVar20 - iVar5);
  uVar14 = uVar24;
  if (2 < uVar24) {
    uVar14 = 3;
  }
  iVar10 = piVar17[0x17];
  puVar25 = (uint *)(uVar2 * 0x10 + iVar10);
  puVar7 = puVar25;
  do {
    puVar8 = puVar7 + 1;
    uVar16 = *puVar7;
    HintPreloadData(iVar5 + uVar16);
    puVar7 = puVar8;
  } while ((uint *)(iVar10 + 0xc + uVar2 * 0x10) != puVar8);
  uVar15 = 0;
  iVar31 = uVar2 * 4 + 0x40000003;
  iVar23 = piVar17[0x19];
  HintPreloadData(iVar23 + (*(uint *)(iVar10 + iVar31 * 4) >> 8) * 4);
  piVar17 = piVar6;
  for (; uVar14 != uVar15; uVar15 = uVar15 + 1) {
    uVar28 = *puVar25;
    if (uVar28 == 0) goto LAB_01ba0898;
    uVar16 = *(uint *)(iVar5 + uVar28);
    piVar17 = (int *)(iVar5 + uVar28);
    if (uVar16 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar5 + uVar28) + 1,param_3,iVar20,iVar11 + iVar12);
      uVar16 = (int)uVar33 + 4;
      piVar17 = (int *)((ulonglong)uVar33 >> 0x20);
      if ((uVar27 < uVar16) &&
         (*param_4 = (int)piVar6 + (((3 - iVar12) + uVar13) - uVar28), piVar17 = param_3,
         uVar27 = uVar16, param_3 == (int *)((int)param_2 + uVar16))) goto LAB_01ba0898;
    }
    puVar25 = puVar25 + 1;
  }
  uVar16 = *(uint *)(iVar10 + iVar31 * 4);
  uVar15 = uVar16 >> 8;
  piVar22 = (int *)(iVar23 + uVar15 * 4);
  uVar16 = uVar16 & 0xff;
  uVar28 = uVar16;
  if (uVar24 - uVar14 < uVar16) {
    uVar28 = uVar24 - uVar14;
  }
  piVar17 = (int *)(iVar23 + (uVar15 + uVar28) * 4);
  piVar26 = piVar22;
  while (piVar17 != piVar26) {
    HintPreloadData(iVar5 + *piVar26);
    piVar26 = piVar26 + 1;
  }
  for (; piVar26 != piVar22; piVar22 = piVar22 + 1) {
    iVar10 = *piVar22;
    uVar16 = *(uint *)(iVar5 + iVar10);
    piVar17 = (int *)(iVar5 + iVar10);
    if (uVar16 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar5 + iVar10) + 1,param_3,iVar20,iVar11 + iVar12);
      uVar16 = (uint)uVar33;
      uVar14 = uVar16 + 4;
      piVar17 = (int *)((ulonglong)uVar33 >> 0x20);
      if (uVar27 < uVar14) {
        *param_4 = (int)piVar6 + (((3 - iVar12) + uVar13) - iVar10);
        piVar17 = param_3;
        uVar27 = uVar14;
        if (param_3 == (int *)((int)param_2 + uVar14)) goto LAB_01ba0898;
      }
    }
  }
LAB_01ba0898:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar16,piVar17,local_2c ^ DAT_01d53560,0);
  }
  return uVar27;
}

