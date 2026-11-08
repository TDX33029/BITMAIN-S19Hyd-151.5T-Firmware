// FUN_00df1a1c @ 00df1a1c size=152 calls_out=0 calls_in=1
// strings: 

void FUN_00df1a1c(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  puVar4 = (undefined4 *)*param_1;
  iVar5 = *param_2;
  piVar6 = (int *)param_2[1];
  piVar2 = (int *)param_2[2];
  iVar1 = param_2[3];
  if (puVar4 != (undefined4 *)param_1[1]) {
    uVar3 = (uint)(param_1[1] - (int)puVar4) >> 2;
    do {
      uVar3 = uVar3 - 1;
      *(undefined4 *)(*(int *)(iVar5 + 4) + *piVar6 * 4 + iVar1 * 4) = *puVar4;
      iVar1 = iVar1 + 1;
      *piVar2 = *piVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined4 *)param_1[2];
  if (puVar4 != (undefined4 *)param_1[3]) {
    uVar3 = (uint)(param_1[3] - (int)puVar4) >> 2;
    do {
      uVar3 = uVar3 - 1;
      *(undefined4 *)(*(int *)(iVar5 + 4) + *piVar6 * 4 + iVar1 * 4) = *puVar4;
      iVar1 = iVar1 + 1;
      *piVar2 = *piVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return;
}

