// FUN_0001602c @ 0001602c  size=168  callers=1
// program: bmminer


void FUN_0001602c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_000872a0 != '\0') {
    return;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
  iVar1 = DAT_00088840;
  param_2 = param_2 * 6;
  if (param_3 == 0) {
    *(undefined2 *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + 4) + param_2 + 4) = 0;
    *(undefined2 *)(*(int *)(*(int *)(iVar1 + param_1 * 4) + 8) + param_2 + 4) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
    return;
  }
  *(undefined2 *)(*(int *)(*(int *)(DAT_00088840 + param_1 * 4) + 4) + param_2 + 4) = 1;
  *(undefined2 *)(*(int *)(*(int *)(iVar1 + param_1 * 4) + 8) + param_2 + 4) = 1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
  return;
}

