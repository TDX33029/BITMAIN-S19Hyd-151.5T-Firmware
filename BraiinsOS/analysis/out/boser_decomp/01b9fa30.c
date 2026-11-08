// FUN_01b9fa30 @ 01b9fa30 size=2400 calls_out=4 calls_in=3
// strings: 

uint FUN_01b9fa30(int param_1,uint *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar7;
  uint *puVar6;
  uint extraout_r2;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint extraout_r3;
  int iVar20;
  int *piVar21;
  int iVar22;
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar22 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar19 = -iVar4;
  uVar25 = iVar19 + 0x38;
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0xc);
  uVar12 = (int)param_2 - iVar10;
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar12 - uVar13) {
    local_150 = uVar12 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_150 = uVar13;
  }
  uVar26 = *(uint *)(param_1 + 0xc4);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar15 = *(uint *)(param_1 + 0x54);
  uVar13 = uVar26;
  if (5 < uVar26) {
    uVar13 = 6;
  }
  uVar27 = uVar26;
  if (6 < uVar26) {
    uVar27 = uVar26 - 6;
  }
  local_154 = 1 << (uVar13 & 0xff);
  piVar16 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar17 = (uint)lVar1;
  uVar13 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar30 = piVar16[0x30];
  uVar2 = uVar17 >> (0x42U - iVar30 & 0xff) | uVar13 << (iVar30 - 0x22U & 0xff) |
          uVar13 >> (0x22U - iVar30 & 0xff);
  HintPreloadData(piVar16[0x17] + uVar2 * 0x10);
  if (uVar26 < 7) {
    iVar30 = 0;
  }
  else {
    iVar30 = 1 << (uVar27 & 0xff);
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar18 = param_1 + 0x2c;
    uVar13 = *(uint *)(param_1 + 0x1c);
    if (uVar12 - uVar13 < 0x181) {
      iVar28 = iVar22;
      iVar31 = iVar9;
    }
    else {
      iVar4 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar28 = 0x61;
      }
      else {
        iVar28 = 1;
      }
      for (; uVar13 != iVar28 + iVar4; uVar13 = uVar13 + 1) {
        uVar26 = *(uint *)(iVar10 + uVar13 + 8);
        lVar1 = (ulonglong)uVar26 * 0xbb000000;
        uVar26 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar13 + 0xc) * -0x45000000 + uVar26 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar27 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar25 & 0xff) |
                 uVar26 << (0x20 - uVar25 & 0xff) | uVar26 >> (iVar19 + 0x18U & 0xff);
        uVar26 = uVar27 >> 8;
        HintPreloadData(iVar9 + uVar26 * 0x100);
        HintPreloadData(iVar22 + uVar26 * 0x40);
        HintPreloadData(iVar9 + uVar26 * 0x100 + 0x40);
        HintPreloadData(iVar22 + uVar26 * 0x40 + 0x20);
        uVar17 = *(uint *)(iVar18 + (uVar13 & 7) * 4);
        *(uint *)(iVar18 + (uVar13 & 7) * 4) = uVar27;
        uVar26 = uVar17 >> 8;
        uVar27 = *(byte *)(iVar22 + uVar26 * 0x40) - 1 & 0x3f;
        if (uVar27 == 0) {
          iVar31 = 0x3f;
        }
        else {
          iVar31 = 0;
        }
        iVar31 = uVar27 + iVar31;
        *(char *)(iVar22 + uVar26 * 0x40) = (char)iVar31;
        *(char *)(iVar22 + uVar26 * 0x40 + iVar31) = (char)uVar17;
        *(uint *)(iVar9 + (iVar31 + uVar26 * 0x40) * 4) = uVar13;
      }
      uVar13 = uVar12 - 0x20;
      iVar31 = *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x24);
      iVar28 = *(int *)(param_1 + 0x28);
      uVar26 = 0;
      if (iVar10 + uVar13 <= (int)param_2 + 1U) {
        uVar26 = (((int)param_2 + 1U) - (iVar10 + uVar13)) + 1;
      }
      if (uVar26 < 9) {
        uVar26 = uVar13 + uVar26;
      }
      else {
        uVar26 = uVar12 - 0x18;
      }
      for (uVar27 = uVar13; uVar27 < uVar26; uVar27 = uVar27 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar10 + uVar27) * 0xbb000000;
        uVar17 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar10 + uVar27 + 4) * -0x45000000 +
                 *(uint *)(iVar10 + uVar27) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar29 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
                 uVar17 << (iVar4 - 0x18U & 0xff) | uVar17 >> (0x18U - iVar4 & 0xff);
        uVar17 = uVar29 >> 8;
        HintPreloadData(iVar31 + uVar17 * 0x100);
        HintPreloadData(iVar28 + uVar17 * 0x40);
        HintPreloadData(iVar31 + uVar17 * 0x100 + 0x40);
        HintPreloadData(iVar28 + uVar17 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar27 & 7) * 4 + 0x2c) = uVar29;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar12; uVar13 = uVar13 + 1) {
      iVar20 = iVar3 + uVar13;
      uVar26 = *(uint *)(iVar20 + 8);
      lVar1 = (ulonglong)uVar26 * 0xbb000000;
      uVar26 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar20 + 0xc) * -0x45000000 + uVar26 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar27 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar4 & 0xff) |
               uVar26 << (iVar4 - 0x18U & 0xff) | uVar26 >> (0x18U - iVar4 & 0xff);
      uVar26 = uVar27 >> 8;
      HintPreloadData(iVar31 + uVar26 * 0x100);
      HintPreloadData(iVar28 + uVar26 * 0x40);
      HintPreloadData(iVar31 + uVar26 * 0x100 + 0x40);
      HintPreloadData(iVar28 + uVar26 * 0x40 + 0x20);
      uVar17 = *(uint *)(iVar18 + (uVar13 & 7) * 4);
      *(uint *)(iVar18 + (uVar13 & 7) * 4) = uVar27;
      uVar26 = uVar17 >> 8;
      uVar27 = *(byte *)(iVar28 + uVar26 * 0x40) - 1 & 0x3f;
      if (uVar27 == 0) {
        iVar20 = 0x3f;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = uVar27 + iVar20;
      *(char *)(iVar28 + uVar26 * 0x40) = (char)iVar20;
      *(char *)(iVar28 + uVar26 * 0x40 + iVar20) = (char)uVar17;
      *(uint *)(iVar31 + (iVar20 + uVar26 * 0x40) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar15 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar15;
    uVar25 = ((uint)lVar1 ^ uVar14) >> (uVar25 & 0xff) | uVar15 << (0x20 - uVar25 & 0xff) |
             uVar15 >> (iVar19 + 0x18U & 0xff);
    uVar13 = uVar25 >> 8;
    HintPreloadData(iVar9 + uVar13 * 0x100);
    HintPreloadData(iVar22 + uVar13 * 0x40);
    HintPreloadData(iVar9 + uVar13 * 0x100 + 0x40);
    HintPreloadData(iVar22 + uVar13 * 0x40 + 0x20);
    uVar13 = *(uint *)(iVar18 + (uVar12 & 7) * 4);
    *(uint *)(iVar18 + (uVar12 & 7) * 4) = uVar25;
  }
  else {
    uVar15 = uVar15 ^ uVar13;
    uVar13 = (uVar14 ^ uVar17) >> (uVar25 & 0xff) | uVar15 << (0x20 - uVar25 & 0xff) |
             uVar15 >> (iVar19 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar25 = uVar13 >> 8;
  uVar26 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar13;
  uVar14 = (uint)*(byte *)(iVar22 + uVar25 * 0x40);
  uVar15 = 0;
  uVar27 = uVar14 & 0x3f;
  iVar9 = iVar9 + uVar25 * 0x100;
  iVar4 = iVar22 + uVar25 * 0x40;
  iVar19 = 0x3c;
  do {
    uVar15 = uVar15 << 4 | uVar26 >> 0x1c;
    bVar32 = iVar19 != 0;
    uVar17 = *(uint *)(iVar4 + iVar19) ^ (uVar13 & 0xff) * 0x1010101;
    uVar26 = (((uVar17 | 0x80808080) + 0xfefefeff | uVar17) & 0x80808080) * 0x204081 >> 0x1c |
             uVar26 << 4;
    iVar19 = iVar19 + -4;
  } while (bVar32);
  uVar26 = ~uVar26;
  uVar15 = ~uVar15;
  uVar29 = -uVar27 & 0x3f;
  uVar17 = uVar15 << uVar29 | uVar26 << (uVar29 - 0x20 & 0xff) | uVar26 >> (0x20 - uVar29 & 0xff) |
           uVar15 >> uVar27;
  uVar26 = uVar26 >> uVar27 | uVar15 << (0x20 - uVar27 & 0xff) | uVar15 >> (uVar27 - 0x20 & 0xff) |
           uVar26 << uVar29;
  iVar19 = 0;
  while (uVar8 = (undefined1)uVar13, local_154 != 0 && (uVar26 != 0 || uVar17 != 0)) {
    iVar18 = FUN_01b9b85c(uVar26,uVar17);
    uVar8 = (undefined1)extraout_r3;
    uVar13 = uVar27 + iVar18 & 0x3f;
    iVar18 = iVar19;
    if (uVar13 != 0) {
      uVar13 = *(uint *)(iVar9 + uVar13 * 4);
      if (uVar13 < local_150) break;
      HintPreloadData(iVar10 + uVar13);
      iVar18 = iVar19 + 1;
      local_12c[iVar19] = uVar13;
      local_154 = local_154 + -1;
    }
    uVar17 = uVar17 & uVar17 - (extraout_r2 == 0);
    uVar13 = extraout_r3;
    iVar19 = iVar18;
    uVar26 = extraout_r2 & extraout_r2 - 1;
  }
  iVar18 = 0;
  uVar13 = uVar14 - 1 & 0x3f;
  if (uVar13 == 0) {
    iVar28 = 0x3f;
  }
  else {
    iVar28 = 0;
  }
  iVar28 = uVar13 + iVar28;
  *(char *)(iVar22 + uVar25 * 0x40) = (char)iVar28;
  *(undefined1 *)(iVar4 + iVar28) = uVar8;
  iVar4 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  *(int *)(iVar9 + iVar28 * 4) = iVar4;
  uVar13 = 3;
  for (; iVar19 != iVar18; iVar18 = iVar18 + 1) {
    uVar25 = local_12c[iVar18];
    iVar4 = iVar10 + uVar25;
    if ((*(int *)(iVar4 + (uVar13 - 3)) == *(int *)((int)param_2 + (uVar13 - 3))) &&
       (uVar26 = FUN_01b9b884(param_2,iVar4,param_3), uVar13 < uVar26)) {
      *param_4 = (uVar12 + 3) - uVar25;
      if (param_3 == (int *)((int)param_2 + uVar26)) goto LAB_01b9fe4c;
      uVar13 = uVar26;
    }
  }
  uVar26 = uVar13;
LAB_01b9fe4c:
  uVar25 = local_154 + iVar30;
  iVar19 = *piVar16;
  iVar4 = piVar16[1];
  piVar5 = (int *)(iVar19 - iVar4);
  uVar13 = uVar25;
  if (2 < uVar25) {
    uVar13 = 3;
  }
  iVar9 = piVar16[0x17];
  puVar23 = (uint *)(uVar2 * 0x10 + iVar9);
  puVar6 = puVar23;
  do {
    puVar7 = puVar6 + 1;
    uVar15 = *puVar6;
    HintPreloadData(iVar4 + uVar15);
    puVar6 = puVar7;
  } while ((uint *)(iVar9 + 0xc + uVar2 * 0x10) != puVar7);
  uVar14 = 0;
  iVar30 = uVar2 * 4 + 0x40000003;
  iVar22 = piVar16[0x19];
  HintPreloadData(iVar22 + (*(uint *)(iVar9 + iVar30 * 4) >> 8) * 4);
  piVar16 = piVar5;
  for (; uVar13 != uVar14; uVar14 = uVar14 + 1) {
    uVar27 = *puVar23;
    if (uVar27 == 0) goto LAB_01b9ff78;
    uVar15 = *(uint *)(iVar4 + uVar27);
    piVar16 = (int *)(iVar4 + uVar27);
    if (uVar15 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar4 + uVar27) + 1,param_3,iVar19,iVar10 + iVar11);
      uVar15 = (int)uVar33 + 4;
      piVar16 = (int *)((ulonglong)uVar33 >> 0x20);
      if ((uVar26 < uVar15) &&
         (*param_4 = (int)piVar5 + (((3 - iVar11) + uVar12) - uVar27), piVar16 = param_3,
         uVar26 = uVar15, param_3 == (int *)((int)param_2 + uVar15))) goto LAB_01b9ff78;
    }
    puVar23 = puVar23 + 1;
  }
  uVar15 = *(uint *)(iVar9 + iVar30 * 4);
  uVar14 = uVar15 >> 8;
  piVar21 = (int *)(iVar22 + uVar14 * 4);
  uVar15 = uVar15 & 0xff;
  uVar27 = uVar15;
  if (uVar25 - uVar13 < uVar15) {
    uVar27 = uVar25 - uVar13;
  }
  piVar16 = (int *)(iVar22 + (uVar14 + uVar27) * 4);
  piVar24 = piVar21;
  while (piVar16 != piVar24) {
    HintPreloadData(iVar4 + *piVar24);
    piVar24 = piVar24 + 1;
  }
  for (; piVar24 != piVar21; piVar21 = piVar21 + 1) {
    iVar9 = *piVar21;
    uVar15 = *(uint *)(iVar4 + iVar9);
    piVar16 = (int *)(iVar4 + iVar9);
    if (uVar15 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar4 + iVar9) + 1,param_3,iVar19,iVar10 + iVar11);
      uVar15 = (uint)uVar33;
      uVar13 = uVar15 + 4;
      piVar16 = (int *)((ulonglong)uVar33 >> 0x20);
      if (uVar26 < uVar13) {
        *param_4 = (int)piVar5 + (((3 - iVar11) + uVar12) - iVar9);
        piVar16 = param_3;
        uVar26 = uVar13;
        if (param_3 == (int *)((int)param_2 + uVar13)) goto LAB_01b9ff78;
      }
    }
  }
LAB_01b9ff78:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar15,piVar16,local_2c ^ DAT_01d53560,0);
  }
  return uVar26;
}

