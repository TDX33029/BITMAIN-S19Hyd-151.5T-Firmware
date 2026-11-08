// FUN_014883e8 @ 014883e8 size=44 calls_out=2 calls_in=10
// strings: 

void FUN_014883e8(int param_1)

{
  if (*(int *)(param_1 + 0x28) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  FUN_00b0db90(param_1 + 0x1c);
  return;
}

