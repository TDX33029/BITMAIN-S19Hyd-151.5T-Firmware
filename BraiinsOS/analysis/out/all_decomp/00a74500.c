// FUN_00a74500 @ 00a74500 size=988 calls_out=1 calls_in=1
// strings: 

void FUN_00a74500(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  byte in_Q;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar7 = 0x18;
  iVar5 = 0x10;
  iVar10 = 0x18;
  iVar14 = 0x10;
  iVar13 = 0;
  pfVar3 = param_1 + (uint)(param_1[2] < *param_1) * 2;
  pfVar2 = param_1 + (uint)(param_1[2] >= *param_1) * 2;
  fVar16 = *pfVar2;
  if (param_1[6] < param_1[4]) {
    iVar7 = 0x10;
    iVar5 = 0x18;
  }
  pfVar8 = (float *)((int)param_1 + iVar7);
  pfVar6 = (float *)((int)param_1 + iVar5);
  pfVar9 = pfVar2;
  pfVar12 = pfVar8;
  if (*pfVar8 < fVar16) {
    pfVar9 = pfVar6;
    pfVar12 = pfVar2;
  }
  if (*pfVar3 <= *pfVar6) {
    pfVar4 = pfVar3;
    pfVar3 = pfVar9;
    pfVar2 = pfVar6;
  }
  else {
    pfVar4 = pfVar6;
  }
  if (((byte)((*pfVar8 < fVar16) << 4 | in_Q) & 0x1f) >> 4 != 0) {
    pfVar2 = pfVar8;
  }
  fVar15 = *pfVar3;
  fVar17 = *pfVar2;
  fVar16 = *pfVar4;
  fVar11 = pfVar4[1];
  *param_3 = fVar16;
  param_3[1] = fVar11;
  pfVar9 = pfVar2;
  if (fVar17 < fVar15) {
    pfVar9 = pfVar3;
    pfVar3 = pfVar2;
  }
  fVar11 = *pfVar3;
  param_3[3] = pfVar3[1];
  param_3[2] = fVar11;
  fVar11 = pfVar9[1];
  param_3[4] = *pfVar9;
  param_3[5] = fVar11;
  fVar11 = *pfVar12;
  param_3[7] = pfVar12[1];
  pfVar12 = param_3 + 6;
  *pfVar12 = fVar11;
  pfVar2 = param_1 + (uint)(param_1[10] >= param_1[8]) * 2 + 8;
  pfVar3 = param_1 + (uint)(param_1[10] < param_1[8]) * 2 + 8;
  fVar15 = *pfVar2;
  if (param_1[0xe] < param_1[0xc]) {
    iVar10 = 0x10;
  }
  pfVar9 = (float *)((int)param_1 + iVar10 + 0x20);
  if (param_1[0xe] < param_1[0xc]) {
    iVar14 = 0x18;
  }
  param_1 = (float *)((int)param_1 + iVar14 + 0x20);
  pfVar8 = pfVar2;
  pfVar6 = pfVar9;
  if (*pfVar9 < fVar15) {
    pfVar8 = param_1;
    pfVar6 = pfVar2;
  }
  if (*pfVar3 <= *param_1) {
    pfVar4 = pfVar3;
    pfVar3 = pfVar8;
    pfVar2 = param_1;
  }
  else {
    pfVar4 = param_1;
  }
  if (*pfVar9 < fVar15) {
    pfVar2 = pfVar9;
  }
  fVar17 = *pfVar3;
  fVar18 = *pfVar2;
  fVar15 = *pfVar4;
  param_3[9] = pfVar4[1];
  pfVar9 = param_3 + 8;
  *pfVar9 = fVar15;
  bVar1 = fVar15 < fVar16;
  pfVar8 = pfVar2;
  if (fVar18 < fVar17) {
    pfVar8 = pfVar3;
    pfVar3 = pfVar2;
  }
  fVar16 = pfVar3[1];
  param_3[10] = *pfVar3;
  param_3[0xb] = fVar16;
  fVar16 = pfVar8[1];
  param_3[0xc] = *pfVar8;
  param_3[0xd] = fVar16;
  fVar16 = *pfVar6;
  fVar15 = pfVar6[1];
  pfVar2 = param_3 + 0xe;
  *pfVar2 = fVar16;
  param_3[0xf] = fVar15;
  pfVar3 = param_3;
  if (bVar1) {
    pfVar3 = pfVar9;
  }
  pfVar9 = pfVar9 + (uint)bVar1 * 2;
  param_3 = param_3 + (uint)!bVar1 * 2;
  fVar15 = *pfVar3;
  fVar17 = *pfVar9;
  iVar7 = 0;
  fVar18 = *param_3;
  param_2[1] = pfVar3[1];
  bVar1 = fVar17 < fVar18;
  *param_2 = fVar15;
  pfVar3 = pfVar12;
  if (fVar16 >= fVar11) {
    iVar7 = -1;
    pfVar3 = pfVar2;
  }
  fVar15 = pfVar3[1];
  pfVar2 = pfVar2 + iVar7 * 2;
  param_2[0xe] = *pfVar3;
  iVar7 = 0;
  if (fVar16 < fVar11) {
    iVar7 = -1;
  }
  pfVar12 = pfVar12 + iVar7 * 2;
  fVar16 = *pfVar2;
  param_2[0xf] = fVar15;
  fVar11 = *pfVar12;
  pfVar3 = param_3;
  if (bVar1) {
    pfVar3 = pfVar9;
  }
  fVar15 = pfVar3[1];
  pfVar9 = pfVar9 + (uint)bVar1 * 2;
  iVar7 = 0;
  param_2[2] = *pfVar3;
  param_2[3] = fVar15;
  fVar15 = *pfVar9;
  pfVar3 = pfVar2;
  if (fVar16 < fVar11) {
    iVar7 = -1;
    pfVar3 = pfVar12;
  }
  fVar17 = pfVar3[1];
  param_3 = param_3 + (uint)!bVar1 * 2;
  iVar5 = 0;
  param_2[0xc] = *pfVar3;
  if (fVar16 >= fVar11) {
    iVar5 = -1;
  }
  pfVar2 = pfVar2 + iVar5 * 2;
  bVar1 = fVar15 < *param_3;
  param_2[0xd] = fVar17;
  fVar16 = *pfVar2;
  pfVar3 = param_3;
  if (bVar1) {
    pfVar3 = pfVar9;
  }
  fVar11 = *pfVar3;
  pfVar12 = pfVar12 + iVar7 * 2;
  fVar17 = *pfVar12;
  pfVar9 = pfVar9 + (uint)bVar1 * 2;
  param_3 = param_3 + (uint)!bVar1 * 2;
  param_2[5] = pfVar3[1];
  fVar15 = *param_3;
  iVar7 = 0;
  fVar18 = *pfVar9;
  param_2[4] = fVar11;
  bVar1 = fVar18 < fVar15;
  pfVar3 = pfVar2;
  if (fVar16 < fVar17) {
    iVar7 = -1;
    pfVar3 = pfVar12;
  }
  fVar11 = pfVar3[1];
  param_2[10] = *pfVar3;
  iVar5 = 0;
  if (fVar16 >= fVar17) {
    iVar5 = -1;
  }
  pfVar2 = pfVar2 + iVar5 * 2;
  param_2[0xb] = fVar11;
  fVar16 = *pfVar2;
  pfVar3 = param_3;
  if (bVar1) {
    pfVar3 = pfVar9;
  }
  fVar11 = *pfVar3;
  pfVar12 = pfVar12 + iVar7 * 2;
  fVar15 = *pfVar12;
  param_2[7] = pfVar3[1];
  param_2[6] = fVar11;
  pfVar3 = pfVar2;
  if (fVar16 < fVar15) {
    iVar13 = -1;
    pfVar3 = pfVar12;
  }
  fVar11 = pfVar3[1];
  param_2[8] = *pfVar3;
  param_2[9] = fVar11;
  pfVar3 = (float *)0x0;
  if (fVar16 >= fVar15) {
    pfVar3 = (float *)0xffffffff;
  }
  if (param_3 + (uint)!bVar1 * 2 == pfVar12 + iVar13 * 2 + 2) {
    pfVar9 = pfVar9 + (uint)bVar1 * 2;
    pfVar3 = pfVar2 + (int)pfVar3 * 2 + 2;
  }
  if (param_3 + (uint)!bVar1 * 2 != pfVar12 + iVar13 * 2 + 2 || pfVar9 != pfVar3) {
    FUN_00fb7254();
  }
  return;
}

