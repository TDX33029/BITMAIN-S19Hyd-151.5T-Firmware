// FUN_00010da0 @ 00010da0  size=100  callers=1
// program: monitor-ipsig


void FUN_00010da0(int param_1)

{
  char acStack_50 [68];
  
  memset(acStack_50,0,0x40);
  sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",param_1,0x3ad);
  system(acStack_50);
  sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",param_1,0x3ae);
  system(acStack_50);
  return;
}

