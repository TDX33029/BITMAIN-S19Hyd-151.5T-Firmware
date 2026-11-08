// FUN_011e86a0 @ 011e86a0 size=172 calls_out=5 calls_in=2
// strings: 

void FUN_011e86a0(int *param_1)

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
    if (*(char *)((int)param_1 + 0x185) == '\x03') {
      if ((char)param_1[0x5b] == '\x03') {
        FUN_01a17e08(param_1 + 0x55);
        if (param_1[0x56] != 0) {
          (**(code **)(param_1[0x56] + 0xc))(param_1[0x57]);
        }
      }
      FUN_011e80e4(param_1 + 0x5c);
      iVar1 = 0x10;
      FUN_011e81bc(param_1 + 2);
    }
    else {
      iVar1 = 0xb0;
      if (*(char *)((int)param_1 + 0x185) != '\0') {
        return;
      }
    }
    FUN_011e7f9c((int)(param_1 + 2) + iVar1);
    return;
  }
  return;
}

