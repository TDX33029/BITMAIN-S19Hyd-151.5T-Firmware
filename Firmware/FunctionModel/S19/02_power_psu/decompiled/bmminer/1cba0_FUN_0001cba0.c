// FUN_0001cba0 @ 0001cba0  size=192  callers=1
// program: bmminer


void FUN_0001cba0(void)

{
  int iVar1;
  int iVar2;
  int param3;
  char acStack_810 [2052];
  
  param3 = 1;
  sleep(1);
  do {
    do {
      param3 = param3 + 1;
      sleep(1);
    } while (param3 < 0x1e);
    iVar1 = FUN_00018a88(0);
    iVar2 = FUN_00018cb8();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  } while ((5 < iVar1) && (param3 != 0xb4));
  if (3 < DAT_00087bbc) {
    iVar1 = FUN_00018a88(0);
    iVar2 = FUN_00018cb8();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    snprintf(acStack_810,0x800,"Slept %d seconds, diff = %d.\n",param3,iVar1);
    FUN_00032218(3,acStack_810,0);
  }
  return;
}

