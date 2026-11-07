// FUN_017d9c80 @ 017d9c80 size=60 calls_out=1 calls_in=5
// strings: 

void FUN_017d9c80(int param_1)

{
  if (*(char *)(param_1 + 0x10c) == '\0') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
    return;
  }
  if (*(char *)(param_1 + 0x10c) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
    *(undefined1 *)(param_1 + 0x10d) = 0;
    return;
  }
  return;
}

