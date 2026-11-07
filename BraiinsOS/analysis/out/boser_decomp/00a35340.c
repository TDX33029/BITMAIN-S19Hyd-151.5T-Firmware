// FUN_00a35340 @ 00a35340 size=60 calls_out=2 calls_in=4
// strings: 

void FUN_00a35340(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00a350c0(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00a35200(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

