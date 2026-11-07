// FUN_018c9b1c @ 018c9b1c size=92 calls_out=2 calls_in=1
// strings: 

void FUN_018c9b1c(char *param_1)

{
  if (*param_1 == '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x30) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    FUN_006a41c0(param_1 + 0x48);
  }
  FUN_018bc170();
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),8,0x40);
  return;
}

