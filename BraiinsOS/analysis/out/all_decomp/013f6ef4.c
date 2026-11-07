// FUN_013f6ef4 @ 013f6ef4 size=1464 calls_out=1 calls_in=1
// strings: 

void FUN_013f6ef4(byte *param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  ushort uVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  ushort *puVar21;
  bool bVar22;
  bool bVar23;
  
  bVar23 = param_1[4] <= param_1[6];
  if (param_1[6] == param_1[4]) {
    bVar23 = param_1[5] <= param_1[7];
  }
  uVar10 = 3;
  bVar22 = *param_1 <= param_1[2];
  if (param_1[2] == *param_1) {
    bVar22 = param_1[1] <= param_1[3];
  }
  uVar17 = (uint)!bVar22;
  if (!bVar23) {
    uVar10 = 2;
  }
  uVar12 = uVar17 ^ 1;
  uVar20 = 2;
  puVar19 = (ushort *)(param_1 + uVar10 * 2);
  puVar16 = (ushort *)(param_1 + uVar17 * 2);
  if (!bVar23) {
    uVar20 = 3;
  }
  puVar11 = (ushort *)(param_1 + uVar12 * 2);
  puVar6 = (ushort *)(param_1 + uVar20 * 2);
  bVar23 = (byte)*puVar11 <= (byte)*puVar19;
  if ((byte)*puVar19 == (byte)*puVar11) {
    bVar23 = *(byte *)((int)puVar11 + 1) <= *(byte *)((int)puVar19 + 1);
  }
  puVar21 = puVar11;
  uVar7 = uVar12;
  puVar18 = puVar19;
  if (!bVar23) {
    puVar21 = puVar6;
    uVar7 = uVar20;
    puVar18 = puVar11;
  }
  bVar22 = (byte)*puVar16 <= (byte)*puVar6;
  if ((byte)*puVar6 == (byte)*puVar16) {
    bVar22 = *(byte *)((int)puVar16 + 1) <= *(byte *)((int)puVar6 + 1);
  }
  puVar13 = puVar16;
  if (!bVar22) {
    uVar20 = uVar12;
    uVar7 = uVar17;
    puVar13 = puVar6;
    puVar21 = puVar16;
    puVar6 = puVar11;
  }
  if (!bVar23) {
    puVar6 = puVar19;
  }
  uVar9 = *puVar13;
  uVar17 = 2;
  bVar1 = param_1[uVar7 * 2];
  if (!bVar23) {
    uVar20 = uVar10;
  }
  bVar2 = param_1[uVar20 * 2];
  bVar3 = *(byte *)((int)puVar21 + 1);
  bVar4 = *(byte *)((int)puVar6 + 1);
  *param_3 = uVar9;
  bVar23 = bVar1 <= bVar2;
  if (bVar2 == bVar1) {
    bVar23 = bVar3 <= bVar4;
  }
  puVar16 = puVar6;
  if (!bVar23) {
    puVar16 = puVar21;
    puVar21 = puVar6;
  }
  param_3[1] = *puVar21;
  param_3[2] = *puVar16;
  puVar16 = param_3 + 3;
  *puVar16 = *puVar18;
  pbVar5 = param_1 + 8;
  bVar23 = *pbVar5 <= param_1[10];
  if (param_1[10] == *pbVar5) {
    bVar23 = param_1[9] <= param_1[0xb];
  }
  uVar10 = (uint)!bVar23;
  uVar20 = uVar10 ^ 1;
  bVar23 = param_1[0xc] <= param_1[0xe];
  if (param_1[0xe] == param_1[0xc]) {
    bVar23 = param_1[0xd] <= param_1[0xf];
  }
  puVar6 = (ushort *)(pbVar5 + uVar10 * 2);
  puVar19 = (ushort *)(pbVar5 + uVar20 * 2);
  if (!bVar23) {
    uVar17 = 3;
  }
  uVar12 = 3;
  puVar11 = (ushort *)(pbVar5 + uVar17 * 2);
  if (!bVar23) {
    uVar12 = 2;
  }
  puVar18 = (ushort *)(pbVar5 + uVar12 * 2);
  bVar23 = (byte)*puVar6 <= (byte)*puVar11;
  if ((byte)*puVar11 == (byte)*puVar6) {
    bVar23 = *(byte *)((int)puVar6 + 1) <= *(byte *)((int)puVar11 + 1);
  }
  uVar7 = uVar17;
  puVar21 = puVar11;
  if (!bVar23) {
    uVar7 = uVar20;
    puVar21 = puVar19;
  }
  bVar22 = (byte)*puVar19 <= (byte)*puVar18;
  if ((byte)*puVar18 == (byte)*puVar19) {
    bVar22 = *(byte *)((int)puVar19 + 1) <= *(byte *)((int)puVar18 + 1);
  }
  if (bVar22) {
    puVar13 = puVar19;
    puVar19 = puVar18;
  }
  else {
    uVar20 = uVar17;
    uVar7 = uVar12;
    puVar13 = puVar11;
    puVar21 = puVar18;
  }
  if (bVar23) {
    puVar11 = puVar6;
    uVar10 = uVar20;
  }
  else {
    puVar13 = puVar6;
  }
  uVar8 = *puVar11;
  bVar1 = *(byte *)((int)param_3 + 7);
  bVar23 = pbVar5[uVar10 * 2] <= pbVar5[uVar7 * 2];
  if (pbVar5[uVar7 * 2] == pbVar5[uVar10 * 2]) {
    bVar23 = *(byte *)((int)puVar13 + 1) <= *(byte *)((int)puVar21 + 1);
  }
  puVar6 = param_3 + 4;
  *puVar6 = uVar8;
  if (bVar23) {
    puVar11 = puVar21;
  }
  else {
    puVar11 = puVar13;
    puVar13 = puVar21;
  }
  param_3[5] = *puVar13;
  uVar9 = uVar9 & 0xff;
  param_3[6] = *puVar11;
  bVar23 = (uVar8 & 0xff) < uVar9;
  if ((uVar8 & 0xff) == uVar9) {
    bVar23 = uVar8 >> 8 < (ushort)*(byte *)((int)param_3 + 1);
  }
  uVar10 = (uint)bVar23;
  uVar9 = *puVar19;
  puVar19 = param_3;
  if (uVar10 != 0) {
    puVar19 = puVar6;
  }
  uVar8 = *puVar19;
  puVar11 = param_3 + 7;
  *puVar11 = uVar9;
  *param_2 = uVar8;
  puVar6 = puVar6 + uVar10;
  puVar19 = param_3 + (uVar10 ^ 1);
  bVar23 = (byte)*puVar19 <= (byte)*puVar6;
  if ((byte)*puVar6 == (byte)*puVar19) {
    bVar23 = *(byte *)((int)puVar19 + 1) <= *(byte *)((int)puVar6 + 1);
  }
  uVar10 = (uint)!bVar23;
  puVar18 = puVar19;
  if (uVar10 != 0) {
    puVar18 = puVar6;
  }
  param_2[1] = *puVar18;
  uVar8 = uVar9 & 0xff;
  uVar14 = (ushort)(byte)*puVar16;
  iVar15 = 0xe;
  bVar23 = uVar8 <= uVar14 && uVar14 != uVar8;
  if (uVar14 == uVar8) {
    bVar23 = uVar9 >> 8 < (ushort)bVar1;
  }
  uVar17 = (uint)bVar23;
  if (uVar17 != 0) {
    iVar15 = 6;
  }
  param_2[7] = *(ushort *)((int)param_3 + iVar15);
  puVar16 = puVar16 + -uVar17;
  puVar18 = puVar11 + (uVar17 - 1);
  bVar23 = (byte)*puVar16 <= (byte)*puVar18;
  if ((byte)*puVar18 == (byte)*puVar16) {
    bVar23 = *(byte *)((int)puVar16 + 1) <= *(byte *)((int)puVar11 + uVar17 * 2 + -1);
  }
  uVar17 = (uint)!bVar23;
  puVar11 = puVar18;
  if (uVar17 != 0) {
    puVar11 = puVar16;
  }
  param_2[6] = *puVar11;
  puVar6 = puVar6 + uVar10;
  puVar19 = puVar19 + (uVar10 ^ 1);
  bVar23 = (byte)*puVar19 <= (byte)*puVar6;
  if ((byte)*puVar6 == (byte)*puVar19) {
    bVar23 = *(byte *)((int)puVar19 + 1) <= *(byte *)((int)puVar6 + 1);
  }
  uVar10 = (uint)!bVar23;
  puVar11 = puVar19;
  if (uVar10 != 0) {
    puVar11 = puVar6;
  }
  param_2[2] = *puVar11;
  puVar11 = puVar18 + (uVar17 - 1);
  puVar16 = puVar16 + -uVar17;
  bVar23 = (byte)*puVar16 <= (byte)*puVar11;
  if ((byte)*puVar11 == (byte)*puVar16) {
    bVar23 = *(byte *)((int)puVar16 + 1) <= *(byte *)((int)puVar18 + uVar17 * 2 + -1);
  }
  uVar17 = (uint)!bVar23;
  puVar18 = puVar11;
  if (uVar17 != 0) {
    puVar18 = puVar16;
  }
  param_2[5] = *puVar18;
  puVar6 = puVar6 + uVar10;
  puVar16 = puVar16 + -uVar17;
  uVar9 = *puVar16;
  puVar19 = puVar19 + (uVar10 ^ 1);
  bVar23 = (byte)*puVar19 <= (byte)*puVar6;
  if ((byte)*puVar6 == (byte)*puVar19) {
    bVar23 = *(byte *)((int)puVar19 + 1) <= *(byte *)((int)puVar6 + 1);
  }
  uVar10 = (uint)!bVar23;
  puVar18 = puVar19;
  if (uVar10 != 0) {
    puVar18 = puVar6;
  }
  bVar1 = *(byte *)((int)puVar16 + 1);
  param_2[3] = *puVar18;
  puVar18 = puVar11 + (uVar17 - 1);
  bVar23 = (byte)uVar9 <= (byte)*puVar18;
  if ((byte)*puVar18 == (byte)uVar9) {
    bVar23 = bVar1 <= *(byte *)((int)puVar11 + uVar17 * 2 + -1);
  }
  uVar17 = (uint)!bVar23;
  puVar11 = puVar18;
  if (uVar17 != 0) {
    puVar11 = puVar16;
  }
  param_2[4] = *puVar11;
  if (puVar19 + (uVar10 ^ 1) == puVar16 + (1 - uVar17)) {
    puVar6 = puVar6 + uVar10;
    puVar18 = puVar18 + uVar17;
  }
  if (puVar19 + (uVar10 ^ 1) != puVar16 + (1 - uVar17) || puVar6 != puVar18) {
    FUN_00fb7254();
  }
  return;
}

