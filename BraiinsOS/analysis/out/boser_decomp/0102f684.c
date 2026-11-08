// FUN_0102f684 @ 0102f684 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_0102f684(int param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x03') {
    FUN_0102f730(param_1 + 0x78);
  }
  else {
    if (*(char *)(param_1 + 0x70) != '\x04') {
      return;
    }
    FUN_0102f900(param_1 + 0x148);
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  return;
}

