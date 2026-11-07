// FUN_01633af4 @ 01633af4 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_01633af4(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (0x7fffffff < param_2) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 1;
    *param_1 = 0;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(param_2);
  if (iVar1 == 0) {
    param_1[1] = 1;
    param_1[2] = param_2;
    *param_1 = 1;
    return;
  }
  param_1[1] = param_2;
  param_1[2] = iVar1;
  *param_1 = 0;
  return;
}

