// FUN_00043ae0 @ 00043ae0  size=272  callers=1
// program: bmminer


void FUN_00043ae0(void)

{
  int iVar1;
  uint *puVar2;
  char *param3;
  uint param2;
  sysinfo local_2148;
  char acStack_2108 [256];
  char acStack_2008 [8192];
  
  iVar1 = sysinfo(&local_2148);
  if (iVar1 != 0) {
    puVar2 = (uint *)__errno_location();
    param2 = *puVar2;
    param3 = strerror(param2);
    sprintf(acStack_2108,"Failed to get sysinfo, errno:%u, reason:%s\n",param2,param3);
    DAT_00a5f22c = time((time_t *)0x0);
    DAT_00a59168 = DAT_00a5f22c + 1;
    return;
  }
  DAT_00a59168 = local_2148.uptime + 1;
  DAT_00a5f22c = local_2148.uptime;
  sprintf(acStack_2108,"set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n",
          local_2148.uptime,DAT_00a59168);
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
    snprintf(acStack_2008,0x2000,"%s",acStack_2108);
    FUN_0004948c(5,acStack_2008,0);
  }
  return;
}

