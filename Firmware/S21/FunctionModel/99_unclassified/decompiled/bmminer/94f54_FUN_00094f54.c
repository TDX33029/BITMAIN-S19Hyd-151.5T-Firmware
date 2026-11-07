// FUN_00094f54 @ 00094f54  size=264  callers=1
// program: bmminer


void FUN_00094f54(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  uint local_c;
  
  for (local_c = 0; local_c < (uint)param_1[2]; local_c = local_c + 1) {
    local_10 = *(void **)(param_1[1] + local_c * 4);
    while (local_10 != (void *)0x0) {
      pvVar1 = *(void **)((int)local_10 + 0x10);
      if (param_1[5] != 0) {
        (*(code *)param_1[5])(*(undefined4 *)((int)local_10 + 4));
      }
      if (param_1[6] != 0) {
        (*(code *)param_1[6])(*(undefined4 *)((int)local_10 + 8));
      }
      free(local_10);
      local_10 = pvVar1;
    }
    *(undefined4 *)(param_1[1] + local_c * 4) = 0;
  }
  *param_1 = 0;
  return;
}

