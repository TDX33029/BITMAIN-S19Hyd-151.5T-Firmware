// FUN_00b8bf3c @ 00b8bf3c size=96 calls_out=4 calls_in=1
// strings: 

void FUN_00b8bf3c(int *param_1)

{
  if ((char)param_1[3] == '\x03') {
    if ((char)param_1[0xd] == '\x03') {
      FUN_00b71be0(param_1 + 8);
      return;
    }
  }
  else if ((char)param_1[3] == '\x04') {
    FUN_005f0650(param_1 + 9);
    FUN_019bb7e0(param_1[4],param_1[5]);
    if (*param_1 == -0x80000000) {
      FUN_00799fb0(param_1);
      return;
    }
    return;
  }
  return;
}

