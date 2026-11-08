// FUN_011c5fe8 @ 011c5fe8 size=60 calls_out=2 calls_in=12
// strings: 

void FUN_011c5fe8(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_011c620c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_011c634c(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

