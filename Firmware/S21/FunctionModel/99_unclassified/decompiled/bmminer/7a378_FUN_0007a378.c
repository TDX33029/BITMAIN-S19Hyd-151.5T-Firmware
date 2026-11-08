// FUN_0007a378 @ 0007a378  size=72  callers=1
// program: bmminer


void FUN_0007a378(int *param_1)

{
  *(int *)(*param_1 + 4) = param_1[1];
  *(int *)param_1[1] = *param_1;
  return;
}

