// FUN_01224ac0 @ 01224ac0 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_01224ac0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01965c98(param_2);
  if (iVar1 == 0) {
    FUN_01248c20(param_1,param_2);
    return;
  }
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = iVar1;
  return;
}

