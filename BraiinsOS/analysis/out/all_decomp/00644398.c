// FUN_00644398 @ 00644398 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_00644398(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x03') {
    if (*(char *)(param_1 + 0xc) == '\x04') {
      FUN_006f625c(*(undefined4 *)(param_1 + 8));
      return;
    }
    if (*(char *)(param_1 + 0xc) == '\x03') {
      if (*(int *)(param_1 + 0x10) == 0) {
        return;
      }
      FUN_006f5fbc(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
      return;
    }
  }
  return;
}

