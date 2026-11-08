// FUN_01be5e30 @ 01be5e30 size=96 calls_out=1 calls_in=1
// strings: 

void FUN_01be5e30(int *param_1)

{
  uint uVar1;
  double in_d0;
  
  uVar1 = ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) >> 0x14;
  if (uVar1 == 0) {
    if (in_d0 == 0.0) {
      *param_1 = 0;
    }
    else {
      FUN_01be5e30(SUB84(in_d0 * 1.8446744073709552e+19,0));
      *param_1 = *param_1 + -0x40;
    }
  }
  else if (uVar1 != 0x7ff) {
    *param_1 = uVar1 - 0x3fe;
  }
  return;
}

