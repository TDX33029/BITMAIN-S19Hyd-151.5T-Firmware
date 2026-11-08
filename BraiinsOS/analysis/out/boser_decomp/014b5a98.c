// FUN_014b5a98 @ 014b5a98 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_014b5a98(undefined2 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_014b593c(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 2) = iVar1;
  *param_1 = 1;
  return;
}

