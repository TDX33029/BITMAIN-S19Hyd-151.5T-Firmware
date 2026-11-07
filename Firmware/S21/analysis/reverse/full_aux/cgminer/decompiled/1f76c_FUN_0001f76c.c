// FUN_0001f76c @ 0001f76c  size=140  callers=2
// program: cgminer


void FUN_0001f76c(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d0));
  if (iVar1 != 0) {
    FUN_0001f708("clear_sock",0x6fc);
  }
  do {
    if (*(int *)(param_1 + 0x24c) == 0) break;
    sVar2 = recv(*(int *)(param_1 + 0x24c),*(void **)(param_1 + 0x260),0x1ffc,0);
  } while (0 < sVar2);
  FUN_0001f68c((pthread_mutex_t *)(param_1 + 0x2d0),"clear_sock",0x705);
  (*DAT_0006796c)();
  if (*(undefined1 **)(param_1 + 0x260) != (undefined1 *)0x0) {
    **(undefined1 **)(param_1 + 0x260) = 0;
  }
  return;
}

