// FUN_00064e94 @ 00064e94  size=112  callers=12
// program: bmminer


void FUN_00064e94(int *param_1)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  __ptr = (void *)*param_1;
  if ((param_1[3] != 0) && (iVar2 = param_1[1], 0 < iVar2)) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      if (*(int *)((int)__ptr + iVar1) != 0) {
        (*(code *)param_1[3])();
        __ptr = (void *)*param_1;
        iVar2 = param_1[1];
      }
    } while (iVar3 < iVar2);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}

