// FUN_0008c8c8 @ 0008c8c8  size=332  callers=1
// program: bmminer


char * FUN_0008c8c8(char *param_1,int param_2)

{
  int *piVar1;
  size_t sVar2;
  char *__dest;
  
  if (param_1 == (char *)0x0) {
    FUN_00095b4c(2,"src/record.c",0x1f,"name is null or 0");
    __dest = (char *)0x0;
  }
  else if (param_2 == 0) {
    FUN_00095b4c(2,"src/record.c",0x20,"output is null or 0");
    __dest = (char *)0x0;
  }
  else {
    __dest = calloc(1,0x408);
    if (__dest == (char *)0x0) {
      piVar1 = __errno_location();
      FUN_00095b4c(2,"src/record.c",0x24,"calloc fail, errno[%d]",*piVar1);
      __dest = (char *)0x0;
    }
    else {
      sVar2 = strlen(param_1);
      if (sVar2 < 0x401) {
        strcpy(__dest,param_1);
        *(int *)(__dest + 0x404) = param_2;
        FUN_0008c7d0(__dest,0);
      }
      else {
        FUN_00095b4c(2,"src/record.c",0x29,"name[%s] is too long",param_1);
        FUN_0008c854(__dest);
        __dest = (char *)0x0;
      }
    }
  }
  return __dest;
}

