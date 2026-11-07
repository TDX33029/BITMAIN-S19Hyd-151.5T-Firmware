// FUN_01af5bb4 @ 01af5bb4 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_01af5bb4(int *param_1,int *param_2,char param_3)

{
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (((uint)param_2[2] < (uint)param_2[1]) && (param_3 == *(char *)(*param_2 + param_2[2]))) {
    FUN_01af347c(&local_30);
    if (local_30 == -0x7fffffd3) {
      *param_1 = -0x7fffffd3;
      param_1[1] = iStack_2c;
      param_1[2] = iStack_28;
    }
    else {
      *param_1 = local_30;
      param_1[1] = iStack_2c;
      param_1[2] = iStack_28;
      param_1[3] = iStack_24;
      param_1[4] = local_20;
      param_1[5] = iStack_1c;
      param_1[6] = iStack_18;
      param_1[7] = iStack_14;
    }
  }
  else {
    *param_1 = -0x7fffffd3;
    param_1[1] = 0;
  }
  return;
}

