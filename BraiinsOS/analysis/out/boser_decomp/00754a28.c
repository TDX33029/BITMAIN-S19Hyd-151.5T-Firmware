// FUN_00754a28 @ 00754a28 size=432 calls_out=1 calls_in=4
// strings: 

void FUN_00754a28(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar15 = *(uint *)(param_1 + 0x14);
  uVar16 = uVar8;
  if (uVar15 < uVar8) {
    uVar16 = uVar15;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),uVar16);
  uVar18 = *(uint *)(param_1 + 0x20);
  uVar14 = *(uint *)(param_1 + 0x2c);
  uVar16 = uVar18;
  if (uVar14 < uVar18) {
    uVar16 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c),uVar16);
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar18;
  }
  if (uVar2 == 0) {
    uVar2 = uVar15 - uVar8;
  }
  iVar9 = 0x24;
  if (iVar3 < 0) {
    iVar9 = 0x18;
  }
  puVar6 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0xc);
  iVar5 = 0x18;
  if (iVar3 < 0) {
    iVar5 = 0x24;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  uVar15 = puVar6[2];
  uVar8 = puVar4[2];
  uVar16 = uVar15;
  if (uVar8 < uVar15) {
    uVar16 = uVar8;
  }
  iVar3 = FUN_01bed842(puVar4[1],puVar6[1],uVar16);
  puVar10 = (undefined4 *)(param_1 + iVar9);
  uVar16 = puVar10[2];
  puVar12 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0xc);
  if (iVar3 == 0) {
    iVar3 = uVar8 - uVar15;
  }
  uVar8 = puVar12[2];
  puVar17 = puVar4;
  if (iVar3 < 0) {
    puVar17 = puVar12;
  }
  uVar15 = uVar8;
  if (uVar16 < uVar8) {
    uVar15 = uVar16;
  }
  iVar9 = FUN_01bed842(puVar10[1],puVar12[1],uVar15);
  if (iVar9 == 0) {
    iVar9 = uVar16 - uVar8;
  }
  puVar13 = puVar12;
  puVar1 = puVar10;
  if (iVar9 < 0) {
    puVar13 = puVar4;
    puVar1 = puVar12;
    puVar17 = puVar10;
  }
  if (iVar3 < 0) {
    puVar13 = puVar6;
  }
  uVar16 = puVar17[2];
  uVar8 = puVar13[2];
  if (iVar3 < 0) {
    puVar6 = puVar4;
  }
  uVar15 = uVar8;
  if (uVar16 < uVar8) {
    uVar15 = uVar16;
  }
  iVar3 = FUN_01bed842(puVar17[1],puVar13[1],uVar15);
  uVar7 = puVar6[1];
  uVar11 = puVar6[2];
  if (iVar3 == 0) {
    iVar3 = uVar16 - uVar8;
  }
  *param_2 = *puVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar11;
  puVar6 = puVar13;
  if (iVar3 < 0) {
    puVar6 = puVar17;
  }
  uVar7 = puVar6[1];
  uVar11 = puVar6[2];
  if (iVar3 >= 0) {
    puVar13 = puVar17;
  }
  param_2[3] = *puVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar11;
  uVar7 = puVar13[1];
  uVar11 = puVar13[2];
  param_2[6] = *puVar13;
  param_2[7] = uVar7;
  param_2[8] = uVar11;
  uVar7 = puVar1[1];
  uVar11 = puVar1[2];
  param_2[9] = *puVar1;
  param_2[10] = uVar7;
  param_2[0xb] = uVar11;
  return;
}

