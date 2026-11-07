// FUN_0121f99c @ 0121f99c size=80 calls_out=1 calls_in=1
// strings: 

int FUN_0121f99c(int *param_1)

{
  int iVar1;
  
  if (param_1[7] != 2) {
    if ((param_1[7] & 1U) != 0) {
      iVar1 = param_1[8];
      param_1[8] = 0;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    param_1[7] = 2;
  }
  if (*param_1 == 1) {
    iVar1 = FUN_0121ff68(param_1 + 1);
    return iVar1;
  }
  return 0;
}

