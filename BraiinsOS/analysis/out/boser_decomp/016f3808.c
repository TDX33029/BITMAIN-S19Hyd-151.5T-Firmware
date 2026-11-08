// FUN_016f3808 @ 016f3808 size=372 calls_out=0 calls_in=2
// strings: 

void FUN_016f3808(byte *param_1,undefined2 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar2 = (uint)(param_1[2] < *param_1);
  if ((param_1[2] == *param_1) && (uVar2 = 0, param_1[3] < param_1[1])) {
    uVar2 = 1;
  }
  bVar8 = param_1[6] < param_1[4];
  if ((param_1[6] == param_1[4]) && (bVar8 = false, param_1[7] < param_1[5])) {
    bVar8 = true;
  }
  iVar5 = 4;
  if (bVar8) {
    iVar5 = 6;
  }
  pbVar1 = param_1 + uVar2 * 2;
  pbVar7 = param_1 + iVar5;
  iVar5 = 6;
  if (bVar8) {
    iVar5 = 4;
  }
  bVar8 = *pbVar7 < *pbVar1;
  pbVar6 = param_1 + iVar5;
  param_1 = param_1 + (uVar2 ^ 1) * 2;
  if ((*pbVar7 == *pbVar1) && (bVar8 = false, pbVar7[1] < pbVar1[1])) {
    bVar8 = true;
  }
  bVar9 = *pbVar6 < *param_1;
  if ((*pbVar6 == *param_1) && (bVar9 = false, pbVar6[1] < param_1[1])) {
    bVar9 = true;
  }
  pbVar3 = param_1;
  if (bVar9) {
    pbVar3 = pbVar7;
  }
  pbVar4 = pbVar7;
  if (bVar8) {
    pbVar4 = param_1;
    pbVar3 = pbVar1;
  }
  if (bVar9) {
    pbVar4 = pbVar6;
  }
  bVar10 = *pbVar3 <= *pbVar4;
  if (*pbVar4 == *pbVar3) {
    bVar10 = pbVar3[1] <= pbVar4[1];
  }
  if (bVar8) {
    pbVar1 = pbVar7;
  }
  *param_2 = *(undefined2 *)pbVar1;
  pbVar1 = pbVar4;
  if (!bVar10) {
    pbVar1 = pbVar3;
    pbVar3 = pbVar4;
  }
  param_2[1] = *(undefined2 *)pbVar3;
  if (bVar9) {
    pbVar6 = param_1;
  }
  param_2[2] = *(undefined2 *)pbVar1;
  param_2[3] = *(undefined2 *)pbVar6;
  return;
}

