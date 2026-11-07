// FUN_000947ac @ 000947ac  size=220  callers=12
// program: bmminer


void FUN_000947ac(int *param_1)

{
  int local_c;
  
  if (param_1 != (int *)0x0) {
    if (param_1[3] != 0) {
      for (local_c = 0; local_c < param_1[1]; local_c = local_c + 1) {
        if (*(int *)(*param_1 + local_c * 4) != 0) {
          (*(code *)param_1[3])(*(undefined4 *)(*param_1 + local_c * 4));
        }
      }
    }
    if (*param_1 != 0) {
      free((void *)*param_1);
    }
    free(param_1);
  }
  return;
}

