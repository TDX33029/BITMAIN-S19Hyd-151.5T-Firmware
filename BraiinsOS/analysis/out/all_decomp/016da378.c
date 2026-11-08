// FUN_016da378 @ 016da378 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_016da378(uint param_1,uint param_2,int param_3)

{
  software_interrupt(0);
  if (-1 < (int)param_1) {
    if (param_1 < param_2) {
      FUN_016dd606(param_1 + param_3,0,param_2 - param_1);
      param_1 = 0;
    }
    else {
      param_1 = 0;
    }
  }
  FUN_016d3496(param_1);
  return;
}

