// FUN_00d97bc4 @ 00d97bc4 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_00d97bc4(int param_1)

{
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    FUN_00d430ac();
    return;
  }
  if (*(char *)(param_1 + 0x1d8) == '\x03') {
    FUN_00d97be4(param_1 + 0x98);
    return;
  }
  return;
}

