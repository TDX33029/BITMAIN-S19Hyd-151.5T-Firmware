// FUN_01642eec @ 01642eec size=104 calls_out=1 calls_in=1
// strings: 

void FUN_01642eec(int param_1)

{
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x3c) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x48) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x54) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  if (*(int *)(param_1 + 0x60) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  return;
}

