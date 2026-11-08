// FUN_000230d0 @ 000230d0  size=336  callers=1
// program: cgminer


undefined4 FUN_000230d0(sem_t *param_1,int param_2,char *param_3,char *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  timespec local_830;
  timespec local_828 [256];
  
  clock_gettime(1,local_828);
  FUN_0002049c(&local_830,local_828[0].tv_nsec / 1000,param_2,param_2 >> 0x1f);
  do {
    local_830.tv_nsec = (local_828[0].tv_nsec / 1000) * 1000 + local_830.tv_nsec;
    local_830.tv_sec = local_828[0].tv_sec + local_830.tv_sec;
    if (local_830.tv_nsec < 1000000000) {
      if (local_830.tv_nsec < 0) {
        do {
          local_830.tv_nsec = local_830.tv_nsec + 1000000000;
          local_830.tv_sec = local_830.tv_sec + -1;
        } while (local_830.tv_nsec < 0);
      }
    }
    else {
      iVar3 = local_830.tv_nsec + -1000000000;
      iVar1 = local_830.tv_sec + 1;
      if (999999999 < iVar3) {
        iVar3 = local_830.tv_nsec + -2000000000;
        iVar1 = local_830.tv_sec + 2;
      }
      local_830.tv_sec = iVar1;
      local_830.tv_nsec = iVar3;
    }
    iVar3 = sem_timedwait(param_1,&local_830);
    if (iVar3 == 0) {
      return 0;
    }
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    if (iVar3 == 0x6e) {
      return 0x6e;
    }
  } while (iVar3 == 4);
  snprintf((char *)local_828,0x800,"Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d",iVar3
           ,param_1,param_3,param_4,param_5);
  FUN_0001dd98(3,local_828,1);
  FUN_0003c34c(1);
  return 0;
}

