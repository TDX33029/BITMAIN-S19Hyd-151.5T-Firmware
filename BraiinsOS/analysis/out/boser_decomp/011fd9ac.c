// FUN_011fd9ac @ 011fd9ac size=52 calls_out=1 calls_in=2
// strings: 

void FUN_011fd9ac(int param_1)

{
  if (*(char *)(param_1 + 0x41) == '\x03') {
    FUN_01431b40(param_1 + 0x48);
  }
  else if (*(char *)(param_1 + 0x41) != '\x04') {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

