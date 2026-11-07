// FUN_0005d1f8 @ 0005d1f8  size=324  callers=1
// program: bmminer


void * FUN_0005d1f8(char *param_1,int param_2)

{
  size_t sVar1;
  void *__dest;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (char *)0x0) {
    FUN_000658a8(2,"src/category.c",0x77,"name is null or 0");
    __dest = (void *)0x0;
  }
  else if (param_2 == 0) {
    FUN_000658a8(2,"src/category.c",0x78,"rules is null or 0");
    __dest = (void *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    if (sVar1 < 0x401) {
      __dest = calloc(1,0x450);
      if (__dest == (void *)0x0) {
        piVar3 = __errno_location();
        FUN_000658a8(2,"src/category.c",0x81,"calloc fail, errno[%d]",*piVar3);
      }
      else {
        memcpy(__dest,param_1,sVar1 + 1);
        *(size_t *)((int)__dest + 0x404) = sVar1;
        iVar2 = FUN_0005cec4(__dest,param_2,param_2 + 4);
        if (iVar2 == 0) {
          FUN_0005d0d8(__dest);
        }
        else {
          FUN_000658a8(2,"src/category.c",0x87,"zlog_category_fit_rules fail");
          FUN_0005d184(__dest);
          __dest = (void *)0x0;
        }
      }
    }
    else {
      __dest = (void *)0x0;
      FUN_000658a8(2,"src/category.c",0x7c,"name[%s] too long",param_1);
    }
  }
  return __dest;
}

