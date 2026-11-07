// FUN_00b79e44 @ 00b79e44 size=896 calls_out=1 calls_in=1
// strings: 

void FUN_00b79e44(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  
  uVar3 = 3;
  uVar18 = 2;
  uVar9 = (uint)(*(uint *)param_1[1] < *(uint *)*param_1);
  uVar6 = (uint)(*(uint *)param_1[1] >= *(uint *)*param_1);
  uVar14 = 2;
  if (*(uint *)param_1[3] < *(uint *)param_1[2]) {
    uVar14 = 3;
  }
  puVar1 = param_1 + uVar14;
  if (*(uint *)param_1[3] < *(uint *)param_1[2]) {
    uVar3 = 2;
  }
  puVar16 = param_1 + uVar6;
  uVar21 = *(uint *)param_1[uVar9];
  uVar19 = *(uint *)*puVar1;
  uVar20 = uVar14;
  if (uVar19 < uVar21) {
    uVar20 = uVar6;
  }
  if (*(uint *)*puVar16 <= *(uint *)param_1[uVar3]) {
    puVar16 = param_1 + uVar3;
    uVar14 = uVar6;
    uVar3 = uVar20;
  }
  if (uVar19 < uVar21) {
    uVar14 = uVar9;
  }
  puVar4 = param_1 + uVar14;
  puVar15 = param_1 + uVar3;
  uVar3 = *(uint *)*puVar4;
  uVar14 = *(uint *)*puVar15;
  puVar8 = (uint *)param_1[uVar9];
  if (uVar19 < uVar21) {
    puVar8 = (uint *)*puVar1;
  }
  puVar1 = puVar4;
  if (uVar14 < uVar3) {
    puVar1 = puVar15;
  }
  *param_3 = puVar8;
  if (uVar14 < uVar3) {
    puVar15 = puVar4;
  }
  param_3[1] = *puVar1;
  param_3[2] = *puVar15;
  puVar5 = (uint *)*puVar16;
  puVar16 = param_3 + 3;
  *puVar16 = puVar5;
  puVar1 = param_1 + 4;
  uVar6 = (uint)(*(uint *)param_1[5] < *(uint *)*puVar1);
  uVar3 = (uint)(*(uint *)param_1[5] >= *(uint *)*puVar1);
  uVar14 = 3;
  if (*(uint *)param_1[7] < *(uint *)param_1[6]) {
    uVar14 = 2;
    uVar18 = 3;
  }
  uVar20 = *(uint *)puVar1[uVar14];
  uVar19 = *(uint *)puVar1[uVar3];
  uVar9 = uVar3;
  if (uVar20 < uVar19) {
    uVar9 = uVar18;
  }
  puVar17 = (uint *)puVar1[uVar6];
  if (*(uint *)puVar1[uVar18] < *(uint *)puVar1[uVar6]) {
    puVar17 = (uint *)puVar1[uVar18];
    uVar9 = uVar6;
    uVar18 = uVar3;
  }
  puVar4 = puVar1 + uVar9;
  puVar15 = puVar1 + uVar14;
  if (uVar20 < uVar19) {
    puVar15 = puVar1 + uVar3;
  }
  uVar3 = *(uint *)*puVar4;
  if (uVar20 < uVar19) {
    uVar18 = uVar14;
  }
  puVar1 = puVar1 + uVar18;
  uVar14 = *(uint *)*puVar1;
  puVar7 = puVar4;
  if (uVar14 < uVar3) {
    puVar7 = puVar1;
  }
  puVar10 = param_3 + 4;
  *puVar10 = puVar17;
  if (uVar14 < uVar3) {
    puVar1 = puVar4;
  }
  param_3[5] = *puVar7;
  param_3[6] = *puVar1;
  puVar2 = (uint *)*puVar15;
  puVar1 = param_3 + 7;
  *puVar1 = puVar2;
  bVar22 = *puVar8 <= *puVar17;
  if (bVar22) {
    puVar17 = puVar8;
  }
  *param_2 = puVar17;
  uVar3 = *puVar5;
  uVar14 = *puVar2;
  if (uVar14 < uVar3) {
    puVar2 = puVar5;
  }
  param_3 = param_3 + bVar22;
  puVar8 = (uint *)*param_3;
  param_2[7] = puVar2;
  iVar11 = 0;
  puVar10 = puVar10 + !bVar22;
  iVar13 = 0;
  if (uVar14 < uVar3) {
    iVar11 = -1;
  }
  else {
    iVar13 = -1;
  }
  bVar22 = *puVar8 <= *(uint *)*puVar10;
  if (!bVar22) {
    puVar8 = (uint *)*puVar10;
  }
  puVar16 = puVar16 + iVar11;
  puVar5 = (uint *)*puVar16;
  param_2[1] = puVar8;
  puVar1 = puVar1 + iVar13;
  bVar23 = *(uint *)*puVar1 < *puVar5;
  puVar8 = (uint *)*puVar1;
  if (bVar23) {
    puVar8 = puVar5;
  }
  puVar10 = puVar10 + !bVar22;
  puVar5 = (uint *)*puVar10;
  param_2[6] = puVar8;
  iVar11 = 0;
  param_3 = param_3 + bVar22;
  iVar13 = 0;
  if (bVar23) {
    iVar13 = -1;
  }
  else {
    iVar11 = -1;
  }
  bVar22 = *(uint *)*param_3 <= *puVar5;
  puVar8 = (uint *)*param_3;
  if (!bVar22) {
    puVar8 = puVar5;
  }
  puVar5 = (uint *)puVar1[iVar11];
  param_2[2] = puVar8;
  puVar16 = puVar16 + iVar13;
  bVar23 = *puVar5 < *(uint *)*puVar16;
  if (bVar23) {
    puVar5 = (uint *)*puVar16;
  }
  puVar8 = (uint *)param_3[bVar22];
  param_2[5] = puVar5;
  iVar13 = 0;
  puVar5 = (uint *)puVar10[!bVar22];
  iVar12 = 0;
  if (bVar23) {
    iVar13 = -1;
  }
  else {
    iVar12 = -1;
  }
  bVar23 = *puVar8 <= *puVar5;
  if (!bVar23) {
    puVar8 = puVar5;
  }
  puVar1 = puVar1 + iVar11 + iVar12;
  puVar5 = (uint *)*puVar1;
  param_2[3] = puVar8;
  puVar8 = (uint *)puVar16[iVar13];
  bVar24 = *puVar5 < *puVar8;
  if (bVar24) {
    puVar5 = puVar8;
  }
  puVar15 = param_3 + bVar22 + bVar23;
  param_2[4] = puVar5;
  iVar11 = 0;
  if (bVar24) {
    iVar11 = -1;
  }
  iVar12 = 0;
  if (!bVar24) {
    iVar12 = -1;
  }
  bVar24 = puVar15 == puVar16 + iVar13 + iVar11 + 1;
  if (bVar24) {
    puVar15 = puVar10 + !bVar22 + !bVar23;
    puVar1 = puVar1 + iVar12 + 1;
  }
  if (!bVar24 || puVar15 != puVar1) {
    FUN_00fb7254();
  }
  return;
}

