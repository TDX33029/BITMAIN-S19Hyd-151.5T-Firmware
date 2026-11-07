// FUN_00020090 @ 00020090  size=104  callers=0
// program: cgminer


void FUN_00020090(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  piVar1 = (undefined4 *)*param_1;
  piVar2 = *(int **)*param_1;
  while (param_1 != piVar1) {
    puVar3 = (undefined4 *)piVar1[1];
    piVar2[1] = (int)puVar3;
    *puVar3 = piVar2;
    free(piVar1 + -1);
    piVar1 = piVar2;
    piVar2 = (int *)*piVar2;
  }
  pthread_cond_destroy((pthread_cond_t *)(param_1 + 10));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
  free(param_1);
  return;
}

