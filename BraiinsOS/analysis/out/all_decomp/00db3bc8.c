// FUN_00db3bc8 @ 00db3bc8 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00db3bc8(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x78] != 0) {
    thunk_FUN_016d3fb4(param_1[0x79]);
  }
  if (param_1[0x7b] != 0) {
    thunk_FUN_016d3fb4(param_1[0x7c]);
  }
  FUN_00db3c14(param_1);
  return;
}

