// FUN_000349a4 @ 000349a4  size=184  callers=1
// program: bmminer


void FUN_000349a4(int *param_1)

{
  int iVar1;
  int iVar2;
  timespec local_10;
  
  FUN_000345ac(&local_10);
  local_10.tv_nsec = local_10.tv_nsec + param_1[1];
  local_10.tv_sec = local_10.tv_sec + *param_1;
  if (local_10.tv_nsec < 1000000000) {
    if (local_10.tv_nsec < 0) {
      do {
        local_10.tv_nsec = local_10.tv_nsec + 1000000000;
        local_10.tv_sec = local_10.tv_sec + -1;
      } while (local_10.tv_nsec < 0);
    }
  }
  else {
    iVar2 = local_10.tv_nsec + -1000000000;
    iVar1 = local_10.tv_sec + 1;
    if (999999999 < iVar2) {
      iVar2 = local_10.tv_nsec + -2000000000;
      iVar1 = local_10.tv_sec + 2;
    }
    local_10.tv_sec = iVar1;
    local_10.tv_nsec = iVar2;
  }
  do {
    iVar1 = clock_nanosleep(1,1,&local_10,(timespec *)0x0);
  } while (iVar1 == 4);
  return;
}

