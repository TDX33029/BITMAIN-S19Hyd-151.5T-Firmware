// FUN_017d2a70 @ 017d2a70 size=112 calls_out=0 calls_in=3
// strings: 

void FUN_017d2a70(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
  if (param_2[1] == 0) {
    (**(code **)(param_2[3] + 0x18))(param_1,param_2[2]);
    return;
  }
  *param_1 = 1;
  param_1[1] = 0;
  iVar1 = param_2[3];
  param_1[4] = iVar1;
  param_1[2] = iVar1;
  param_1[3] = 0;
  param_1[5] = 0;
  return;
}

