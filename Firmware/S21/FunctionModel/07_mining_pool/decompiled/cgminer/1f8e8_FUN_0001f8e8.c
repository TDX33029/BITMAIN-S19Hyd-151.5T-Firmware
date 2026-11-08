// FUN_0001f8e8 @ 0001f8e8  size=144  callers=12
// program: cgminer


void * FUN_0001f8e8(size_t param_1,uint param_2,char *param_3,char *param_4,int param_5)

{
  void *pvVar1;
  char acStack_818 [2048];
  
  if ((param_2 & 3) != 0) {
    param_2 = (param_2 & 0xfffffffc) + 4;
  }
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    snprintf(acStack_818,0x800,"Failed to calloc memb %d size %d from %s %s:%d",param_1,param_2,
             param_3,param_4,param_5);
    FUN_0001dd98(3,acStack_818,1);
    FUN_0003c34c(1);
    return (void *)0x0;
  }
  return pvVar1;
}

