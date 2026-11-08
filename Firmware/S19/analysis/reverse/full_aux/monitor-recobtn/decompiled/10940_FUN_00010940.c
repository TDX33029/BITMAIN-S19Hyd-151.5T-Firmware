// FUN_00010940 @ 00010940  size=104  callers=1
// program: monitor-recobtn


void FUN_00010940(int param_1)

{
  char acStack_50 [68];
  
  memset(acStack_50,0,0x40);
  sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",(uint)(param_1 != 0),0x3ad);
  system(acStack_50);
  sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",(uint)(param_1 != 0),0x3ae);
  system(acStack_50);
  return;
}

