// FUN_01bae2fc @ 01bae2fc size=1304 calls_out=3 calls_in=3
// strings: 

void FUN_01bae2fc(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint extraout_r2;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r3;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  int local_144;
  uint local_140;
  uint local_12c [64];
  uint local_2c;
  
  iVar10 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x5c);
  local_2c = DAT_01d53560;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 4);
  uVar15 = (int)param_2 - iVar6;
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar15 - uVar7) {
    local_140 = uVar15 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_140 = uVar7;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_140 = uVar7;
  }
  uVar7 = *(uint *)(param_1 + 0xc4);
  if (4 < uVar7) {
    uVar7 = 5;
  }
  local_144 = 1 << (uVar7 & 0xff);
  uVar7 = *(uint *)(param_1 + 0x50);
  uVar8 = 0x18 - iVar10;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar9 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    if (uVar15 - uVar9 < 0x181) {
      iVar16 = iVar3;
      iVar17 = iVar5;
    }
    else {
      iVar10 = uVar9 - 1;
      if (uVar9 < 0xffffffa0) {
        iVar16 = 0x61;
      }
      else {
        iVar16 = 1;
      }
      for (; uVar9 != iVar16 + iVar10; uVar9 = uVar9 + 1) {
        uVar13 = (*(int *)(iVar6 + uVar9 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar8 & 0xff);
        uVar11 = uVar13 >> 8;
        HintPreloadData(iVar3 + uVar11 * 0x80);
        HintPreloadData(iVar3 + uVar11 * 0x80 + 0x40);
        HintPreloadData(iVar5 + uVar11 * 0x20);
        uVar18 = *(uint *)(iVar2 + (uVar9 & 7) * 4);
        *(uint *)(iVar2 + (uVar9 & 7) * 4) = uVar13;
        uVar11 = uVar18 >> 8;
        uVar13 = *(byte *)(iVar5 + uVar11 * 0x20) - 1 & 0x1f;
        if (uVar13 == 0) {
          iVar17 = 0x1f;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar13 + iVar17;
        *(char *)(iVar5 + uVar11 * 0x20) = (char)iVar17;
        *(char *)(iVar5 + uVar11 * 0x20 + iVar17) = (char)uVar18;
        *(uint *)(iVar3 + (iVar17 + uVar11 * 0x20) * 4) = uVar9;
      }
      uVar9 = uVar15 - 0x20;
      iVar10 = *(int *)(param_1 + 0x24);
      iVar16 = *(int *)(param_1 + 0x5c);
      uVar11 = 0;
      if (iVar6 + uVar9 <= (int)param_2 + 1U) {
        uVar11 = (((int)param_2 + 1U) - (iVar6 + uVar9)) + 1;
      }
      iVar17 = *(int *)(param_1 + 0x28);
      if (uVar11 < 9) {
        uVar11 = uVar9 + uVar11;
      }
      else {
        uVar11 = uVar15 - 0x18;
      }
      for (uVar13 = uVar9; uVar13 < uVar11; uVar13 = uVar13 + 1) {
        uVar1 = (*(int *)(iVar6 + uVar13) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar10 & 0xff);
        uVar18 = uVar1 >> 8;
        HintPreloadData(iVar16 + uVar18 * 0x80);
        HintPreloadData(iVar17 + uVar18 * 0x20);
        HintPreloadData(iVar16 + uVar18 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar13 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar12 = *(int *)(param_1 + 4);
    for (; uVar9 < uVar15; uVar9 = uVar9 + 1) {
      uVar13 = (*(int *)(iVar12 + uVar9 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar10 & 0xff);
      uVar11 = uVar13 >> 8;
      HintPreloadData(iVar16 + uVar11 * 0x80);
      HintPreloadData(iVar17 + uVar11 * 0x20);
      HintPreloadData(iVar16 + uVar11 * 0x80 + 0x40);
      uVar18 = *(uint *)(iVar2 + (uVar9 & 7) * 4);
      *(uint *)(iVar2 + (uVar9 & 7) * 4) = uVar13;
      uVar11 = uVar18 >> 8;
      uVar13 = *(byte *)(iVar17 + uVar11 * 0x20) - 1 & 0x1f;
      if (uVar13 == 0) {
        iVar14 = 0x1f;
      }
      else {
        iVar14 = 0;
      }
      iVar14 = uVar13 + iVar14;
      *(char *)(iVar17 + uVar11 * 0x20) = (char)iVar14;
      *(char *)(iVar17 + uVar11 * 0x20 + iVar14) = (char)uVar18;
      *(uint *)(iVar16 + (iVar14 + uVar11 * 0x20) * 4) = uVar9;
    }
    *(uint *)(param_1 + 0x1c) = uVar15;
    uVar8 = (param_2[2] * -0x61c8864f ^ uVar7) >> (uVar8 & 0xff);
    uVar7 = uVar8 >> 8;
    HintPreloadData(iVar3 + uVar7 * 0x80);
    HintPreloadData(iVar3 + uVar7 * 0x80 + 0x40);
    HintPreloadData(iVar5 + uVar7 * 0x20);
    uVar7 = *(uint *)(iVar2 + (uVar15 & 7) * 4);
    *(uint *)(iVar2 + (uVar15 & 7) * 4) = uVar8;
  }
  else {
    iVar10 = *param_2;
    *(uint *)(param_1 + 0x1c) = uVar15;
    uVar7 = (iVar10 * -0x61c8864f ^ uVar7) >> (uVar8 & 0xff);
  }
  uVar8 = uVar7 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar7;
  iVar3 = iVar3 + uVar8 * 0x80;
  uVar9 = 0;
  iVar2 = iVar5 + uVar8 * 0x20;
  uVar13 = (uint)*(byte *)(iVar5 + uVar8 * 0x20);
  uVar11 = uVar13 & 0x1f;
  iVar10 = 0x1c;
  do {
    bVar19 = iVar10 != 0;
    uVar18 = *(uint *)(iVar2 + iVar10) ^ (uVar7 & 0xff) * 0x1010101;
    uVar9 = (((uVar18 | 0x80808080) + 0xfefefeff | uVar18) & 0x80808080) * 0x204081 >> 0x1c |
            uVar9 << 4;
    iVar10 = iVar10 + -4;
  } while (bVar19);
  uVar9 = ~uVar9 >> uVar11 | ~uVar9 << 0x20 - uVar11;
  iVar10 = 0;
  while (uVar4 = (undefined1)uVar7, local_144 != 0 && uVar9 != 0) {
    iVar16 = FUN_01b9b85c(uVar9,0);
    uVar4 = (undefined1)extraout_r2;
    uVar7 = uVar11 + iVar16 & 0x1f;
    iVar16 = iVar10;
    if (uVar7 != 0) {
      uVar9 = *(uint *)(iVar3 + uVar7 * 4);
      if (uVar9 < local_140) break;
      HintPreloadData(iVar6 + uVar9);
      iVar16 = iVar10 + 1;
      local_12c[iVar10] = uVar9;
      local_144 = local_144 + -1;
    }
    uVar7 = extraout_r2;
    iVar10 = iVar16;
    uVar9 = extraout_r3 & extraout_r3 - 1;
  }
  iVar16 = 0;
  uVar7 = uVar13 - 1 & 0x1f;
  if (uVar7 == 0) {
    iVar17 = 0x1f;
  }
  else {
    iVar17 = 0;
  }
  iVar17 = uVar7 + iVar17;
  *(char *)(iVar5 + uVar8 * 0x20) = (char)iVar17;
  uVar7 = 3;
  *(undefined1 *)(iVar2 + iVar17) = uVar4;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar5 + 1;
  *(int *)(iVar3 + iVar17 * 4) = iVar5;
  for (; uVar20 = CONCAT44(uVar9,uVar7), iVar10 != iVar16; iVar16 = iVar16 + 1) {
    uVar8 = local_12c[iVar16];
    uVar9 = iVar6 + uVar8;
    if (*(int *)(uVar9 + (uVar7 - 3)) == *(int *)((int)param_2 + (uVar7 - 3))) {
      uVar20 = FUN_01b9b884(param_2,uVar9,param_3);
      uVar9 = (uint)((ulonglong)uVar20 >> 0x20);
      uVar11 = (uint)uVar20;
      if (uVar7 < uVar11) {
        *param_4 = (uVar15 + 3) - uVar8;
        if (param_3 == (int)param_2 + uVar11) break;
        uVar7 = uVar11;
      }
    }
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

