// FUN_008c0504 @ 008c0504 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_008c0504(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_008c0550(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00bd7780(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

