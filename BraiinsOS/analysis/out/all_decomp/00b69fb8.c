// FUN_00b69fb8 @ 00b69fb8 size=1584 calls_out=1 calls_in=1
// strings: 

void FUN_00b69fb8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  bool bVar22;
  byte in_Q;
  
  uVar2 = *(uint *)(param_1 + 0x1c) & 0x7fffffff;
  uVar9 = *(uint *)(param_1 + 0xc) & 0x7fffffff;
  bVar22 = (uint)(*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 8)) <= uVar9 - uVar2;
  puVar18 = (undefined4 *)(param_1 + (uint)(uVar9 <= uVar2 && bVar22) * 0x10);
  uVar7 = *(uint *)(param_1 + 0x3c) & 0x7fffffff;
  uVar10 = *(uint *)(param_1 + 0x2c) & 0x7fffffff;
  iVar11 = 0x30;
  iVar14 = 0x20;
  if (uVar10 <= uVar7 &&
      (uint)(*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x28)) <= uVar10 - uVar7) {
    iVar11 = 0x20;
    iVar14 = 0x30;
  }
  puVar12 = (undefined4 *)(param_1 + iVar11);
  puVar15 = (undefined4 *)(param_1 + iVar14);
  puVar3 = (undefined4 *)(param_1 + (uint)(uVar9 > uVar2 || !bVar22) * 0x10);
  uVar2 = puVar18[3] & 0x7fffffff;
  uVar7 = puVar15[3] & 0x7fffffff;
  bVar22 = uVar2 - uVar7 < (uint)((uint)puVar15[2] <= (uint)puVar18[2]);
  puVar5 = puVar15;
  if (uVar7 >= uVar2 && !bVar22) {
    puVar5 = puVar3;
  }
  puVar4 = puVar3;
  puVar8 = puVar12;
  if ((puVar3[3] & 0x7fffffff) <= (puVar12[3] & 0x7fffffff) &&
      (uint)((uint)puVar12[2] <= (uint)puVar3[2]) <=
      (puVar3[3] & 0x7fffffff) - (puVar12[3] & 0x7fffffff)) {
    puVar4 = puVar15;
    puVar8 = puVar3;
    puVar5 = puVar12;
  }
  if ((((byte)((uVar7 < uVar2 || bVar22) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
    puVar4 = puVar18;
  }
  else {
    puVar15 = puVar18;
  }
  uVar13 = puVar15[1];
  uVar7 = puVar5[2];
  uVar9 = puVar5[3];
  uVar10 = puVar4[2];
  uVar2 = puVar4[3];
  uVar17 = puVar15[2];
  uVar20 = puVar15[3];
  *param_3 = *puVar15;
  param_3[2] = uVar17;
  if ((uVar9 & 0x7fffffff) < (uVar2 & 0x7fffffff) ||
      (uVar2 & 0x7fffffff) - (uVar9 & 0x7fffffff) < (uint)(uVar7 <= uVar10)) {
    puVar18 = puVar4;
    puVar4 = puVar5;
  }
  else {
    puVar18 = puVar5;
  }
  uVar17 = *puVar18;
  uVar19 = puVar18[2];
  param_3[3] = uVar20;
  param_3[1] = uVar13;
  uVar21 = puVar18[1];
  uVar13 = puVar18[3];
  param_3[4] = uVar17;
  param_3[6] = uVar19;
  uVar20 = *puVar4;
  uVar17 = puVar4[2];
  param_3[5] = uVar21;
  param_3[7] = uVar13;
  uVar19 = puVar4[1];
  uVar13 = puVar4[3];
  param_3[8] = uVar20;
  param_3[9] = uVar19;
  param_3[10] = uVar17;
  param_3[0xb] = uVar13;
  uVar13 = *puVar8;
  uVar20 = puVar8[2];
  uVar17 = puVar8[3];
  param_3[0xd] = puVar8[1];
  param_3[0xf] = uVar17;
  iVar11 = param_1 + 0x40;
  puVar18 = param_3 + 0xc;
  *puVar18 = uVar13;
  param_3[0xe] = uVar20;
  uVar7 = *(uint *)(param_1 + 0x4c) & 0x7fffffff;
  uVar2 = *(uint *)(param_1 + 0x5c) & 0x7fffffff;
  uVar9 = *(uint *)(param_1 + 0x6c) & 0x7fffffff;
  bVar22 = uVar7 - uVar2 < (uint)(*(uint *)(param_1 + 0x58) <= *(uint *)(param_1 + 0x48));
  uVar10 = *(uint *)(param_1 + 0x7c) & 0x7fffffff;
  puVar5 = (undefined4 *)(iVar11 + (uint)(uVar2 < uVar7 || bVar22) * 0x10);
  bVar1 = (uint)(*(uint *)(param_1 + 0x78) <= *(uint *)(param_1 + 0x68)) <= uVar9 - uVar10;
  iVar14 = 0x20;
  if (uVar9 <= uVar10 && bVar1) {
    iVar14 = 0x30;
  }
  puVar15 = (undefined4 *)(iVar11 + (uint)(uVar2 >= uVar7 && !bVar22) * 0x10);
  puVar3 = (undefined4 *)(iVar11 + iVar14);
  iVar14 = 0x30;
  if (uVar9 <= uVar10 && bVar1) {
    iVar14 = 0x20;
  }
  puVar8 = (undefined4 *)(iVar11 + iVar14);
  uVar2 = puVar15[3] & 0x7fffffff;
  uVar7 = puVar3[3] & 0x7fffffff;
  bVar22 = (uint)((uint)puVar3[2] <= (uint)puVar15[2]) <= uVar2 - uVar7;
  puVar12 = puVar3;
  if (uVar2 <= uVar7 && bVar22) {
    puVar12 = puVar5;
  }
  puVar6 = puVar5;
  puVar4 = puVar8;
  if ((puVar5[3] & 0x7fffffff) <= (puVar8[3] & 0x7fffffff) &&
      (uint)((uint)puVar8[2] <= (uint)puVar5[2]) <=
      (puVar5[3] & 0x7fffffff) - (puVar8[3] & 0x7fffffff)) {
    puVar6 = puVar3;
    puVar4 = puVar5;
    puVar12 = puVar8;
  }
  puVar5 = puVar15;
  if (uVar2 <= uVar7 && bVar22) {
    puVar5 = puVar3;
    puVar6 = puVar15;
  }
  uVar9 = puVar6[2];
  uVar10 = puVar6[3] & 0x7fffffff;
  uVar13 = puVar5[1];
  uVar7 = puVar12[2];
  uVar2 = puVar12[3];
  uVar17 = *puVar5;
  uVar20 = puVar5[3];
  param_3[0x12] = puVar5[2];
  uVar2 = uVar2 & 0x7fffffff;
  bVar22 = (uint)(uVar7 <= uVar9) <= uVar10 - uVar2;
  puVar15 = param_3 + 0x10;
  *puVar15 = uVar17;
  puVar5 = puVar6;
  if (uVar10 <= uVar2 && bVar22) {
    puVar5 = puVar12;
  }
  uVar17 = *puVar5;
  if (uVar10 > uVar2 || !bVar22) {
    puVar6 = puVar12;
  }
  uVar19 = puVar5[2];
  param_3[0x13] = uVar20;
  param_3[0x11] = uVar13;
  uVar20 = puVar5[1];
  uVar13 = puVar5[3];
  param_3[0x14] = uVar17;
  param_3[0x15] = uVar20;
  param_3[0x16] = uVar19;
  param_3[0x17] = uVar13;
  uVar13 = *puVar6;
  uVar20 = puVar6[2];
  uVar17 = puVar6[3];
  param_3[0x19] = puVar6[1];
  param_3[0x1a] = uVar20;
  param_3[0x1b] = uVar17;
  param_3[0x18] = uVar13;
  uVar13 = *puVar4;
  uVar17 = puVar4[1];
  uVar20 = puVar4[3];
  param_3[0x1e] = puVar4[2];
  puVar3 = param_3 + 0x1c;
  *puVar3 = uVar13;
  uVar9 = param_3[0x13] & 0x7fffffff;
  param_3[0x1f] = uVar20;
  uVar7 = param_3[3] & 0x7fffffff;
  bVar22 = uVar7 - uVar9 < (uint)((uint)param_3[0x12] <= (uint)param_3[2]);
  param_3[0x1d] = uVar17;
  uVar2 = (uint)(uVar9 >= uVar7 && !bVar22);
  puVar5 = param_3;
  if (uVar2 != 0) {
    puVar5 = puVar15;
  }
  puVar15 = puVar15 + uVar2 * 4;
  uVar20 = puVar5[1];
  puVar12 = param_3 + (uint)(uVar9 < uVar7 || bVar22) * 4;
  uVar17 = puVar5[2];
  uVar13 = puVar5[3];
  *param_2 = *puVar5;
  param_2[2] = uVar17;
  param_2[3] = uVar13;
  param_2[1] = uVar20;
  uVar2 = param_3[0xf] & 0x7fffffff;
  uVar7 = param_3[0x1f] & 0x7fffffff;
  bVar22 = uVar2 - uVar7 < (uint)((uint)param_3[0x1e] <= (uint)param_3[0xe]);
  iVar11 = 0;
  puVar5 = puVar3;
  if (uVar7 >= uVar2 && !bVar22) {
    iVar11 = -1;
    puVar5 = puVar18;
  }
  uVar20 = puVar5[1];
  uVar17 = puVar5[2];
  uVar13 = puVar5[3];
  param_2[0x1c] = *puVar5;
  param_2[0x1e] = uVar17;
  param_2[0x1f] = uVar13;
  param_2[0x1d] = uVar20;
  uVar16 = puVar12[3] & 0x7fffffff;
  uVar10 = puVar15[3] & 0x7fffffff;
  bVar1 = uVar16 - uVar10 < (uint)((uint)puVar15[2] <= (uint)puVar12[2]);
  uVar9 = (uint)(uVar10 >= uVar16 && !bVar1);
  puVar5 = puVar12;
  if (uVar9 != 0) {
    puVar5 = puVar15;
  }
  iVar14 = 0;
  if (uVar7 < uVar2 || bVar22) {
    iVar14 = -1;
  }
  uVar17 = *puVar5;
  uVar13 = puVar5[1];
  uVar20 = puVar5[2];
  puVar3 = puVar3 + iVar14 * 4;
  puVar18 = puVar18 + iVar11 * 4;
  puVar15 = puVar15 + uVar9 * 4;
  param_2[7] = puVar5[3];
  puVar12 = puVar12 + (uint)(uVar10 < uVar16 || bVar1) * 4;
  param_2[6] = uVar20;
  param_2[5] = uVar13;
  param_2[4] = uVar17;
  uVar7 = puVar18[3] & 0x7fffffff;
  uVar2 = puVar3[3] & 0x7fffffff;
  bVar22 = uVar7 - uVar2 < (uint)((uint)puVar3[2] <= (uint)puVar18[2]);
  iVar11 = 0;
  puVar5 = puVar3;
  if (uVar2 >= uVar7 && !bVar22) {
    iVar11 = -1;
    puVar5 = puVar18;
  }
  uVar20 = *puVar5;
  uVar13 = puVar5[1];
  uVar17 = puVar5[2];
  param_2[0x1b] = puVar5[3];
  param_2[0x1a] = uVar17;
  param_2[0x19] = uVar13;
  param_2[0x18] = uVar20;
  uVar9 = puVar15[3] & 0x7fffffff;
  uVar10 = puVar12[3] & 0x7fffffff;
  puVar18 = puVar18 + iVar11 * 4;
  bVar1 = uVar10 - uVar9 < (uint)((uint)puVar15[2] <= (uint)puVar12[2]);
  uVar16 = (uint)(uVar9 >= uVar10 && !bVar1);
  puVar5 = puVar12;
  if (uVar16 != 0) {
    puVar5 = puVar15;
  }
  iVar11 = 0;
  if (uVar2 < uVar7 || bVar22) {
    iVar11 = -1;
  }
  uVar17 = puVar5[1];
  uVar20 = puVar5[2];
  puVar3 = puVar3 + iVar11 * 4;
  puVar12 = puVar12 + (uint)(uVar9 < uVar10 || bVar1) * 4;
  uVar13 = puVar5[3];
  puVar15 = puVar15 + uVar16 * 4;
  param_2[8] = *puVar5;
  param_2[9] = uVar17;
  param_2[10] = uVar20;
  param_2[0xb] = uVar13;
  uVar7 = puVar18[3] & 0x7fffffff;
  uVar2 = puVar3[3] & 0x7fffffff;
  bVar22 = (uint)((uint)puVar3[2] <= (uint)puVar18[2]) <= uVar7 - uVar2;
  iVar11 = 0;
  puVar5 = puVar3;
  if (uVar7 <= uVar2 && bVar22) {
    iVar11 = -1;
    puVar5 = puVar18;
  }
  uVar13 = *puVar5;
  uVar17 = puVar5[1];
  uVar20 = puVar5[2];
  puVar18 = puVar18 + iVar11 * 4;
  param_2[0x17] = puVar5[3];
  param_2[0x14] = uVar13;
  param_2[0x15] = uVar17;
  param_2[0x16] = uVar20;
  uVar10 = puVar15[3] & 0x7fffffff;
  uVar9 = puVar12[3] & 0x7fffffff;
  bVar1 = uVar9 - uVar10 < (uint)((uint)puVar15[2] <= (uint)puVar12[2]);
  uVar16 = (uint)(uVar10 >= uVar9 && !bVar1);
  puVar5 = puVar12;
  if (uVar16 != 0) {
    puVar5 = puVar15;
  }
  iVar11 = 0;
  if (uVar7 > uVar2 || !bVar22) {
    iVar11 = -1;
  }
  uVar13 = puVar5[1];
  uVar17 = puVar5[2];
  uVar20 = puVar5[3];
  puVar3 = puVar3 + iVar11 * 4;
  param_2[0xc] = *puVar5;
  param_2[0xd] = uVar13;
  param_2[0xe] = uVar17;
  param_2[0xf] = uVar20;
  uVar2 = puVar18[3] & 0x7fffffff;
  uVar7 = puVar3[3] & 0x7fffffff;
  bVar22 = uVar2 - uVar7 < (uint)((uint)puVar3[2] <= (uint)puVar18[2]);
  iVar11 = 0;
  if (uVar7 < uVar2 || bVar22) {
    iVar11 = -1;
  }
  iVar14 = 0;
  puVar5 = puVar3;
  if (uVar7 >= uVar2 && !bVar22) {
    iVar14 = -1;
    puVar5 = puVar18;
  }
  uVar20 = *puVar5;
  uVar17 = puVar5[1];
  uVar13 = puVar5[2];
  param_2[0x13] = puVar5[3];
  param_2[0x10] = uVar20;
  puVar18 = puVar18 + iVar14 * 4 + 4;
  param_2[0x11] = uVar17;
  param_2[0x12] = uVar13;
  puVar12 = puVar12 + (uint)(uVar10 < uVar9 || bVar1) * 4;
  bVar22 = puVar12 == puVar18;
  if (bVar22) {
    puVar12 = puVar15 + uVar16 * 4;
    puVar18 = puVar3 + iVar11 * 4 + 4;
  }
  if (!bVar22 || puVar12 != puVar18) {
    FUN_00fb7254();
  }
  return;
}

