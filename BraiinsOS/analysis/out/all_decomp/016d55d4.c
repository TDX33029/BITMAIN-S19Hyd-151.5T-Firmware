// FUN_016d55d4 @ 016d55d4 size=78 calls_out=0 calls_in=4
// strings: 

float FUN_016d55d4(float param_1,float param_2)

{
  if (0x7f800000 < (uint)ABS(param_1)) {
    return param_2;
  }
  if (0x7f800000 < (uint)ABS(param_2)) {
    return param_1;
  }
  if (-((int)param_2 >> 0x1f) == -((int)param_1 >> 0x1f)) {
    if (param_2 <= param_1) {
      param_2 = param_1;
    }
    return param_2;
  }
  if ((int)param_1 < 0) {
    param_1 = param_2;
  }
  return param_1;
}

