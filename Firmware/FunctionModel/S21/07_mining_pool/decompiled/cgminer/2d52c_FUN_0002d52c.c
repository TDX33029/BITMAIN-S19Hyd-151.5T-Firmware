// FUN_0002d52c @ 0002d52c  size=120  callers=0
// program: cgminer


void FUN_0002d52c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
  if (iVar1 == 0) {
    DAT_00076074 = param_1;
    DAT_000761ec = param_2;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return;
    }
  }
  else {
    FUN_0002cbc0("inc_dev_status",0x22a2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("inc_dev_status",0x22a5);
}

