// FUN_0001f978 @ 0001f978  size=148  callers=4
// program: cgminer


void * FUN_0001f978(void *param_1,uint param_2,char *param_3,char *param_4,int param_5)

{
  void *pvVar1;
  char acStack_818 [2052];
  
  if ((param_2 & 3) != 0) {
    param_2 = (param_2 & 0xfffffffc) + 4;
  }
  pvVar1 = realloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    snprintf(acStack_818,0x800,"Failed to realloc size %d from %s %s:%d",param_2,param_3,param_4,
             param_5);
    FUN_0001dd98(3,acStack_818,1);
    FUN_0003c34c(1);
    return (void *)0x0;
  }
  return pvVar1;
}

