// FUN_00db4100 @ 00db4100 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00db4100(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x4e] != 0) {
    thunk_FUN_016d3fb4(param_1[0x4f]);
  }
  if (param_1[0x51] != 0) {
    thunk_FUN_016d3fb4(param_1[0x52]);
  }
  FUN_00db41bc(param_1);
  return;
}

