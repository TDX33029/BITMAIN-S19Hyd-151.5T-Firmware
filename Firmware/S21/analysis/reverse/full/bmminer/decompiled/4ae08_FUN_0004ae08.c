// FUN_0004ae08 @ 0004ae08  size=104  callers=0
// program: bmminer


void FUN_0004ae08(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_0004ada4("tq_freezethaw",0x454);
  }
  *(undefined1 *)(param_1 + 8) = param_2;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_0004ad28((pthread_mutex_t *)(param_1 + 0xc),"tq_freezethaw",0x457);
  (*DAT_000be768)();
  return;
}

