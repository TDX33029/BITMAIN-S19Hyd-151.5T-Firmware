// FUN_0060016c @ 0060016c size=720 calls_out=1 calls_in=2
// strings: 

void FUN_0060016c(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  uVar15 = 3;
  uVar2 = 2;
  if (param_1[3] < param_1[2]) {
    uVar2 = 3;
    uVar15 = 2;
  }
  uVar8 = (uint)(param_1[1] < *param_1);
  uVar4 = param_1[uVar8];
  uVar19 = param_1[uVar2];
  uVar16 = (uint)(param_1[1] >= *param_1);
  uVar5 = uVar2;
  if (uVar19 < uVar4) {
    uVar5 = uVar16;
  }
  uVar17 = 2;
  puVar1 = param_1 + uVar15;
  if (param_1[uVar15] < param_1[uVar16]) {
    puVar1 = param_1 + uVar16;
    uVar5 = uVar15;
    uVar16 = uVar2;
  }
  if (uVar19 < uVar4) {
    uVar16 = uVar8;
  }
  puVar3 = param_1 + uVar16;
  uVar2 = *puVar3;
  puVar10 = param_1 + uVar5;
  uVar15 = *puVar10;
  if (uVar19 < uVar4) {
    uVar4 = uVar19;
  }
  *param_3 = uVar4;
  puVar7 = puVar3;
  if (uVar15 < uVar2) {
    puVar7 = puVar10;
  }
  if (uVar15 < uVar2) {
    puVar10 = puVar3;
  }
  param_3[1] = *puVar7;
  param_3[2] = *puVar10;
  uVar16 = *puVar1;
  puVar10 = param_3 + 3;
  *puVar10 = uVar16;
  puVar1 = param_1 + 4;
  uVar5 = (uint)(param_1[5] < *puVar1);
  uVar15 = (uint)(param_1[5] >= *puVar1);
  uVar2 = 3;
  if (param_1[7] < param_1[6]) {
    uVar2 = 2;
    uVar17 = 3;
  }
  uVar18 = puVar1[uVar15];
  uVar19 = puVar1[uVar2];
  uVar8 = uVar15;
  if (uVar19 < uVar18) {
    uVar8 = uVar17;
  }
  uVar13 = puVar1[uVar5];
  if (puVar1[uVar17] < puVar1[uVar5]) {
    uVar13 = puVar1[uVar17];
    uVar8 = uVar5;
    uVar17 = uVar15;
  }
  puVar7 = puVar1 + uVar8;
  uVar5 = *puVar7;
  puVar3 = puVar1 + uVar2;
  if (uVar19 < uVar18) {
    uVar17 = uVar2;
    puVar3 = puVar1 + uVar15;
  }
  puVar1 = puVar1 + uVar17;
  uVar2 = *puVar1;
  puVar6 = puVar7;
  if (uVar2 < uVar5) {
    puVar6 = puVar1;
  }
  puVar9 = param_3 + 4;
  *puVar9 = uVar13;
  if (uVar2 < uVar5) {
    puVar1 = puVar7;
  }
  param_3[5] = *puVar6;
  param_3[6] = *puVar1;
  uVar2 = *puVar3;
  iVar11 = 0;
  bVar20 = uVar4 <= uVar13;
  if (bVar20) {
    uVar13 = uVar4;
  }
  puVar1 = param_3 + 7;
  *puVar1 = uVar2;
  *param_2 = uVar13;
  uVar15 = uVar16;
  if (uVar2 >= uVar16 && uVar2 != uVar16) {
    uVar15 = uVar2;
  }
  puVar9 = puVar9 + !bVar20;
  uVar4 = *puVar9;
  param_3 = param_3 + bVar20;
  uVar5 = *param_3;
  iVar14 = 0;
  if (uVar2 < uVar16) {
    iVar14 = -1;
  }
  else {
    iVar11 = -1;
  }
  bVar20 = uVar5 <= uVar4;
  param_2[7] = uVar15;
  if (!bVar20) {
    uVar5 = uVar4;
  }
  puVar1 = puVar1 + iVar11;
  uVar15 = *puVar1;
  param_2[1] = uVar5;
  puVar10 = puVar10 + iVar14;
  uVar5 = *puVar10;
  uVar2 = uVar5;
  if (uVar15 >= uVar5 && uVar15 != uVar5) {
    uVar2 = uVar15;
  }
  puVar9 = puVar9 + !bVar20;
  uVar16 = *puVar9;
  param_2[6] = uVar2;
  iVar14 = 0;
  param_3 = param_3 + bVar20;
  iVar11 = 0;
  if (uVar15 < uVar5) {
    iVar11 = -1;
  }
  else {
    iVar14 = -1;
  }
  bVar20 = *param_3 <= uVar16;
  uVar2 = *param_3;
  if (!bVar20) {
    uVar2 = uVar16;
  }
  uVar15 = puVar1[iVar14];
  param_2[2] = uVar2;
  puVar10 = puVar10 + iVar11;
  uVar5 = *puVar10;
  uVar2 = uVar5;
  if (uVar5 < uVar15) {
    uVar2 = uVar15;
  }
  uVar16 = puVar9[!bVar20];
  param_2[5] = uVar2;
  iVar12 = 0;
  uVar2 = param_3[bVar20];
  iVar11 = 0;
  if (uVar15 < uVar5) {
    iVar12 = -1;
  }
  else {
    iVar11 = -1;
  }
  bVar21 = uVar16 < uVar2;
  if (bVar21) {
    uVar2 = uVar16;
  }
  uVar15 = puVar10[iVar12];
  param_2[3] = uVar2;
  puVar1 = puVar1 + iVar14 + iVar11;
  uVar2 = *puVar1;
  bVar22 = uVar2 < uVar15;
  if (!bVar22 && uVar2 != uVar15) {
    uVar15 = uVar2;
  }
  puVar3 = param_3 + bVar20 + !bVar21;
  iVar11 = 0;
  param_2[4] = uVar15;
  if (bVar22) {
    iVar11 = -1;
  }
  iVar14 = 0;
  if (!bVar22) {
    iVar14 = -1;
  }
  bVar22 = puVar3 == puVar10 + iVar12 + iVar11 + 1;
  if (bVar22) {
    puVar3 = puVar9 + !bVar20 + bVar21;
    puVar1 = puVar1 + iVar14 + 1;
  }
  if (!bVar22 || puVar3 != puVar1) {
    FUN_00fb7254();
  }
  return;
}

