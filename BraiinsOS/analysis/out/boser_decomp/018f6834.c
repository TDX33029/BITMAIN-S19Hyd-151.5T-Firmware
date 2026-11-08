// FUN_018f6834 @ 018f6834 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_018f6834(char *param_1)

{
  if ((*param_1 == '\0') && (*(int *)(param_1 + 4) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  }
  FUN_018f6864(param_1 + 0x18);
  return;
}

