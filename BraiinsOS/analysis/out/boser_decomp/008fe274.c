// FUN_008fe274 @ 008fe274 size=60 calls_out=2 calls_in=3
// strings: 

void FUN_008fe274(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_008fdff4(param_1 + 0x28);
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

