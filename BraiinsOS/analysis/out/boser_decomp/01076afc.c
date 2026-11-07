// FUN_01076afc @ 01076afc size=64 calls_out=2 calls_in=0
// strings: 

void FUN_01076afc(int param_1)

{
  if (*(char *)(param_1 + 0x6b0) == '\0') {
    FUN_01073b40(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x6b0) == '\x03') {
    FUN_01077260(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0x6b1) = 0;
    return;
  }
  return;
}

