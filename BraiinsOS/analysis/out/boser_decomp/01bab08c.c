// FUN_01bab08c @ 01bab08c size=1436 calls_out=4 calls_in=3
// strings: 

void FUN_01bab08c(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r3;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined8 uVar21;
  int local_150;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar17 = *(int *)(param_1 + 0x24);
  local_2c = DAT_01d53560;
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar16 = (int)param_2 - iVar6;
  uVar9 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar16 - uVar9) {
    local_14c = uVar16 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
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
  local_150 = 1 << (uVar9 & 0xff);
  uVar9 = *(uint *)(param_1 + 0x50);
  uVar10 = 0x18 - iVar17;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar11 = *(uint *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    if (uVar16 - uVar11 < 0x181) {
      iVar18 = iVar5;
      iVar12 = iVar4;
    }
    else {
      iVar17 = uVar11 - 1;
      if (uVar11 < 0xffffffa0) {
        iVar18 = 0x61;
      }
      else {
        iVar18 = 1;
      }
      for (; uVar11 != iVar18 + iVar17; uVar11 = uVar11 + 1) {
        uVar15 = (*(int *)(iVar6 + uVar11 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar10 & 0xff);
        uVar13 = uVar15 >> 8;
        HintPreloadData(iVar4 + uVar13 * 0x40);
        HintPreloadData(iVar5 + uVar13 * 0x10);
        uVar19 = *(uint *)(iVar1 + (uVar11 & 7) * 4);
        *(uint *)(iVar1 + (uVar11 & 7) * 4) = uVar15;
        uVar13 = uVar19 >> 8;
        uVar15 = *(byte *)(iVar5 + uVar13 * 0x10) - 1 & 0xf;
        if (uVar15 == 0) {
          iVar12 = 0xf;
        }
        else {
          iVar12 = 0;
        }
        iVar12 = uVar15 + iVar12;
        *(char *)(iVar5 + uVar13 * 0x10) = (char)iVar12;
        *(char *)(iVar5 + uVar13 * 0x10 + iVar12) = (char)uVar19;
        *(uint *)(iVar4 + (iVar12 + uVar13 * 0x10) * 4) = uVar11;
      }
      uVar11 = uVar16 - 0x20;
      iVar17 = *(int *)(param_1 + 0x24);
      iVar12 = *(int *)(param_1 + 0x5c);
      uVar13 = 0;
      if (iVar6 + uVar11 <= (int)param_2 + 1U) {
        uVar13 = (((int)param_2 + 1U) - (iVar6 + uVar11)) + 1;
      }
      iVar18 = *(int *)(param_1 + 0x28);
      if (uVar13 < 9) {
        uVar13 = uVar11 + uVar13;
      }
      else {
        uVar13 = uVar16 - 0x18;
      }
      for (uVar15 = uVar11; uVar15 < uVar13; uVar15 = uVar15 + 1) {
        uVar2 = (*(int *)(iVar6 + uVar15) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar17 & 0xff);
        uVar19 = uVar2 >> 8;
        HintPreloadData(iVar12 + uVar19 * 0x40);
        HintPreloadData(iVar18 + uVar19 * 0x10);
        *(uint *)(param_1 + (uVar15 & 7) * 4 + 0x2c) = uVar2;
      }
    }
    iVar14 = *(int *)(param_1 + 4);
    for (; uVar11 < uVar16; uVar11 = uVar11 + 1) {
      uVar15 = (*(int *)(iVar14 + uVar11 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar17 & 0xff);
      uVar13 = uVar15 >> 8;
      HintPreloadData(iVar12 + uVar13 * 0x40);
      HintPreloadData(iVar18 + uVar13 * 0x10);
      uVar19 = *(uint *)(iVar1 + (uVar11 & 7) * 4);
      *(uint *)(iVar1 + (uVar11 & 7) * 4) = uVar15;
      uVar13 = uVar19 >> 8;
      uVar15 = *(byte *)(iVar18 + uVar13 * 0x10) - 1 & 0xf;
      if (uVar15 == 0) {
        iVar3 = 0xf;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = uVar15 + iVar3;
      *(char *)(iVar18 + uVar13 * 0x10) = (char)iVar3;
      *(char *)(iVar18 + uVar13 * 0x10 + iVar3) = (char)uVar19;
      *(uint *)(iVar12 + (iVar3 + uVar13 * 0x10) * 4) = uVar11;
    }
    *(uint *)(param_1 + 0x1c) = uVar16;
    uVar10 = (param_2[2] * -0x61c8864f ^ uVar9) >> (uVar10 & 0xff);
    uVar9 = uVar10 >> 8;
    HintPreloadData(iVar4 + uVar9 * 0x40);
    HintPreloadData(iVar5 + uVar9 * 0x10);
    uVar9 = *(uint *)(iVar1 + (uVar16 & 7) * 4);
    *(uint *)(iVar1 + (uVar16 & 7) * 4) = uVar10;
  }
  else {
    iVar17 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar16;
    uVar9 = (iVar17 * -0x61c8864f ^ uVar9) >> (uVar10 & 0xff);
  }
  uVar10 = uVar9 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar9;
  iVar4 = iVar4 + uVar10 * 0x40;
  iVar1 = iVar5 + uVar10 * 0x10;
  uVar13 = (uint)*(byte *)(iVar5 + uVar10 * 0x10);
  uVar11 = 0;
  uVar15 = uVar13 & 0xf;
  iVar17 = 0xc;
  do {
    bVar20 = iVar17 != 0;
    uVar19 = *(uint *)(iVar1 + iVar17) ^ (uVar9 & 0xff) * 0x1010101;
    uVar11 = (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
             uVar11 << 4;
    iVar17 = iVar17 + -4;
  } while (bVar20);
  uVar19 = 0;
  uVar11 = (~uVar11 << (-uVar15 & 0xf) | (~uVar11 & 0xffff) >> uVar15) & 0xffff;
  iVar17 = 0;
  while (uVar2 = uVar11 | uVar19, local_150 != 0 && uVar2 != 0) {
    iVar18 = FUN_01b9b85c(uVar11,uVar19);
    uVar11 = uVar15 + iVar18 & 0xf;
    iVar18 = iVar17;
    if (uVar11 != 0) {
      uVar2 = *(uint *)(iVar4 + uVar11 * 4);
      if (uVar2 < local_14c) break;
      if (uVar2 < uVar8) {
        iVar18 = iVar7;
      }
      else {
        iVar18 = iVar6;
      }
      HintPreloadData(iVar18 + uVar2);
      iVar18 = iVar17 + 1;
      local_12c[iVar17] = uVar2;
      local_150 = local_150 + -1;
    }
    uVar19 = extraout_r2 & extraout_r2 - (extraout_r3 == 0);
    iVar17 = iVar18;
    uVar11 = extraout_r3 & extraout_r3 - 1;
  }
  uVar11 = uVar13 - 1 & 0xf;
  if (uVar11 == 0) {
    iVar18 = 0xf;
  }
  else {
    iVar18 = 0;
  }
  iVar18 = uVar11 + iVar18;
  *(char *)(iVar5 + uVar10 * 0x10) = (char)iVar18;
  *(char *)(iVar1 + iVar18) = (char)uVar9;
  uVar9 = 3;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar4 + iVar18 * 4) = iVar5;
  for (iVar5 = 0; uVar21 = CONCAT44(uVar2,uVar9), iVar17 != iVar5; iVar5 = iVar5 + 1) {
    uVar10 = local_12c[iVar5];
    if (uVar10 < uVar8) {
      uVar2 = iVar7 + uVar10;
      if (*(int *)(iVar7 + uVar10) == *param_2) {
        uVar21 = FUN_01b9b970(param_2 + 1,uVar2 + 4,param_3,iVar7 + uVar8,iVar6 + uVar8);
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),(int)uVar21 + 4);
        goto LAB_01bab59c;
      }
    }
    else {
      uVar2 = iVar6 + uVar10;
      if (*(int *)(uVar2 + (uVar9 - 3)) == *(int *)((int)param_2 + (uVar9 - 3))) {
        uVar21 = FUN_01b9b884(param_2,uVar2,param_3);
LAB_01bab59c:
        uVar2 = (uint)((ulonglong)uVar21 >> 0x20);
        uVar11 = (uint)uVar21;
        if (uVar9 < uVar11) {
          *param_4 = (uVar16 + 3) - uVar10;
          if (param_3 == (int)param_2 + uVar11) break;
          uVar9 = uVar11;
        }
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

