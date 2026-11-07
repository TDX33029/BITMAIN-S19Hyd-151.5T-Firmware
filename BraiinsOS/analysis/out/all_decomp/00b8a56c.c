// FUN_00b8a56c @ 00b8a56c size=1192 calls_out=1 calls_in=1
// strings: 

void FUN_00b8a56c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  uVar11 = (uint)(param_1[4] < *param_1);
  puVar2 = param_1 + uVar11 * 4;
  uVar15 = (uint)(param_1[4] >= *param_1);
  uVar1 = 3;
  if (param_1[0xc] < param_1[8]) {
    uVar1 = 2;
  }
  puVar16 = param_1 + uVar1 * 4;
  uVar10 = 2;
  puVar3 = param_1 + uVar15 * 4;
  if (param_1[0xc] < param_1[8]) {
    uVar10 = 3;
  }
  puVar4 = param_1 + uVar10 * 4;
  uVar12 = uVar10;
  puVar5 = puVar4;
  if (*puVar4 < *puVar2) {
    uVar12 = uVar15;
    puVar5 = puVar3;
  }
  puVar7 = puVar4;
  if (*puVar3 <= *puVar16) {
    uVar10 = uVar15;
    puVar7 = puVar3;
    puVar3 = puVar16;
    puVar16 = puVar5;
    uVar1 = uVar12;
  }
  bVar18 = *puVar2 <= *puVar4;
  if (!bVar18) {
    uVar10 = uVar11;
  }
  uVar11 = param_1[uVar10 * 4];
  uVar1 = param_1[uVar1 * 4];
  if (bVar18) {
    puVar4 = puVar2;
  }
  uVar15 = puVar4[1];
  if (!bVar18) {
    puVar7 = puVar2;
  }
  uVar12 = puVar4[2];
  uVar10 = puVar4[3];
  *param_3 = *puVar4;
  param_3[1] = uVar15;
  puVar2 = puVar7;
  if (uVar1 < uVar11) {
    puVar2 = puVar16;
  }
  param_3[2] = uVar12;
  if (uVar1 >= uVar11) {
    puVar7 = puVar16;
  }
  param_3[3] = uVar10;
  uVar1 = *puVar2;
  uVar11 = puVar2[1];
  uVar15 = puVar2[2];
  param_3[7] = puVar2[3];
  param_3[4] = uVar1;
  param_3[5] = uVar11;
  param_3[6] = uVar15;
  uVar1 = puVar7[1];
  uVar15 = puVar7[2];
  uVar11 = puVar7[3];
  param_3[8] = *puVar7;
  param_3[9] = uVar1;
  param_3[10] = uVar15;
  param_3[0xb] = uVar11;
  uVar1 = *puVar3;
  uVar15 = puVar3[2];
  uVar11 = puVar3[3];
  param_3[0xd] = puVar3[1];
  puVar2 = param_3 + 0xc;
  *puVar2 = uVar1;
  param_3[0xe] = uVar15;
  param_3[0xf] = uVar11;
  puVar3 = param_1 + 0x10;
  uVar10 = (uint)(param_1[0x14] < *puVar3);
  uVar15 = (uint)(param_1[0x14] >= *puVar3);
  uVar1 = 3;
  uVar11 = 2;
  if (param_1[0x1c] < param_1[0x18]) {
    uVar1 = 2;
    uVar11 = 3;
  }
  puVar5 = puVar3 + uVar1 * 4;
  puVar14 = puVar3 + uVar10 * 4;
  uVar13 = *puVar14;
  puVar4 = puVar3 + uVar11 * 4;
  uVar17 = *puVar4;
  puVar16 = puVar3 + uVar15 * 4;
  puVar7 = puVar4;
  uVar12 = uVar11;
  if (uVar17 < uVar13) {
    puVar7 = puVar16;
    uVar12 = uVar15;
  }
  if (*puVar5 < *puVar16) {
    puVar8 = puVar4;
  }
  else {
    puVar8 = puVar16;
    uVar1 = uVar12;
    puVar16 = puVar5;
    puVar5 = puVar7;
    uVar11 = uVar15;
  }
  uVar1 = puVar3[uVar1 * 4];
  if (uVar17 < uVar13) {
    uVar11 = uVar10;
  }
  else {
    puVar4 = puVar14;
  }
  uVar11 = puVar3[uVar11 * 4];
  if (uVar17 < uVar13) {
    puVar8 = puVar14;
  }
  uVar15 = *puVar4;
  uVar10 = puVar4[2];
  uVar12 = puVar4[3];
  param_3[0x11] = puVar4[1];
  param_3[0x12] = uVar10;
  param_3[0x13] = uVar12;
  puVar3 = puVar8;
  if (uVar1 < uVar11) {
    puVar3 = puVar5;
  }
  puVar4 = param_3 + 0x10;
  *puVar4 = uVar15;
  uVar15 = *puVar3;
  if (uVar1 >= uVar11) {
    puVar8 = puVar5;
  }
  uVar11 = puVar3[1];
  uVar1 = puVar3[3];
  param_3[0x16] = puVar3[2];
  param_3[0x14] = uVar15;
  param_3[0x15] = uVar11;
  param_3[0x17] = uVar1;
  uVar1 = puVar8[1];
  uVar15 = puVar8[2];
  uVar11 = puVar8[3];
  param_3[0x18] = *puVar8;
  param_3[0x19] = uVar1;
  param_3[0x1a] = uVar15;
  param_3[0x1b] = uVar11;
  uVar1 = *puVar16;
  uVar15 = puVar16[2];
  uVar11 = puVar16[3];
  param_3[0x1d] = puVar16[1];
  param_3[0x1e] = uVar15;
  puVar16 = param_3 + 0x1c;
  *puVar16 = uVar1;
  bVar18 = *param_3 <= *puVar4;
  puVar3 = param_3;
  if (!bVar18) {
    puVar3 = puVar4;
  }
  param_3[0x1f] = uVar11;
  uVar15 = *puVar3;
  uVar11 = puVar3[1];
  uVar1 = puVar3[3];
  param_2[2] = puVar3[2];
  param_2[1] = uVar11;
  param_2[3] = uVar1;
  *param_2 = uVar15;
  uVar1 = *puVar2;
  uVar11 = *puVar16;
  puVar3 = puVar16;
  if (uVar11 < uVar1) {
    puVar3 = puVar2;
  }
  uVar12 = *puVar3;
  uVar15 = puVar3[1];
  uVar10 = puVar3[2];
  param_2[0x1f] = puVar3[3];
  param_2[0x1e] = uVar10;
  param_2[0x1d] = uVar15;
  param_2[0x1c] = uVar12;
  puVar4 = puVar4 + (uint)!bVar18 * 4;
  iVar6 = 0;
  param_3 = param_3 + (uint)bVar18 * 4;
  iVar9 = 0;
  if (uVar11 < uVar1) {
    iVar6 = -1;
  }
  else {
    iVar9 = -1;
  }
  bVar18 = *param_3 <= *puVar4;
  puVar3 = param_3;
  if (!bVar18) {
    puVar3 = puVar4;
  }
  uVar15 = *puVar3;
  uVar1 = puVar3[1];
  uVar11 = puVar3[2];
  param_2[7] = puVar3[3];
  param_2[6] = uVar11;
  param_2[5] = uVar1;
  param_2[4] = uVar15;
  puVar2 = puVar2 + iVar6 * 4;
  uVar1 = *puVar2;
  puVar16 = puVar16 + iVar9 * 4;
  uVar11 = *puVar16;
  puVar3 = puVar16;
  if (uVar11 < uVar1) {
    puVar3 = puVar2;
  }
  uVar12 = *puVar3;
  uVar15 = puVar3[1];
  uVar10 = puVar3[2];
  param_2[0x1b] = puVar3[3];
  param_2[0x1a] = uVar10;
  param_2[0x19] = uVar15;
  param_2[0x18] = uVar12;
  puVar4 = puVar4 + (uint)!bVar18 * 4;
  iVar6 = 0;
  param_3 = param_3 + (uint)bVar18 * 4;
  iVar9 = 0;
  if (uVar11 < uVar1) {
    iVar6 = -1;
  }
  else {
    iVar9 = -1;
  }
  bVar18 = *param_3 <= *puVar4;
  puVar3 = param_3;
  if (!bVar18) {
    puVar3 = puVar4;
  }
  uVar15 = *puVar3;
  uVar1 = puVar3[1];
  uVar11 = puVar3[2];
  param_2[0xb] = puVar3[3];
  param_2[10] = uVar11;
  param_2[9] = uVar1;
  param_2[8] = uVar15;
  puVar2 = puVar2 + iVar6 * 4;
  uVar1 = *puVar2;
  puVar16 = puVar16 + iVar9 * 4;
  uVar11 = *puVar16;
  puVar3 = puVar16;
  if (uVar11 < uVar1) {
    puVar3 = puVar2;
  }
  uVar12 = *puVar3;
  uVar15 = puVar3[1];
  uVar10 = puVar3[2];
  param_2[0x17] = puVar3[3];
  param_2[0x16] = uVar10;
  param_2[0x15] = uVar15;
  param_2[0x14] = uVar12;
  puVar4 = puVar4 + (uint)!bVar18 * 4;
  iVar6 = 0;
  param_3 = param_3 + (uint)bVar18 * 4;
  iVar9 = 0;
  if (uVar11 < uVar1) {
    iVar6 = -1;
  }
  else {
    iVar9 = -1;
  }
  bVar18 = *puVar4 < *param_3;
  puVar3 = param_3;
  if (bVar18) {
    puVar3 = puVar4;
  }
  uVar15 = *puVar3;
  uVar11 = puVar3[2];
  uVar1 = puVar3[3];
  param_2[0xd] = puVar3[1];
  param_2[0xf] = uVar1;
  param_2[0xe] = uVar11;
  param_2[0xc] = uVar15;
  puVar16 = puVar16 + iVar9 * 4;
  puVar2 = puVar2 + iVar6 * 4;
  bVar19 = *puVar16 < *puVar2;
  puVar3 = puVar16;
  if (bVar19) {
    puVar3 = puVar2;
  }
  uVar11 = puVar3[1];
  uVar15 = puVar3[2];
  uVar1 = puVar3[3];
  param_2[0x10] = *puVar3;
  iVar9 = 0;
  if (bVar19) {
    iVar9 = -1;
  }
  param_2[0x13] = uVar1;
  puVar3 = (uint *)0x0;
  puVar5 = puVar2 + iVar9 * 4 + 4;
  if (!bVar19) {
    puVar3 = (uint *)0xffffffff;
  }
  param_2[0x11] = uVar11;
  if (param_3 + (uint)!bVar18 * 4 == puVar5) {
    puVar2 = puVar4 + (uint)bVar18 * 4;
    puVar3 = puVar16 + (int)puVar3 * 4 + 4;
  }
  param_2[0x12] = uVar15;
  if (param_3 + (uint)!bVar18 * 4 != puVar5 || puVar2 != puVar3) {
    FUN_00fb7254();
  }
  return;
}

