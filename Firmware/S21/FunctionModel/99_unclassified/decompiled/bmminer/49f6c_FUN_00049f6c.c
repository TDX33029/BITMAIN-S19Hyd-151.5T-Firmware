// FUN_00049f6c @ 00049f6c  size=132  callers=1
// program: bmminer


void FUN_00049f6c(void)

{
  int iVar1;
  int *piVar2;
  char acStack_2008 [8196];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00a5f254);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_2008,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"logging.c"
           ,"my_log_curses",0x3c);
  FUN_0004948c(3,acStack_2008,1);
  FUN_00043adc(1);
  return;
}

