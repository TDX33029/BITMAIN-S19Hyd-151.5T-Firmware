// FUN_0147e024 @ 0147e024 size=60 calls_out=3 calls_in=0
// strings: 

void FUN_0147e024(int param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x02') {
    return;
  }
  FUN_014217b4(param_1 + 0xc);
  if (*(char *)(param_1 + 8) == '\x02') {
    FUN_01475b10();
    return;
  }
  FUN_0147e08c(param_1);
  return;
}

