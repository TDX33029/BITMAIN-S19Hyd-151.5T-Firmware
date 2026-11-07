// FUN_0008ce74 @ 0008ce74  size=388  callers=2
// program: bmminer


pthread_mutex_t * FUN_0008ce74(char *param_1)

{
  int *piVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/rotater.c",0x56,"lock_file is null or 0");
    __mutex = (pthread_mutex_t *)0x0;
  }
  else {
    __mutex = calloc(1,0x444);
    if (__mutex == (pthread_mutex_t *)0x0) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/rotater.c",0x5a,"calloc fail, errno[%d]",*piVar1);
      __mutex = (pthread_mutex_t *)0x0;
    }
    else {
      iVar2 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      if (iVar2 == 0) {
        iVar2 = open(param_1,0x42,0x1b6);
        if (iVar2 < 0) {
          piVar1 = __errno_location();
          FUN_00095b4c(2,"src/rotater.c",0x6c,"open file[%s] fail, errno[%d]",param_1,*piVar1);
          FUN_0008cd64(__mutex);
          __mutex = (pthread_mutex_t *)0x0;
        }
        else {
          *(int *)((int)__mutex + 0x1c) = iVar2;
          __mutex[1].__data.__lock = (int)param_1;
        }
      }
      else {
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/rotater.c",0x5f,"pthread_mutex_init fail, errno[%d]",*piVar1);
        free(__mutex);
        __mutex = (pthread_mutex_t *)0x0;
      }
    }
  }
  return __mutex;
}

