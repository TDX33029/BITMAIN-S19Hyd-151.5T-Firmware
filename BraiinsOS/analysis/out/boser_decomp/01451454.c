// FUN_01451454 @ 01451454 size=260 calls_out=0 calls_in=5
// strings: 

void FUN_01451454(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  
  uVar9 = 3;
  uVar11 = (uint)(*param_1 <= param_1[2]);
  uVar10 = (uint)(*param_1 > param_1[2]);
  uVar6 = 2;
  if (param_1[6] < param_1[4]) {
    uVar9 = 2;
  }
  puVar12 = param_1 + uVar9 * 2;
  if (param_1[6] < param_1[4]) {
    uVar6 = 3;
  }
  puVar13 = param_1 + uVar10 * 2;
  uVar2 = *puVar13;
  puVar8 = param_1 + uVar6 * 2;
  uVar7 = *puVar8;
  puVar3 = param_1 + uVar11 * 2;
  puVar5 = puVar8;
  uVar1 = uVar6;
  if (uVar7 < uVar2) {
    puVar5 = puVar3;
    uVar1 = uVar11;
  }
  puVar4 = puVar8;
  if (*puVar3 <= *puVar12) {
    uVar6 = uVar11;
    puVar4 = puVar3;
    puVar3 = puVar12;
    puVar12 = puVar5;
    uVar9 = uVar1;
  }
  if (uVar7 < uVar2) {
    uVar6 = uVar10;
  }
  else {
    puVar8 = puVar13;
  }
  uVar6 = param_1[uVar6 * 2];
  if (uVar7 < uVar2) {
    puVar4 = puVar13;
  }
  uVar9 = param_1[uVar9 * 2];
  uVar10 = puVar8[1];
  *param_2 = *puVar8;
  param_2[1] = uVar10;
  if (uVar9 < uVar6) {
    puVar5 = puVar4;
    puVar4 = puVar12;
  }
  else {
    puVar5 = puVar12;
  }
  uVar6 = puVar4[1];
  param_2[2] = *puVar4;
  param_2[3] = uVar6;
  uVar6 = puVar5[1];
  param_2[4] = *puVar5;
  param_2[5] = uVar6;
  uVar6 = puVar3[1];
  param_2[6] = *puVar3;
  param_2[7] = uVar6;
  return;
}

