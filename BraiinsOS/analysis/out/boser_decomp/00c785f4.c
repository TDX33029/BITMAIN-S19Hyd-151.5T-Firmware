// FUN_00c785f4 @ 00c785f4 size=60 calls_out=2 calls_in=6
// strings: 

void FUN_00c785f4(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_007e2eb4(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00c78640(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

