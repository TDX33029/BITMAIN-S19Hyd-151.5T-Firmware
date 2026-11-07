// FUN_013fbfd4 @ 013fbfd4 size=32 calls_out=1 calls_in=1
// strings: 

void FUN_013fbfd4(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    thunk_FUN_01be4678();
    return;
  }
  return;
}

