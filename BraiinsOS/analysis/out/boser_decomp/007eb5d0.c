// FUN_007eb5d0 @ 007eb5d0 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_007eb5d0(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_007eb61c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_007eb75c(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

