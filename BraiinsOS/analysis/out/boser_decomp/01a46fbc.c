// FUN_01a46fbc @ 01a46fbc size=56 calls_out=2 calls_in=1
// strings: 

void FUN_01a46fbc(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 != 3) {
    FUN_01a451b0(param_1 + 1);
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

