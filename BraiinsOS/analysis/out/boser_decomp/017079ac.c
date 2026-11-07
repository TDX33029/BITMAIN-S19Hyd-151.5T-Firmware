// FUN_017079ac @ 017079ac size=124 calls_out=7 calls_in=0
// strings: 

void FUN_017079ac(int *param_1)

{
  FUN_017424d8();
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1b)) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  FUN_01706d0c(param_1 + 0x10);
  FUN_017793c0(param_1);
  FUN_0178e884(param_1[0x20]);
  FUN_0181eb40(param_1 + 0x22);
  FUN_01707a90(param_1 + 0x26);
  return;
}

