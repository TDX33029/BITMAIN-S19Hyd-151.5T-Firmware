// FUN_0002f6e8 @ 0002f6e8  size=112  callers=7
// program: cgminer


undefined4 FUN_0002f6e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fa0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(DAT_00073f30 + param_1 * 4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fa0);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return uVar2;
    }
  }
  else {
    FUN_0002dd20("get_thread",0x26b);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("get_thread",0x26d);
}

