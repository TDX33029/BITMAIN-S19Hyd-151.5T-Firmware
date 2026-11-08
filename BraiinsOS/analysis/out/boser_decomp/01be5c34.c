// FUN_01be5c34 @ 01be5c34 size=76 calls_out=0 calls_in=1
// strings: 

float FUN_01be5c34(float param_1,float param_2)

{
  if ((uint)ABS(param_1) < 0x7f800001) {
    if ((uint)ABS(param_2) < 0x7f800001) {
      if (-((int)param_2 >> 0x1f) == -((int)param_1 >> 0x1f)) {
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        return param_2;
      }
      if ((int)param_1 < 0) {
        param_2 = param_1;
      }
      return param_2;
    }
    param_2 = param_1;
  }
  return param_2;
}

