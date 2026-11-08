// FUN_0190b1f8 @ 0190b1f8 size=116 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0190b1f8(undefined4 *param_1,int param_2,short param_3,short param_4)

{
  if (param_2 == 0) {
    return 2;
  }
  param_2 = param_2 << 3;
  while( true ) {
    if ((*(short *)(param_1[1] + 0x28) == param_3) &&
       (param_3 != 0x178 || *(short *)(param_1[1] + 0x2a) == param_4)) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + -8;
    if (param_2 == 0) {
      return 2;
    }
  }
  return *param_1;
}

