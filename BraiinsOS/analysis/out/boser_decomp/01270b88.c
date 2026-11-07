// FUN_01270b88 @ 01270b88 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_01270b88(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_012733cc(param_1,param_2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 7;
  return;
}

