// FUN_00daae40 @ 00daae40 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_00daae40(int param_1)

{
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
    FUN_01aa45e4(param_1 + 0x80);
  }
  FUN_00d383c8(param_1);
  if (*(int *)(param_1 + 0x90) < -0x7ffffffd) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  return;
}

