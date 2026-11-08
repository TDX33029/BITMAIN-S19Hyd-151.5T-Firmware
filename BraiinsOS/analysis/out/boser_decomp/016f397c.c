// FUN_016f397c @ 016f397c size=392 calls_out=0 calls_in=2
// strings: 

void FUN_016f397c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
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
  iVar4 = 0x10;
  if (bVar8) {
    iVar4 = 0x18;
  }
  puVar1 = param_1 + uVar2 * 2;
  puVar7 = (uint *)((int)param_1 + iVar4);
  iVar4 = 0x18;
  if (bVar8) {
    iVar4 = 0x10;
  }
  bVar8 = *puVar7 < *puVar1;
  puVar6 = (uint *)((int)param_1 + iVar4);
  param_1 = param_1 + (uVar2 ^ 1) * 2;
  if ((*puVar7 == *puVar1) && (bVar8 = false, puVar7[1] < puVar1[1])) {
    bVar8 = true;
  }
  bVar9 = *puVar6 < *param_1;
  if ((*puVar6 == *param_1) && (bVar9 = false, puVar6[1] < param_1[1])) {
    bVar9 = true;
  }
  puVar3 = param_1;
  if (bVar9) {
    puVar3 = puVar7;
  }
  puVar5 = puVar7;
  if (bVar8) {
    puVar5 = param_1;
    puVar3 = puVar1;
  }
  if (bVar9) {
    puVar5 = puVar6;
  }
  bVar10 = *puVar3 <= *puVar5;
  if (*puVar5 == *puVar3) {
    bVar10 = puVar3[1] <= puVar5[1];
  }
  if (bVar8) {
    puVar1 = puVar7;
  }
  uVar2 = puVar1[1];
  puVar7 = puVar3;
  if (!bVar10) {
    puVar7 = puVar5;
  }
  *param_2 = *puVar1;
  if (!bVar10) {
    puVar5 = puVar3;
  }
  param_2[1] = uVar2;
  uVar2 = puVar7[1];
  if (bVar9) {
    puVar6 = param_1;
  }
  param_2[2] = *puVar7;
  param_2[3] = uVar2;
  uVar2 = puVar5[1];
  param_2[4] = *puVar5;
  param_2[5] = uVar2;
  uVar2 = puVar6[1];
  param_2[6] = *puVar6;
  param_2[7] = uVar2;
  return;
}

