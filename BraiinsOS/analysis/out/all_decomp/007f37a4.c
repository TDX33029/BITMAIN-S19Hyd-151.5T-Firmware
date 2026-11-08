// FUN_007f37a4 @ 007f37a4 size=1000 calls_out=1 calls_in=1
// strings: 

void FUN_007f37a4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  
  uVar18 = 3;
  uVar14 = (uint)(*param_1 <= param_1[2]);
  uVar4 = (uint)(*param_1 > param_1[2]);
  uVar7 = 2;
  if (param_1[6] < param_1[4]) {
    uVar18 = 2;
  }
  puVar3 = param_1 + uVar18 * 2;
  if (param_1[6] < param_1[4]) {
    uVar7 = 3;
  }
  puVar8 = param_1 + uVar4 * 2;
  puVar2 = param_1 + uVar7 * 2;
  puVar9 = param_1 + uVar14 * 2;
  puVar6 = puVar2;
  uVar5 = uVar7;
  if (*puVar2 < *puVar8) {
    puVar6 = puVar9;
    uVar5 = uVar14;
  }
  if (*puVar3 < *puVar9) {
    puVar10 = puVar2;
  }
  else {
    puVar10 = puVar9;
    puVar9 = puVar3;
    puVar3 = puVar6;
    uVar18 = uVar5;
    uVar7 = uVar14;
  }
  bVar20 = *puVar8 <= *puVar2;
  uVar18 = param_1[uVar18 * 2];
  if (!bVar20) {
    uVar7 = uVar4;
  }
  uVar7 = param_1[uVar7 * 2];
  if (bVar20) {
    puVar2 = puVar8;
  }
  uVar14 = *puVar2;
  if (!bVar20) {
    puVar10 = puVar8;
  }
  param_3[1] = puVar2[1];
  *param_3 = uVar14;
  if (uVar18 < uVar7) {
    puVar2 = puVar10;
    puVar10 = puVar3;
  }
  else {
    puVar2 = puVar3;
  }
  uVar18 = puVar10[1];
  param_3[2] = *puVar10;
  uVar7 = 2;
  param_3[3] = uVar18;
  uVar18 = puVar2[1];
  param_3[4] = *puVar2;
  param_3[5] = uVar18;
  uVar4 = *puVar9;
  param_3[7] = puVar9[1];
  puVar9 = param_3 + 6;
  *puVar9 = uVar4;
  puVar3 = param_1 + 8;
  uVar5 = (uint)(*puVar3 <= param_1[10]);
  uVar16 = (uint)(*puVar3 > param_1[10]);
  uVar18 = 3;
  if (param_1[0xe] < param_1[0xc]) {
    uVar18 = 2;
    uVar7 = 3;
  }
  puVar15 = puVar3 + uVar16 * 2;
  uVar17 = *puVar15;
  puVar8 = puVar3 + uVar7 * 2;
  uVar19 = *puVar8;
  puVar6 = puVar3 + uVar18 * 2;
  puVar2 = puVar3 + uVar5 * 2;
  puVar10 = puVar8;
  uVar1 = uVar7;
  if (uVar19 < uVar17) {
    puVar10 = puVar2;
    uVar1 = uVar5;
  }
  if (*puVar6 < *puVar2) {
    puVar11 = puVar8;
  }
  else {
    uVar18 = uVar1;
    puVar11 = puVar2;
    puVar2 = puVar6;
    puVar6 = puVar10;
    uVar7 = uVar5;
  }
  if (uVar19 < uVar17) {
    uVar7 = uVar16;
  }
  else {
    puVar8 = puVar15;
  }
  uVar7 = puVar3[uVar7 * 2];
  if (uVar19 < uVar17) {
    puVar11 = puVar15;
  }
  uVar18 = puVar3[uVar18 * 2];
  uVar5 = *puVar8;
  param_3[9] = puVar8[1];
  puVar3 = puVar11;
  if (uVar18 < uVar7) {
    puVar3 = puVar6;
  }
  puVar8 = param_3 + 8;
  *puVar8 = uVar5;
  uVar16 = *puVar3;
  if (uVar18 >= uVar7) {
    puVar11 = puVar6;
  }
  bVar20 = uVar14 <= uVar5;
  param_3[0xb] = puVar3[1];
  param_3[10] = uVar16;
  puVar3 = param_3;
  if (!bVar20) {
    puVar3 = puVar8;
  }
  uVar18 = puVar11[1];
  param_3[0xc] = *puVar11;
  param_3[0xd] = uVar18;
  uVar7 = *puVar2;
  uVar18 = *puVar3;
  param_3[0xf] = puVar2[1];
  puVar2 = param_3 + 0xe;
  *puVar2 = uVar7;
  param_2[1] = puVar3[1];
  *param_2 = uVar18;
  puVar3 = puVar2;
  if (uVar7 < uVar4) {
    puVar3 = puVar9;
  }
  puVar8 = puVar8 + (uint)!bVar20 * 2;
  uVar14 = *puVar8;
  uVar5 = *puVar3;
  param_3 = param_3 + (uint)bVar20 * 2;
  uVar18 = *param_3;
  param_2[0xf] = puVar3[1];
  iVar13 = 0;
  param_2[0xe] = uVar5;
  iVar12 = 0;
  if (uVar7 < uVar4) {
    iVar12 = -1;
  }
  else {
    iVar13 = -1;
  }
  bVar20 = uVar18 <= uVar14;
  puVar3 = param_3;
  if (!bVar20) {
    puVar3 = puVar8;
  }
  uVar18 = *puVar3;
  param_2[3] = puVar3[1];
  param_2[2] = uVar18;
  puVar2 = puVar2 + iVar13 * 2;
  uVar18 = *puVar2;
  puVar9 = puVar9 + iVar12 * 2;
  uVar7 = *puVar9;
  puVar3 = puVar2;
  if (uVar18 < uVar7) {
    puVar3 = puVar9;
  }
  uVar14 = *puVar3;
  param_2[0xd] = puVar3[1];
  param_2[0xc] = uVar14;
  puVar8 = puVar8 + (uint)!bVar20 * 2;
  iVar13 = 0;
  param_3 = param_3 + (uint)bVar20 * 2;
  iVar12 = 0;
  if (uVar18 < uVar7) {
    iVar12 = -1;
  }
  else {
    iVar13 = -1;
  }
  bVar20 = *puVar8 < *param_3;
  puVar3 = param_3;
  if (bVar20) {
    puVar3 = puVar8;
  }
  uVar18 = *puVar3;
  param_2[5] = puVar3[1];
  param_2[4] = uVar18;
  puVar2 = puVar2 + iVar13 * 2;
  uVar18 = *puVar2;
  puVar9 = puVar9 + iVar12 * 2;
  uVar7 = *puVar9;
  puVar3 = puVar2;
  if (uVar18 < uVar7) {
    puVar3 = puVar9;
  }
  uVar14 = *puVar3;
  param_2[0xb] = puVar3[1];
  param_2[10] = uVar14;
  param_3 = param_3 + (uint)!bVar20 * 2;
  iVar13 = 0;
  puVar8 = puVar8 + (uint)bVar20 * 2;
  iVar12 = 0;
  if (uVar18 < uVar7) {
    iVar13 = -1;
  }
  else {
    iVar12 = -1;
  }
  bVar20 = *param_3 <= *puVar8;
  puVar3 = param_3;
  if (!bVar20) {
    puVar3 = puVar8;
  }
  puVar2 = puVar2 + iVar12 * 2;
  uVar14 = *puVar2;
  uVar18 = puVar3[1];
  param_2[6] = *puVar3;
  puVar9 = puVar9 + iVar13 * 2;
  uVar7 = *puVar9;
  param_2[7] = uVar18;
  puVar3 = (uint *)(uint)!bVar20;
  bVar21 = uVar14 < uVar7;
  puVar6 = puVar2;
  if (bVar21) {
    puVar6 = puVar9;
  }
  uVar18 = *puVar6;
  param_2[9] = puVar6[1];
  iVar13 = 0;
  param_2[8] = uVar18;
  iVar12 = 0;
  if (bVar21) {
    iVar12 = -1;
  }
  if (!bVar21) {
    iVar13 = -1;
  }
  if (param_3 + (uint)bVar20 * 2 == puVar9 + iVar12 * 2 + 2) {
    puVar8 = puVar8 + (int)puVar3 * 2;
    puVar3 = puVar2 + iVar13 * 2 + 2;
  }
  if (param_3 + (uint)bVar20 * 2 != puVar9 + iVar12 * 2 + 2 || puVar8 != puVar3) {
    FUN_00fb7254();
  }
  return;
}

