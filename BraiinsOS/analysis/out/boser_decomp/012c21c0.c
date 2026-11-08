// FUN_012c21c0 @ 012c21c0 size=64 calls_out=0 calls_in=1
// strings: 

bool FUN_012c21c0(short *param_1,uint param_2)

{
  if (param_2 < 2) {
    return false;
  }
  if (*param_1 == 0x2d2d && param_2 == 2) {
    return *param_1 != 0x2d2d;
  }
  return *param_1 == 0x2d2d;
}

