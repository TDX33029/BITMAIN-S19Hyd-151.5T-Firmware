// FUN_01014c9c @ 01014c9c size=504 calls_out=1 calls_in=1
// strings: 

void FUN_01014c9c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  
  uVar11 = param_1[1];
  uVar15 = param_1[9];
  uVar4 = uVar11;
  if (uVar15 < uVar11) {
    uVar4 = uVar15;
  }
  uVar4 = FUN_01bed842(param_1[8],*param_1,uVar4);
  uVar20 = param_1[0x11];
  if (uVar4 == 0) {
    uVar4 = uVar15 - uVar11;
  }
  uVar15 = param_1[0x19];
  uVar11 = uVar20;
  if (uVar15 < uVar20) {
    uVar11 = uVar15;
  }
  iVar5 = FUN_01bed842(param_1[0x18],param_1[0x10],uVar11);
  if (iVar5 == 0) {
    iVar5 = uVar15 - uVar20;
  }
  uVar11 = 2;
  puVar10 = param_1 + ((int)uVar4 >> 0x1f) * -8;
  if (iVar5 < 0) {
    uVar11 = 3;
  }
  puVar14 = param_1 + uVar11 * 8;
  uVar17 = puVar10[1];
  uVar15 = 3;
  uVar20 = puVar14[1];
  if (iVar5 < 0) {
    uVar15 = 2;
  }
  uVar12 = uVar17;
  if (uVar20 < uVar17) {
    uVar12 = uVar20;
  }
  iVar5 = FUN_01bed842(*puVar14,*puVar10,uVar12);
  if (iVar5 == 0) {
    iVar5 = uVar20 - uVar17;
  }
  iVar1 = (int)~uVar4 >> 0x1f;
  puVar9 = param_1 + iVar1 * -8;
  uVar20 = uVar11;
  if (iVar5 < 0) {
    uVar20 = ~uVar4 >> 0x1f;
  }
  puVar19 = param_1 + uVar15 * 8;
  puVar7 = puVar14;
  if (iVar5 < 0) {
    puVar7 = puVar9;
  }
  uVar12 = puVar9[1];
  uVar18 = puVar19[1];
  uVar17 = uVar12;
  if (uVar18 < uVar12) {
    uVar17 = uVar18;
  }
  iVar6 = FUN_01bed842(*puVar19,*puVar9,uVar17);
  if (iVar6 == 0) {
    iVar6 = uVar18 - uVar12;
  }
  puVar2 = puVar9;
  puVar3 = puVar19;
  if (iVar6 < 0) {
    uVar20 = uVar15;
    puVar2 = puVar14;
    puVar3 = puVar9;
    puVar7 = puVar19;
  }
  uVar15 = puVar7[1];
  if (iVar6 >= 0) {
    uVar11 = -iVar1;
  }
  if (iVar5 < 0) {
    uVar11 = uVar4 >> 0x1f;
    puVar2 = puVar10;
  }
  uVar4 = puVar2[1];
  if (iVar5 >= 0) {
    puVar14 = puVar10;
  }
  uVar17 = uVar4;
  if (uVar15 < uVar4) {
    uVar17 = uVar15;
  }
  iVar5 = FUN_01bed842(param_1[uVar20 * 8],param_1[uVar11 * 8],uVar17);
  uVar8 = puVar14[1];
  uVar13 = puVar14[2];
  uVar16 = puVar14[3];
  if (iVar5 == 0) {
    iVar5 = uVar15 - uVar4;
  }
  *param_2 = *puVar14;
  param_2[1] = uVar8;
  param_2[2] = uVar13;
  param_2[3] = uVar16;
  uVar8 = puVar14[5];
  uVar13 = puVar14[6];
  uVar16 = puVar14[7];
  param_2[4] = puVar14[4];
  param_2[5] = uVar8;
  param_2[6] = uVar13;
  param_2[7] = uVar16;
  if (iVar5 < 0) {
    puVar10 = puVar2;
    puVar2 = puVar7;
  }
  else {
    puVar10 = puVar7;
  }
  uVar8 = puVar2[1];
  uVar13 = puVar2[2];
  uVar16 = puVar2[3];
  param_2[8] = *puVar2;
  param_2[9] = uVar8;
  param_2[10] = uVar13;
  param_2[0xb] = uVar16;
  uVar8 = puVar2[5];
  uVar13 = puVar2[6];
  uVar16 = puVar2[7];
  param_2[0xc] = puVar2[4];
  param_2[0xd] = uVar8;
  param_2[0xe] = uVar13;
  param_2[0xf] = uVar16;
  uVar8 = puVar10[1];
  uVar13 = puVar10[2];
  uVar16 = puVar10[3];
  param_2[0x10] = *puVar10;
  param_2[0x11] = uVar8;
  param_2[0x12] = uVar13;
  param_2[0x13] = uVar16;
  uVar8 = puVar10[5];
  uVar13 = puVar10[6];
  uVar16 = puVar10[7];
  param_2[0x14] = puVar10[4];
  param_2[0x15] = uVar8;
  param_2[0x16] = uVar13;
  param_2[0x17] = uVar16;
  uVar8 = puVar3[1];
  uVar13 = puVar3[2];
  uVar16 = puVar3[3];
  param_2[0x18] = *puVar3;
  param_2[0x19] = uVar8;
  param_2[0x1a] = uVar13;
  param_2[0x1b] = uVar16;
  uVar8 = puVar3[5];
  uVar13 = puVar3[6];
  uVar16 = puVar3[7];
  param_2[0x1c] = puVar3[4];
  param_2[0x1d] = uVar8;
  param_2[0x1e] = uVar13;
  param_2[0x1f] = uVar16;
  return;
}

