// FUN_01b9e830 @ 01b9e830 size=2284 calls_out=4 calls_in=3
// strings: 

uint FUN_01b9e830(int param_1,uint *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar11;
  uint *puVar10;
  uint extraout_r2;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint extraout_r3;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  undefined8 uVar33;
  int local_154;
  uint local_150;
  uint local_12c [64];
  uint local_2c;
  
  iVar5 = *(int *)(param_1 + 0x24);
  iVar24 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar13 = *(int *)(param_1 + 4);
  iVar14 = *(int *)(param_1 + 0xc);
  uVar15 = (int)param_2 - iVar13;
  uVar16 = *(uint *)(param_1 + 0x10);
  uVar2 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar15 - uVar16 <= uVar2) {
    local_150 = uVar16;
  }
  uVar28 = *(uint *)(param_1 + 0xc4);
  if (uVar2 < uVar15 - uVar16) {
    local_150 = uVar15 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_150 = uVar16;
  }
  uVar17 = *(uint *)(param_1 + 0x50);
  uVar16 = *(uint *)(param_1 + 0x54);
  uVar2 = uVar28;
  if (4 < uVar28) {
    uVar2 = 5;
  }
  uVar29 = uVar28;
  if (5 < uVar28) {
    uVar29 = uVar28 - 5;
  }
  local_154 = 1 << (uVar2 & 0xff);
  piVar18 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar7 = (uint)lVar1;
  uVar27 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar19 = piVar18[0x30];
  iVar23 = -iVar5;
  uVar22 = iVar23 + 0x38;
  uVar2 = uVar7 >> (0x42U - iVar19 & 0xff) | uVar27 << (iVar19 - 0x22U & 0xff) |
          uVar27 >> (0x22U - iVar19 & 0xff);
  HintPreloadData(piVar18[0x17] + uVar2 * 0x10);
  if (uVar28 < 6) {
    iVar19 = 0;
  }
  else {
    iVar19 = 1 << (uVar29 & 0xff);
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar8 = param_1 + 0x2c;
    uVar28 = *(uint *)(param_1 + 0x1c);
    if (uVar15 - uVar28 < 0x181) {
      iVar30 = iVar12;
      iVar31 = iVar24;
    }
    else {
      iVar5 = uVar28 - 1;
      if (uVar28 < 0xffffffa0) {
        iVar30 = 0x61;
      }
      else {
        iVar30 = 1;
      }
      for (; uVar28 != iVar30 + iVar5; uVar28 = uVar28 + 1) {
        uVar29 = *(uint *)(iVar13 + uVar28 + 8);
        lVar1 = (ulonglong)uVar29 * 0xbf9b0000;
        uVar29 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar13 + uVar28 + 0xc) * -0x40650000 + uVar29 * -0x30e44324 +
                 (int)((ulonglong)lVar1 >> 0x20);
        uVar7 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (uVar22 & 0xff) |
                uVar29 << (0x20 - uVar22 & 0xff) | uVar29 >> (iVar23 + 0x18U & 0xff);
        uVar29 = uVar7 >> 8;
        HintPreloadData(iVar12 + uVar29 * 0x80);
        HintPreloadData(iVar24 + uVar29 * 0x20);
        HintPreloadData(iVar12 + uVar29 * 0x80 + 0x40);
        uVar27 = *(uint *)(iVar8 + (uVar28 & 7) * 4);
        *(uint *)(iVar8 + (uVar28 & 7) * 4) = uVar7;
        uVar29 = uVar27 >> 8;
        uVar7 = *(byte *)(iVar24 + uVar29 * 0x20) - 1 & 0x1f;
        if (uVar7 == 0) {
          iVar31 = 0x1f;
        }
        else {
          iVar31 = 0;
        }
        iVar31 = uVar7 + iVar31;
        *(char *)(iVar24 + uVar29 * 0x20) = (char)iVar31;
        *(char *)(iVar24 + uVar29 * 0x20 + iVar31) = (char)uVar27;
        *(uint *)(iVar12 + (iVar31 + uVar29 * 0x20) * 4) = uVar28;
      }
      uVar28 = uVar15 - 0x20;
      iVar5 = *(int *)(param_1 + 0x24);
      iVar30 = *(int *)(param_1 + 0x5c);
      iVar31 = *(int *)(param_1 + 0x28);
      uVar29 = 0;
      if (iVar13 + uVar28 <= (int)param_2 + 1U) {
        uVar29 = (((int)param_2 + 1U) - (iVar13 + uVar28)) + 1;
      }
      if (uVar29 < 9) {
        uVar29 = uVar28 + uVar29;
      }
      else {
        uVar29 = uVar15 - 0x18;
      }
      for (uVar7 = uVar28; uVar7 < uVar29; uVar7 = uVar7 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar13 + uVar7) * 0xbf9b0000;
        uVar27 = *(uint *)(param_1 + 0x54) ^
                 *(int *)(iVar13 + uVar7 + 4) * -0x40650000 +
                 *(uint *)(iVar13 + uVar7) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
                uVar27 << (iVar5 - 0x18U & 0xff) | uVar27 >> (0x18U - iVar5 & 0xff);
        uVar27 = uVar4 >> 8;
        HintPreloadData(iVar30 + uVar27 * 0x80);
        HintPreloadData(iVar31 + uVar27 * 0x20);
        HintPreloadData(iVar30 + uVar27 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar7 & 7) * 4 + 0x2c) = uVar4;
      }
    }
    iVar3 = *(int *)(param_1 + 4);
    for (; uVar28 < uVar15; uVar28 = uVar28 + 1) {
      iVar20 = iVar3 + uVar28;
      uVar29 = *(uint *)(iVar20 + 8);
      lVar1 = (ulonglong)uVar29 * 0xbf9b0000;
      uVar29 = *(uint *)(param_1 + 0x54) ^
               *(int *)(iVar20 + 0xc) * -0x40650000 + uVar29 * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar7 = ((uint)lVar1 ^ *(uint *)(param_1 + 0x50)) >> (0x38U - iVar5 & 0xff) |
              uVar29 << (iVar5 - 0x18U & 0xff) | uVar29 >> (0x18U - iVar5 & 0xff);
      uVar29 = uVar7 >> 8;
      HintPreloadData(iVar30 + uVar29 * 0x80);
      HintPreloadData(iVar31 + uVar29 * 0x20);
      HintPreloadData(iVar30 + uVar29 * 0x80 + 0x40);
      uVar27 = *(uint *)(iVar8 + (uVar28 & 7) * 4);
      *(uint *)(iVar8 + (uVar28 & 7) * 4) = uVar7;
      uVar29 = uVar27 >> 8;
      uVar7 = *(byte *)(iVar31 + uVar29 * 0x20) - 1 & 0x1f;
      if (uVar7 == 0) {
        iVar20 = 0x1f;
      }
      else {
        iVar20 = 0;
      }
      iVar20 = uVar7 + iVar20;
      *(char *)(iVar31 + uVar29 * 0x20) = (char)iVar20;
      *(char *)(iVar31 + uVar29 * 0x20 + iVar20) = (char)uVar27;
      *(uint *)(iVar30 + (iVar20 + uVar29 * 0x20) * 4) = uVar28;
    }
    *(uint *)(param_1 + 0x1c) = uVar15;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar16 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar16;
    uVar28 = ((uint)lVar1 ^ uVar17) >> (uVar22 & 0xff) | uVar16 << (0x20 - uVar22 & 0xff) |
             uVar16 >> (iVar23 + 0x18U & 0xff);
    uVar16 = uVar28 >> 8;
    HintPreloadData(iVar12 + uVar16 * 0x80);
    HintPreloadData(iVar24 + uVar16 * 0x20);
    HintPreloadData(iVar12 + uVar16 * 0x80 + 0x40);
    uVar16 = *(uint *)(iVar8 + (uVar15 & 7) * 4);
    *(uint *)(iVar8 + (uVar15 & 7) * 4) = uVar28;
  }
  else {
    uVar16 = uVar16 ^ uVar27;
    uVar16 = (uVar17 ^ uVar7) >> (uVar22 & 0xff) | uVar16 << (0x20 - uVar22 & 0xff) |
             uVar16 >> (iVar23 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar15;
  }
  uVar28 = uVar16 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar16;
  uVar7 = (uint)*(byte *)(iVar24 + uVar28 * 0x20);
  iVar23 = iVar24 + uVar28 * 0x20;
  uVar17 = 0;
  iVar12 = iVar12 + uVar28 * 0x80;
  uVar29 = uVar7 & 0x1f;
  iVar5 = 0x1c;
  do {
    bVar32 = iVar5 != 0;
    uVar22 = *(uint *)(iVar23 + iVar5) ^ (uVar16 & 0xff) * 0x1010101;
    uVar17 = (((uVar22 | 0x80808080) + 0xfefefeff | uVar22) & 0x80808080) * 0x204081 >> 0x1c |
             uVar17 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar32);
  uVar17 = ~uVar17 >> uVar29 | ~uVar17 << 0x20 - uVar29;
  iVar5 = 0;
  while (uVar6 = (undefined1)uVar16, local_154 != 0 && uVar17 != 0) {
    iVar8 = FUN_01b9b85c(uVar17,0);
    uVar6 = (undefined1)extraout_r2;
    uVar16 = uVar29 + iVar8 & 0x1f;
    iVar8 = iVar5;
    if (uVar16 != 0) {
      uVar16 = *(uint *)(iVar12 + uVar16 * 4);
      if (uVar16 < local_150) break;
      HintPreloadData(iVar13 + uVar16);
      iVar8 = iVar5 + 1;
      local_12c[iVar5] = uVar16;
      local_154 = local_154 + -1;
    }
    uVar16 = extraout_r2;
    iVar5 = iVar8;
    uVar17 = extraout_r3 & extraout_r3 - 1;
  }
  uVar16 = uVar7 - 1 & 0x1f;
  if (uVar16 == 0) {
    iVar8 = 0x1f;
  }
  else {
    iVar8 = 0;
  }
  iVar8 = uVar16 + iVar8;
  *(char *)(iVar24 + uVar28 * 0x20) = (char)iVar8;
  *(undefined1 *)(iVar23 + iVar8) = uVar6;
  iVar24 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar24 + 1;
  *(int *)(iVar12 + iVar8 * 4) = iVar24;
  uVar16 = 3;
  for (iVar12 = 0; iVar5 != iVar12; iVar12 = iVar12 + 1) {
    uVar28 = local_12c[iVar12];
    iVar24 = iVar13 + uVar28;
    if ((*(int *)(iVar24 + (uVar16 - 3)) == *(int *)((int)param_2 + (uVar16 - 3))) &&
       (uVar17 = FUN_01b9b884(param_2,iVar24,param_3), uVar16 < uVar17)) {
      *param_4 = (uVar15 + 3) - uVar28;
      if (param_3 == (int *)((int)param_2 + uVar17)) goto LAB_01b9ebe8;
      uVar16 = uVar17;
    }
  }
  uVar17 = uVar16;
LAB_01b9ebe8:
  uVar28 = local_154 + iVar19;
  iVar5 = *piVar18;
  iVar12 = piVar18[1];
  piVar9 = (int *)(iVar5 - iVar12);
  uVar16 = uVar28;
  if (2 < uVar28) {
    uVar16 = 3;
  }
  iVar24 = piVar18[0x17];
  puVar25 = (uint *)(uVar2 * 0x10 + iVar24);
  puVar10 = puVar25;
  do {
    puVar11 = puVar10 + 1;
    uVar29 = *puVar10;
    HintPreloadData(iVar12 + uVar29);
    puVar10 = puVar11;
  } while ((uint *)(iVar24 + 0xc + uVar2 * 0x10) != puVar11);
  uVar7 = 0;
  iVar19 = uVar2 * 4 + 0x40000003;
  iVar23 = piVar18[0x19];
  HintPreloadData(iVar23 + (*(uint *)(iVar24 + iVar19 * 4) >> 8) * 4);
  piVar18 = piVar9;
  for (; uVar16 != uVar7; uVar7 = uVar7 + 1) {
    uVar2 = *puVar25;
    if (uVar2 == 0) goto LAB_01b9ed14;
    uVar29 = *(uint *)(iVar12 + uVar2);
    piVar18 = (int *)(iVar12 + uVar2);
    if (uVar29 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar12 + uVar2) + 1,param_3,iVar5,iVar13 + iVar14);
      uVar29 = (int)uVar33 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if ((uVar17 < uVar29) &&
         (*param_4 = (int)piVar9 + (((3 - iVar14) + uVar15) - uVar2), piVar18 = param_3,
         uVar17 = uVar29, param_3 == (int *)((int)param_2 + uVar29))) goto LAB_01b9ed14;
    }
    puVar25 = puVar25 + 1;
  }
  uVar29 = *(uint *)(iVar24 + iVar19 * 4);
  uVar2 = uVar29 >> 8;
  piVar21 = (int *)(iVar23 + uVar2 * 4);
  uVar29 = uVar29 & 0xff;
  uVar7 = uVar29;
  if (uVar28 - uVar16 < uVar29) {
    uVar7 = uVar28 - uVar16;
  }
  piVar18 = (int *)(iVar23 + (uVar2 + uVar7) * 4);
  piVar26 = piVar21;
  while (piVar18 != piVar26) {
    HintPreloadData(iVar12 + *piVar26);
    piVar26 = piVar26 + 1;
  }
  for (; piVar26 != piVar21; piVar21 = piVar21 + 1) {
    iVar24 = *piVar21;
    uVar29 = *(uint *)(iVar12 + iVar24);
    piVar18 = (int *)(iVar12 + iVar24);
    if (uVar29 == *param_2) {
      uVar33 = FUN_01b9b970(param_2 + 1,(int *)(iVar12 + iVar24) + 1,param_3,iVar5,iVar13 + iVar14);
      uVar29 = (uint)uVar33;
      uVar2 = uVar29 + 4;
      piVar18 = (int *)((ulonglong)uVar33 >> 0x20);
      if (uVar17 < uVar2) {
        *param_4 = (int)piVar9 + (((3 - iVar14) + uVar15) - iVar24);
        piVar18 = param_3;
        uVar17 = uVar2;
        if (param_3 == (int *)((int)param_2 + uVar2)) goto LAB_01b9ed14;
      }
    }
  }
LAB_01b9ed14:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar29,piVar18,local_2c ^ DAT_01d53560,0);
  }
  return uVar17;
}

