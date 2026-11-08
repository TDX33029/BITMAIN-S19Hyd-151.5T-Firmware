// FUN_0003d1f0 @ 0003d1f0  size=272  callers=3
// program: cgminer


void FUN_0003d1f0(void)

{
  int iVar1;
  uint *puVar2;
  char *param3;
  uint param2;
  sysinfo local_948;
  char acStack_908 [256];
  char acStack_808 [2048];
  
  iVar1 = sysinfo(&local_948);
  if (iVar1 != 0) {
    puVar2 = (uint *)__errno_location();
    param2 = *puVar2;
    param3 = strerror(param2);
    sprintf(acStack_808,"Failed to get sysinfo, errno:%u, reason:%s\n",param2,param3);
    DAT_000761a4 = time((time_t *)0x0);
    DAT_000761e4 = DAT_000761a4 + 1;
    return;
  }
  DAT_000761e4 = local_948.uptime + 1;
  DAT_000761a4 = local_948.uptime;
  sprintf(acStack_908,"set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n",
          local_948.uptime,DAT_000761e4);
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    snprintf(acStack_808,0x800,"%s",acStack_908);
    FUN_0001dd98(5,acStack_808,0);
  }
  return;
}

