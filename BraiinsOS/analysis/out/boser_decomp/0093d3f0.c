// FUN_0093d3f0 @ 0093d3f0 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_0093d3f0(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0093d2b0(param_1 + 0x28);
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

