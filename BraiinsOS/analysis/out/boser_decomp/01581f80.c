// FUN_01581f80 @ 01581f80 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_01581f80(int param_1)

{
  int iVar1;
  
  FUN_0152aea8(param_1 + 0x10);
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

