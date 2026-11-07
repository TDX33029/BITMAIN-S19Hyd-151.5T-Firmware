// FUN_0199e7d0 @ 0199e7d0 size=1036 calls_out=1 calls_in=1
// strings: 

void FUN_0199e7d0(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  
  uVar14 = 2;
  uVar5 = (uint)(*param_1 <= param_1[2]);
  uVar18 = (uint)(*param_1 > param_1[2]);
  uVar3 = 3;
  if (param_1[6] < param_1[4]) {
    uVar3 = 2;
    uVar14 = 3;
  }
  puVar15 = param_1 + uVar3 * 2;
  puVar1 = param_1 + uVar18 * 2;
  uVar19 = *puVar1;
  puVar8 = param_1 + uVar14 * 2;
  uVar17 = *puVar8;
  puVar2 = param_1 + uVar5 * 2;
  puVar4 = puVar8;
  uVar11 = uVar14;
  if (uVar17 < uVar19) {
    puVar4 = puVar2;
    uVar11 = uVar5;
  }
  if (*puVar15 < *puVar2) {
    puVar7 = puVar8;
  }
  else {
    puVar7 = puVar2;
    puVar2 = puVar15;
    puVar15 = puVar4;
    uVar14 = uVar5;
    uVar3 = uVar11;
  }
  uVar3 = param_1[uVar3 * 2];
  if (uVar19 <= uVar17) {
    puVar8 = puVar1;
  }
  else {
    puVar7 = puVar1;
  }
  uVar11 = *puVar8;
  uVar5 = puVar8[1];
  if (uVar19 > uVar17) {
    uVar14 = uVar18;
  }
  uVar18 = 2;
  uVar14 = param_1[uVar14 * 2];
  *param_3 = uVar11;
  param_3[1] = uVar5;
  if (uVar3 < uVar14) {
    puVar8 = puVar7;
    puVar7 = puVar15;
  }
  else {
    puVar8 = puVar15;
  }
  uVar3 = puVar7[1];
  param_3[2] = *puVar7;
  param_3[3] = uVar3;
  uVar3 = puVar8[1];
  param_3[4] = *puVar8;
  param_3[5] = uVar3;
  uVar14 = *puVar2;
  param_3[7] = puVar2[1];
  puVar8 = param_3 + 6;
  *puVar8 = uVar14;
  puVar2 = param_1 + 8;
  uVar17 = (uint)(*puVar2 <= param_1[10]);
  uVar5 = (uint)(*puVar2 > param_1[10]);
  uVar3 = 3;
  if (param_1[0xe] < param_1[0xc]) {
    uVar3 = 2;
    uVar18 = 3;
  }
  puVar4 = puVar2 + uVar3 * 2;
  puVar16 = puVar2 + uVar5 * 2;
  uVar12 = *puVar16;
  puVar1 = puVar2 + uVar18 * 2;
  uVar6 = *puVar1;
  puVar15 = puVar2 + uVar17 * 2;
  puVar7 = puVar1;
  uVar19 = uVar18;
  if (uVar6 < uVar12) {
    puVar7 = puVar15;
    uVar19 = uVar17;
  }
  if (*puVar4 < *puVar15) {
    puVar9 = puVar1;
  }
  else {
    uVar3 = uVar19;
    uVar18 = uVar17;
    puVar9 = puVar15;
    puVar15 = puVar4;
    puVar4 = puVar7;
  }
  if (uVar6 < uVar12) {
    uVar18 = uVar5;
  }
  else {
    puVar1 = puVar16;
  }
  uVar18 = puVar2[uVar18 * 2];
  if (uVar6 < uVar12) {
    puVar9 = puVar16;
  }
  uVar3 = puVar2[uVar3 * 2];
  uVar5 = *puVar1;
  param_3[9] = puVar1[1];
  puVar2 = puVar9;
  if (uVar3 < uVar18) {
    puVar2 = puVar4;
  }
  puVar1 = param_3 + 8;
  *puVar1 = uVar5;
  uVar17 = *puVar2;
  if (uVar3 >= uVar18) {
    puVar9 = puVar4;
  }
  param_3[0xb] = puVar2[1];
  param_3[10] = uVar17;
  uVar3 = *puVar9;
  param_3[0xd] = puVar9[1];
  bVar20 = uVar11 <= uVar5;
  param_3[0xc] = uVar3;
  puVar2 = param_3;
  if (!bVar20) {
    puVar2 = puVar1;
  }
  uVar5 = *puVar15;
  uVar11 = puVar15[1];
  uVar18 = *puVar2;
  uVar3 = puVar2[1];
  puVar15 = param_3 + 0xe;
  *puVar15 = uVar5;
  param_3[0xf] = uVar11;
  param_2[1] = uVar3;
  *param_2 = uVar18;
  puVar2 = puVar15;
  if (uVar5 < uVar14) {
    puVar2 = puVar8;
  }
  puVar1 = puVar1 + (uint)!bVar20 * 2;
  uVar18 = *puVar1;
  uVar11 = *puVar2;
  param_3 = param_3 + (uint)bVar20 * 2;
  uVar3 = *param_3;
  param_2[0xf] = puVar2[1];
  iVar13 = 0;
  param_2[0xe] = uVar11;
  iVar10 = 0;
  if (uVar5 < uVar14) {
    iVar10 = -1;
  }
  else {
    iVar13 = -1;
  }
  bVar20 = uVar3 <= uVar18;
  puVar2 = param_3;
  if (!bVar20) {
    puVar2 = puVar1;
  }
  uVar3 = *puVar2;
  param_2[3] = puVar2[1];
  param_2[2] = uVar3;
  puVar15 = puVar15 + iVar13 * 2;
  uVar3 = *puVar15;
  puVar8 = puVar8 + iVar10 * 2;
  uVar14 = *puVar8;
  puVar2 = puVar15;
  if (uVar3 < uVar14) {
    puVar2 = puVar8;
  }
  uVar18 = *puVar2;
  param_2[0xd] = puVar2[1];
  param_2[0xc] = uVar18;
  puVar1 = puVar1 + (uint)!bVar20 * 2;
  iVar13 = 0;
  param_3 = param_3 + (uint)bVar20 * 2;
  iVar10 = 0;
  if (uVar3 < uVar14) {
    iVar10 = -1;
  }
  else {
    iVar13 = -1;
  }
  bVar20 = *puVar1 < *param_3;
  puVar2 = param_3;
  if (bVar20) {
    puVar2 = puVar1;
  }
  uVar3 = *puVar2;
  param_2[5] = puVar2[1];
  param_2[4] = uVar3;
  puVar15 = puVar15 + iVar13 * 2;
  uVar3 = *puVar15;
  puVar8 = puVar8 + iVar10 * 2;
  uVar14 = *puVar8;
  puVar2 = puVar15;
  if (uVar3 < uVar14) {
    puVar2 = puVar8;
  }
  uVar18 = *puVar2;
  param_2[0xb] = puVar2[1];
  param_2[10] = uVar18;
  param_3 = param_3 + (uint)!bVar20 * 2;
  iVar13 = 0;
  puVar1 = puVar1 + (uint)bVar20 * 2;
  iVar10 = 0;
  if (uVar3 < uVar14) {
    iVar13 = -1;
  }
  else {
    iVar10 = -1;
  }
  bVar20 = *param_3 <= *puVar1;
  puVar2 = param_3;
  if (!bVar20) {
    puVar2 = puVar1;
  }
  puVar15 = puVar15 + iVar10 * 2;
  uVar18 = *puVar15;
  uVar3 = puVar2[1];
  param_2[6] = *puVar2;
  puVar8 = puVar8 + iVar13 * 2;
  uVar14 = *puVar8;
  param_2[7] = uVar3;
  puVar2 = (uint *)(uint)!bVar20;
  bVar21 = uVar18 < uVar14;
  puVar4 = puVar15;
  if (bVar21) {
    puVar4 = puVar8;
  }
  uVar3 = *puVar4;
  param_2[9] = puVar4[1];
  param_2[8] = uVar3;
  iVar10 = 0;
  if (bVar21) {
    iVar10 = -1;
  }
  iVar13 = 0;
  if (!bVar21) {
    iVar13 = -1;
  }
  if (param_3 + (uint)bVar20 * 2 == puVar8 + iVar10 * 2 + 2) {
    puVar1 = puVar1 + (int)puVar2 * 2;
    puVar2 = puVar15 + iVar13 * 2 + 2;
  }
  if (param_3 + (uint)bVar20 * 2 != puVar8 + iVar10 * 2 + 2 || puVar1 != puVar2) {
    FUN_01307140();
  }
  return;
}

