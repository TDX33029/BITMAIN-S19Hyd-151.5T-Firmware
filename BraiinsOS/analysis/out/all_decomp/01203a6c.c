// FUN_01203a6c @ 01203a6c size=68 calls_out=2 calls_in=3
// strings: 

void FUN_01203a6c(int param_1)

{
  FUN_0115ccf0(param_1 + 0x1f8);
  FUN_0120010c(param_1 + 0x150);
  if (*(int *)(param_1 + 0x98) != -0x80000000) {
    FUN_0120010c(param_1);
  }
  if (*(int *)(param_1 + 0x140) == -0x80000000) {
    return;
  }
  FUN_0120010c(param_1 + 0xa8);
  return;
}

