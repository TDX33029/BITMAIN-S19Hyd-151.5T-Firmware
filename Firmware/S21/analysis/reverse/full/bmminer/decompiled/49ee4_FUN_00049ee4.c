// FUN_00049ee4 @ 00049ee4  size=132  callers=1
// program: bmminer


void FUN_00049ee4(int param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_2008 [8192];
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00a5f254);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_2008,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
           "logging.c","my_log_curses",param_1);
  FUN_0004948c(3,acStack_2008,1);
  FUN_00043adc(1);
  return;
}

