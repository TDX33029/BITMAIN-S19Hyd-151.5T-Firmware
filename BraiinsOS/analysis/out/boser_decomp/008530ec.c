// FUN_008530ec @ 008530ec size=44 calls_out=1 calls_in=0
// strings: 

void FUN_008530ec(int param_1)

{
  if (*(char *)(param_1 + 0x66a) == '\x03') {
    FUN_0084e9a4(param_1);
    *(undefined2 *)(param_1 + 0x668) = 0;
    return;
  }
  return;
}

