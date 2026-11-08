// FUN_00f87d18 @ 00f87d18 size=36 calls_out=2 calls_in=1
// strings: 

void FUN_00f87d18(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 2) {
    FUN_00dd1234();
    return;
  }
  if (*(int *)(param_1 + 0x10) + 0x7fffffeaU < 4) {
    return;
  }
  FUN_00f2b248();
  return;
}

