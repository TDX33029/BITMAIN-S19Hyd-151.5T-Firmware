// FUN_0089cc08 @ 0089cc08 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0089cc08(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0089c968(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_0089caa8(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

