// FUN_0118c974 @ 0118c974 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_0118c974(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_006fb2d8(param_1 + 3);
      iVar2 = param_1[7];
      param_1[7] = iVar2 + -1;
      FUN_0118c9d0(iVar1 + -0x40);
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

