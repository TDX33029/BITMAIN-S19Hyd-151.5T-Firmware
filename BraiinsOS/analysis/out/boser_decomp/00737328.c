// FUN_00737328 @ 00737328 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00737328(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[10] == '\x03') {
      FUN_019bb7e0(param_1[2],param_1[3]);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_00799fb0(param_1 + 1);
    return;
  }
  return;
}

