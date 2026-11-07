// FUN_00cb3478 @ 00cb3478 size=52 calls_out=1 calls_in=0
// strings: 

void FUN_00cb3478(int param_1)

{
  if (*(char *)(param_1 + 10) == '\x03') {
    FUN_00c8b2cc(param_1 + 0x10);
  }
  else if (*(char *)(param_1 + 10) != '\x04') {
    return;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

