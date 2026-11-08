// FUN_01278b38 @ 01278b38 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_01278b38(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0167459c(param_2);
  if (iVar1 == 0) {
    FUN_0127b5bc(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 1;
  return;
}

