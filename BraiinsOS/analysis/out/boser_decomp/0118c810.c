// FUN_0118c810 @ 0118c810 size=116 calls_out=6 calls_in=1
// strings: 

void FUN_0118c810(int *param_1)

{
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_017109f8(param_1[2]);
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x27)) && (param_1[0x29] != 0)) {
    thunk_FUN_01be4678(param_1[0x28]);
  }
  FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  FUN_01139cd4(param_1);
  if (param_1[0x22] != 0) {
    FUN_0118c734(param_1 + 0x23);
  }
  FUN_0178e884(param_1[0x2c]);
  return;
}

