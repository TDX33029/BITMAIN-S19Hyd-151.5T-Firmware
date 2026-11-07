// FUN_0004af04 @ 0004af04  size=164  callers=4
// program: bmminer


void * FUN_0004af04(size_t param_1,uint param_2,char *param_3,char *param_4,int param_5)

{
  void *pvVar1;
  char acStack_2018 [8192];
  
  if ((param_2 & 3) != 0) {
    param_2 = (param_2 & 0xfffffffc) + 4;
  }
  pvVar1 = calloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    snprintf(acStack_2018,0x2000,"Failed to calloc memb %d size %d from %s %s:%d",param_1,param_2,
             param_3,param_4,param_5);
    FUN_0004948c(3,acStack_2018,1);
    FUN_00043adc(1);
    return (void *)0x0;
  }
  return pvVar1;
}

