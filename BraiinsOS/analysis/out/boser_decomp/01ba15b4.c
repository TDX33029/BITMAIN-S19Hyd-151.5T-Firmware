// FUN_01ba15b4 @ 01ba15b4 size=2072 calls_out=4 calls_in=3
// strings: 

uint FUN_01ba15b4(int param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar7;
  uint *puVar6;
  uint extraout_r2;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint extraout_r3;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined8 uVar31;
  int local_14c;
  uint local_148;
  uint local_12c [64];
  uint local_2c;
  
  iVar29 = *(int *)(param_1 + 0x24);
  iVar25 = *(int *)(param_1 + 0x5c);
  iVar17 = *(int *)(param_1 + 0x28);
  local_2c = DAT_01d53560;
  iVar8 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 0xc);
  uVar10 = (int)param_2 - iVar8;
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar10 - uVar11) {
    local_148 = uVar10 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_148 = uVar11;
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) != 0) {
    local_148 = uVar11;
  }
  uVar12 = *(uint *)(param_1 + 0xc4);
  uVar11 = uVar12;
  if (5 < uVar12) {
    uVar11 = 6;
  }
  uVar13 = uVar12;
  if (6 < uVar12) {
    uVar13 = uVar12 - 6;
  }
  local_14c = 1 << (uVar11 & 0xff);
  piVar4 = *(int **)(param_1 + 0xb4);
  if (uVar12 < 7) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1 << (uVar13 & 0xff);
  }
  uVar11 = *param_2 * -0x61c8864f >> (0x22U - piVar4[0x30] & 0xff);
  HintPreloadData(piVar4[0x17] + uVar11 * 0x10);
  uVar12 = 0x18 - iVar29;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar13 = *(uint *)(param_1 + 0x1c);
    iVar1 = param_1 + 0x2c;
    iVar26 = iVar17;
    iVar27 = iVar25;
    if (0x180 < uVar10 - uVar13) {
      iVar29 = uVar13 - 1;
      if (uVar13 < 0xffffffa0) {
        iVar26 = 0x61;
      }
      else {
        iVar26 = 1;
      }
      for (; uVar13 != iVar26 + iVar29; uVar13 = uVar13 + 1) {
        uVar15 = (*(int *)(iVar8 + uVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar12 & 0xff);
        uVar18 = uVar15 >> 8;
        HintPreloadData(iVar25 + uVar18 * 0x100);
        HintPreloadData(iVar17 + uVar18 * 0x40);
        HintPreloadData(iVar25 + uVar18 * 0x100 + 0x40);
        HintPreloadData(iVar17 + uVar18 * 0x40 + 0x20);
        uVar20 = *(uint *)(iVar1 + (uVar13 & 7) * 4);
        *(uint *)(iVar1 + (uVar13 & 7) * 4) = uVar15;
        uVar18 = uVar20 >> 8;
        uVar15 = *(byte *)(iVar17 + uVar18 * 0x40) - 1 & 0x3f;
        if (uVar15 == 0) {
          iVar27 = 0x3f;
        }
        else {
          iVar27 = 0;
        }
        iVar27 = uVar15 + iVar27;
        *(char *)(iVar17 + uVar18 * 0x40) = (char)iVar27;
        *(char *)(iVar17 + uVar18 * 0x40 + iVar27) = (char)uVar20;
        *(uint *)(iVar25 + (iVar27 + uVar18 * 0x40) * 4) = uVar13;
      }
      uVar13 = uVar10 - 0x20;
      iVar29 = *(int *)(param_1 + 0x24);
      iVar27 = *(int *)(param_1 + 0x5c);
      uVar18 = 0;
      if (iVar8 + uVar13 <= (int)param_2 + 1U) {
        uVar18 = (((int)param_2 + 1U) - (iVar8 + uVar13)) + 1;
      }
      iVar26 = *(int *)(param_1 + 0x28);
      if (uVar18 < 9) {
        uVar18 = uVar13 + uVar18;
      }
      else {
        uVar18 = uVar10 - 0x18;
      }
      for (uVar15 = uVar13; uVar15 < uVar18; uVar15 = uVar15 + 1) {
        uVar16 = (*(int *)(iVar8 + uVar15) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (0x18U - iVar29 & 0xff);
        uVar20 = uVar16 >> 8;
        HintPreloadData(iVar27 + uVar20 * 0x100);
        HintPreloadData(iVar26 + uVar20 * 0x40);
        HintPreloadData(iVar27 + uVar20 * 0x100 + 0x40);
        HintPreloadData(iVar26 + uVar20 * 0x40 + 0x20);
        *(uint *)(param_1 + (uVar15 & 7) * 4 + 0x2c) = uVar16;
      }
    }
    iVar21 = *(int *)(param_1 + 4);
    for (; uVar13 < uVar10; uVar13 = uVar13 + 1) {
      uVar15 = (*(int *)(iVar21 + uVar13 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar29 & 0xff);
      uVar18 = uVar15 >> 8;
      HintPreloadData(iVar27 + uVar18 * 0x100);
      HintPreloadData(iVar26 + uVar18 * 0x40);
      HintPreloadData(iVar27 + uVar18 * 0x100 + 0x40);
      HintPreloadData(iVar26 + uVar18 * 0x40 + 0x20);
      uVar20 = *(uint *)(iVar1 + (uVar13 & 7) * 4);
      *(uint *)(iVar1 + (uVar13 & 7) * 4) = uVar15;
      uVar18 = uVar20 >> 8;
      uVar15 = *(byte *)(iVar26 + uVar18 * 0x40) - 1 & 0x3f;
      if (uVar15 == 0) {
        iVar24 = 0x3f;
      }
      else {
        iVar24 = 0;
      }
      iVar24 = uVar15 + iVar24;
      *(char *)(iVar26 + uVar18 * 0x40) = (char)iVar24;
      *(char *)(iVar26 + uVar18 * 0x40 + iVar24) = (char)uVar20;
      *(uint *)(iVar27 + (iVar24 + uVar18 * 0x40) * 4) = uVar13;
    }
    *(uint *)(param_1 + 0x1c) = uVar10;
    uVar12 = (param_2[2] * -0x61c8864f ^ uVar3) >> (uVar12 & 0xff);
    uVar3 = uVar12 >> 8;
    HintPreloadData(iVar25 + uVar3 * 0x100);
    HintPreloadData(iVar17 + uVar3 * 0x40);
    HintPreloadData(iVar25 + uVar3 * 0x100 + 0x40);
    HintPreloadData(iVar17 + uVar3 * 0x40 + 0x20);
    uVar3 = *(uint *)(iVar1 + (uVar10 & 7) * 4);
    *(uint *)(iVar1 + (uVar10 & 7) * 4) = uVar12;
  }
  else {
    uVar3 = (*param_2 * -0x61c8864f ^ uVar3) >> (uVar12 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar10;
  }
  uVar12 = uVar3 >> 8;
  uVar13 = 0;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar3;
  iVar26 = iVar17 + uVar12 * 0x40;
  iVar25 = iVar25 + uVar12 * 0x100;
  uVar15 = (uint)*(byte *)(iVar17 + uVar12 * 0x40);
  uVar18 = 0;
  uVar20 = uVar15 & 0x3f;
  iVar29 = 0x3c;
  do {
    uVar18 = uVar18 << 4 | uVar13 >> 0x1c;
    bVar30 = iVar29 != 0;
    uVar16 = *(uint *)(iVar26 + iVar29) ^ (uVar3 & 0xff) * 0x1010101;
    uVar13 = (((uVar16 | 0x80808080) + 0xfefefeff | uVar16) & 0x80808080) * 0x204081 >> 0x1c |
             uVar13 << 4;
    iVar29 = iVar29 + -4;
  } while (bVar30);
  uVar13 = ~uVar13;
  uVar18 = ~uVar18;
  uVar28 = -uVar20 & 0x3f;
  uVar16 = uVar18 << uVar28 | uVar13 << (uVar28 - 0x20 & 0xff) | uVar13 >> (0x20 - uVar28 & 0xff) |
           uVar18 >> uVar20;
  uVar13 = uVar13 >> uVar20 | uVar18 << (0x20 - uVar20 & 0xff) | uVar18 >> (uVar20 - 0x20 & 0xff) |
           uVar13 << uVar28;
  iVar29 = 0;
  while (uVar2 = (undefined1)uVar3, local_14c != 0 && (uVar13 != 0 || uVar16 != 0)) {
    iVar27 = FUN_01b9b85c(uVar13,uVar16);
    uVar2 = (undefined1)extraout_r2;
    uVar3 = uVar20 + iVar27 & 0x3f;
    iVar27 = iVar29;
    if (uVar3 != 0) {
      uVar3 = *(uint *)(iVar25 + uVar3 * 4);
      if (uVar3 < local_148) break;
      HintPreloadData(iVar8 + uVar3);
      iVar27 = iVar29 + 1;
      local_12c[iVar29] = uVar3;
      local_14c = local_14c + -1;
    }
    uVar16 = uVar16 & uVar16 - (extraout_r3 == 0);
    uVar3 = extraout_r2;
    iVar29 = iVar27;
    uVar13 = extraout_r3 & extraout_r3 - 1;
  }
  uVar3 = uVar15 - 1 & 0x3f;
  if (uVar3 == 0) {
    iVar27 = 0x3f;
  }
  else {
    iVar27 = 0;
  }
  iVar27 = uVar3 + iVar27;
  *(char *)(iVar17 + uVar12 * 0x40) = (char)iVar27;
  uVar3 = 3;
  *(undefined1 *)(iVar26 + iVar27) = uVar2;
  iVar17 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar17 + 1;
  *(int *)(iVar25 + iVar27 * 4) = iVar17;
  for (iVar17 = 0; iVar29 != iVar17; iVar17 = iVar17 + 1) {
    uVar12 = local_12c[iVar17];
    iVar25 = iVar8 + uVar12;
    if ((*(int *)(iVar25 + (uVar3 - 3)) == *(int *)((int)param_2 + (uVar3 - 3))) &&
       (uVar13 = FUN_01b9b884(param_2,iVar25,param_3), uVar3 < uVar13)) {
      *param_4 = (uVar10 + 3) - uVar12;
      if (param_3 == (int *)((int)param_2 + uVar13)) goto LAB_01ba1928;
      uVar3 = uVar13;
    }
  }
  uVar13 = uVar3;
LAB_01ba1928:
  uVar12 = local_14c + iVar14;
  iVar17 = *piVar4;
  iVar25 = piVar4[1];
  piVar5 = (int *)(iVar17 - iVar25);
  uVar3 = uVar12;
  if (2 < uVar12) {
    uVar3 = 3;
  }
  iVar29 = piVar4[0x17];
  puVar22 = (uint *)(iVar29 + uVar11 * 0x10);
  puVar6 = puVar22;
  do {
    puVar7 = puVar6 + 1;
    uVar18 = *puVar6;
    HintPreloadData(iVar25 + uVar18);
    puVar6 = puVar7;
  } while ((uint *)(iVar29 + 0xc + uVar11 * 0x10) != puVar7);
  uVar15 = 0;
  iVar26 = uVar11 * 4 + 0x40000003;
  iVar14 = piVar4[0x19];
  HintPreloadData(iVar14 + (*(uint *)(iVar29 + iVar26 * 4) >> 8) * 4);
  piVar4 = piVar5;
  for (; uVar3 != uVar15; uVar15 = uVar15 + 1) {
    uVar11 = *puVar22;
    if (uVar11 == 0) goto LAB_01ba1a54;
    uVar18 = *(uint *)(iVar25 + uVar11);
    piVar4 = (int *)(iVar25 + uVar11);
    if (uVar18 == *param_2) {
      uVar31 = FUN_01b9b970(param_2 + 1,(int *)(iVar25 + uVar11) + 1,param_3,iVar17,iVar8 + iVar9);
      uVar18 = (int)uVar31 + 4;
      piVar4 = (int *)((ulonglong)uVar31 >> 0x20);
      if ((uVar13 < uVar18) &&
         (*param_4 = (int)piVar5 + (((3 - iVar9) + uVar10) - uVar11), piVar4 = param_3,
         uVar13 = uVar18, param_3 == (int *)((int)param_2 + uVar18))) goto LAB_01ba1a54;
    }
    puVar22 = puVar22 + 1;
  }
  uVar18 = *(uint *)(iVar29 + iVar26 * 4);
  uVar11 = uVar18 >> 8;
  piVar19 = (int *)(iVar14 + uVar11 * 4);
  uVar18 = uVar18 & 0xff;
  uVar15 = uVar18;
  if (uVar12 - uVar3 < uVar18) {
    uVar15 = uVar12 - uVar3;
  }
  piVar4 = (int *)(iVar14 + (uVar11 + uVar15) * 4);
  piVar23 = piVar19;
  while (piVar4 != piVar23) {
    HintPreloadData(iVar25 + *piVar23);
    piVar23 = piVar23 + 1;
  }
  for (; piVar23 != piVar19; piVar19 = piVar19 + 1) {
    iVar29 = *piVar19;
    uVar18 = *(uint *)(iVar25 + iVar29);
    piVar4 = (int *)(iVar25 + iVar29);
    if (uVar18 == *param_2) {
      uVar31 = FUN_01b9b970(param_2 + 1,(int *)(iVar25 + iVar29) + 1,param_3,iVar17,iVar8 + iVar9);
      uVar18 = (uint)uVar31;
      uVar11 = uVar18 + 4;
      piVar4 = (int *)((ulonglong)uVar31 >> 0x20);
      if (uVar13 < uVar11) {
        *param_4 = (int)piVar5 + (((3 - iVar9) + uVar10) - iVar29);
        piVar4 = param_3;
        uVar13 = uVar11;
        if (param_3 == (int *)((int)param_2 + uVar11)) goto LAB_01ba1a54;
      }
    }
  }
LAB_01ba1a54:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar18,piVar4,local_2c ^ DAT_01d53560,0);
  }
  return uVar13;
}

