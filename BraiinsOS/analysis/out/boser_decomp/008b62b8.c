// FUN_008b62b8 @ 008b62b8 size=60 calls_out=2 calls_in=5
// strings: 

void FUN_008b62b8(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_008b6304(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_008b6444(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

