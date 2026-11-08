// FUN_013b8790 @ 013b8790 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_013b8790(int param_1)

{
  FUN_01381b50();
  if (*(int *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(int *)(param_1 + 0xa8) + 0xc))(*(undefined4 *)(param_1 + 0xac));
  }
  if (*(char *)(param_1 + 0x90) == '\x03') {
    return;
  }
  FUN_01381bd4((char *)(param_1 + 0x90));
  return;
}

