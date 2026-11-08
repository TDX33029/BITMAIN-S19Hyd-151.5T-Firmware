// FUN_0118c8b8 @ 0118c8b8 size=92 calls_out=3 calls_in=7
// strings: 

void FUN_0118c8b8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_0118c914(param_1 + 3);
      iVar2 = param_1[7];
      param_1[7] = iVar2 + -1;
      FUN_0117f7f0(iVar1 + -0x90);
    } while (iVar2 + -1 != 0);
  }
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = param_1[1];
  }
  if (*param_1 != 0 && iVar1 != 0) {
    thunk_FUN_01be4678(param_1[2]);
    return;
  }
  return;
}

