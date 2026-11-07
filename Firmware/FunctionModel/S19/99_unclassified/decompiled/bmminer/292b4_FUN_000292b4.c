// FUN_000292b4 @ 000292b4  size=112  callers=1
// program: bmminer


void FUN_000292b4(void)

{
  uint *puVar1;
  char *param4;
  uint param3;
  char acStack_808 [2048];
  
  if (3 < DAT_00087bbc) {
    puVar1 = (uint *)__errno_location();
    param3 = *puVar1;
    param4 = strerror(param3);
    snprintf(acStack_808,0x800,"Failed to get sysinfo, errno = %u, reason = %s.\n",param3,param4);
    FUN_00032218(3,acStack_808,0);
  }
  time((time_t *)0x0);
  return;
}

