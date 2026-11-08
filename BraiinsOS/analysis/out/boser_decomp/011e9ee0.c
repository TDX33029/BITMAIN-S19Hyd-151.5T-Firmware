// FUN_011e9ee0 @ 011e9ee0 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_011e9ee0(int param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    FUN_01a17e08(param_1 + 4);
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  FUN_011e80e4(param_1 + 0x20);
  return;
}

