// FUN_008c4240 @ 008c4240 size=1176 calls_out=1 calls_in=1
// strings: 

void FUN_008c4240(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  bool bVar19;
  
  iVar13 = 0x30;
  bVar18 = *(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0xc);
  puVar10 = (undefined4 *)(param_1 + (uint)bVar18 * 0x10);
  bVar19 = *(uint *)(param_1 + 0x3c) < *(uint *)(param_1 + 0x2c);
  puVar6 = (undefined4 *)(param_1 + (uint)!bVar18 * 0x10);
  iVar2 = 0x30;
  iVar8 = 0x20;
  if (bVar19) {
    iVar2 = 0x20;
  }
  puVar15 = (undefined4 *)(param_1 + iVar2);
  if (bVar19) {
    iVar8 = 0x30;
  }
  puVar3 = (undefined4 *)(param_1 + iVar8);
  puVar1 = puVar6 + 3;
  puVar9 = puVar6;
  puVar5 = puVar15;
  if ((uint)puVar15[3] < *puVar1) {
    puVar9 = puVar3;
    puVar5 = puVar6;
  }
  if ((uint)puVar3[3] < (uint)puVar10[3]) {
    puVar11 = puVar3;
  }
  else {
    puVar11 = puVar10;
    puVar6 = puVar3;
    puVar10 = puVar9;
  }
  if ((uint)puVar15[3] < *puVar1) {
    puVar6 = puVar15;
  }
  uVar14 = *puVar11;
  uVar16 = puVar11[1];
  uVar17 = puVar11[2];
  uVar12 = puVar10[3];
  uVar4 = puVar6[3];
  param_3[3] = puVar11[3];
  *param_3 = uVar14;
  param_3[1] = uVar16;
  param_3[2] = uVar17;
  puVar15 = puVar10;
  if (uVar4 < uVar12) {
    puVar15 = puVar6;
  }
  uVar14 = *puVar15;
  if (uVar4 < uVar12) {
    puVar6 = puVar10;
  }
  uVar16 = puVar15[2];
  uVar17 = puVar15[3];
  param_3[5] = puVar15[1];
  param_3[7] = uVar17;
  param_3[6] = uVar16;
  param_3[4] = uVar14;
  uVar17 = puVar6[1];
  uVar14 = puVar6[2];
  uVar16 = puVar6[3];
  param_3[8] = *puVar6;
  param_3[9] = uVar17;
  param_3[10] = uVar14;
  param_3[0xb] = uVar16;
  uVar17 = *puVar5;
  uVar16 = puVar5[2];
  uVar14 = puVar5[3];
  param_3[0xd] = puVar5[1];
  param_3[0xe] = uVar16;
  param_3[0xf] = uVar14;
  puVar6 = param_3 + 0xc;
  *puVar6 = uVar17;
  bVar18 = *(uint *)(param_1 + 0x4c) <= *(uint *)(param_1 + 0x5c);
  iVar2 = param_1 + 0x40;
  puVar10 = (undefined4 *)(iVar2 + (uint)bVar18 * 0x10);
  bVar19 = *(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x6c);
  puVar15 = (undefined4 *)(iVar2 + (uint)!bVar18 * 0x10);
  iVar8 = 0x20;
  if (bVar19) {
    iVar8 = 0x30;
  }
  puVar5 = (undefined4 *)(iVar2 + iVar8);
  if (bVar19) {
    iVar13 = 0x20;
  }
  puVar3 = (undefined4 *)(iVar2 + iVar13);
  puVar9 = puVar5;
  if ((uint)puVar5[3] < (uint)puVar15[3]) {
    puVar9 = puVar10;
  }
  puVar7 = puVar10;
  puVar11 = puVar3;
  if ((uint)puVar3[3] < (uint)puVar10[3]) {
    puVar7 = puVar5;
    puVar11 = puVar10;
    puVar9 = puVar3;
  }
  if ((uint)puVar5[3] < (uint)puVar15[3]) {
    puVar7 = puVar15;
  }
  else {
    puVar5 = puVar15;
  }
  uVar12 = puVar9[3];
  uVar4 = puVar7[3];
  uVar17 = *puVar5;
  uVar16 = puVar5[1];
  uVar14 = puVar5[2];
  param_3[0x13] = puVar5[3];
  param_3[0x11] = uVar16;
  puVar10 = puVar7;
  if (uVar12 < uVar4) {
    puVar10 = puVar9;
  }
  param_3[0x12] = uVar14;
  if (uVar12 >= uVar4) {
    puVar7 = puVar9;
  }
  puVar5 = param_3 + 0x10;
  *puVar5 = uVar17;
  uVar17 = *puVar10;
  uVar14 = puVar10[1];
  uVar16 = puVar10[2];
  param_3[0x17] = puVar10[3];
  param_3[0x16] = uVar16;
  param_3[0x15] = uVar14;
  param_3[0x14] = uVar17;
  uVar14 = *puVar7;
  uVar17 = puVar7[2];
  uVar16 = puVar7[3];
  param_3[0x19] = puVar7[1];
  param_3[0x1a] = uVar17;
  param_3[0x1b] = uVar16;
  param_3[0x18] = uVar14;
  uVar14 = *puVar11;
  uVar17 = puVar11[1];
  uVar16 = puVar11[2];
  param_3[0x1f] = puVar11[3];
  param_3[0x1d] = uVar17;
  puVar15 = param_3 + 0x1c;
  *puVar15 = uVar14;
  param_3[0x1e] = uVar16;
  bVar18 = (uint)param_3[0x13] < (uint)param_3[3];
  puVar10 = param_3;
  if (bVar18) {
    puVar10 = puVar5;
  }
  uVar17 = *puVar10;
  uVar16 = puVar10[1];
  uVar14 = puVar10[3];
  param_2[2] = puVar10[2];
  param_2[1] = uVar16;
  param_2[3] = uVar14;
  *param_2 = uVar17;
  uVar4 = param_3[0xf];
  puVar5 = puVar5 + (uint)bVar18 * 4;
  uVar12 = param_3[0x1f];
  iVar2 = 0;
  puVar10 = puVar6;
  if (uVar12 >= uVar4) {
    iVar2 = -1;
    puVar10 = puVar15;
  }
  uVar16 = puVar10[1];
  puVar15 = puVar15 + iVar2 * 4;
  uVar17 = *puVar10;
  uVar14 = puVar10[3];
  param_2[0x1e] = puVar10[2];
  param_3 = param_3 + (uint)!bVar18 * 4;
  param_2[0x1d] = uVar16;
  iVar2 = 0;
  param_2[0x1f] = uVar14;
  if (uVar12 < uVar4) {
    iVar2 = -1;
  }
  param_2[0x1c] = uVar17;
  puVar6 = puVar6 + iVar2 * 4;
  bVar18 = (uint)param_3[3] <= (uint)puVar5[3];
  puVar10 = puVar5;
  if (bVar18) {
    puVar10 = param_3;
  }
  uVar17 = *puVar10;
  uVar16 = puVar10[1];
  uVar14 = puVar10[2];
  param_2[7] = puVar10[3];
  param_2[6] = uVar14;
  param_2[5] = uVar16;
  param_2[4] = uVar17;
  bVar19 = (uint)puVar6[3] <= (uint)puVar15[3];
  puVar10 = puVar15;
  if (!bVar19) {
    puVar10 = puVar6;
  }
  uVar17 = *puVar10;
  uVar14 = puVar10[1];
  uVar16 = puVar10[2];
  param_2[0x1b] = puVar10[3];
  param_3 = param_3 + (uint)bVar18 * 4;
  param_2[0x18] = uVar17;
  puVar5 = puVar5 + (uint)!bVar18 * 4;
  param_2[0x19] = uVar14;
  iVar8 = 0;
  param_2[0x1a] = uVar16;
  iVar2 = 0;
  if (bVar19) {
    iVar8 = -1;
  }
  if (!bVar19) {
    iVar2 = -1;
  }
  puVar15 = puVar15 + iVar8 * 4;
  bVar18 = (uint)puVar5[3] < (uint)param_3[3];
  puVar10 = param_3;
  if (bVar18) {
    puVar10 = puVar5;
  }
  puVar5 = puVar5 + (uint)bVar18 * 4;
  uVar17 = puVar10[1];
  uVar16 = puVar10[2];
  uVar14 = puVar10[3];
  param_2[8] = *puVar10;
  puVar6 = puVar6 + iVar2 * 4;
  param_2[0xb] = uVar14;
  param_2[10] = uVar16;
  param_2[9] = uVar17;
  bVar19 = (uint)puVar6[3] <= (uint)puVar15[3];
  puVar10 = puVar15;
  if (!bVar19) {
    puVar10 = puVar6;
  }
  uVar17 = puVar10[1];
  uVar16 = puVar10[2];
  uVar14 = puVar10[3];
  param_2[0x14] = *puVar10;
  param_3 = param_3 + (uint)!bVar18 * 4;
  param_2[0x16] = uVar16;
  iVar8 = 0;
  param_2[0x17] = uVar14;
  iVar2 = 0;
  param_2[0x15] = uVar17;
  if (bVar19) {
    iVar8 = -1;
  }
  if (!bVar19) {
    iVar2 = -1;
  }
  puVar15 = puVar15 + iVar8 * 4;
  bVar18 = (uint)param_3[3] <= (uint)puVar5[3];
  puVar10 = param_3;
  if (!bVar18) {
    puVar10 = puVar5;
  }
  uVar17 = *puVar10;
  uVar16 = puVar10[1];
  uVar14 = puVar10[2];
  param_2[0xf] = puVar10[3];
  puVar6 = puVar6 + iVar2 * 4;
  param_2[0xd] = uVar16;
  param_2[0xc] = uVar17;
  param_2[0xe] = uVar14;
  bVar19 = (uint)puVar15[3] < (uint)puVar6[3];
  puVar10 = puVar15;
  if (bVar19) {
    puVar10 = puVar6;
  }
  uVar14 = *puVar10;
  uVar16 = puVar10[1];
  uVar17 = puVar10[2];
  param_2[0x13] = puVar10[3];
  iVar2 = 0;
  if (bVar19) {
    iVar2 = -1;
  }
  puVar10 = (undefined4 *)0x0;
  puVar6 = puVar6 + iVar2 * 4 + 4;
  if (!bVar19) {
    puVar10 = (undefined4 *)0xffffffff;
  }
  bVar19 = param_3 + (uint)bVar18 * 4 == puVar6;
  param_2[0x10] = uVar14;
  param_2[0x11] = uVar16;
  param_2[0x12] = uVar17;
  if (bVar19) {
    puVar6 = puVar5 + (uint)!bVar18 * 4;
    puVar10 = puVar15 + (int)puVar10 * 4 + 4;
  }
  if (!bVar19 || puVar6 != puVar10) {
    FUN_00fb7254();
  }
  return;
}

