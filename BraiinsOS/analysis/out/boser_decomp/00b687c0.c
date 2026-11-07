// FUN_00b687c0 @ 00b687c0 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00b687c0(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_0124f320(param_1 + 0x8c);
  }
  if (*(int *)(param_1 + 0xcc) == -0x80000000) {
    return;
  }
  FUN_01222e90((int *)(param_1 + 0xcc));
  return;
}

