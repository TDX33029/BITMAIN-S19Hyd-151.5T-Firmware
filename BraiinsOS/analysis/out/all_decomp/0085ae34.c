// FUN_0085ae34 @ 0085ae34 size=100 calls_out=3 calls_in=0
// strings: 

void FUN_0085ae34(int param_1)

{
  if (*(char *)(param_1 + 0x38d4) == '\x03') {
    if (*(char *)(param_1 + 8) == '\x04') {
      FUN_0085af1c(param_1 + 0x10);
      FUN_008b4548(*(undefined4 *)(param_1 + 4));
      return;
    }
    if (*(char *)(param_1 + 8) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_008b472c(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
      return;
    }
  }
  return;
}

