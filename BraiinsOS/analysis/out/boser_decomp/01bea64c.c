// FUN_01bea64c @ 01bea64c size=48 calls_out=2 calls_in=1
// strings: 

void FUN_01bea64c(uint param_1,uint param_2,int param_3)

{
  software_interrupt(0);
  if (-1 < (int)param_1) {
    if (param_1 < param_2) {
      FUN_01bed93e(param_1 + param_3,0,param_2 - param_1);
      param_1 = 0;
    }
    else {
      param_1 = 0;
    }
  }
  FUN_01be3b5a(param_1);
  return;
}

