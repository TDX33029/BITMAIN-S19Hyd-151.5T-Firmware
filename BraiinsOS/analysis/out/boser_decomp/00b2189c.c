// FUN_00b2189c @ 00b2189c size=72 calls_out=1 calls_in=0
// strings: 

void FUN_00b2189c(int param_1,int param_2)

{
  if (param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      if (*(char *)(param_1 + 0xac) == '\x03') {
        FUN_00b16c4c(param_1);
      }
      param_1 = param_1 + 0xb0;
    } while (param_2 != 0);
  }
  return;
}

