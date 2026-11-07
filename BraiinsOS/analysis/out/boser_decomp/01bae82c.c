// FUN_01bae82c @ 01bae82c size=1300 calls_out=3 calls_in=3
// strings: 

void FUN_01bae82c(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_r3;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int local_144;
  uint local_140;
  uint local_12c [64];
  uint local_2c;
  
  iVar14 = *(int *)(param_1 + 0x24);
  iVar12 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = (int)param_2 - iVar4;
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar5 - uVar6) {
    local_140 = uVar5 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_140 = uVar6;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_140 = uVar6;
  }
  uVar6 = *(uint *)(param_1 + 0xc4);
  if (3 < uVar6) {
    uVar6 = 4;
  }
  local_144 = 1 << (uVar6 & 0xff);
  uVar6 = *(uint *)(param_1 + 0x50);
  uVar7 = 0x18 - iVar14;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar8 = *(uint *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    iVar15 = iVar9;
    iVar17 = iVar12;
    if (0x180 < uVar5 - uVar8) {
      iVar14 = uVar8 - 1;
      if (uVar8 < 0xffffffa0) {
        iVar15 = 0x61;
      }
      else {
        iVar15 = 1;
      }
      for (; uVar8 != iVar15 + iVar14; uVar8 = uVar8 + 1) {
        uVar13 = (*(int *)(iVar4 + uVar8 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar7 & 0xff);
        uVar10 = uVar13 >> 8;
        HintPreloadData(iVar12 + uVar10 * 0x40);
        HintPreloadData(iVar9 + uVar10 * 0x10);
        uVar16 = *(uint *)(iVar1 + (uVar8 & 7) * 4);
        *(uint *)(iVar1 + (uVar8 & 7) * 4) = uVar13;
        uVar10 = uVar16 >> 8;
        uVar13 = *(byte *)(iVar9 + uVar10 * 0x10) - 1 & 0xf;
        if (uVar13 == 0) {
          iVar17 = 0xf;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar13 + iVar17;
        *(char *)(iVar9 + uVar10 * 0x10) = (char)iVar17;
        *(char *)(iVar9 + uVar10 * 0x10 + iVar17) = (char)uVar16;
        *(uint *)(iVar12 + (iVar17 + uVar10 * 0x10) * 4) = uVar8;
      }
      uVar8 = uVar5 - 0x20;
      iVar14 = *(int *)(param_1 + 0x24);
      iVar17 = *(int *)(param_1 + 0x5c);
      uVar10 = 0;
      if (iVar4 + uVar8 <= (int)param_2 + 1U) {
        uVar10 = (((int)param_2 + 1U) - (iVar4 + uVar8)) + 1;
      }
      iVar15 = *(int *)(param_1 + 0x28);
      if (uVar10 < 9) {
        uVar10 = uVar8 + uVar10;
      }
      else {
        uVar10 = uVar5 - 0x18;
      }
      for (uVar13 = uVar8; uVar13 < uVar10; uVar13 = uVar13 + 1) {
        uVar2 = (*(int *)(iVar4 + uVar13) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar14 & 0xff);
        uVar16 = uVar2 >> 8;
        HintPreloadData(iVar17 + uVar16 * 0x40);
        HintPreloadData(iVar15 + uVar16 * 0x10);
        *(uint *)(param_1 + (uVar13 & 7) * 4 + 0x2c) = uVar2;
      }
    }
    iVar11 = *(int *)(param_1 + 4);
    for (; uVar8 < uVar5; uVar8 = uVar8 + 1) {
      uVar13 = (*(int *)(iVar11 + uVar8 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar14 & 0xff);
      uVar10 = uVar13 >> 8;
      HintPreloadData(iVar17 + uVar10 * 0x40);
      HintPreloadData(iVar15 + uVar10 * 0x10);
      uVar16 = *(uint *)(iVar1 + (uVar8 & 7) * 4);
      *(uint *)(iVar1 + (uVar8 & 7) * 4) = uVar13;
      uVar10 = uVar16 >> 8;
      uVar13 = *(byte *)(iVar15 + uVar10 * 0x10) - 1 & 0xf;
      if (uVar13 == 0) {
        iVar3 = 0xf;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = uVar13 + iVar3;
      *(char *)(iVar15 + uVar10 * 0x10) = (char)iVar3;
      *(char *)(iVar15 + uVar10 * 0x10 + iVar3) = (char)uVar16;
      *(uint *)(iVar17 + (iVar3 + uVar10 * 0x10) * 4) = uVar8;
    }
    *(uint *)(param_1 + 0x1c) = uVar5;
    uVar7 = (param_2[2] * -0x61c8864f ^ uVar6) >> (uVar7 & 0xff);
    uVar6 = uVar7 >> 8;
    HintPreloadData(iVar12 + uVar6 * 0x40);
    HintPreloadData(iVar9 + uVar6 * 0x10);
    uVar6 = *(uint *)(iVar1 + (uVar5 & 7) * 4);
    *(uint *)(iVar1 + (uVar5 & 7) * 4) = uVar7;
  }
  else {
    uVar6 = (*param_2 * -0x61c8864f ^ uVar6) >> (uVar7 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar5;
  }
  uVar7 = uVar6 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar6;
  iVar12 = iVar12 + uVar7 * 0x40;
  uVar13 = (uint)*(byte *)(iVar9 + uVar7 * 0x10);
  iVar15 = iVar9 + uVar7 * 0x10;
  uVar10 = uVar13 & 0xf;
  uVar8 = 0;
  iVar14 = 0xc;
  do {
    bVar18 = iVar14 != 0;
    uVar16 = *(uint *)(iVar15 + iVar14) ^ (uVar6 & 0xff) * 0x1010101;
    uVar8 = (((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
            uVar8 << 4;
    iVar14 = iVar14 + -4;
  } while (bVar18);
  uVar16 = 0;
  uVar8 = (~uVar8 << (-uVar10 & 0xf) | (~uVar8 & 0xffff) >> uVar10) & 0xffff;
  iVar14 = 0;
  while (uVar2 = uVar8 | uVar16, local_144 != 0 && uVar2 != 0) {
    iVar17 = FUN_01b9b85c(uVar8,uVar16);
    uVar8 = uVar10 + iVar17 & 0xf;
    iVar17 = iVar14;
    if (uVar8 != 0) {
      uVar2 = *(uint *)(iVar12 + uVar8 * 4);
      if (uVar2 < local_140) break;
      HintPreloadData(iVar4 + uVar2);
      iVar17 = iVar14 + 1;
      local_12c[iVar14] = uVar2;
      local_144 = local_144 + -1;
    }
    uVar16 = extraout_r2 & extraout_r2 - (extraout_r3 == 0);
    iVar14 = iVar17;
    uVar8 = extraout_r3 & extraout_r3 - 1;
  }
  uVar8 = uVar13 - 1 & 0xf;
  if (uVar8 == 0) {
    iVar17 = 0xf;
  }
  else {
    iVar17 = 0;
  }
  iVar17 = uVar8 + iVar17;
  *(char *)(iVar9 + uVar7 * 0x10) = (char)iVar17;
  uVar7 = 3;
  *(char *)(iVar15 + iVar17) = (char)uVar6;
  iVar9 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar9 + 1;
  *(int *)(iVar12 + iVar17 * 4) = iVar9;
  for (iVar12 = 0; uVar19 = CONCAT44(uVar2,uVar7), iVar14 != iVar12; iVar12 = iVar12 + 1) {
    uVar6 = local_12c[iVar12];
    uVar2 = iVar4 + uVar6;
    if (*(int *)(uVar2 + (uVar7 - 3)) == *(int *)((int)param_2 + (uVar7 - 3))) {
      uVar19 = FUN_01b9b884(param_2,uVar2,param_3);
      uVar2 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar8 = (uint)uVar19;
      if (uVar7 < uVar8) {
        *param_4 = (uVar5 + 3) - uVar6;
        if (param_3 == (int)param_2 + uVar8) break;
        uVar7 = uVar8;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

