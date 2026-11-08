// FUN_006fc100 @ 006fc100 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_006fc100(int param_1)

{
  FUN_006f4f20(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x44) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  }
  FUN_0134bd64(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0x5c) == -0x80000000) {
    return;
  }
  FUN_006e8278((int *)(param_1 + 0x5c));
  return;
}

