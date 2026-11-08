// FUN_009400a8 @ 009400a8 size=252 calls_out=0 calls_in=2
// strings: 

void FUN_009400a8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  
  uVar7 = 2;
  uVar6 = (uint)(*param_1 <= param_1[4]);
  uVar8 = (uint)(*param_1 > param_1[4]);
  uVar5 = 3;
  if (param_1[0xc] < param_1[8]) {
    uVar7 = 3;
    uVar5 = 2;
  }
  puVar13 = param_1 + uVar8 * 4;
  uVar2 = *puVar13;
  puVar9 = param_1 + uVar7 * 4;
  uVar10 = *puVar9;
  puVar11 = param_1 + uVar5 * 4;
  puVar3 = param_1 + uVar6 * 4;
  uVar12 = uVar7;
  puVar1 = puVar9;
  if (uVar10 < uVar2) {
    uVar12 = uVar6;
    puVar1 = puVar3;
  }
  if (*puVar11 < *puVar3) {
    puVar4 = puVar9;
  }
  else {
    puVar4 = puVar3;
    uVar7 = uVar6;
    uVar5 = uVar12;
    puVar3 = puVar11;
    puVar11 = puVar1;
  }
  if (uVar10 < uVar2) {
    uVar7 = uVar8;
  }
  else {
    puVar9 = puVar13;
  }
  uVar5 = param_1[uVar5 * 4];
  if (uVar10 < uVar2) {
    puVar4 = puVar13;
  }
  uVar12 = param_1[uVar7 * 4];
  uVar7 = puVar9[1];
  uVar6 = puVar9[2];
  uVar8 = puVar9[3];
  *param_2 = *puVar9;
  param_2[1] = uVar7;
  param_2[2] = uVar6;
  param_2[3] = uVar8;
  puVar1 = puVar4;
  if (uVar5 < uVar12) {
    puVar1 = puVar11;
  }
  uVar7 = puVar1[1];
  uVar6 = puVar1[2];
  uVar8 = puVar1[3];
  if (uVar5 >= uVar12) {
    puVar4 = puVar11;
  }
  param_2[4] = *puVar1;
  param_2[5] = uVar7;
  param_2[6] = uVar6;
  param_2[7] = uVar8;
  uVar7 = puVar4[1];
  uVar5 = puVar4[2];
  uVar6 = puVar4[3];
  param_2[8] = *puVar4;
  param_2[9] = uVar7;
  param_2[10] = uVar5;
  param_2[0xb] = uVar6;
  uVar7 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  param_2[0xc] = *puVar3;
  param_2[0xd] = uVar7;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar6;
  return;
}

