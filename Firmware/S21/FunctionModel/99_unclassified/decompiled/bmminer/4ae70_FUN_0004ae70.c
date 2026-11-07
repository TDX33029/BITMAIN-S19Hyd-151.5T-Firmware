// FUN_0004ae70 @ 0004ae70  size=148  callers=4
// program: bmminer


void * FUN_0004ae70(uint param_1,char *param_2,char *param_3,int param_4)

{
  void *pvVar1;
  char acStack_2018 [8192];
  
  if ((param_1 & 3) != 0) {
    param_1 = (param_1 & 0xfffffffc) + 4;
  }
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    snprintf(acStack_2018,0x2000,"Failed to malloc size %d from %s %s:%d",param_1,param_2,param_3,
             param_4);
    FUN_0004948c(3,acStack_2018,1);
    FUN_00043adc(1);
    return (void *)0x0;
  }
  return pvVar1;
}

