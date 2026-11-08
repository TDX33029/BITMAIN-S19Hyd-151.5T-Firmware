// FUN_01af5c38 @ 01af5c38 size=128 calls_out=1 calls_in=2
// strings: 

void FUN_01af5c38(int *param_1,int *param_2)

{
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*param_2 == 0) {
    *param_1 = -0x7fffffd2;
  }
  else if (param_2[2] == param_2[1]) {
    *param_1 = -0x7fffffd2;
    *param_2 = 0;
  }
  else {
    FUN_01af61c4(&local_30,param_2);
    if (local_30 != -0x7fffffd3) {
      *param_2 = 0;
    }
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
    param_1[3] = iStack_24;
    param_1[4] = local_20;
    param_1[5] = iStack_1c;
    param_1[6] = iStack_18;
    param_1[7] = iStack_14;
  }
  return;
}

