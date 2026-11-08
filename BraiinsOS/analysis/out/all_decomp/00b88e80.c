// FUN_00b88e80 @ 00b88e80 size=1568 calls_out=1 calls_in=3
// strings: 

void FUN_00b88e80(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  bVar18 = param_1[4] <= param_1[6];
  if (param_1[6] == param_1[4]) {
    bVar18 = param_1[5] <= param_1[7];
  }
  uVar6 = 3;
  bVar17 = *param_1 <= param_1[2];
  if (param_1[2] == *param_1) {
    bVar17 = param_1[1] <= param_1[3];
  }
  uVar15 = (uint)!bVar17;
  puVar4 = param_1 + uVar15 * 2;
  if (!bVar18) {
    uVar6 = 2;
  }
  uVar14 = uVar15 ^ 1;
  uVar12 = 2;
  if (!bVar18) {
    uVar12 = 3;
  }
  puVar5 = param_1 + uVar6 * 2;
  puVar7 = param_1 + uVar14 * 2;
  puVar8 = param_1 + uVar12 * 2;
  bVar18 = *puVar7 <= *puVar5;
  if (*puVar5 == *puVar7) {
    bVar18 = puVar7[1] <= puVar5[1];
  }
  uVar13 = uVar14;
  puVar10 = puVar7;
  puVar2 = puVar5;
  if (!bVar18) {
    uVar13 = uVar12;
    puVar10 = puVar8;
    puVar2 = puVar7;
  }
  bVar17 = *puVar4 <= *puVar8;
  if (*puVar8 == *puVar4) {
    bVar17 = puVar4[1] <= puVar8[1];
  }
  if (bVar17) {
    puVar1 = puVar4;
  }
  else {
    puVar1 = puVar8;
    puVar8 = puVar7;
    uVar12 = uVar14;
    uVar13 = uVar15;
    puVar10 = puVar4;
  }
  uVar15 = param_1[uVar13 * 2];
  if (!bVar18) {
    puVar8 = puVar5;
    uVar12 = uVar6;
  }
  uVar13 = param_1[uVar12 * 2];
  uVar14 = puVar10[1];
  uVar12 = puVar8[1];
  uVar6 = *puVar1;
  param_3[1] = puVar1[1];
  *param_3 = uVar6;
  bVar18 = uVar15 <= uVar13;
  if (uVar13 == uVar15) {
    bVar18 = uVar14 <= uVar12;
  }
  puVar4 = puVar8;
  if (!bVar18) {
    puVar4 = puVar10;
    puVar10 = puVar8;
  }
  uVar15 = *puVar10;
  param_3[3] = puVar10[1];
  param_3[2] = uVar15;
  uVar15 = puVar4[1];
  param_3[4] = *puVar4;
  param_3[5] = uVar15;
  uVar15 = puVar2[1];
  puVar8 = param_3 + 6;
  *puVar8 = *puVar2;
  param_3[7] = uVar15;
  puVar4 = param_1 + 8;
  bVar18 = *puVar4 <= param_1[10];
  if (param_1[10] == *puVar4) {
    bVar18 = param_1[9] <= param_1[0xb];
  }
  uVar15 = (uint)!bVar18;
  bVar18 = param_1[0xc] <= param_1[0xe];
  if (param_1[0xe] == param_1[0xc]) {
    bVar18 = param_1[0xd] <= param_1[0xf];
  }
  puVar7 = puVar4 + uVar15 * 2;
  uVar12 = uVar15 ^ 1;
  uVar14 = 3;
  uVar13 = 2;
  if (!bVar18) {
    uVar14 = 2;
  }
  puVar5 = puVar4 + uVar14 * 2;
  if (!bVar18) {
    uVar13 = 3;
  }
  puVar10 = puVar4 + uVar12 * 2;
  puVar2 = puVar4 + uVar13 * 2;
  bVar18 = *puVar10 <= *puVar5;
  if (*puVar5 == *puVar10) {
    bVar18 = puVar10[1] <= puVar5[1];
  }
  puVar9 = puVar10;
  uVar11 = uVar12;
  puVar1 = puVar5;
  if (!bVar18) {
    puVar9 = puVar2;
    uVar11 = uVar13;
    puVar1 = puVar10;
  }
  bVar17 = *puVar7 <= *puVar2;
  if (*puVar2 == *puVar7) {
    bVar17 = puVar7[1] <= puVar2[1];
  }
  puVar3 = puVar2;
  if (bVar17) {
    puVar3 = puVar7;
    uVar12 = uVar13;
    puVar7 = puVar9;
    puVar10 = puVar2;
    uVar15 = uVar11;
  }
  if (!bVar18) {
    puVar10 = puVar5;
  }
  if (!bVar18) {
    uVar12 = uVar14;
  }
  uVar13 = *puVar3;
  uVar14 = puVar3[1];
  bVar18 = puVar4[uVar15 * 2] <= puVar4[uVar12 * 2];
  if (puVar4[uVar12 * 2] == puVar4[uVar15 * 2]) {
    bVar18 = puVar7[1] <= puVar10[1];
  }
  puVar4 = puVar7;
  if (!bVar18) {
    puVar4 = puVar10;
  }
  param_3[9] = uVar14;
  if (!bVar18) {
    puVar10 = puVar7;
  }
  puVar7 = param_3 + 8;
  *puVar7 = uVar13;
  uVar15 = *puVar4;
  param_3[0xb] = puVar4[1];
  param_3[10] = uVar15;
  uVar15 = puVar10[1];
  bVar18 = uVar13 < uVar6;
  if (uVar13 == uVar6) {
    bVar18 = uVar14 < param_3[1];
  }
  uVar6 = (uint)bVar18;
  param_3[0xc] = *puVar10;
  puVar4 = param_3;
  if (uVar6 != 0) {
    puVar4 = puVar7;
  }
  param_3[0xd] = uVar15;
  uVar13 = *puVar4;
  uVar11 = puVar4[1];
  uVar16 = param_3[7];
  uVar15 = *puVar1;
  uVar12 = puVar1[1];
  param_3[0xf] = uVar12;
  uVar14 = *puVar8;
  puVar4 = param_3 + 0xe;
  *puVar4 = uVar15;
  *param_2 = uVar13;
  param_2[1] = uVar11;
  bVar18 = uVar15 <= uVar14 && uVar14 != uVar15;
  if (uVar14 == uVar15) {
    bVar18 = uVar12 < uVar16;
  }
  uVar15 = (uint)bVar18;
  puVar5 = puVar4;
  if (uVar15 != 0) {
    puVar5 = puVar8;
  }
  uVar12 = puVar5[1];
  param_2[0xe] = *puVar5;
  param_2[0xf] = uVar12;
  puVar7 = puVar7 + uVar6 * 2;
  param_3 = param_3 + (uVar6 ^ 1) * 2;
  bVar18 = *param_3 <= *puVar7;
  if (*puVar7 == *param_3) {
    bVar18 = param_3[1] <= puVar7[1];
  }
  uVar6 = (uint)!bVar18;
  puVar5 = param_3;
  if (uVar6 != 0) {
    puVar5 = puVar7;
  }
  uVar12 = puVar5[1];
  param_2[2] = *puVar5;
  param_2[3] = uVar12;
  puVar8 = puVar8 + uVar15 * -2;
  puVar5 = puVar4 + uVar15 * 2 + -2;
  bVar18 = *puVar8 <= *puVar5;
  if (*puVar5 == *puVar8) {
    bVar18 = puVar8[1] <= puVar4[uVar15 * 2 + -1];
  }
  uVar15 = (uint)!bVar18;
  puVar4 = puVar5;
  if (uVar15 != 0) {
    puVar4 = puVar8;
  }
  uVar12 = puVar4[1];
  param_2[0xc] = *puVar4;
  param_2[0xd] = uVar12;
  puVar7 = puVar7 + uVar6 * 2;
  param_3 = param_3 + (uVar6 ^ 1) * 2;
  bVar18 = *param_3 <= *puVar7;
  if (*puVar7 == *param_3) {
    bVar18 = param_3[1] <= puVar7[1];
  }
  uVar6 = (uint)!bVar18;
  puVar4 = param_3;
  if (uVar6 != 0) {
    puVar4 = puVar7;
  }
  uVar12 = puVar4[1];
  param_2[4] = *puVar4;
  param_2[5] = uVar12;
  puVar4 = puVar5 + uVar15 * 2 + -2;
  puVar8 = puVar8 + uVar15 * -2;
  bVar18 = *puVar8 <= *puVar4;
  if (*puVar4 == *puVar8) {
    bVar18 = puVar8[1] <= puVar5[uVar15 * 2 + -1];
  }
  uVar15 = (uint)!bVar18;
  puVar5 = puVar4;
  if (uVar15 != 0) {
    puVar5 = puVar8;
  }
  uVar12 = puVar5[1];
  param_2[10] = *puVar5;
  param_2[0xb] = uVar12;
  puVar7 = puVar7 + uVar6 * 2;
  param_3 = param_3 + (uVar6 ^ 1) * 2;
  bVar18 = *param_3 <= *puVar7;
  if (*puVar7 == *param_3) {
    bVar18 = param_3[1] <= puVar7[1];
  }
  uVar6 = (uint)!bVar18;
  puVar5 = param_3;
  if (uVar6 != 0) {
    puVar5 = puVar7;
  }
  uVar12 = puVar5[1];
  param_2[6] = *puVar5;
  param_2[7] = uVar12;
  puVar5 = puVar4 + uVar15 * 2 + -2;
  puVar8 = puVar8 + uVar15 * -2;
  bVar18 = *puVar8 <= *puVar5;
  if (*puVar5 == *puVar8) {
    bVar18 = puVar8[1] <= puVar4[uVar15 * 2 + -1];
  }
  uVar15 = (uint)!bVar18;
  puVar4 = puVar5;
  if (uVar15 != 0) {
    puVar4 = puVar8;
  }
  uVar12 = puVar4[1];
  param_2[8] = *puVar4;
  param_2[9] = uVar12;
  if (param_3 + (uVar6 ^ 1) * 2 == puVar8 + uVar15 * -2 + 2) {
    puVar7 = puVar7 + uVar6 * 2;
    puVar5 = puVar5 + uVar15 * 2;
  }
  if (param_3 + (uVar6 ^ 1) * 2 != puVar8 + uVar15 * -2 + 2 || puVar7 != puVar5) {
    FUN_00fb7254();
  }
  return;
}

