// FUN_00b8c0f4 @ 00b8c0f4 size=1800 calls_out=1 calls_in=6
// strings: 

void FUN_00b8c0f4(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  bVar16 = param_1[8] <= param_1[0xc];
  if (param_1[0xc] == param_1[8]) {
    bVar16 = param_1[9] <= param_1[0xd];
  }
  bVar17 = *param_1 <= param_1[4];
  if (param_1[4] == *param_1) {
    bVar17 = param_1[1] <= param_1[5];
  }
  uVar9 = (uint)!bVar17;
  puVar2 = param_1 + uVar9 * 4;
  uVar8 = 2;
  if (!bVar16) {
    uVar8 = 3;
  }
  uVar3 = 3;
  if (!bVar16) {
    uVar3 = 2;
  }
  puVar6 = param_1 + uVar3 * 4;
  uVar4 = uVar9 ^ 1;
  puVar5 = param_1 + uVar8 * 4;
  puVar7 = param_1 + uVar4 * 4;
  bVar16 = *puVar2 <= *puVar5;
  if (*puVar5 == *puVar2) {
    bVar16 = puVar2[1] <= puVar5[1];
  }
  puVar14 = puVar5;
  uVar10 = uVar8;
  if (!bVar16) {
    puVar14 = puVar7;
    uVar10 = uVar4;
  }
  bVar17 = *puVar7 <= *puVar6;
  if (*puVar6 == *puVar7) {
    bVar17 = puVar7[1] <= puVar6[1];
  }
  puVar11 = puVar7;
  puVar12 = puVar6;
  if (!bVar17) {
    puVar11 = puVar5;
    uVar10 = uVar3;
    puVar12 = puVar7;
    puVar14 = puVar6;
  }
  uVar3 = param_1[uVar10 * 4];
  uVar10 = puVar14[1];
  if (bVar17) {
    uVar8 = uVar4;
  }
  if (bVar16) {
    puVar5 = puVar2;
    puVar2 = puVar11;
    uVar9 = uVar8;
  }
  uVar13 = param_1[uVar9 * 4];
  uVar9 = puVar2[1];
  uVar4 = *puVar5;
  uVar15 = puVar5[1];
  uVar8 = puVar5[3];
  param_3[2] = puVar5[2];
  *param_3 = uVar4;
  bVar16 = uVar13 <= uVar3;
  if (uVar3 == uVar13) {
    bVar16 = uVar9 <= uVar10;
  }
  if (bVar16) {
    puVar5 = puVar2;
    puVar2 = puVar14;
  }
  else {
    puVar5 = puVar14;
  }
  uVar3 = *puVar5;
  uVar4 = puVar5[2];
  param_3[3] = uVar8;
  param_3[1] = uVar15;
  uVar10 = puVar5[1];
  uVar9 = puVar5[3];
  param_3[6] = uVar4;
  param_3[4] = uVar3;
  uVar8 = *puVar2;
  uVar3 = puVar2[2];
  param_3[7] = uVar9;
  param_3[5] = uVar10;
  uVar9 = puVar2[1];
  uVar4 = puVar2[3];
  param_3[8] = uVar8;
  param_3[9] = uVar9;
  param_3[10] = uVar3;
  param_3[0xb] = uVar4;
  uVar9 = *puVar12;
  uVar8 = puVar12[2];
  uVar3 = puVar12[3];
  param_3[0xd] = puVar12[1];
  param_3[0xe] = uVar8;
  param_3[0xf] = uVar3;
  puVar2 = param_3 + 0xc;
  *puVar2 = uVar9;
  puVar5 = param_1 + 0x10;
  bVar16 = *puVar5 <= param_1[0x14];
  if (param_1[0x14] == *puVar5) {
    bVar16 = param_1[0x11] <= param_1[0x15];
  }
  uVar9 = (uint)!bVar16;
  bVar16 = param_1[0x18] <= param_1[0x1c];
  if (param_1[0x1c] == param_1[0x18]) {
    bVar16 = param_1[0x19] <= param_1[0x1d];
  }
  uVar3 = 2;
  uVar8 = uVar9 ^ 1;
  if (!bVar16) {
    uVar3 = 3;
  }
  puVar7 = puVar5 + uVar3 * 4;
  uVar4 = 3;
  if (!bVar16) {
    uVar4 = 2;
  }
  puVar6 = puVar5 + uVar9 * 4;
  puVar14 = puVar5 + uVar8 * 4;
  puVar12 = puVar5 + uVar4 * 4;
  bVar16 = *puVar6 <= *puVar7;
  if (*puVar7 == *puVar6) {
    bVar16 = puVar6[1] <= puVar7[1];
  }
  puVar11 = puVar7;
  uVar10 = uVar3;
  if (!bVar16) {
    puVar11 = puVar14;
    uVar10 = uVar8;
  }
  bVar17 = *puVar14 <= *puVar12;
  if (*puVar12 == *puVar14) {
    bVar17 = puVar14[1] <= puVar12[1];
  }
  if (bVar17) {
    puVar1 = puVar14;
    puVar14 = puVar12;
  }
  else {
    uVar8 = uVar3;
    uVar10 = uVar4;
    puVar1 = puVar7;
    puVar11 = puVar12;
  }
  if (bVar16) {
    puVar7 = puVar6;
    puVar6 = puVar1;
    uVar9 = uVar8;
  }
  uVar15 = puVar5[uVar9 * 4];
  uVar10 = puVar5[uVar10 * 4];
  uVar3 = puVar6[1];
  uVar9 = puVar11[1];
  uVar8 = *puVar7;
  uVar4 = puVar7[1];
  uVar13 = puVar7[3];
  param_3[0x12] = puVar7[2];
  bVar16 = uVar15 <= uVar10;
  if (uVar10 == uVar15) {
    bVar16 = uVar3 <= uVar9;
  }
  puVar5 = param_3 + 0x10;
  *puVar5 = uVar8;
  if (bVar16) {
    puVar7 = puVar11;
  }
  else {
    puVar7 = puVar6;
    puVar6 = puVar11;
  }
  uVar3 = *puVar6;
  uVar8 = puVar6[2];
  param_3[0x11] = uVar4;
  param_3[0x13] = uVar13;
  uVar10 = puVar6[1];
  uVar9 = puVar6[3];
  param_3[0x16] = uVar8;
  param_3[0x14] = uVar3;
  uVar8 = *puVar7;
  uVar4 = puVar7[2];
  param_3[0x15] = uVar10;
  param_3[0x17] = uVar9;
  uVar9 = puVar7[1];
  uVar3 = puVar7[3];
  param_3[0x18] = uVar8;
  param_3[0x19] = uVar9;
  param_3[0x1a] = uVar4;
  param_3[0x1b] = uVar3;
  uVar9 = puVar14[1];
  uVar3 = puVar14[2];
  uVar8 = puVar14[3];
  puVar7 = param_3 + 0x1c;
  *puVar7 = *puVar14;
  param_3[0x1d] = uVar9;
  param_3[0x1e] = uVar3;
  bVar16 = *param_3 <= *puVar5;
  if (*puVar5 == *param_3) {
    bVar16 = param_3[1] <= param_3[0x11];
  }
  uVar9 = (uint)!bVar16;
  param_3[0x1f] = uVar8;
  puVar6 = param_3;
  if (uVar9 != 0) {
    puVar6 = puVar5;
  }
  uVar4 = *puVar6;
  uVar3 = puVar6[2];
  uVar8 = puVar6[3];
  param_2[1] = puVar6[1];
  param_2[3] = uVar8;
  param_2[2] = uVar3;
  *param_2 = uVar4;
  bVar16 = *puVar2 <= *puVar7;
  if (*puVar7 == *puVar2) {
    bVar16 = param_3[0xd] <= param_3[0x1d];
  }
  uVar8 = (uint)!bVar16;
  puVar6 = puVar7;
  if (uVar8 != 0) {
    puVar6 = puVar2;
  }
  uVar4 = *puVar6;
  uVar3 = puVar6[1];
  uVar10 = puVar6[2];
  param_2[0x1f] = puVar6[3];
  param_2[0x1e] = uVar10;
  param_2[0x1d] = uVar3;
  param_2[0x1c] = uVar4;
  puVar5 = puVar5 + uVar9 * 4;
  param_3 = param_3 + (uVar9 ^ 1) * 4;
  bVar16 = *param_3 <= *puVar5;
  if (*puVar5 == *param_3) {
    bVar16 = param_3[1] <= puVar5[1];
  }
  uVar9 = (uint)!bVar16;
  puVar6 = param_3;
  if (uVar9 != 0) {
    puVar6 = puVar5;
  }
  uVar10 = puVar6[1];
  uVar4 = puVar6[2];
  uVar3 = puVar6[3];
  param_2[4] = *puVar6;
  param_2[7] = uVar3;
  param_2[6] = uVar4;
  param_2[5] = uVar10;
  puVar6 = puVar7 + uVar8 * 4 + -4;
  puVar2 = puVar2 + uVar8 * -4;
  bVar16 = *puVar2 <= *puVar6;
  if (*puVar6 == *puVar2) {
    bVar16 = puVar2[1] <= puVar7[uVar8 * 4 + -3];
  }
  uVar8 = (uint)!bVar16;
  puVar7 = puVar6;
  if (uVar8 != 0) {
    puVar7 = puVar2;
  }
  uVar4 = puVar7[1];
  uVar10 = *puVar7;
  uVar3 = puVar7[3];
  param_2[0x1a] = puVar7[2];
  param_2[0x1b] = uVar3;
  param_2[0x19] = uVar4;
  param_2[0x18] = uVar10;
  puVar5 = puVar5 + uVar9 * 4;
  param_3 = param_3 + (uVar9 ^ 1) * 4;
  bVar16 = *param_3 <= *puVar5;
  if (*puVar5 == *param_3) {
    bVar16 = param_3[1] <= puVar5[1];
  }
  uVar9 = (uint)!bVar16;
  puVar7 = param_3;
  if (uVar9 != 0) {
    puVar7 = puVar5;
  }
  uVar10 = *puVar7;
  uVar3 = puVar7[1];
  uVar4 = puVar7[2];
  param_2[0xb] = puVar7[3];
  param_2[10] = uVar4;
  param_2[9] = uVar3;
  param_2[8] = uVar10;
  puVar7 = puVar6 + uVar8 * 4 + -4;
  puVar2 = puVar2 + uVar8 * -4;
  bVar16 = *puVar2 <= *puVar7;
  if (*puVar7 == *puVar2) {
    bVar16 = puVar2[1] <= puVar6[uVar8 * 4 + -3];
  }
  uVar8 = (uint)!bVar16;
  puVar6 = puVar7;
  if (uVar8 != 0) {
    puVar6 = puVar2;
  }
  uVar4 = puVar6[1];
  uVar10 = *puVar6;
  uVar3 = puVar6[3];
  param_2[0x16] = puVar6[2];
  param_2[0x17] = uVar3;
  param_2[0x15] = uVar4;
  param_2[0x14] = uVar10;
  puVar5 = puVar5 + uVar9 * 4;
  param_3 = param_3 + (uVar9 ^ 1) * 4;
  bVar16 = *param_3 <= *puVar5;
  if (*puVar5 == *param_3) {
    bVar16 = param_3[1] <= puVar5[1];
  }
  uVar9 = (uint)!bVar16;
  puVar6 = param_3;
  if (uVar9 != 0) {
    puVar6 = puVar5;
  }
  uVar10 = *puVar6;
  uVar4 = puVar6[1];
  uVar3 = puVar6[3];
  param_2[0xe] = puVar6[2];
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar4;
  param_2[0xf] = uVar3;
  puVar2 = puVar2 + uVar8 * -4;
  puVar6 = puVar7 + uVar8 * 4 + -4;
  bVar16 = *puVar2 <= *puVar6;
  if (*puVar6 == *puVar2) {
    bVar16 = puVar2[1] <= puVar7[uVar8 * 4 + -3];
  }
  uVar8 = (uint)!bVar16;
  puVar7 = puVar6;
  if (uVar8 != 0) {
    puVar7 = puVar2;
  }
  uVar10 = *puVar7;
  uVar4 = puVar7[1];
  uVar3 = puVar7[2];
  param_2[0x13] = puVar7[3];
  param_2[0x12] = uVar3;
  param_3 = param_3 + (uVar9 ^ 1) * 4;
  puVar2 = puVar2 + uVar8 * -4 + 4;
  param_2[0x11] = uVar4;
  bVar16 = param_3 == puVar2;
  param_2[0x10] = uVar10;
  if (bVar16) {
    puVar2 = puVar5 + uVar9 * 4;
    param_3 = puVar6 + uVar8 * 4;
  }
  if (!bVar16 || puVar2 != param_3) {
    FUN_00fb7254();
  }
  return;
}

