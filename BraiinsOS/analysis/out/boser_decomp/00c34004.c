// FUN_00c34004 @ 00c34004 size=44 calls_out=1 calls_in=1
// strings: 

void FUN_00c34004(int param_1)

{
  if (*(char *)(param_1 + 0x57) == '\x03') {
    FUN_00c33fc8(param_1);
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    return;
  }
  return;
}

