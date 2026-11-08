// FUN_00010f58 @ 00010f58  size=144  callers=1
// program: monitor-ipsig


void FUN_00010f58(int param_1)

{
  int iVar1;
  int param3;
  char acStack_50 [64];
  
  memset(acStack_50,0,0x40);
  param3 = 0x3ae;
  if (param_1 == 0) {
    param3 = 0x3ad;
  }
  iVar1 = 3;
  do {
    sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",1,param3);
    system(acStack_50);
    usleep(50000);
    sprintf(acStack_50,"echo %d > /sys/class/gpio/gpio%d/value",0,param3);
    system(acStack_50);
    usleep(50000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

