// FUN_01b9f138 @ 01b9f138 size=2268 calls_out=4 calls_in=3
// strings: 

uint FUN_01b9f138(int param_1,uint *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
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
  uint extraout_r3;
  uint uVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  undefined8 uVar32;
  int local_158;
  uint local_154;
  uint local_12c [64];
  uint local_2c;
  
  iVar4 = *(int *)(param_1 + 0x24);
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
  local_158 = 1 << (uVar15 & 0xff);
  piVar18 = *(int **)(param_1 + 0xb4);
  lVar1 = (ulonglong)*param_2 * 0xbf9b0000;
  uVar19 = (uint)lVar1;
  uVar5 = param_2[1] * -0x40650000 + *param_2 * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20);
  iVar30 = piVar18[0x30];
  uVar15 = uVar19 >> (0x42U - iVar30 & 0xff) | uVar5 << (iVar30 - 0x22U & 0xff) |
           uVar5 >> (0x22U - iVar30 & 0xff);
  HintPreloadData(piVar18[0x17] + uVar15 * 0x10);
  if (uVar27 < 5) {
    iVar30 = 0;
  }
  else {
    iVar30 = 1 << (uVar28 & 0xff);
  }
  iVar26 = -iVar4;
  uVar27 = iVar26 + 0x38;
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar6 = param_1 + 0x2c;
    uVar28 = *(uint *)(param_1 + 0x1c);
    if (uVar14 - uVar28 < 0x181) {
      iVar20 = iVar11;
      iVar25 = iVar10;
    }
    else {
      iVar4 = uVar28 - 1;
      if (uVar28 < 0xffffffa0) {
        iVar20 = 0x61;
      }
      else {
        iVar20 = 1;
      }
      for (; uVar28 != iVar20 + iVar4; uVar28 = uVar28 + 1) {
        uVar5 = *(uint *)(iVar12 + uVar28 + 8);
        lVar1 = (ulonglong)uVar5 * 0xbf9b0000;
        uVar5 = *(uint *)(param_1 + 0x54) ^
                *(int *)(iVar12 + uVar28 + 0xc) * -0x40650000 + uVar5 * -0x30e44324 +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar19 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (uVar27 & 0xff) |
                 uVar5 << (0x20 - uVar27 & 0xff) | uVar5 >> (iVar26 + 0x18U & 0xff);
        uVar5 = uVar19 >> 8;
        HintPreloadData(iVar10 + uVar5 * 0x40);
        HintPreloadData(iVar11 + uVar5 * 0x10);
        uVar22 = *(uint *)(iVar6 + (uVar28 & 7) * 4);
        *(uint *)(iVar6 + (uVar28 & 7) * 4) = uVar19;
        uVar5 = uVar22 >> 8;
        uVar19 = *(byte *)(iVar11 + uVar5 * 0x10) - 1 & 0xf;
        if (uVar19 == 0) {
          iVar25 = 0xf;
        }
        else {
          iVar25 = 0;
        }
        iVar25 = uVar19 + iVar25;
        *(char *)(iVar11 + uVar5 * 0x10) = (char)iVar25;
        *(char *)(iVar11 + uVar5 * 0x10 + iVar25) = (char)uVar22;
        *(uint *)(iVar10 + (iVar25 + uVar5 * 0x10) * 4) = uVar28;
      }
      uVar28 = uVar14 - 0x20;
      iVar4 = *(int *)(param_1 + 0x24);
      iVar25 = *(int *)(param_1 + 0x5c);
      iVar20 = *(int *)(param_1 + 0x28);
      uVar5 = 0;
      if (iVar12 + uVar28 <= (int)param_2 + 1U) {
        uVar5 = (((int)param_2 + 1U) - (iVar12 + uVar28)) + 1;
      }
      if (uVar5 < 9) {
        uVar5 = uVar28 + uVar5;
      }
      else {
        uVar5 = uVar14 - 0x18;
      }
      for (uVar19 = uVar28; uVar19 < uVar5; uVar19 = uVar19 + 1) {
        lVar1 = (ulonglong)*(uint *)(iVar12 + uVar19) * 0xbf9b0000;
        uVar22 = *(int *)(iVar12 + uVar19 + 4) * -0x40650000 +
                 *(uint *)(iVar12 + uVar19) * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
                 *(uint *)(param_1 + 0x54);
        uVar3 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar4 & 0xff) |
                uVar22 << (iVar4 - 0x18U & 0xff) | uVar22 >> (0x18U - iVar4 & 0xff);
        uVar22 = uVar3 >> 8;
        HintPreloadData(iVar25 + uVar22 * 0x40);
        HintPreloadData(iVar20 + uVar22 * 0x10);
        *(uint *)(param_1 + (uVar19 & 7) * 4 + 0x2c) = uVar3;
      }
    }
    iVar2 = *(int *)(param_1 + 4);
    for (; uVar28 < uVar14; uVar28 = uVar28 + 1) {
      iVar29 = iVar2 + uVar28;
      uVar5 = *(uint *)(iVar29 + 8);
      lVar1 = (ulonglong)uVar5 * 0xbf9b0000;
      uVar5 = *(uint *)(param_1 + 0x54) ^
              *(int *)(iVar29 + 0xc) * -0x40650000 + uVar5 * -0x30e44324 +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar19 = (*(uint *)(param_1 + 0x50) ^ (uint)lVar1) >> (0x38U - iVar4 & 0xff) |
               uVar5 << (iVar4 - 0x18U & 0xff) | uVar5 >> (0x18U - iVar4 & 0xff);
      uVar5 = uVar19 >> 8;
      HintPreloadData(iVar25 + uVar5 * 0x40);
      HintPreloadData(iVar20 + uVar5 * 0x10);
      uVar22 = *(uint *)(iVar6 + (uVar28 & 7) * 4);
      *(uint *)(iVar6 + (uVar28 & 7) * 4) = uVar19;
      uVar5 = uVar22 >> 8;
      uVar19 = *(byte *)(iVar20 + uVar5 * 0x10) - 1 & 0xf;
      if (uVar19 == 0) {
        iVar29 = 0xf;
      }
      else {
        iVar29 = 0;
      }
      iVar29 = uVar19 + iVar29;
      *(char *)(iVar20 + uVar5 * 0x10) = (char)iVar29;
      *(char *)(iVar20 + uVar5 * 0x10 + iVar29) = (char)uVar22;
      *(uint *)(iVar25 + (iVar29 + uVar5 * 0x10) * 4) = uVar28;
    }
    *(uint *)(param_1 + 0x1c) = uVar14;
    lVar1 = (ulonglong)param_2[2] * 0xbf9b0000;
    uVar17 = param_2[3] * -0x40650000 + param_2[2] * -0x30e44324 + (int)((ulonglong)lVar1 >> 0x20) ^
             uVar17;
    uVar16 = ((uint)lVar1 ^ uVar16) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar26 + 0x18U & 0xff);
    uVar17 = uVar16 >> 8;
    HintPreloadData(iVar10 + uVar17 * 0x40);
    HintPreloadData(iVar11 + uVar17 * 0x10);
    uVar17 = *(uint *)(iVar6 + (uVar14 & 7) * 4);
    *(uint *)(iVar6 + (uVar14 & 7) * 4) = uVar16;
  }
  else {
    uVar17 = uVar17 ^ uVar5;
    uVar17 = (uVar16 ^ uVar19) >> (uVar27 & 0xff) | uVar17 << (0x20 - uVar27 & 0xff) |
             uVar17 >> (iVar26 + 0x18U & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar14;
  }
  uVar16 = uVar17 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar17;
  iVar10 = iVar10 + uVar16 * 0x40;
  uVar28 = (uint)*(byte *)(iVar11 + uVar16 * 0x10);
  iVar26 = iVar11 + uVar16 * 0x10;
  uVar27 = 0;
  uVar5 = uVar28 & 0xf;
  iVar4 = 0xc;
  do {
    bVar31 = iVar4 != 0;
    uVar19 = *(uint *)(iVar26 + iVar4) ^ (uVar17 & 0xff) * 0x1010101;
    uVar27 = (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
             uVar27 << 4;
    iVar4 = iVar4 + -4;
  } while (bVar31);
  uVar19 = 0;
  uVar27 = (~uVar27 << (-uVar5 & 0xf) | (~uVar27 & 0xffff) >> uVar5) & 0xffff;
  iVar4 = 0;
  while (local_158 != 0 && (uVar27 != 0 || uVar19 != 0)) {
    iVar6 = FUN_01b9b85c(uVar27,uVar19);
    uVar27 = uVar5 + iVar6 & 0xf;
    iVar6 = iVar4;
    if (uVar27 != 0) {
      uVar27 = *(uint *)(iVar10 + uVar27 * 4);
      if (uVar27 < local_154) break;
      HintPreloadData(iVar12 + uVar27);
      iVar6 = iVar4 + 1;
      local_12c[iVar4] = uVar27;
      local_158 = local_158 + -1;
    }
    uVar19 = extraout_r2 & extraout_r2 - (extraout_r3 == 0);
    iVar4 = iVar6;
    uVar27 = extraout_r3 & extraout_r3 - 1;
  }
  uVar27 = uVar28 - 1 & 0xf;
  if (uVar27 == 0) {
    iVar6 = 0xf;
  }
  else {
    iVar6 = 0;
  }
  iVar6 = uVar27 + iVar6;
  *(char *)(iVar11 + uVar16 * 0x10) = (char)iVar6;
  *(char *)(iVar26 + iVar6) = (char)uVar17;
  uVar17 = 3;
  iVar11 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar11 + 1;
  *(int *)(iVar10 + iVar6 * 4) = iVar11;
  for (iVar11 = 0; iVar4 != iVar11; iVar11 = iVar11 + 1) {
    uVar16 = local_12c[iVar11];
    iVar10 = iVar12 + uVar16;
    if ((*(int *)(iVar10 + (uVar17 - 3)) == *(int *)((int)param_2 + (uVar17 - 3))) &&
       (uVar27 = FUN_01b9b884(param_2,iVar10,param_3), uVar17 < uVar27)) {
      *param_4 = (uVar14 + 3) - uVar16;
      if (param_3 == (int *)((int)param_2 + uVar27)) goto LAB_01b9f4fc;
      uVar17 = uVar27;
    }
  }
  uVar27 = uVar17;
LAB_01b9f4fc:
  uVar16 = local_158 + iVar30;
  iVar4 = *piVar18;
  iVar11 = piVar18[1];
  piVar7 = (int *)(iVar4 - iVar11);
  uVar17 = uVar16;
  if (2 < uVar16) {
    uVar17 = 3;
  }
  iVar10 = piVar18[0x17];
  puVar23 = (uint *)(uVar15 * 0x10 + iVar10);
  puVar8 = puVar23;
  do {
    puVar9 = puVar8 + 1;
    uVar28 = *puVar8;
    HintPreloadData(iVar11 + uVar28);
    puVar8 = puVar9;
  } while ((uint *)(iVar10 + 0xc + uVar15 * 0x10) != puVar9);
  uVar5 = 0;
  iVar26 = uVar15 * 4 + 0x40000003;
  iVar30 = piVar18[0x19];
  HintPreloadData(iVar30 + (*(uint *)(iVar10 + iVar26 * 4) >> 8) * 4);
  piVar18 = piVar7;
  for (; uVar17 != uVar5; uVar5 = uVar5 + 1) {
    uVar15 = *puVar23;
    if (uVar15 == 0) goto LAB_01b9f628;
    uVar28 = *(uint *)(iVar11 + uVar15);
    piVar18 = (int *)(iVar11 + uVar15);
    if (uVar28 == *param_2) {
      uVar32 = FUN_01b9b970(param_2 + 1,(int *)(iVar11 + uVar15) + 1,param_3,iVar4,iVar12 + iVar13);
      uVar28 = (int)uVar32 + 4;
      piVar18 = (int *)((ulonglong)uVar32 >> 0x20);
      if ((uVar27 < uVar28) &&
         (*param_4 = (int)piVar7 + (((3 - iVar13) + uVar14) - uVar15), piVar18 = param_3,
         uVar27 = uVar28, param_3 == (int *)((int)param_2 + uVar28))) goto LAB_01b9f628;
    }
    puVar23 = puVar23 + 1;
  }
  uVar28 = *(uint *)(iVar10 + iVar26 * 4);
  uVar15 = uVar28 >> 8;
  piVar21 = (int *)(iVar30 + uVar15 * 4);
  uVar28 = uVar28 & 0xff;
  uVar5 = uVar28;
  if (uVar16 - uVar17 < uVar28) {
    uVar5 = uVar16 - uVar17;
  }
  piVar18 = (int *)(iVar30 + (uVar15 + uVar5) * 4);
  piVar24 = piVar21;
  while (piVar18 != piVar24) {
    HintPreloadData(iVar11 + *piVar24);
    piVar24 = piVar24 + 1;
  }
  for (; piVar24 != piVar21; piVar21 = piVar21 + 1) {
    iVar10 = *piVar21;
    uVar28 = *(uint *)(iVar11 + iVar10);
    piVar18 = (int *)(iVar11 + iVar10);
    if (uVar28 == *param_2) {
      uVar32 = FUN_01b9b970(param_2 + 1,(int *)(iVar11 + iVar10) + 1,param_3,iVar4,iVar12 + iVar13);
      uVar28 = (uint)uVar32;
      uVar15 = uVar28 + 4;
      piVar18 = (int *)((ulonglong)uVar32 >> 0x20);
      if (uVar27 < uVar15) {
        *param_4 = (int)piVar7 + (((3 - iVar13) + uVar14) - iVar10);
        piVar18 = param_3;
        uVar27 = uVar15;
        if (param_3 == (int *)((int)param_2 + uVar15)) goto LAB_01b9f628;
      }
    }
  }
LAB_01b9f628:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar28,piVar18,local_2c ^ DAT_01d53560,0);
  }
  return uVar27;
}

