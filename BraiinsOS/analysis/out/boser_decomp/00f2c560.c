// FUN_00f2c560 @ 00f2c560 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_00f2c560(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x102) == '\0') {
      FUN_00f2b720(param_1 + 0xe);
      FUN_00d32150(param_1 + 0x3f);
      return;
    }
    if (*(char *)((int)param_1 + 0x102) == '\x03') {
      FUN_00f2b838(param_1 + 0x1a);
      *(undefined2 *)(param_1 + 0x40) = 0;
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

