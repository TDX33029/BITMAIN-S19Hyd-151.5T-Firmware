// FUN_01445b28 @ 01445b28 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01445b28(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 1) {
    FUN_014459c8(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    param_1 = (int *)param_1[3];
  }
  if (iVar1 != 0 && param_1 != (int *)0x0) {
    thunk_FUN_01be4678(iVar1);
    return;
  }
  return;
}

