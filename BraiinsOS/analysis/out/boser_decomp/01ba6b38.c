// FUN_01ba6b38 @ 01ba6b38 size=1888 calls_out=4 calls_in=3
// strings: 

void FUN_01ba6b38(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_148;
  uint local_144;
  uint local_12c [64];
  uint local_2c;
  
  iVar17 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar20 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar8 = (int)param_2 - iVar6;
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar8 - uVar9) {
    local_148 = uVar8 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar9;
  }
  uVar9 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar9) {
    uVar9 = 5;
  }
  local_144 = 1 << (uVar9 & 0xff);
  piVar10 = *(int **)(param_1 + 0xb4);
  uVar3 = (uint)(*param_2 * -0x61c8864f) >> (0x18U - piVar10[9] & 0xff);
  uVar9 = uVar3 >> 8;
  iVar11 = piVar10[10];
  iVar12 = iVar11 + uVar9 * 0x20;
  iVar13 = piVar10[0x17] + uVar9 * 0x80;
  HintPreloadData(iVar13);
  HintPreloadData(piVar10[0x17] + uVar9 * 0x80 + 0x40);
  HintPreloadData(iVar12);
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar15 = 0x18 - iVar17;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    iVar23 = iVar4;
    iVar24 = iVar20;
    if (0x180 < uVar8 - uVar16) {
      iVar17 = uVar16 - 1;
      if (uVar16 < 0xffffffa0) {
        iVar23 = 0x61;
      }
      else {
        iVar23 = 1;
      }
      for (; uVar16 != iVar23 + iVar17; uVar16 = uVar16 + 1) {
        uVar21 = (*(int *)(iVar6 + uVar16 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar15 & 0xff);
        uVar18 = uVar21 >> 8;
        HintPreloadData(iVar4 + uVar18 * 0x80);
        HintPreloadData(iVar20 + uVar18 * 0x20);
        HintPreloadData(iVar4 + uVar18 * 0x80 + 0x40);
        uVar25 = *(uint *)(iVar2 + (uVar16 & 7) * 4);
        *(uint *)(iVar2 + (uVar16 & 7) * 4) = uVar21;
        uVar18 = uVar25 >> 8;
        uVar21 = *(byte *)(iVar20 + uVar18 * 0x20) - 1 & 0x1f;
        if (uVar21 == 0) {
          iVar24 = 0x1f;
        }
        else {
          iVar24 = 0;
        }
        iVar24 = uVar21 + iVar24;
        *(char *)(iVar20 + uVar18 * 0x20) = (char)iVar24;
        *(char *)(iVar20 + uVar18 * 0x20 + iVar24) = (char)uVar25;
        *(uint *)(iVar4 + (iVar24 + uVar18 * 0x20) * 4) = uVar16;
      }
      uVar16 = uVar8 - 0x20;
      iVar17 = *(int *)(param_1 + 0x24);
      iVar23 = *(int *)(param_1 + 0x5c);
      uVar18 = 0;
      if (iVar6 + uVar16 <= (int)param_2 + 1U) {
        uVar18 = (((int)param_2 + 1U) - (iVar6 + uVar16)) + 1;
      }
      iVar24 = *(int *)(param_1 + 0x28);
      if (uVar18 < 9) {
        uVar18 = uVar16 + uVar18;
      }
      else {
        uVar18 = uVar8 - 0x18;
      }
      for (uVar21 = uVar16; uVar21 < uVar18; uVar21 = uVar21 + 1) {
        uVar1 = (*(int *)(iVar6 + uVar21) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar17 & 0xff);
        uVar25 = uVar1 >> 8;
        HintPreloadData(iVar23 + uVar25 * 0x80);
        HintPreloadData(iVar24 + uVar25 * 0x20);
        HintPreloadData(iVar23 + uVar25 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar19 = *(int *)(param_1 + 4);
    for (; uVar16 < uVar8; uVar16 = uVar16 + 1) {
      uVar21 = (*(int *)(iVar19 + uVar16 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar17 & 0xff);
      uVar18 = uVar21 >> 8;
      HintPreloadData(iVar23 + uVar18 * 0x80);
      HintPreloadData(iVar24 + uVar18 * 0x20);
      HintPreloadData(iVar23 + uVar18 * 0x80 + 0x40);
      uVar25 = *(uint *)(iVar2 + (uVar16 & 7) * 4);
      *(uint *)(iVar2 + (uVar16 & 7) * 4) = uVar21;
      uVar18 = uVar25 >> 8;
      uVar21 = *(byte *)(iVar24 + uVar18 * 0x20) - 1 & 0x1f;
      if (uVar21 == 0) {
        iVar22 = 0x1f;
      }
      else {
        iVar22 = 0;
      }
      iVar22 = uVar21 + iVar22;
      *(char *)(iVar24 + uVar18 * 0x20) = (char)iVar22;
      *(char *)(iVar24 + uVar18 * 0x20 + iVar22) = (char)uVar25;
      *(uint *)(iVar23 + (iVar22 + uVar18 * 0x20) * 4) = uVar16;
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    uVar15 = (param_2[2] * -0x61c8864f ^ uVar14) >> (uVar15 & 0xff);
    uVar14 = uVar15 >> 8;
    HintPreloadData(iVar4 + uVar14 * 0x80);
    HintPreloadData(iVar20 + uVar14 * 0x20);
    HintPreloadData(iVar4 + uVar14 * 0x80 + 0x40);
    uVar14 = *(uint *)(iVar2 + (uVar8 & 7) * 4);
    *(uint *)(iVar2 + (uVar8 & 7) * 4) = uVar15;
  }
  else {
    uVar14 = (*param_2 * -0x61c8864f ^ uVar14) >> (uVar15 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar8;
  }
  uVar15 = uVar14 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar14;
  iVar23 = iVar20 + uVar15 * 0x20;
  uVar18 = (uint)*(byte *)(iVar20 + uVar15 * 0x20);
  iVar4 = iVar4 + uVar15 * 0x80;
  uVar21 = uVar18 & 0x1f;
  uVar16 = 0;
  iVar17 = 0x1c;
  do {
    bVar26 = iVar17 != 0;
    uVar25 = *(uint *)(iVar23 + iVar17) ^ (uVar14 & 0xff) * 0x1010101;
    uVar16 = (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar17 = iVar17 + -4;
  } while (bVar26);
  uVar16 = ~uVar16 >> uVar21 | ~uVar16 << 0x20 - uVar21;
  iVar17 = 0;
  while (uVar5 = (undefined1)uVar14, local_144 != 0 && uVar16 != 0) {
    iVar24 = FUN_01b9b85c(uVar16);
    uVar5 = (undefined1)extraout_r2;
    uVar14 = uVar21 + iVar24 & 0x1f;
    iVar24 = iVar17;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(iVar4 + uVar14 * 4);
      if (uVar14 < local_148) break;
      HintPreloadData(iVar6 + uVar14);
      iVar24 = iVar17 + 1;
      local_12c[iVar17] = uVar14;
      local_144 = local_144 - 1;
    }
    uVar14 = extraout_r2;
    iVar17 = iVar24;
    uVar16 = extraout_r3 & extraout_r3 - 1;
  }
  uVar14 = uVar18 - 1 & 0x1f;
  if (uVar14 == 0) {
    iVar24 = 0x1f;
  }
  else {
    iVar24 = 0;
  }
  iVar24 = uVar14 + iVar24;
  *(char *)(iVar20 + uVar15 * 0x20) = (char)iVar24;
  *(undefined1 *)(iVar23 + iVar24) = uVar5;
  iVar20 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar20 + 1;
  *(int *)(iVar4 + iVar24 * 4) = iVar20;
  uVar14 = 3;
  for (iVar4 = 0; iVar17 != iVar4; iVar4 = iVar4 + 1) {
    uVar15 = local_12c[iVar4];
    iVar20 = iVar6 + uVar15;
    if ((*(int *)(iVar20 + (uVar14 - 3)) == *(int *)((int)param_2 + (uVar14 - 3))) &&
       (uVar16 = FUN_01b9b884(param_2,iVar20,param_3), uVar14 < uVar16)) {
      *param_4 = (uVar8 + 3) - uVar15;
      if (param_3 == (int)param_2 + uVar16) goto LAB_01ba6e80;
      uVar14 = uVar16;
    }
  }
  uVar16 = uVar14;
LAB_01ba6e80:
  uVar14 = 0;
  uVar9 = *(byte *)(iVar11 + uVar9 * 0x20) & 0x1f;
  iVar20 = *piVar10;
  iVar11 = piVar10[1];
  iVar17 = iVar20 - iVar11;
  iVar4 = 0x1c;
  do {
    bVar26 = iVar4 != 0;
    uVar15 = *(uint *)(iVar12 + iVar4) ^ (uVar3 & 0xff) * 0x1010101;
    uVar14 = (((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
             uVar14 << 4;
    iVar4 = iVar4 + -4;
  } while (bVar26);
  iVar4 = 0;
  for (uVar3 = ~uVar14 >> uVar9 | ~uVar14 << 0x20 - uVar9; uVar14 = local_144,
      local_144 != 0 && uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
    iVar17 = FUN_01b9b85c(uVar3,0);
    uVar14 = uVar9 + iVar17 & 0x1f;
    iVar12 = iVar4;
    iVar17 = extraout_r3_00;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(iVar13 + uVar14 * 4);
      if (uVar14 < extraout_r2_00) break;
      HintPreloadData(iVar11 + uVar14);
      iVar12 = iVar4 + 1;
      local_12c[iVar4] = uVar14;
      local_144 = local_144 - 1;
    }
    iVar4 = iVar12;
  }
  for (iVar12 = 0; iVar4 != iVar12; iVar12 = iVar12 + 1) {
    uVar9 = local_12c[iVar12];
    uVar14 = iVar11 + uVar9;
    if (*(int *)(iVar11 + uVar9) == *param_2) {
      uVar27 = FUN_01b9b970(param_2 + 1,uVar14 + 4,param_3,iVar20,iVar6 + iVar7);
      uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
      uVar3 = (int)uVar27 + 4;
      if (uVar16 < uVar3) {
        *param_4 = ((3 - iVar7) + uVar8 + iVar17) - uVar9;
        if (param_3 == (int)param_2 + uVar3) goto LAB_01ba7250;
        uVar16 = uVar3;
      }
    }
  }
  uVar3 = uVar16;
LAB_01ba7250:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar14,local_2c ^ DAT_01d53560,0);
  }
  return;
}

