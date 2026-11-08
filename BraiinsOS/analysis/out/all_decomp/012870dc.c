// FUN_012870dc @ 012870dc size=136 calls_out=2 calls_in=2
// strings: 

void FUN_012870dc(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 < 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    iVar1 = thunk_FUN_016d4a50(param_4);
  }
  else {
    iVar1 = thunk_FUN_016d4ea4(param_3,param_4);
  }
  if (iVar1 == 0) {
    param_1[1] = 1;
    param_1[2] = param_4;
    *param_1 = 1;
    return;
  }
  param_1[1] = iVar1;
  param_1[2] = param_4;
  *param_1 = 0;
  return;
}

