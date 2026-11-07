// FUN_008be1e4 @ 008be1e4 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_008be1e4(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_008be230(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_008fe134(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

