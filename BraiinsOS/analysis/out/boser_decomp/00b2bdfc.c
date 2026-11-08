// FUN_00b2bdfc @ 00b2bdfc size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00b2bdfc(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00b2bb7c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00b2bcbc(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

