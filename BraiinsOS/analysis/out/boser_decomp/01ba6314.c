// FUN_01ba6314 @ 01ba6314 size=2064 calls_out=4 calls_in=3
// strings: 

void FUN_01ba6314(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_r3;
  uint extraout_r3_00;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  undefined8 uVar28;
  uint local_14c;
  uint local_144;
  uint local_12c [64];
  uint local_2c;
  
  iVar26 = *(int *)(param_1 + 0x24);
  iVar20 = *(int *)(param_1 + 0x5c);
  iVar14 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = (int)param_2 - iVar3;
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar5 - uVar6) {
    local_14c = uVar5 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_14c = uVar6;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar6) {
    uVar6 = 6;
  }
  local_144 = 1 << (uVar6 & 0xff);
  piVar7 = *(int **)(param_1 + 0xb4);
  iVar8 = piVar7[10];
  uVar17 = (uint)(*param_2 * -0x61c8864f) >> (0x18U - piVar7[9] & 0xff);
  uVar6 = uVar17 >> 8;
  iVar9 = iVar8 + uVar6 * 0x40;
  iVar10 = piVar7[0x17] + uVar6 * 0x100;
  HintPreloadData(iVar10);
  HintPreloadData(piVar7[0x17] + uVar6 * 0x100 + 0x40);
  HintPreloadData(iVar9);
  HintPreloadData(iVar8 + uVar6 * 0x40 + 0x20);
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar12 = 0x18 - iVar26;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    iVar23 = iVar14;
    iVar24 = iVar20;
    if (0x180 < uVar5 - uVar13) {
      iVar26 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar23 = 0x61;
      }
      else {
        iVar23 = 1;
      }
      for (; uVar13 != iVar23 + iVar26; uVar13 = uVar13 + 1) {
        uVar16 = (*(int *)(iVar3 + uVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar12 & 0xff);
        uVar15 = uVar16 >> 8;
        HintPreloadData(iVar20 + uVar15 * 0x100);
        HintPreloadData(iVar14 + uVar15 * 0x40);
        HintPreloadData(iVar20 + uVar15 * 0x100 + 0x40);
        HintPreloadData(iVar14 + uVar15 * 0x40 + 0x20);
        uVar21 = *(uint *)(iVar1 + (uVar13 & 7) * 4);
        *(uint *)(iVar1 + (uVar13 & 7) * 4) = uVar16;
        uVar15 = uVar21 >> 8;
        uVar16 = *(byte *)(iVar14 + uVar15 * 0x40) - 1 & 0x3f;
        if (uVar16 == 0) {
          iVar24 = 0x3f;
        }
        else {
          iVar24 = 0;
        }
        iVar24 = uVar16 + iVar24;
        *(char *)(iVar14 + uVar15 * 0x40) = (char)iVar24;
        *(char *)(iVar14 + uVar15 * 0x40 + iVar24) = (char)uVar21;
        *(uint *)(iVar20 + (iVar24 + uVar15 * 0x40) * 4) = uVar13;
      }
      uVar13 = uVar5 - 0x20;
      iVar26 = *(int *)(param_1 + 0x24);
      iVar24 = *(int *)(param_1 + 0x5c);
      uVar15 = 0;
      if (iVar3 + uVar13 <= (int)param_2 + 1U) {
        uVar15 = (((int)param_2 + 1U) - (iVar3 + uVar13)) + 1;
      }
      iVar23 = *(int *)(param_1 + 0x28);
      if (uVar15 < 9) {
        uVar15 = uVar13 + uVar15;
      }
      else {
        uVar15 = uVar5 - 0x18;
      }
      for (uVar16 = uVar13; uVar16 < uVar15; uVar16 = uVar16 + 1) {
        uVar18 = (*(int *)(iVar3 + uVar16) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar26 & 0xff);
        uVar21 = uVar18 >> 8;
        HintPreloadData(iVar24 + uVar21 * 0x100);
        HintPreloadData(iVar23 + uVar21 * 0x40);
        HintPreloadData(iVar24 + uVar21 * 0x100 + 0x40);
        HintPreloadData(iVar23 + uVar21 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar16 & 7) * 4 + 0x2c) = uVar18;
      }
    }
    iVar19 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar5; uVar13 = uVar13 + 1) {
      uVar16 = (*(int *)(iVar19 + uVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar26 & 0xff);
      uVar15 = uVar16 >> 8;
      HintPreloadData(iVar24 + uVar15 * 0x100);
      HintPreloadData(iVar23 + uVar15 * 0x40);
      HintPreloadData(iVar24 + uVar15 * 0x100 + 0x40);
      HintPreloadData(iVar23 + uVar15 * 0x40 + 0x20);
      uVar21 = *(uint *)(iVar1 + (uVar13 & 7) * 4);
      *(uint *)(iVar1 + (uVar13 & 7) * 4) = uVar16;
      uVar15 = uVar21 >> 8;
      uVar16 = *(byte *)(iVar23 + uVar15 * 0x40) - 1 & 0x3f;
      if (uVar16 == 0) {
        iVar22 = 0x3f;
      }
      else {
        iVar22 = 0;
      }
      iVar22 = uVar16 + iVar22;
      *(char *)(iVar23 + uVar15 * 0x40) = (char)iVar22;
      *(char *)(iVar23 + uVar15 * 0x40 + iVar22) = (char)uVar21;
      *(uint *)(iVar24 + (iVar22 + uVar15 * 0x40) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar5;
    uVar12 = (param_2[2] * -0x61c8864f ^ uVar11) >> (uVar12 & 0xff);
    uVar11 = uVar12 >> 8;
    HintPreloadData(iVar20 + uVar11 * 0x100);
    HintPreloadData(iVar14 + uVar11 * 0x40);
    HintPreloadData(iVar20 + uVar11 * 0x100 + 0x40);
    HintPreloadData(iVar14 + uVar11 * 0x40 + 0x20);
    uVar11 = *(uint *)(iVar1 + (uVar5 & 7) * 4);
    *(uint *)(iVar1 + (uVar5 & 7) * 4) = uVar12;
  }
  else {
    uVar11 = (*param_2 * -0x61c8864f ^ uVar11) >> (uVar12 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar5;
  }
  uVar12 = uVar11 >> 8;
  uVar15 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar11;
  iVar20 = iVar20 + uVar12 * 0x100;
  uVar16 = (uint)*(byte *)(iVar14 + uVar12 * 0x40);
  uVar13 = 0;
  uVar21 = uVar16 & 0x3f;
  iVar23 = iVar14 + uVar12 * 0x40;
  iVar26 = 0x3c;
  do {
    uVar13 = uVar13 << 4 | uVar15 >> 0x1c;
    bVar27 = iVar26 != 0;
    uVar18 = *(uint *)(iVar23 + iVar26) ^ (uVar11 & 0xff) * 0x1010101;
    uVar15 = (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
             uVar15 << 4;
    iVar26 = iVar26 + -4;
  } while (bVar27);
  uVar15 = ~uVar15;
  uVar13 = ~uVar13;
  uVar25 = -uVar21 & 0x3f;
  uVar18 = uVar13 << uVar25 | uVar15 << (uVar25 - 0x20 & 0xff) | uVar15 >> (0x20 - uVar25 & 0xff) |
           uVar13 >> uVar21;
  uVar13 = uVar15 >> uVar21 | uVar13 << (0x20 - uVar21 & 0xff) | uVar13 >> (uVar21 - 0x20 & 0xff) |
           uVar15 << uVar25;
  iVar26 = 0;
  while (uVar2 = (undefined1)uVar11, local_144 != 0 && (uVar13 != 0 || uVar18 != 0)) {
    iVar24 = FUN_01b9b85c(uVar13,uVar18);
    uVar2 = (undefined1)extraout_r2;
    uVar11 = uVar21 + iVar24 & 0x3f;
    iVar24 = iVar26;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar20 + uVar11 * 4);
      if (uVar11 < local_14c) break;
      HintPreloadData(iVar3 + uVar11);
      iVar24 = iVar26 + 1;
      local_12c[iVar26] = uVar11;
      local_144 = local_144 - 1;
    }
    uVar18 = uVar18 & uVar18 - (extraout_r3 == 0);
    uVar11 = extraout_r2;
    iVar26 = iVar24;
    uVar13 = extraout_r3 & extraout_r3 - 1;
  }
  uVar11 = uVar16 - 1 & 0x3f;
  if (uVar11 == 0) {
    iVar24 = 0x3f;
  }
  else {
    iVar24 = 0;
  }
  iVar24 = uVar11 + iVar24;
  *(char *)(iVar14 + uVar12 * 0x40) = (char)iVar24;
  *(undefined1 *)(iVar23 + iVar24) = uVar2;
  iVar14 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar14 + 1;
  uVar11 = 3;
  *(int *)(iVar20 + iVar24 * 4) = iVar14;
  for (iVar20 = 0; iVar26 != iVar20; iVar20 = iVar20 + 1) {
    uVar12 = local_12c[iVar20];
    iVar14 = iVar3 + uVar12;
    if ((*(int *)(iVar14 + (uVar11 - 3)) == *(int *)((int)param_2 + (uVar11 - 3))) &&
       (uVar13 = FUN_01b9b884(param_2,iVar14,param_3), uVar11 < uVar13)) {
      *param_4 = (uVar5 + 3) - uVar12;
      if (param_3 == (int)param_2 + uVar13) goto LAB_01ba66b4;
      uVar11 = uVar13;
    }
  }
  uVar13 = uVar11;
LAB_01ba66b4:
  uVar11 = 0;
  uVar12 = 0;
  uVar15 = piVar7[3];
  iVar14 = *piVar7;
  iVar26 = piVar7[1];
  uVar6 = *(byte *)(iVar8 + uVar6 * 0x40) & 0x3f;
  iVar20 = 0x3c;
  do {
    uVar12 = uVar12 << 4 | uVar11 >> 0x1c;
    bVar27 = iVar20 != 0;
    uVar16 = *(uint *)(iVar9 + iVar20) ^ (uVar17 & 0xff) * 0x1010101;
    uVar11 = (((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
             uVar11 << 4;
    iVar20 = iVar20 + -4;
  } while (bVar27);
  uVar11 = ~uVar11;
  uVar12 = ~uVar12;
  uVar16 = -uVar6 & 0x3f;
  uVar17 = uVar12 << uVar16 | uVar11 << (uVar16 - 0x20 & 0xff) | uVar11 >> (0x20 - uVar16 & 0xff) |
           uVar12 >> uVar6;
  uVar6 = uVar11 >> uVar6 | uVar12 << (0x20 - uVar6 & 0xff) | uVar12 >> (uVar6 - 0x20 & 0xff) |
          uVar11 << uVar16;
  iVar20 = 0;
  while (uVar11 = local_144, local_144 != 0 && (uVar6 != 0 || uVar17 != 0)) {
    iVar8 = FUN_01b9b85c(uVar6,uVar17);
    uVar6 = extraout_r2_00 + iVar8 & 0x3f;
    iVar8 = iVar20;
    if (uVar6 != 0) {
      uVar11 = *(uint *)(iVar10 + uVar6 * 4);
      if (uVar11 < uVar15) break;
      HintPreloadData(iVar26 + uVar11);
      iVar8 = iVar20 + 1;
      local_12c[iVar20] = uVar11;
      local_144 = local_144 - 1;
    }
    uVar17 = uVar17 & uVar17 - (extraout_r3_00 == 0);
    iVar20 = iVar8;
    uVar6 = extraout_r3_00 & extraout_r3_00 - 1;
  }
  for (iVar8 = 0; iVar20 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = local_12c[iVar8];
    uVar11 = iVar26 + uVar6;
    if (*(int *)(iVar26 + uVar6) == *param_2) {
      uVar28 = FUN_01b9b970(param_2 + 1,uVar11 + 4,param_3,iVar14,iVar3 + iVar4);
      uVar11 = (uint)((ulonglong)uVar28 >> 0x20);
      uVar17 = (int)uVar28 + 4;
      if (uVar13 < uVar17) {
        *param_4 = ((3 - iVar4) + uVar5 + (iVar14 - iVar26)) - uVar6;
        if (param_3 == (int)param_2 + uVar17) goto LAB_01ba6adc;
        uVar13 = uVar17;
      }
    }
  }
  uVar17 = uVar13;
LAB_01ba6adc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar17,uVar11,local_2c ^ DAT_01d53560,0);
  }
  return;
}

