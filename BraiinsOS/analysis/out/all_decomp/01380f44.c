// FUN_01380f44 @ 01380f44 size=608 calls_out=1 calls_in=1
// strings: 

void FUN_01380f44(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  
  uVar14 = *(uint *)(param_1 + 8);
  uVar18 = *(uint *)(param_1 + 0x18);
  uVar12 = uVar14;
  if (uVar18 < uVar14) {
    uVar12 = uVar18;
  }
  iVar6 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),uVar12);
  if (iVar6 == 0) {
    iVar6 = uVar18 - uVar14;
  }
  uVar12 = *(uint *)(param_1 + 0x28);
  uVar14 = *(uint *)(param_1 + 0x38);
  bVar3 = -1 < iVar6;
  if (iVar6 == 0) {
    bVar3 = *(byte *)(param_1 + 0xc) <= *(byte *)(param_1 + 0x1c);
  }
  uVar18 = uVar12;
  if (uVar14 < uVar12) {
    uVar18 = uVar14;
  }
  iVar6 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x24),uVar18);
  if (iVar6 == 0) {
    iVar6 = uVar14 - uVar12;
  }
  puVar19 = (undefined4 *)(param_1 + (uint)!bVar3 * 0x10);
  iVar13 = 0x30;
  iVar7 = 0x20;
  uVar12 = puVar19[2];
  bVar4 = -1 < iVar6;
  if (iVar6 == 0) {
    bVar4 = *(byte *)(param_1 + 0x2c) <= *(byte *)(param_1 + 0x3c);
  }
  if (!bVar4) {
    iVar7 = 0x30;
  }
  puVar16 = (undefined4 *)(param_1 + iVar7);
  if (!bVar4) {
    iVar13 = 0x20;
  }
  uVar18 = puVar16[2];
  uVar14 = uVar12;
  if (uVar18 < uVar12) {
    uVar14 = uVar18;
  }
  iVar6 = FUN_016dd50a(puVar16[1],puVar19[1],uVar14);
  puVar17 = (undefined4 *)(param_1 + iVar13);
  puVar10 = (undefined4 *)(param_1 + (!bVar3 ^ 1) * 0x10);
  if (iVar6 == 0) {
    iVar6 = uVar18 - uVar12;
  }
  uVar14 = puVar10[2];
  uVar12 = puVar17[2];
  bVar3 = -1 < iVar6;
  if (iVar6 == 0) {
    bVar3 = *(byte *)(puVar19 + 3) <= *(byte *)(puVar16 + 3);
  }
  uVar18 = uVar14;
  if (uVar12 < uVar14) {
    uVar18 = uVar12;
  }
  iVar6 = FUN_016dd50a(puVar17[1],puVar10[1],uVar18);
  puVar15 = puVar16;
  if (!bVar3) {
    puVar15 = puVar10;
  }
  if (iVar6 == 0) {
    iVar6 = uVar12 - uVar14;
  }
  bVar4 = -1 < iVar6;
  if (iVar6 == 0) {
    bVar4 = *(byte *)(puVar10 + 3) <= *(byte *)(puVar17 + 3);
  }
  puVar11 = puVar10;
  puVar5 = puVar17;
  if (!bVar4) {
    puVar11 = puVar16;
    puVar5 = puVar10;
    puVar15 = puVar17;
  }
  if (!bVar3) {
    puVar11 = puVar19;
  }
  uVar14 = puVar15[2];
  uVar12 = puVar11[2];
  if (!bVar3) {
    puVar19 = puVar16;
  }
  uVar18 = uVar12;
  if (uVar14 < uVar12) {
    uVar18 = uVar14;
  }
  iVar6 = FUN_016dd50a(puVar15[1],puVar11[1],uVar18);
  bVar1 = *(byte *)(puVar15 + 3);
  bVar2 = *(byte *)(puVar11 + 3);
  if (iVar6 == 0) {
    iVar6 = uVar14 - uVar12;
  }
  uVar20 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  param_2[3] = puVar19[3];
  *param_2 = uVar20;
  param_2[1] = uVar8;
  param_2[2] = uVar9;
  bVar3 = -1 < iVar6;
  if (iVar6 == 0) {
    bVar3 = bVar2 <= bVar1;
  }
  if (bVar3) {
    puVar19 = puVar15;
  }
  else {
    puVar19 = puVar11;
    puVar11 = puVar15;
  }
  uVar8 = *puVar11;
  uVar9 = puVar11[1];
  uVar20 = puVar11[2];
  param_2[7] = puVar11[3];
  param_2[4] = uVar8;
  param_2[5] = uVar9;
  param_2[6] = uVar20;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar20 = puVar19[3];
  param_2[8] = *puVar19;
  param_2[9] = uVar8;
  param_2[10] = uVar9;
  param_2[0xb] = uVar20;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar20 = puVar5[3];
  param_2[0xc] = *puVar5;
  param_2[0xd] = uVar8;
  param_2[0xe] = uVar9;
  param_2[0xf] = uVar20;
  return;
}

