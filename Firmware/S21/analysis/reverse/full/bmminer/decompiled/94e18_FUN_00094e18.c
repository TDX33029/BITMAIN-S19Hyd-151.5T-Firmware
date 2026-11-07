// FUN_00094e18 @ 00094e18  size=316  callers=3
// program: bmminer


void FUN_00094e18(void *param_1)

{
  void *pvVar1;
  void *local_10;
  uint local_c;
  
  if (param_1 == (void *)0x0) {
    FUN_00095b4c(2,"src/zc_hashtable.c",0x44,"a_table[%p] is NULL, just do nothing",0);
  }
  else {
    for (local_c = 0; local_c < *(uint *)((int)param_1 + 8); local_c = local_c + 1) {
      local_10 = *(void **)(*(int *)((int)param_1 + 4) + local_c * 4);
      while (local_10 != (void *)0x0) {
        pvVar1 = *(void **)((int)local_10 + 0x10);
        if (*(int *)((int)param_1 + 0x14) != 0) {
          (**(code **)((int)param_1 + 0x14))(*(undefined4 *)((int)local_10 + 4));
        }
        if (*(int *)((int)param_1 + 0x18) != 0) {
          (**(code **)((int)param_1 + 0x18))(*(undefined4 *)((int)local_10 + 8));
        }
        free(local_10);
        local_10 = pvVar1;
      }
    }
    if (*(int *)((int)param_1 + 4) != 0) {
      free(*(void **)((int)param_1 + 4));
    }
    free(param_1);
  }
  return;
}

