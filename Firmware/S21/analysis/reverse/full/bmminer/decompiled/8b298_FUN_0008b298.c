// FUN_0008b298 @ 0008b298  size=540  callers=2
// program: bmminer


void * FUN_0008b298(size_t param_1)

{
  void *__ptr;
  int *piVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  pthread_t pVar5;
  long lVar6;
  
  __ptr = calloc(1,0x21c);
  if (__ptr == (void *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/event.c",0x3d,"calloc fail, errno[%d]",*piVar1);
    __ptr = (void *)0x0;
  }
  else {
    pvVar2 = calloc(param_1,0x100c);
    *(void **)((int)__ptr + 0x174) = pvVar2;
    if (*(int *)((int)__ptr + 0x174) == 0) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/event.c",0x43,"calloc fail, errno[%d]",*piVar1);
      free(__ptr);
      __ptr = (void *)0x0;
    }
    else {
      *(size_t *)((int)__ptr + 0x178) = param_1;
      iVar3 = gethostname((char *)((int)__ptr + 8),0x100);
      if (iVar3 == 0) {
        sVar4 = strlen((char *)((int)__ptr + 8));
        *(size_t *)((int)__ptr + 0x10c) = sVar4;
        pVar5 = pthread_self();
        *(pthread_t *)((int)__ptr + 0x1a8) = pVar5;
        iVar3 = sprintf((char *)((int)__ptr + 0x1ac),"%lu",*(undefined4 *)((int)__ptr + 0x1a8));
        *(int *)((int)__ptr + 0x1cc) = iVar3;
        iVar3 = sprintf((char *)((int)__ptr + 0x1d0),"%x",*(undefined4 *)((int)__ptr + 0x1a8));
        *(int *)((int)__ptr + 0x1f0) = iVar3;
        lVar6 = syscall(0xe0);
        *(long *)((int)__ptr + 500) = lVar6;
        iVar3 = sprintf((char *)((int)__ptr + 0x1f8),"%u",*(undefined4 *)((int)__ptr + 500));
        *(int *)((int)__ptr + 0x218) = iVar3;
      }
      else {
        piVar1 = __errno_location();
        FUN_00095b4c(2,"src/event.c",0x4e,"gethostname fail, errno[%d]",*piVar1);
        FUN_0008b204(__ptr);
        __ptr = (void *)0x0;
      }
    }
  }
  return __ptr;
}

