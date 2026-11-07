// FUN_016432a4 @ 016432a4 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_016432a4(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_0164360c(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 1;
  return;
}

