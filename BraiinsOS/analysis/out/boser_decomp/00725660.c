// FUN_00725660 @ 00725660 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00725660(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    return;
  }
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  iVar4 = param_1[2];
  for (iVar3 = iVar4; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  if (iVar4 != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  FUN_00720ecc(param_1[3],param_1[4]);
  return;
}

