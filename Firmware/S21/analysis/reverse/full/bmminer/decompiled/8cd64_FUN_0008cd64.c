// FUN_0008cd64 @ 0008cd64  size=272  callers=2
// program: bmminer


void FUN_0008cd64(pthread_mutex_t *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (pthread_mutex_t *)0x0) {
    FUN_00095b4c(2,"src/rotater.c",0x40,"a_rotater is null or 0");
  }
  else {
    if ((*(int *)((int)param_1 + 0x1c) != 0) &&
       (iVar1 = close(*(int *)((int)param_1 + 0x1c)), iVar1 != 0)) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x44,"close fail, errno[%d]",*piVar2);
    }
    iVar1 = pthread_mutex_destroy(param_1);
    if (iVar1 != 0) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x49,"pthread_mutex_destroy fail, errno[%d]",*piVar2);
    }
    FUN_00095b4c(0,"src/rotater.c",0x4c,"zlog_rotater_del[%p]",param_1);
    free(param_1);
  }
  return;
}

