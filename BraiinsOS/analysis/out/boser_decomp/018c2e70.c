// FUN_018c2e70 @ 018c2e70 size=104 calls_out=4 calls_in=1
// strings: 

void FUN_018c2e70(int param_1)

{
  FUN_01443048(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_01443048(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x80) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  if (*(int *)(param_1 + 0x8c) != -0x80000000) {
    FUN_006a41c0();
  }
  FUN_018c2f5c(param_1 + 0x30);
  FUN_018c2f5c(param_1 + 0x48);
  FUN_018c2f5c(param_1 + 0x60);
  if (*(int *)(param_1 + 0x98) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  return;
}

