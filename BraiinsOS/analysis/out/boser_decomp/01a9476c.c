// FUN_01a9476c @ 01a9476c size=120 calls_out=9 calls_in=1
// strings: 

void FUN_01a9476c(int param_1)

{
  if (*(int *)(param_1 + 0x60) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  FUN_0165cb1c(param_1);
  FUN_0165cb1c(param_1 + 0xc);
  FUN_0165cb6c(param_1 + 0x18);
  FUN_0165cba8(param_1 + 0x24);
  FUN_01a94878(param_1 + 0x30);
  FUN_01a948c8(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x6c) != -0x80000000) {
    FUN_0165cbf8();
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),4,0x10);
  FUN_006a41c0(param_1 + 0x54);
  return;
}

