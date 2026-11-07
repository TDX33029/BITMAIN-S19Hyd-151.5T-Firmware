// FUN_0003b668 @ 0003b668  size=116  callers=3
// program: bmminer


void FUN_0003b668(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *__ptr;
  undefined4 uVar1;
  void *pvVar2;
  
  __ptr = (void *)*param_2;
  while (__ptr != (void *)0x0) {
    pvVar2 = *(void **)((int)__ptr + 8);
    free(__ptr);
    __ptr = pvVar2;
  }
  FUN_0003a8c4(param_1);
  free(param_2);
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = param_3[2];
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = 2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_0003a96c(param_1);
  return;
}

