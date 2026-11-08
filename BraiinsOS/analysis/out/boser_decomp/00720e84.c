// FUN_00720e84 @ 00720e84 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_00720e84(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

