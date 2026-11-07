// FUN_01ba0cb4 @ 01ba0cb4 size=2280 calls_out=4 calls_in=3
// strings: 

uint FUN_01ba0cb4(int param_1,uint *param_2,int *param_3,int *param_4)

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
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint extraout_r3;
  int iVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
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
  
  iVar5 = *(int *)(param_1 + 0x24);
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
  uVar27 = *(uint *)(param_1 + 0xc4);
  uVar16 = *(uint *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x54);
  uVar15 = uVar27;
  if (3 < uVar27) {
    uVar15 = 4;
  }
  uVar28 = uVar27;
  if (4 < uVar27) {
    uVar28 = uVar27 - 4;
  }
  local_154 = 1 << (uVar15 & 0xff);
  piVar18 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbb000000;
  uVar19 = (uint)lVar1;
  uVar15 = param_2[1] * -0x45000000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar29 = piVar18[0x30];
  uVar2 = uVar19 >> (0x42U - iVar29 & 0xff) | uVar15 << (iVar29 - 0x22U & 0xff) |
          uVar15 >> (0x22U - iVar29 & 0xff);
  HintPreloadData(piVar18[0x17] + uVar2 * 0x10);
  if (uVar27 < 5) {
    iVar29 = 0;
  }
  else {
    iVar29 = 1 << (uVar28 & 0xff);
  }
  iVar24 = -iVar5;
  uVar27 = iVar24 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar15 = *(uint *)(param_1 + 0x1c);
    iVar23 = param_1 + 0x2c;
    if (uVar14 - uVar15 < 0x181) {
      iVar30 = iVar10;
      iVar31 = iVar11;
    }
    else {
      iVar5 = uVar15 - 1;
      if (uVar15 < 0xffffffa0) {
        iVar30 = 0x61;
      }
      else {
        iVar30 = 1;
      }
      for (; uVar15 != iVar30 + iVar5; uVar15 = uVar15 + 1) {
        uVar28 = *(uint *)(iVar12 + uVar15 + 8);
        lVar1 = (ulonglong)uVar28 * 0xbb000000;
        uVar28 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar12 + uVar15 + 0xc) * -0x45000000 + uVar28 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar27 & 0xff) |
                 uVar28 << (0x20 - uVar27 & 0xff) | uVar28 >> (iVar24 + 0x18U & 0xff);
        uVar28 = uVar19 >> 8;
        HintPreloadData(iVar10 + uVar28 * 0x40);
        HintPreloadData(iVar11 + uVar28 * 0x10);
        uVar22 = *(uint *)(iVar23 + (uVar15 & 7) * 4);
        *(uint *)(iVar23 + (uVar15 & 7) * 4) = uVar19;
        uVar28 = uVar22 >> 8;
        uVar19 = *(byte *)(iVar11 + uVar28 * 0x10) - 1 & 0xf;
        if (uVar19 == 0) {
          iVar31 = 0xf;
        }
        else {
          iVar31 = 0;
        }
        iVar31 = uVar19 + iVar31;
        *(char *)(iVar11 + uVar28 * 0x10) = (char)iVar31;
        *(char *)(iVar11 + uVar28 * 0x10 + iVar31) = (char)uVar22;
        *(uint *)(iVar10 + (iVar31 + uVar28 * 0x10) * 4) = uVar15;
      }
      uVar15 = uVar14 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar30 = *(int *)(param_1 + 0x5c);
      iVar31 = *(int *)(param_1 + 0x28);
      uVar28 = 0;
      if (iVar12 + uVar15 <= (int)param_2 + 1U) {
        uVar28 = (((int)param_2 + 1U) - (iVar12 + uVar15)) + 1;
      }
      if (uVar28 < 9) {
        uVar28 = uVar15 + uVar28;
      }
      else {
        uVar28 = uVar14 - 0x18;
      }
      for (uVar19 = uVar15; uVar19 < uVar28; uVar19 = uVar19 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar12 + uVar19) * 0xbb000000;
        uVar22 = *(int *)(iVar12 + uVar19 + 4) * -0x45000000 +
                 *(uint *)(iVar12 + uVar19) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar4 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar5 & 0xff) |
                uVar22 << (iVar5 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar5 & 0xff);
        uVar22 = uVar4 >> 8;
        HintPreloadData(iVar30 + uVar22 * 0x40);
        HintPreloadData(iVar31 + uVar22 * 0x10);
        *(uint *)(param_1 + (uVar19 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar15 < uVar14; uVar15 = uVar15 + 1) {
      iVar20 = iVar3 + uVar15;
      uVar28 = *(uint *)(iVar20 + 8);
      lVar1 = (ulonglong)uVar28 * 0xbb000000;
      uVar28 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar20 + 0xc) * -0x45000000 + uVar28 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar19 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar5 & 0xff) |
               uVar28 << (iVar5 - 0x18U & 0xff) | uVar28 >> (0x18U - iVar5 & 0xff);
      uVar28 = uVar19 >> 8;
      HintPreloadData(iVar30 + uVar28 * 0x40);
      HintPreloadData(iVar31 + uVar28 * 0x10);
      uVar22 = *(uint *)(iVar23 + (uVar15 & 7) * 4);
      *(uint *)(iVar23 + (uVar15 & 7) * 4) = uVar19;
      uVar28 = uVar22 >> 8;
      uVar19 = *(byte *)(iVar31 + uVar28 * 0x10) - 1 & 0xf;
      if (uVar19 == 0) {
        iVar20 = 0xf;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = uVar19 + iVar20;
      *(char *)(iVar31 + uVar28 * 0x10) = (char)iVar20;
      *(char *)(iVar31 + uVar28 * 0x10 + iVar20) = (char)uVar22;
      *(uint *)(iVar30 + (iVar20 + uVar28 * 0x10) * 4) = uVar15;
    }
    *(uint *)(param_1 + 0x1c) = uVar14;
    lVar1 = (ulonglong)param_2[2] * 0xbb000000;
    uVar17 = param_2[3] * -0x45000000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar17;
    uVar17 = ((uint)lVar1 ^ uVar16) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar24 + 0x18U & 0xff);
    uVar15 = uVar17 >> 8;
    HintPreloadData(iVar10 + uVar15 * 0x40);
    HintPreloadData(iVar11 + uVar15 * 0x10);
    uVar15 = *(uint *)(iVar23 + (uVar14 & 7) * 4);
    *(uint *)(iVar23 + (uVar14 & 7) * 4) = uVar17;
  }
  else {
    uVar17 = uVar17 ^ uVar15;
    uVar15 = (uVar16 ^ uVar19) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar24 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar14;
  }
  uVar17 = uVar15 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar15;
  iVar10 = iVar10 + uVar17 * 0x40;
  uVar27 = (uint)*(byte *)(iVar11 + uVar17 * 0x10);
  iVar24 = iVar11 + uVar17 * 0x10;
  uVar16 = 0;
  uVar28 = uVar27 & 0xf;
  iVar5 = 0xc;
  do {
    bVar32 = iVar5 != 0;
    uVar19 = *(uint *)(iVar24 + iVar5) ^ (uVar15 & 0xff) * 0x1010101;
    uVar16 = (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar32);
  uVar16 = (~uVar16 << (-uVar28 & 0xf) | (~uVar16 & 0xffff) >> uVar28) & 0xffff;
  iVar5 = 0;
  while (uVar9 = (undefined1)uVar15, local_154 != 0 && uVar16 != 0) {
    iVar23 = FUN_01b9b85c(uVar16,0);
    uVar9 = (undefined1)extraout_r3;
    uVar15 = uVar28 + iVar23 & 0xf;
    iVar23 = iVar5;
    if (uVar15 != 0) {
      uVar15 = *(uint *)(iVar10 + uVar15 * 4);
      if (uVar15 < local_150) break;
      HintPreloadData(iVar12 + uVar15);
      iVar23 = iVar5 + 1;
      local_12c[iVar5] = uVar15;
      local_154 = local_154 + -1;
    }
    uVar15 = extraout_r3;
    iVar5 = iVar23;
    uVar16 = extraout_r2 & extraout_r2 - 1;
  }
  uVar15 = uVar27 - 1 & 0xf;
  if (uVar15 == 0) {
    iVar23 = 0xf;
  }
  else {
    iVar23 = 0;
  }
  iVar23 = uVar15 + iVar23;
  *(char *)(iVar11 + uVar17 * 0x10) = (char)iVar23;
  *(undefined1 *)(iVar24 + iVar23) = uVar9;
  iVar11 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar11 + 1;
  *(int *)(iVar10 + iVar23 * 4) = iVar11;
  uVar15 = 3;
  for (iVar10 = 0; iVar5 != iVar10; iVar10 = iVar10 + 1) {
    uVar17 = local_12c[iVar10];
    iVar11 = iVar12 + uVar17;
    if ((*(int *)(iVar11 + (uVar15 - 3)) == *(int *)((int)param_2 + (uVar15 - 3))) &&
       (uVar16 = FUN_01b9b884(param_2,iVar11,param_3), uVar15 < uVar16)) {
      *param_4 = (uVar14 + 3) - uVar17;
      if (param_3 == (int *)((int)param_2 + uVar16)) goto LAB_01ba1088;
      uVar15 = uVar16;
    }
  }
  uVar16 = uVar15;
LAB_01ba1088:
  uVar17 = local_154 + iVar29;
  iVar5 = *piVar18;
  iVar10 = piVar18[1];
  piVar6 = (int *)(iVar5 - iVar10);
  uVar15 = uVar17;
  if (2 < uVar17) {
    uVar15 = 3;
  }
  iVar11 = piVar18[0x17];
  puVar25 = (uint *)(uVar2 * 0x10 + iVar11);
  puVar7 = puVar25;
  do {
    puVar8 = puVar7 + 1;
    uVar27 = *puVar7;
    HintPreloadData(iVar10 + uVar27);
    puVar7 = puVar8;
  } while ((uint *)(iVar11 + 0xc + uVar2 * 0x10) != puVar8);
  uVar28 = 0;
  iVar24 = uVar2 * 4 + 0x40000003;
  iVar29 = piVar18[0x19];
  HintPreloadData(iVar29 + (*(uint *)(iVar11 + iVar24 * 4) >> 8) * 4);
  piVar18 = piVar6;
  for (; uVar15 != uVar28; uVar28 = uVar28 + 1) {
    uVar2 = *puVar25;
    if (uVar2 == 0) goto LAB_01ba11b4;
    uVar27 = *(uint *)(iVar10 + uVar2);
    piVar18 = (int *)(iVar10 + uVar2);
    if (uVar27 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar10 + uVar2) + 1,param_3,iVar5,iVar12 + iVar13);
      uVar27 = (int)uVar33 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if ((uVar16 < uVar27) &&
         (*param_4 = (int)piVar6 + (((3 - iVar13) + uVar14) - uVar2), piVar18 = param_3,
         uVar16 = uVar27, param_3 == (int *)((int)param_2 + uVar27))) goto LAB_01ba11b4;
    }
    puVar25 = puVar25 + 1;
  }
  uVar27 = *(uint *)(iVar11 + iVar24 * 4);
  uVar28 = uVar27 >> 8;
  piVar21 = (int *)(iVar29 + uVar28 * 4);
  uVar27 = uVar27 & 0xff;
  uVar2 = uVar27;
  if (uVar17 - uVar15 < uVar27) {
    uVar2 = uVar17 - uVar15;
  }
  piVar18 = (int *)(iVar29 + (uVar28 + uVar2) * 4);
  piVar26 = piVar21;
  while (piVar18 != piVar26) {
    HintPreloadData(iVar10 + *piVar26);
    piVar26 = piVar26 + 1;
  }
  for (; piVar26 != piVar21; piVar21 = piVar21 + 1) {
    iVar11 = *piVar21;
    uVar27 = *(uint *)(iVar10 + iVar11);
    piVar18 = (int *)(iVar10 + iVar11);
    if (uVar27 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar10 + iVar11) + 1,param_3,iVar5,iVar12 + iVar13);
      uVar27 = (uint)uVar33;
      uVar15 = uVar27 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if (uVar16 < uVar15) {
        *param_4 = (int)piVar6 + (((3 - iVar13) + uVar14) - iVar11);
        piVar18 = param_3;
        uVar16 = uVar15;
        if (param_3 == (int *)((int)param_2 + uVar15)) goto LAB_01ba11b4;
      }
    }
  }
LAB_01ba11b4:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar27,piVar18,local_2c ^ DAT_01d53560,0);
  }
  return uVar16;
}

