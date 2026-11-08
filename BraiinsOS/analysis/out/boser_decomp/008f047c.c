// FUN_008f047c @ 008f047c size=44 calls_out=1 calls_in=0
// strings: 

void FUN_008f047c(int param_1)

{
  if (*(char *)(param_1 + 0x66a) == '\x03') {
    FUN_008f0454(param_1);
    *(undefined2 *)(param_1 + 0x668) = 0;
    return;
  }
  return;
}

