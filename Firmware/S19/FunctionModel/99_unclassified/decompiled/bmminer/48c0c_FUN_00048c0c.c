// FUN_00048c0c @ 00048c0c  size=120  callers=3
// program: bmminer


undefined4 FUN_00048c0c(undefined4 *param_1)

{
  void *__ptr;
  void *local_c;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x1f5;
  }
  __ptr = (void *)FUN_0004939c(*param_1);
  if (__ptr != (void *)0x0) {
    FUN_000498b4(*(undefined4 *)((int)__ptr + 0x10),&local_c);
    free(local_c);
    FUN_00049928(*(undefined4 *)((int)__ptr + 0x10));
    FUN_000498b4(*(undefined4 *)((int)__ptr + 0x14),&local_c);
    free(local_c);
    FUN_00049928(*(undefined4 *)((int)__ptr + 0x14));
    free(__ptr);
  }
  return 0;
}

