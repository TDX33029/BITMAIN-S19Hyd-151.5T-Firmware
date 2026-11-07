// FUN_00045658 @ 00045658  size=144  callers=1
// program: bmminer


void FUN_00045658(void)

{
  int iVar1;
  int *piVar2;
  timespec local_10;
  
  clock_gettime(0,&local_10);
  local_10.tv_sec = local_10.tv_sec + 300;
  do {
    iVar1 = sem_timedwait((sem_t *)&DAT_000c9460,&local_10);
    if (iVar1 != -1) {
      FUN_0005690c();
      return;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  iVar1 = FUN_000565ac(0);
  if (iVar1 - 1U < 2) {
    FUN_0004e8c8(0xc,"something error when miner init, restart...");
    return;
  }
  sem_wait((sem_t *)&DAT_000c9460);
  return;
}

