// FUN_017d0cf0 @ 017d0cf0 size=124 calls_out=7 calls_in=2
// strings: 

void FUN_017d0cf0(int *param_1)

{
  FUN_017c49dc();
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1b)) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  FUN_01706d0c(param_1 + 0x10);
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x20]);
  FUN_017d0dd4(param_1 + 0x22);
  FUN_01772dfc(param_1 + 0x26);
  return;
}

