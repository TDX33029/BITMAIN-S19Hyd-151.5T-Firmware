// FUN_011cb058 @ 011cb058 size=84 calls_out=5 calls_in=0
// strings: 

void FUN_011cb058(int param_1)

{
  FUN_006c487c(param_1 + 0x40);
  FUN_006c4b58(param_1 + 0x4c);
  FUN_006b36a8(param_1);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x58) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 100) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  }
  FUN_015d1344(param_1 + 0x20);
  return;
}

