// FUN_0004c6e4 @ 0004c6e4  size=344  callers=0
// program: bmminer


undefined4 FUN_0004c6e4(sem_t *param_1,int param_2,char *param_3,char *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  timespec local_2030;
  timespec local_2028 [1024];
  
  clock_gettime(1,local_2028);
  FUN_0004baf8(&local_2030,local_2028[0].tv_nsec / 1000,param_2,param_2 >> 0x1f);
  do {
    local_2030.tv_nsec = (local_2028[0].tv_nsec / 1000) * 1000 + local_2030.tv_nsec;
    local_2030.tv_sec = local_2028[0].tv_sec + local_2030.tv_sec;
    if (local_2030.tv_nsec < 1000000000) {
      if (local_2030.tv_nsec < 0) {
        do {
          local_2030.tv_nsec = local_2030.tv_nsec + 1000000000;
          local_2030.tv_sec = local_2030.tv_sec + -1;
        } while (local_2030.tv_nsec < 0);
      }
    }
    else {
      iVar3 = local_2030.tv_nsec + -1000000000;
      iVar1 = local_2030.tv_sec + 1;
      if (999999999 < iVar3) {
        iVar3 = local_2030.tv_nsec + -2000000000;
        iVar1 = local_2030.tv_sec + 2;
      }
      local_2030.tv_sec = iVar1;
      local_2030.tv_nsec = iVar3;
    }
    iVar3 = sem_timedwait(param_1,&local_2030);
    if (iVar3 == 0) {
      return 0;
    }
    piVar2 = __errno_location();
    iVar3 = *piVar2;
    if (iVar3 == 0x6e) {
      return 0x6e;
    }
  } while (iVar3 == 4);
  snprintf((char *)local_2028,0x2000,"Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d",
           iVar3,param_1,param_3,param_4,param_5);
  FUN_0004948c(3,local_2028,1);
  FUN_00043adc(1);
  return 0;
}

