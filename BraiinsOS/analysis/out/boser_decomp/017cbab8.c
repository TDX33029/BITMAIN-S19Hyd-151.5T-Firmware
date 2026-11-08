// FUN_017cbab8 @ 017cbab8 size=88 calls_out=4 calls_in=1
// strings: 

void FUN_017cbab8(int param_1)

{
  FUN_017cba84();
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0x10))
              (param_1 + 0x34,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x48));
  if (*(byte *)(param_1 + 0x90) < 4) {
    FUN_0187266c(*(byte *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  FUN_012840cc(param_1 + 0xa0);
  return;
}

