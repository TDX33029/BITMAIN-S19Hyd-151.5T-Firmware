// FUN_01ab0ac0 @ 01ab0ac0 size=56 calls_out=2 calls_in=4
// strings: 

void FUN_01ab0ac0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  FUN_01ab0588(param_1 + 4);
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

