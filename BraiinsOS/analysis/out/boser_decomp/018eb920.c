// FUN_018eb920 @ 018eb920 size=84 calls_out=1 calls_in=1
// strings: 

char * FUN_018eb920(char *param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    do {
      sVar1 = FUN_018eb4c8(param_1);
      if (sVar1 == 0x10) {
        if (*param_1 == '\x04') {
          return param_1 + 4;
        }
        return (char *)0x0;
      }
      param_1 = param_1 + 0x14;
      param_2 = param_2 + -0x14;
    } while (param_2 != 0);
  }
  return (char *)0x0;
}

