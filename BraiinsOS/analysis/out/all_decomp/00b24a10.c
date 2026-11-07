// FUN_00b24a10 @ 00b24a10 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00b24a10(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    FUN_00c8204c(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if ((*(char *)(param_1 + 0x1c) == '\x03') && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_00c8204c(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1);
  }
  FUN_00c822ec(*(undefined4 *)(param_1 + 8));
  return;
}

