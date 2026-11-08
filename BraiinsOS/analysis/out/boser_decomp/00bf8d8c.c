// FUN_00bf8d8c @ 00bf8d8c size=40 calls_out=1 calls_in=0
// strings: 

void FUN_00bf8d8c(int param_1)

{
  if (*(char *)(param_1 + 0xae) == '\x03') {
    FUN_00bf8d50(param_1);
    *(undefined2 *)(param_1 + 0xac) = 0;
    return;
  }
  return;
}

