// FUN_000887f4 @ 000887f4  size=396  callers=1
// program: bmminer


char * FUN_000887f4(char *param_1,int param_2)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  char *__dest;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/category.c",0x77,"name is null or 0");
    __dest = (char *)0x0;
  }
  else if (param_2 == 0) {
    FUN_00095b4c(2,"src/category.c",0x78,"rules is null or 0");
    __dest = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_1);
    if (sVar1 < 0x401) {
      __dest = calloc(1,0x450);
      if (__dest == (char *)0x0) {
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/category.c",0x81,"calloc fail, errno[%d]",*piVar2);
        __dest = (char *)0x0;
      }
      else {
        strcpy(__dest,param_1);
        *(size_t *)(__dest + 0x404) = sVar1;
        iVar3 = FUN_00088564(__dest,param_2);
        if (iVar3 == 0) {
          FUN_0008832c(__dest,0);
        }
        else {
          FUN_00095b4c(2,"src/category.c",0x87,"zlog_category_fit_rules fail");
          FUN_00088434(__dest);
          __dest = (char *)0x0;
        }
      }
    }
    else {
      FUN_00095b4c(2,"src/category.c",0x7c,"name[%s] too long",param_1);
      __dest = (char *)0x0;
    }
  }
  return __dest;
}

