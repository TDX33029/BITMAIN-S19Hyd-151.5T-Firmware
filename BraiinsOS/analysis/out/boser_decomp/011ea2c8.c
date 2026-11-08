// FUN_011ea2c8 @ 011ea2c8 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_011ea2c8(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x185) == '\x03') {
      FUN_011e9ee0(param_1 + 0x54);
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
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

