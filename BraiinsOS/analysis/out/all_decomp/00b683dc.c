// FUN_00b683dc @ 00b683dc size=1568 calls_out=1 calls_in=1
// strings: 

void FUN_00b683dc(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  bVar17 = param_1[6] <= param_1[9];
  if (param_1[9] == param_1[6]) {
    bVar17 = param_1[7] <= param_1[10];
  }
  iVar5 = 0x18;
  iVar7 = 0x24;
  if (!bVar17) {
    iVar5 = 0x24;
    iVar7 = 0x18;
  }
  bVar17 = *param_1 <= param_1[3];
  if (param_1[3] == *param_1) {
    bVar17 = param_1[1] <= param_1[4];
  }
  uVar2 = (uint)!bVar17;
  puVar9 = (uint *)((int)param_1 + iVar7);
  puVar8 = (uint *)((int)param_1 + iVar5);
  puVar4 = param_1 + (uVar2 | uVar2 << 1);
  puVar3 = param_1 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
  bVar17 = *puVar4 <= *puVar8;
  if (*puVar8 == *puVar4) {
    bVar17 = puVar4[1] <= puVar8[1];
  }
  puVar11 = puVar8;
  if (!bVar17) {
    puVar11 = puVar3;
  }
  bVar18 = *puVar3 <= *puVar9;
  if (*puVar9 == *puVar3) {
    bVar18 = puVar3[1] <= puVar9[1];
  }
  puVar6 = puVar3;
  puVar15 = puVar9;
  if (!bVar18) {
    puVar6 = puVar8;
    puVar15 = puVar3;
    puVar11 = puVar9;
  }
  puVar3 = puVar4;
  if (!bVar17) {
    puVar3 = puVar8;
    puVar6 = puVar4;
  }
  uVar2 = puVar11[1];
  uVar10 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = *puVar6;
  uVar14 = puVar6[1];
  uVar16 = *puVar11;
  *param_3 = *puVar3;
  param_3[1] = uVar10;
  param_3[2] = uVar12;
  bVar17 = uVar13 <= uVar16;
  if (uVar16 == uVar13) {
    bVar17 = uVar14 <= uVar2;
  }
  if (bVar17) {
    puVar3 = puVar6;
    puVar6 = puVar11;
  }
  else {
    puVar3 = puVar11;
  }
  uVar2 = *puVar3;
  uVar10 = puVar3[1];
  param_3[5] = puVar3[2];
  param_3[4] = uVar10;
  param_3[3] = uVar2;
  uVar10 = puVar6[1];
  uVar2 = puVar6[2];
  param_3[6] = *puVar6;
  iVar5 = 0x24;
  param_3[7] = uVar10;
  param_3[8] = uVar2;
  uVar2 = *puVar15;
  uVar10 = puVar15[2];
  param_3[10] = puVar15[1];
  param_3[0xb] = uVar10;
  puVar3 = param_3 + 9;
  *puVar3 = uVar2;
  puVar8 = param_1 + 0xc;
  bVar17 = *puVar8 <= param_1[0xf];
  if (param_1[0xf] == *puVar8) {
    bVar17 = param_1[0xd] <= param_1[0x10];
  }
  uVar2 = (uint)!bVar17;
  bVar17 = param_1[0x12] <= param_1[0x15];
  if (param_1[0x15] == param_1[0x12]) {
    bVar17 = param_1[0x13] <= param_1[0x16];
  }
  if (!bVar17) {
    iVar5 = 0x18;
  }
  puVar9 = (uint *)((int)puVar8 + iVar5);
  iVar5 = 0x18;
  if (!bVar17) {
    iVar5 = 0x24;
  }
  puVar4 = puVar8 + (uVar2 | uVar2 << 1);
  puVar11 = (uint *)((int)puVar8 + iVar5);
  puVar8 = puVar8 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
  bVar17 = *puVar4 <= *puVar11;
  if (*puVar11 == *puVar4) {
    bVar17 = puVar4[1] <= puVar11[1];
  }
  puVar15 = puVar11;
  if (!bVar17) {
    puVar15 = puVar8;
  }
  bVar18 = *puVar8 <= *puVar9;
  if (*puVar9 == *puVar8) {
    bVar18 = puVar8[1] <= puVar9[1];
  }
  puVar1 = puVar8;
  puVar6 = puVar9;
  if (!bVar18) {
    puVar1 = puVar11;
    puVar6 = puVar8;
    puVar15 = puVar9;
  }
  if (!bVar17) {
    puVar1 = puVar4;
  }
  uVar2 = puVar15[1];
  uVar10 = puVar1[1];
  if (!bVar17) {
    puVar4 = puVar11;
  }
  uVar12 = *puVar15;
  uVar14 = *puVar1;
  uVar16 = *puVar4;
  uVar13 = puVar4[1];
  param_3[0xe] = puVar4[2];
  param_3[0xd] = uVar13;
  bVar17 = uVar14 <= uVar12;
  if (uVar12 == uVar14) {
    bVar17 = uVar10 <= uVar2;
  }
  puVar8 = puVar1;
  if (!bVar17) {
    puVar8 = puVar15;
  }
  puVar9 = param_3 + 0xc;
  *puVar9 = uVar16;
  uVar2 = *puVar8;
  if (bVar17) {
    puVar1 = puVar15;
  }
  uVar10 = puVar8[2];
  param_3[0x10] = puVar8[1];
  param_3[0x11] = uVar10;
  param_3[0xf] = uVar2;
  uVar10 = puVar1[1];
  uVar2 = puVar1[2];
  param_3[0x12] = *puVar1;
  param_3[0x13] = uVar10;
  param_3[0x14] = uVar2;
  uVar10 = puVar6[2];
  uVar2 = *puVar6;
  param_3[0x16] = puVar6[1];
  puVar8 = param_3 + 0x15;
  *puVar8 = uVar2;
  param_3[0x17] = uVar10;
  bVar17 = *param_3 <= *puVar9;
  if (*puVar9 == *param_3) {
    bVar17 = param_3[1] <= param_3[0xd];
  }
  uVar2 = (uint)!bVar17;
  puVar4 = param_3;
  if (uVar2 != 0) {
    puVar4 = puVar9;
  }
  uVar12 = puVar4[1];
  uVar10 = puVar4[2];
  *param_2 = *puVar4;
  param_2[1] = uVar12;
  param_2[2] = uVar10;
  bVar17 = *puVar3 <= *puVar8;
  if (*puVar8 == *puVar3) {
    bVar17 = param_3[10] <= param_3[0x16];
  }
  uVar10 = (uint)!bVar17;
  puVar4 = puVar8;
  if (uVar10 != 0) {
    puVar4 = puVar3;
  }
  uVar12 = *puVar4;
  uVar13 = puVar4[1];
  param_2[0x17] = puVar4[2];
  param_2[0x16] = uVar13;
  param_2[0x15] = uVar12;
  puVar9 = puVar9 + (uVar2 | uVar2 << 1);
  param_3 = param_3 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
  bVar17 = *param_3 <= *puVar9;
  if (*puVar9 == *param_3) {
    bVar17 = param_3[1] <= puVar9[1];
  }
  uVar2 = (uint)!bVar17;
  puVar4 = param_3;
  if (uVar2 != 0) {
    puVar4 = puVar9;
  }
  uVar13 = *puVar4;
  uVar12 = puVar4[1];
  param_2[5] = puVar4[2];
  param_2[4] = uVar12;
  uVar12 = uVar10 | uVar10 << 1;
  param_2[3] = uVar13;
  puVar3 = puVar3 + uVar10 * -3;
  puVar4 = puVar8 + (uVar12 - 3);
  bVar17 = *puVar3 <= *puVar4;
  if (*puVar4 == *puVar3) {
    bVar17 = puVar3[1] <= puVar8[uVar12 - 2];
  }
  uVar10 = (uint)!bVar17;
  puVar8 = puVar4;
  if (uVar10 != 0) {
    puVar8 = puVar3;
  }
  uVar12 = *puVar8;
  uVar13 = puVar8[1];
  param_2[0x14] = puVar8[2];
  param_2[0x13] = uVar13;
  param_2[0x12] = uVar12;
  puVar9 = puVar9 + (uVar2 | uVar2 << 1);
  param_3 = param_3 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
  bVar17 = *param_3 <= *puVar9;
  if (*puVar9 == *param_3) {
    bVar17 = param_3[1] <= puVar9[1];
  }
  uVar2 = (uint)!bVar17;
  puVar8 = param_3;
  if (uVar2 != 0) {
    puVar8 = puVar9;
  }
  uVar13 = *puVar8;
  uVar12 = puVar8[1];
  param_2[8] = puVar8[2];
  param_2[7] = uVar12;
  uVar12 = uVar10 | uVar10 << 1;
  param_2[6] = uVar13;
  puVar3 = puVar3 + uVar10 * -3;
  puVar8 = puVar4 + (uVar12 - 3);
  bVar17 = *puVar3 <= *puVar8;
  if (*puVar8 == *puVar3) {
    bVar17 = puVar3[1] <= puVar4[uVar12 - 2];
  }
  uVar10 = (uint)!bVar17;
  puVar4 = puVar8;
  if (uVar10 != 0) {
    puVar4 = puVar3;
  }
  uVar13 = puVar4[1];
  uVar12 = puVar4[2];
  param_2[0xf] = *puVar4;
  param_2[0x11] = uVar12;
  param_2[0x10] = uVar13;
  puVar9 = puVar9 + (uVar2 | uVar2 << 1);
  param_3 = param_3 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1);
  bVar17 = *param_3 <= *puVar9;
  if (*puVar9 == *param_3) {
    bVar17 = param_3[1] <= puVar9[1];
  }
  uVar2 = (uint)!bVar17;
  puVar4 = param_3;
  if (uVar2 != 0) {
    puVar4 = puVar9;
  }
  uVar12 = *puVar4;
  uVar13 = puVar4[1];
  param_2[0xb] = puVar4[2];
  param_2[9] = uVar12;
  uVar12 = uVar10 | uVar10 << 1;
  param_2[10] = uVar13;
  puVar3 = puVar3 + uVar10 * -3;
  puVar4 = puVar8 + (uVar12 - 3);
  bVar17 = *puVar3 <= *puVar4;
  if (*puVar4 == *puVar3) {
    bVar17 = puVar3[1] <= puVar8[uVar12 - 2];
  }
  uVar10 = (uint)!bVar17;
  puVar8 = puVar4;
  if (uVar10 != 0) {
    puVar8 = puVar3;
  }
  uVar12 = *puVar8;
  uVar13 = puVar8[1];
  param_2[0xe] = puVar8[2];
  param_2[0xd] = uVar13;
  param_2[0xc] = uVar12;
  puVar3 = puVar3 + uVar10 * -3 + 3;
  bVar17 = param_3 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1) == puVar3;
  if (bVar17) {
    puVar3 = puVar9 + (uVar2 | uVar2 << 1);
    puVar4 = puVar4 + (uVar10 | uVar10 << 1);
  }
  if (!bVar17 || puVar3 != puVar4) {
    FUN_00fb7254();
  }
  return;
}

