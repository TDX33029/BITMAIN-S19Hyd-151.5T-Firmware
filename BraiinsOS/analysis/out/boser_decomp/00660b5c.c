// FUN_00660b5c @ 00660b5c size=180 calls_out=0 calls_in=3
// strings: 

void FUN_00660b5c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = 3;
  uVar4 = 2;
  if (param_1[3] < param_1[2]) {
    uVar4 = 3;
    uVar9 = 2;
  }
  uVar10 = (uint)(param_1[1] < *param_1);
  uVar11 = param_1[uVar4];
  uVar7 = param_1[uVar10];
  uVar5 = (uint)(param_1[1] >= *param_1);
  uVar3 = uVar4;
  if (uVar11 < uVar7) {
    uVar3 = uVar5;
  }
  uVar6 = uVar5;
  puVar1 = param_1 + uVar9;
  if (param_1[uVar9] < param_1[uVar5]) {
    uVar6 = uVar4;
    uVar3 = uVar9;
    puVar1 = param_1 + uVar5;
  }
  if (uVar11 < uVar7) {
    uVar6 = uVar10;
  }
  puVar8 = param_1 + uVar6;
  uVar4 = *puVar8;
  if (uVar11 < uVar7) {
    uVar7 = uVar11;
  }
  param_1 = param_1 + uVar3;
  uVar9 = *param_1;
  *param_2 = uVar7;
  puVar2 = param_1;
  if (uVar9 < uVar4) {
    puVar2 = puVar8;
    puVar8 = param_1;
  }
  param_2[1] = *puVar8;
  param_2[2] = *puVar2;
  param_2[3] = *puVar1;
  return;
}

