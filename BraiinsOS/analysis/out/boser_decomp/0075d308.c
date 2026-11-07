// FUN_0075d308 @ 0075d308 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_0075d308(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    FUN_00783e98(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\x04') {
    FUN_0075d1e4(*(undefined4 *)(param_1 + 0x10));
    FUN_00783d74(*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

