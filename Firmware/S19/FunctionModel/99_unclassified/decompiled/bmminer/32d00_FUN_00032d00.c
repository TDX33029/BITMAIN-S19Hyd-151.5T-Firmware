// FUN_00032d00 @ 00032d00  size=132  callers=1
// program: bmminer


void FUN_00032d00(void)

{
  int iVar1;
  int *piVar2;
  char acStack_808 [2052];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00722954);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"logging.c",
           "my_log_curses",0x37);
  FUN_00032218(3,acStack_808,1);
  FUN_0002df3c(1);
  return;
}

