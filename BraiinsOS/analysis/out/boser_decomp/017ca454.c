// FUN_017ca454 @ 017ca454 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_017ca454(int param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_017c34d8(param_1);
    FUN_0177327c(param_1 + 0xc);
    return;
  }
  if (*(char *)(param_1 + 0x60) != '\x03') {
    return;
  }
  FUN_0177327c(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x30) == 2) {
    return;
  }
  FUN_017c34d8((int *)(param_1 + 0x30));
  return;
}

