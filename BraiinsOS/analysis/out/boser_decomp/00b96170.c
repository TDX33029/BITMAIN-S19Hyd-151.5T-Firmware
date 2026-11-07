// FUN_00b96170 @ 00b96170 size=88 calls_out=6 calls_in=5
// strings: 

void FUN_00b96170(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  if (*(int *)(param_1 + 0x94) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98));
  }
  FUN_007028c4(param_1 + 0x88);
  FUN_006775f0(param_1 + 0xac);
  FUN_01aae24c(param_1 + 0x20);
  FUN_006b3bf4(param_1);
  if (*(int *)(param_1 + 0x38) == -0x7fffffff) {
    return;
  }
  FUN_00b96444(param_1 + 0x30);
  return;
}

