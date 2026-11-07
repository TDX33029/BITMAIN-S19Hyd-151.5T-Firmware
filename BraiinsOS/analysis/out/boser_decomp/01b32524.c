// FUN_01b32524 @ 01b32524 size=216 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b32524(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_2 + 0x18);
  if ((iVar3 < 1) || (-1 < *(int *)(*(int *)(param_2 + 0x14) + (iVar3 + 0x3fffffff) * 4))) {
    uVar4 = FUN_01b32498(param_1,param_2,param_2,param_3);
    return uVar4;
  }
  iVar3 = FUN_01b2b248(param_1,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_2 + 0x14);
  piVar1 = (int *)*param_1;
  *piVar1 = -*piVar2;
  for (iVar3 = 1; iVar3 < *(int *)(param_2 + 0x18); iVar3 = iVar3 + 1) {
    piVar1[iVar3] = ~piVar2[iVar3];
  }
  param_1[1] = *(int *)(param_2 + 0x18);
  param_1[3] = 0;
  return 1;
}

