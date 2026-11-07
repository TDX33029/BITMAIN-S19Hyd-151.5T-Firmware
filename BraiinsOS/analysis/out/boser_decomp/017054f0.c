// FUN_017054f0 @ 017054f0 size=92 calls_out=5 calls_in=3
// strings: 

void FUN_017054f0(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1b)) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  FUN_01a8c248(param_1 + 0x10);
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x20]);
  FUN_0181eb40(param_1 + 0x22);
  return;
}

