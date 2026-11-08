// FUN_015fe01c @ 015fe01c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_015fe01c(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_0134bd64(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 8) < 0) {
    return;
  }
  FUN_0134aee0(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,0x10);
  return;
}

