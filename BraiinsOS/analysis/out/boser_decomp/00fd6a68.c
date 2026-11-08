// FUN_00fd6a68 @ 00fd6a68 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00fd6a68(int param_1)

{
  if (*(char *)(param_1 + 0x6c) == '\0') {
    FUN_00fd69f8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x6c) == '\x03') {
    FUN_00fd69f8(param_1 + 0x28);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    *(undefined1 *)(param_1 + 0x6d) = 0;
    return;
  }
  return;
}

