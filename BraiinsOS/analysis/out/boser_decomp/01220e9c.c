// FUN_01220e9c @ 01220e9c size=68 calls_out=1 calls_in=1
// strings: 

int FUN_01220e9c(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    param_1[1] = 0;
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_1 = 0;
  }
  if (param_1[2] == 1) {
    iVar1 = FUN_0122143c(param_1 + 3);
    return iVar1;
  }
  return 0;
}

