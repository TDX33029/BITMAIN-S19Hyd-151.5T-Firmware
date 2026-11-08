// FUN_0003c13c @ 0003c13c  size=48  callers=2
// program: bmminer


void FUN_0003c13c(void *param_1)

{
  FUN_0003c0f8();
  close(*(int *)((int)param_1 + 100));
  FUN_0003a8c4(param_1);
  free(*(void **)((int)param_1 + 0x70));
  free(param_1);
  return;
}

