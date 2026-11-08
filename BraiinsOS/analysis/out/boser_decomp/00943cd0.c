// FUN_00943cd0 @ 00943cd0 size=92 calls_out=3 calls_in=12
// strings: 

void FUN_00943cd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[7] != 0) {
    do {
      iVar1 = FUN_0118c914(param_1 + 3);
      iVar2 = param_1[7];
      param_1[7] = iVar2 + -1;
      FUN_009435a8(iVar1 + -0x90);
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

