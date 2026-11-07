// FUN_006ea07c @ 006ea07c size=104 calls_out=2 calls_in=0
// strings: 

void FUN_006ea07c(int *param_1)

{
  if (*param_1 != -0x80000000) {
    if (*param_1 != 0) {
      thunk_FUN_016d3fb4(param_1[1]);
    }
    if (param_1[3] != 0) {
      thunk_FUN_016d3fb4(param_1[4]);
    }
  }
  if (param_1[0xc] == -0x80000000) {
    return;
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_016d3fb4(param_1[0xd]);
  }
  FUN_006472c4(param_1 + 6);
  return;
}

