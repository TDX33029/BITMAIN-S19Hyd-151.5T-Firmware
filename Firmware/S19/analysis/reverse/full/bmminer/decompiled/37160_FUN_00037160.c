// FUN_00037160 @ 00037160  size=184  callers=0
// program: bmminer


void FUN_00037160(undefined4 param_1)

{
  uint param3;
  int iVar1;
  char acStack_810 [2052];
  
  FUN_00020c88();
  FUN_00034a5c(10);
  param3 = FUN_0002002c();
  do {
    param3 = param3 - 1 & 0xff;
    if (param3 == 0) {
      return;
    }
    FUN_00020934(param_1,param3);
    FUN_0002f808(param_1,0);
    iVar1 = FUN_000205b4(param_1);
  } while (iVar1 < 1);
  if (DAT_00087bbc < 4) {
    return;
  }
  snprintf(acStack_810,0x800,"bad asic is %d\n",param3);
  FUN_00032218(3,acStack_810,0);
  return;
}

