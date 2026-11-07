// FUN_01ba72ac @ 01ba72ac size=1896 calls_out=4 calls_in=3
// strings: 

void FUN_01ba72ac(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar5;
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
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_14c;
  uint local_144;
  uint local_12c [64];
  uint local_2c;
  
  iVar23 = *(int *)(param_1 + 0x24);
  iVar22 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar8 = (int)param_2 - iVar6;
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar8 - uVar9) {
    local_14c = uVar8 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_14c = uVar9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar9;
  }
  uVar9 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar9) {
    uVar9 = 4;
  }
  local_144 = 1 << (uVar9 & 0xff);
  piVar10 = *(int **)(param_1 + 0xb4);
  uVar19 = (uint)(*param_2 * -0x61c8864f) >> (0x18U - piVar10[9] & 0xff);
  uVar9 = uVar19 >> 8;
  iVar11 = piVar10[10];
  iVar12 = iVar11 + uVar9 * 0x10;
  iVar13 = piVar10[0x17] + uVar9 * 0x40;
  HintPreloadData(iVar13);
  HintPreloadData(iVar12);
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar15 = 0x18 - iVar23;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar16 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    if (uVar8 - uVar16 < 0x181) {
      iVar24 = iVar22;
      iVar17 = iVar5;
    }
    else {
      iVar23 = uVar16 - 1;
      if (uVar16 < 0xffffffa0) {
        iVar24 = 0x61;
      }
      else {
        iVar24 = 1;
      }
      for (; uVar16 != iVar24 + iVar23; uVar16 = uVar16 + 1) {
        uVar21 = (*(int *)(iVar6 + uVar16 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar15 & 0xff);
        uVar18 = uVar21 >> 8;
        HintPreloadData(iVar5 + uVar18 * 0x40);
        HintPreloadData(iVar22 + uVar18 * 0x10);
        uVar25 = *(uint *)(iVar2 + (uVar16 & 7) * 4);
        *(uint *)(iVar2 + (uVar16 & 7) * 4) = uVar21;
        uVar18 = uVar25 >> 8;
        uVar21 = *(byte *)(iVar22 + uVar18 * 0x10) - 1 & 0xf;
        if (uVar21 == 0) {
          iVar17 = 0xf;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar21 + iVar17;
        *(char *)(iVar22 + uVar18 * 0x10) = (char)iVar17;
        *(char *)(iVar22 + uVar18 * 0x10 + iVar17) = (char)uVar25;
        *(uint *)(iVar5 + (iVar17 + uVar18 * 0x10) * 4) = uVar16;
      }
      uVar16 = uVar8 - 0x20;
      iVar23 = *(int *)(param_1 + 0x24);
      iVar17 = *(int *)(param_1 + 0x5c);
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
                (0x18U - iVar23 & 0xff);
        uVar25 = uVar1 >> 8;
        HintPreloadData(iVar17 + uVar25 * 0x40);
        HintPreloadData(iVar24 + uVar25 * 0x10);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar20 = *(int *)(param_1 + 4);
    for (; uVar16 < uVar8; uVar16 = uVar16 + 1) {
      uVar21 = (*(int *)(iVar20 + uVar16 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar23 & 0xff);
      uVar18 = uVar21 >> 8;
      HintPreloadData(iVar17 + uVar18 * 0x40);
      HintPreloadData(iVar24 + uVar18 * 0x10);
      uVar25 = *(uint *)(iVar2 + (uVar16 & 7) * 4);
      *(uint *)(iVar2 + (uVar16 & 7) * 4) = uVar21;
      uVar18 = uVar25 >> 8;
      uVar21 = *(byte *)(iVar24 + uVar18 * 0x10) - 1 & 0xf;
      if (uVar21 == 0) {
        iVar4 = 0xf;
      }
      else {
        iVar4 = 0;
      }
      iVar4 = uVar21 + iVar4;
      *(char *)(iVar24 + uVar18 * 0x10) = (char)iVar4;
      *(char *)(iVar24 + uVar18 * 0x10 + iVar4) = (char)uVar25;
      *(uint *)(iVar17 + (iVar4 + uVar18 * 0x10) * 4) = uVar16;
    }
    *(uint *)(param_1 + 0x1c) = uVar8;
    uVar15 = (param_2[2] * -0x61c8864f ^ uVar14) >> (uVar15 & 0xff);
    uVar14 = uVar15 >> 8;
    HintPreloadData(iVar5 + uVar14 * 0x40);
    HintPreloadData(iVar22 + uVar14 * 0x10);
    uVar14 = *(uint *)(iVar2 + (uVar8 & 7) * 4);
    *(uint *)(iVar2 + (uVar8 & 7) * 4) = uVar15;
  }
  else {
    uVar14 = (*param_2 * -0x61c8864f ^ uVar14) >> (uVar15 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar8;
  }
  uVar15 = uVar14 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar14;
  uVar18 = (uint)*(byte *)(iVar22 + uVar15 * 0x10);
  iVar2 = iVar22 + uVar15 * 0x10;
  iVar5 = iVar5 + uVar15 * 0x40;
  uVar21 = uVar18 & 0xf;
  uVar16 = 0;
  iVar23 = 0xc;
  do {
    bVar26 = iVar23 != 0;
    uVar25 = *(uint *)(iVar2 + iVar23) ^ (uVar14 & 0xff) * 0x1010101;
    uVar16 = (((uVar25 | 0x80808080) + 0xfefefeff | uVar25) & 0x80808080) * 0x204081 >> 0x1c |
             uVar16 << 4;
    iVar23 = iVar23 + -4;
  } while (bVar26);
  uVar16 = (~uVar16 << (-uVar21 & 0xf) | (~uVar16 & 0xffff) >> uVar21) & 0xffff;
  iVar23 = 0;
  while (uVar3 = (undefined1)uVar14, local_144 != 0 && uVar16 != 0) {
    iVar24 = FUN_01b9b85c(uVar16);
    uVar3 = (undefined1)extraout_r2;
    uVar14 = uVar21 + iVar24 & 0xf;
    iVar24 = iVar23;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(iVar5 + uVar14 * 4);
      if (uVar14 < local_14c) break;
      HintPreloadData(iVar6 + uVar14);
      iVar24 = iVar23 + 1;
      local_12c[iVar23] = uVar14;
      local_144 = local_144 - 1;
    }
    uVar14 = extraout_r2;
    iVar23 = iVar24;
    uVar16 = extraout_r3 & extraout_r3 - 1;
  }
  uVar14 = uVar18 - 1 & 0xf;
  if (uVar14 == 0) {
    iVar24 = 0xf;
  }
  else {
    iVar24 = 0;
  }
  iVar24 = uVar14 + iVar24;
  *(char *)(iVar22 + uVar15 * 0x10) = (char)iVar24;
  *(undefined1 *)(iVar2 + iVar24) = uVar3;
  iVar22 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar22 + 1;
  uVar14 = 3;
  *(int *)(iVar5 + iVar24 * 4) = iVar22;
  for (iVar5 = 0; iVar23 != iVar5; iVar5 = iVar5 + 1) {
    uVar15 = local_12c[iVar5];
    iVar22 = iVar6 + uVar15;
    if ((*(int *)(iVar22 + (uVar14 - 3)) == *(int *)((int)param_2 + (uVar14 - 3))) &&
       (uVar16 = FUN_01b9b884(param_2,iVar22,param_3), uVar14 < uVar16)) {
      *param_4 = (uVar8 + 3) - uVar15;
      if (param_3 == (int)param_2 + uVar16) goto LAB_01ba75fc;
      uVar14 = uVar16;
    }
  }
  uVar16 = uVar14;
LAB_01ba75fc:
  uVar14 = 0;
  uVar9 = *(byte *)(iVar11 + uVar9 * 0x10) & 0xf;
  iVar23 = *piVar10;
  iVar11 = piVar10[1];
  iVar22 = iVar23 - iVar11;
  iVar5 = 0xc;
  do {
    bVar26 = iVar5 != 0;
    uVar15 = *(uint *)(iVar12 + iVar5) ^ (uVar19 & 0xff) * 0x1010101;
    uVar14 = (((uVar15 | 0x80808080) + 0xfefefeff | uVar15) & 0x80808080) * 0x204081 >> 0x1c |
             uVar14 << 4;
    iVar5 = iVar5 + -4;
  } while (bVar26);
  iVar5 = 0;
  for (uVar19 = (~uVar14 << (-uVar9 & 0xf) | (~uVar14 & 0xffff) >> uVar9) & 0xffff;
      uVar14 = local_144, local_144 != 0 && uVar19 != 0; uVar19 = uVar19 & uVar19 - 1) {
    iVar22 = FUN_01b9b85c(uVar19,0);
    uVar14 = uVar9 + iVar22 & 0xf;
    iVar12 = iVar5;
    iVar22 = extraout_r3_00;
    if (uVar14 != 0) {
      uVar14 = *(uint *)(iVar13 + uVar14 * 4);
      if (uVar14 < extraout_r2_00) break;
      HintPreloadData(iVar11 + uVar14);
      iVar12 = iVar5 + 1;
      local_12c[iVar5] = uVar14;
      local_144 = local_144 - 1;
    }
    iVar5 = iVar12;
  }
  for (iVar12 = 0; iVar5 != iVar12; iVar12 = iVar12 + 1) {
    uVar9 = local_12c[iVar12];
    uVar14 = iVar11 + uVar9;
    if (*(int *)(iVar11 + uVar9) == *param_2) {
      uVar27 = FUN_01b9b970(param_2 + 1,uVar14 + 4,param_3,iVar23,iVar6 + iVar7);
      uVar14 = (uint)((ulonglong)uVar27 >> 0x20);
      uVar19 = (int)uVar27 + 4;
      if (uVar16 < uVar19) {
        *param_4 = ((3 - iVar7) + uVar8 + iVar22) - uVar9;
        if (param_3 == (int)param_2 + uVar19) goto LAB_01ba79cc;
        uVar16 = uVar19;
      }
    }
  }
  uVar19 = uVar16;
LAB_01ba79cc:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar19,uVar14,local_2c ^ DAT_01d53560,0);
  }
  return;
}

