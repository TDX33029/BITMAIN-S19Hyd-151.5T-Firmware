// FUN_01989b80 @ 01989b80 size=116 calls_out=2 calls_in=5
// strings: 

void FUN_01989b80(int *param_1)

{
  if (*param_1 == 0x2f && param_1[1] == 0) {
    return;
  }
  if (param_1[0x18] != 0) {
    thunk_FUN_01be4678(param_1[0x19]);
  }
  if (param_1[0x1b] != 0) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  if (param_1[0x1e] != 0) {
    thunk_FUN_01be4678(param_1[0x1f]);
  }
  if (param_1[0x21] == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1[0x22]);
  return;
}

