// FUN_01278960 @ 01278960 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01278960(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0167459c(param_2);
  if (iVar1 == 0) {
    FUN_01278570(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 2) = iVar1;
  *param_1 = 1;
  return;
}

