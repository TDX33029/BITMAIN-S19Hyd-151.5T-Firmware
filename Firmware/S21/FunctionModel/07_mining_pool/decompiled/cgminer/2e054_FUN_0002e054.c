// FUN_0002e054 @ 0002e054  size=112  callers=6
// program: cgminer


undefined4 FUN_0002e054(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(DAT_00074f78 + param_1 * 4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return uVar2;
    }
  }
  else {
    FUN_0002dd20("get_devices",0x27f);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("get_devices",0x281);
}

