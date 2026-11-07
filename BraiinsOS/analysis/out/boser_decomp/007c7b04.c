// FUN_007c7b04 @ 007c7b04 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_007c7b04(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_007cdcec(param_1 + 0x28);
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

