// FUN_0177dbe8 @ 0177dbe8 size=108 calls_out=4 calls_in=1
// strings: 

void FUN_0177dbe8(int *param_1)

{
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_017793c0(param_1);
  }
  FUN_0177de5c(param_1[0x25]);
  if (((*(byte *)(param_1 + 0x20) != 0xb) && (9 < *(byte *)(param_1 + 0x20))) &&
     (param_1[0x22] != 0)) {
    thunk_FUN_01be4678(param_1[0x21]);
  }
  if (param_1[0x1e] == 0) {
    return;
  }
  FUN_01433540(param_1[0x1f]);
  return;
}

