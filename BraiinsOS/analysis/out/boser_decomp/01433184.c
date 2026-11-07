// FUN_01433184 @ 01433184 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_01433184(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_0143303c(param_1 + 2);
      return;
    }
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

