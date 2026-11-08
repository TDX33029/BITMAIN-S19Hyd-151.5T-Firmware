// FUN_00fd69b0 @ 00fd69b0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00fd69b0(int param_1)

{
  if (*(char *)(param_1 + 0x9c) == '\0') {
    FUN_00fd69f8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x9c) == '\x03') {
    FUN_00fd6a68(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x9d) = 0;
    return;
  }
  return;
}

