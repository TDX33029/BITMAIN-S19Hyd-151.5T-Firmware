// FUN_00b938dc @ 00b938dc size=64 calls_out=2 calls_in=7
// strings: 

void FUN_00b938dc(int *param_1)

{
  if (*param_1 == 0 && param_1[1] == 0) {
    if ((char)param_1[2] == '\x04') {
      return;
    }
    FUN_00b9391c((char)param_1[2],param_1[3]);
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_00f80320(param_1[2],param_1[3]);
  return;
}

