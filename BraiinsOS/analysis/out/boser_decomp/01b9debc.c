// FUN_01b9debc @ 01b9debc size=2392 calls_out=4 calls_in=3
// strings: 

uint FUN_01b9debc(int param_1,uint *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar9;
  uint *puVar8;
  uint extraout_r2;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint extraout_r3;
  int iVar20;
  int *piVar21;
  uint *puVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  int local_158;
  uint local_154;
  uint local_12c [64];
  uint local_2c;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar19 = -iVar3;
  uVar24 = iVar19 + 0x38;
  local_2c = DAT_01d53560;
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar11 = *(int *)(param_1 + 0x28);
  iVar12 = *(int *)(param_1 + 4);
  iVar13 = *(int *)(param_1 + 0xc);
  uVar14 = (int)param_2 - iVar12;
  uVar15 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar14 - uVar15) {
    local_154 = uVar14 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_154 = uVar15;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_154 = uVar15;
  }
  uVar28 = *(uint *)(param_1 + 0xc4);
  uVar16 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x54);
  uVar15 = uVar28;
  if (5 < uVar28) {
    uVar15 = 6;
  }
  uVar29 = uVar28;
  if (6 < uVar28) {
    uVar29 = uVar28 - 6;
  }
  local_158 = 1 << (uVar15 & 0xff);
  piVar18 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar5 = (uint)lVar1;
  uVar25 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar20 = piVar18[0x30];
  uVar15 = uVar5 >> (0x42U - iVar20 & 0xff) | uVar25 << (iVar20 - 0x22U & 0xff) |
           uVar25 >> (0x22U - iVar20 & 0xff);
  HintPreloadData(piVar18[0x17] + uVar15 * 0x10);
  if (uVar28 < 7) {
    iVar20 = 0;
  }
  else {
    iVar20 = 1 << (uVar29 & 0xff);
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar6 = param_1 + 0x2c;
    uVar28 = *(uint *)(param_1 + 0x1c);
    if (uVar14 - uVar28 < 0x181) {
      iVar30 = iVar10;
      iVar31 = iVar11;
    }
    else {
      iVar3 = uVar28 - 1;
      if (uVar28 < 0xffffffa0) {
        iVar30 = 0x61;
      }
      else {
        iVar30 = 1;
      }
      for (; uVar28 != iVar30 + iVar3; uVar28 = uVar28 + 1) {
        uVar29 = *(uint *)(iVar12 + uVar28 + 8);
        lVar1 = (ulonglong)uVar29 * 0xbf9b0000;
        uVar29 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar12 + uVar28 + 0xc) * -0x40650000 + uVar29 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar5 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar24 & 0xff) |
                uVar29 << (0x20 - uVar24 & 0xff) | uVar29 >> (iVar19 + 0x18U & 0xff);
        uVar29 = uVar5 >> 8;
        HintPreloadData(iVar10 + uVar29 * 0x100);
        HintPreloadData(iVar10 + uVar29 * 0x100 + 0x40);
        HintPreloadData(iVar11 + uVar29 * 0x40);
        HintPreloadData(iVar11 + uVar29 * 0x40 + 0x20);
        uVar25 = *(uint *)(iVar6 + (uVar28 & 7) * 4);
        *(uint *)(iVar6 + (uVar28 & 7) * 4) = uVar5;
        uVar29 = uVar25 >> 8;
        uVar5 = *(byte *)(iVar11 + uVar29 * 0x40) - 1 & 0x3f;
        if (uVar5 == 0) {
          iVar31 = 0x3f;
        }
        else {
          iVar31 = 0;
        }
        iVar31 = uVar5 + iVar31;
        *(char *)(iVar11 + uVar29 * 0x40) = (char)iVar31;
        *(char *)(iVar11 + uVar29 * 0x40 + iVar31) = (char)uVar25;
        *(uint *)(iVar10 + (iVar31 + uVar29 * 0x40) * 4) = uVar28;
      }
      uVar28 = uVar14 - 0x20;
      iVar3 = *(int *)(param_1 + 0x24);
      iVar30 = *(int *)(param_1 + 0x5c);
      iVar31 = *(int *)(param_1 + 0x28);
      uVar29 = 0;
      if (iVar12 + uVar28 <= (int)param_2 + 1U) {
        uVar29 = (((int)param_2 + 1U) - (iVar12 + uVar28)) + 1;
      }
      if (uVar29 < 9) {
        uVar29 = uVar28 + uVar29;
      }
      else {
        uVar29 = uVar14 - 0x18;
      }
      for (uVar5 = uVar28; uVar5 < uVar29; uVar5 = uVar5 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar12 + uVar5) * 0xbf9b0000;
        uVar25 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar12 + uVar5 + 4) * -0x40650000 +
                 *(uint *)(iVar12 + uVar5) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar26 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar3 & 0xff) |
                 uVar25 << (iVar3 - 0x18U & 0xff) | uVar25 >> (0x18U - iVar3 & 0xff);
        uVar25 = uVar26 >> 8;
        HintPreloadData(iVar30 + uVar25 * 0x100);
        HintPreloadData(iVar31 + uVar25 * 0x40);
        HintPreloadData(iVar30 + uVar25 * 0x100 + 0x40);
        HintPreloadData(iVar31 + uVar25 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar5 & 7) * 4 + 0x2c) = uVar26;
      }
    }
    iVar2 = *(int *)(param_1 + 4);
    for (; uVar28 < uVar14; uVar28 = uVar28 + 1) {
      iVar27 = iVar2 + uVar28;
      uVar29 = *(uint *)(iVar27 + 8);
      lVar1 = (ulonglong)uVar29 * 0xbf9b0000;
      uVar29 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar27 + 0xc) * -0x40650000 + uVar29 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar3 & 0xff) |
              uVar29 << (iVar3 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar3 & 0xff);
      uVar29 = uVar5 >> 8;
      HintPreloadData(iVar30 + uVar29 * 0x100);
      HintPreloadData(iVar31 + uVar29 * 0x40);
      HintPreloadData(iVar30 + uVar29 * 0x100 + 0x40);
      HintPreloadData(iVar31 + uVar29 * 0x40 + 0x20);
      uVar25 = *(uint *)(iVar6 + (uVar28 & 7) * 4);
      *(uint *)(iVar6 + (uVar28 & 7) * 4) = uVar5;
      uVar29 = uVar25 >> 8;
      uVar5 = *(byte *)(iVar31 + uVar29 * 0x40) - 1 & 0x3f;
      if (uVar5 == 0) {
        iVar27 = 0x3f;
      }
      else {
        iVar27 = 0;
      }
      iVar27 = uVar5 + iVar27;
      *(char *)(iVar31 + uVar29 * 0x40) = (char)iVar27;
      *(char *)(iVar31 + uVar29 * 0x40 + iVar27) = (char)uVar25;
      *(uint *)(iVar30 + (iVar27 + uVar29 * 0x40) * 4) = uVar28;
    }
    *(uint *)(param_1 + 0x1c) = uVar14;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar17 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar17;
    uVar17 = ((uint)lVar1 ^ uVar16) >> (uVar24 & 0xff) | uVar17 << (0x20 - uVar24 & 0xff) |
             uVar17 >> (iVar19 + 0x18U & 0xff);
    uVar24 = uVar17 >> 8;
    HintPreloadData(iVar10 + uVar24 * 0x100);
    HintPreloadData(iVar10 + uVar24 * 0x100 + 0x40);
    HintPreloadData(iVar11 + uVar24 * 0x40);
    HintPreloadData(iVar11 + uVar24 * 0x40 + 0x20);
    uVar24 = *(uint *)(iVar6 + (uVar14 & 7) * 4);
    *(uint *)(iVar6 + (uVar14 & 7) * 4) = uVar17;
  }
  else {
    uVar17 = uVar17 ^ uVar25;
    uVar24 = (uVar16 ^ uVar5) >> (uVar24 & 0xff) | uVar17 << (0x20 - uVar24 & 0xff) |
             uVar17 >> (iVar19 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar14;
  }
  uVar17 = uVar24 >> 8;
  uVar16 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar24;
  uVar28 = 0;
  iVar10 = iVar10 + uVar17 * 0x100;
  iVar3 = iVar11 + uVar17 * 0x40;
  uVar29 = (uint)*(byte *)(iVar11 + uVar17 * 0x40);
  uVar5 = uVar29 & 0x3f;
  iVar19 = 0x3c;
  do {
    uVar28 = uVar28 << 4 | uVar16 >> 0x1c;
    bVar32 = iVar19 != 0;
    uVar25 = *(uint *)(iVar3 + iVar19) ^ (uVar24 & 0xff) * 0x1010101;
    uVar16 = (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar19 = iVar19 + -4;
  } while (bVar32);
  uVar16 = ~uVar16;
  uVar28 = ~uVar28;
  uVar26 = -uVar5 & 0x3f;
  uVar25 = uVar28 << uVar26 | uVar16 << (uVar26 - 0x20 & 0xff) | uVar16 >> (0x20 - uVar26 & 0xff) |
           uVar28 >> uVar5;
  uVar16 = uVar16 >> uVar5 | uVar28 << (0x20 - uVar5 & 0xff) | uVar28 >> (uVar5 - 0x20 & 0xff) |
           uVar16 << uVar26;
  iVar19 = 0;
  while (uVar4 = (undefined1)uVar24, local_158 != 0 && (uVar16 != 0 || uVar25 != 0)) {
    iVar6 = FUN_01b9b85c(uVar16,uVar25);
    uVar4 = (undefined1)extraout_r2;
    uVar24 = uVar5 + iVar6 & 0x3f;
    iVar6 = iVar19;
    if (uVar24 != 0) {
      uVar24 = *(uint *)(iVar10 + uVar24 * 4);
      if (uVar24 < local_154) break;
      HintPreloadData(iVar12 + uVar24);
      iVar6 = iVar19 + 1;
      local_12c[iVar19] = uVar24;
      local_158 = local_158 + -1;
    }
    uVar25 = uVar25 & uVar25 - (extraout_r3 == 0);
    uVar24 = extraout_r2;
    iVar19 = iVar6;
    uVar16 = extraout_r3 & extraout_r3 - 1;
  }
  iVar6 = 0;
  uVar24 = uVar29 - 1 & 0x3f;
  if (uVar24 == 0) {
    iVar30 = 0x3f;
  }
  else {
    iVar30 = 0;
  }
  iVar30 = uVar24 + iVar30;
  *(char *)(iVar11 + uVar17 * 0x40) = (char)iVar30;
  *(undefined1 *)(iVar3 + iVar30) = uVar4;
  iVar3 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  *(int *)(iVar10 + iVar30 * 4) = iVar3;
  uVar24 = 3;
  for (; iVar19 != iVar6; iVar6 = iVar6 + 1) {
    uVar17 = local_12c[iVar6];
    iVar3 = iVar12 + uVar17;
    if ((*(int *)(iVar3 + (uVar24 - 3)) == *(int *)((int)param_2 + (uVar24 - 3))) &&
       (uVar16 = FUN_01b9b884(param_2,iVar3,param_3), uVar24 < uVar16)) {
      *param_4 = (uVar14 + 3) - uVar17;
      if (param_3 == (int *)((int)param_2 + uVar16)) goto LAB_01b9e2d0;
      uVar24 = uVar16;
    }
  }
  uVar16 = uVar24;
LAB_01b9e2d0:
  uVar17 = local_158 + iVar20;
  iVar19 = *piVar18;
  iVar3 = piVar18[1];
  piVar7 = (int *)(iVar19 - iVar3);
  uVar24 = uVar17;
  if (2 < uVar17) {
    uVar24 = 3;
  }
  iVar10 = piVar18[0x17];
  puVar22 = (uint *)(uVar15 * 0x10 + iVar10);
  puVar8 = puVar22;
  do {
    puVar9 = puVar8 + 1;
    uVar28 = *puVar8;
    HintPreloadData(iVar3 + uVar28);
    puVar8 = puVar9;
  } while ((uint *)(iVar10 + 0xc + uVar15 * 0x10) != puVar9);
  uVar29 = 0;
  iVar20 = uVar15 * 4 + 0x40000003;
  iVar11 = piVar18[0x19];
  HintPreloadData(iVar11 + (*(uint *)(iVar10 + iVar20 * 4) >> 8) * 4);
  piVar18 = piVar7;
  for (; uVar24 != uVar29; uVar29 = uVar29 + 1) {
    uVar15 = *puVar22;
    if (uVar15 == 0) goto LAB_01b9e3fc;
    uVar28 = *(uint *)(iVar3 + uVar15);
    piVar18 = (int *)(iVar3 + uVar15);
    if (uVar28 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar3 + uVar15) + 1,param_3,iVar19,iVar12 + iVar13);
      uVar28 = (int)uVar33 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if ((uVar16 < uVar28) &&
         (*param_4 = (int)piVar7 + (((3 - iVar13) + uVar14) - uVar15), piVar18 = param_3,
         uVar16 = uVar28, param_3 == (int *)((int)param_2 + uVar28))) goto LAB_01b9e3fc;
    }
    puVar22 = puVar22 + 1;
  }
  uVar28 = *(uint *)(iVar10 + iVar20 * 4);
  uVar15 = uVar28 >> 8;
  piVar21 = (int *)(iVar11 + uVar15 * 4);
  uVar28 = uVar28 & 0xff;
  uVar29 = uVar28;
  if (uVar17 - uVar24 < uVar28) {
    uVar29 = uVar17 - uVar24;
  }
  piVar18 = (int *)(iVar11 + (uVar15 + uVar29) * 4);
  piVar23 = piVar21;
  while (piVar18 != piVar23) {
    HintPreloadData(iVar3 + *piVar23);
    piVar23 = piVar23 + 1;
  }
  for (; piVar23 != piVar21; piVar21 = piVar21 + 1) {
    iVar10 = *piVar21;
    uVar28 = *(uint *)(iVar3 + iVar10);
    piVar18 = (int *)(iVar3 + iVar10);
    if (uVar28 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar3 + iVar10) + 1,param_3,iVar19,iVar12 + iVar13);
      uVar28 = (uint)uVar33;
      uVar15 = uVar28 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if (uVar16 < uVar15) {
        *param_4 = (int)piVar7 + (((3 - iVar13) + uVar14) - iVar10);
        piVar18 = param_3;
        uVar16 = uVar15;
        if (param_3 == (int *)((int)param_2 + uVar15)) goto LAB_01b9e3fc;
      }
    }
  }
LAB_01b9e3fc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar28,piVar18,local_2c ^ DAT_01d53560,0);
  }
  return uVar16;
}

