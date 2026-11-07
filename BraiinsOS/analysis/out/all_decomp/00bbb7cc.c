// FUN_00bbb7cc @ 00bbb7cc size=84 calls_out=3 calls_in=0
// strings: 

void FUN_00bbb7cc(int param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x03') {
    if (*(int *)(param_1 + 0x14) == 0) {
      return;
    }
    FUN_00c8204c(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1);
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    FUN_00b9f9bc(param_1 + 0x18);
    FUN_00c822ec(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

