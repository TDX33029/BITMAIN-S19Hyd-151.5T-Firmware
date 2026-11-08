// FUN_01643268 @ 01643268 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_01643268(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_01643728(param_1,param_2);
    return;
  }
  *param_1 = 0x80000001;
  param_1[1] = iVar1;
  return;
}

