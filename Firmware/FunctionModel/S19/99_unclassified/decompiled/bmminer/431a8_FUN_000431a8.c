// FUN_000431a8 @ 000431a8  size=56  callers=1
// program: bmminer


void FUN_000431a8(int *param_1,int param_2,int param_3)

{
  memmove((void *)(param_2 + param_3 * 4),(void *)(param_2 + param_3 * 4 + 4),
          (*param_1 - param_3) * 4);
  *param_1 = *param_1 + -1;
  return;
}

