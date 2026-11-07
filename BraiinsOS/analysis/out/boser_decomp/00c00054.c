// FUN_00c00054 @ 00c00054 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00c00054(int param_1)

{
  if (*(char *)(param_1 + 0xda) == '\x03') {
    FUN_00bffffc(param_1);
    *(undefined2 *)(param_1 + 0xd8) = 0;
    return;
  }
  return;
}

