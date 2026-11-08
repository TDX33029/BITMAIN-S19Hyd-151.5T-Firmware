// FUN_01659294 @ 01659294 size=96 calls_out=7 calls_in=2
// strings: 

void FUN_01659294(int param_1)

{
  FUN_0169f478();
  FUN_014fe2e4(param_1 + 0x268);
  FUN_0169f4e0(param_1 + 0x2d4);
  if (*(int *)(param_1 + 600) != -0x80000000) {
    FUN_0134aee0(*(int *)(param_1 + 600),*(undefined4 *)(param_1 + 0x25c),4,4);
  }
  FUN_016a231c(param_1 + 0xd8);
  if (*(int *)(param_1 + 200) != 2) {
    FUN_016a235c(param_1 + 0x18);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

