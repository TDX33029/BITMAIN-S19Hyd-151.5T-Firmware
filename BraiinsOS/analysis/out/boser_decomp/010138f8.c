// FUN_010138f8 @ 010138f8 size=464 calls_out=1 calls_in=2
// strings: 

void FUN_010138f8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  
  uVar10 = *(uint *)(*(int *)(param_1 + 8) + 0x54);
  uVar14 = *(uint *)(*(int *)(param_1 + 0x14) + 0x54);
  uVar2 = uVar10;
  if (uVar14 < uVar10) {
    uVar2 = uVar14;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x50),
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x50),uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar14 - uVar10;
  }
  uVar14 = *(uint *)(*(int *)(param_1 + 0x20) + 0x54);
  uVar15 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x54);
  puVar16 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0xc);
  uVar10 = uVar14;
  if (uVar15 < uVar14) {
    uVar10 = uVar15;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x50),
                       *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50),uVar10);
  iVar5 = 0x18;
  if (iVar3 == 0) {
    iVar3 = uVar15 - uVar14;
  }
  iVar12 = 0x24;
  if (iVar3 < 0) {
    iVar5 = 0x24;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  uVar10 = *(uint *)(puVar16[2] + 0x54);
  if (iVar3 < 0) {
    iVar12 = 0x18;
  }
  uVar14 = *(uint *)(puVar4[2] + 0x54);
  puVar7 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0xc);
  uVar2 = uVar10;
  if (uVar14 < uVar10) {
    uVar2 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(puVar4[2] + 0x50),*(undefined4 *)(puVar16[2] + 0x50),uVar2);
  puVar13 = (undefined4 *)(param_1 + iVar12);
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar10;
  }
  uVar10 = *(uint *)(puVar7[2] + 0x54);
  uVar2 = *(uint *)(puVar13[2] + 0x54);
  puVar11 = puVar4;
  if (iVar3 < 0) {
    puVar11 = puVar7;
  }
  uVar14 = uVar10;
  if (uVar2 < uVar10) {
    uVar14 = uVar2;
  }
  iVar5 = FUN_01bed842(*(undefined4 *)(puVar13[2] + 0x50),*(undefined4 *)(puVar7[2] + 0x50),uVar14);
  if (iVar5 == 0) {
    iVar5 = uVar2 - uVar10;
  }
  puVar8 = puVar7;
  puVar1 = puVar13;
  if (iVar5 < 0) {
    puVar8 = puVar4;
    puVar1 = puVar7;
    puVar11 = puVar13;
  }
  if (iVar3 < 0) {
    puVar8 = puVar16;
  }
  if (iVar3 < 0) {
    puVar16 = puVar4;
  }
  uVar14 = *(uint *)(puVar11[2] + 0x54);
  uVar10 = *(uint *)(puVar8[2] + 0x54);
  uVar2 = uVar10;
  if (uVar14 < uVar10) {
    uVar2 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(puVar11[2] + 0x50),*(undefined4 *)(puVar8[2] + 0x50),uVar2);
  uVar6 = puVar16[1];
  uVar9 = puVar16[2];
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar10;
  }
  *param_2 = *puVar16;
  param_2[1] = uVar6;
  param_2[2] = uVar9;
  puVar16 = puVar8;
  if (iVar3 < 0) {
    puVar16 = puVar11;
  }
  uVar6 = puVar16[1];
  uVar9 = puVar16[2];
  if (iVar3 >= 0) {
    puVar8 = puVar11;
  }
  param_2[3] = *puVar16;
  param_2[4] = uVar6;
  param_2[5] = uVar9;
  uVar6 = puVar8[1];
  uVar9 = puVar8[2];
  param_2[6] = *puVar8;
  param_2[7] = uVar6;
  param_2[8] = uVar9;
  uVar6 = puVar1[1];
  uVar9 = puVar1[2];
  param_2[9] = *puVar1;
  param_2[10] = uVar6;
  param_2[0xb] = uVar9;
  return;
}

