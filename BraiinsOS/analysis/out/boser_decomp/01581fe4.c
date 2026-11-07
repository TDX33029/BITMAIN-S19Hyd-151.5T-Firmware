// FUN_01581fe4 @ 01581fe4 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_01581fe4(int param_1)

{
  int iVar1;
  
  FUN_0152aba0(param_1 + 0x10);
  if (param_1 == -1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

