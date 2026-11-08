// FUN_00d9a0b8 @ 00d9a0b8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00d9a0b8(int param_1)

{
  if (*(char *)(param_1 + 0xa5) == '\0') {
    FUN_00d82ff4(param_1 + 0x70);
    return;
  }
  if (*(char *)(param_1 + 0xa5) == '\x03') {
    FUN_00d830f4();
    *(undefined1 *)(param_1 + 0xa4) = 0;
    return;
  }
  return;
}

