// FUN_010be674 @ 010be674 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_010be674(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    if ((char)param_1[0xe] == '\x03') {
      FUN_00b71be0(param_1 + 9);
    }
    param_1 = param_1 + 4;
  }
  else {
    if ((char)param_1[0xf] != '\0') {
      return;
    }
    param_1 = param_1 + 1;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

