// FUN_00b71c38 @ 00b71c38 size=64 calls_out=2 calls_in=3
// strings: 

void FUN_00b71c38(int *param_1)

{
  if (*param_1 == 0 && param_1[1] == 0) {
    if ((char)param_1[2] == '\x04') {
      return;
    }
    FUN_0187266c((char)param_1[2],param_1[3]);
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_01443048(param_1[2],param_1[3]);
  return;
}

