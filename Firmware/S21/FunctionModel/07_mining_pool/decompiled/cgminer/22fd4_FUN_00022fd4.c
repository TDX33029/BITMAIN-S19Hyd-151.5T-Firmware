// FUN_00022fd4 @ 00022fd4  size=160  callers=3
// program: cgminer


void FUN_00022fd4(sem_t *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char acStack_818 [2048];
  
  iVar2 = sem_post(param_1);
  if (iVar2 == 0) {
    return;
  }
  piVar1 = __errno_location();
  snprintf(acStack_818,0x800,"Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d",*piVar1,param_1,
           param_2,param_3,param_4);
  FUN_0001dd98(3,acStack_818,1);
  FUN_0003c34c(1);
  return;
}

