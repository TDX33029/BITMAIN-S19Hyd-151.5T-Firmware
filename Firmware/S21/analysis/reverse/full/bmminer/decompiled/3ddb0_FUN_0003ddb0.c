// FUN_0003ddb0 @ 0003ddb0  size=112  callers=1
// program: bmminer


void FUN_0003ddb0(void)

{
  uint *puVar1;
  char *param4;
  uint param3;
  char acStack_2008 [8192];
  
  if (3 < DAT_000be63c) {
    puVar1 = (uint *)__errno_location();
    param3 = *puVar1;
    param4 = strerror(param3);
    snprintf(acStack_2008,0x2000,"Failed to get sysinfo, errno = %u, reason = %s.\n",param3,param4);
    FUN_0004948c(3,acStack_2008,0);
  }
  time((time_t *)0x0);
  return;
}

