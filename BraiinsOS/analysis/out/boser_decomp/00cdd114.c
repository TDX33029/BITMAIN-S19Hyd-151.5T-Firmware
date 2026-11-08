// FUN_00cdd114 @ 00cdd114 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_00cdd114(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00cdd160(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00c2e984(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

