// FUN_019cd154 @ 019cd154 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_019cd154(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (1 < *param_1) {
    if (*param_1 == 2) {
      FUN_019cd1e8(param_1 + 6);
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 6);
    iVar4 = iVar2 + 1;
    iVar1 = iVar3;
    while (iVar4 = iVar4 + -1, iVar4 != 0) {
      FUN_019cd1e8(iVar1);
      iVar1 = iVar1 + 8;
    }
    if (iVar2 != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

