// FUN_00fcc390 @ 00fcc390 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00fcc390(int param_1)

{
  if (*(char *)(param_1 + 0x144) == '\x03') {
    FUN_012840cc(param_1 + 0x130);
    param_1 = param_1 + 0x98;
  }
  else if (*(char *)(param_1 + 0x144) != '\0') {
    return;
  }
  FUN_00fbbf54(param_1);
  return;
}

