// FUN_00a30edc @ 00a30edc size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00a30edc(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00a30c3c(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00a30d7c(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

