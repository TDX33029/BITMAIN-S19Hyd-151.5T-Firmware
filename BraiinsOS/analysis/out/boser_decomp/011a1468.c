// FUN_011a1468 @ 011a1468 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_011a1468(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_011a11c8(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_011a1308(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

