// FUN_00dccc10 @ 00dccc10 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00dccc10(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00dccb18(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00dccb94(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

