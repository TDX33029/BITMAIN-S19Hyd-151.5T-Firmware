// FUN_00be79f8 @ 00be79f8 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00be79f8(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00be78b8(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00bb15dc(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

