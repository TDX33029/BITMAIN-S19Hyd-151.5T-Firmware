// FUN_016d6208 @ 016d6208 size=138 calls_out=0 calls_in=6
// strings: 

float FUN_016d6208(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (0x95 < (uint)ABS(param_1) >> 0x17) {
    return param_1;
  }
  fVar1 = param_1;
  if ((int)param_1 < 0) {
    fVar1 = -param_1;
  }
  if ((uint)ABS(param_1) >> 0x17 < 0x7e) {
    return param_1 * 0.0;
  }
  fVar2 = ((fVar1 + 8388608.0) - 8388608.0) - fVar1;
  fVar1 = fVar1 + fVar2;
  if (fVar2 <= 0.5) {
    if (fVar2 <= -0.5) {
      fVar1 = fVar1 + 1.0;
    }
  }
  else {
    fVar1 = fVar1 - 1.0;
  }
  if ((int)param_1 < 0) {
    return -fVar1;
  }
  return fVar1;
}

