// FUN_00f26d10 @ 00f26d10 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_00f26d10(int *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[0x16] == '\x03') {
      FUN_01431b40(param_1 + 2);
      return;
    }
  }
  else if (*param_1 == 1) {
    if (param_1[4] == 0) {
      return;
    }
    FUN_00f80320(param_1[4],param_1[5]);
    return;
  }
  return;
}

