// FUN_000413d0 @ 000413d0  size=136  callers=3
// program: bmminer


void FUN_000413d0(int param_1,uint param_2)

{
  char acStack_2008 [8192];
  
  if (3000000 < param_1) {
    param_2 = param_2 | 1;
  }
  if (param_2 != 0) {
    FUN_0002c888();
    FUN_0004bf68(100);
  }
  if (3 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"set UART baud to %d\n",param_1);
    FUN_0004948c(3,acStack_2008,0);
  }
  FUN_0002c6e0(param_1);
  FUN_0002a584();
  FUN_00018c98();
  return;
}

