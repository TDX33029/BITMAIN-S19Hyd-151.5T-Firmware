// FUN_01ae156c @ 01ae156c size=80 calls_out=3 calls_in=2
// strings: 

void FUN_01ae156c(int *param_1)

{
  FUN_0134bd64(param_1[0xc],param_1[0xd]);
  if (param_1[0xf] != -0x80000000) {
    FUN_0134bd64(param_1[0xf],param_1[0x10]);
  }
  if (*param_1 != 0) {
    FUN_01ad879c(param_1 + 1);
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 4);
  return;
}

