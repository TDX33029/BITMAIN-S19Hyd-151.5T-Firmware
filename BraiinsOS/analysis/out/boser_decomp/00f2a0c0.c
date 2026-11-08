// FUN_00f2a0c0 @ 00f2a0c0 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_00f2a0c0(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0xb] == '\0') {
      FUN_00d32150(param_1 + 2);
      FUN_00f29fc8(param_1 + 3);
      return;
    }
    if ((char)param_1[0xb] == '\x03') {
      FUN_00f29fc8(param_1 + 6);
      FUN_00d32150(param_1 + 5);
      return;
    }
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

