// FUN_011ba98c @ 011ba98c size=68 calls_out=3 calls_in=1
// strings: 

void FUN_011ba98c(int *param_1)

{
  FUN_00aa3d3c(param_1 + 0x10);
  if (param_1[0x10] != 0) {
    thunk_FUN_016d3fb4(param_1[0x11]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_00a517d8(param_1);
  return;
}

