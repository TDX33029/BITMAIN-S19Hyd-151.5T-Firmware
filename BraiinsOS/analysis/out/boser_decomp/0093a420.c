// FUN_0093a420 @ 0093a420 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_0093a420(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x35] == '\x03') {
      FUN_0093a454(param_1 + 2);
      return;
    }
    return;
  }
  if (*param_1 == 1) {
    FUN_00db19c4(param_1 + 2);
    return;
  }
  return;
}

