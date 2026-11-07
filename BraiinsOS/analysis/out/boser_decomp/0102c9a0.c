// FUN_0102c9a0 @ 0102c9a0 size=148 calls_out=4 calls_in=0
// strings: 

void FUN_0102c9a0(int param_1)

{
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_0102c954(param_1 + 0x40);
    }
    FUN_00d7fa90(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xf8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_01030388();
    FUN_00d7fa90(param_1 + 0x80);
    return;
  }
  return;
}

