// FUN_0008c434 @ 0008c434  size=192  callers=1
// program: bmminer


char * FUN_0008c434(undefined4 param_1,undefined4 param_2)

{
  char *__s;
  int *piVar1;
  int iVar2;
  
  __s = calloc(1,0x808);
  if (__s == (char *)0x0) {
    piVar1 = __errno_location();
    FUN_00095b4c(2,"src/mdc.c",0x36,"calloc fail, errno[%d]",*piVar1);
    __s = (char *)0x0;
  }
  else {
    snprintf(__s,0x401,"%s",param_1);
    iVar2 = snprintf(__s + 0x401,0x401,"%s",param_2);
    *(int *)(__s + 0x804) = iVar2;
  }
  return __s;
}

