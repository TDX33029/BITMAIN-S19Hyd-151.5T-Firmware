// FUN_0003c694 @ 0003c694  size=232  callers=1
// program: cgminer


void FUN_0003c694(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = 0;
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00074fd0);
  iVar2 = DAT_00074f78;
  if (iVar1 == 0) {
    *param_1 = DAT_0006a238;
    *(int **)(iVar2 + DAT_0006a238 * 4) = param_1;
    DAT_0006a238 = DAT_0006a238 + 1;
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      if (DAT_00075020 == '\0') {
        DAT_00076238 = param_1[0x25] + DAT_00076238;
      }
      else {
        DAT_0006a23c = param_1[0x25] + DAT_0006a23c;
      }
      iVar2 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 0x50),(pthread_rwlockattr_t *)0x0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0002ca98("enable_device",0x2c51);
      }
      param_1[0x58] = 0;
      return;
    }
  }
  else {
    FUN_0002cb64("enable_device",0x2c44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("enable_device",0x2c46);
}

