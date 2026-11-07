// FUN_00d345c0 @ 00d345c0 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_00d345c0(int *param_1)

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
    if (*(char *)((int)param_1 + 0xffe) == '\0') {
      FUN_00d34688(param_1 + 0x20a);
    }
    else {
      if (*(char *)((int)param_1 + 0xffe) != '\x03') {
        return;
      }
      FUN_00d34688(param_1 + 2);
      FUN_005f312c(param_1 + 500);
    }
    FUN_005faf6c(param_1 + 0x3fe);
    return;
  }
  return;
}

