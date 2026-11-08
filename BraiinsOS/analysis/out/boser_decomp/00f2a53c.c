// FUN_00f2a53c @ 00f2a53c size=124 calls_out=4 calls_in=2
// strings: 

void FUN_00f2a53c(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0xffe) == '\0') {
      FUN_00f27d00(param_1 + 0x20a);
    }
    else {
      if (*(char *)((int)param_1 + 0xffe) != '\x03') {
        return;
      }
      FUN_00f28240(param_1 + 2);
    }
    FUN_005faf6c(param_1 + 0x3fe);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar1 = param_1[2];
  bVar2 = iVar1 == 0 && param_1[3] == 0;
  if (iVar1 != 0 || param_1[3] != 0) {
    iVar1 = param_1[4];
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return;
  }
  FUN_00f80320(iVar1,param_1[5]);
  return;
}

