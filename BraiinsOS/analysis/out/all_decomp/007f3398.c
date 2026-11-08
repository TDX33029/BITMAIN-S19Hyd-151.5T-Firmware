// FUN_007f3398 @ 007f3398 size=1036 calls_out=1 calls_in=1
// strings: 

void FUN_007f3398(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  
  uVar7 = (uint)(param_1[3] < *param_1);
  uVar12 = (uint)(param_1[3] >= *param_1);
  iVar5 = 0x18;
  iVar8 = 0x24;
  if (param_1[9] < param_1[6]) {
    iVar5 = 0x24;
  }
  puVar3 = (uint *)((int)param_1 + iVar5);
  if (param_1[9] < param_1[6]) {
    iVar8 = 0x18;
  }
  iVar5 = 0x18;
  puVar6 = (uint *)((int)param_1 + iVar8);
  puVar2 = param_1 + (uVar12 | uVar12 << 1);
  uVar12 = *puVar2;
  puVar10 = param_1 + (uVar7 | uVar7 << 1);
  puVar9 = puVar2;
  puVar14 = puVar6;
  if (*puVar6 < uVar12) {
    puVar9 = puVar3;
    puVar14 = puVar2;
  }
  if (*puVar3 < *puVar10) {
    puVar1 = puVar3;
  }
  else {
    puVar1 = puVar10;
    puVar2 = puVar3;
    puVar10 = puVar9;
  }
  if (*puVar6 < uVar12) {
    puVar2 = puVar6;
  }
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar11 = *puVar10;
  uVar7 = *puVar2;
  param_3[2] = puVar1[2];
  *param_3 = uVar12;
  param_3[1] = uVar13;
  puVar3 = puVar10;
  if (uVar7 < uVar11) {
    puVar3 = puVar2;
  }
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  if (uVar7 < uVar11) {
    puVar2 = puVar10;
  }
  param_3[5] = puVar3[2];
  param_3[4] = uVar13;
  param_3[3] = uVar12;
  uVar12 = puVar2[1];
  uVar7 = puVar2[2];
  param_3[6] = *puVar2;
  param_3[7] = uVar12;
  param_3[8] = uVar7;
  uVar12 = *puVar14;
  uVar7 = puVar14[2];
  param_3[10] = puVar14[1];
  param_3[0xb] = uVar7;
  puVar14 = param_3 + 9;
  *puVar14 = uVar12;
  puVar3 = param_1 + 0xc;
  uVar12 = (uint)(*puVar3 <= param_1[0xf]);
  uVar7 = (uint)(*puVar3 > param_1[0xf]);
  iVar8 = 0x24;
  if (param_1[0x15] < param_1[0x12]) {
    iVar8 = 0x18;
  }
  if (param_1[0x15] < param_1[0x12]) {
    iVar5 = 0x24;
  }
  puVar6 = (uint *)((int)puVar3 + iVar8);
  puVar10 = (uint *)((int)puVar3 + iVar5);
  puVar9 = puVar3 + (uVar7 | uVar7 << 1);
  puVar3 = puVar3 + (uVar12 | uVar12 << 1);
  puVar2 = puVar10;
  if (*puVar10 < *puVar9) {
    puVar2 = puVar3;
  }
  puVar4 = puVar3;
  puVar1 = puVar6;
  if (*puVar6 < *puVar3) {
    puVar4 = puVar10;
    puVar1 = puVar3;
    puVar2 = puVar6;
  }
  if (*puVar10 < *puVar9) {
    puVar4 = puVar9;
  }
  else {
    puVar10 = puVar9;
  }
  uVar12 = *puVar2;
  uVar7 = *puVar4;
  uVar13 = *puVar10;
  uVar11 = puVar10[2];
  puVar3 = puVar4;
  if (uVar12 < uVar7) {
    puVar3 = puVar2;
  }
  param_3[0xd] = puVar10[1];
  if (uVar12 >= uVar7) {
    puVar4 = puVar2;
  }
  param_3[0xe] = uVar11;
  puVar10 = param_3 + 0xc;
  *puVar10 = uVar13;
  uVar7 = puVar3[1];
  uVar12 = puVar3[2];
  param_3[0xf] = *puVar3;
  param_3[0x11] = uVar12;
  param_3[0x10] = uVar7;
  uVar12 = puVar4[1];
  uVar7 = puVar4[2];
  param_3[0x12] = *puVar4;
  param_3[0x13] = uVar12;
  param_3[0x14] = uVar7;
  uVar12 = *puVar1;
  uVar7 = puVar1[2];
  param_3[0x16] = puVar1[1];
  puVar2 = param_3 + 0x15;
  *puVar2 = uVar12;
  param_3[0x17] = uVar7;
  bVar15 = *puVar10 < *param_3;
  puVar3 = param_3;
  if (bVar15) {
    puVar3 = puVar10;
  }
  uVar7 = puVar3[1];
  uVar12 = puVar3[2];
  *param_2 = *puVar3;
  param_2[1] = uVar7;
  param_2[2] = uVar12;
  uVar12 = *puVar14;
  uVar7 = *puVar2;
  puVar3 = puVar2;
  if (uVar7 < uVar12) {
    puVar3 = puVar14;
  }
  uVar11 = *puVar3;
  uVar13 = puVar3[1];
  param_2[0x17] = puVar3[2];
  param_2[0x15] = uVar11;
  param_2[0x16] = uVar13;
  iVar5 = 0;
  puVar10 = puVar10 + ((uint)bVar15 | (uint)bVar15 << 1);
  iVar8 = 0;
  param_3 = param_3 + ((uint)!bVar15 | (uint)!bVar15 << 1);
  if (uVar7 < uVar12) {
    iVar8 = -1;
  }
  else {
    iVar5 = -1;
  }
  bVar15 = *param_3 <= *puVar10;
  puVar3 = param_3;
  if (!bVar15) {
    puVar3 = puVar10;
  }
  uVar12 = *puVar3;
  uVar7 = puVar3[1];
  param_2[5] = puVar3[2];
  param_2[3] = uVar12;
  param_2[4] = uVar7;
  puVar14 = puVar14 + iVar8 * 3;
  uVar12 = *puVar14;
  puVar2 = puVar2 + iVar5 * 3;
  uVar7 = *puVar2;
  puVar3 = puVar2;
  if (uVar7 < uVar12) {
    puVar3 = puVar14;
  }
  uVar11 = *puVar3;
  uVar13 = puVar3[1];
  param_2[0x14] = puVar3[2];
  param_2[0x12] = uVar11;
  param_2[0x13] = uVar13;
  iVar5 = 0;
  puVar10 = puVar10 + ((uint)!bVar15 | (uint)!bVar15 << 1);
  iVar8 = 0;
  param_3 = param_3 + ((uint)bVar15 | (uint)bVar15 << 1);
  if (uVar7 < uVar12) {
    iVar8 = -1;
  }
  else {
    iVar5 = -1;
  }
  bVar15 = *param_3 <= *puVar10;
  puVar3 = param_3;
  if (!bVar15) {
    puVar3 = puVar10;
  }
  uVar12 = *puVar3;
  uVar7 = puVar3[1];
  param_2[8] = puVar3[2];
  param_2[6] = uVar12;
  param_2[7] = uVar7;
  puVar14 = puVar14 + iVar8 * 3;
  uVar12 = *puVar14;
  puVar2 = puVar2 + iVar5 * 3;
  uVar7 = *puVar2;
  puVar3 = puVar2;
  if (uVar7 < uVar12) {
    puVar3 = puVar14;
  }
  uVar11 = *puVar3;
  uVar13 = puVar3[1];
  param_2[0x11] = puVar3[2];
  param_2[0xf] = uVar11;
  param_2[0x10] = uVar13;
  iVar5 = 0;
  puVar10 = puVar10 + ((uint)!bVar15 | (uint)!bVar15 << 1);
  iVar8 = 0;
  param_3 = param_3 + ((uint)bVar15 | (uint)bVar15 << 1);
  if (uVar7 < uVar12) {
    iVar8 = -1;
  }
  else {
    iVar5 = -1;
  }
  bVar15 = *param_3 <= *puVar10;
  puVar3 = param_3;
  if (!bVar15) {
    puVar3 = puVar10;
  }
  uVar12 = *puVar3;
  uVar7 = puVar3[1];
  param_2[0xb] = puVar3[2];
  param_2[9] = uVar12;
  param_2[10] = uVar7;
  puVar2 = puVar2 + iVar5 * 3;
  puVar14 = puVar14 + iVar8 * 3;
  bVar16 = *puVar2 < *puVar14;
  puVar3 = puVar2;
  if (bVar16) {
    puVar3 = puVar14;
  }
  param_3 = param_3 + ((uint)bVar15 | (uint)bVar15 << 1);
  uVar7 = *puVar3;
  uVar12 = puVar3[2];
  param_2[0xd] = puVar3[1];
  iVar5 = 0;
  if (bVar16) {
    iVar5 = -1;
  }
  param_2[0xe] = uVar12;
  iVar8 = 0;
  if (!bVar16) {
    iVar8 = -1;
  }
  param_2[0xc] = uVar7;
  bVar16 = param_3 == puVar14 + iVar5 * 3 + 3;
  if (bVar16) {
    param_3 = puVar10 + ((uint)!bVar15 | (uint)!bVar15 << 1);
    puVar2 = puVar2 + iVar8 * 3 + 3;
  }
  if (!bVar16 || param_3 != puVar2) {
    FUN_00fb7254();
  }
  return;
}

