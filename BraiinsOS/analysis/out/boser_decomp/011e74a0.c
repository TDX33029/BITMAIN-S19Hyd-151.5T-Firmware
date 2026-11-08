// FUN_011e74a0 @ 011e74a0 size=108 calls_out=3 calls_in=2
// strings: 

void FUN_011e74a0(int *param_1)

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
    if (*(char *)((int)param_1 + 0x5d) == '\x03') {
      FUN_01431b40(param_1 + 2);
    }
    else if (*(char *)((int)param_1 + 0x5d) != '\0') {
      return;
    }
    FUN_00a43aa8(param_1 + 0x16);
    return;
  }
  return;
}

