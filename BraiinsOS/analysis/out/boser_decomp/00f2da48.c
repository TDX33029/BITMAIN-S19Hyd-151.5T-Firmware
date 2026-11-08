// FUN_00f2da48 @ 00f2da48 size=176 calls_out=8 calls_in=2
// strings: 

void FUN_00f2da48(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x15a] == '\0') {
      FUN_00b76614(param_1 + 2);
      FUN_00d31b70(param_1 + 6);
      FUN_005f983c(param_1 + 0x14a);
    }
    else {
      if ((char)param_1[0x15a] != '\x03') {
        return;
      }
      if (param_1[0x14d] != 0) {
        FUN_005efd2c(param_1 + 0x14e);
      }
      FUN_00f2d6fc(param_1 + 0x40);
      FUN_005f0424(param_1 + 0x18);
      FUN_005f983c(param_1 + 0x14a);
    }
    FUN_019d8724(param_1 + 0x16);
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

