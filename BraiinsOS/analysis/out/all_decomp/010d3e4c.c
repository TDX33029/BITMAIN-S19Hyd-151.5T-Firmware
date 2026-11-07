// FUN_010d3e4c @ 010d3e4c size=788 calls_out=1 calls_in=1
// strings: 

void FUN_010d3e4c(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  bVar21 = *(byte *)(param_1 + 7) < *(byte *)(param_1 + 3);
  uVar9 = (uint)bVar21;
  uVar11 = (uint)!bVar21;
  uVar10 = 2;
  uVar15 = 3;
  if (*(byte *)(param_1 + 0xf) < *(byte *)(param_1 + 0xb)) {
    uVar10 = 3;
    uVar15 = 2;
  }
  uVar5 = *(uint *)(param_1 + uVar10 * 4);
  puVar18 = (uint *)(param_1 + uVar11 * 4);
  uVar19 = *(uint *)(param_1 + uVar9 * 4);
  puVar20 = (uint *)(param_1 + uVar15 * 4);
  uVar13 = 2;
  uVar6 = uVar5 >> 0x18;
  uVar16 = uVar10;
  if (uVar6 < uVar19 >> 0x18) {
    uVar16 = uVar11;
  }
  if (*(byte *)((int)puVar18 + 3) <= *(byte *)((int)puVar20 + 3)) {
    puVar18 = puVar20;
    uVar10 = uVar11;
    uVar15 = uVar16;
  }
  bVar21 = uVar6 < uVar19 >> 0x18;
  if (bVar21) {
    uVar10 = uVar9;
  }
  puVar20 = (uint *)(param_1 + uVar15 * 4);
  puVar8 = (uint *)(param_1 + uVar10 * 4);
  if (bVar21) {
    uVar19 = uVar5;
  }
  bVar21 = *(byte *)((int)puVar20 + 3) < *(byte *)((int)puVar8 + 3);
  puVar7 = puVar8;
  if (bVar21) {
    puVar7 = puVar20;
  }
  *param_3 = uVar19;
  if (bVar21) {
    puVar20 = puVar8;
  }
  param_3[1] = *puVar7;
  param_3[2] = *puVar20;
  uVar15 = *puVar18;
  puVar18 = param_3 + 3;
  *puVar18 = uVar15;
  bVar21 = *(byte *)(param_1 + 0x17) < *(byte *)(param_1 + 0x13);
  uVar11 = (uint)bVar21;
  uVar9 = (uint)!bVar21;
  uVar10 = 3;
  iVar3 = param_1 + 0x10;
  if (*(byte *)(param_1 + 0x1f) < *(byte *)(param_1 + 0x1b)) {
    uVar10 = 2;
    uVar13 = 3;
  }
  puVar8 = (uint *)(iVar3 + uVar9 * 4);
  puVar20 = (uint *)(iVar3 + uVar10 * 4);
  uVar5 = *(uint *)(iVar3 + uVar13 * 4);
  uVar16 = *(uint *)(iVar3 + uVar11 * 4);
  bVar1 = *(byte *)((int)puVar8 + 3);
  bVar2 = *(byte *)((int)puVar20 + 3);
  uVar6 = uVar9;
  if (bVar2 < bVar1) {
    uVar6 = uVar13;
  }
  if (uVar5 >> 0x18 < uVar16 >> 0x18) {
    uVar16 = uVar5;
    uVar6 = uVar11;
    uVar13 = uVar9;
  }
  puVar7 = (uint *)(iVar3 + uVar6 * 4);
  if (bVar2 < bVar1) {
    puVar20 = puVar8;
    uVar13 = uVar10;
  }
  puVar8 = (uint *)(iVar3 + uVar13 * 4);
  bVar21 = *(byte *)((int)puVar8 + 3) < *(byte *)((int)puVar7 + 3);
  puVar12 = puVar7;
  if (bVar21) {
    puVar12 = puVar8;
  }
  puVar4 = param_3 + 4;
  *puVar4 = uVar16;
  if (bVar21) {
    puVar8 = puVar7;
  }
  param_3[5] = *puVar12;
  param_3[6] = *puVar8;
  bVar21 = uVar19 >> 0x18 <= uVar16 >> 0x18;
  uVar10 = *puVar20;
  if (bVar21) {
    uVar16 = uVar19;
  }
  puVar20 = param_3 + 7;
  *puVar20 = uVar10;
  *param_2 = uVar16;
  bVar22 = uVar10 >> 0x18 < uVar15 >> 0x18;
  if (bVar22) {
    uVar10 = uVar15;
  }
  param_3 = param_3 + bVar21;
  uVar15 = *param_3;
  param_2[7] = uVar10;
  iVar14 = 0;
  puVar4 = puVar4 + !bVar21;
  iVar3 = 0;
  if (bVar22) {
    iVar3 = -1;
  }
  else {
    iVar14 = -1;
  }
  bVar21 = uVar15 >> 0x18 <= *puVar4 >> 0x18;
  if (!bVar21) {
    uVar15 = *puVar4;
  }
  puVar20 = puVar20 + iVar14;
  uVar10 = *puVar20;
  param_2[1] = uVar15;
  puVar18 = puVar18 + iVar3;
  bVar22 = uVar10 >> 0x18 < *puVar18 >> 0x18;
  if (bVar22) {
    uVar10 = *puVar18;
  }
  param_3 = param_3 + bVar21;
  uVar15 = *param_3;
  param_2[6] = uVar10;
  iVar3 = 0;
  uVar10 = puVar4[!bVar21];
  iVar14 = 0;
  if (bVar22) {
    iVar3 = -1;
  }
  else {
    iVar14 = -1;
  }
  bVar22 = uVar15 >> 0x18 <= uVar10 >> 0x18;
  if (!bVar22) {
    uVar15 = uVar10;
  }
  puVar20 = puVar20 + iVar14;
  uVar10 = *puVar20;
  param_2[2] = uVar15;
  puVar18 = puVar18 + iVar3;
  bVar23 = uVar10 >> 0x18 < *puVar18 >> 0x18;
  if (bVar23) {
    uVar10 = *puVar18;
  }
  uVar15 = param_3[bVar22];
  param_2[5] = uVar10;
  iVar3 = 0;
  puVar8 = puVar4 + !bVar21 + !bVar22;
  iVar14 = 0;
  if (bVar23) {
    iVar3 = -1;
  }
  else {
    iVar14 = -1;
  }
  bVar21 = *puVar8 >> 0x18 < uVar15 >> 0x18;
  if (bVar21) {
    uVar15 = *puVar8;
  }
  uVar10 = puVar20[iVar14];
  param_2[3] = uVar15;
  uVar15 = puVar18[iVar3];
  bVar23 = uVar10 >> 0x18 < uVar15 >> 0x18;
  if (bVar23) {
    uVar10 = uVar15;
  }
  iVar17 = 0;
  param_2[4] = uVar10;
  if (bVar23) {
    iVar17 = -1;
  }
  puVar7 = (uint *)0x0;
  if (!bVar23) {
    puVar7 = (uint *)0xffffffff;
  }
  bVar22 = param_3 + bVar22 + !bVar21 == puVar18 + iVar3 + iVar17 + 1;
  if (bVar22) {
    puVar8 = puVar8 + bVar21;
    puVar7 = puVar20 + iVar14 + (int)puVar7 + 1;
  }
  if (!bVar22 || puVar8 != puVar7) {
    FUN_00fb7254();
  }
  return;
}

