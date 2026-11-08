// FUN_00d37cb0 @ 00d37cb0 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_00d37cb0(int *param_1)

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
    if ((char)param_1[0xb] == '\x03') {
      FUN_00d3238c(param_1 + 6);
      FUN_00d32150(param_1 + 5);
      return;
    }
    if ((char)param_1[0xb] == '\0') {
      FUN_00d32150(param_1 + 2);
      FUN_00d3238c(param_1 + 3);
      return;
    }
    return;
  }
  return;
}

