// FUN_000539a0 @ 000539a0  size=64  callers=4
// program: bmminer


void FUN_000539a0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    FUN_0005503c(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_0005512c(param_1 + 0x28);
    return;
  }
  FUN_0005512c(param_1 + 0x28);
  return;
}

