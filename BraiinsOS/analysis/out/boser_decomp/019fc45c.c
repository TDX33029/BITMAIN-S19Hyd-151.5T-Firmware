// FUN_019fc45c @ 019fc45c size=116 calls_out=3 calls_in=2
// strings: 

void FUN_019fc45c(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 1) {
    bVar2 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = param_1[4];
    }
    if (bVar2 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0xb] == '\0') {
      FUN_01139b38(param_1[2],param_1[3]);
    }
    else {
      if ((char)param_1[0xb] != '\x03') {
        return;
      }
      FUN_01139b38(param_1[9],param_1[10]);
    }
    FUN_0193c71c(param_1 + 4);
    return;
  }
  return;
}

