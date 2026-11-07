// FUN_013527b4 @ 013527b4 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_013527b4(byte *param_1)

{
  if (*param_1 != 0xb) {
    if (*param_1 < 10) {
      return;
    }
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(param_1 + 4));
      return;
    }
  }
  return;
}

