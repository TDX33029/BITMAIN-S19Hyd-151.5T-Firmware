// FUN_01ba1de4 @ 01ba1de4 size=1976 calls_out=4 calls_in=3
// strings: 

uint FUN_01ba1de4(int param_1,uint *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar9;
  uint *puVar8;
  uint extraout_r2;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint extraout_r3;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  int local_150;
  uint local_14c;
  uint local_12c [64];
  uint local_2c;
  
  iVar18 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x5c);
  local_2c = DAT_01d53560;
  iVar10 = *(int *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 4);
  iVar12 = *(int *)(param_1 + 0xc);
  uVar13 = (int)param_2 - iVar11;
  uVar14 = *(uint *)(param_1 + 0x10);
  if ((uint)(1 << (*(uint *)(param_1 + 0xb8) & 0xff)) < uVar13 - uVar14) {
    local_14c = uVar13 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  else {
    local_14c = uVar14;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_14c = uVar14;
  }
  uVar15 = *(uint *)(param_1 + 0xc4);
  uVar5 = *(uint *)(param_1 + 0x50);
  uVar14 = uVar15;
  if (4 < uVar15) {
    uVar14 = 5;
  }
  uVar16 = uVar15;
  if (5 < uVar15) {
    uVar16 = uVar15 - 5;
  }
  if (uVar15 < 6) {
    uVar16 = 0;
  }
  local_150 = 1 << (uVar14 & 0xff);
  piVar6 = *(int **)(param_1 + 0xb4);
  if (5 < uVar15) {
    uVar16 = 1 << (uVar16 & 0xff);
  }
  uVar14 = *param_2 * -0x61c8864f >> (0x22U - piVar6[0x30] & 0xff);
  HintPreloadData(piVar6[0x17] + uVar14 * 0x10);
  uVar15 = 0x18 - iVar18;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar17 = *(uint *)(param_1 + 0x1c);
    iVar2 = param_1 + 0x2c;
    if (uVar13 - uVar17 < 0x181) {
      iVar26 = iVar3;
      iVar27 = iVar10;
    }
    else {
      iVar18 = uVar17 - 1;
      if (uVar17 < 0xffffffa0) {
        iVar26 = 0x61;
      }
      else {
        iVar26 = 1;
      }
      for (; uVar17 != iVar26 + iVar18; uVar17 = uVar17 + 1) {
        uVar22 = (*(int *)(iVar11 + uVar17 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                 (uVar15 & 0xff);
        uVar19 = uVar22 >> 8;
        HintPreloadData(iVar3 + uVar19 * 0x80);
        HintPreloadData(iVar3 + uVar19 * 0x80 + 0x40);
        HintPreloadData(iVar10 + uVar19 * 0x20);
        uVar28 = *(uint *)(iVar2 + (uVar17 & 7) * 4);
        *(uint *)(iVar2 + (uVar17 & 7) * 4) = uVar22;
        uVar19 = uVar28 >> 8;
        uVar22 = *(byte *)(iVar10 + uVar19 * 0x20) - 1 & 0x1f;
        if (uVar22 == 0) {
          iVar27 = 0x1f;
        }
        else {
          iVar27 = 0;
        }
        iVar27 = uVar22 + iVar27;
        *(char *)(iVar10 + uVar19 * 0x20) = (char)iVar27;
        *(char *)(iVar10 + uVar19 * 0x20 + iVar27) = (char)uVar28;
        *(uint *)(iVar3 + (iVar27 + uVar19 * 0x20) * 4) = uVar17;
      }
      uVar17 = uVar13 - 0x20;
      iVar18 = *(int *)(param_1 + 0x24);
      iVar26 = *(int *)(param_1 + 0x5c);
      uVar19 = 0;
      if (iVar11 + uVar17 <= (int)param_2 + 1U) {
        uVar19 = (((int)param_2 + 1U) - (iVar11 + uVar17)) + 1;
      }
      iVar27 = *(int *)(param_1 + 0x28);
      if (uVar19 < 9) {
        uVar19 = uVar17 + uVar19;
      }
      else {
        uVar19 = uVar13 - 0x18;
      }
      for (uVar22 = uVar17; uVar22 < uVar19; uVar22 = uVar22 + 1) {
        uVar1 = (*(int *)(iVar11 + uVar22) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
                (0x18U - iVar18 & 0xff);
        uVar28 = uVar1 >> 8;
        HintPreloadData(iVar26 + uVar28 * 0x80);
        HintPreloadData(iVar27 + uVar28 * 0x20);
        HintPreloadData(iVar26 + uVar28 * 0x80 + 0x40);
        *(uint *)(param_1 + (uVar22 & 7) * 4 + 0x2c) = uVar1;
      }
    }
    iVar21 = *(int *)(param_1 + 4);
    for (; uVar17 < uVar13; uVar17 = uVar17 + 1) {
      uVar22 = (*(int *)(iVar21 + uVar17 + 8) * -0x61c8864f ^ *(uint *)(param_1 + 0x50)) >>
               (0x18U - iVar18 & 0xff);
      uVar19 = uVar22 >> 8;
      HintPreloadData(iVar26 + uVar19 * 0x80);
      HintPreloadData(iVar27 + uVar19 * 0x20);
      HintPreloadData(iVar26 + uVar19 * 0x80 + 0x40);
      uVar28 = *(uint *)(iVar2 + (uVar17 & 7) * 4);
      *(uint *)(iVar2 + (uVar17 & 7) * 4) = uVar22;
      uVar19 = uVar28 >> 8;
      uVar22 = *(byte *)(iVar27 + uVar19 * 0x20) - 1 & 0x1f;
      if (uVar22 == 0) {
        iVar25 = 0x1f;
      }
      else {
        iVar25 = 0;
      }
      iVar25 = uVar22 + iVar25;
      *(char *)(iVar27 + uVar19 * 0x20) = (char)iVar25;
      *(char *)(iVar27 + uVar19 * 0x20 + iVar25) = (char)uVar28;
      *(uint *)(iVar26 + (iVar25 + uVar19 * 0x20) * 4) = uVar17;
    }
    *(uint *)(param_1 + 0x1c) = uVar13;
    uVar15 = (param_2[2] * -0x61c8864f ^ uVar5) >> (uVar15 & 0xff);
    uVar5 = uVar15 >> 8;
    HintPreloadData(iVar3 + uVar5 * 0x80);
    HintPreloadData(iVar3 + uVar5 * 0x80 + 0x40);
    HintPreloadData(iVar10 + uVar5 * 0x20);
    uVar5 = *(uint *)(iVar2 + (uVar13 & 7) * 4);
    *(uint *)(iVar2 + (uVar13 & 7) * 4) = uVar15;
  }
  else {
    uVar5 = (*param_2 * -0x61c8864f ^ uVar5) >> (uVar15 & 0xff);
    *(uint *)(param_1 + 0x1c) = uVar13;
  }
  uVar15 = uVar5 >> 8;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar5;
  iVar3 = iVar3 + uVar15 * 0x80;
  uVar17 = 0;
  uVar19 = (uint)*(byte *)(iVar10 + uVar15 * 0x20);
  iVar2 = iVar10 + uVar15 * 0x20;
  uVar22 = uVar19 & 0x1f;
  iVar18 = 0x1c;
  do {
    bVar29 = iVar18 != 0;
    uVar28 = *(uint *)(iVar2 + iVar18) ^ (uVar5 & 0xff) * 0x1010101;
    uVar17 = (((uVar28 | 0x80808080) + 0xfefefeff | uVar28) & 0x80808080) * 0x204081 >> 0x1c |
             uVar17 << 4;
    iVar18 = iVar18 + -4;
  } while (bVar29);
  uVar17 = ~uVar17 >> uVar22 | ~uVar17 << 0x20 - uVar22;
  iVar18 = 0;
  while (uVar4 = (undefined1)uVar5, local_150 != 0 && uVar17 != 0) {
    iVar26 = FUN_01b9b85c(uVar17,0);
    uVar4 = (undefined1)extraout_r2;
    uVar5 = uVar22 + iVar26 & 0x1f;
    iVar26 = iVar18;
    if (uVar5 != 0) {
      uVar5 = *(uint *)(iVar3 + uVar5 * 4);
      if (uVar5 < local_14c) break;
      HintPreloadData(iVar11 + uVar5);
      iVar26 = iVar18 + 1;
      local_12c[iVar18] = uVar5;
      local_150 = local_150 + -1;
    }
    uVar5 = extraout_r2;
    iVar18 = iVar26;
    uVar17 = extraout_r3 & extraout_r3 - 1;
  }
  uVar5 = uVar19 - 1 & 0x1f;
  if (uVar5 == 0) {
    iVar26 = 0x1f;
  }
  else {
    iVar26 = 0;
  }
  iVar26 = uVar5 + iVar26;
  *(char *)(iVar10 + uVar15 * 0x20) = (char)iVar26;
  *(undefined1 *)(iVar2 + iVar26) = uVar4;
  iVar10 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar10 + 1;
  *(int *)(iVar3 + iVar26 * 4) = iVar10;
  uVar5 = 3;
  for (iVar3 = 0; iVar18 != iVar3; iVar3 = iVar3 + 1) {
    uVar15 = local_12c[iVar3];
    iVar10 = iVar11 + uVar15;
    if ((*(int *)(iVar10 + (uVar5 - 3)) == *(int *)((int)param_2 + (uVar5 - 3))) &&
       (uVar17 = FUN_01b9b884(param_2,iVar10,param_3), uVar5 < uVar17)) {
      *param_4 = (uVar13 + 3) - uVar15;
      if (param_3 == (int *)((int)param_2 + uVar17)) goto LAB_01ba210c;
      uVar5 = uVar17;
    }
  }
  uVar17 = uVar5;
LAB_01ba210c:
  uVar16 = local_150 + uVar16;
  iVar3 = *piVar6;
  iVar10 = piVar6[1];
  piVar7 = (int *)(iVar3 - iVar10);
  uVar5 = uVar16;
  if (2 < uVar16) {
    uVar5 = 3;
  }
  iVar18 = piVar6[0x17];
  puVar23 = (uint *)(iVar18 + uVar14 * 0x10);
  puVar8 = puVar23;
  do {
    puVar9 = puVar8 + 1;
    uVar15 = *puVar8;
    HintPreloadData(iVar10 + uVar15);
    puVar8 = puVar9;
  } while ((uint *)(iVar18 + 0xc + uVar14 * 0x10) != puVar9);
  uVar19 = 0;
  iVar26 = uVar14 * 4 + 0x40000003;
  iVar2 = piVar6[0x19];
  HintPreloadData(iVar2 + (*(uint *)(iVar18 + iVar26 * 4) >> 8) * 4);
  piVar6 = piVar7;
  for (; uVar5 != uVar19; uVar19 = uVar19 + 1) {
    uVar14 = *puVar23;
    if (uVar14 == 0) goto LAB_01ba2238;
    uVar15 = *(uint *)(iVar10 + uVar14);
    piVar6 = (int *)(iVar10 + uVar14);
    if (uVar15 == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,(int *)(iVar10 + uVar14) + 1,param_3,iVar3,iVar11 + iVar12);
      uVar15 = (int)uVar30 + 4;
      piVar6 = (int *)((ulonglong)uVar30 >> 0x20);
      if ((uVar17 < uVar15) &&
         (*param_4 = (int)piVar7 + (((3 - iVar12) + uVar13) - uVar14), piVar6 = param_3,
         uVar17 = uVar15, param_3 == (int *)((int)param_2 + uVar15))) goto LAB_01ba2238;
    }
    puVar23 = puVar23 + 1;
  }
  uVar15 = *(uint *)(iVar18 + iVar26 * 4);
  uVar14 = uVar15 >> 8;
  piVar20 = (int *)(iVar2 + uVar14 * 4);
  uVar15 = uVar15 & 0xff;
  uVar19 = uVar15;
  if (uVar16 - uVar5 < uVar15) {
    uVar19 = uVar16 - uVar5;
  }
  piVar6 = (int *)(iVar2 + (uVar14 + uVar19) * 4);
  piVar24 = piVar20;
  while (piVar6 != piVar24) {
    HintPreloadData(iVar10 + *piVar24);
    piVar24 = piVar24 + 1;
  }
  for (; piVar24 != piVar20; piVar20 = piVar20 + 1) {
    iVar18 = *piVar20;
    uVar15 = *(uint *)(iVar10 + iVar18);
    piVar6 = (int *)(iVar10 + iVar18);
    if (uVar15 == *param_2) {
      uVar30 = FUN_01b9b970(param_2 + 1,(int *)(iVar10 + iVar18) + 1,param_3,iVar3,iVar11 + iVar12);
      uVar15 = (uint)uVar30;
      uVar14 = uVar15 + 4;
      piVar6 = (int *)((ulonglong)uVar30 >> 0x20);
      if (uVar17 < uVar14) {
        *param_4 = (int)piVar7 + (((3 - iVar12) + uVar13) - iVar18);
        piVar6 = param_3;
        uVar17 = uVar14;
        if (param_3 == (int *)((int)param_2 + uVar14)) goto LAB_01ba2238;
      }
    }
  }
LAB_01ba2238:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar15,piVar6,local_2c ^ DAT_01d53560,0);
  }
  return uVar17;
}

