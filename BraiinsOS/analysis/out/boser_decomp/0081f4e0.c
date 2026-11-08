// FUN_0081f4e0 @ 0081f4e0 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_0081f4e0(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0081f558(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_0081f698(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

