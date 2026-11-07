// FUN_0004fa70 @ 0004fa70  size=192  callers=0
// program: bmminer


void FUN_0004fa70(undefined4 param_1)

{
  uint param3;
  int iVar1;
  char acStack_2010 [8196];
  
  FUN_0002cb34();
  FUN_0004bf68(10);
  param3 = FUN_0002a514();
  do {
    param3 = param3 - 1 & 0xff;
    if (param3 == 0) {
      return;
    }
    iVar1 = FUN_0002a584();
    FUN_0002c6c8(param_1,iVar1 * param3 & 0xff);
    FUN_00046048(param_1,0);
    iVar1 = FUN_0002aacc(param_1);
  } while (iVar1 < 1);
  if (DAT_000be63c < 4) {
    return;
  }
  snprintf(acStack_2010,0x2000,"bad asic is %d\n",param3);
  FUN_0004948c(3,acStack_2010,0);
  return;
}

