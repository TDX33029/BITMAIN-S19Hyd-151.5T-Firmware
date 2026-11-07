// FUN_0094ea34 @ 0094ea34 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_0094ea34(int *param_1,undefined4 *param_2)

{
  int iStack_14;
  int iStack_10;
  int local_c;
  
  if (param_2[1] == 0) {
    *param_1 = -0x7fffffff;
  }
  else {
    param_2[1] = param_2[1] + -1;
    FUN_00abb70c(&iStack_14,*param_2);
    if (iStack_14 == -0x7fffffff) {
      *param_1 = -0x7ffffffe;
      param_1[1] = iStack_10;
    }
    else {
      *param_1 = iStack_14;
      param_1[1] = iStack_10;
      param_1[2] = local_c;
    }
  }
  return;
}

