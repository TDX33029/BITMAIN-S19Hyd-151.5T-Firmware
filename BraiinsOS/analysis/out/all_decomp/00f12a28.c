// FUN_00f12a28 @ 00f12a28 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_00f12a28(int *param_1,undefined4 *param_2)

{
  int iStack_14;
  int iStack_10;
  int local_c;
  
  if (param_2[1] == 0) {
    *param_1 = -0x7fffffff;
    return;
  }
  param_2[1] = param_2[1] + -1;
  FUN_00ea971c(&iStack_14,*param_2);
  if (iStack_14 == -0x7fffffff) {
    *param_1 = -0x7ffffffe;
    param_1[1] = iStack_10;
    return;
  }
  *param_1 = iStack_14;
  param_1[1] = iStack_10;
  param_1[2] = local_c;
  return;
}

