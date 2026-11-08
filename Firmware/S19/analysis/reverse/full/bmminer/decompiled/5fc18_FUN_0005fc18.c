// FUN_0005fc18 @ 0005fc18  size=272  callers=0
// program: bmminer


void * FUN_0005fc18(char *param_1,int param_2)

{
  void *__dest;
  size_t sVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_000658a8(2,"src/record.c",0x1f,"name is null or 0");
    __dest = (void *)0x0;
  }
  else if (param_2 == 0) {
    FUN_000658a8(2,"src/record.c",0x20,"output is null or 0");
    __dest = (void *)0x0;
  }
  else {
    __dest = calloc(1,0x408);
    if (__dest == (void *)0x0) {
      piVar2 = __errno_location();
      FUN_000658a8(2,"src/record.c",0x24,"calloc fail, errno[%d]",*piVar2);
    }
    else {
      sVar1 = strlen(param_1);
      if (sVar1 < 0x401) {
        memcpy(__dest,param_1,sVar1 + 1);
        *(int *)((int)__dest + 0x404) = param_2;
        FUN_0005fb54(__dest,0);
      }
      else {
        FUN_000658a8(2,"src/record.c",0x29,"name[%s] is too long",param_1);
        FUN_0005fbb4(__dest);
        __dest = (void *)0x0;
      }
    }
  }
  return __dest;
}

