// FUN_00928fb0 @ 00928fb0 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00928fb0(int param_1)

{
  if (*(char *)(param_1 + 0x9a) == '\x03') {
    FUN_012cb93c(param_1);
    *(undefined2 *)(param_1 + 0x98) = 0;
    return;
  }
  return;
}

