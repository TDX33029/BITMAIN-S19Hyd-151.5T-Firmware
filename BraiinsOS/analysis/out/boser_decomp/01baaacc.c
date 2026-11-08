// FUN_01baaacc @ 01baaacc size=1448 calls_out=4 calls_in=3
// strings: 

void FUN_01baaacc(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint extraout_r2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_r3;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined8 uVar21;
  int local_150;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar18 = *(int *)(param_1 + 0x24);
  iVar14 = *(int *)(param_1 + 0x5c);
  local_2c = DAT_01d53560;
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar7 = (int)param_2 - iVar4;
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar7 - uVar8) {
    local_14c = uVar7 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_14c = uVar8;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar8) {
    uVar8 = 5;
  }
  local_150 = 1 << (uVar8 & 0xff);
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar9 = 0x18 - iVar18;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar10 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    if (uVar7 - uVar10 < 0x181) {
      iVar16 = iVar14;
      iVar17 = iVar3;
    }
    else {
      iVar18 = uVar10 - 1;
      if (uVar10 < 0xffffffa0) {
        iVar16 = 0x61;
      }
      else {
        iVar16 = 1;
      }
      for (; uVar10 != iVar16 + iVar18; uVar10 = uVar10 + 1) {
        uVar13 = (*(int *)(iVar4 + uVar10 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar9 & 0xff);
        uVar11 = uVar13 >> 8;
        HintPreloadData(iVar14 + uVar11 * 0x80);
        HintPreloadData(iVar14 + uVar11 * 0x80 + 0x40);
        HintPreloadData(iVar3 + uVar11 * 0x20);
        uVar19 = *(uint *)(iVar2 + (uVar10 & 7) * 4);
        *(uint *)(iVar2 + (uVar10 & 7) * 4) = uVar13;
        uVar11 = uVar19 >> 8;
        uVar13 = *(byte *)(iVar3 + uVar11 * 0x20) - 1 & 0x1f;
        if (uVar13 == 0) {
          iVar17 = 0x1f;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar13 + iVar17;
        *(char *)(iVar3 + uVar11 * 0x20) = (char)iVar17;
        *(char *)(iVar3 + uVar11 * 0x20 + iVar17) = (char)uVar19;
        *(uint *)(iVar14 + (iVar17 + uVar11 * 0x20) * 4) = uVar10;
      }
      uVar10 = uVar7 - 0x20;
      iVar18 = *(int *)(param_1 + 0x24);
      iVar16 = *(int *)(param_1 + 0x5c);
      uVar11 = 0;
      if (iVar4 + uVar10 <= (int)param_2 + 1U) {
        uVar11 = (((int)param_2 + 1U) - (iVar4 + uVar10)) + 1;
      }
      iVar17 = *(int *)(param_1 + 0x28);
      if (uVar11 < 9) {
        uVar11 = uVar10 + uVar11;
      }
      else {
        uVar11 = uVar7 - 0x18;
      }
      for (uVar13 = uVar10; uVar13 < uVar11; uVar13 = uVar13 + 1) {
        uVar1 = (*(int *)(iVar4 + uVar13) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar18 & 0xff);
        uVar19 = uVar1 >> 8;
        HintPreloadData(iVar16 + uVar19 * 0x80);
        HintPreloadData(iVar17 + uVar19 * 0x20);
        HintPreloadData(iVar16 + uVar19 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar13 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar12 = *(int *)(param_1 + 4);
    for (; uVar10 < uVar7; uVar10 = uVar10 + 1) {
      uVar13 = (*(int *)(iVar12 + uVar10 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar18 & 0xff);
      uVar11 = uVar13 >> 8;
      HintPreloadData(iVar16 + uVar11 * 0x80);
      HintPreloadData(iVar17 + uVar11 * 0x20);
      HintPreloadData(iVar16 + uVar11 * 0x80 + 0x40);
      uVar19 = *(uint *)(iVar2 + (uVar10 & 7) * 4);
      *(uint *)(iVar2 + (uVar10 & 7) * 4) = uVar13;
      uVar11 = uVar19 >> 8;
      uVar13 = *(byte *)(iVar17 + uVar11 * 0x20) - 1 & 0x1f;
      if (uVar13 == 0) {
        iVar15 = 0x1f;
      }
      else {
        iVar15 = 0;
      }
      iVar15 = uVar13 + iVar15;
      *(char *)(iVar17 + uVar11 * 0x20) = (char)iVar15;
      *(char *)(iVar17 + uVar11 * 0x20 + iVar15) = (char)uVar19;
      *(uint *)(iVar16 + (iVar15 + uVar11 * 0x20) * 4) = uVar10;
    }
    *(uint *)(param_1 + 0x1c) = uVar7;
    uVar9 = (param_2[2] * -0x61c8864f ^ uVar8) >> (uVar9 & 0xff);
    uVar8 = uVar9 >> 8;
    HintPreloadData(iVar14 + uVar8 * 0x80);
    HintPreloadData(iVar14 + uVar8 * 0x80 + 0x40);
    HintPreloadData(iVar3 + uVar8 * 0x20);
    uVar8 = *(uint *)(iVar2 + (uVar7 & 7) * 4);
    *(uint *)(iVar2 + (uVar7 & 7) * 4) = uVar9;
  }
  else {
    uVar8 = (*param_2 * -0x61c8864f ^ uVar8) >> (uVar9 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar7;
  }
  uVar9 = uVar8 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar8;
  iVar14 = iVar14 + uVar9 * 0x80;
  uVar11 = 0;
  uVar10 = (uint)*(byte *)(iVar3 + uVar9 * 0x20);
  iVar2 = iVar3 + uVar9 * 0x20;
  uVar13 = uVar10 & 0x1f;
  iVar18 = 0x1c;
  do {
    bVar20 = iVar18 != 0;
    uVar19 = *(uint *)(iVar2 + iVar18) ^ (uVar8 & 0xff) * 0x1010101;
    uVar11 = (((uVar19 | 0x80808080) + 0xfefefeff | uVar19) & 0x80808080) * 0x204081 >> 0x1c |
             uVar11 << 4;
    iVar18 = iVar18 + -4;
  } while (bVar20);
  uVar11 = ~uVar11 >> uVar13 | ~uVar11 << 0x20 - uVar13;
  iVar18 = 0;
  while (local_150 != 0 && uVar11 != 0) {
    iVar16 = FUN_01b9b85c(uVar11,0);
    uVar11 = uVar13 + iVar16 & 0x1f;
    iVar16 = iVar18;
    uVar10 = extraout_r2;
    if (uVar11 != 0) {
      uVar11 = *(uint *)(iVar14 + uVar11 * 4);
      if (uVar11 < local_14c) break;
      if (uVar11 < uVar6) {
        iVar16 = iVar5;
      }
      else {
        iVar16 = iVar4;
      }
      HintPreloadData(iVar16 + uVar11);
      iVar16 = iVar18 + 1;
      local_12c[iVar18] = uVar11;
      local_150 = local_150 + -1;
    }
    iVar18 = iVar16;
    uVar11 = extraout_r3 & extraout_r3 - 1;
  }
  uVar10 = uVar10 - 1 & 0x1f;
  if (uVar10 == 0) {
    iVar16 = 0x1f;
  }
  else {
    iVar16 = 0;
  }
  iVar16 = uVar10 + iVar16;
  *(char *)(iVar3 + uVar9 * 0x20) = (char)iVar16;
  uVar9 = 3;
  *(char *)(iVar2 + iVar16) = (char)uVar8;
  iVar3 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  *(int *)(iVar14 + iVar16 * 4) = iVar3;
  for (iVar3 = 0; uVar21 = CONCAT44(iVar14,uVar9), iVar18 != iVar3; iVar3 = iVar3 + 1) {
    uVar8 = local_12c[iVar3];
    if (uVar8 < uVar6) {
      iVar14 = iVar5 + uVar8;
      if (*(int *)(iVar5 + uVar8) == *param_2) {
        uVar21 = FUN_01b9b970(param_2 + 1,iVar14 + 4,param_3,iVar5 + uVar6,iVar4 + uVar6);
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),(int)uVar21 + 4);
        goto LAB_01baafe8;
      }
    }
    else {
      iVar14 = iVar4 + uVar8;
      if (*(int *)(iVar14 + (uVar9 - 3)) == *(int *)((int)param_2 + (uVar9 - 3))) {
        uVar21 = FUN_01b9b884(param_2,iVar14,param_3);
LAB_01baafe8:
        iVar14 = (int)((ulonglong)uVar21 >> 0x20);
        uVar10 = (uint)uVar21;
        if (uVar9 < uVar10) {
          *param_4 = (uVar7 + 3) - uVar8;
          if (param_3 == (int)param_2 + uVar10) break;
          uVar9 = uVar10;
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

