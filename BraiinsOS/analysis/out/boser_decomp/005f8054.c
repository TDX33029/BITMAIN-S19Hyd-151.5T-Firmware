// FUN_005f8054 @ 005f8054 size=40 calls_out=2 calls_in=12
// strings: 

void FUN_005f8054(int param_1)

{
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    return;
  }
  FUN_01272b84(param_1);
  FUN_00a4241c(param_1 + 0x30);
  return;
}

