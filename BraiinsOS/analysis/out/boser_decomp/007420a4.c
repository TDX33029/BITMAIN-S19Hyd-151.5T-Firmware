// FUN_007420a4 @ 007420a4 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_007420a4(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] != -0x80000000) {
      FUN_019bb7e0(param_1[2],param_1[3]);
      return;
    }
  }
  else if (*param_1 == 1) {
    if ((char)param_1[2] == '\0') {
      return;
    }
    FUN_00b91e68(param_1[6],param_1[7]);
    return;
  }
  return;
}

