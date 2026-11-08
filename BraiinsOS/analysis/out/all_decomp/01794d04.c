// FUN_01794d04 @ 01794d04 size=248 calls_out=1 calls_in=3
// strings: 

uint FUN_01794d04(int param_1,int *param_2,byte *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  
  iVar7 = *param_2;
  FUN_016dd606(param_1,0,(iVar7 + 1) * 4);
  if (param_4 == 0) {
    *param_2 = 0;
    return 0;
  }
  pbVar6 = param_3;
  if (param_3 < param_3 + param_4) {
    do {
      pbVar5 = pbVar6 + 1;
      *(int *)(param_1 + (uint)*pbVar6 * 4) = *(int *)(param_1 + (uint)*pbVar6 * 4) + 1;
      pbVar6 = pbVar5;
    } while (param_3 + param_4 != pbVar5);
  }
  iVar2 = iVar7 * 4;
  if (*(int *)(param_1 + iVar7 * 4) == 0) {
    piVar3 = (int *)(param_1 + iVar2);
    do {
      piVar3 = piVar3 + -1;
      iVar7 = iVar7 + -1;
    } while (*piVar3 == 0);
    iVar2 = iVar7 * 4;
  }
  puVar4 = (uint *)(param_1 + -4);
  uVar1 = 0;
  *param_2 = iVar7;
  do {
    puVar4 = puVar4 + 1;
    if (uVar1 < *puVar4) {
      uVar1 = *puVar4;
    }
  } while ((uint *)(param_1 + iVar2) != puVar4);
  return uVar1;
}

