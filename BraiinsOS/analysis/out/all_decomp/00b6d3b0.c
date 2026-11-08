// FUN_00b6d3b0 @ 00b6d3b0 size=2540 calls_out=2 calls_in=1
// strings: BUG: impossible

void FUN_00b6d3b0(double *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  double *pdVar2;
  undefined4 *puVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 *puVar7;
  char cVar8;
  double *pdVar9;
  undefined4 uVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar19 = *param_1;
  dVar20 = param_1[1];
  if (NAN(dVar20)) {
    uVar4 = (uint)!NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    uVar4 = 0xff;
  }
  else if (dVar20 <= dVar19) {
    uVar4 = 0;
    if (dVar20 < dVar19) {
      uVar4 = 0xffffffff;
    }
  }
  else {
    uVar4 = 1;
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  pdVar6 = param_1 + 2;
  dVar19 = *pdVar6;
  dVar20 = param_1[3];
  if (NAN(dVar20)) {
LAB_00b6d440:
    iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
    iVar13 = 3;
    pdVar12 = param_1 + -iVar11;
    pdVar2 = param_1 + (-iVar11 ^ 1);
  }
  else if (NAN(dVar19)) {
    iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
    pdVar12 = param_1 + -iVar11;
    pdVar2 = param_1 + (-iVar11 ^ 1);
LAB_00b6d478:
    iVar13 = 2;
    pdVar6 = param_1 + 3;
    dVar19 = dVar20;
  }
  else {
    if (dVar19 < dVar20) {
      if (dVar20 < dVar19) goto LAB_00b6db9c;
      goto LAB_00b6d440;
    }
    iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
    iVar13 = 3;
    pdVar12 = param_1 + -iVar11;
    pdVar2 = param_1 + (-iVar11 ^ 1);
    if (dVar20 < dVar19) goto LAB_00b6d478;
  }
  pdVar5 = param_1 + iVar13;
  if (NAN(dVar19)) {
    bVar18 = false;
  }
  else if (NAN(*pdVar12)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
    if (dVar19 < *pdVar12) {
      bVar18 = true;
    }
  }
  dVar19 = *pdVar5;
  pdVar9 = pdVar12;
  if (NAN(dVar19)) {
LAB_00b6d4ec:
    if (bVar18) {
      pdVar9 = pdVar6;
    }
LAB_00b6d524:
    if (bVar18) {
      pdVar6 = pdVar2;
    }
    else {
      pdVar12 = pdVar2;
    }
    dVar19 = *pdVar6;
    pdVar2 = pdVar5;
  }
  else {
    dVar20 = *pdVar2;
    if (!NAN(dVar20)) {
      if (dVar20 < dVar19) {
        if (dVar19 < dVar20) goto LAB_00b6db9c;
        goto LAB_00b6d4ec;
      }
      if (bVar18) {
        pdVar9 = pdVar6;
      }
      if (dVar19 < dVar20) goto LAB_00b6d514;
      goto LAB_00b6d524;
    }
    if (bVar18) {
      pdVar9 = pdVar6;
    }
LAB_00b6d514:
    if (!bVar18) {
      pdVar12 = pdVar6;
    }
    pdVar6 = pdVar5;
  }
  pdVar5 = pdVar12;
  if (!NAN(dVar19)) {
    dVar20 = *pdVar12;
    if (!NAN(dVar20)) {
      if (dVar20 < dVar19) {
        if (dVar19 < dVar20) goto LAB_00b6db9c;
      }
      else if (dVar19 < dVar20) goto LAB_00b6d580;
    }
    else {
LAB_00b6d580:
      pdVar5 = pdVar6;
      pdVar6 = pdVar12;
    }
  }
  uVar15 = *(undefined4 *)((int)pdVar9 + 4);
  dVar19 = *pdVar9;
  *param_3 = *(undefined4 *)pdVar9;
  param_3[2] = *(undefined4 *)pdVar5;
  param_3[4] = *(undefined4 *)pdVar6;
  uVar10 = *(undefined4 *)pdVar2;
  param_3[1] = uVar15;
  uVar15 = *(undefined4 *)((int)pdVar5 + 4);
  puVar17 = param_3 + 6;
  *puVar17 = uVar10;
  param_3[3] = uVar15;
  param_3[5] = *(undefined4 *)((int)pdVar6 + 4);
  param_3[7] = *(undefined4 *)((int)pdVar2 + 4);
  dVar21 = param_1[5];
  dVar20 = param_1[4];
  if (NAN(dVar21)) {
    uVar4 = (uint)!NAN(dVar20);
  }
  else if (NAN(dVar20)) {
    uVar4 = 0xff;
  }
  else if (dVar21 <= dVar20) {
    uVar4 = 0;
    if (dVar21 < dVar20) {
      uVar4 = 0xffffffff;
    }
  }
  else {
    uVar4 = 1;
    if (dVar21 < dVar20) goto LAB_00b6db9c;
  }
  dVar20 = param_1[7];
  dVar21 = param_1[6];
  if (NAN(dVar20)) {
LAB_00b6d660:
    iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
    pdVar6 = param_1 + (4 - iVar11);
    pdVar12 = param_1 + (-iVar11 ^ 1U) + 4;
LAB_00b6d6a0:
    iVar11 = 3;
    iVar13 = 0x30;
    dVar20 = dVar21;
  }
  else {
    if (!NAN(dVar21)) {
      if (dVar21 < dVar20) {
        if (dVar20 < dVar21) goto LAB_00b6db9c;
        goto LAB_00b6d660;
      }
      iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
      pdVar6 = param_1 + (4 - iVar11);
      pdVar12 = param_1 + (-iVar11 ^ 1U) + 4;
      if (dVar20 < dVar21) goto LAB_00b6d690;
      goto LAB_00b6d6a0;
    }
    iVar11 = (int)(uVar4 << 0x18) >> 0x1f;
    pdVar6 = param_1 + (4 - iVar11);
    pdVar12 = param_1 + (-iVar11 ^ 1U) + 4;
LAB_00b6d690:
    iVar11 = 2;
    iVar13 = 0x38;
  }
  pdVar2 = param_1 + iVar11 + 4;
  if (NAN(dVar20)) {
    bVar18 = false;
  }
  else if (NAN(*pdVar6)) {
    bVar18 = true;
  }
  else {
    bVar18 = false;
    if (dVar20 < *pdVar6) {
      bVar18 = true;
    }
  }
  dVar20 = *pdVar2;
  param_1 = (double *)((int)param_1 + iVar13);
  pdVar5 = pdVar6;
  if (NAN(dVar20)) {
LAB_00b6d714:
    if (bVar18) {
      pdVar5 = param_1;
    }
LAB_00b6d74c:
    if (bVar18) {
      param_1 = pdVar12;
    }
    else {
      pdVar6 = pdVar12;
    }
    dVar20 = *param_1;
    pdVar12 = pdVar2;
  }
  else {
    dVar21 = *pdVar12;
    if (!NAN(dVar21)) {
      if (dVar21 < dVar20) {
        if (dVar20 < dVar21) goto LAB_00b6db9c;
        goto LAB_00b6d714;
      }
      if (bVar18) {
        pdVar5 = param_1;
      }
      if (dVar20 < dVar21) goto LAB_00b6d73c;
      goto LAB_00b6d74c;
    }
    if (bVar18) {
      pdVar5 = param_1;
    }
LAB_00b6d73c:
    if (!bVar18) {
      pdVar6 = param_1;
    }
    param_1 = pdVar2;
  }
  pdVar2 = param_1;
  if (!NAN(dVar20)) {
    dVar21 = *pdVar6;
    if (!NAN(dVar21)) {
      if (dVar21 < dVar20) {
        if (dVar20 < dVar21) goto LAB_00b6db9c;
      }
      else if (dVar20 < dVar21) goto LAB_00b6d7a8;
    }
    else {
LAB_00b6d7a8:
      pdVar2 = pdVar6;
      pdVar6 = param_1;
    }
  }
  uVar10 = *(undefined4 *)((int)pdVar5 + 4);
  dVar20 = *pdVar5;
  puVar3 = param_3 + 8;
  *puVar3 = *(undefined4 *)pdVar5;
  param_3[10] = *(undefined4 *)pdVar6;
  param_3[0xc] = *(undefined4 *)pdVar2;
  uVar15 = *(undefined4 *)pdVar12;
  param_3[9] = uVar10;
  uVar10 = *(undefined4 *)((int)pdVar6 + 4);
  puVar16 = param_3 + 0xe;
  *puVar16 = uVar15;
  param_3[0xb] = uVar10;
  param_3[0xd] = *(undefined4 *)((int)pdVar2 + 4);
  param_3[0xf] = *(undefined4 *)((int)pdVar12 + 4);
  if (NAN(dVar20)) {
    bVar1 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    bVar1 = 0xff;
  }
  else if (dVar20 <= dVar19) {
    bVar1 = 0;
    if (dVar20 < dVar19) {
      bVar1 = 0xff;
    }
  }
  else {
    bVar1 = 1;
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  puVar7 = puVar3;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
    puVar7 = param_3;
  }
  uVar15 = puVar7[1];
  *param_2 = *puVar7;
  param_2[1] = uVar15;
  iVar11 = (int)((uint)bVar1 << 0x18) >> 0x1f;
  dVar20 = *(double *)(param_3 + 0xe);
  dVar19 = *(double *)(param_3 + 6);
  if (NAN(dVar20)) {
    cVar8 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    cVar8 = -1;
  }
  else if (dVar20 <= dVar19) {
    cVar8 = '\0';
    if (dVar20 < dVar19) {
      cVar8 = -1;
    }
  }
  else {
    cVar8 = '\x01';
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  pdVar6 = (double *)(puVar3 + iVar11 * -2);
  pdVar12 = (double *)(param_3 + (-iVar11 ^ 1U) * 2);
  puVar3 = puVar17;
  if ((uint)(int)cVar8 < 0x80000000) {
    puVar3 = puVar16;
  }
  uVar15 = puVar3[1];
  param_2[0xe] = *puVar3;
  param_2[0xf] = uVar15;
  dVar20 = *pdVar6;
  dVar19 = *pdVar12;
  if (NAN(dVar20)) {
    bVar1 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    bVar1 = 0xff;
  }
  else if (dVar20 <= dVar19) {
    bVar1 = 0;
    if (dVar20 < dVar19) {
      bVar1 = 0xff;
    }
  }
  else {
    bVar1 = 1;
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  uVar4 = (int)cVar8 >> 7;
  pdVar5 = (double *)(puVar16 + ~uVar4 * 2);
  pdVar2 = pdVar6;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
    pdVar2 = pdVar12;
  }
  pdVar9 = (double *)(puVar17 + uVar4 * 2);
  uVar15 = *(undefined4 *)((int)pdVar2 + 4);
  param_2[2] = *(undefined4 *)pdVar2;
  param_2[3] = uVar15;
  iVar11 = (int)((uint)bVar1 << 0x18) >> 0x1f;
  dVar20 = *pdVar5;
  dVar19 = *pdVar9;
  if (NAN(dVar20)) {
    cVar8 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    cVar8 = -1;
  }
  else if (dVar20 <= dVar19) {
    cVar8 = '\0';
    if (dVar20 < dVar19) {
      cVar8 = -1;
    }
  }
  else {
    cVar8 = '\x01';
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  pdVar6 = pdVar6 + -iVar11;
  pdVar2 = pdVar9;
  if ((uint)(int)cVar8 < 0x80000000) {
    pdVar2 = pdVar5;
  }
  pdVar12 = pdVar12 + (-iVar11 ^ 1);
  uVar15 = *(undefined4 *)((int)pdVar2 + 4);
  param_2[0xc] = *(undefined4 *)pdVar2;
  param_2[0xd] = uVar15;
  dVar20 = *pdVar6;
  dVar19 = *pdVar12;
  if (NAN(dVar20)) {
    bVar1 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    bVar1 = 0xff;
  }
  else if (dVar20 <= dVar19) {
    bVar1 = 0;
    if (dVar20 < dVar19) {
      bVar1 = 0xff;
    }
  }
  else {
    bVar1 = 1;
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  uVar4 = (int)cVar8 >> 7;
  pdVar9 = pdVar9 + uVar4;
  pdVar5 = pdVar5 + ~uVar4;
  pdVar2 = pdVar6;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
    pdVar2 = pdVar12;
  }
  uVar15 = *(undefined4 *)((int)pdVar2 + 4);
  param_2[4] = *(undefined4 *)pdVar2;
  param_2[5] = uVar15;
  iVar11 = (int)((uint)bVar1 << 0x18) >> 0x1f;
  dVar20 = *pdVar5;
  dVar19 = *pdVar9;
  if (NAN(dVar20)) {
    cVar8 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    cVar8 = -1;
  }
  else if (dVar20 <= dVar19) {
    cVar8 = '\0';
    if (dVar20 < dVar19) {
      cVar8 = -1;
    }
  }
  else {
    cVar8 = '\x01';
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  pdVar6 = pdVar6 + -iVar11;
  pdVar2 = pdVar9;
  if ((uint)(int)cVar8 < 0x80000000) {
    pdVar2 = pdVar5;
  }
  pdVar12 = pdVar12 + (-iVar11 ^ 1);
  uVar15 = *(undefined4 *)((int)pdVar2 + 4);
  param_2[10] = *(undefined4 *)pdVar2;
  param_2[0xb] = uVar15;
  dVar20 = *pdVar6;
  dVar19 = *pdVar12;
  if (NAN(dVar20)) {
    bVar1 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    bVar1 = 0xff;
  }
  else if (dVar20 <= dVar19) {
    bVar1 = 0;
    if (dVar20 < dVar19) {
      bVar1 = 0xff;
    }
  }
  else {
    bVar1 = 1;
    if (dVar20 < dVar19) goto LAB_00b6db9c;
  }
  uVar4 = (int)cVar8 >> 7;
  pdVar9 = pdVar9 + uVar4;
  pdVar5 = pdVar5 + ~uVar4;
  pdVar2 = pdVar6;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
    pdVar2 = pdVar12;
  }
  uVar15 = *(undefined4 *)((int)pdVar2 + 4);
  param_2[6] = *(undefined4 *)pdVar2;
  param_2[7] = uVar15;
  iVar11 = (int)((uint)bVar1 << 0x18) >> 0x1f;
  dVar20 = *pdVar5;
  dVar19 = *pdVar9;
  if (NAN(dVar20)) {
    cVar8 = !NAN(dVar19);
  }
  else if (NAN(dVar19)) {
    cVar8 = -1;
  }
  else if (dVar20 <= dVar19) {
    cVar8 = '\0';
    if (dVar20 < dVar19) {
      cVar8 = -1;
    }
  }
  else {
    cVar8 = '\x01';
    if (dVar20 < dVar19) {
LAB_00b6db9c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
    }
  }
  pdVar2 = (double *)(int)cVar8;
  pdVar14 = pdVar9;
  if (pdVar2 < &DAT_80000000) {
    pdVar14 = pdVar5;
  }
  uVar15 = *(undefined4 *)((int)pdVar14 + 4);
  param_2[8] = *(undefined4 *)pdVar14;
  param_2[9] = uVar15;
  pdVar9 = pdVar9 + ((int)pdVar2 >> 7) + 1;
  bVar18 = pdVar12 + (-iVar11 ^ 1) == pdVar9;
  if (bVar18) {
    pdVar9 = pdVar6 + -iVar11;
    pdVar2 = pdVar5 + ~((int)pdVar2 >> 7) + 1;
  }
  if (!bVar18 || pdVar9 != pdVar2) {
    FUN_00fb7254();
  }
  return;
}

