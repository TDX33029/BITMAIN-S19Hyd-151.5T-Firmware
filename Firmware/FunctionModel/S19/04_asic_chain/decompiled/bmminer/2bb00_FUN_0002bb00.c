// FUN_0002bb00 @ 0002bb00  size=128  callers=3
// program: bmminer


void FUN_0002bb00(int param_1)

{
  char acStack_808 [2048];
  
  if (3000000 < param_1) {
    FUN_00020af4();
    FUN_00034a5c(100);
  }
  if (3 < DAT_00087bbc) {
    snprintf(acStack_808,0x800,"set UART baud to %d\n",param_1);
    FUN_00032218(3,acStack_808,0);
  }
  FUN_0002094c(param_1);
  FUN_0002009c();
  FUN_000182d4();
  return;
}

