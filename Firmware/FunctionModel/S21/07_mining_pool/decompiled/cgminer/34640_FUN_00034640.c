// FUN_00034640 @ 00034640  size=104  callers=0
// program: cgminer


undefined4 FUN_00034640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    uVar2 = FUN_000345c0(param_1);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return uVar2;
    }
  }
  else {
    FUN_0002cb64("get_queued",0x2530);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("get_queued",0x2532);
}

