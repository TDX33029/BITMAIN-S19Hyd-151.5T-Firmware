// FUN_01ba25b4 @ 01ba25b4 size=1976 calls_out=4 calls_in=3
// strings: 

uint FUN_01ba25b4(int param_1,uint *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar7;
  uint *puVar6;
  int iVar8;
  uint extraout_r2;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint extraout_r3;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  bool bVar28;
  undefined8 uVar29;
  int local_150;
  uint local_14c;
  int local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar25 = *(int *)(param_1 + 0x24);
  iVar24 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar9 = *(int *)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0xc);
  uVar12 = (int)param_2 - iVar10;
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar12 - uVar13) {
    local_14c = uVar12 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_14c = uVar13;
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar13;
  }
  uVar14 = *(uint *)(param_1 + 0xc4);
  uVar13 = uVar14;
  if (3 < uVar14) {
    uVar13 = 4;
  }
  uVar15 = uVar14;
  if (4 < uVar14) {
    uVar15 = uVar14 - 4;
  }
  local_150 = 1 << (uVar13 & 0xff);
  piVar4 = *(int **)(param_1 + 0xb4);
  if (uVar14 < 5) {
    iVar16 = 0;
  }
  else {
    iVar16 = 1 << (uVar15 & 0xff);
  }
  uVar13 = *param_2 * -0x61c8864f >> (0x22U - piVar4[0x30] & 0xff);
  HintPreloadData(piVar4[0x17] + uVar13 * 0x10);
  uVar14 = 0x18 - iVar25;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar15 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    if (uVar12 - uVar15 < 0x181) {
      iVar26 = iVar24;
      iVar17 = iVar9;
    }
    else {
      iVar25 = uVar15 - 1;
      if (uVar15 < 0xffffffa0) {
        iVar26 = 0x61;
      }
      else {
        iVar26 = 1;
      }
      for (; uVar15 != iVar26 + iVar25; uVar15 = uVar15 + 1) {
        uVar21 = (*(int *)(iVar10 + uVar15 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar14 & 0xff);
        uVar18 = uVar21 >> 8;
        HintPreloadData(iVar9 + uVar18 * 0x40);
        HintPreloadData(iVar24 + uVar18 * 0x10);
        uVar27 = *(uint *)(iVar2 + (uVar15 & 7) * 4);
        *(uint *)(iVar2 + (uVar15 & 7) * 4) = uVar21;
        uVar18 = uVar27 >> 8;
        uVar21 = *(byte *)(iVar24 + uVar18 * 0x10) - 1 & 0xf;
        if (uVar21 == 0) {
          iVar17 = 0xf;
        }
        else {
          iVar17 = 0;
        }
        iVar17 = uVar21 + iVar17;
        *(char *)(iVar24 + uVar18 * 0x10) = (char)iVar17;
        *(char *)(iVar24 + uVar18 * 0x10 + iVar17) = (char)uVar27;
        *(uint *)(iVar9 + (iVar17 + uVar18 * 0x10) * 4) = uVar15;
      }
      uVar15 = uVar12 - 0x20;
      iVar25 = *(int *)(param_1 + 0x24);
      iVar17 = *(int *)(param_1 + 0x5c);
      uVar18 = 0;
      if (iVar10 + uVar15 <= (int)param_2 + 1U) {
        uVar18 = (((int)param_2 + 1U) - (iVar10 + uVar15)) + 1;
      }
      iVar26 = *(int *)(param_1 + 0x28);
      if (uVar18 < 9) {
        uVar18 = uVar15 + uVar18;
      }
      else {
        uVar18 = uVar12 - 0x18;
      }
      for (uVar21 = uVar15; uVar21 < uVar18; uVar21 = uVar21 + 1) {
        uVar1 = (*(int *)(iVar10 + uVar21) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar25 & 0xff);
        uVar27 = uVar1 >> 8;
        HintPreloadData(iVar17 + uVar27 * 0x40);
        HintPreloadData(iVar26 + uVar27 * 0x10);
        *(uint *)(param_1 + (uVar21 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar20 = *(int *)(param_1 + 4);
    for (; uVar15 < uVar12; uVar15 = uVar15 + 1) {
      uVar21 = (*(int *)(iVar20 + uVar15 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar25 & 0xff);
      uVar18 = uVar21 >> 8;
      HintPreloadData(iVar17 + uVar18 * 0x40);
      HintPreloadData(iVar26 + uVar18 * 0x10);
      uVar27 = *(uint *)(iVar2 + (uVar15 & 7) * 4);
      *(uint *)(iVar2 + (uVar15 & 7) * 4) = uVar21;
      uVar18 = uVar27 >> 8;
      uVar21 = *(byte *)(iVar26 + uVar18 * 0x10) - 1 & 0xf;
      if (uVar21 == 0) {
        iVar8 = 0xf;
      }
      else {
        iVar8 = 0;
      }
      iVar8 = uVar21 + iVar8;
      *(char *)(iVar26 + uVar18 * 0x10) = (char)iVar8;
      *(char *)(iVar26 + uVar18 * 0x10 + iVar8) = (char)uVar27;
      *(uint *)(iVar17 + (iVar8 + uVar18 * 0x10) * 4) = uVar15;
    }
    *(uint *)(param_1 + 0x1c) = uVar12;
    uVar14 = (param_2[2] * -0x61c8864f ^ uVar3) >> (uVar14 & 0xff);
    uVar3 = uVar14 >> 8;
    HintPreloadData(iVar9 + uVar3 * 0x40);
    HintPreloadData(iVar24 + uVar3 * 0x10);
    uVar3 = *(uint *)(iVar2 + (uVar12 & 7) * 4);
    *(uint *)(iVar2 + (uVar12 & 7) * 4) = uVar14;
  }
  else {
    uVar3 = (*param_2 * -0x61c8864f ^ uVar3) >> (uVar14 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar12;
  }
  uVar14 = uVar3 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar3;
  uVar18 = (uint)*(byte *)(iVar24 + uVar14 * 0x10);
  iVar2 = iVar24 + uVar14 * 0x10;
  iVar9 = iVar9 + uVar14 * 0x40;
  uVar21 = uVar18 & 0xf;
  uVar15 = 0;
  iVar25 = 0xc;
  do {
    bVar28 = iVar25 != 0;
    uVar27 = *(uint *)(iVar2 + iVar25) ^ (uVar3 & 0xff) * 0x1010101;
    uVar15 = (((uVar27 | 0x80808080) + 0xfefefeff | uVar27) & 0x80808080) * 0x204081 >> 0x1c |
             uVar15 << 4;
    iVar25 = iVar25 + -4;
  } while (bVar28);
  uVar27 = 0;
  local_148 = 0;
  uVar15 = (~uVar15 << (-uVar21 & 0xf) | (~uVar15 & 0xffff) >> uVar21) & 0xffff;
  while (local_150 != 0 && (uVar15 != 0 || uVar27 != 0)) {
    iVar25 = FUN_01b9b85c(uVar15,uVar27);
    uVar15 = uVar21 + iVar25 & 0xf;
    if (uVar15 != 0) {
      uVar15 = *(uint *)(iVar9 + uVar15 * 4);
      if (uVar15 < local_14c) break;
      HintPreloadData(iVar10 + uVar15);
      local_12c[local_148] = uVar15;
      local_150 = local_150 + -1;
      local_148 = local_148 + 1;
    }
    uVar27 = extraout_r2 & extraout_r2 - (extraout_r3 == 0);
    uVar15 = extraout_r3 & extraout_r3 - 1;
  }
  uVar15 = uVar18 - 1 & 0xf;
  if (uVar15 == 0) {
    iVar25 = 0xf;
  }
  else {
    iVar25 = 0;
  }
  iVar25 = uVar15 + iVar25;
  *(char *)(iVar24 + uVar14 * 0x10) = (char)iVar25;
  *(char *)(iVar2 + iVar25) = (char)uVar3;
  uVar3 = 3;
  iVar24 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar24 + 1;
  *(int *)(iVar9 + iVar25 * 4) = iVar24;
  for (iVar9 = 0; local_148 != iVar9; iVar9 = iVar9 + 1) {
    uVar14 = local_12c[iVar9];
    iVar24 = iVar10 + uVar14;
    if ((*(int *)(iVar24 + (uVar3 - 3)) == *(int *)((int)param_2 + (uVar3 - 3))) &&
       (uVar15 = FUN_01b9b884(param_2,iVar24,param_3), uVar3 < uVar15)) {
      *param_4 = (uVar12 + 3) - uVar14;
      if (param_3 == (int *)((int)param_2 + uVar15)) goto LAB_01ba28ec;
      uVar3 = uVar15;
    }
  }
  uVar15 = uVar3;
LAB_01ba28ec:
  uVar14 = local_150 + iVar16;
  iVar9 = *piVar4;
  iVar24 = piVar4[1];
  piVar5 = (int *)(iVar9 - iVar24);
  uVar3 = uVar14;
  if (2 < uVar14) {
    uVar3 = 3;
  }
  iVar25 = piVar4[0x17];
  puVar22 = (uint *)(iVar25 + uVar13 * 0x10);
  puVar6 = puVar22;
  do {
    puVar7 = puVar6 + 1;
    uVar18 = *puVar6;
    HintPreloadData(iVar24 + uVar18);
    puVar6 = puVar7;
  } while ((uint *)(iVar25 + 0xc + uVar13 * 0x10) != puVar7);
  uVar21 = 0;
  iVar2 = uVar13 * 4 + 0x40000003;
  iVar16 = piVar4[0x19];
  HintPreloadData(iVar16 + (*(uint *)(iVar25 + iVar2 * 4) >> 8) * 4);
  piVar4 = piVar5;
  for (; uVar3 != uVar21; uVar21 = uVar21 + 1) {
    uVar13 = *puVar22;
    if (uVar13 == 0) goto LAB_01ba2a18;
    uVar18 = *(uint *)(iVar24 + uVar13);
    piVar4 = (int *)(iVar24 + uVar13);
    if (uVar18 == *param_2) {
      uVar29 = FUN_01b9b970(param_2 + 1,(int *)(iVar24 + uVar13) + 1,param_3,iVar9,iVar10 + iVar11);
      uVar18 = (int)uVar29 + 4;
      piVar4 = (int *)((ulonglong)uVar29 >> 0x20);
      if ((uVar15 < uVar18) &&
         (*param_4 = (int)piVar5 + (((3 - iVar11) + uVar12) - uVar13), piVar4 = param_3,
         uVar15 = uVar18, param_3 == (int *)((int)param_2 + uVar18))) goto LAB_01ba2a18;
    }
    puVar22 = puVar22 + 1;
  }
  uVar18 = *(uint *)(iVar25 + iVar2 * 4);
  uVar13 = uVar18 >> 8;
  piVar19 = (int *)(iVar16 + uVar13 * 4);
  uVar18 = uVar18 & 0xff;
  uVar21 = uVar18;
  if (uVar14 - uVar3 < uVar18) {
    uVar21 = uVar14 - uVar3;
  }
  piVar4 = (int *)(iVar16 + (uVar13 + uVar21) * 4);
  piVar23 = piVar19;
  while (piVar4 != piVar23) {
    HintPreloadData(iVar24 + *piVar23);
    piVar23 = piVar23 + 1;
  }
  for (; piVar23 != piVar19; piVar19 = piVar19 + 1) {
    iVar25 = *piVar19;
    uVar18 = *(uint *)(iVar24 + iVar25);
    piVar4 = (int *)(iVar24 + iVar25);
    if (uVar18 == *param_2) {
      uVar29 = FUN_01b9b970(param_2 + 1,(int *)(iVar24 + iVar25) + 1,param_3,iVar9,iVar10 + iVar11);
      uVar18 = (uint)uVar29;
      uVar13 = uVar18 + 4;
      piVar4 = (int *)((ulonglong)uVar29 >> 0x20);
      if (uVar15 < uVar13) {
        *param_4 = (int)piVar5 + (((3 - iVar11) + uVar12) - iVar25);
        piVar4 = param_3;
        uVar15 = uVar13;
        if (param_3 == (int *)((int)param_2 + uVar13)) goto LAB_01ba2a18;
      }
    }
  }
LAB_01ba2a18:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar18,piVar4,local_2c ^ DAT_01d53560,0);
  }
  return uVar15;
}

