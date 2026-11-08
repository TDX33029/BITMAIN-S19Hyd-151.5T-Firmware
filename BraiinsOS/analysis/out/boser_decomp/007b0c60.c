// FUN_007b0c60 @ 007b0c60 size=472 calls_out=1 calls_in=2
// strings: 

void FUN_007b0c60(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  
  uVar10 = param_1[3];
  uVar8 = param_1[1];
  uVar1 = uVar8;
  if (uVar10 < uVar8) {
    uVar1 = uVar10;
  }
  uVar1 = FUN_01bed842(param_1[2],*param_1,uVar1);
  uVar13 = param_1[5];
  if (uVar1 == 0) {
    uVar1 = uVar10 - uVar8;
  }
  uVar10 = param_1[7];
  uVar8 = uVar13;
  if (uVar10 < uVar13) {
    uVar8 = uVar10;
  }
  iVar2 = FUN_01bed842(param_1[6],param_1[4],uVar8);
  if (iVar2 == 0) {
    iVar2 = uVar10 - uVar13;
  }
  uVar8 = 2;
  puVar4 = param_1 + ((int)uVar1 >> 0x1f) * -2;
  if (iVar2 < 0) {
    uVar8 = 3;
  }
  puVar5 = param_1 + uVar8 * 2;
  uVar13 = puVar4[1];
  uVar14 = puVar5[1];
  uVar10 = 3;
  if (iVar2 < 0) {
    uVar10 = 2;
  }
  uVar6 = uVar13;
  if (uVar14 < uVar13) {
    uVar6 = uVar14;
  }
  iVar3 = FUN_01bed842(*puVar5,*puVar4,uVar6);
  iVar2 = (int)~uVar1 >> 0x1f;
  uVar6 = -iVar2;
  puVar11 = param_1 + iVar2 * -2;
  puVar15 = param_1 + uVar10 * 2;
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar13;
  }
  uVar17 = puVar11[1];
  uVar14 = puVar15[1];
  puVar9 = puVar5;
  uVar13 = uVar8;
  if (iVar3 < 0) {
    uVar13 = ~uVar1 >> 0x1f;
    puVar9 = puVar11;
  }
  uVar7 = uVar17;
  if (uVar14 < uVar17) {
    uVar7 = uVar14;
  }
  iVar2 = FUN_01bed842(*puVar15,*puVar11,uVar7);
  if (iVar2 == 0) {
    iVar2 = uVar14 - uVar17;
  }
  if (iVar2 < 0) {
    uVar6 = uVar8;
    uVar13 = uVar10;
    puVar12 = puVar5;
    puVar9 = puVar15;
  }
  else {
    puVar12 = puVar11;
    puVar11 = puVar15;
  }
  if (iVar3 < 0) {
    puVar12 = puVar4;
  }
  else {
    puVar5 = puVar4;
  }
  uVar8 = puVar12[1];
  if (iVar3 < 0) {
    uVar6 = uVar1 >> 0x1f;
  }
  uVar10 = puVar9[1];
  uVar1 = uVar8;
  if (uVar10 < uVar8) {
    uVar1 = uVar10;
  }
  iVar2 = FUN_01bed842(param_1[uVar13 * 2],param_1[uVar6 * 2],uVar1);
  if (iVar2 == 0) {
    iVar2 = uVar10 - uVar8;
  }
  uVar16 = *puVar5;
  param_2[1] = puVar5[1];
  *param_2 = uVar16;
  puVar4 = puVar12;
  if (iVar2 < 0) {
    puVar4 = puVar9;
  }
  uVar16 = puVar4[1];
  if (iVar2 >= 0) {
    puVar12 = puVar9;
  }
  param_2[2] = *puVar4;
  param_2[3] = uVar16;
  uVar16 = puVar12[1];
  param_2[4] = *puVar12;
  param_2[5] = uVar16;
  uVar16 = puVar11[1];
  param_2[6] = *puVar11;
  param_2[7] = uVar16;
  return;
}

