// FUN_00028518 @ 00028518  size=268  callers=0
// program: bmminer


void FUN_00028518(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[0x2b] != (void *)0x0) {
    free((void *)param_1[0x2b]);
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    free((void *)param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    free((void *)param_1[0x20]);
    param_1[0x20] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    free((void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    free((void *)param_1[0x14]);
    param_1[0x14] = 0;
  }
  if ((void *)param_1[0x16] != (void *)0x0) {
    free((void *)param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (0 < (int)param_1[4]) {
    iVar2 = 0;
    do {
      iVar1 = param_1[0x11] + iVar2 * 0x20;
      iVar2 = iVar2 + 1;
      free(*(void **)(iVar1 + 0xc));
      free(*(void **)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
    } while (iVar2 < (int)param_1[4]);
  }
  free((void *)param_1[0x11]);
  param_1[0x11] = 0;
  return;
}

