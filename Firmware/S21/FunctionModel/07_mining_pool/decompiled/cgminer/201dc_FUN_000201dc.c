// FUN_000201dc @ 000201dc  size=220  callers=1
// program: cgminer


int FUN_000201dc(int *param_1,timespec *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(param_1 + 3);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    FUN_0001f708("tq_pop",0x484);
  }
  piVar4 = (int *)*param_1;
  piVar3 = piVar4;
  if (param_1 == piVar4) {
    if (param_2 == (timespec *)0x0) {
      iVar1 = pthread_cond_wait((pthread_cond_t *)(param_1 + 10),__mutex);
    }
    else {
      iVar1 = pthread_cond_timedwait((pthread_cond_t *)(param_1 + 10),__mutex,param_2);
    }
    if (iVar1 != 0) {
      iVar1 = 0;
      goto LAB_00020230;
    }
    piVar3 = (int *)*param_1;
    if (piVar4 == piVar3) {
      iVar1 = 0;
      goto LAB_00020230;
    }
  }
  piVar4 = (int *)piVar3[1];
  iVar2 = *piVar3;
  iVar1 = piVar3[-1];
  *(int **)(iVar2 + 4) = piVar4;
  *piVar4 = iVar2;
  *piVar3 = 0;
  piVar3[1] = 0;
  free(piVar3 + -1);
LAB_00020230:
  FUN_0001f68c(__mutex,"tq_pop",0x49e);
  (*DAT_0006796c)();
  return iVar1;
}

