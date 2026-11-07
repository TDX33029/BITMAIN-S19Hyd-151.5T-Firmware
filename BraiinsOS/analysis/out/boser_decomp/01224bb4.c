// FUN_01224bb4 @ 01224bb4 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_01224bb4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_01224810(param_1,param_2);
    return;
  }
  *param_1 = 1;
  param_1[1] = iVar1;
  return;
}

