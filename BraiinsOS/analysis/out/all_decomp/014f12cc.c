// FUN_014f12cc @ 014f12cc size=148 calls_out=1 calls_in=2
// strings: 

void FUN_014f12cc(undefined4 *param_1,uint param_2)

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

