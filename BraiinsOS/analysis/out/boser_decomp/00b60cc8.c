// FUN_00b60cc8 @ 00b60cc8 size=96 calls_out=7 calls_in=0
// strings: 

void FUN_00b60cc8(int param_1)

{
  FUN_00b60c88(param_1 + 0x360);
  if (*(int *)(param_1 + 0x3d8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x3dc));
  }
  FUN_00b89fa0(param_1);
  FUN_00a96958(param_1 + 0xc0);
  FUN_00b8a02c(param_1 + 1000);
  FUN_00b8a09c(param_1 + 0x1a8);
  FUN_00b8a0e8(param_1 + 0x220);
  if (*(int *)(param_1 + 0x490) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494));
  return;
}

