// FUN_01a9815c @ 01a9815c size=80 calls_out=5 calls_in=1
// strings: 

void FUN_01a9815c(int param_1)

{
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  FUN_01a981f0(param_1);
  if (*(int *)(param_1 + 0x30) != -0x80000000) {
    FUN_0165cbf8();
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),4,0x10);
  FUN_006a41c0(param_1 + 0x18);
  return;
}

