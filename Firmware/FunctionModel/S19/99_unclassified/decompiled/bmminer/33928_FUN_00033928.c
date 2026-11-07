// FUN_00033928 @ 00033928  size=104  callers=0
// program: bmminer


void FUN_00033928(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_000338c4("tq_freezethaw",0x454);
  }
  *(undefined1 *)(param_1 + 8) = param_2;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_00033848((pthread_mutex_t *)(param_1 + 0xc),"tq_freezethaw",0x457);
  (*DAT_00087ce8)();
  return;
}

