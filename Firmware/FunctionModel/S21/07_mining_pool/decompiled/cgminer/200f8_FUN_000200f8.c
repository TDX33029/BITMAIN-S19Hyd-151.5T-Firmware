// FUN_000200f8 @ 000200f8  size=104  callers=1
// program: cgminer


void FUN_000200f8(int param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_0001f708("tq_freezethaw",0x452);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_0001f68c((pthread_mutex_t *)(param_1 + 0xc),"tq_freezethaw",0x455);
  (*DAT_0006796c)();
  return;
}

