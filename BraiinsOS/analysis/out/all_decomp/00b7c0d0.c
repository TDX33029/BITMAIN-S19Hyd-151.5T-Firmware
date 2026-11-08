// FUN_00b7c0d0 @ 00b7c0d0 size=864 calls_out=1 calls_in=1
// strings: 

void FUN_00b7c0d0(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  undefined4 uVar12;
  int iVar13;
  double *pdVar14;
  bool bVar15;
  byte in_Q;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar8 = 0x10;
  iVar6 = 0x18;
  iVar9 = 0x10;
  iVar10 = 0x18;
  iVar13 = 0;
  if (param_1[3] < param_1[2]) {
    iVar6 = 0x10;
    iVar8 = 0x18;
  }
  pdVar11 = (double *)((int)param_1 + iVar6);
  pdVar3 = param_1 + (*param_1 <= param_1[1]);
  pdVar7 = (double *)((int)param_1 + iVar8);
  dVar16 = param_1[*param_1 > param_1[1]];
  pdVar4 = pdVar3;
  pdVar14 = pdVar11;
  if (*pdVar11 < *pdVar3) {
    pdVar4 = pdVar7;
    pdVar14 = pdVar3;
  }
  if (*pdVar7 < dVar16) {
    dVar16 = *pdVar7;
    pdVar4 = param_1 + (*param_1 > param_1[1]);
    pdVar7 = pdVar3;
  }
  if (((byte)((*pdVar11 < *pdVar3) << 4 | in_Q) & 0x1f) >> 4 != 0) {
    pdVar7 = pdVar11;
  }
  dVar17 = *pdVar4;
  dVar19 = *pdVar7;
  *param_3 = dVar16;
  pdVar3 = pdVar7;
  if (dVar19 < dVar17) {
    pdVar3 = pdVar4;
    pdVar4 = pdVar7;
  }
  uVar12 = *(undefined4 *)pdVar4;
  *(undefined4 *)((int)param_3 + 0xc) = *(undefined4 *)((int)pdVar4 + 4);
  uVar2 = *(undefined4 *)((int)pdVar3 + 4);
  *(undefined4 *)(param_3 + 1) = uVar12;
  uVar12 = *(undefined4 *)pdVar3;
  *(undefined4 *)((int)param_3 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)((int)pdVar14 + 4);
  *(undefined4 *)(param_3 + 2) = uVar12;
  uVar12 = *(undefined4 *)pdVar14;
  *(undefined4 *)((int)param_3 + 0x1c) = uVar2;
  pdVar14 = param_3 + 3;
  *(undefined4 *)pdVar14 = uVar12;
  if (param_1[7] < param_1[6]) {
    iVar10 = 0x10;
    iVar9 = 0x18;
  }
  pdVar5 = (double *)((int)param_1 + iVar10 + 0x20);
  pdVar11 = param_1 + (param_1[4] <= param_1[5]) + 4;
  pdVar3 = (double *)((int)param_1 + iVar9 + 0x20);
  dVar17 = param_1[(param_1[4] > param_1[5]) + 4];
  pdVar7 = pdVar11;
  pdVar4 = pdVar5;
  if (*pdVar5 < *pdVar11) {
    pdVar7 = pdVar3;
    pdVar4 = pdVar11;
  }
  if (*pdVar3 < dVar17) {
    dVar17 = *pdVar3;
    pdVar7 = param_1 + (param_1[4] > param_1[5]) + 4;
    pdVar3 = pdVar11;
  }
  if (*pdVar5 < *pdVar11) {
    pdVar3 = pdVar5;
  }
  dVar19 = *pdVar7;
  dVar20 = *pdVar3;
  param_3[4] = dVar17;
  dVar18 = (double)CONCAT44(uVar2,uVar12);
  bVar1 = dVar16 <= dVar17;
  pdVar11 = pdVar3;
  if (dVar20 < dVar19) {
    pdVar11 = pdVar7;
    pdVar7 = pdVar3;
  }
  uVar2 = *(undefined4 *)((int)pdVar7 + 4);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)pdVar7;
  uVar12 = *(undefined4 *)pdVar11;
  *(undefined4 *)((int)param_3 + 0x2c) = uVar2;
  uVar2 = *(undefined4 *)((int)pdVar11 + 4);
  *(undefined4 *)(param_3 + 6) = uVar12;
  *(undefined4 *)((int)param_3 + 0x34) = uVar2;
  uVar2 = *(undefined4 *)pdVar4;
  dVar19 = *pdVar4;
  *(undefined4 *)((int)param_3 + 0x3c) = *(undefined4 *)((int)pdVar4 + 4);
  if (bVar1) {
    dVar17 = dVar16;
  }
  pdVar7 = param_3 + 7;
  *(undefined4 *)pdVar7 = uVar2;
  pdVar4 = param_3 + bVar1;
  param_3 = param_3 + !bVar1 + 4;
  iVar6 = 0;
  iVar10 = 0;
  *param_2 = dVar17;
  dVar16 = *pdVar4;
  if (dVar19 < dVar18) {
    iVar6 = -1;
    dVar19 = dVar18;
  }
  else {
    iVar10 = -1;
  }
  pdVar14 = pdVar14 + iVar6;
  pdVar7 = pdVar7 + iVar10;
  dVar17 = *param_3;
  param_2[7] = dVar19;
  bVar1 = dVar16 <= dVar17;
  if (bVar1) {
    dVar17 = dVar16;
  }
  pdVar4 = pdVar4 + bVar1;
  iVar6 = 0;
  iVar10 = 0;
  param_2[1] = dVar17;
  dVar16 = *pdVar7;
  if (dVar16 < *pdVar14) {
    iVar6 = -1;
    dVar16 = *pdVar14;
  }
  else {
    iVar10 = -1;
  }
  pdVar14 = pdVar14 + iVar6;
  pdVar7 = pdVar7 + iVar10;
  param_2[6] = dVar16;
  dVar16 = param_3[!bVar1];
  bVar15 = *pdVar4 <= dVar16;
  if (bVar15) {
    dVar16 = *pdVar4;
  }
  pdVar3 = param_3 + !bVar1 + !bVar15;
  iVar10 = 0;
  iVar6 = 0;
  param_2[2] = dVar16;
  dVar16 = *pdVar7;
  if (dVar16 < *pdVar14) {
    iVar6 = -1;
    dVar16 = *pdVar14;
  }
  else {
    iVar10 = -1;
  }
  param_2[5] = dVar16;
  dVar17 = pdVar4[bVar15];
  dVar16 = *pdVar3;
  bVar1 = dVar17 <= dVar16;
  if (bVar1) {
    dVar16 = dVar17;
  }
  param_2[3] = dVar16;
  dVar17 = pdVar14[iVar6];
  dVar19 = pdVar7[iVar10];
  dVar16 = dVar19;
  if (dVar19 < dVar17) {
    iVar13 = -1;
    dVar16 = dVar17;
  }
  param_2[4] = dVar16;
  pdVar11 = (double *)0x0;
  if (dVar19 >= dVar17) {
    pdVar11 = (double *)0xffffffff;
  }
  bVar15 = pdVar4 + bVar15 + bVar1 == pdVar14 + iVar6 + iVar13 + 1;
  if (bVar15) {
    pdVar3 = pdVar3 + !bVar1;
    pdVar11 = pdVar7 + iVar10 + (int)pdVar11 + 1;
  }
  if (!bVar15 || pdVar3 != pdVar11) {
    FUN_00fb7254();
  }
  return;
}

