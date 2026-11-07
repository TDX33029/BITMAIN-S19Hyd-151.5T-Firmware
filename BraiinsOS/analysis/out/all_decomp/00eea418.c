// FUN_00eea418 @ 00eea418 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00eea418(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x34] != 0) {
    thunk_FUN_016d3fb4(param_1[0x35]);
  }
  if (param_1[0x37] != 0) {
    thunk_FUN_016d3fb4(param_1[0x38]);
  }
  FUN_00eea200(param_1);
  return;
}

