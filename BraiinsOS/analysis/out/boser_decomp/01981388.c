// FUN_01981388 @ 01981388 size=152 calls_out=3 calls_in=3
// strings: 

void FUN_01981388(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    do {
      if (puVar1[-1] != 0) {
        thunk_FUN_01be4678(*puVar1);
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_01be4678(iVar2);
  }
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    do {
      FUN_01be6d98(puVar1[-1],*puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

