// FUN_00841e0c @ 00841e0c size=84 calls_out=3 calls_in=0
// strings: 

void FUN_00841e0c(int param_1)

{
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    FUN_008b472c(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1);
    return;
  }
  if (*(char *)(param_1 + 8) == '\x04') {
    FUN_008432a0(param_1 + 0x10);
    FUN_008b4548(*(undefined4 *)(param_1 + 4));
    return;
  }
  return;
}

