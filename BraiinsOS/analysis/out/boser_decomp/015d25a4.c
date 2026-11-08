// FUN_015d25a4 @ 015d25a4 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_015d25a4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_015d2600(param_1 + 3);
      iVar2 = param_1[7];
      param_1[7] = iVar2 + -1;
      FUN_015d1e38(iVar1 + -0x18);
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

