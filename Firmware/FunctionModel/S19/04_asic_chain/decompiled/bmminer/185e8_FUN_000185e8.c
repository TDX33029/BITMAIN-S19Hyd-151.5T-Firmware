// FUN_000185e8 @ 000185e8  size=228  callers=1
// program: bmminer


undefined4 FUN_000185e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char acStack_810 [2048];
  
  iVar1 = FUN_000200ac();
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_00036ad8(), iVar1 != 0)) {
    iVar1 = 0;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
    DAT_00088820 = param_1;
    FUN_000182d4();
    do {
      iVar2 = FUN_000201d8(iVar1);
      if ((iVar2 != 0) && (iVar2 = FUN_00017a98(iVar1), iVar2 != 0)) {
        if (3 < DAT_00087bbc) {
          snprintf(acStack_810,0x800,"calibration sensor on chain %d failed",iVar1);
          FUN_00032218(3,acStack_810,0);
        }
        DAT_00089048 = 1;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    DAT_00089048 = 1;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
  }
  return 0;
}

