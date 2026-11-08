// FUN_00600b74 @ 00600b74 size=156 calls_out=2 calls_in=5
// strings: 

void FUN_00600b74(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_4 < 0) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (param_4 == 0) {
      iVar1 = 1;
      goto LAB_00600bf8;
    }
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
LAB_00600bf8:
  param_1[1] = iVar1;
  param_1[2] = param_4;
  *param_1 = 0;
  return;
}

