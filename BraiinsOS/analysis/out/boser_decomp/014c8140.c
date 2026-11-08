// FUN_014c8140 @ 014c8140 size=112 calls_out=1 calls_in=2
// strings: 

void FUN_014c8140(int *param_1,int *param_2,int *param_3,int param_4)

{
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  
  if ((param_4 == 4) && (*param_3 == *param_2)) {
    *param_1 = -0x7fffffeb;
  }
  else {
    FUN_0127f57c(&local_20,param_3,param_4);
    if (local_20 == -0x7fffffeb) {
      *param_1 = (int)&DAT_80000016;
      param_1[1] = local_1c;
    }
    else {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = iStack_18;
      param_1[3] = iStack_14;
    }
  }
  return;
}

