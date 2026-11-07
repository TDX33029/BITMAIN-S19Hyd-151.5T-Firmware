// FUN_01badd60 @ 01badd60 size=1412 calls_out=3 calls_in=3
// strings: 

void FUN_01badd60(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r3;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  int local_144;
  uint local_140;
  uint local_12c [64];
  uint local_2c;
  
  iVar18 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = (int)param_2 - iVar2;
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar5 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar3 - uVar4 <= uVar5) {
    local_140 = uVar4;
  }
  if (uVar5 < uVar3 - uVar4) {
    local_140 = uVar3 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_140 = uVar4;
  }
  uVar5 = *(uint *)(param_1 + 0xc4);
  if (5 < uVar5) {
    uVar5 = 6;
  }
  local_144 = 1 << (uVar5 & 0xff);
  uVar5 = *(uint *)(param_1 + 0x50);
  uVar4 = 0x18 - iVar18;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar6 = *(uint *)(param_1 + 0x1c);
    iVar14 = param_1 + 0x2c;
    iVar16 = iVar9;
    iVar17 = iVar1;
    if (0x180 < uVar3 - uVar6) {
      iVar18 = uVar6 - 1;
      if (uVar6 < 0xffffffa0) {
        iVar16 = 0x61;
      }
      else {
        iVar16 = 1;
      }
      for (; uVar6 != iVar16 + iVar18; uVar6 = uVar6 + 1) {
        uVar7 = (*(int *)(iVar2 + uVar6 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (uVar4 & 0xff);
        uVar10 = uVar7 >> 8;
        HintPreloadData(iVar1 + uVar10 * 0x100);
        HintPreloadData(iVar9 + uVar10 * 0x40);
        HintPreloadData(iVar1 + uVar10 * 0x100 + 0x40);
        HintPreloadData(iVar9 + uVar10 * 0x40 + 0x20);
        uVar12 = *(uint *)(iVar14 + (uVar6 & 7) * 4);
        *(uint *)(iVar14 + (uVar6 & 7) * 4) = uVar7;
        uVar10 = uVar12 >> 8;
        uVar7 = *(byte *)(iVar9 + uVar10 * 0x40) - 1 & 0x3f;
        if (uVar7 == 0) {
          iVar17 = 0x3f;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar7 + iVar17;
        *(char *)(iVar9 + uVar10 * 0x40) = (char)iVar17;
        *(char *)(iVar9 + uVar10 * 0x40 + iVar17) = (char)uVar12;
        *(uint *)(iVar1 + (iVar17 + uVar10 * 0x40) * 4) = uVar6;
      }
      uVar6 = uVar3 - 0x20;
      iVar18 = *(int *)(param_1 + 0x24);
      iVar17 = *(int *)(param_1 + 0x5c);
      uVar10 = 0;
      if (iVar2 + uVar6 <= (int)param_2 + 1U) {
        uVar10 = (((int)param_2 + 1U) - (iVar2 + uVar6)) + 1;
      }
      iVar16 = *(int *)(param_1 + 0x28);
      if (uVar10 < 9) {
        uVar10 = uVar6 + uVar10;
      }
      else {
        uVar10 = uVar3 - 0x18;
      }
      for (uVar7 = uVar6; uVar7 < uVar10; uVar7 = uVar7 + 1) {
        uVar8 = (*(int *)(iVar2 + uVar7) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar18 & 0xff);
        uVar12 = uVar8 >> 8;
        HintPreloadData(iVar17 + uVar12 * 0x100);
        HintPreloadData(iVar16 + uVar12 * 0x40);
        HintPreloadData(iVar17 + uVar12 * 0x100 + 0x40);
        HintPreloadData(iVar16 + uVar12 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar7 & 7) * 4 + 0x2c) = uVar8;
      }
    }
    iVar11 = *(int *)(param_1 + 4);
    for (; uVar6 < uVar3; uVar6 = uVar6 + 1) {
      uVar7 = (*(int *)(iVar11 + uVar6 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
              (0x18U - iVar18 & 0xff);
      uVar10 = uVar7 >> 8;
      HintPreloadData(iVar17 + uVar10 * 0x100);
      HintPreloadData(iVar16 + uVar10 * 0x40);
      HintPreloadData(iVar17 + uVar10 * 0x100 + 0x40);
      HintPreloadData(iVar16 + uVar10 * 0x40 + 0x20);
      uVar12 = *(uint *)(iVar14 + (uVar6 & 7) * 4);
      *(uint *)(iVar14 + (uVar6 & 7) * 4) = uVar7;
      uVar10 = uVar12 >> 8;
      uVar7 = *(byte *)(iVar16 + uVar10 * 0x40) - 1 & 0x3f;
      if (uVar7 == 0) {
        iVar13 = 0x3f;
      }
      else {
        iVar13 = 0;
      }
      iVar13 = uVar7 + iVar13;
      *(char *)(iVar16 + uVar10 * 0x40) = (char)iVar13;
      *(char *)(iVar16 + uVar10 * 0x40 + iVar13) = (char)uVar12;
      *(uint *)(iVar17 + (iVar13 + uVar10 * 0x40) * 4) = uVar6;
    }
    *(uint *)(param_1 + 0x1c) = uVar3;
    uVar4 = (param_2[2] * -0x61c8864f ^ uVar5) >> (uVar4 & 0xff);
    uVar5 = uVar4 >> 8;
    HintPreloadData(iVar1 + uVar5 * 0x100);
    HintPreloadData(iVar9 + uVar5 * 0x40);
    HintPreloadData(iVar1 + uVar5 * 0x100 + 0x40);
    HintPreloadData(iVar9 + uVar5 * 0x40 + 0x20);
    uVar5 = *(uint *)(iVar14 + (uVar3 & 7) * 4);
    *(uint *)(iVar14 + (uVar3 & 7) * 4) = uVar4;
  }
  else {
    uVar5 = (*param_2 * -0x61c8864f ^ uVar5) >> (uVar4 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar3;
  }
  uVar4 = uVar5 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar5;
  iVar1 = iVar1 + uVar4 * 0x100;
  iVar16 = iVar9 + uVar4 * 0x40;
  uVar6 = 0;
  uVar7 = (uint)*(byte *)(iVar9 + uVar4 * 0x40);
  uVar10 = 0;
  uVar12 = uVar7 & 0x3f;
  iVar18 = 0x3c;
  do {
    uVar10 = uVar10 << 4 | uVar6 >> 0x1c;
    bVar19 = iVar18 != 0;
    uVar8 = *(uint *)(iVar16 + iVar18) ^ (uVar5 & 0xff) * 0x1010101;
    uVar6 = (((uVar8 | 0x80808080) + 0xfefefeff | uVar8) & 0x80808080) * 0x204081 >> 0x1c |
            uVar6 << 4;
    iVar18 = iVar18 + -4;
  } while (bVar19);
  uVar6 = ~uVar6;
  uVar10 = ~uVar10;
  uVar8 = -uVar12 & 0x3f;
  uVar15 = uVar10 << uVar8 | uVar6 << (uVar8 - 0x20 & 0xff) | uVar6 >> (0x20 - uVar8 & 0xff) |
           uVar10 >> uVar12;
  uVar6 = uVar6 >> uVar12 | uVar10 << (0x20 - uVar12 & 0xff) | uVar10 >> (uVar12 - 0x20 & 0xff) |
          uVar6 << uVar8;
  iVar18 = 0;
  while (local_144 != 0 && (uVar6 != 0 || uVar15 != 0)) {
    iVar17 = FUN_01b9b85c(uVar6,uVar15);
    uVar6 = uVar12 + iVar17 & 0x3f;
    iVar17 = iVar18;
    if (uVar6 != 0) {
      uVar6 = *(uint *)(iVar1 + uVar6 * 4);
      if (uVar6 < local_140) break;
      HintPreloadData(iVar2 + uVar6);
      iVar17 = iVar18 + 1;
      local_12c[iVar18] = uVar6;
      local_144 = local_144 + -1;
    }
    uVar15 = uVar15 & uVar15 - (extraout_r3 == 0);
    iVar18 = iVar17;
    uVar6 = extraout_r3 & extraout_r3 - 1;
  }
  uVar6 = uVar7 - 1 & 0x3f;
  if (uVar6 == 0) {
    iVar17 = 0x3f;
  }
  else {
    iVar17 = 0;
  }
  iVar17 = uVar6 + iVar17;
  *(char *)(iVar9 + uVar4 * 0x40) = (char)iVar17;
  uVar4 = 3;
  *(char *)(iVar16 + iVar17) = (char)uVar5;
  iVar9 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar9 + 1;
  *(int *)(iVar1 + iVar17 * 4) = iVar9;
  for (iVar9 = 0; uVar20 = CONCAT44(iVar1,uVar4), iVar18 != iVar9; iVar9 = iVar9 + 1) {
    uVar5 = local_12c[iVar9];
    iVar1 = iVar2 + uVar5;
    if (*(int *)(iVar1 + (uVar4 - 3)) == *(int *)((int)param_2 + (uVar4 - 3))) {
      uVar20 = FUN_01b9b884(param_2,iVar1,param_3);
      iVar1 = (int)((ulonglong)uVar20 >> 0x20);
      uVar6 = (uint)uVar20;
      if (uVar4 < uVar6) {
        *param_4 = (uVar3 + 3) - uVar5;
        if (param_3 == (int)param_2 + uVar6) break;
        uVar4 = uVar6;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

