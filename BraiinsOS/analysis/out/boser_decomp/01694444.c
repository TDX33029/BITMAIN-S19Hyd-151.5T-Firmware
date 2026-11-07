// FUN_01694444 @ 01694444 size=604 calls_out=1 calls_in=2
// strings: 

void FUN_01694444(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte bVar19;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar16 = *(uint *)(param_1 + 0x18);
  uVar10 = uVar9;
  if (uVar16 < uVar9) {
    uVar10 = uVar16;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 4),uVar10);
  if (iVar2 == 0) {
    iVar2 = uVar16 - uVar9;
  }
  uVar10 = *(uint *)(param_1 + 0x28);
  bVar19 = iVar2 < 0;
  bVar1 = 0 < iVar2;
  if (iVar2 == 0) {
    bVar19 = *(byte *)(param_1 + 0xc);
  }
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 0x1c);
  }
  uVar16 = *(uint *)(param_1 + 0x38);
  uVar9 = uVar10;
  if (uVar16 < uVar10) {
    uVar9 = uVar16;
  }
  uVar9 = FUN_01bed842(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x24),uVar9);
  if (uVar9 == 0) {
    uVar9 = uVar16 - uVar10;
  }
  if (uVar9 == 0) {
    uVar9 = 0;
    if (*(byte *)(param_1 + 0x3c) < *(byte *)(param_1 + 0x2c)) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = uVar9 >> 0x1f;
  }
  iVar2 = (int)(((uint)bVar1 - (uint)bVar19) * 0x1000000) >> 0x1f;
  iVar3 = 0x20;
  iVar11 = 0x30;
  puVar17 = (undefined4 *)(param_1 + iVar2 * -0x10);
  if (uVar9 != 0) {
    iVar3 = 0x30;
  }
  puVar15 = (undefined4 *)(param_1 + iVar3);
  if (uVar9 != 0) {
    iVar11 = 0x20;
  }
  uVar16 = puVar17[2];
  uVar9 = puVar15[2];
  uVar10 = uVar16;
  if (uVar9 < uVar16) {
    uVar10 = uVar9;
  }
  uVar10 = FUN_01bed842(puVar15[1],puVar17[1],uVar10);
  if (uVar10 == 0) {
    uVar10 = uVar9 - uVar16;
  }
  puVar4 = (undefined4 *)(param_1 + iVar11);
  puVar8 = (undefined4 *)(param_1 + (-iVar2 ^ 1U) * 0x10);
  if (uVar10 == 0) {
    uVar10 = 0;
    if (*(byte *)(puVar15 + 3) < *(byte *)(puVar17 + 3)) {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = uVar10 >> 0x1f;
  }
  uVar16 = puVar8[2];
  uVar12 = puVar4[2];
  uVar9 = uVar16;
  if (uVar12 < uVar16) {
    uVar9 = uVar12;
  }
  uVar9 = FUN_01bed842(puVar4[1],puVar8[1],uVar9);
  if (uVar9 == 0) {
    uVar9 = uVar12 - uVar16;
  }
  if (uVar9 == 0) {
    uVar9 = 0;
    if (*(byte *)(puVar4 + 3) < *(byte *)(puVar8 + 3)) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = uVar9 >> 0x1f;
  }
  puVar18 = puVar8;
  if (uVar9 != 0) {
    puVar18 = puVar15;
  }
  puVar7 = puVar15;
  if (uVar10 != 0) {
    puVar7 = puVar8;
    puVar18 = puVar17;
  }
  uVar16 = puVar18[2];
  if (uVar9 != 0) {
    puVar7 = puVar4;
  }
  uVar13 = puVar7[2];
  uVar12 = uVar16;
  if (uVar13 < uVar16) {
    uVar12 = uVar13;
  }
  uVar12 = FUN_01bed842(puVar7[1],puVar18[1],uVar12);
  if (uVar12 == 0) {
    uVar12 = uVar13 - uVar16;
  }
  if (uVar12 == 0) {
    uVar12 = 0;
    if (*(byte *)(puVar7 + 3) < *(byte *)(puVar18 + 3)) {
      uVar12 = 1;
    }
  }
  else {
    uVar12 = uVar12 >> 0x1f;
  }
  if (uVar10 != 0) {
    puVar17 = puVar15;
  }
  uVar5 = puVar17[1];
  uVar6 = puVar17[2];
  uVar14 = puVar17[3];
  puVar15 = puVar7;
  if (uVar12 != 0) {
    puVar15 = puVar18;
    puVar18 = puVar7;
  }
  *param_2 = *puVar17;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar14;
  uVar5 = puVar18[1];
  uVar6 = puVar18[2];
  uVar14 = puVar18[3];
  param_2[4] = *puVar18;
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar14;
  uVar5 = puVar15[1];
  uVar6 = puVar15[2];
  uVar14 = puVar15[3];
  param_2[8] = *puVar15;
  param_2[9] = uVar5;
  param_2[10] = uVar6;
  param_2[0xb] = uVar14;
  if (uVar9 != 0) {
    puVar4 = puVar8;
  }
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar14 = puVar4[3];
  param_2[0xc] = *puVar4;
  param_2[0xd] = uVar5;
  param_2[0xe] = uVar6;
  param_2[0xf] = uVar14;
  return;
}

