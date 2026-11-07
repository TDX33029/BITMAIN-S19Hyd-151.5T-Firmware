// FUN_0004b838 @ 0004b838  size=220  callers=0
// program: bmminer


int FUN_0004b838(int *param_1,timespec *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(param_1 + 3);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    FUN_0004ada4("tq_pop",0x486);
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
      goto LAB_0004b88c;
    }
    piVar3 = (int *)*param_1;
    if (piVar4 == piVar3) {
      iVar1 = 0;
      goto LAB_0004b88c;
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
LAB_0004b88c:
  FUN_0004ad28(__mutex,"tq_pop",0x4a0);
  (*DAT_000be768)();
  return iVar1;
}

