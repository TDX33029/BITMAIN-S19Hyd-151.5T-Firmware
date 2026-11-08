// FUN_016d8dac @ 016d8dac size=52 calls_out=0 calls_in=1
// strings: 

void FUN_016d8dac(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return;
  }
  do {
    piVar1 = *(int **)(param_1 + 8);
    iVar2 = iVar2 + -1;
    if (param_2 < (uint)piVar1[1]) {
      *piVar1 = *piVar1 + param_2;
      *(uint *)(*(int *)(param_1 + 8) + 4) = *(int *)(*(int *)(param_1 + 8) + 4) - param_2;
      return;
    }
    param_2 = param_2 - piVar1[1];
    *(int **)(param_1 + 8) = piVar1 + 2;
    *(int *)(param_1 + 0xc) = iVar2;
  } while (iVar2 != 0);
  return;
}

