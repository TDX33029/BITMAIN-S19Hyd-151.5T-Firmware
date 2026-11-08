// FUN_00019540 @ 00019540  size=204  callers=1
// program: bmminer


undefined4 FUN_00019540(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_2010 [8192];
  
  iVar1 = FUN_0002a594();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = 0;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
    DAT_000bfb40 = param_1;
    FUN_00018c98();
    while ((iVar2 = FUN_0002a6f0(iVar1), iVar2 == 0 || (iVar2 = FUN_000181a8(iVar1), iVar2 == 0))) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 4) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
        return 0;
      }
    }
    if (3 < DAT_000be63c) {
      snprintf(acStack_2010,0x2000,"calibration sensor on chain %d failed",iVar1);
      FUN_0004948c(3,acStack_2010,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

