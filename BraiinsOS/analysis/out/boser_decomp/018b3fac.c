// FUN_018b3fac @ 018b3fac size=84 calls_out=1 calls_in=1
// strings: 

short FUN_018b3fac(short *param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    do {
      sVar1 = FUN_018a82b8(param_1);
      if (sVar1 == 0x17) {
        if (*param_1 == 10) {
          return param_1[1];
        }
        return 10;
      }
      param_1 = param_1 + 10;
      param_2 = param_2 + -0x14;
    } while (param_2 != 0);
  }
  return 10;
}

