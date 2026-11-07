// FUN_000374e4 @ 000374e4  size=292  callers=2
// program: bmminer


void FUN_000374e4(void)

{
  int iVar1;
  uint *puVar2;
  char *param3;
  uint param2;
  sysinfo local_948;
  char acStack_908 [256];
  char acStack_808 [2048];
  
  FUN_00034828(&DAT_0048d3a0);
  iVar1 = sysinfo(&local_948);
  if (iVar1 != 0) {
    puVar2 = (uint *)__errno_location();
    param2 = *puVar2;
    param3 = strerror(param2);
    sprintf(acStack_908,"Failed to get sysinfo, errno:%u, reason:%s\n",param2,param3);
    DAT_0071c78c = time((time_t *)0x0);
    DAT_0071e840 = DAT_0071c78c + 1;
    return;
  }
  DAT_0071e840 = local_948.uptime + 1;
  DAT_0071c78c = local_948.uptime;
  sprintf(acStack_908,"set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n",
          local_948.uptime,DAT_0071e840);
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (4 < DAT_00087bc4)) {
    snprintf(acStack_808,0x800,"%s",acStack_908);
    FUN_00032218(5,acStack_808,0);
  }
  return;
}

