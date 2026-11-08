// FUN_00700b68 @ 00700b68 size=184 calls_out=0 calls_in=2
// strings: 

void FUN_00700b68(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 3;
  uVar6 = 2;
  if (param_1[3] < param_1[2]) {
    uVar6 = 3;
    uVar11 = 2;
  }
  uVar12 = (uint)(param_1[1] < *param_1);
  bVar1 = param_1[uVar6];
  bVar9 = param_1[uVar12];
  uVar7 = (uint)(param_1[1] >= *param_1);
  uVar5 = uVar6;
  if (bVar1 < bVar9) {
    uVar5 = uVar7;
  }
  uVar8 = uVar7;
  pbVar3 = param_1 + uVar11;
  if (param_1[uVar11] < param_1[uVar7]) {
    uVar8 = uVar6;
    uVar5 = uVar11;
    pbVar3 = param_1 + uVar7;
  }
  if (bVar1 < bVar9) {
    uVar8 = uVar12;
  }
  pbVar10 = param_1 + uVar8;
  bVar2 = *pbVar10;
  if (bVar1 < bVar9) {
    bVar9 = bVar1;
  }
  param_1 = param_1 + uVar5;
  bVar1 = *param_1;
  *param_2 = bVar9;
  pbVar4 = param_1;
  if (bVar1 < bVar2) {
    pbVar4 = pbVar10;
    pbVar10 = param_1;
  }
  param_2[1] = *pbVar10;
  param_2[2] = *pbVar4;
  param_2[3] = *pbVar3;
  return;
}

