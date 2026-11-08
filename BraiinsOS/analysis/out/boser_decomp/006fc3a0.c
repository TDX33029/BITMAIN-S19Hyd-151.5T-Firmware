// FUN_006fc3a0 @ 006fc3a0 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_006fc3a0(int param_1)

{
  int iVar1;
  
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,0x14);
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

