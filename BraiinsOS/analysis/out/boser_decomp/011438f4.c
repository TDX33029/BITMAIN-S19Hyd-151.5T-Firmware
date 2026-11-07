// FUN_011438f4 @ 011438f4 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_011438f4(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x2d] == '\x03') {
      FUN_01143928(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_00fe40e4(param_1 + 2);
    return;
  }
  return;
}

