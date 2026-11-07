// FUN_018eb8cc @ 018eb8cc size=84 calls_out=1 calls_in=1
// strings: 

undefined2 FUN_018eb8cc(char *param_1,int param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    do {
      sVar1 = FUN_018eb4c8(param_1);
      if (sVar1 == 0x1a) {
        if (*param_1 == '\v') {
          return *(undefined2 *)(param_1 + 2);
        }
        return 10;
      }
      param_1 = param_1 + 0x14;
      param_2 = param_2 + -0x14;
    } while (param_2 != 0);
  }
  return 10;
}

