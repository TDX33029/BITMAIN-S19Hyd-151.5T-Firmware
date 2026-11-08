// FUN_00cb022c @ 00cb022c size=44 calls_out=1 calls_in=3
// strings: 

void FUN_00cb022c(int param_1)

{
  if (*(char *)(param_1 + 0x5f) == '\x03') {
    FUN_00cb01f0(param_1);
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    return;
  }
  return;
}

