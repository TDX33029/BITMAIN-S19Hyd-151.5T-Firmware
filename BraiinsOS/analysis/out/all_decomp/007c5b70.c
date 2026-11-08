// FUN_007c5b70 @ 007c5b70 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_007c5b70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (puVar1[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar1);
    }
    puVar1 = puVar1 + 3;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar2);
  }
  FUN_008e7734(param_1 + 3);
  return;
}

