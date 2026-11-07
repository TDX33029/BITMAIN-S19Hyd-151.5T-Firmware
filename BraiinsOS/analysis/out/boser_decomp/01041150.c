// FUN_01041150 @ 01041150 size=148 calls_out=4 calls_in=15
// strings: 

void FUN_01041150(int param_1)

{
  if (*(int *)(param_1 + 0xa0) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0x4c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  FUN_011e7044(param_1 + 8);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (-0x7fffffff < *(int *)(param_1 + 0x40)) {
    FUN_019bb7e0(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x58) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 100) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  }
  FUN_006a41c0(param_1 + 0x94);
  if (*(int *)(param_1 + 0x70) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  FUN_00b3bc54((int *)(param_1 + 0xa0));
  return;
}

