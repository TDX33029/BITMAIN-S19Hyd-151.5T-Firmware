// FUN_0165cfa8 @ 0165cfa8 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_0165cfa8(int param_1)

{
  if (*(int *)(param_1 + 0x40) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x4c) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x58) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 100) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x70) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    return;
  }
  FUN_0165cbf8(param_1 + 0x30);
  return;
}

