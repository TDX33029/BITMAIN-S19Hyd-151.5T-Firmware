// FUN_00c1b428 @ 00c1b428 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_00c1b428(int param_1)

{
  if (*(char *)(param_1 + 0x5f) == '\x03') {
    FUN_00c1b3ec(param_1);
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    return;
  }
  return;
}

