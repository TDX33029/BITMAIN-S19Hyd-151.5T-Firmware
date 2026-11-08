// FUN_00cfd268 @ 00cfd268 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00cfd268(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00cfd2b4(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00cfd3f4(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

