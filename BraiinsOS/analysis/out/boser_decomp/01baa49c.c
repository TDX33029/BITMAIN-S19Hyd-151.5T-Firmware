// FUN_01baa49c @ 01baa49c size=1560 calls_out=4 calls_in=3
// strings: 

void FUN_01baa49c(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r3;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar19 = *(int *)(param_1 + 0x24);
  iVar13 = *(int *)(param_1 + 0x5c);
  iVar11 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  uVar5 = (int)param_2 - iVar2;
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar5 - uVar6) {
    local_148 = uVar5 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar6;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar6) {
    uVar6 = 6;
  }
  local_14c = 1 << (uVar6 & 0xff);
  uVar6 = *(uint *)(param_1 + 0x50);
  uVar7 = 0x18 - iVar19;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar8 = *(uint *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    iVar17 = iVar11;
    iVar18 = iVar13;
    if (0x180 < uVar5 - uVar8) {
      iVar19 = uVar8 - 1;
      if (uVar8 < 0xffffffa0) {
        iVar17 = 0x61;
      }
      else {
        iVar17 = 1;
      }
      for (; uVar8 != iVar17 + iVar19; uVar8 = uVar8 + 1) {
        uVar15 = (*(int *)(iVar2 + uVar8 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar7 & 0xff);
        uVar10 = uVar15 >> 8;
        HintPreloadData(iVar13 + uVar10 * 0x100);
        HintPreloadData(iVar11 + uVar10 * 0x40);
        HintPreloadData(iVar13 + uVar10 * 0x100 + 0x40);
        HintPreloadData(iVar11 + uVar10 * 0x40 + 0x20);
        uVar9 = *(uint *)(iVar1 + (uVar8 & 7) * 4);
        *(uint *)(iVar1 + (uVar8 & 7) * 4) = uVar15;
        uVar10 = uVar9 >> 8;
        uVar15 = *(byte *)(iVar11 + uVar10 * 0x40) - 1 & 0x3f;
        if (uVar15 == 0) {
          iVar18 = 0x3f;
        }
        else {
          iVar18 = 0;
        }
        iVar18 = uVar15 + iVar18;
        *(char *)(iVar11 + uVar10 * 0x40) = (char)iVar18;
        *(char *)(iVar11 + uVar10 * 0x40 + iVar18) = (char)uVar9;
        *(uint *)(iVar13 + (iVar18 + uVar10 * 0x40) * 4) = uVar8;
      }
      uVar8 = uVar5 - 0x20;
      iVar19 = *(int *)(param_1 + 0x24);
      iVar18 = *(int *)(param_1 + 0x5c);
      uVar10 = 0;
      if (iVar2 + uVar8 <= (int)param_2 + 1U) {
        uVar10 = (((int)param_2 + 1U) - (iVar2 + uVar8)) + 1;
      }
      iVar17 = *(int *)(param_1 + 0x28);
      if (uVar10 < 9) {
        uVar10 = uVar8 + uVar10;
      }
      else {
        uVar10 = uVar5 - 0x18;
      }
      for (uVar15 = uVar8; uVar15 < uVar10; uVar15 = uVar15 + 1) {
        uVar14 = (*(int *)(iVar2 + uVar15) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar19 & 0xff);
        uVar9 = uVar14 >> 8;
        HintPreloadData(iVar18 + uVar9 * 0x100);
        HintPreloadData(iVar17 + uVar9 * 0x40);
        HintPreloadData(iVar18 + uVar9 * 0x100 + 0x40);
        HintPreloadData(iVar17 + uVar9 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar15 & 7) * 4 + 0x2c) = uVar14;
      }
    }
    iVar12 = *(int *)(param_1 + 4);
    for (; uVar8 < uVar5; uVar8 = uVar8 + 1) {
      uVar15 = (*(int *)(iVar12 + uVar8 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar19 & 0xff);
      uVar10 = uVar15 >> 8;
      HintPreloadData(iVar18 + uVar10 * 0x100);
      HintPreloadData(iVar17 + uVar10 * 0x40);
      HintPreloadData(iVar18 + uVar10 * 0x100 + 0x40);
      HintPreloadData(iVar17 + uVar10 * 0x40 + 0x20);
      uVar9 = *(uint *)(iVar1 + (uVar8 & 7) * 4);
      *(uint *)(iVar1 + (uVar8 & 7) * 4) = uVar15;
      uVar10 = uVar9 >> 8;
      uVar15 = *(byte *)(iVar17 + uVar10 * 0x40) - 1 & 0x3f;
      if (uVar15 == 0) {
        iVar16 = 0x3f;
      }
      else {
        iVar16 = 0;
      }
      iVar16 = uVar15 + iVar16;
      *(char *)(iVar17 + uVar10 * 0x40) = (char)iVar16;
      *(char *)(iVar17 + uVar10 * 0x40 + iVar16) = (char)uVar9;
      *(uint *)(iVar18 + (iVar16 + uVar10 * 0x40) * 4) = uVar8;
    }
    *(uint *)(param_1 + 0x1c) = uVar5;
    uVar7 = (param_2[2] * -0x61c8864f ^ uVar6) >> (uVar7 & 0xff);
    uVar6 = uVar7 >> 8;
    HintPreloadData(iVar13 + uVar6 * 0x100);
    HintPreloadData(iVar11 + uVar6 * 0x40);
    HintPreloadData(iVar13 + uVar6 * 0x100 + 0x40);
    HintPreloadData(iVar11 + uVar6 * 0x40 + 0x20);
    uVar6 = *(uint *)(iVar1 + (uVar5 & 7) * 4);
    *(uint *)(iVar1 + (uVar5 & 7) * 4) = uVar7;
  }
  else {
    uVar6 = (*param_2 * -0x61c8864f ^ uVar6) >> (uVar7 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar5;
  }
  uVar7 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar6;
  iVar13 = iVar13 + (uVar6 >> 8) * 0x100;
  uVar8 = 0;
  iVar17 = iVar11 + (uVar6 >> 8) * 0x40;
  uVar15 = (uint)*(byte *)(iVar11 + (uVar6 >> 8) * 0x40);
  uVar10 = uVar15 & 0x3f;
  iVar19 = 0x3c;
  do {
    uVar8 = uVar8 << 4 | uVar7 >> 0x1c;
    bVar20 = iVar19 != 0;
    uVar9 = *(uint *)(iVar17 + iVar19) ^ (uVar6 & 0xff) * 0x1010101;
    uVar7 = (((uVar9 | 0x80808080) + 0xfefefeff | uVar9) & 0x80808080) * 0x204081 >> 0x1c |
            uVar7 << 4;
    iVar19 = iVar19 + -4;
  } while (bVar20);
  uVar7 = ~uVar7;
  uVar8 = ~uVar8;
  uVar9 = -uVar10 & 0x3f;
  uVar14 = uVar8 << uVar9 | uVar7 << (uVar9 - 0x20 & 0xff) | uVar7 >> (0x20 - uVar9 & 0xff) |
           uVar8 >> uVar10;
  uVar7 = uVar7 >> uVar10 | uVar8 << (0x20 - uVar10 & 0xff) | uVar8 >> (uVar10 - 0x20 & 0xff) |
          uVar7 << uVar9;
  iVar19 = 0;
  while (uVar8 = local_14c, local_14c != 0 && (uVar7 != 0 || uVar14 != 0)) {
    iVar18 = FUN_01b9b85c(uVar7,uVar14);
    uVar7 = uVar10 + iVar18 & 0x3f;
    iVar18 = iVar19;
    if (uVar7 != 0) {
      uVar7 = *(uint *)(iVar13 + uVar7 * 4);
      uVar8 = local_148;
      if (uVar7 < local_148) break;
      if (uVar7 < uVar4) {
        iVar18 = iVar3;
      }
      else {
        iVar18 = iVar2;
      }
      HintPreloadData(iVar18 + uVar7);
      iVar18 = iVar19 + 1;
      local_12c[iVar19] = uVar7;
      local_14c = local_14c - 1;
    }
    uVar14 = uVar14 & uVar14 - (extraout_r3 == 0);
    iVar19 = iVar18;
    uVar7 = extraout_r3 & extraout_r3 - 1;
  }
  iVar18 = 0;
  uVar7 = uVar15 - 1 & 0x3f;
  if (uVar7 == 0) {
    iVar1 = 0x3f;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = uVar7 + iVar1;
  *(char *)(iVar11 + (uVar6 >> 8) * 0x40) = (char)iVar1;
  uVar7 = 3;
  *(char *)(iVar17 + iVar1) = (char)uVar6;
  iVar11 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar11 + 1;
  *(int *)(iVar13 + iVar1 * 4) = iVar11;
  for (; uVar21 = CONCAT44(uVar8,uVar7), iVar19 != iVar18; iVar18 = iVar18 + 1) {
    uVar6 = local_12c[iVar18];
    if (uVar6 < uVar4) {
      uVar8 = iVar3 + uVar6;
      if (*(int *)(iVar3 + uVar6) == *param_2) {
        uVar21 = FUN_01b9b970(param_2 + 1,uVar8 + 4,param_3,iVar3 + uVar4,iVar2 + uVar4);
        uVar21 = CONCAT44((int)((ulonglong)uVar21 >> 0x20),(int)uVar21 + 4);
        goto LAB_01baaa28;
      }
    }
    else {
      uVar8 = iVar2 + uVar6;
      if (*(int *)(uVar8 + (uVar7 - 3)) == *(int *)((int)param_2 + (uVar7 - 3))) {
        uVar21 = FUN_01b9b884(param_2,uVar8,param_3);
LAB_01baaa28:
        uVar8 = (uint)((ulonglong)uVar21 >> 0x20);
        uVar10 = (uint)uVar21;
        if (uVar7 < uVar10) {
          *param_4 = (uVar5 + 3) - uVar6;
          if (param_3 == (int)param_2 + uVar10) break;
          uVar7 = uVar10;
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

