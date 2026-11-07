// FUN_00c00684 @ 00c00684 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_00c00684(int param_1)

{
  if (*(char *)(param_1 + 0x7ca) == '\x03') {
    FUN_00c00664(param_1);
    *(undefined2 *)(param_1 + 0x7c8) = 0;
    return;
  }
  return;
}

