// FUN_00c5b808 @ 00c5b808 size=348 calls_out=2 calls_in=0
// strings: 

void FUN_00c5b808(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  double *pdVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (*param_3 != 6 || param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003550b4,0x22,&DAT_01873ba0);
  }
  uVar5 = *(uint *)(param_2 + 0x20);
  pdVar11 = *(double **)(param_2 + 0x1c);
  dVar12 = *(double *)(param_3 + 2);
  iVar9 = uVar5 << 3;
  if (uVar5 == 0) {
    uVar1 = 0;
    uVar6 = 0xffffffff;
LAB_00c5b890:
    uVar2 = uVar1 + 1;
    if (uVar6 < uVar1 + 1) {
      uVar2 = uVar6;
    }
    if (uVar5 <= uVar2) goto LAB_00c5b950;
    uVar10 = 6;
    dVar13 = pdVar11[uVar2];
  }
  else {
    dVar13 = INFINITY;
    uVar1 = 0;
    uVar6 = 0;
    iVar3 = iVar9;
    pdVar4 = pdVar11;
    do {
      dVar14 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      if (ABS(dVar14 - dVar12) < dVar13) {
        uVar1 = uVar6;
        dVar13 = ABS(dVar14 - dVar12);
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + -8;
    } while (iVar3 != 0);
    uVar6 = uVar5 - 1;
    if (uVar1 < uVar6) goto LAB_00c5b890;
    uVar10 = 7;
  }
  dVar14 = INFINITY;
  iVar3 = 0;
  iVar7 = 0;
  pdVar4 = pdVar11;
  do {
    dVar15 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    if (ABS(dVar15 - dVar12) < dVar14) {
      iVar3 = iVar7;
      dVar14 = ABS(dVar15 - dVar12);
    }
    iVar7 = iVar7 + 1;
    iVar9 = iVar9 + -8;
  } while (iVar9 != 0);
  if (iVar3 == 0) {
    uVar8 = 7;
  }
  else {
    uVar2 = iVar3 - 1U;
    if (uVar6 < iVar3 - 1U) {
      uVar2 = uVar6;
    }
    if (uVar5 <= uVar2) {
LAB_00c5b950:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar5,&DAT_01873878);
    }
    uVar8 = 6;
    dVar12 = pdVar11[uVar2];
  }
  *param_1 = uVar10;
  *(double *)(param_1 + 8) = dVar12;
  *(double *)(param_1 + 2) = dVar13;
  param_1[6] = uVar8;
  param_1[7] = 0;
  param_1[1] = 0;
  return;
}

